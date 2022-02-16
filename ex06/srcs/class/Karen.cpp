/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:07:38 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/16 00:37:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/Karen.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Karen::Karen(void)
{
	if (DEBUG)
		std::cout
		<< "Creating Karen"
		<< std::endl;
}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Karen::~Karen(void)
{
	if (DEBUG)
		std::cout
		<< "Destroying Karen"
		<< std::endl;
}

// ************************************************************************** //
//                          Private Member Functions                          //
// ************************************************************************** //

void	Karen::debug(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Karen::debug()"
		<< std::endl;
	std::cout << "[ DEBUG ]"
	<< std::endl
	<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-specia\
l-ketchup burger."
	<< std::endl
	<< "I just love it!"
	<< std::endl;
}

void	Karen::info(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Karen::info()"
		<< std::endl;
	std::cout << "[ INFO ]"
	<< std::endl
	<< "I cannot believe adding extra bacon cost more money."
	<< std::endl
	<< "You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void	Karen::warning(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Karen::warning()"
		<< std::endl;
	std::cout << "[ WARNING ]"
	<< std::endl
	<< "I think I deserve to have some extra bacon for free."
	<< std::endl
	<< "I’ve been coming here for years and you just started working here last \
month."
	<< std::endl;
}

void	Karen::error(void) const
{
	if (DEBUG)
		std::cout
		<< "Calling Karen::error()"
		<< std::endl;
	std::cout << "[ ERROR ]"
	<< std::endl
	<< "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Karen::complain(std::string const &lvl) const
{
	int	i;

	if (DEBUG)
		std::cout
		<< "Calling Karen::complain()"
		<< std::endl;
	for (i = 0 ; Karen::_lookup[i].fct && Karen::_lookup[i].key.compare(lvl) ; ++i);
	// if (Karen::_lookup[i].fct)
	// 	while (Karen::_lookup[i].fct)
	// 		(this->*Karen::_lookup[i++].fct)();
	// else
	// 	std::cout
	// 	<< "[ Probably complaining about insignificant problems ]"
	// 	<< std::endl;
	switch (i)
	{
	case 0:
		this->debug();
		std::cout << std::endl;
	case 1:
		this->info();
		std::cout << std::endl;
	case 2:
		this->warning();
		std::cout << std::endl;
	case 3:
		this->error();
		std::cout << std::endl;
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
		break ;
	}
}

// ************************************************************************** //
//                             Private Attributes                             //
// ************************************************************************** //

t_keyval const	Karen::_lookup[] = {
	{std::string("DEBUG"), &Karen::debug},
	{std::string("INFO"), &Karen::info},
	{std::string("WARNING"), &Karen::warning},
	{std::string("ERROR"), &Karen::error},
	{std::string(""), NULL}
};
