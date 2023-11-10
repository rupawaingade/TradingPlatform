#pragma once
#include <string>
#include <fstream>
#include<vector>
using namespace std;


class FileReader
{
private:
       
public:
    
   vector<string> readFile(const string& filename)
   {
      //Creation of ifstream class object to read the file
        ifstream fin;
        fin.open(filename);
        string line;
        vector<string> result;
        //Execute a loop until EOF (End of File)
        while (getline(fin, line)) 
        {
            // Print line (read from file) in Console
            result.push_back(line);
        }
        fin.close();
        return result;
   }
};

