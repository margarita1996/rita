#include<fstream>
#include<iostream>
#include<exception>
#include<stdexcept>
#include<cctype>
#include "number.hpp"

using namespace std;

Find::Find(const std::string _word): word(_word)
{
}

Find::Find()
{
}

Find::~Find()
{
}

int Find::GetQuantity(const std::string file_name) const{
    int wrd_count = 0; // Счётчик слов
    string tmp;
    ifstream in(file_name);
    if(!in.is_open())
        throw "Can't open file! ";
    for(;;){
        in>>tmp;
        if (in.eof())
            break;
        if(tmp == word)
            wrd_count++;

        else{
            while (ispunct(tmp[tmp.size()-1])){
                tmp.resize(tmp.size()-1);
            if(tmp == word)
                wrd_count++;
            }
        }
    }
    in.close();
    return wrd_count;
}



