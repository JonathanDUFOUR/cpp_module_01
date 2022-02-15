/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 06:47:06 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/13 14:41:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.hpp"

Zombie	*zombieHorde(int const n, std::string const &name)
{
	Zombie	*output;
	int		i;

	if (n < 0)
		return (NULL);
	output = new Zombie[n];
	if (!output)
		return NULL;
	for (i = 0 ; i < n ; ++i)
		output[i].setName(name);
	return output;
}