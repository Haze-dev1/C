#include<iostream>
using namespace std;

class company
{
public:

string name;
int age;


void show1(string n,int a)
{
    name=n;
    age=a;

    cout<<"Manager"<<endl;
    cout<<"name="<<name<<endl;
    cout<<"Age="<<age<<endl;

}

};

class Manager: public company;
{public:
    void show2(string na,int ag)
    {

        name=na;
        age=ag;

        cout<<"clerk"<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl

    }


};

class clerk: public Manager, public company
{
    public:
    void show3(string nam,int agg)
    {
        name=nam;
        age=agg;

        cout<<"Poen"<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"age="<<age<<endl;
    }
};


int main()
{
    clerk c;
    c.show1("Devansh",18);
    c.show2("Dev",19);
    c.show3("D",30);

    return 0;
}
