#ifndef SR_AR_H
#define SR_AR_H

#include<string>

class Find
{
private:
    std::string word;
public:
    Find(const std::string _word);
    Find();
    ~Find();

    int GetQuantity(const std::string file_name) const;
};

#endif // SR_AR_H
