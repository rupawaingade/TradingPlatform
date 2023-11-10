#pragma once

#include <string>
#include <fstream>
#include "FileReader.h"
#include "Tokenizer.h"
using namespace std;
class UserId
{
    public:
      vector<pair<string,int>> users;
    UserId()
    {
        
        FileReader f;
        vector<string> s = f.readFile("user.txt");
        Tokenizer t;
        this->users = t.split(s);

    }
    int getUserid(string u)
    {
        for(const auto& user : users)
            {

                if(user.first == u)
                   return user.second;
                
            }
        return -1;
    }
};