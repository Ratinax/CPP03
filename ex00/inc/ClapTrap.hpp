/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:10:32 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/02 16:55:29 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define WHITEENDL   std::endl << WHITE
# define BLACK			"\033[30m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define MAGENTA		"\033[35m"
# define CYAN			"\033[36m"
# define WHITE			"\033[37m"
# define BOLDBLACK		"\033[1m\033[30m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

class	ClapTrap {

	private :
		std::string	_name;
		long		_hitPoints;
		long		_energyPoints;
		long		_attackDamage;
	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &c);
		ClapTrap &operator=(const ClapTrap &c);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
