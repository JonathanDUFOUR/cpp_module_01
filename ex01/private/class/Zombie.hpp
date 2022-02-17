/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 05:15:10 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 04:22:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

# ifndef DEBUG
#  define DEBUG 0
# endif

class	Zombie
{
private:
	// Attributes
	std::string	_name;

public:
	// Constructors
	Zombie(std::string const &name = std::string("defaultName"));

	// Destructors
	~Zombie(void);

	// Accessors
	void	setName(std::string const &name);

	// Member functions
	void	announce(void) const;
};

#endif
