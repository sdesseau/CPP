/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdesseau <sdesseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:35:21 by sdesseau          #+#    #+#             */
/*   Updated: 2022/09/11 13:04:36 by sdesseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//GETTER
int  Account::getNbAccounts() { return Account::_nbAccounts; }
int  Account::getTotalAmount() { return Account::_totalAmount; } 
int  Account::getNbDeposits() { return Account::_totalNbDeposits; }
int  Account::getNbWithdrawals() { return Account::_totalNbWithdrawals; }
int  Account::checkAmount() const { return Account::_amount; }

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    _totalAmount += _amount;
    _nbAccounts++;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits += deposit;
    _nbDeposits++;
    
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    else
    {
        std::cout << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _amount -= withdrawal;
        return true;
    }
}

void    Account::_displayTimestamp()
{
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    std::cout << "[" << (timeinfo->tm_year + 1900);
    if (timeinfo->tm_mon + 1 < 10)
        std::cout << "0";
    std::cout << (timeinfo->tm_mon + 1);
    if (timeinfo->tm_mday < 10)
        std::cout << "0";
    std::cout << timeinfo->tm_mday << "_";
    if (timeinfo->tm_hour < 10)
        std::cout << "0";
    std::cout << timeinfo->tm_hour << "";
    if (timeinfo->tm_min < 10)
        std::cout << "0";
    std::cout << timeinfo->tm_min << "";
    if (timeinfo->tm_sec < 10)
        std::cout << "0";
    std::cout << timeinfo->tm_sec << "] ";
}