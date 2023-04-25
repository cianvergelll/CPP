#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18)
        Age = age;
    }
    int getAge() {
        return Age;
    }
    void IntroduceYourself() {
        cout << "Hello I am " << Name << "\n";
        cout << "I work in " << Company << "\n";
        cout << "I am " << Age << "\n";
    }
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main() {
    Employee Employee1 = Employee("Ian", "Apple", 20);
    Employee1.IntroduceYourself();

    Employee Employee2 = Employee("Angel Ann", "Facebook", 17);
    Employee2.IntroduceYourself();

    Employee1.setAge(15);
    cout << Employee1.getName() << " is " << Employee1.getAge() << "years old";

    return 0;
}
