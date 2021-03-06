/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:03:29 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/17 09:56:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

# ifndef DEBUG
#  define DEBUG 0
# endif

class Karen;

typedef void			(Karen::*t_fct)(void) const;
typedef struct s_keyval	t_keyval;

struct s_keyval
{
	std::string const	key;
	t_fct const			fct;
};

class Karen
{
private:
	// Attributes
	static t_keyval const	_lookup[];

	// Member functions
	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;

public:
	// Constructors
	Karen(void);
	Karen(Karen const &src);

	// Destructors
	~Karen(void);

	// Member functions
	void	complain(std::string const &lvl) const;
};

#endif
