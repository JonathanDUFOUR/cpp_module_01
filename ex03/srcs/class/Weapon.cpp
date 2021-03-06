/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 08:01:37 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 09:55:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/Weapon.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Weapon::Weapon(std::string const &type) :
	_type(type)
{
	if (DEBUG)
		std::cout
		<< "Creating Weapon "
		<< this->_type
		<< std::endl;
}

Weapon::Weapon(Weapon const &src) :
	_type(src._type)
{
	if (DEBUG)
		std::cout
		<< "Creating Weapon "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Weapon::~Weapon(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Weapon "
		<< this->_type
		<< std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string const	&Weapon::getType(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Weapon::getType()"
		<< std::endl;
	return this->_type;
}

void	Weapon::setType(std::string const &type)
{
	if (DEBUG)
		std::cout
		<< "Calling Weapon::setType()"
		<< std::endl;
	this->_type = type;
}
