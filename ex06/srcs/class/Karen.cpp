/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:07:38 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/29 00:25:37 by jodufour         ###   ########.fr       */
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

// ************************************************************************* //
//                          Public Member Functions                          //
// ************************************************************************* //

void	Karen::complain(std::string const lvl) const
{
	std::string const	lvl_arr[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	// void (Karen::*fct_arr[4])(void) const = {
	// 	&Karen::debug,
	// 	&Karen::info,
	// 	&Karen::warning,
	// 	&Karen::error
	// };
	std::size_t	i;

	for (i = 0 ; i < 4 && lvl.compare(lvl_arr[i]) ; ++i);
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
		return ;
	}
	// while (i < 4)
	// {
	// 	(this->*fct_arr[i])();
	// 	if (++i < 4)
	// 		std::cout << std::endl;
	// }
	switch (i)
	{
	case 0:
		this->debug();
		std::cout << std::endl;
		this->info();
		std::cout << std::endl;
		this->warning();
		std::cout << std::endl;
		this->error();
		std::cout << std::endl;
		break ;
	case 1:
		this->info();
		std::cout << std::endl;
		this->warning();
		std::cout << std::endl;
		this->error();
		std::cout << std::endl;
		break ;
	case 2:
		this->warning();
		std::cout << std::endl;
		this->error();
		std::cout << std::endl;
		break ;
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
//                          Private Member Functions                          //
// ************************************************************************** //

void	Karen::debug(void) const
{
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
	std::cout << "[ INFO ]"
	<< std::endl
	<< "I cannot believe adding extra bacon cost more money."
	<< std::endl
	<< "You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void	Karen::warning(void) const
{
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
	std::cout << "[ ERROR ]"
	<< std::endl
	<< "This is unacceptable, I want to speak to the manager now."
	<< std::endl;
}
