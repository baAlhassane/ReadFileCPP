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
   int maxColumns=0;
    for (int i = 0; i < lines.size(); ++i) {
        //std::cout<<lines[i]<<std::endl;
        if(maxColumns<lines[i].length()){
            maxColumns=lines[i].length();
        }

        //if(lines[i][0]=="+" || lines[i][0]=="-"|| lines[i][0]=="|")

   }

    int nbLines=lines.size();

    //std::cout<<nbLines<< " X "<< maxColumns<<std::endl;


    return 0;

}