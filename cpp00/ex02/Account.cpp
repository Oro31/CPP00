#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) {
	return _nbAccounts;
}

int	Account::getTotalAmount(void) {
	return _totalAmount;
}

int	Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << " accounts:";
	std::cout << _nbAccounts;
	std::cout << ";total:";
	std::cout << _totalAmount;
	std::cout << ";deposits:";
	std::cout << _totalNbDeposits;
	std::cout << ";withdrawals:";
	std::cout << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << " index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << " index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << " index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << _amount;
	std::cout << ";deposit:";
	std::cout << deposit;
	_amount = _amount + deposit;
	std::cout << ";amount:";
	std::cout << _amount;
	_nbDeposits++;
	std::cout << ";nb_deposits:";
	std::cout << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawals) {
	_displayTimestamp();
	std::cout << " index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << _amount;
	std::cout << ";withdrawals:";
	if (_amount - withdrawals >= 0) {
		std::cout << withdrawals;
		_amount = _amount - withdrawals;
		std::cout << ";amount:";
		std::cout << _amount;
		_nbWithdrawals++;
		std::cout << ";nb_withdrawals:";
		std::cout << _nbWithdrawals << std::endl;
		return true;
	} else {
		std::cout << "refused" << std::endl;
		return false;
	}
}

int	Account::checkAmount(void) const {
	return _amount;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << " index:";
	std::cout << _accountIndex;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";deposits:";
	std::cout << _nbDeposits;
	std::cout << ";withdrawals:";
	std::cout << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {
	std::time_t	t = std::time(0);
	struct tm	*timeinfo;

	timeinfo = gmtime(&t);
	std::cout << "[" ;
	std::cout << 1900 + timeinfo->tm_year;
	if (timeinfo->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << timeinfo->tm_mon + 1;
	if (timeinfo->tm_mday < 10)
		std::cout << "0";
	std::cout << timeinfo->tm_mday;
	std::cout << "_";
	if (timeinfo->tm_hour + 1 < 10)
		std::cout << "0";
	std::cout << timeinfo->tm_hour + 1;
	if (timeinfo->tm_min < 10)
		std::cout << "0";
	std::cout << timeinfo->tm_min;
	if (timeinfo->tm_sec < 10)
		std::cout << "0";
	std::cout << timeinfo->tm_sec;
	std::cout << "]";
}

Account::Account(void) {
}
