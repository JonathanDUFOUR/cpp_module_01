/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:59:32 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/21 19:18:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

HumanB::HumanB(void) :
	_name("defaultName") {}

HumanB::HumanB(std::string const name) :
	_name(name) {}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

HumanB::~HumanB(void) {}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

void	HumanB::setName(std::string const name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string	HumanB::getName(void) const
{
	return this->_name;
}

Weapon	*HumanB::getWeapon(void) const
{
	return this->_weapon;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	HumanB::attack(void) const
{
	if (this->_weapon->getType().empty())
		return ;
	std::cout
	<< this->_name
	<< " attacks with his "
	<< this->_weapon->getType()
	<< std::endl;
}
