/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:02:52 by jodufour          #+#    #+#             */
/*   Updated: 2022/01/05 13:19:54 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Karen.hpp"

int	main(void)
{
	Karen	k0;

	k0.complain("INFO");
	k0.complain("ERROR");
	k0.complain("DEBUG");
	k0.complain("WARNING");
	return EXIT_SUCCESS;
}
