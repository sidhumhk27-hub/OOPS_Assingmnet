//Q1
// #include <iostream>
// using namespace std;

// class ShapeBase {
// protected:
//     int l, b;

// public:
//     void setDimensions(int x, int y) {
//         l = x;
//         b = y;
//     }

//     virtual float getArea() {
//         return 0;
//     }
// };

// class Rect : public ShapeBase {
// public:
//     float getArea() {
//         return l * b;
//     }
// };

// class Tri : public ShapeBase {
// public:
//     float getArea() {
//         return 0.5 * l * b;
//     }
// };

// int main() {
//     ShapeBase *ptr;

//     Rect obj1;
//     Tri obj2;

//     ptr = &obj1;
//     ptr->setDimensions(8, 4);
//     cout << "Rectangle Area = " << ptr->getArea() << endl;

//     ptr = &obj2;
//     ptr->setDimensions(8, 4);
//     cout << "Triangle Area = " << ptr->getArea() << endl;

//     return 0;
// }
//Q2
// #include <iostream>
// using namespace std;

// class Figure {
// public:
//     virtual void calcArea() = 0;
//     virtual void info() = 0;
// };

// class CircleShape : public Figure {
//     float r;
// public:
//     CircleShape(float x) { r = x; }

//     void calcArea() {
//         cout << "Circle Area: " << 3.1416 * r * r << endl;
//     }

//     void info() {
//         cout << "Type: Circle | Radius: " << r << endl;
//     }
// };

// class RectShape : public Figure {
//     float len, wid;
// public:
//     RectShape(float a, float b) { len = a; wid = b; }

//     void calcArea() {
//         cout << "Rectangle Area: " << len * wid << endl;
//     }

//     void info() {
//         cout << "Type: Rectangle | L=" << len << ", W=" << wid << endl;
//     }
// };

// int main() {
//     Figure *f;

//     CircleShape c(5);
//     RectShape r(6, 3);

//     f = &c;
//     f->info();
//     f->calcArea();

//     f = &r;
//     f->info();
//     f->calcArea();

//     return 0;
// }
//Q3
// #include <iostream>
// #include <cmath>
// using namespace std;

// class TriArea {
// public:
//     float calc(float base, float height) {
//         return 0.5 * base * height;
//     }

//     float calc(float side) {
//         return (sqrt(3) / 4) * side * side;
//     }

//     float calc(float a, float b, float c) {
//         float s = (a + b + c) / 2;
//         return sqrt(s * (s - a) * (s - b) * (s - c));
//     }
// };

// int main() {
//     TriArea t;
//     cout << t.calc(10, 5) << endl;
//     cout << t.calc(6) << endl;
//     cout << t.calc(5, 5, 8) << endl;
//     return 0;
// }
//Q4
// #include <iostream>
// using namespace std;

// class Student {
// protected:
//     string name;
//     int roll;

// public:
//     Student(string n, int r) {
//         name = n;
//         roll = r;
//     }

//     virtual void display() = 0;
// };

// class Engineering : public Student {
//     string branch;

// public:
//     Engineering(string n, int r, string b) : Student(n, r) {
//         branch = b;
//     }

//     void display() {
//         cout << "Engineering Student -> Name: " << name
//              << ", Roll: " << roll
//              << ", Branch: " << branch << endl;
//     }
// };

// class Medicine : public Student {
//     string specialization;

// public:
//     Medicine(string n, int r, string s) : Student(n, r) {
//         specialization = s;
//     }

//     void display() {
//         cout << "Medicine Student -> Name: " << name
//              << ", Roll: " << roll
//              << ", Specialization: " << specialization << endl;
//     }
// };

// class Science : public Student {
//     string subject;

// public:
//     Science(string n, int r, string sub) : Student(n, r) {
//         subject = sub;
//     }

//     void display() {
//         cout << "Science Student -> Name: " << name
//              << ", Roll: " << roll
//              << ", Subject: " << subject << endl;
//     }
// };

// int main() {
//     Student* s[3];

//     Engineering e("Karan", 101, "Computer Science");
//     Medicine m("Aman", 102, "Cardiology");
//     Science sc("Riya", 103, "Physics");

//     s[0] = &e;
//     s[1] = &m;
//     s[2] = &sc;

//     for (int i = 0; i < 3; i++) {
//         s[i]->display();
//     }

//     return 0;
// }
//Q5
// #include <iostream>
// using namespace std;

// class ClockTime {
//     int hr, min, sec;

// public:
//     ClockTime(int h = 0, int m = 0, int s = 0) {
//         hr = h; min = m; sec = s;
//     }

//     ClockTime operator+(ClockTime t) {
//         ClockTime res;

//         res.sec = sec + t.sec;
//         res.min = min + t.min + res.sec / 60;
//         res.sec %= 60;

//         res.hr = hr + t.hr + res.min / 60;
//         res.min %= 60;

//         return res;
//     }

//     void print() {
//         cout << hr << ":" << min << ":" << sec << endl;
//     }
// };

// int main() {
//     ClockTime t1(2, 50, 40), t2(3, 20, 30);

//     ClockTime t3 = t1 + t2;
//     t3.print();

//     return 0;
// }
//Q6
// #include <iostream>
// using namespace std;

// class MyString {
//     string data;

// public:
//     MyString(string s = "") {
//         data = s;
//     }

//     bool operator==(MyString s) {
//         return data == s.data;
//     }

//     MyString operator+(MyString s) {
//         return MyString(data + s.data);
//     }

//     void show() {
//         cout << data << endl;
//     }
// };

// int main() {
//     MyString a("Hi "), b("There");

//     MyString c = a + b;
//     c.show();

//     if (a == b)
//         cout << "Equal\n";
//     else
//         cout << "Not Equal\n";

//     return 0;
// }
//Q7
// #include <iostream>
// using namespace std;

// class Mat {
//     int mat[10][10];
//     int r, c;

// public:
//     Mat(int x = 0, int y = 0) {
//         r = x; c = y;
//     }

//     void read() {
//         for (int i = 0; i < r; i++)
//             for (int j = 0; j < c; j++)
//                 cin >> mat[i][j];
//     }

//     void print() {
//         for (int i = 0; i < r; i++) {
//             for (int j = 0; j < c; j++)
//                 cout << mat[i][j] << " ";
//             cout << endl;
//         }
//     }

//     friend Mat operator*(Mat a, Mat b);
// };

// Mat operator*(Mat a, Mat b) {
//     Mat res(a.r, b.c);

//     for (int i = 0; i < a.r; i++) {
//         for (int j = 0; j < b.c; j++) {
//             res.mat[i][j] = 0;
//             for (int k = 0; k < a.c; k++) {
//                 res.mat[i][j] += a.mat[i][k] * b.mat[k][j];
//             }
//         }
//     }
//     return res;
// }

// int main() {
//     Mat m1(2, 2), m2(2, 2);

//     m1.read();
//     m2.read();

//     Mat m3 = m1 * m2;
//     m3.print();

//     return 0;
// }
//Q8
// #include <iostream>
// using namespace std;

// class SafeArray {
//     int arr[50];
//     int n;

// public:
//     SafeArray(int size) {
//         n = size;
//     }

//     int& operator[](int idx) {
//         if (idx < 0 || idx >= n) {
//             cout << "Invalid Index!" << endl;
//             exit(0);
//         }
//         return arr[idx];
//     }
// };

// int main() {
//     SafeArray a(4);

//     for (int i = 0; i < 4; i++)
//         a[i] = i + 1;

//     for (int i = 0; i < 4; i++)
//         cout << a[i] << " ";

//     return 0;
// }
//Q9
// #include <iostream>
// #include <cstdarg>
// using namespace std;

// class Adder {
//     int total;

// public:
//     Adder() { total = 0; }

//     void operator()(int count, ...) {
//         va_list list;
//         va_start(list, count);

//         total = 0;
//         for (int i = 0; i < count; i++) {
//             total += va_arg(list, int);
//         }

//         va_end(list);
//     }

//     void show() {
//         cout << "Total = " << total << endl;
//     }
// };

// int main() {
//     Adder a;

//     a(3, 5, 10, 15);
//     a.show();

//     return 0;
// }
//Q10
// #include <iostream>
// using namespace std;

// class Stu {
//     int id;
//     string nm;

// public:
//     friend istream& operator>>(istream &in, Stu &s);
//     friend ostream& operator<<(ostream &out, Stu &s);
// };

// istream& operator>>(istream &in, Stu &s) {
//     in >> s.id >> s.nm;
//     return in;
// }

// ostream& operator<<(ostream &out, Stu &s) {
//     out << "ID: " << s.id << "\nName: " << s.nm << endl;
//     return out;
// }

// int main() {
//     Stu s;
//     cin >> s;
//     cout << s;

//     return 0;
// }
//Q11
// #include <iostream>
// using namespace std;

// class Test {
//     float value;

// public:
//     Test(float x) {
//         value = x;
//     }

//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     float num = 5.75;

//     Test t = num;

//     t.display();

//     return 0;
// }
//Q12
// #include <iostream>
// using namespace std;

// class Convert {
//     float v;

// public:
//     Convert(float x = 0) {
//         v = x;
//     }

//     operator float() {
//         return v;
//     }
// };

// int main() {
//     Convert c(4.75);

//     float x = c;

//     cout << x << endl;

//     return 0;
// }
//Q13
// #include <iostream>
// #include <cmath>
// using namespace std;

// class PolarCoord {
//     float radius, angle;

// public:
//     PolarCoord(float r = 0, float a = 0) {
//         radius = r;
//         angle = a;
//     }

//     float getRadius() { return radius; }
//     float getAngle() { return angle; }
// };

// class RectCoord {
//     float x, y;

// public:
//     RectCoord(PolarCoord p) {
//         x = p.getRadius() * cos(p.getAngle());
//         y = p.getRadius() * sin(p.getAngle());
//     }

//     void display() {
//         cout << "X=" << x << ", Y=" << y << endl;
//     }
// };

// int main() {
//     PolarCoord p(5, 3.14);

//     RectCoord r = p;
//     r.display();

//     return 0;
// }
