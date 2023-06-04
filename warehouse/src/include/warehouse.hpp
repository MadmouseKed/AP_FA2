#include "shelf.hpp"
#include "employee.hpp"
#include <vector>
#include <string>
class Warehouse: public Shelf, public Employee
{
    private:
        std::vector<Employee> Employees;
        std::vector<Shelf> Shelves;
    public:
        Warehouse();
        /// @brief Add an employee to the warehouse workforce vector
        /// @param employee the employee to be added
        void addEmployee(Employee employee);

        /// @brief Remove an employee from the warehouse workforce vector
        /// @param Employee the employee to be added
        /// @return true if removal succceeded, false if no item was removed(employee was not found in warehouse Employees vector)
        bool removeEmployee(Employee Employee);

        /// @brief Creates a new shelf in the warehouse
        /// @param shelf the new shelf to be added to the warehouse
        void addShelf(Shelf shelf);

        /// @brief removes a shelf from the warehouse 
        /// @param shelf the shelf to be removed from the warehouse
        /// @return true if removal succeeded, false if shelf was not found in warehouse
        bool removeShelf(Shelf shelf);

        /// @brief Sorts the pallets in a shelf in order of itemcount, requires an available (!= busy) employee with a forkliftcertificate to succeed
        /// @param shelf the shelf to be rearranged
        /// @return true if rearrangement succesful, false if: != employee != busy && has forklift certificate (statement: Employee not bussy AND has forklift certificate is false)
        bool rearrangeShelf(Shelf& shelf);

        /// @brief 
        /// @param itemName 
        /// @param itemCount 
        /// @return 
        bool pickItems(std::string itemName, int itemCount);
};