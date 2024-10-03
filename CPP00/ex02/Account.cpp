/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:54:57 by lauger            #+#    #+#             */
/*   Updated: 2024/10/02 14:29:58 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), 
_nbDeposits(0), _nbWithdrawals(0) 
{
	(void)initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;   
	std::cout << ";closed" << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	char buffer[20];

	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", ltm);

	std::cout << buffer << " ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount = deposit + _amount;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool success = false;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	if (withdrawal > _amount){
		std::cout << ";withdrawal:refused" << std::endl;
		success = false;
	} else {
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal;
		_amount = _amount - withdrawal;
		std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
		_totalAmount -= withdrawal;
		success = true;
	}
	return success;
}
int	Account::getNbWithdrawals( void )
{
	_displayTimestamp();
	std::cout << "getNbWithdrawals" << std::endl;
	return 0;
}

int	Account::getNbDeposits( void )
{
	std::cout << "getNbDeposits" << std::endl;
	return 0;
}

int	Account::getNbAccounts( void )
{
	std::cout << "getNbAccounts" << std::endl;
	return 0;
}

int	Account::getTotalAmount( void )
{
	std::cout << "getTotaAmount" << std::endl;
	return 0;
}
