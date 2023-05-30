class Employee
{
    private:
        std::string name;
        bool busy;
        bool forkliftCertificate;
    public:
        Employee(std::string name, bool forkliftCertificate);
        std::string getname();
        bool getBusy();
        void setBusy(bool busy);
        bool getForkLiftCertificate();
        void setForkLiftCertificate(bool forkLiftCertificate);
};