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

# ifndef CLACTRAP.HPP
# define CLACTRAP.HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cmath>

class ClapTrap
{
    private:
    std::string name;
    int         hitPoint;
    int         energyPoint;
    int         attckDamage;

    public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ClapTrap(std::string name);
    ~ClapTrap();
};


#endif