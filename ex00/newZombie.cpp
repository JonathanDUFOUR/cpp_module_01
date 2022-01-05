/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 05:15:28 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 07:06:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string const name)
{
	Zombie	*output;

	output = new Zombie;
	if (!output)
		return NULL;
	output->setName(name);
	return output;
}
