//
// Created by DVEEC on 22/12/2021.
//


#include <iostream>
#include "ReadFile.h"
#include <vector>
#include <string>
#include "MatriceOfCaracters.h"
#include "Data.h"
int main(){
    std::cout<<"hello"<<std::endl;
ReadFile file("labyrinthe.txt");

std::vector<std::string>lines= file.getLines();

std::cout<<" size of  mtriceOfcaracter  :"<<std::endl;

std::cout<<file.getNbLines()<< "  X  "<< file.getNbColumns()<<std::endl;


MatriceOfCaracters matrice(file);

std::vector<std::vector<char>> vect=matrice.getMatriceofcaracters();




/*
    for(auto cars:vect){
        for(auto car:cars) std::cout<<car; ;
        std::cout<< "  "<<std::endl;
    }
    */


Data d(matrice);

    std::cout<<" size f of data   :"<<std::endl;
std::cout<<d.getHeight()<< " size of data X "<< d.getWidth()<<std::endl;



    return 0;

}