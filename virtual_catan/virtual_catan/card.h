// card.h
// card class for Virtual Catan

#ifndef _CARD_H
#define _CARD_H

#include <iostream>
//#include <set>
using namespace std;

class Card {
 public:
  void setCard();
  int getCard();
  void useCard(int cardEnum){}; // should player do this???
  void buyCard(int cardEnum){}; // should player do this???
  
 private:
  int resourceEnum;
  int ownerID:
};

#endif
