/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 05:14:56 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/21 19:16:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Zombie::Zombie(void) :
	_name("defaultName") {}

Zombie::Zombie(std::string const name) :
	_name(name) {}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Zombie::~Zombie(void)
{
	std::cout << "R.I.P. " << this->_name << std::endl;
}

// ************************************************************************* //
//                                 Accessors                                 //
// ************************************************************************* //

std::string	Zombie::getName(void) const
{
	return this->_name;
}

void	Zombie::setName(std::string const name)
{
	this->_name = name;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Zombie::announce(void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
