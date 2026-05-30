#include <iostream>
#include <string>
/*From here on, I will avoid using "using namesapce std"
because I ain't a beginner anymore
*/
class Person{
protected:
    std::string name;
    int age;
public:
    Person() : name(" "), age(0) {}; 
    //Declared default constructor just to initialize the base class data members
    void setPersonDetail(std::string, int);
    void displayPersonDetail();
};
void Person::setPersonDetail(std::string name, int age){
    this->name = name;
    this->age = age;
}
void Person::displayPersonDetail(){
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
}
// Faced ambiguity (Diamond Problem) so used virtual inheritance
class AcademicRecord : virtual public Person{ 
protected:
    double CGPA;
    std::string major;
public:
    void setAcademicDetails(double, std::string major);
    void displayAcademicDetails();
};
void AcademicRecord::setAcademicDetails(double CGPA, std::string major){
    this->CGPA = CGPA;
    this->major = major;
}
void AcademicRecord::displayAcademicDetails(){
    std::cout << "CGPA: " << CGPA << "\n";
    std::cout << "Major: " << major << "\n";
}
class Scholarship : virtual public Person, public AcademicRecord{
private:
    double scholarshipAmount;
public:
    void EvaluateScholarship();
    void displayScholarship();
};
void Scholarship::EvaluateScholarship(){
    scholarshipAmount =  (CGPA>=3.5 && age<=25) ?
    50000 : 0; 
}
void Scholarship::displayScholarship(){
    displayPersonDetail();
    displayAcademicDetails();
    std::cout << "Scholarship amount: " << scholarshipAmount << "\n";
}
int main(){
    Scholarship student;
    student.setPersonDetail("Awais", 19);
    student.setAcademicDetails(3.5, "AI");
    student.EvaluateScholarship();
    student.displayScholarship();
    return 0;
}