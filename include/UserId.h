#pragma once

#include <string>
#include <fstream>
#include "FileReader.h"
#include "Tokenizer.h"
#include <map>
using namespace std;
class UserId
{
    public:
      map<string,int> users;
    UserId()
    {
        
        FileReader f;
        vector<string> s = f.readFile("user.txt");
        Tokenizer t;
        vector<pair<string,int>> u =  t.split(s);
         for(const auto& user : u)
            {
                users.insert(user); 
                //users[user.first] = user.second;
            }
    }
    int getUserid(string u)
    {
        // for(const auto& user : users)
        // {

        //     if(user.first == u)
        //         return user.second;
            
        // }

        auto it = users.find(u);
        if(it == users.end())
            return -1;
        return it->second;


    }
};