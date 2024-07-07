
/// Changes
// 1. Role type int: enum class Role
// 2. Duplicate Code: write one find function
// 3. expressive names: m_money -> rename to m_hourly_rate/m_monthly_salary; m_amount -> m_worked_hours
// 4. dynamic_casts scream that there is a design flaw. Here:
//      Employee is dependent on all subclasses
//      If else statement gets longer for each new class
//      Way to much coupling and not well distributed responsibilities
// 5. Boolean arguments in functions: Not separated responsibilities, one function does two things
// 6. const should be added everywhere
// 7. PayEmployee Methode bei Company geändert, argument vereinfacht

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

constexpr int FIXED_VACATION_DAYS_PAYOUT = 5;

enum class Role
{
    manager,
    president,
    intern
};



class Employee
{
public:
    Employee(string name, Role role)
    : m_name{name}
    , m_role{role}
    , m_vacation_days{30}
    {
    }

    virtual ~Employee()
    {
    }

    virtual void pay_employee() = 0;

    Role get_role()
    {
        return m_role;
    }

    string get_name()
    {
        return m_name;
    }

// Let Employee take a single holiday
void take_a_holiday()
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

// Pay out fixed number of holidays
void pay_out_a_holiday()
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

protected:
    string m_name;
    Role m_role;
    int m_vacation_days;
};


class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(string name, Role role)
    : Employee(name, role)
    , m_hourly_rate{50}
    , m_worked_hours{10}
    {
    }

int get_hourly_rate()
{
    return m_hourly_rate;
}

int get_worked_hours()
{
    return m_worked_hours;
}

void pay_employee() override
{
    cout << "Paying employee " << m_name 
    << " an hourly rate of " << m_hourly_rate
    << ". Total worked hours:" << m_worked_hours << endl;
}

private:
    int m_hourly_rate;
    int m_worked_hours;
};


class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(string name, Role role)
    : Employee(name, role)
    , m_monthly_salary{5000}
    {
    }

int get_monthly_salary()
{
    return m_monthly_salary;
}

void pay_employee() override
{
    cout << "Paying employee " << m_name
    << " monthly salary of " << m_monthly_salary << endl;
}

private:
    int m_monthly_salary;
};


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

    vector<Employee*> find_employee(Role role)
    {
        vector<Employee*> employees;
        for (auto employee : m_employees)
        {
            if (employee->get_role() == role)
            {
                employees.push_back(employee);
            }
        }
        return employees;
    }

    void print_employees_by_role(Role role)
    {
        for (auto employee : find_employee(role))
        {
            cout << employee->get_name() << endl;
        }
    }

    void payEmployee(int index)
    {
        m_employees[index]->pay_employee();
    }

private:
    vector<Employee*> m_employees;
};


int main()
{
    Company myCompany = Company();

    SalariedEmployee salariedEmployee = SalariedEmployee("Louis", Role::manager);
    myCompany.add_employee(&salariedEmployee);
    HourlyEmployee hourlyEmployee1 = HourlyEmployee("Otto", Role::president);
    myCompany.add_employee(&hourlyEmployee1);
    HourlyEmployee hourlyEmployee2 = HourlyEmployee("Peter", Role::intern);
    myCompany.add_employee(&hourlyEmployee2);


    myCompany.print_employees_by_role(Role::manager);
    myCompany.print_employees_by_role(Role::intern);



    myCompany.payEmployee(0);
    myCompany.get_employees()[0]->take_a_holiday();

    return 0;
}