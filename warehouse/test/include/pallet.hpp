class Pallet
{
    private:
        int itemCount; //only mutabe through taking and putting
        std::string itemName; //only mutable if empty
        int itemCapacity; //only mutable if empty
    public:
        /// @brief Creates a Pallet object using itemName, itemCapcity and itemCount
        /// @param itemName 
        /// @param itemCapacity 
        /// @param itemCount 
        Pallet(std::string itemName, int itemCapacity, int itemCount);
        Pallet();
        std::string getItemName();
        int getItemCount();
        int getRemainingSpace();
        bool reallocateemptyPallet(std::string itemName, int itemCapacity);
        bool takeOne();
        bool putOne();
};