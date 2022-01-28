/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 06:49:25 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/28 20:52:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "class/Zombie.hpp"

Zombie	*zombieHorde(int const n, std::string const name);

int	main(void)
{
	Zombie		*horde;
	int const	n = 7;
	int			i;

	horde = zombieHorde(n, "Vol'jin");
	if (!horde)
	{
		std::cerr << "Error: zombieHorde() failed" << std::endl;
		return EXIT_FAILURE;
	}
	for (i = 0 ; i < n ; ++i)
		horde[i].announce();
	delete[] horde;
	return EXIT_SUCCESS;
}
