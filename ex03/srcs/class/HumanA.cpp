/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:53:56 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/13 15:58:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/HumanA.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

HumanA::HumanA(std::string const &name, Weapon &weapon) :
	_name(name),
	_weapon(weapon) {}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

HumanA::~HumanA(void) {}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&HumanA::getName(void) const
{
	return this->_name;
}

Weapon const	&HumanA::getWeapon(void) const
{
	return this->_weapon;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	HumanA::attack(void) const
{
	std::cout
	<< this->_name
	<< " attacks with their "
	<< this->_weapon.getType()
	<< std::endl;
}
