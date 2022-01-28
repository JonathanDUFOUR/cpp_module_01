/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 05:11:09 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/28 20:49:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "class/Zombie.hpp"

Zombie	*newZombie(std::string const name);
void	randomChump(std::string const name);

int	main(void)
{
	Zombie	*z0;
	Zombie	*z1;
	Zombie	z2("Sylvanas");
	Zombie	z3("Uther");

	z0 = newZombie("Illidan");
	if (!z0)
	{
		std::cerr << "Error: newZombie() failed" << std::endl;
		return EXIT_FAILURE;
	}
	z1 = newZombie("Thrall");
	if (!z1)
	{
		delete z0;
		std::cerr << "Error: newZombie() failed" << std::endl;
		return EXIT_FAILURE;
	}
	z0->announce();
	z1->announce();
	z2.announce();
	z3.announce();
	delete z0;
	randomChump("Anduin");
	delete z1;
	return EXIT_SUCCESS;
}
