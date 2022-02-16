/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 05:14:56 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/15 23:59:00 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/Zombie.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Zombie::Zombie(void) :
	_name(std::string("defaultName"))
{
	if (DEBUG)
		std::cout
		<< "Creating Zombie "
		<< this->_name
		<< std::endl;
}

Zombie::Zombie(std::string const &name) :
	_name(name)
{
	if (DEBUG)
		std::cout
		<< "Creating Zombie "
		<< this->_name
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Zombie::~Zombie(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Zombie "
		<< this->_name
		<< std::endl;
	std::cout << "R.I.P. " << this->_name << std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

void	Zombie::setName(std::string const &name)
{
	if (DEBUG)
		std::cout
		<< "Calling Zombie::setName()"
		<< std::endl;
	this->_name = name;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Zombie::announce(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Zombie::announce()"
		<< std::endl;
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
