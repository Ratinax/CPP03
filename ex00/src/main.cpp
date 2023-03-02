/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:10:59 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/02 16:53:57 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap unnamed;
	ClapTrap roger("Roger");
	ClapTrap rogersBrother(roger);

	unnamed.attack("Patrick");
	for (int i = 0; i < 10; i++)
		roger.attack("Patrick");
	roger.attack("Patrick");
	roger.beRepaired(10);
	std::cout << WHITE << "----------------" << WHITEENDL;
	rogersBrother.beRepaired(5);
	rogersBrother.takeDamage(6);
	rogersBrother.beRepaired(12);
	std::cout << WHITE << "----------------" << WHITEENDL;
	rogersBrother.takeDamage(21);
	rogersBrother.takeDamage(21);
	rogersBrother.beRepaired(21);
	rogersBrother.attack("Patrick");
	return (0);
}
