/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:11:53 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/06 14:30:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Karen.hpp"

static int	__usage_err(void)
{
	std::cerr
	<< "Error: wrong usage"
	<< std::endl
	<< "Usage: ./karenFilter <level>"
	<< std::endl;
	return EXIT_FAILURE;
}

int	main(int const ac, char const **av)
{
	Karen	k0;

	if (ac != 2)
		return __usage_err();
	k0.complain(av[1]);
	return EXIT_SUCCESS;
}
