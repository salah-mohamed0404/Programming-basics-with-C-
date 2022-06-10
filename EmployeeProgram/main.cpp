#include <iostream>

using namespace std;

int main()
{
    string name[200];
    int age[200]{-11}, salary[200];
    char gender[200];

    int order, added{0};
    while(true)
    {
        cout<<"Enter your choice:\n1) Add new employee\n";
        cout<<"2) Print all employees\n3) Delete by age\n";
        cout<<"4) Update salary by name\n";

        cin>>order;
        if(!(order>=1&&order<=4))
        {
            cout<<"invalid order, try again\n";
            continue;
        }

        switch(order)
        {
            case 1:
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
                break;
            case 2:
                for(int i=0; i<=added; i++)
                    if(age[i]!=0)
                        cout<<name[i]<<" "<<age[i]<<" "
                        <<salary[i]<<" "<<gender[i]<<endl;
                break;
            case 3:
                int start,End;
                cout<<"Enter start and end age";
                cin>>start>>End;

                for(int i=0; i<=added; i++)
                    if(age[i]>=start&&age[i]<=End)
                        age[i]=0;
                break;
            case 4:
                cout<<"Enter the name and salary ";
                string fname;
                int Nsalary;
                cin>>fname>>Nsalary;

                for(int i=0; i<=added; i++)
                    if(name[i]==fname)
                        salary[i]=Nsalary;
        }

    }

    return 0;
}
