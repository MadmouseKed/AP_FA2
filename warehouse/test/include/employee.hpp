class Employee
{
    private:
        std::string name;
        bool busy;
        bool forkLiftCertificate;
    public:
        /// @brief creates the Employee object, fills in busy as false.
        /// @param name name of the employee
        /// @param forkLiftCertificate Optional: true if the employee has a forklift certificate, false if not. If not provided we assume that they do not have a certificate.
        Employee(std::string name, bool forkLiftCertificate = false);

        /// @brief gets the name of employee
        /// @return name
        std::string getname();

        /// @brief gets whether employee is currently bussy or not
        /// @return true if bussy, false if not
        bool getBusy();

        /// @brief updates employees busy status to provided busy
        /// @param busy true if bussy, false if not
        void setBusy(bool busy);

        /// @brief gets whether employee has a forklift certificate or not
        /// @return true if has certificate, false if not
        bool getForkLiftCertificate();

        /// @brief updates employee forklift certificate status to provided forkliftcertificate
        /// @param forkLiftCertificate true if has certificate, false if not
        void setForkLiftCertificate(bool forkLiftCertificate);
};