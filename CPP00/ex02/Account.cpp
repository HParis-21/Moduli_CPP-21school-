#include "Account.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created";
	std::cout << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void    Account::_displayTimestamp(void)
{
	struct tm  *time_local;
	time_t    hour;
	char      str[64];

	time(&hour); /** time ret кол-вопрошедших часов с 1970 */
	time_local = localtime(&hour); /** получили локальное время */
	strftime(str, 64, "[%Y%m%d_%H%M%S] ", time_local); /** перевод в текстовую строку */
	std::cout << str;
}

int	Account::getNbAccounts(void)
{
	return (Account:: _nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account:: _totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account:: _totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account:: _totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" <<
	getTotalAmount() << ";deposits:" << getNbDeposits() <<
	";widthdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_totalAmount += deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"<<
	deposit << ";amount:"<< _amount + deposit <<";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount >= withdrawal)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}
	else
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount(void) const
{
	return (Account::_totalAmount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<
	";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}


