/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:59:03 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/13 15:54:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
private:
	// Attributes
	std::string const	_name;
	Weapon				*_weapon;

public:
	// Constructors
	HumanB(std::string const &name);

	// Destructors
	~HumanB(void);

	// Accessors
	std::string const	&getName(void) const;
	Weapon const		*getWeapon(void) const;

	void				setWeapon(Weapon &weapon);

	// Member functions
	void	attack(void) const;
};

#endif
