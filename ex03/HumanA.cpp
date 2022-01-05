/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:53:56 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 08:42:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

HumanA::HumanA(void) :
	_name("defaultName")
{
	this->_weapon->setType("defaultWeapon");
}

HumanA::HumanA(std::string const name, Weapon &weapon) :
	_name(name),
	_weapon(&weapon) {}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

HumanA::~HumanA(void) {}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

void	HumanA::setName(std::string const name)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string	HumanA::getName(void) const
{
	return this->_name;
}

Weapon	*HumanA::getWeapon(void) const
{
	return this->_weapon;
}

// ************************************************************************** //
//                               Public Methods                               //
// ************************************************************************** //

void	HumanA::attack(void) const
{
	std::cout
	<< this->_name
	<< " attacks with his "
	<< this->_weapon->getType()
	<< std::endl;
}
