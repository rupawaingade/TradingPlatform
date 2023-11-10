#pragma once
#include<iostream>
#include <string>
#include "Order.h"
#include "UserId.h"
using namespace std;

class Client
{
   
    string uname;
    int orderid = 0;
    public:
        explicit Client(const string& username)
        {
            this->uname = username;
        }

        Order createOrder(string s,Side si,int qu,double pr)
        {
            //Order(int uId,int oId,string sym,int qty,double prc,string side)

            UserId u;
            int id = u.getUserid(uname);
            Order o(id,orderid++,s,qu,pr,si);

            return o;
        }

};
