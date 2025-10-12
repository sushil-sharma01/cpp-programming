#include <iostream>
using namespace std;
int main(){
    int a[5]={5,4,3,2,1};
    cout<<"Array before sorting: "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<5-1;i++){
       for(int j=i+1; j<5; j++){
           if(a[i]>a[j]){
               int temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
   }
   cout<<"Array after sorting: "<<endl;
   for(int i=0;i<5;i++){
       cout<<a[i]<<" ";
   }
   return 0;
}