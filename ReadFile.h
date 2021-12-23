//
// Created by DVEEC on 22/12/2021.
//

#ifndef READFILECPP_READFILE_H
#define READFILECPP_READFILE_H

#include <iostream>
#include <vector>
#include <string>
#include <map>



class ReadFile {

private:
    std::vector<char> line; // one line of our file
    std::vector<std::string> lines; // All lines of our file
    std::map<char,int> map_textures;

public:
    ReadFile(const char* filename="labyrinthe.txt");
    ~ReadFile();
    std::vector<std::string> getLines();//get all the lines like vector of string


};


#endif //READFILECPP_READFILE_H
