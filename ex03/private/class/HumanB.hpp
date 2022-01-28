/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:59:03 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/21 19:15:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
private:
	// Attributes
	std::string	_name;
	Weapon		*_weapon;

public:
	// Constructors
	HumanB(void);
	HumanB(std::string const name);

	// Destructors
	~HumanB(void);

	// Accessors
	void		setName(std::string const name);
	void		setWeapon(Weapon &weapon);

	std::string	getName(void) const;
	Weapon		*getWeapon(void) const;

	// Member functions
	void	attack(void) const;
};

#endif
