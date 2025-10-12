#include<iostream>
using namespace std; 
class adding{
    private:int a,b;
    public: adding(){a=0;b=0;} //default constructor
    adding(int x, int y){
        a=x;
        b=y;
    }//parameterized constructor
    void display(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }//member function to display values of a and b

        friend adding operator+(adding& ,adding& );
        //friend function declaration to overload + operator
};
    adding operator+(adding& obj1, adding& obj2){//friend function definition to overload + operator
        // adding temp;
        // temp.a = obj1.a + obj2.a;
        // temp.b = obj1.b + obj2.b;
        // return temp;
        return adding(obj1.a + obj2.a, obj1.b + obj2.b);//also this way of returning object
    }
    

int main(){
    adding obj1(5,10), obj2(15,20), obj3;
    cout<<"Object 1 values: "<<endl;
    obj1.display();
    cout<<"Object 2 values: "<<endl;
    obj2.display();
    obj3 = obj1 + obj2;//using overloaded + operator
    cout<<"Object 3 values after addition: "<<endl;
    obj3.display();
    return 0;
}