// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//creating a swap function to exchange two entities
template <typename T>
void swaping(T &a,T &b)
{
    T temp;
     temp=a;
     a=b;
     b=temp; 
}
//creating a bubblesort function given the array and its size as inputs
template <typename T>
void bubblesort(T a[],int n)
{
    cout<<"\n";
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
          {    
            //Here we need to swap if required 
           if(a[j]>a[j+1]) swaping(a[j],a[j+1]);
           //here we are calling the swap function already declared earlier
          }
    }
}  
//here i am creating a print function to be converted as template afterwards
template <typename T>
void print(T p[],int n)
{
for(int i=0;i<n;i++)    {  cout<<p[i]<<"  "; }
}
int main()
  {
    int a[]= {34,82,13,96,28,5,67,32,7,44,29,9,55};
    //values initialization
    //In the array declaration & initialization the size need not be given in the square brackets like [6]. Instead, it should be kept empty like []
    cout<<"\nArray elements before sorting ...."<<endl;
   int size= sizeof(a)/sizeof(a[0]);  
   // finding the no. of elements of an array
    print(a,size);//calling the print function here 
    //Now the actual bubble sort algorithm 
    bubblesort(a,size);
    cout<<"\nArray elemenets after sorting...."<<endl;
    print(a,size); //calling print function after sorting 
    
    // Now the code is being tested for floating point values 
     float b[]= {34.45f,82.87f,1.23f,9.86f,28.89f,5.11f,6.7f,32.91f,7.38f,44.34f,29.77f,9.87f,5.15f};
      int sizeb= sizeof(b)/sizeof(b[0]);  
    cout<<"\nArray elements before sorting ...."<<endl;
    print(b,sizeb);
    bubblesort(b,sizeb);
    cout<<"\nArray elemenets after sorting...."<<endl;
    print(b,size); 
    
    // Now the code is being tested for characters 
    char ch[]= {'p','s','z','a','c','q','y','l','u','d'};
    int sizec= sizeof(ch)/sizeof(ch[0]);  
    cout<<"\nArray elements before sorting ...."<<endl;
    print(ch,sizec);
    bubblesort(ch,sizec);
    cout<<"\nArray elemenets after sorting...."<<endl;
    print(ch,sizec); 
   return 0;
}