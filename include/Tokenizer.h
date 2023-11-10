#pragma once
#include <string>
#include <vector>
#include <sstream>
using namespace std;



class Tokenizer
{
private:
    /* data */
public:
      vector<pair<string,int>> split(const vector<string>& v)
      {
        vector<pair<string,int>> r;
        for (const auto& s : v)
        {
            vector<string> t;
            stringstream ss(s);
            while( ss.good() )
            {
            string substr;
            getline( ss, substr, ',' );
            t.push_back( substr );
            }
            pair <string,int> p;
            p.first=t[0];
            p.second=stoi(t[1]);
            r.push_back(p);
        }

        return r;
        
      }
};

