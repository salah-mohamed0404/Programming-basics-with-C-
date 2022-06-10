#include <iostream>

using namespace std;

string name[200];
int age[200]{-11}, salary[200];
char gender[200];
int added{0};

int menu(){
    int order=0;
    while(order==0){
         cout<<"Enter your choice:\n1) Add new employee\n";
        cout<<"2) Print all employees\n3) Delete by age\n";
        cout<<"4) Update salary by name\n";

        cin>>order;
        if(!(order>=1&&order<=4))
        {
            cout<<"invalid order, try again\n";
            order=0;
        }
    }
    return order;
}

void read_employee(){
    cout<<"Enter name: ";
    cin>>name[added];
    cout<<endl;

    cout<<"Enter age: ";
    cin>>age[added];
    cout<<endl;

    cout<<"enter salary: ";
    cin>>salary[added];
    cout<<endl;

    cout<<"enter gender: ";
    cin>>gender[added];
    cout<<endl;

    added++;
}

void print_employees(){
    cout<<"*******************************"<<endl;
    for(int i=0; i<=added; i++)
        if(age[i]!=0)
            cout<<name[i]<<" "<<age[i]<<" "
                <<salary[i]<<" "<<gender[i]<<endl<<endl;
}

void delete_by_age(){
    int start,End;
    cout<<"Enter start and end age";
    cin>>start>>End;

    for(int i=0; i<=added; i++)
        if(age[i]>=start&&age[i]<=End)
            age[i]=0;
}

void update_salary_by_name(){
    cout<<"Enter the name and salary ";
    string fname;
    int Nsalary;
    cin>>fname>>Nsalary;

    for(int i=0; i<=added; i++)
        if(name[i]==fname)
            salary[i]=Nsalary;

}

void employee_system()
{
    while(true){
        int order=menu();

        switch(order){
            case 1:
                read_employee();
                break;
            case 2:
                print_employees();
                break;
            case 3:
                delete_by_age();
                break;
            case 4:
                update_salary_by_name();

    }
    }
}

int main()
{
    employee_system();

    return 0;
}
