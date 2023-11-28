/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 07:45:04 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/28 07:45:04 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
    // std::cout << "ScavTrap : Default constructor Called " << std::endl; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap : constructor update Called" << std::endl;
    hitPoint = 100;
    energyPoint = 100;
    attckDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &object) : ClapTrap(object)
{
    std::cout << "ScavTrap : Copy constructor called !!!" << std::endl;
    *this = object;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &Trap)
{
    if (this != &Trap)
    {
        std::cout << "ScavTrap Assignement operator Called" << std::endl;
        name = Trap.name;
        hitPoint = Trap.hitPoint;
        energyPoint = Trap.energyPoint;
        attckDamage = Trap.attckDamage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    ScavTrap::~ClapTrap();
    std::cout << "ScavTrap : destructor Called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap" << this->name << " Gate Guard mode actived !!!" << std::endl;
}
