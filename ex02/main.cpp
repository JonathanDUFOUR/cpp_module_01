/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:34:38 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 07:46:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>

int	main(void)
{
	std::string const			str = "HI THIS IS BRAIN";
	std::string const *const	stringPTR = &str;
	std::string const			&stringREF = str;

	// Display the string address
	std::cout << "      &str: " << &str << std::endl;
	std::cout << " stringPTR: " << stringPTR << std::endl;
	std::cout << "&stringREF: " << &stringREF << std::endl;

	// Display the string content
	std::cout << "       str: " << str << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << " stringREF: " << stringREF << std::endl;
	return EXIT_SUCCESS;
}
