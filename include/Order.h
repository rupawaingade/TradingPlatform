#pragma once
#include <string>
using namespace std;
struct Order{

     int uId;
     int oId;
     string side;
     string sym;
     int qty;
     double prc;
     
     
     Order(int uId,int oId,string sym,int qty,double prc,string side)
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


    void print()
    {
        std::cout << " " << uId << " " << side << " " << qty << " " << sym << " " << prc << std::endl; 
       
    }
    
     ~Order() = default;





};



