#include<iostream>
#include<cstring>
using namespace std;
class employee{
    private:
    int emp_id;
    string emp_name;
    int emp_salary;
    public:
        void get(int id,string name,int salary){
            emp_id = id;
            emp_name = name;
            emp_salary = salary;
        }
        void show(){
            cout<<"Employee name: "<<emp_name<<endl;
            cout<<"Employee id:"<<emp_id<<endl;
            cout<<"Employee salary:"<<emp_salary<<endl;
        }
};
int main(){
    employee emp;
    emp.get(1101,"asd",1000);
    emp.show();
}