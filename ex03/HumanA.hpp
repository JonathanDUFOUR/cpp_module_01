/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:54:23 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 08:41:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
private:
	// Attributes
	std::string	_name;
	Weapon		*_weapon;

public:
	// Constructors
	HumanA(void);
	HumanA(std::string const name, Weapon &weapon);

	// Destructors
	~HumanA(void);

	// Accessors
	void		setName(std::string const name);
	void		setWeapon(Weapon &weapon);

	std::string	getName(void) const;
	Weapon		*getWeapon(void) const;

	// Methods
	void	attack(void) const;
};

#endif
