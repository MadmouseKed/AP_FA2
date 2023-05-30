#include <iostream>
#include "pallet.hpp"
Pallet::Pallet(std::string itemName, int itemCapacity, int itemCount){
    this->itemName = itemName;
    this->itemCapacity = itemCapacity;
    this->itemCount = itemCount;
}
Pallet::Pallet(){
    itemName = "Nothing";
    itemCapacity = 0;
    itemCount = 0;
}
std::string Pallet::getItemName(){
    return itemName;
}
int Pallet::getItemCount(){
    return itemCount;
}
int Pallet::getRemainingSpace(){
    return itemCapacity - itemCount;
}
bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity, int itemCount = 0){
    this->itemName = itemName;
    this->itemCapacity = itemCapacity;
    this->itemCount = itemCount;
    return true;
}
bool Pallet::takeOne(){
    if(itemCount > 0){
        itemCount -= 1;
        return true;
    }
    else{
        return false;
    }
}
bool Pallet::putOne(){
    if(itemCount<itemCapacity){
        itemCount += 1;
        return true;
    }
    else{
        return false;
    }
}