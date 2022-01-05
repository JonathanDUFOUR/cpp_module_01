/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:59:47 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 08:04:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon
{
private:
	// Attributes
	std::string	_type;

public:
	// Constructors
	Weapon(void);
	Weapon(std::string const type);

	// Destructors
	~Weapon(void);

	// Accessors
	void		setType(std::string const type);

	std::string	getType(void) const;
};

#endif
