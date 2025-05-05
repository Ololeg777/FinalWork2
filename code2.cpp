#include <iostream>
 
class Person 
{
    std::string name;
    unsigned age;
public:
    Person(std::string p_name, unsigned p_age)
    { 
        name = p_name; 
        age = p_age;
    }
    Person(const Person &p) = delete;   // ������� �����������
    void print() 
    {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }
};
int main()
{
    Person tom{"Tom", 38};
    //Person tomas{tom};    // ����������� ����������� �����������
}