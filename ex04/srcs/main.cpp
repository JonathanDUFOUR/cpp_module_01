/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 08:54:16 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/15 04:37:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

static int	__usage_err(void)
{
	std::cerr
	<< "Error: wrong usage"
	<< std::endl
	<< "Usage: ./replace <fileName> <oldPattern> <newPattern>"
	<< std::endl;
	return EXIT_FAILURE;
}

static int	__open_err(void)
{
	std::cerr
	<< "Error: cannot open file"
	<< std::endl;
	return EXIT_FAILURE;
}

static std::string	__sed(std::string content, std::string const &oldPattern,
	std::string const &newPattern)
{
	std::size_t	i;

	i = content.find(oldPattern.c_str(), 0, oldPattern.length());
	while (i != std::string::npos)
	{
		content.erase(i, oldPattern.length());
		content.insert(i, newPattern);
		i = content.find(oldPattern.c_str(), i + newPattern.length(),
			oldPattern.length());
	}
	return content;
}

int	main(int const ac, char const **av)
{	
	std::string			filename;
	std::ifstream		ifs;
	std::ofstream		ofs;
	std::stringstream	buff;

	if (ac != 4 || !av[2][0] || !av[3][0])
		return __usage_err();
	filename = av[1];
	ifs.open(filename.c_str());
	if (ifs.fail())
		return __open_err();
	ofs.open(filename.append(".replace").c_str());
	if (ofs.fail())
	{
		ifs.close();
		return __open_err();
	}
	buff << ifs.rdbuf();
	ofs << __sed(buff.str(), std::string(av[2]), std::string(av[3]));
	ifs.close();
	ofs.close();
	return EXIT_SUCCESS;
}
