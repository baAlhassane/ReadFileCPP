//
// Created by DVEEC on 22/12/2021.
//


#include <iostream>
#include "ReadFile.h"
#include <vector>
int main(){

    std::cout<<"hello"<<std::endl;
ReadFile rfile("labyrinthe.txt");

std::vector<std::string>lines= rfile.getLines();

    for (int i = 0; i < lines.size(); ++i) {
        std::cout<<lines[i]<<std::endl;
    }

    return 0;

}