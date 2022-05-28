/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 12:15:59 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 15:58:28 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	{
		ClapTrap	cTrap("Alice");

		std::cout << cTrap << std::endl;

		cTrap.attack("Bob");
		cTrap.attack("J");
		cTrap.attack("");

		std::cout << cTrap << std::endl;

		cTrap.takeDamage(3);
		cTrap.takeDamage(1);
		cTrap.takeDamage(0);

		std::cout << cTrap << std::endl;

		cTrap.beRepaired(12);
		cTrap.beRepaired(0);

		std::cout << cTrap << std::endl;

		cTrap.beRepaired(-2);
		cTrap.takeDamage(-2);
		cTrap.beRepaired(1);
		cTrap.beRepaired(1);
		cTrap.beRepaired(1);
		cTrap.beRepaired(1);
		std::cout << cTrap << std::endl;
		cTrap.beRepaired(1);
		cTrap.beRepaired(1);
		cTrap.attack("John");

		cTrap = ClapTrap("Carol");
		cTrap.takeDamage(100);
		cTrap.attack("A");
		cTrap.beRepaired(1);
	}

	std::cout << "### ScavTrap ###" << std::endl;

	{
		ScavTrap	sTrap("Dave");

		std::cout << sTrap << std::endl;
		sTrap.attack("Eve");
		sTrap.guardGuate();
	}

	std::cout << "### FragTrap ###" << std::endl;
	{
		FragTrap	fTrap("Fiona");
		std::cout << fTrap << std::endl;
		fTrap.highFiveGuys();
	}
}
