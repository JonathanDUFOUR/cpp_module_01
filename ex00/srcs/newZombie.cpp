/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 05:15:28 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 03:11:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Zombie.hpp"

Zombie	*newZombie(std::string const &name)
{
	Zombie	*output;

	output = new Zombie(name);
	if (!output)
		return NULL;
	return output;
}
