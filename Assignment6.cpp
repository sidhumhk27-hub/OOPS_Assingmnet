/*Q1. Implement a class Library that contains an array of Book objects. The Book class should have
attributes like title, author, and ISBN.
CODE:
#include <iostream>
using namespace std;
class Book {
public:
string title;
string author;
string ISBN;
};
class Library {
Book books[100];
int count;
public:
Library() {
count = 0;
}
bool addNewBook(string &title, string &author, string &ISBN) {
if (count >= 100) return false;
books[count].title = title;
books[count].author = author;
books[count].ISBN = ISBN;
count++;
return true;
}
bool removeBooks(string &ISBN);
void displayDetails() {
if (count == 0) {
cout << "No books in library\n";
return;
}
for (int i = 0; i < count; i++) {
cout << "\nBook " << i + 1 << ":\n";
cout << "Title: " << books[i].title << endl;
cout << "Author: " << books[i].author << endl;
cout << "ISBN: " << books[i].ISBN << endl;
}
}
};
bool Library::removeBooks(string &ISBN) {
for (int i = 0; i < count; i++) {
if (books[i].ISBN == ISBN) {
for (int j = i; j < count - 1; j++) {
books[j] = books[j + 1];
}
count--;
return true;
}
}
return false;
}
int main() {
Library lib;
string t1 = "Maths", a1 = "Rachit", i1 = "101";
string t2 = "Data Structures", a2 = "Siya", i2 = "102";
string t3 = "Analog", a3 = "Arun", i3 = "103";
string t4 = "DBMS", a4 = "Neha", i4 = "104";
string t5 = "OS", a5 = "Kirti", i5 = "105";
lib.addNewBook(t1, a1, i1);
lib.addNewBook(t2, a2, i2);
lib.addNewBook(t3, a3, i3);
lib.addNewBook(t4, a4, i4);
lib.addNewBook(t5, a5, i5);
cout << "\n Books after adding \n";
lib.displayDetails();
string removeISBN = "103";
if (lib.removeBooks(removeISBN))
cout << "\nBook removed successfully\n";
else
cout << "\nBook not found\n";
cout << "\n Books after removal \n";
lib.displayDetails();
return 0;
}

2Q. Implement the question 1 using constructor. Do the following modification:
a. Add default constructor, parameterized constructor, and copy constructor to add the details of the
book using the same parameters, i.e., title, author, and ISBN.
b. Use the “this” pointer instead of scope resolution operator to access the data members of the class
inside the constructor and function definition.
c. Create function bool removeBooks(ISBN) same as the question 1.
d. displayDetails() same as question 1.
e. Create array of objects using 1. Initializer list, 2. Dynamic initialization
CODE:
#include <iostream>
using namespace std;
class Book {
public:
string title;
string author;
string ISBN;
Book() {
title = "";
author = "";
ISBN = "";
}
Book(string title, string author, string ISBN) {
this->title = title;
this->author = author;
this->ISBN = ISBN;
}
Book(const Book &b) {
this->title = b.title;
this->author = b.author;
this->ISBN = b.ISBN;
}
};
class Library {
Book books[100];
int count;
public:
Library() {
count = 0;
}
bool addNewBook(string &title, string &author, string &ISBN) {
if (count >= 100) return false;
books[count] = Book(title, author, ISBN);
count++;
return true;
}
bool removeBooks(string &ISBN) {
for (int i = 0; i < count; i++) {
if (books[i].ISBN == ISBN) {
for (int j = i; j < count - 1; j++) {
books[j] = books[j + 1];
}
count--;
return true;
}
}
return false;
}
void displayDetails() {
if (count == 0) {
cout << "No books\n";
return;
}
for (int i = 0; i < count; i++) {
cout << "\nBook " << i + 1 << endl;
cout << "Title: " << books[i].title << endl;
cout << "Author: " << books[i].author << endl;
cout << "ISBN: " << books[i].ISBN << endl;
}
}
};
int main() {
Book arr1[3] = {
Book("C++", "Ram", "101"),
Book("DSA", "Shyam", "102"),
Book("OS", "Amit", "103")
};
cout << "Initializer list array:\n";
for (int i = 0; i < 3; i++) {
cout << arr1[i].title << " " << arr1[i].author << " " << arr1[i].ISBN << endl;
}
int n = 2;
Book *arr2 = new Book[n];
arr2[0] = Book("DBMS", "Neha", "104");
arr2[1] = Book("Physics", "Kiran", "105");
cout << "\nDynamic array:\n";
for (int i = 0; i < n; i++) {
cout << arr2[i].title << " " << arr2[i].author << " " << arr2[i].ISBN << endl;
}
delete[] arr2;
Library lib;
string t1="Math", a1="A", i1="201";
string t2="Physics", a2="B", i2="202";
string t3="Chemistry", a3="C", i3="203";
string t4="Biology", a4="D", i4="204";
string t5="English", a5="E", i5="205";
lib.addNewBook(t1,a1,i1);
lib.addNewBook(t2,a2,i2);
lib.addNewBook(t3,a3,i3);
lib.addNewBook(t4,a4,i4);
lib.addNewBook(t5,a5,i5);
cout << "\nLibrary books:\n";
lib.displayDetails();
string rem = "203";
lib.removeBooks(rem);
cout << "\n After removing one book: \n";
lib.displayDetails();
return 0;
}

3Q. Create a class Account with attributes account number (of const long type), transaction ID (of
long type), transaction type (credit/debit) (of string type), and balance (of double type).
CODE:
#include <iostream>
using namespace std;
class Account {
private:
const long accNo;
long transID;
string transType;
double balance;
public:
Account(long accNo, long transID, string transType, double balance)
: accNo(accNo)
{
this->transID = transID;
this->transType = transType;
this->balance = balance;
}
void display() {
cout << "Account No: " << accNo << endl;
cout << "Transaction ID: " << transID << endl;
cout << "Transaction Type: " << transType << endl;
cout << "Balance: " << balance << endl;
}
};
int main() {
Account a1(1001, 5001, "credit", 15000.5);
a1.display();
return 0;
}

4Q. Write a program to add data objects of two different classes using friend functions.
CODE:
#include <iostream>
using namespace std;
class B;
class A {
int x;
public:
A(int x) {
this->x = x;
}
friend int add(A, B);
};
class B {
int y;
public:
B(int y) {
this->y = y;
}
friend int add(A, B);
};
int add(A obj1, B obj2) {
return obj1.x + obj2.y;
}
int main() {
A obj1(10);
B obj2(20);
int result = add(obj1, obj2);
cout << "Sum = " << result << endl;
return 0;
}

5Q. Define a class named Complex with properties (real and imaginary) and methods as per following
details.
a. Parameterized constructor and copy constructor to initialize object values.
b. void display () to display complex number.
c. void sum (Complex, Complex) to add two complex numbers (objects of Complex class). Implement
this function as the friend function.
CODE:
#include <iostream>
using namespace std;
class Complex {
int real, imag;
public:
Complex(int r, int i) {
real = r;
imag = i;
}
Complex(const Complex &c) {
real = c.real;
imag = c.imag;
}
void display() {
cout << real << " + " << imag << "i" << endl;
}
friend void sum(Complex, Complex);
};
void sum(Complex c1, Complex c2) {
int r = c1.real + c2.real;
int i = c1.imag + c2.imag;
cout << "Sum = " << r << " + " << i << "i" << endl;
}
int main() {
Complex c1(2, 3);
Complex c2(4, 5);
Complex c3(c1);
cout << "First complex: ";
c1.display();
cout << "Second complex: ";
c2.display();
cout << "Copied complex: ";
c3.display();
sum(c1, c2);
return 0;
}
*/
