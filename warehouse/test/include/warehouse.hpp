class warehouse
{
    private:
        std::vector<Employee> Employees;
        std::vector<Shelf> Shelves;
    public:
        Warehouse();
        void addEmployee(Employee: employee);
        void addShelf(Shelf: shelf);
        bool rearrangeShelf(Shelf&: shelf);
        bool pickItems(std::string itemName, int itemCount);
};