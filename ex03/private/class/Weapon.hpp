/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:59:47 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 09:55:37 by jodufour         ###   ########.fr       */
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
	Weapon(std::string const &type = std::string("defaultType"));
	Weapon(Weapon const &src);

	// Destructors
	~Weapon(void);

	// Accessors
	std::string const	&getType(void) const;

	void				setType(std::string const &type);
};

#endif
