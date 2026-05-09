#include <iostream>
class Professor{
private:
    std::string professor_id, name, specialization;
public:
    Professor(std::string id, std::string n, std::string spc) :
    professor_id(id), name(n), specialization(spc) {};
    void const getData();
};  
void const Professor::getData(){
    std::cout << "Professor ID: " << professor_id << "\n"
    << "Professor Name: " << name << "\n"
    << "Specialization: " << specialization << "\n";
}
class Department{
private:
    std::string department;
    Professor& prof;
public:
    Department(std::string dept, Professor& obj) :
    department(dept), prof(obj) {};
    void const getData();
};
void const Department::getData(){
    std::cout << "Department: " << department << "\n"
    << "Professors Assigned to this Department are as follows\n";
    prof.getData();
}
int main(){
    Professor p1("25P-0011", "Muhammad Awais", "Business Administration"),
    p2("25P-3015", "Muhammad Hasnain Qadri", "Artificial Intelligence");
    Department d1("CS", p2);
    d1.getData();
    std::cout << "===Details of all Professors===\n";
    p1.getData(); p2.getData();
    return 0;
}