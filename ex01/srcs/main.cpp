/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 06:49:25 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 21:00:33 by jodufour         ###   ########.fr       */
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
	uint		idx(0U);
	uint const	n(7U);

	horde = zombieHorde(n, std::string("Vol'jin"));
	if (!horde)
	{
		std::cerr << "Error: zombieHorde() failed" << std::endl;
		return EXIT_FAILURE;
	}
	for ( ; idx < n ; ++idx)
		horde[idx].announce();
	delete[] horde;
	return EXIT_SUCCESS;
}
