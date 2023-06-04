#include "shelf.hpp"
#include <array>

Shelf::Shelf(){
    
}
bool Shelf::swapPallet(int slot, int slot2){
    Pallet temp = pallets[slot];
    pallets[slot] = pallets[slot2];
    pallets[slot2] = temp;
    return true;
}
bool operator==(const Shelf& lhs, const Shelf& rhs){
    
}
bool operator!=(const Shelf& lhs, const Shelf& rhs){

}