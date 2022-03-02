/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 06:49:25 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/01 18:31:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "class/Zombie.hpp"

typedef unsigned int	uint;

Zombie	*zombieHorde(uint const n, std::string const &name);

int	main(void)
{
	Zombie		*horde;
	uint		idx;
	uint const	n(7);

	horde = zombieHorde(n, std::string("Vol'jin"));
	if (!horde)
	{
		std::cerr << "Error: zombieHorde() failed" << std::endl;
		return EXIT_FAILURE;
	}
	for (idx = 0 ; idx < n ; ++idx)
		horde[idx].announce();
	delete[] horde;
	return EXIT_SUCCESS;
}
