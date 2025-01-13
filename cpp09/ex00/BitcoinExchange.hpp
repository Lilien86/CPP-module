#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <sstream> 
#include <fstream>
#include <iostream>
#include <exception>
#include <algorithm>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _dataBase;
	
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cpy);
		BitcoinExchange operator=(const BitcoinExchange &rhs);

	public:
		BitcoinExchange(const std::string &file);
		~BitcoinExchange();

		std::map<std::string, double> &getDataBase();


		
};

std::ostream& operator<<( std::ostream&, BitcoinExchange&);

#endif