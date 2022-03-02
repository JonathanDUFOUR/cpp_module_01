/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 06:47:06 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 21:00:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.hpp"

typedef unsigned int	uint;

Zombie	*zombieHorde(uint const n, std::string const &name)
{
	Zombie	*output;
	uint	idx(0U);

	output = new Zombie[n];
	if (!output)
		return NULL;
	for ( ; idx < n ; ++idx)
		output[idx].setName(name);
	return output;
}
