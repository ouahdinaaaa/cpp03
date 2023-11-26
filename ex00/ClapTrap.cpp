/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClacTRap.Cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:25:24 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/26 23:25:24 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


ClapTrap:: ClapTrap()
{
    std::cout << "created creator" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoint(10), energyPoint(10), attckDamage(10) 
{
    std::cout << "created creator update: " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->energyPoint > 0 && this->hitPoint > 0)
    {
        std::cout << "ClapTrap : "  << target << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ClapTrap : " << target << " We have not PointEnergy : " << std::endl; 
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint > 0)
    {
        this->hitPoint -= amount;
        if (this->hitPoint > 0)
            std::cout << "ClapTrap : " << this->name << " takes : " << amount << " : damage attack !!!" << std::endl; 
        else
            std::cout << "ClapTrap : " << this->name << " is now defeat we have not point of healthy" << std::endl;
    }
    else
        std::cout << "ClapTrap : " << this->name << " we can't take damage !!!!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoint > 0 && this->energyPoint > 0)
    {
        std::cout << "be Repair" << std::endl;
        this->hitPoint += amount;
        std::cout << "ClapTrap : " << this->name << "is repared for : " << this->hitPoint << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ClapTrap : " << name << "can't reapired becoup have not point of energy" << std::endl;
}