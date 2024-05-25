/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandra <alessandra@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:00:04 by aconta            #+#    #+#             */
/*   Updated: 2023/09/02 22:40:52 by alessandra       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file " << filename << std::endl;
        return;
    }
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile) {
        std::cerr << "Error: Unable to open output file " << filename << ".replace" << std::endl;
        return;
    }
    std::string line;
    while (getline(inputFile, line)) {
        size_t pos;
        while ((pos = line.find(s1)) != std::string::npos) {
            line.replace(pos, s1.length(), s2);
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    std::cout << "File " << filename << " has been copied and replaced. Result saved as " << filename << ".replace" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    const std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];
    replaceInFile(filename, s1, s2);
    return 0;
}
