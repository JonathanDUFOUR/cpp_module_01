/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:02:52 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 17:27:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "class/Karen.hpp"

int	main(void)
{
	Karen	k0;

	k0.complain(std::string("INFO"));
	k0.complain(std::string("ERROR"));
	k0.complain(std::string("DEBUG"));
	k0.complain(std::string("WARNING"));
	return EXIT_SUCCESS;
}
