/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 05:11:09 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 06:35:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Zombie.hpp"

Zombie	*newZombie(std::string const name);
void	randomChump(std::string const name);

int	main(void)
{
	Zombie	*const	z0 = newZombie("Illidan");
	Zombie	*const	z1 = newZombie("Thrall");
	Zombie	z2("Sylvanas");
	Zombie	z3("Uther");

	z0->announce();
	z1->announce();
	z2.announce();
	z3.announce();
	delete(z0);
	randomChump("Anduin");
	delete(z1);
	return (EXIT_SUCCESS);
}
