#include<iostream>
using namespace std;

class grandfather
{
        string name;
    public:
        grandfather()
        {
            cout << "Enter name of Grandfather : " ;
            cin >> name;
        }
        void display()
        {
            cout << "\n\nGrandfather's name : " << name << endl;
        }
};
class father : public grandfather
{
        string name;
    public:
        father() : grandfather()
        {
            cout << "Enter name of Father      : " ;
            cin >> name;
        }
        void display()
        {
            cout << "Father's name      : " << name << endl;
        }
};
class son : public father
{
        string name;
    public:
        son() : father()
        {
            cout << "Enter name of Son         : " ;
            cin >> name;
        }
        void display()
        {
            cout << "Son's name         : " << name << endl;
        }
};


int main()
{
    son ob;
    ob.father :: grandfather :: display();
    ob.father :: display();
    ob. display();

    return 0;
}

