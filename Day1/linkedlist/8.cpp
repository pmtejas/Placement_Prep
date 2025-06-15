#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    int id;
    float salary;
    Employee(string name1, int id1, float salary1)
    {
        name = name1;
        id = id1;
        salary = salary1;
    };
    Employee(string name1, int id1)
    {
        name = name1;
        id = id1;
        salary = 345;
    }
    Employee()
    {
        name = "Akshay";
        id = 0;
        salary = 567;
    }
    void createEmployees(vector<Employee> &Employees)
    {
        int n;
        cout << "How many Employees i have to create : " << endl;
        cin >> n;
        Employee e[n];
        for (int i = 0; i < n; i++)
        {
            string name;
            int id;
            float salary;
            cout << "Enter the name of Employee " << i + 1 << ": ";
            cin >> name;
            cout << "Enter the id of Employee " << i + 1 << ": ";
            cin >> id;
            cout << "Enter the salary of Employee " << i + 1 << ": ";
            cin >> salary;
            e[i] = Employee(name, id, salary);
        }
        for (int i = 0; i < n; i++)
        {
            Employees.push_back(e[i]);
        }
    }
    void displayEmployees(const vector<Employee> &Employees)
    {
        for (int i = 0; i < Employees.size(); i++)
        {
            cout << "Employee " << i + 1 << ": " << endl;
            cout << "Name: " << Employees[i].name << endl;
            cout << "ID: " << Employees[i].id << endl;
            cout << "Salary: " << Employees[i].salary << endl;
        }
    }
};

int main()
{
    vector<Employee> Employees;
    Employee e;
    e.createEmployees(Employees);
    e.displayEmployees(Employees);
    cout << "Total number of Employees created: " << Employees.size() << endl;
    return 0;
}