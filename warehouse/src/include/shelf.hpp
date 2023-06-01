#include "pallet.hpp"
#include <array>
class Shelf: public Pallet
{
    private:
        std::array<Pallet, 4> pallets;
    public:
        Shelf();
        bool swapPallet(int slot, int slot2);
};