#include "shelf.hpp"
#include <array>

Shelf::Shelf(){
    
};
bool swapPallet(int slot, int slot2){
    Pallet temp = pallets[slot];
    pallets[slot] = pallets[slot2];
    pallets[slot2] = temp;
};