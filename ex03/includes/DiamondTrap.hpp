/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:00:46 by jmaia             #+#    #+#             */
/*   Updated: 2022/05/28 17:55:50 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap:	public FragTrap, public ScavTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &obj);
		~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &obj);

		void	whoAmI(void);
};

#endif
