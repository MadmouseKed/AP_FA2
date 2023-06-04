#include "warehouse.hpp"

Warehouse::Warehouse(){

}
void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
}
bool Warehouse::removeEmployee(Employee employee){
    std::vector<Employee>::iterator position = std::find(Employees.begin(), Employees.end(), employee);
    if (position != Employees.end()){
        Employees.erase(position);
        return true;
    }
    else{
        return false;
    }
}
void Warehouse::addShelf(Shelf shelf){
    Shelves.push_back(shelf);
}
bool removeShelf(Shelf shelf){
    
}
bool Warehouse::rearrangeShelf(Shelf& shelf){

}
bool Warehouse::pickItems(std::string itemName, int itemCount){

}