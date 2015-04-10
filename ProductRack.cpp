/*
* Vending Machine Project
* CSE-40477
*
* ProductRack.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcmp;


#include "ProductRack.h"

Project1::ProductRack::ProductRack(
   StatusPanel &statusPanel,
   const char *allowedProductName,
   DeliveryChute &deliveryChute,
   unsigned productPriceCents)
   : statusPanel(statusPanel),
   deliveryChute(deliveryChute),
   productCount(0),
   productPriceCents(productPriceCents)
{
   strcpy(this->allowedProductName, allowedProductName);   
}
//Delete all memory allocated for products
Project1::ProductRack::~ProductRack()
{   
   for (int i = 0; i < productCount; i++)
      delete products[i];
}
//see if product is compatible with rack
bool
   Project1::ProductRack::isCompatibleProduct(const char *productName) const
{
   if(strcmp(productName, this->allowedProductName) == 0)
      return true;
   else
   {       
      return false;
   }
}

bool
   Project1::ProductRack::isFull() const
{
   if (productCount > MAX_PRODUCTS - 1)
   {
      statusPanel.displayMessage(statusPanel.MESSAGECODE_RACK_IS_FULL);
      return true;
   }
   else 
      return false;
}

bool
   Project1::ProductRack::isEmpty() const
{
   if (productCount == 0)
      return true;
   else
      return false;
}

bool
   Project1::ProductRack::addProduct(Product* pProduct)
{
   if (isFull() == true)
   {       
      return false;
   }
   else if (isCompatibleProduct(pProduct->getName()) == false)
   {
      statusPanel.displayMessage(statusPanel.MESSAGECODE_PRODUCT_DOES_NOT_MATCH_PRODUCT_RACK);
      return false;
   }
   else 
   {
      products[productCount] = pProduct;
      productCount++;
      return true;
   }
}
//insert product into the delivery chute
//set pointer to that product to null
bool
   Project1::ProductRack::deliverProduct()
{
   if (isEmpty() == true)
   {
      statusPanel.displayMessage(statusPanel.MESSAGECODE_SOLD_OUT);
      return false;
   }
   if (deliveryChute.insertProduct(products[productCount - 1]))
   {      
      products[productCount - 1] = 0;      
      productCount--;
      return true;
   }
   else
      return false;
}

unsigned
   Project1::ProductRack::getNumProductsInRack() const
{
   return productCount;
}

unsigned
   Project1::ProductRack::getProductPriceCents() const
{    
   return this->productPriceCents; 
}
