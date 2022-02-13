/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:34:38 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/13 14:46:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>

int	main(void)
{
	std::string const			stringRAW = "HI THIS IS BRAIN";
	std::string const *const	stringPTR = &stringRAW;
	std::string const			&stringREF = stringRAW;

	// Display the string address
	std::cout << "&stringRAW: " << &stringRAW << std::endl;
	std::cout << " stringPTR: " << stringPTR << std::endl;
	std::cout << "&stringREF: " << &stringREF << std::endl;

	// Display the string content
	std::cout << " stringRAW: " << stringRAW << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << " stringREF: " << stringREF << std::endl;
	return EXIT_SUCCESS;
}
