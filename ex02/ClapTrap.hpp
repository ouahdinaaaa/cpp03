/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClacTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:22:21 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/11/26 23:22:21 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cmath>

class ClapTrap
{
    protected :
    std::string name;
    int         hitPoint;
    int         energyPoint;
    int         attckDamage;

    public:
    // void     get_clap(std::string target);
    void     beRepaired(unsigned int amount);
    void     takeDamage(unsigned int amount);
    void     attack(const std::string& target);
    ClapTrap &operator= (const ClapTrap& object);

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &Trap);
    ~ClapTrap();
};


#endif