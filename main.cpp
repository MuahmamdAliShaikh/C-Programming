/*using namespace std;
//I am loading a iostream library
#include <iostream>
// This is the main function
int main(){
// Cout is for standard output
    // cout<<"Hello World";
    // return 0;
    // int a=10;
    // cout<<a;
    // char a='z';
    //cout<<a;
    // bool a = true;
    // cout<<a; 


}*/
// using namespace std;
// #include <iostream>
// int main(){
//     // Cin is for standard Standard input
//     int a,b;
//     cout<<"Enter the number: ";
//     cin>>a;
//     cout<<"Enter the another number: ";
//     cin>>b;
//     cout<<"Sum of two numbers is: "<<a+b;
//     return 0;
// }
// Data types
// using namespace std;
// #include <iostream>
// int main(){
//     // Creating variables
//     int myNum = 5;               // Integer (whole number)
//     float myFloatNum = 5.99;     // Floating point number
//     double myDoubleNum = 9.98;   // Floating point number
//     char myLetter = 'D';         // Character
//     bool myBoolean = true;       // Boolean
//     string myString = "Hello";   // String
    
//     // Print variable values
//     cout << "int: " << myNum << "\n";
//     cout << "float: " << myFloatNum << "\n";
//     cout << "double: " << myDoubleNum << "\n";
//     cout << "char: " << myLetter << "\n";
//     cout << "bool: " << myBoolean << "\n";
//     cout << "string: " << myString << "\n";
 
//     return 0;
// }
/*using namespace std;
#include <iostream>
int main(){
    int a,b;
    cout<<"Enter value of A:";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    cout<<a+b;
    cout<<"\n";
    cout<<a-b;
    cout<<"\n";
    cout<<a*b;
    cout<<"\n";
    cout<<a/b;
    cout<<"\n";
    return 0;
}
*/
// using namespace std;
// #include <iostream>
// int main(){
// logical operators
//     // bool a=true;
//     // bool b=false;
// a or a
//     // cout<<(a||a); 
//     bool a=true;
//     bool b=false;
//     cout<<(a&&a);
//     return 0;

// }
// using namespace std;
// #include <iostream>
// int main(){
// relational operators
    // int a=10;
    // int b=20;
    // cout<<(a<b);
    // int a=10;
    // int b=20;
    // cout<<(a==b);
//     int a=10;
//     int b=20;
//     cout<<(a!=b);
    
// }
// using namespace std;
// #include <iostream>
// int main(){
//     int a=10;
//     int b=20;
//     cout<<((b<a)?b:a);
//     return 0;
    
// }
// using namespace std;
// #include <iostream>
// #include <cstring>
// int main(){
//     char c1[]="Great";
//     char c2[]="Learning";

//     cout<<"Concatenation: "<<strcat(c1,c2)<<"\n";
//     cout<<"Copy: "<<strcpy(c1,c2)<<"\n";
//     cout<<"Length: "<<strlen("ABC")<<"\n";


//     return 0;
    
// }
// using namespace std;
// #include <iostream>
// #include <math.h>
// int main(){
//     int a = 0;
//     cout<<"sin: "<<sin(a);
//     cout<<"\ncos: "<<cos(a);
//     cout<<"\ntan: "<<tan(a);
//     cout<<"\nsquare root: "<<sqrt(a);
//     cout<<"\npower: "<<pow(a,3);

// }
// using namespace std;
// #include <iostream>
// int main(){
//     bool machine_is_working = true;
//     cout<<"Since this machine is working,its value is: "<<machine_is_working<<"\n";
//     machine_is_working = false;
//     cout<<"The machine has stopped operating"<<"Now its value is: "<<machine_is_working<<"\n";
//     return 0;
// }
// using namespace std;
// #include <iostream>
// int main(){
//     int a=10;
//     int b=20;
//     int c=50;
// if (a>b){
//     if (a>c){
//         cout<<"A is the greatest";
//     }
    
// }
// else{
//     if(b>c){
//         cout<<"B is the greatest";
//     }
//     else{
//         cout<<"C is the greatest";
//     }

// } 
//     return 0;
// }
// using namespace std;
// #include <iostream>
// int main(){
//     int a=60;
//     int b=20;
//     int c=50;

//     if((a>b)&&(a>c)){
//         cout<<"A is the greatest";
//     }
//     else if((b>a)&&(b>c)){
//         cout<<"B is the greatest";

//     }
//     else{
//         cout<<"C is the greatest";
//     }
//     return 0;
// }
// loops of C++
// using namespace std;
// #include <iostream>
// int main(){
//     // int n=20;
//     // for(int i=0;i<n;i++){
//     //     cout<<i<<" ";

//     // }
//     int i=15;
//     while(i<25){
//         cout<<i<<" ";
//         i=i+1;
//     }

//     return 0;
    

// }

// using namespace std;
// #include <iostream>
// int main(){
//     for(int i=0;i<5;i++){
//         for (int j=0;j<=i;j++){
//             cout<<"*";

//         }
//         cout<<"\n";  
//     }



//     return 0;
// }
// using namespace std;
// #include <iostream>
// int main(){
//     for(int i=5;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";

    


//     }
//     return 0;

// }

// using namespace std;
// #include <iostream>
// int main(){
//     for (int i=1,k=0;i<=5;i++,k=0){
//         for(int j=1;j<=5-i;j++){
//             cout<<" ";
//         }
//         while(k!=2*i-1){
//             cout<<"*";++k;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// integer type array
// using namespace std;
// #include <iostream>
// int main(){

//     int a[5]={1,2,3,4,5};
    
//     for (int i=0;i<=4;i++){
//         cout<<a[i]<<" ";
//     }



//     return 0;

// }
// Character Array
// using namespace std;
// #include <iostream>
// int main(){
//     char c[5]={'h','e','l','l','o'};
//     for (int i=0;i<=4;i++){
//         cout<<c[i]<<" ";
//     }
//     return 0;
// }

// String Array
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
//   for (int i = 0; i < 4; i++) {
//     cout << cars[i] << "\n";
//   }
//   return 0;
// }


// using namespace std;
// #include <iostream>
// int main(){
//     int a[5];
//     cout<<"Enter values in the array: ";
//     for(int i=0;i<5;i++){
//         cin>>a[i];

//     }
//     cout<<"\n";
//     cout<<"The values entered by you are: \n";
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
// 2D Array in C++
// using namespace std;
// #include <iostream>

// int main(){
//     int a[3][3];
//     int n=1;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             a[i][j]=n;
//             n++;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;

// }

// 2D Array best example:
// using namespace std;
// #include <iostream>

// int main(){
//     int n=1;
//     int m=11;
//     int a[3][3];
//     int b[3][3];
//     int c[3][3];
//     for (int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             a[i][j]=n;
//             n++;
//         }
//     }
//     cout<<"Values of Array A:\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<"\n";
        
//     }
//     for (int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             b[i][j]=m;
//             m++;
//         }
        
//     }
//     cout<<"\nValues of Array B:\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<b[i][j]<<" ";
//         }
//         cout<<"\n";
        
//     }
//     for (int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             c[i][j]=a[i][j]+b[i][j];
            
//         }
//     }
//     cout<<"\nValues of Array C:\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<c[i][j]<<" ";
//         }
//         cout<<"\n";
        
//     }


//     return 0;

// }
// #include<iostream>;
// using namespace std;
// int main(){
//     string name="Great Learning";
//     string *ptr=&name;
//     cout<<"Value  in variable : "<<name;
//     cout<<"\n\n";
//     cout<<"Address of variable: "<<ptr;
//     cout<<"\n\n";
//     cout<<"Address of variable: "<<&name;
//     return 0;

// }
// Functions
// #include<iostream>;
// using namespace std;
// int add(int x,int y){
//         return x+y;
//     }
// int main(){
//     cout<<add(100,30);
//     return 0;
// }

// Functions Overloding
// #include <iostream>
// using namespace std;
// int add(int x,int y){
//     return x+y;
// }
// int add(double x,double y){
//     return x+y;
// }

// int main(){ 
//     cout<<"Add int: "<<add(10,20);
//     cout<<"\nAdd double: "<<add(3.12,8.32);
// }

// Classes which is real world entity
// User define data type

// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     int id;
//     string name;
//     //Void is the method
//     void put_details(int i,string n){
//         id=i;
//         name=n;

//     }

//     void get_details(){
//         cout<<"id: "<<id;
//         cout<<"\nname: "<<name;

//     }
// };
// int main(){
//     Student s1;   #s1 is the instance of the class
//     int s_id;
//     string s_name;
//     cout<<"Enter id of student: ";
//     cin>>s_id;
//     cout<<"Enter name of student: ";
//     cin>>s_name;
//     s1.put_details(s_id,s_name);
//     s1.get_details();
// }
// Constructors
// // It is the function in which the name of it is similar like the name of class
// #include<iostream>
// using namespace std;
// class MyClass{
//     public:
//     int a,b;
//     // Here is the constructor below
//     MyClass(int x,int y){a=x;b=y;}
//     void print(){
//         cout<<"a: "<<a<<"\n"<<"b: "<<b;
//     }
    
// };
// int main(){
//         MyClass s1(10,20); #s1 is the object of MyClass
//         s1.print();
//         return 0;

        
//     }
// Inheritance
// Inheritance in which two classes one is parent class and the other one is child class.The child class can easily inherit the parent class

// using namespace std;
// #include <iostream>
// class Dimension{
//     public:
//     float side = 10.00;

// };
// class Square:public Dimension{
//     public:
//     double area(double x){
//         return (x*x);
//     }
// };
// int main(){
//     Square s1;
//     cout<<"Area: "<<s1.area(s1.side);
//     return 0;
// }
// using namespace std;
// #include <iostream>
// class Vehicle{
//     public:

//     int mileage=30;
//     int cost=500;
//     void put_vehicle_details(){
//         cout<<"I am a Vehicle";
//         cout<<"\nMileage of Vehicle is: "<<mileage;
//         cout<<"\nCost: "<<cost;
//     }

// };
// class Car:public Vehicle{
//     public:
//     string color="blue";
//     int tyres=4;
//     void show_car_details(){
//         cout<<"\nI am a car";
//         cout<<"\nColor of car is: "<<color;
//         cout<<"\nNumber of tyres in car are: "<<tyres;


//     }
// };
// int main(){
//     Car c1;
//     c1.put_vehicle_details();
//     c1.show_car_details();
//     return 0;
// }

// #Program of Multi Inheritance
// using namespace std;
// #include <iostream>
// class GrandParent{
//     public:
//     string name;
//     void get_name(string n){
//         name=n;
//     }
//     void put_name(){
//         cout<<"Name is: "<<name;
//     }
// };
// class Parent:public GrandParent{
//     public:
//     int age;
//     void get_age(int a){
//         age=a;
//     }
//     void put_age(){
//         cout<<"Age is: "<<age;
//     }


// };

// class Child:public Parent{
//     public:
//     string gender;
//     void get_gender(string c){
//         gender=c;
//     }
//     void put_gender(){
//         cout<<"Gender is: "<<gender;
//     }


// };
// int main(){
//     Child c;
//     c.get_name("Ali Shaikh\n");
//     c.get_gender("Male\n");
//     c.get_age(20);

//     c.put_name();
//     c.put_gender();
//     c.put_age();

//     return 0;
// }

// using namespace std;
// #include <iostream>
// class Parent1{
//     public:;
//     void par1(){
//         cout<<"This is the parent1\n";
//     }
    
// };
// class Parent2{
//     public:;
//     void par2(){
//         cout<<"This is the parent2\n";
//     }
// };
// class Child:public Parent1,public Parent2{
//     public:
//     void show_child(){
//         cout<<"I am a Child\n";
//     }
// };

// int main(){
//     Child a;
//     a.par1();
//     a.par2();
//     a.show_child();
// }

// File handiling 
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     // ofstream Myfile("ABCD.txt");
//     // Myfile<<"This is sparata!";
//     // Myfile.close();

//     string myText;
//     ifstream Myreadfile("ABCD.txt");
//     while(getline(Myreadfile,myText))#getline is used to read file line by line
//     cout<<myText;

// }
// Exception Handling in C++(means error hona ka chances)
// #include<iostream>
// using namespace std;
// float my_divison(float x ,float y){
//     if (y==0){
//         throw "Cannot divide by 0";
//     }
//     return (x/y);

// }
// int main (){
//     float x=30;
//     float y=0;
//     float z;
//     try{
//         z=my_divison(x,y);
//         cout<<z;
//     }
//     // #below step mein sab sa phela exception catch hoga than character pointer stored hoga warning mein  
//     // #cerr for print out the error
//     catch(const char* warning){            
//         cerr<<warning; 
//     }
// }

// linear Serach in C++
// #include<iostream>
// using namespace std;
// int lin_search(int a[],int n,int z){
//     for(int i=0;i<n;i++){
//         if(a[i]==z)
//         return i;
//     }
//     return -1;
// }
// int main (){
//     int a[]={34,45,56,64,67,87,86,32,54,50};
//     // #below step is used to calculate the no of element in the arrays
//     int n=sizeof(a)/sizeof(a[0]);
//     // #In lin_search 3 parameters(array,no of elements,searching element)  
//     int result=lin_search(a,n,90);
//     // After previous step we will move on line 662
//     // the below loops is used to print out the result
//     if(result==-1){
//         cout<<"Element is not present in this array";
//     }
//     else{
//         cout<<"The element is present at index: "<<result;
//     }
// }

// Bubble Sort in C++
// #include<iostream>
// using namespace std;
// void swaap(int*x,int*y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// void bubble_sort(int a[],int n){
//     for (int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int a[]={5,4,3,2,1};
//     int n=sizeof(a)/sizeof(a[0]);
//     bubble_sort(a,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }