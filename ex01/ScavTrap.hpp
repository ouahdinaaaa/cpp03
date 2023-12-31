/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SavTrap.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:42:02 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/28 07:42:02 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef SCAVTRAP_HPP
 #define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    private:

    public:

    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap &object);
    ScavTrap   &operator=(const ScavTrap &Trap);

    void        guardGate();
};


 #endif