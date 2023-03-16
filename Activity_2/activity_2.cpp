// student --->using  paramatrized constructor 
#include<iostream>
#include<string>
using namespace std;
class student{
    string name,email,dept;
    int rollno,age,phone,sem;
    public: student(string n,string e,string d,int r,int a,int p,int s){
        name=n;
        email=e;
        dept=d;
        rollno=r;
        age=a;
        phone=p;
        sem=s;
    }
    void display(){
    cout<<"student rollno :"<<rollno<<endl;
    cout<<"\nstudent name :"<<name<<endl;
    cout<<"student department :"<<dept<<endl;
    cout<<"student email :"<<email<<endl;
    cout<<"student semester :"<<sem<<endl;
    cout<<"student age :"<<age<<endl;
    cout<<"student phone :"<<phone<<endl;
}
};
int main(){
    string name,email,dept;
    int rollno,age,phone,sem;
    cout<<"\nEnter the student name:";
    cin>>name;
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
    student s(name,email,dept,rollno,age,phone,sem);
    s.display();
    return 0;
}
