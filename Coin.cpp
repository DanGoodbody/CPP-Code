/*
* Vending Machine Project
* CSE-40477
*
* Coin.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "Coin.h"

Project1::Coin::Coin(CoinType denomination)
   : denomination(denomination)
{   
   //this->denomination = denomination;   
}

Project1::Coin::CoinType
   Project1::Coin::getDenomination() const
{      
   return denomination;
}

unsigned
   Project1::Coin::getValueCents() const
{  
   return denomination;
}
