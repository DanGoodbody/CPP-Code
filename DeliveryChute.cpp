/*
* Vending Machine Project
* CSE-40477
*
* DeliveryChute.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "DeliveryChute.h"

Project1::DeliveryChute::DeliveryChute(StatusPanel &statusPanel)
   : statusPanel(statusPanel),
   pProduct(0)
{

}

Project1::DeliveryChute::~DeliveryChute()
{  
   delete pProduct;
}

bool
   Project1::DeliveryChute::insertProduct(Product *pProduct)
{
   if (containsProduct() == false)
   {      
      this->pProduct = pProduct; 
      return true;
   }
   else
   {
      statusPanel.displayMessage(statusPanel.MESSAGECODE_CHUTE_FULL);
      return false;
   }
}

Project1::Product *
   Project1::DeliveryChute::retrieveProduct()
{      
   if (containsProduct()) 
   {
      Product *thisproduct = pProduct;
      pProduct = 0;
      return thisproduct;
   }
   else 
      return 0;
}

bool
   Project1::DeliveryChute::containsProduct() const
{
   if (this->pProduct == 0)
      return false;
   else
      return true;
}