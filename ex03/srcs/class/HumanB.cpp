/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:59:32 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/15 23:59:00 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/HumanB.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

HumanB::HumanB(std::string const &name) :
	_name(name),
	_weapon(NULL)
{
	if (DEBUG)
		std::cout
		<< "Creating HumanB "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

HumanB::~HumanB(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying HumanB "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&HumanB::getName(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling HumanB::getName()"
		<< std::endl;
	return this->_name;
}

Weapon const	*HumanB::getWeapon(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling HumanB::getWeapon()"
		<< std::endl;
	return this->_weapon;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	if (DEBUG)
		std::cout
		<< "Calling HumanB::setWeapon()"
		<< std::endl;
	this->_weapon = &weapon;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	HumanB::attack(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling HumanB::attack()"
		<< std::endl;
	if (!this->_weapon)
		return ;
	std::cout
	<< this->_name
	<< " attacks with their "
	<< this->_weapon->getType()
	<< std::endl;
}
