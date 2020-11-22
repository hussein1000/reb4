/* name: hussein saleh
 * class: second classes
 * department: compuer engineer*/
 
/*iostream stands for standard input-output stream this header file
 *  contains definitions to objects like cin, cout, cerr etc ...*/
#include <iostream>
/*CString object keeps character data in a CStringData object
 * CString tracks the string length for faster performance*/
#include <cmath>
/*header file declares a set of functions to perform mathematical 
 *operations such as: sqrt() to calculate the square root, log() to
 *find natural logarithm of a number etc.*/
#include <cstring>
/*using namespace std ” means we use the namespace named std.
 *“ std ” is an abbreviation for standard. So that means we use
 *all the things with in “ std ” namespace*/
using namespace std;
/*it is short for charachter which is a data type that holds one
 *charachter, and the number is its maximum allowed length*/
char shape[50];
/*The double is a fundamental data type built into the compiler and
 *used to define numeric variables*/
double area,circum;
/*it means that our functions needs to return some integer at the end
 *of the execution and we do so by returning zero at the end of
 *the program and it means the success of the program*/
int main()
{
/*loop statement allows us to execute a statement or group of them multiple
 *times until a particular condition is met.*/
loop:
/*introduction for users to know what to do*/
	cout<<"'Circle, Rectangle, Square, Ellipse, Polygon, Triangle'"<<endl;
	cout<<"\nEnter Shape Name: ";
	cin>>shape;
/*strcmp function is used to compare the string arguments. It compares
 *strings wordsmith which means it compares both the strings
 *character by character*/
    if(strcmp(shape, "Circle") == 0){
/*if statement allows you to control if a program could enter a section
 *of code or not based on whether a given condition is true or false*/
 /*const is short for constant, which states that the defined variable
 * doesn't change, and it's value is constant*/
        double r;
        const double pi=3.142;
        cout<<"\nEnter radius: ";
        cin>>r;
        area=pi*pow(r,2);
        circum=pi*2*r*r;
    }
/*following are the equations neccessary to calculate areas and
 *circumferences of these geometric shapes mentioned, and it will
 *be showed when it is being called for*/
    else if(strcmp(shape, "Square") == 0){
        double l;
        cout<<"\nEnter length: ";
        cin>>l;
        area=pow(l,2);
        circum=4*l;
    }
    else if(strcmp(shape, "Rectangle") == 0){
        double l,w;
        cout<<"\nEnter length: ";
        cin>>l;
        cout<<"Enter width: ";
        cin>>w;
        area=l*w;
        circum=(l+w)*2;
    }
    else if(strcmp(shape, "Triangle") == 0){
        double s,sum,z,x,b,h;
        cout<<"\nEnter base: ";
        cin>>b;
        cout<<"Enter height: ";
        cin>>h;
        cout<<"Enter Triangle's first rib: ";
        cin>>s;
        cout<<"Enter Triangle's second rib: ";
        cin>>z;
        cout<<"Enter Triangle's third rib: ";
        cin>>x;
        sum=s+x+z;
        area=h*b/2;
        circum=sum;
    }
    else if(strcmp(shape, "Ellipse") == 0){
        const double pi=3.142;
        double b,h,m,n;
        cout<<"\nEnter radius: ";
        cin>>b;
        cout<<"Enter height: ";
        cin>>h;
        cout<<"Enter main axis: ";
        cin>>m;
        cout<<"Enter minor axis: ";
        cin>>n;
        area=h*b*pi;
        circum=2*pi*sqrt((pow(m, 2)+pow(n, 2))/2);
    }
    else if(strcmp(shape, "Polygon") == 0){
        double b,h,f1,f2,f3,f4,f5;
        cout<<"\nEnter apothem: ";
        cin>>b;
        cout<<"Enter 1st side length: ";
        cin>>f1;
        cout<<"Enter 2nd side lenght: ";
        cin>>f2;
        cout<<"Enter 3rd side length: ";
        cin>>f3;
        cout<<"Enter 4th side length: ";
        cin>>f4;
        cout<<"Enter 5th side length: ";
        cin>>f5;
        h=(f1+f2+f3+f4+f5);
        area=0.5*h*b;
        circum=5*h;
    }
/*using else to specify a block of code to be executed when if
 *condition is false*/
    else{
        cout<<"\nWrong Entry, Please Check the Supported Shapes!\n"<<endl;
/*goto statement in C++ is an unconditional jump statement used for
 *transferring the control of a program. It allows the program's
 *execution flow to jump to a specified location within the function*/
        goto loop;
    }
    cout<<"\nArea =  "<<area<<endl;
/*final result of the equations*/
	cout<<"Circumference =  "<<circum<<endl;
/*returning value to the main and 0 is success to state that the
 *program is working fine*/
return 0;
}
