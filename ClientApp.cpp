#include <iostream>
#include "Client.h"
#include "Server.h"
int main()
{
    Server s;

    Client r("Rupa");
    Order o = r.createOrder("AAPL", "BUY", 100, 10.50);
    Order o1 = r.createOrder("AAPL", "SELL", 100, 10.50);
    s.addOrder(o);
    s.addOrder(o1);

    Client p("Pr");
    Order o2 = p.createOrder("AAPL","BUY",200,11);
    s.addOrder(o2);

    
    

    return 0;
}
    