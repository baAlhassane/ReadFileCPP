//
// Created by DVEEC on 24/12/2021.
//

#ifndef CPP2022_DATA_H
#define CPP2022_DATA_H
#include "MatriceOfCaracters.h"

class Data {

private:
    std::size_t height;
    std::size_t width;
    char ** data ;
public:
    Data();
    Data(const MatriceOfCaracters& matrice);
    Data(const Data& copy);
    const Data & operator=(const Data & data1);
    std::size_t getHeight();
    std::size_t getWidth();
    ~Data();

};


#endif //CPP2022_DATA_H





