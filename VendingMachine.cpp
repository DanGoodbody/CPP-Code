/*
* Vending Machine Project
* CSE-40477
*
* VendingMachine.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "VendingMachine.h"

Project1::VendingMachine::VendingMachine(
   ostream &statusPanelStream,
   const char *productNames[NUM_PRODUCT_RACKS],
   unsigned productPrices[NUM_PRODUCT_RACKS])
   : statusPanel(statusPanelStream),
   deliveryChute(statusPanel),
   numCoins(0),
   unspentMoneyCents(0)
{
   for (int i = 0 ; i < NUM_PRODUCT_RACKS; i ++)
      productRacks[i] = new ProductRack(statusPanel, productNames[i], deliveryChute, productPrices[i]);
}

Project1::VendingMachine::~VendingMachine()
{
    for (int i = 0 ; i < NUM_PRODUCT_RACKS; i ++)
       delete productRacks[i];
}

bool
   Project1::VendingMachine::insertCoin(Coin *pCoin)
{

   if (pCoin->getDenomination() != pCoin->COINTYPE_WOODEN_NICKEL) 
   {
      coinBox[numCoins] = pCoin;
      numCoins++;
      unspentMoneyCents += pCoin->getValueCents();
      return true;
   }
   else
   {
      statusPanel.displayMessage(statusPanel.MESSAGECODE_BAD_COIN);
      return false;
   }
}

bool
   Project1::VendingMachine::pressButton(int button)
{
   if (button > 4)
   {
      statusPanel.displayMessage(statusPanel.MESSAGECODE_WRONG_BUTTON);
      return false;
   }
   else if (unspentMoneyCents < productRacks[button]->getProductPriceCents())
   {
      statusPanel.displayMessage(statusPanel.MESSAGECODE_INSUFFICIENT_MONEY);
      return false;
   } 
   else
   {
      if (productRacks[button]->deliverProduct())
      {
         unspentMoneyCents -= productRacks[button]->getProductPriceCents();     
         return true;
      }
      else 
         return false;
   }
}

Project1::Product *
   Project1::VendingMachine::retrieveProduct()
{   
   return deliveryChute.retrieveProduct(); 
}

bool
   Project1::VendingMachine::addProduct(Product *pProduct)
{  
   for (int i = 0; i < NUM_PRODUCT_RACKS; i++)
   {
      if (productRacks[i]->isCompatibleProduct(pProduct->getName()))
      {       
         return productRacks[i]->addProduct(pProduct);
      }    
   }
   statusPanel.displayMessage(statusPanel.MESSAGECODE_NO_RACK_FOR_PRODUCT);
   return false;
}

unsigned
   Project1::VendingMachine::getProductCount(const char *productName) const
{    
   for (int i = 0; i < NUM_PRODUCT_RACKS; i++)
   {
      if (productRacks[i]->isCompatibleProduct(productName))
         return productRacks[i]->getNumProductsInRack();
   }
   return 0;
}

unsigned
   Project1::VendingMachine::countTill() const
{
   unsigned total = 0;
   for (unsigned i = 0; i < numCoins; i++)
   {
      total += coinBox[i]->getValueCents();
   }
   return total;
}

unsigned
   Project1::VendingMachine::getNumCoinsInCoinBox() const
{    
   return numCoins;
}
