/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauger <lauger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:07:55 by lauger            #+#    #+#             */
/*   Updated: 2024/10/29 13:02:34 by lauger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string readFileContent(const std::string &filename)
{
	std::ifstream inputFile(filename.c_str(), std::ios::in);
	if (!inputFile.is_open()){
		std::cerr << "Impossible to open file: " << filename << std::endl;
		return "";
	}
	
	std::string line;
	std::string content;

	while (std::getline(inputFile, line)){
		content += line + "\n";
	}
	
	inputFile.close();
	return content;
}

void replaceSubstring(std::string &content, const std::string &s1, const std::string &s2) {
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	return ;
}

void writeFileContent(const std::string &filename, const std::string &content) {
	std::ofstream outputFile(filename.c_str());
	if (!outputFile) {
		throw std::runtime_error("Error: Could not create file " + filename);
	}
	outputFile << content;
	return ;
}

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	try {
		std::string content = readFileContent(filename);
		replaceSubstring(content, s1, s2);
		writeFileContent(filename + ".replace", content);
	} catch (const std::runtime_error &e) {
		std::cerr << e.what() << "\n";
		return 1;
	}

	return 0;
}

