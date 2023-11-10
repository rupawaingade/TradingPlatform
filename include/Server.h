#pragma once
#include<iostream>
#include <string>
#include "Order.h"

class Server
{
    public:
    void addOrder(Order& o)
    {
        o.print();
    }

};
