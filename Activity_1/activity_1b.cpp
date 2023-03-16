#include<iostream>
using namespace std;
class student{
    char name[20],branch[20],subject[34];
    int rollno ,semester;
    public :
    student();
    ~student();
    void read();
    void display();
};
student::student(){
    cout<<"\nThis is constructor"<<endl;
}
void student :: read(){
    cout<<"\nEnter the student name:";
    cin>>name;
    cout<<"\nEnter the Branch of student:";
    cin>>branch;
    cout<<"\nEnter the subject:";
    cin>>subject;
    cout<<"\nEnter the rollno  of student:";
    cin>>rollno;
    cout<<"\nEnter the semester of student:";
    cin>>semester;
    cout<<endl;
}
void student::display(){
    cout<<"<-------This is the details of the student---->"<<endl;
    cout<<"\nstudent name :"<<name<<endl;
    cout<<"student branch :"<<branch<<endl;
    cout<<"student subject :"<<subject<<endl;
    cout<<"student rollno :"<<rollno<<endl;
    cout<<"student semester :"<<semester<<endl;
}
student::~student(){
    cout<<"Student details is closed:";
}
int main(){
    student p;
    p.read();
    p.display();
    return 0;
}
