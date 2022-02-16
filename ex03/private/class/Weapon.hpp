/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:59:47 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/16 00:31:52 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

# ifndef DEBUG
#  define DEBUG 0
# endif

class	Weapon
{
private:
	// Attributes
	std::string	_type;

public:
	// Constructors
	Weapon(void);
	Weapon(std::string const &type);

	// Destructors
	~Weapon(void);

	// Accessors
	std::string const	&getType(void) const;

	void				setType(std::string const &type);
};

#endif
