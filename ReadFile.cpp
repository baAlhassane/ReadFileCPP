//
// Created by DVEEC on 22/12/2021.
//

#include "ReadFile.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>


ReadFile::ReadFile(const char* filename) {
std::ifstream infile(filename,std::ios::binary);
    if (!infile.is_open()) {
        std::cout << "failed to open " << filename << '\n';
    } else {

        std::cout << "success to open " << filename << '\n';
          std::string linefile;
       while(getline(infile,linefile)){
               lines.push_back(linefile);




       }
    }





}


ReadFile::~ReadFile() {}


std::vector<std::string> ReadFile::getLines() {

    return lines;
}