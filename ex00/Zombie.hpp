/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 05:15:10 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/28 19:31:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
private:
	// Attributes
	std::string _name;

public:
	// Constructors
	Zombie(void);
	Zombie(std::string const name);

	// Destructors
	~Zombie(void);

	// Accessors
	void		setName(std::string const name);

	std::string	getName(void) const;

	// Member functions
	void	announce(void) const;
};

#endif
