/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:53:56 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 09:54:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/HumanA.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

HumanA::HumanA(std::string const &name, Weapon &weapon) :
	_name(name),
	_weapon(weapon)
{
	if (DEBUG)
		std::cout
		<< "Creating HumanA "
		<< this->_name
		<< std::endl;
}

HumanA::HumanA(HumanA const &src) :
	_name(src._name),
	_weapon(src._weapon)
{
	if (DEBUG)
		std::cout
		<< "Creating HumanA "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

HumanA::~HumanA(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying HumanA "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&HumanA::getName(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling HumanA::getName()"
		<< std::endl;
	return this->_name;
}

Weapon const	&HumanA::getWeapon(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling HumanA::getWeapon()"
		<< std::endl;
	return this->_weapon;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	if (DEBUG)
		std::cout
		<< "Calling HumanA::setWeapon()"
		<< std::endl;
	this->_weapon = weapon;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	HumanA::attack(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling HumanA::attack()"
		<< std::endl;
	std::cout
	<< this->_name
	<< " attacks with their "
	<< this->_weapon.getType()
	<< std::endl;
}
