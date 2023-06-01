class Pallet
{
    private:
        int itemCount; //only mutabe through taking and putting
        std::string itemName; //only mutable if empty
        int itemCapacity; //only mutable if empty
    public:
        /// @brief Creates a Pallet object using itemName, itemCapcity and itemCount, each Pallet can only have 1 kind of item.
        /// @param itemName the name of the item in the pallet.
        /// @param itemCapacity how many of the item the pallet could theoreticly hold.
        /// @param itemCount how many of the item the pallet currently holds.
        Pallet(std::string itemName, int itemCapacity, int itemCount);

        /// @brief Creates an empty pallet, holds placeholder item named "Nothing", with a capacity of 0 and a current item count of 0.
        Pallet();

        /// @brief gets the item name associated with the Pallet
        /// @return string itemName
        std::string getItemName();

        /// @brief gets the current item count of the pallet
        /// @return integer itemCount
        int getItemCount();

        /// @brief tells how much empty space remains on the pallet
        /// @return integer empty space left
        int getRemainingSpace();

        /// @brief Repurposes a pallet by changing what item it holds and how much of that item.
        /// @param itemName new item's name
        /// @param itemCapacity new item's capacity for the pallet
        /// @param itemCount Optional: new item's amount on the pallet, if not specified defaults to 0
        /// @return true if function call was succesful
        bool reallocateEmptyPallet(std::string itemName, int itemCapacity, int itemCount = 0);

        /// @brief attempts to increase itemcount of item by 1, if succesful return True, else return False
        /// @return successfulness of item count increase
        bool takeOne();

        /// @brief attempts to decrease itemcount of item by 1, if succesful return True, else return False
        /// @return succesfulness of item count decrease
        bool putOne();

    friend bool operator == (const Pallet& lhs, const Pallet& rhs); //Compare lefthand and right hand
    friend bool operator != (const Pallet& lhs, const Pallet& rhs);
};