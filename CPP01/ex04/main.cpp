/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:14:57 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/22 20:49:41 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string line, std::string oldString, std::string newString)
{
    int i = 0;

    while (line[i])
    {
        if (line[i] == oldString[0])
        {
            if (line.substr(i, oldString.size()) == oldString)
            {
                line.erase(i, oldString.size());
                line.insert(i, newString);
                i += newString.size();
            }
        }
        i++;
    }
    return (line);
}

int main(int argc, char **argv)
{
    if (argc != 4 || argv[2] == NULL || argv[3] == NULL)
    {
        std::cout << "Usage : ./sed [FILE_NAME] [STRING 1] [STRING 2]..." << std::endl;
        return (1);
    }
    
    std::fstream oldFile;
    std::fstream newFile;
    std::string line;
    std::string fileName = argv[1];
    std::string newFileName = fileName.append(".replace");

    oldFile.open(argv[1], std::ios::in);
    if (!oldFile)
    {
        std::cout << "Error, couldn't find file..." << std::endl;
        return (1);
    }
    newFile.open(newFileName.c_str(), std::ios::out);
    if (!newFile)
    {
        std::cout << "Error, couldn't open new file..." << std::endl;
        return (1);
    }
    while (!oldFile.eof())
    {
        getline(oldFile, line);
        newFile << replace(line, argv[2], argv[3]) << std::endl;
    }  
    oldFile.close();
    newFile.close();
    return (0);
}