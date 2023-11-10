#pragma once
#include <string>
using namespace std;

class UserId
{
    public:
    int getUserid(string u)
    {
        if(u == "Rupa")
            return 1;
        else if(u == "Pr")
            return 0;
        return -1;
    }
};