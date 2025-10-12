#include<iostream>
#include<cstring>
using namespace std;
class student{
     private:
     int rollno;
     string name;
     char branch[20];
     public:
    void get(){
        cout<<"Enter the student details"<<endl;
        cout<<"enter the student roll no: ";
        cin>>rollno;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the branch:";
        cin>>branch;
    }     
    void show(){
        cout<<"Student details:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Branch: "<<branch;
    }
};
int main(){
    student stu;
    stu.get();
    stu.show();
    return 0;
}