/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:59:32 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/13 15:59:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/HumanB.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

HumanB::HumanB(std::string const &name) :
	_name(name),
	_weapon(NULL) {}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

HumanB::~HumanB(void) {}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&HumanB::getName(void) const
{
	return this->_name;
}

Weapon const	*HumanB::getWeapon(void) const
{
	return this->_weapon;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	HumanB::attack(void) const
{
	if (!this->_weapon)
		return ;
	std::cout
	<< this->_name
	<< " attacks with their "
	<< this->_weapon->getType()
	<< std::endl;
}
