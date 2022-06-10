#include <iostream>

using namespace std;

const int max_specializatian=20,max_spots=5;

string names[max_specializatian][max_spots+1];
int status[max_specializatian][max_spots+1];
int len_spots[max_specializatian];

int menu(){
    int choice;
    cout<<"enter your choice:\n"
        <<"1) Add new patient\n"
        <<"2) Print all patients\n"
        <<"3) Get next patient\n"
        <<"4) Exit\n";

    cin>>choice;
    return choice;

}

//to add one in the first
void shift_right(int spec){
    int len=len_spots[spec];
    for(int i=len-1; i>=0; i--){
        names[spec][i+1] = names[spec][i];
        status[spec][i+1] = status[spec][i];
    }
}

void add_new_patient(){
    int spec,st;
    string name;

    cout<<"enter the specailization,name and statue: ";
    cin>>spec>>name>>st;

    int pos=len_spots[spec];
    if(pos>=max_spots){
        cout<<"this specailization is full ,we can't add more\n";
        return;
    }

    if(st==0){
        names[spec][pos]=name;
        status[spec][pos]=st;
        len_spots[spec]++;
    }
    else{
        shift_right(spec);
        names[spec][0]=name;
        status[spec][0]=st;
        len_spots[spec]++;
    }
}

//print patient in every spec
void print_patient(int spec){
    int len=len_spots[spec];

    if(len==0)
        return;

    cout<<"there are "<<len<<" patients in specialization "<<spec<<endl;
    for(int i=0; i<len; i++){
        cout<<names[spec][i]<<" ";
        if(status[spec][i])
            cout<<"urgent\n";
        else
            cout<<"regular\n";
    }
    cout<<endl;
}

//print spec by spec
void print_all_patients(){
    for(int spec=0; spec<max_specializatian; spec++){
        print_patient(spec);
    }
}

//to delete the first one
void shift_left (int spec){
    int len=len_spots[spec];
    for(int i=1; i<len; i++){
        names[spec][i-1] = names[spec][i];
        status[spec][i-1] = status[spec][i];
    }
    len_spots[spec]--;
}

void get_next_patient(){
    int spec;
    cout<<"Enter the specializition: ";
    cin>>spec;

    int len= len_spots[spec];

    if(len==0){
        cout<<"No patient till now,Doc\n";
        return;
    }

    cout<<names[spec][0]<<" Please go to the Doc\n";

    shift_left(spec);
}

void hospital_system(){
    while(true){
        int choice=menu();
        if(choice==1)
            add_new_patient();
        else if(choice==2)
            print_all_patients();
        else if(choice==3)
            get_next_patient();
        else
            break;
    }
}

int main()
{
    hospital_system();

    return 0;
}
