class Shelf
{
    private:
        std::array<Pallet, 4> pallets;
    public:
        Shelf();
        bool swapPallet(int slot, int slot2);
};