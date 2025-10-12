#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
        point(){
            x=0;
            y=0;
        }
        point(int a,int b){
            x=a;
            y=b;
        }
        void show(){
            cout<<"("<<x<<","<<y<<")"<<endl;
        }
        point operator+(point obj){
            point temp;
            temp.x=x+obj.x;
            temp.y=y+obj.y;
            return temp;
        }
        point operator-(point obj){
            point temp;
            temp.x=x-obj.x;
            temp.y=y-obj.y;
            return temp;
        }
        point operator/(point obj){
            point temp;
            temp.x=x/obj.x;
            temp.y=y/obj.y;
            return temp;
        }
};
int main(){
    point a1(9,3),a2(4,9),a3,a4,a5;
    cout<<"First point is:";
    a1.show();
    cout<<"Second point is:";
    a2.show();
    cout<<"Adding two points:";
    a3=a1+a2;
    a3.show();
    cout<<"Subtracting two points:";
    a4=a1-a2;
    a4.show();
    cout<<"ratio is:";
    // a5=a3/a4;
    a5.show();
return 0;
}