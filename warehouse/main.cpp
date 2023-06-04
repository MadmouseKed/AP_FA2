#include <iostream>
#include "../warehouse/src/include/shelf.hpp"

int main(void){
    std::cout << "Hello world" << std::endl;
    Shelf shelf3 = Shelf();
    shelf3.pallets = {
        Pallet("Toy Bears", 100, 20), 
        Pallet("Toy Bears", 100, 10), 
        Pallet(), 
        Pallet("Toy Bears", 100, 30)
    };
    return 0;
}


