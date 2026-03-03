#include <iostream>
#include <iomanip>
using namespace std;

struct HR
{
    char employeeName[50];
    char jobTitle[30];
    int employeeCode;
    int monthCount;
    float monthlySalary[5];
    float *base_address;
};

void calculateDisplayPayroll(HR *ptr, float extra);

int main(){
    HR emp;
    HR *emp_ptr = &emp;
    emp_ptr->base_address = emp_ptr->monthlySalary;
    cout << "Enter employ name: ";
    cin >> emp_ptr->employeeName;
    cout << "Enter ID: ";
    cin >> emp_ptr->employeeCode;
    cout << "Enter job title: ";
    cin >> emp_ptr->jobTitle;
    while(1)
    {
        cout << "Enter month count: ";
        cin >> emp_ptr->monthCount;
        if(!(emp_ptr->monthCount < 1 || 5 < emp_ptr->monthCount))
        {
            break;
        }
        if(emp_ptr->monthCount < 1 || 5 < emp_ptr->monthCount)
        {
            cout << "Month count should must be from 1 to 5.";
        }
    }
    int count = 0;
    while(1)
    {
        count = 0;
        cout << "Enter salary for each month: ";
        for(int i = 0; i < emp_ptr->monthCount; i++)
        {
            cin >> emp_ptr->base_address[i];
        }
        for(int i = 0; i < emp_ptr->monthCount; i++)
        {
            if(emp_ptr->base_address[i] < 0)
            {
                cout << "Salary can not be negative." << endl;
                count++;
                break;
            }
        }
        if(count == 0)
        break;
    }
    float extraAmount;
    cout << "Enter extra amount: ";
    cin >> extraAmount;
    calculateDisplayPayroll(emp_ptr, extraAmount);
    return 0;
}

void calculateDisplayPayroll(HR *ptr, float extra){
    float average = 0, max = 0;
    for(int i = 0; i < ptr->monthCount; i++)
    {
        average += ptr->base_address[i];
        if(ptr->base_address[i] > max)
        {
            max = ptr->base_address[i];
        }
    }
    cout << fixed << setprecision(2);
    cout << "\nEmployee Name: " << ptr->employeeName << endl;
    cout << "Job Title " << ptr->jobTitle << endl;
    cout << "Employee Code: " << ptr->employeeCode << endl;
    cout << "All Monthly Salaries: ";
    for(int i = 0; i < ptr->monthCount; i++)
    {
        cout << ptr->base_address[i] << " ";
    }
    cout << "\nAverage Salary: "  << average/ptr->monthCount << endl;
    cout << "Highest Salary: "  << max << endl;
    cout << "Updated Average Salary: "  << (average+extra)/ptr->monthCount << endl;
}