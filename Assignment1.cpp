//Q1. Write a program (WAP) to display "Hello World" on console display.


#include <iostream>
using namespace std;
int main()
{
cout<<"Hello World";


return 0;
}




//Q2. WAP to input an integer, decimal and character and display it.


#include <iostream>
using namespace std;
int main()
{
int a ;
cout<<"Enter a number : "; cin>>a;
cout<<a;


return 0;

}
#include <iostream>
using namespace std;
int main()
{
float a ;
cout<<"Enter a number : "; cin>>a;
cout<<a;


return 0;
}

#include <iostream>
using namespace std;
 int main()
{
char str[20] ;
cout<<"Enter a character : "; cin>>str;
cout<<str;


return 0;
}

//Q3. WAP to add, subtract, multiply, divide numbers.


#include <iostream>
using namespace std;
 int main()
{
int a; int b; int sum;
cout<<"Enter first number:"<<endl; cin>>a;
cout<<"Enter second number :"<<endl; cin>>b;
sum=a+b;
cout<< "sum is "<<sum<<endl; return 0;
}



#include <iostream>
using namespace std;
int main()
{
int a; int b;
int subtract;
cout<<"Enter first number:"<<endl;

cin>>a;
cout<<"Enter second number :"<<endl; cin>>b;
subtract=a-b;
cout<< "subtract is "<<subtract<<endl; return 0;
}



#include <iostream>
using namespace std;
int main()
{
int a; int b;
int product;
cout<<"Enter first number:"<<endl; cin>>a;
cout<<"Enter second number :"<<endl; cin>>b;
product=a*b;
cout<< "product is "<<product<<endl; return 0;
}
#include <iostream>
using namespace std;
int main()

{
int a; int b;
int division;
cout<<"Enter first number:"<<endl; cin>>a;
cout<<"Enter second number :"<<endl; cin>>b;
division=a/b;
cout<< "division is "<<division<<endl; return 0;
}



//Q4. Write a C++ program that will ask for a temperature in Celsius and display it in degree Fahrenheit.[F=9C/5+32]




#include <iostream>
using namespace std;
int main()
{
float C; float F;
cout<<"Enter temp in Celsius "; cin>>C;
F=((9*C)/5)+32;
cout<<"Temp in Fahrenheit is "<<F<<endl;

return 0;
}
//Q5. WAP to format console output using '\n', '\t', '\b' , endl, setw within cout statement


#include <iostream>
using namespace std;
 int main() {
char str[20]; int g;
cout<<"Enter your name:\n"; cin>>str;
cout<<"Enter your group:\n "; cin>>g;
cout<<str<<'\n'<<g; return 0;
}


#include <iostream>
using namespace std;
int main() {
char str[20]; int g;
cout<<"Enter your name:\t"; cin>>str;
cout<<"Enter your group:\t"; cin>>g;
cout<<str<<'\t'<<g;

return 0;
}
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
char str[20]; int g;
cout<<"Enter your name:\b"; cin>>str;
cout<<"Enter your group:\b"; cin>>g; cout<<str<<setw(10)<<g;

return 0;
}

#include <iostream>
using namespace std;
 int main() {
char str[20]; int g;
cout<<"Enter your name:"<<endl; cin>>str;
cout<<"Enter your group:" <<endl; cin>>g;
cout<<str<<endl<<g;

return 0;
}
#include <iostream> #include<iomanip> using namespace std; int main() {
char str[20]; int g;
cout<<"Enter your name:\b"; cin>>str;
cout<<"Enter your group:\b"; cin>>g; cout<<str<<setw(10)<<g;

return 0;
}


//Q6. WAP to utilize assignment += and - = type operators.


#include <iostream>
using namespace std;
int main() {

int number=5; number+=3;
cout<<"The resultant number is:",number;

return 0;
}


#include <iostream> using namespace std; int main() {

int number=5; number-=3;
cout<<"The resultant number is:"<< number;


return 0;
}



//Q7. WAP to swap two numbers using a bitwise operator.


#include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter a number: a = "; cin>>a;
cout<<"Enter a number: b = " ; cin>>b;
a=a^b; b=a^b; a=a^b;

cout<<"a is = "<<a<<endl; cout<<"b is = "<<b<<endl;

return 0;
}


/*Q8. Write a program to solve the following problem
A library charges a fine for every book return late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book
after 30 days your membership will be cancelled .WAP to accept no. of days the member is late to return the book and display the fine or appropriate message.
*/
#include <iostream>
using namespace std;

int main()
{
int days;


cout << "Enter the number of days: "; cin >> days;

if (days > 0 && days < 6)
{
cout << "The fine is 50 paise";
}
else if (days >= 6 && days < 11)
{
cout << "The fine is 1 rupee";

}
else if (days >= 11 && days < 31)
{
cout << "The fine is 5 rupees";
}
else if (days >= 31)
{
cout << "YOUR MEMBERSHIP WILL BE CANCELLED";
}
else
{
cout << "Undefined day";
}


return 0;
}



//Q9. WAP to display arithmetic operations using switch-case statement.


#include <iostream>
using namespace std;

int main()
{
int a, b; char op;

cout << "Enter two numbers: ";

cin >> a >> b;


cout << "Enter operator (+, -, *, /): "; cin >> op;

switch (op)
{
case '+':
cout << "Addition = " << a + b; break;

case '-':
cout << "Subtraction = " << a - b; break;

case '*':
cout << "Multiplication = " << a * b; break;

case '/':
if (b != 0)
cout << "Division = " << a / b; else
cout << "Division by zero not allowed"; break;

default:
cout << "Invalid operator";
}

return 0;
}


//Q10. WAP to check whether the given number is even or odd (By using if-else and conditional operator).


#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter a number: "; cin>>a;
if(a%2==0)
{
cout<<"Number is even ";
}


else
cout<<"Number is odd";


return 0;
}

