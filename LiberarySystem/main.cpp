#include <bits/stdc++.h>//every thing in it

using namespace std;
#define siz 1000
int len{0},user_num{0};


struct library_books{
    int id;
    string name;
    int quan;
    int num_borrowed;

    void add(int _id, string _name, int _quan){
        id = -1;
        name = _name;
        quan =-1;
        num_borrowed=0;
    }

};
library_books books[siz];

struct user{
    int id;
    string name;
    string bbooks[siz];
    int index;

    user(){
        name="not found";
        index=0;
    }

    void add(int _id, string _name){
        id = _id, name = _name;
    }

    void borrow(string _book, int i){
        bbooks[index++]=_book;
        books[i].num_borrowed++;
    }

};
user users[siz];

int menu(){
    int choice;

    cout<<"\nLibrary menu:\n"
    <<"1) Add a book\n"
    <<"2) Search books by prefix\n"
    <<"3) Print who borrowed book by name\n"
    <<"4) Print the library by ID\n"
    <<"5) Print the library by name\n"
    <<"6) Add user\n"
    <<"7) User borrow a book\n"
    <<"8) User return a book\n"
    <<"9) Print users\n"
    <<"10) Exit\n";

    cout<<"\nEnter your menu choice [1 - 10]: ";
    cin>>choice;

    return choice;

}

void add_book(){
    int _id,_quan;
    string _name;

    cout<<"Enter ID, name and quantity: ";
    cin>>_id>>_name>>_quan;

    books[len++].add(_id,_name,_quan);
}

void search_books_by_prefix(){
    string wbook;
    cin>>wbook;

    for(int i=0; i<=len; i++){
            string s=books[i].name;
            bool found=true;

            for(int j=0; j<(int)wbook.size(); j++){
                if(s[j]!=wbook[j]){
                    found=0;
                    break;
                }
            }

            if(found){
                cout<<s<<" ";
            }
        }

    cout<<endl;
}

bool by_id(library_books &a, library_books &b){
    return a.id < b.id;
}

void print_library_by_id(){
    sort(books,books+len,by_id);

    cout<<"******************************************\n"
        <<"id , name, quantity\n";
    for(int i=0; i<len; i++)
        cout<<books[i].id<<" "<<books[i].name<<" "<<books[i].quan<<endl;
}

bool by_name(library_books &a, library_books &b){
    if(a.name!=b.name)
        return a.name<b.name;
    return a.id<b.id;
}

void print_library_by_name(){
    sort(books,books+len,by_name);

     cout<<"******************************************\n"
        <<"id , name, quantity\n";
    for(int i=0; i<len; i++)
        cout<<books[i].id<<" "<<books[i].name<<" "<<books[i].quan<<endl;

}

void add_user(){
    int _id;
    string _name;

    cout<<"enter the ID and the name: ";
    cin>>_id>>_name;
    users[user_num++].add(_id,_name);
}

int is_there(string _book){
    for(int i=0; i<=len; i++){
        if(books[i].name == _book)
            return i;
    }
    return -1;
}

void user_borrow_book(){
    string _book;

    cout<<"Enter book name you want to borrow: ";
    cin>>_book;

    int ind=is_there(_book);

    if(ind==-1){
        cout<<"invalid book name\n";
        return;
    }
    if(books[ind].num_borrowed>=books[ind].quan){
        cout<<"the is no enough books to borrow\n";
        return;
    }

    string _user;
    cout<<"Enter the user name: ";
    cin>>_user;

    for(int i=0; i<=user_num; i++){
        if(_user==users[i].name){
            users[i].borrow(_book,ind);
            cout<<"Success\n";
            break;
        }
        cout<<"no user found\n";
    }
}

void library_system(){
    while(true){
        int choice = menu();

        if(choice == 1)
            add_book();
        else if(choice == 2)
            search_books_by_prefix();
//        else if(choice == 3)
//            print_who_borrowed_book_by_name();
        else if(choice == 4)
            print_library_by_id();
        else if(choice == 5)
            print_library_by_name();
        else if(choice == 6)
            add_user();
        else if(choice == 7)
            user_borrow_book();
//        else if(choice == 8)
//            user_return_book();
//        else if(choice == 9)
//            print_users();
        else
            return;
    }
}

int main()
{
    library_system();

    return 0;
}
