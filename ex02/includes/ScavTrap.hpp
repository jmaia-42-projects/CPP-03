/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:19:59 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 18:03:17 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# define SCAV_TRAP_DEFAULT_HIT_POINTS 100
# define SCAV_TRAP_DEFAULT_ENERGY_POINTS 50
# define SCAV_TRAP_DEFAULT_ATTACK_DAMAGE 20

# include <string>

# include "ClapTrap.hpp"

class	ScavTrap:	public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &obj);

		void	attack(std::string const &target);
		void	guardGuate(void);
};

#endif
