/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:06:14 by jcluzet           #+#    #+#             */
/*   Updated: 2022/10/07 14:58:03 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}

int main(void)
{
    Data data("RandomString");
	Data data2("eifoeirfuieirjdiew");

    uintptr_t ptr = serialize(&data);
    
    std::cout << "Serialize       : " << ptr << std::endl;
    std::cout << "Deserialize     : " << deserialize(ptr) << std::endl << std::endl;

    std::cout << "Re Serialize    : " << serialize(deserialize(ptr)) << std::endl;
    std::cout << "Re DeSerialize  : " << deserialize(serialize(deserialize(ptr))) << std::endl << std::endl;

    std::cout << "????????????    : " << deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(ptr))))))))))))))))))))))))) << std::endl << std::endl << std::endl;
    
	uintptr_t ptr2 = serialize(&data2);
    
    std::cout << "Serialize       : " << ptr2 << std::endl;
    std::cout << "Deserialize     : " << deserialize(ptr2) << std::endl << std::endl;

    std::cout << "Re Serialize    : " << serialize(deserialize(ptr2)) << std::endl;
    std::cout << "Re DeSerialize  : " << deserialize(serialize(deserialize(ptr2))) << std::endl << std::endl;

    std::cout << "????????????    : " << deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(ptr2))))))))))))))))))))))))) << std::endl;
	return (0);
}