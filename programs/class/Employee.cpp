#include<iostream>
using namespace std;

class Employee{
    int Id;
    char Name[20];
    int Age;
    long Salary;

    public:
        void GetData();
        void PutData();
};

void Employee::GetData(){
    cout<<"\n Enter Employee Id";
    cin>>Id;

    cout<<"\n Enter Employee Name";
    cin>>Name;

    cout<<"\n Enter Employee Age";
    cin>>Age;

    cout<<"\n Enter Employee Salary";
    cin>>Salary;
}

void Employee::PutData(){
    cout<<"\n"<<Id<<"\t"<<"Name"<<"\t"<<Age<<"\t"<<Salary;
}

int main(){
    int i;
    Employee E[4];
    for(i=0; i<4;i++){
        cout<<"\n Enter detail's of"<<i+1<<"Employee";
        E[i].GetData();
    }

    cout<<"\n Data of Employees";
    for(i =0; i<4; i++)
        E[i].PutData();
}
