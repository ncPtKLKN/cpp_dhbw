#include <string>
#include <iostream>
#include <vector>

using namespace std;

constexpr int FIXED_VACATION_DAYS_PAYOUT = 5;


/// @brief basic representation of an employee
class Employee
{
public:
    Employee(string name, string role)
    : m_name{name}
    , m_role{role}
    , m_vacation_days{30}
    {
    }

    virtual ~Employee()
    {
    }

    string get_role()
    {
        return m_role;
    }

    string get_name()
    {
        return m_name;
    }

// Let Employee take a single holiday or pay out 5 holidays
void take_a_holiday(bool payout)
{
    if (payout == true)
    {
        // check if there are enough vacation days left
        if (m_vacation_days < FIXED_VACATION_DAYS_PAYOUT)
        {
            cout << "Not enough vacation days left." << endl;
            cout << "Remaining days:" << m_vacation_days << endl;
        }
        m_vacation_days -= FIXED_VACATION_DAYS_PAYOUT;
        cout << "Paying out a holiday. Holidays left: " << m_vacation_days << endl;
    }
    else
    {
        if (m_vacation_days < 1)
        {
            cout << "You do not have enough days left. Back to work!" << endl;
        }
        else
        {
            m_vacation_days -= 1;
            cout << "Have fun on your holidays!" << endl;
        }
    }

}

private:
    string m_name;
    string m_role;
    int m_vacation_days;
};


/// @brief Hourly payed Employee
class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(string name, string role)
    : Employee(name, role)
    , m_money{50}
    , m_amount{10}
    {
    }

int get_money()
{
    return m_money;
}

int get_amount()
{
    return m_amount;
}

private:
    int m_money;
    int m_amount;
};


/// @brief Monthly payed Employee
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(string name, string role)
    : Employee(name, role)
    , m_money{5000}
    {
    }

int get_money()
{
    return m_money;
}

private:
    int m_money;
};


/// @brief Basic representation of a company
class Company
{
public:
    Company()
    : m_employees{}
    {
    }

    vector<Employee*> get_employees()
    {
        return m_employees;
    }

    void add_employee(Employee* employee)
    {
        m_employees.push_back(employee);
    }

    vector<Employee*> find_managers()
    {
        vector<Employee*> managers;
        for (auto employee : m_employees)
        {
            if (employee->get_role() == "manager")
            {
                managers.push_back(employee);
            }
        }
        return managers;
    }

    vector<Employee*> find_presidents()
    {
        vector<Employee*> presidents;
        for (auto employee : m_employees)
        {
            if (employee->get_role() == "president")
            {
                presidents.push_back(employee);
            }
        }
        return presidents;
    }

    vector<Employee*> find_interns()
    {
        vector<Employee*> intern;
        for (auto employee : m_employees)
        {
            if (employee->get_role() == "intern")
            {
                intern.push_back(employee);
            }
        }
        return intern;
    }

    void pay_employee(Employee* employee)
    {
        if (dynamic_cast<SalariedEmployee*>(employee) != nullptr)
        {
            SalariedEmployee* salariedEmployee = dynamic_cast<SalariedEmployee*>(employee);
            cout << "Paying employee " << salariedEmployee->get_name() 
            << " monthly salary of " << salariedEmployee->get_money() << endl;
        }
        else if (dynamic_cast<HourlyEmployee*>(employee) != nullptr)
        {
            HourlyEmployee* hourlyEmployee = dynamic_cast<HourlyEmployee*>(employee);
            cout << "Paying employee " << hourlyEmployee->get_name() 
            << " an hourly rate of " << hourlyEmployee->get_money()
            << ". Total worked hours:" << hourlyEmployee->get_amount() << endl;
        }
    }

private:
    vector<Employee*> m_employees;
};

int main()
{
    Company myCompany = Company();

    SalariedEmployee salariedEmployee = SalariedEmployee("Louis", "manager");
    myCompany.add_employee(&salariedEmployee);
    HourlyEmployee hourlyEmployee1 = HourlyEmployee("Otto", "president");
    myCompany.add_employee(&hourlyEmployee1);
    HourlyEmployee hourlyEmployee2 = HourlyEmployee("Peter", "intern");
    myCompany.add_employee(&hourlyEmployee2);

    // print managers
    for (auto manager : myCompany.find_managers())
    {
        cout << manager->get_name() << endl;
    }

    // print interns
    for (auto intern : myCompany.find_interns())
    {
        cout << intern->get_name() << endl;
    }

    // pay employee
    myCompany.pay_employee(myCompany.get_employees()[0]);
    myCompany.get_employees()[0]->take_a_holiday(false);

    return 0;
}