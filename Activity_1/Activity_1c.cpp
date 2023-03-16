#include<iostream>
using namespace std;
class course{
    char name[20];
    int ID ,credits;
    public :
    course();
    ~course();
    void input();
    void display();
};
course::course(){
    cout<<"\n This is constructor";
}
void course::input(){
    cout<<"\nEnter the  name of course:";
    cin>>name;
    cout<<"\nEnter the course id:";
    cin>>ID;
    cout<<"\nEnter the course credit:";
    cin>>credits;
    cout<<endl;
}
void course::display(){
    cout<<"<---------This is the details of the student------->"<<endl;
    cout<<"\ncourse name :"<<name<<endl;
    cout<<"course ID :"<<ID<<endl;
    cout<<"credits:"<<credits<<endl;
}
course::~course(){
    cout<<"course details is closed";
}
int main(){
    course p;
    p.input();
    p.display();
    return 0;
}
