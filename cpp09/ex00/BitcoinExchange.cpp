#include "BitcoinExchange.hpp"

bool is_digit(const std::string& str) {
	if (str.empty()) return false;
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (!std::isdigit(*it))
			return false;
	}
	return true;
}

double string_to_double(const std::string& str) {
	std::stringstream ss(str);
	double result;
	ss >> result;
	if (ss.fail()) {
		throw std::runtime_error("Conversion to double failed: " + str);
	}
	return result;
}

BitcoinExchange::BitcoinExchange(const std::string &file)
{
	std::ifstream ifs;
	std::string line;
	try {
		ifs.open(file.c_str());
		if (ifs.fail())
			throw std::runtime_error("Failed to open file");
	} catch (const std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
		std::cerr << file << " was not successfully opened. Please check that the file currently exists." << std::endl;
		return ;
	}
	std::getline(ifs, line);
	while (std::getline(ifs, line)) {
		size_t pos_del = line.find(',');
		if (pos_del == std::string::npos) {
			std::cerr << "Error: Invalid format in database => " << line << '\n';
			continue;
		}
		std::string date = line.substr(0, pos_del);
		std::string rate_s = line.substr(pos_del + 1);

		double rate = string_to_double(rate_s);
		this->_dataBase[date] = rate;
	}

}

BitcoinExchange::~BitcoinExchange() {}

std::map<std::string, double> &BitcoinExchange::getDataBase() {
	return this->_dataBase;
}


std::ostream& operator<<( std::ostream &os, BitcoinExchange &bit)
{
	std::map<std::string, double>::iterator it = bit.getDataBase().begin();

	while (it != bit.getDataBase().end()) {
		os << it->first
			 << " -> " << it->second << std::endl;
		++it;
	}
	return os;
}