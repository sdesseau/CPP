/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:25:20 by sdesseau          #+#    #+#             */
/*   Updated: 2022/11/01 17:03:10 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "Test with MutantStack :" << std::endl << std::endl;
    {
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        
        std::cout << "Top of MutantStack: " << mstack.top() << std::endl;
        std::cout << "Size of MutantStack: " << mstack.size() << std::endl;
    
        mstack.pop();
        std::cout << "Pop()" << std::endl;
    
        std::cout << "Top of MutantStack: " << mstack.top() << std::endl;
        std::cout << "Size of MutantStack: " << mstack.size() << std::endl;
    
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        
        std::cout << "Test iterators :" << std::endl;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    
        std::cout << std::endl << "Test const_iterators :" << std::endl;
        MutantStack<int>::const_iterator it_const = mstack.begin();
        MutantStack<int>::const_iterator ite_const = mstack.end();
        
        ++it_const;
        --it_const;
        
        while (it_const != ite_const)
        {
            std::cout << *it_const << std::endl;
            ++it_const;
        }
        std::stack<int> s_const(mstack);
    }
    

    std::cout << std::endl << std::endl << "Test with std::list :" << std::endl << std::endl;
    {
        std::list<int> mstack;
        
        mstack.push_back(5);
        mstack.push_back(17);
        
        std::cout << "Top of std::list: " << mstack.back() << std::endl;
        std::cout << "Size of std::list: " << mstack.size() << std::endl;
    
        mstack.pop_back();
        std::cout << "Pop_back()" << std::endl;
    
        std::cout << "Top of std::list: " << mstack.back() << std::endl;
        std::cout << "Size of std::list: " << mstack.size() << std::endl;
    
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        
        std::cout << "Test iterators :" << std::endl;
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(mstack);
    
        std::cout << std::endl << "Test const_iterators :" << std::endl;
        std::list<int>::const_iterator it_const = mstack.begin();
        std::list<int>::const_iterator ite_const = mstack.end();
    
        ++it_const;
        --it_const;
    
        while (it_const != ite_const)
        {
            std::cout << *it_const << std::endl;
            ++it_const;
        }
        std::list<int> s_const(mstack);
    }
    return 0;
}