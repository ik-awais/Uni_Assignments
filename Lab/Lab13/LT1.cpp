#include <iostream>
#include <iomanip>
class MedicalRecord{
private:
    std::string disease_name;
    double room_charges, treatment_cost, total_charges;
public:
    MedicalRecord(std::string n, double rc, double trc) :
    disease_name(n), room_charges(rc), treatment_cost(trc),
    total_charges(rc+trc) {};
    void getData() const;
};
void MedicalRecord::getData() const {
    std::cout << "===Medical Record of the Patient===" << "\n" 
    << "Disease Name: " << disease_name << "\n"
    << "Room Charges: " << room_charges << "\n"
    << "Treatment Cost: " << treatment_cost << "\n"
    << "Total Charges: " << total_charges << "\n";   
}
class PatientAdmission{
private:
    std::string admissionID, patient_name;
    MedicalRecord record1;
public:
    PatientAdmission(std::string aID, std::string pn, std::string dn, double rc, double trc) : 
    admissionID(aID), patient_name(pn), record1(dn, rc, trc) {};
    void getData() const;
};
void PatientAdmission::getData() const {
    std::cout << "Patient Admission ID: " << admissionID << "\n"
    << "Patient Name: " << patient_name << "\n";
    record1.getData();
}
int main(){
    std::cout << std::fixed << std::setprecision(2);
    PatientAdmission patient1("25P-0011", "Muhammad Awais", "Overwork", 
        1000.50, 2500.00);
    patient1.getData();
    PatientAdmission patient2("25P-0027", "Muhammad Talha Zahoor", "Procrastination",
                                10000.89, 250000.32);
    patient2.getData();
    PatientAdmission patient3("25P-3015", "Muhammad Hasnain Qadri", "OCD(Obsessive Coding Disoder)",
                                150000.32, 3110000.32);
    patient3.getData();
    return 0;
}