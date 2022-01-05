/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:07:38 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 14:23:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

// ************************************************************************** //
//                                Constructors                                //
// ************************************************************************** //

Karen::Karen(void) {}

// ************************************************************************* //
//                                Destructors                                //
// ************************************************************************* //

Karen::~Karen(void) {}

// ************************************************************************** //
//                               Public Methods                               //
// ************************************************************************** //

void	Karen::complain(std::string const lvl) const
{
	std::string const	lvl_arr[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void (Karen::*fct_arr[4])(void) const = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::size_t	i;

	for (i = 0 ; i < 4 && lvl.compare(lvl_arr[i]) ; ++i);
	if (i < 4)
		(this->*fct_arr[i])();
}

// ************************************************************************* //
//                              Private Methods                              //
// ************************************************************************* //

void	Karen::debug(void) const
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic\
kle-special-ketchup burger. I just love it!"
	<< std::endl;
}

void	Karen::info(void) const
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’\
t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve bee\
ncoming here for years and you just started working here last month."
	<< std::endl;
}

void	Karen::error(void) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}

