/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:07:38 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/13 20:32:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/Karen.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Karen::Karen(void) {}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Karen::~Karen(void) {}

// ************************************************************************** //
//                          Private Member Functions                          //
// ************************************************************************** //

void	Karen::debug(void) const
{
	std::cout << "[DEBUG]"
	<< std::endl
	<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-specia\
l-ketchup burger."
	<< std::endl
	<< "I just love it!"
	<< std::endl;
}

void	Karen::info(void) const
{
	std::cout << "[INFO]"
	<< std::endl
	<< "I cannot believe adding extra bacon cost more money."
	<< std::endl
	<< "You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "[WARNING]"
	<< std::endl
	<< "I think I deserve to have some extra bacon for free."
	<< std::endl
	<< "I’ve been coming here for years and you just started working here last \
month."
	<< std::endl;
}

void	Karen::error(void) const
{
	std::cout << "[ERROR]"
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

	for (i = 0 ; Karen::g_lookup[i].fct && Karen::g_lookup[i].key.compare(lvl) ; ++i);
	if (Karen::g_lookup[i].fct)
		(this->*Karen::g_lookup[i].fct)();
}

// ************************************************************************** //
//                             Private Attributes                             //
// ************************************************************************** //

t_keyval const	Karen::g_lookup[] = {
	{std::string("DEBUG"), &Karen::debug},
	{std::string("INFO"), &Karen::info},
	{std::string("WARNING"), &Karen::warning},
	{std::string("ERROR"), &Karen::error},
	{std::string(""), NULL}
};