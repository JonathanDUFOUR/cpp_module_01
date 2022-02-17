/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:54:23 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 04:32:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# ifndef DEBUG
#  define DEBUG 0
# endif

class	HumanA
{
private:
	// Attributes
	std::string const	_name;
	Weapon				&_weapon;

public:
	// Constructors
	HumanA(std::string const &name, Weapon &weapon);

	// Destructors
	~HumanA(void);

	// Accessors
	std::string const	&getName(void) const;
	Weapon const		&getWeapon(void) const;

	void				setWeapon(Weapon &weapon);

	// Member functions
	void	attack(void) const;
};

#endif
