#include "employee.hpp"
#include<string>

Employee::Employee(std::string name, bool forkLiftCertificate = false){
    this->name = name;
    this->forkLiftCertificate = forkLiftCertificate;
    busy = false;
}
std::string Employee::getname(){
    return name;
}
bool Employee::getBusy(){
    return busy;
}
void Employee::setBusy(bool busy){
    this->busy = busy;
}
bool Employee::getForkLiftCertificate(){
    return forkLiftCertificate;
}
void Employee::setForkLiftCertificate(bool forkLiftCertificate){
    this->forkLiftCertificate = forkLiftCertificate;
}