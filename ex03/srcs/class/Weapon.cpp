/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 08:01:37 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/13 16:06:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Weapon.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Weapon::Weapon(void) {}

Weapon::Weapon(std::string const &type) :
	_type(type) {}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Weapon::~Weapon(void) {}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string const &type)
{
	this->_type = type;
}
