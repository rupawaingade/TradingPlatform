#pragma once
#include <string>
using namespace std;


enum class Side{BUY,SELL};
struct Order{

     int uId;
     int oId;
     Side side;
     string sym;
     int qty;
     double prc;
     
     
     Order(int uId,int oId,string sym,int qty,double prc,Side side)
     {
        this->uId = uId;
        this->oId = oId;
        this->sym = sym;
        
        this->qty = qty;
        this->prc = prc;
        this->side = side;
     }
     
     Order(const Order &other)
     {
        this->uId = other.uId;
        this->oId = other.oId;
        this->sym = other.sym;
        this->qty = other.qty;
        this->prc = other.prc;
        this->side = other.side;
     }

     Order & operator = (Order& other) {
        if (&other == this) return *this;

        this->uId = other.uId;
        this->oId = other.oId;
        this->sym = other.sym;
        this->qty = other.qty;
        this->prc = other.prc;
        return *this;
     }
    char sideStr(Side side)
    {
        if(side == Side::BUY)
            return 'B';
        return 'S';

    }

    void print()
    {
        std::cout << " " << uId << " " << sideStr(side) << " " << qty << " " << sym << " " << prc << std::endl; 
       
    }
    
     ~Order() = default;





};



