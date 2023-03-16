#include<iostream>
#include<string>
using namespace std;
class student{
    private: string name,email,dept,fathername;
    int rollno,age, phone,sem; 
    public:void input(){
        cout<<"\nEnter the student name:";
        cin>>name;
        cout<<"\nEnter the student father name:";
        cin>>fathername;
        cout<<"\nEnter the email:";
        cin>>email;
        cout<<"\nEnter the Branch of student:";
        cin>>dept;
        cout<<"\nEnter the rollno:";
        cin>>rollno;
        cout<<"\nEnter the age:";
        cin>>age;
        cout<<"\nEnter the phone of student:";
        cin>>phone;
        cout<<"\nEnter the semester of student:";
        cin>>sem;
        cout<<endl;
    }
    void display(){
        cout<<"student name:"<<name<<endl;
        cout<<"student father name:"<<fathername<<endl;
        cout<<"student email:"<<email<<email<<endl;
        cout<<"student department:"<<dept<<endl;
        cout<<"student rollno:"<<rollno<<endl;
        cout<<"student age:"<<age<<endl;
        cout<<"student phone:"<<phone<<endl;
        cout<<"student semester:"<<sem<<endl;
    }
    void update(){
        cout<<"---------->updated information<------------";
        cout<<"\nEnter the student name:";
        cin>>name;
        cout<<"\nEnter the student father name:";
        cin>>fathername;
        cout<<"\nEnter the email:";
        cin>>email;
        cout<<"\nEnter the Branch of student:";
        cin>>dept;
        cout<<"\nEnter the rollno:";
        cin>>rollno;
        cout<<"\nEnter the age:";
        cin>>age;
        cout<<"\nEnter the phone of student:";
        cin>>phone;
        cout<<"\nEnter the semester of student:";
        cin>>sem;
        cout<<endl;
    }
    void clear(){
        name = "";
        fathername = "";
        email = "";
        dept = "";
        rollno = 0;
        age = 0;
        phone = 0;
        sem = 0;

    }
};
int main(){
    student s;
    while(1){
        cout<<"\n Choose operation you want to preform";
        cout<<"\nPress 1 to insert record of student";
        cout<<"\nPress 2 to update record of student";
        cout<<"\nPress 3 if you want to display ";
        cout<<"\nPress 4 to delete";
        cout<<"\nEnter your choice:";
        int ch;
        cin>>ch;
        switch (ch){
            case 1:
            s.input();
            break;
            case 2:
            s.update();
            break;
            case 3:
            s.display();
            break;
            case 4:
            s.clear();
            break;
            default :
            cout<<"invalid choice";
            break;
        }
    }
    return 0;
}