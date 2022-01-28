/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 08:54:16 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 12:50:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <fstream>
#include <iostream>

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

static int	__read_err(void)
{
	std::cerr
	<< "Error: cannot read file"
	<< std::endl;
	return EXIT_FAILURE;
}

static void	__sed(
	std::ifstream &ifs,
	std::ofstream &ofs,
	std::string const oldPattern,
	std::string const newPattern)
{
	std::string	content(
		(std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));
	std::size_t	i;
	std::size_t	j;

	i = 0;
	j = content.find(oldPattern.c_str(), i, oldPattern.length());
	while (j != content.npos)
	{
		content.erase(j, oldPattern.length());
		content.insert(j, newPattern, 0, newPattern.length());
		i += j + newPattern.length();
		j = content.find(oldPattern.c_str(), i, oldPattern.length());
	}
	ofs << content;
}

static int	__close_err(void)
{
	std::cerr
	<< "Error: cannot close file"
	<< std::endl;
	return EXIT_FAILURE;
}


int	main(int const ac, char const **av)
{
	std::string		filename;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (ac != 4)
		return __usage_err();
	filename = av[1];
	ifs.open(filename.c_str());
	if (ifs.fail())
		return __open_err();
	ifs.get();
	if (ifs.fail())
		return __read_err();
	ifs.seekg(ifs.beg);
	ofs.open(filename.append(".replace").c_str());
	if (ofs.fail())
	{
		ifs.close();
		return __open_err();
	}
	__sed(ifs, ofs, av[2], av[3]);
	ifs.close();
	if (ifs.fail())
		return __close_err();
	return EXIT_SUCCESS;
}
