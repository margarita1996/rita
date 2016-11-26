#include<iostream>
#include<stdexcept>
#include"number.hpp"

using namespace std;

int main(int argc, char** argv)
{
    int sum = 0;//количество вхождений слова в документ
    try{
        if (argc < 3){
            throw "example.exe, string, <file_name.txt>, ...";
        }
        for (int i = 2; i < argc; i++){
           Find n(argv[1]);
           sum += n.GetQuantity(argv[i]);
        }
        cout <<"average = "<<(double)sum/(argc-2)<< endl;
    }catch(const char* err){
       cout<<err<<endl;
    }
    return 1;
}
