#include "pallet.hpp"
#include <array>
class Shelf: public Pallet
{
    private:
        std::array<Pallet, 4> pallets;
    public:
        /// @brief Instantiates Shelf object
        Shelf();
        /// @brief Swaps two pallets around, use integers between 0 and 3
        /// @param slot slot1 to be swapped
        /// @param slot2 slot2 to be swapped
        /// @return true if call succeeded
        bool swapPallet(int slot, int slot2);
    friend bool operator==(const Shelf& lhs, const Shelf& rhs); // compare lhs and rhs
    friend bool operator!=(const Shelf& lhs, const Shelf& rhs);
};