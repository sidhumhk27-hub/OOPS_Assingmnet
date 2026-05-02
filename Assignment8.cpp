#include<iostream>
using namespace std;
//Q1
// template<class T>
// void swapval(T& a, T& b){
//     T temp = a;
//     a = b;
//     b = temp;
// }

// int main(){
//     int x = 5, y = 6;
//     swapval(x, y);

//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
// }
//Q2
// template<class T>
// T minele(T x, T y){
//     if(x<y) return x;
//     else return y;
// }
// int main(){
//     int x= 5,y=6;
//     cout<<minele(x,y);
//     float u = 5.5,v=6.7;
//     cout<<minele(u,v);
// }
//Q3
// template<class T>
// void bubbleSort (T arr[], int n) {
// for ( int i = 0; i < n-1; i++){
//     for (int j = n-1; i < j; j--){
//         if(arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//         }
//     }
// }
// }
// int main(){
//     int arr[5] = {2,6,9,1,4};
//     bubbleSort(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }
// }
//Q4
// template<class T>
// bool linearSearch(T arr[],int n,T target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target) return true;
//     }
//     return false;
// }
// int main(){
//     int arr[5]={3,6,5,7,9};
//     int target = 9;
//     cout<<linearSearch(arr,5,9);
// }
//Q5
//template<class T>
//1
// void templateProcess(T a){
//     cout<<"the value is "<<a;
// }
// int main(){
//     templateProcess(4);
//     templateProcess(5.5);
// }
//2.
// template<class T>
// void templateProcess(T a,T b){
//     cout<<"the first value is "<<a<<endl;
//     cout<<"the second value is"<<b<<endl;
// }
// int main(){
//     templateProcess(2,4);
//     templateProcess("Tanish","Arora");
// }
//3
template<class T1,class T2>
void templateProcess(T1 a,T2 b){
    cout<<"the first value is "<<a<<endl;
    cout<<"the second value is"<<b<<endl;
}
int main(){
    templateProcess(2,4);
    templateProcess("tanish",3);
}
//class template
//Q1
// template <class T>
// class Stack {
//     T arr[100];
//     int top;
// public:
//     Stack() {
//         top = -1;
//     }
//     void push(T value) {
//         if (top == 99) {
//             cout << "Stack Overflow\n";
//             return;
//         }
//         arr[++top] = value;
//     }
//     void pop() {
//         if (top == -1) {
//             cout << "Stack Underflow"<<endl;
//             return;
//         }
//         cout << "Popped: " << arr[top] << endl;
//         top--;
//     }
//     void display() {
//         if (top == -1) {
//             cout << "Stack is empty"<<endl;
//             return;
//         }
//         cout << "Stack elements: ";
//         for (int i = top; i >= 0; i--) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// int main() {
//     Stack<int> s1;
//     s1.push(10);
//     s1.push(20);
//     s1.push(30);
//     s1.display();
//     s1.pop();
//     s1.display();
//     return 0;
// }
//Q2
// template <class T>
// class Queue {
//     T arr[100];
//     int front, rear;
// public:
//     Queue() {
//         front = -1;
//         rear = -1;
//     }
//     void enqueue(T value) {
//         if (rear == 99) {
//             cout << "Queue Overflow"<<endl;
//             return;
//         }
//         if (front == -1) front = 0;
//         arr[++rear] = value;
//     }
//     void dequeue() {
//         if (front == -1 || front > rear) {
//             cout << "Queue Underflow"<<endl;
//             return;
//         }
//         cout << "Dequeued: " << arr[front] << endl;
//         front++;
//     }
//     void display() {
//         if (front == -1 || front > rear) {
//             cout << "Queue is empty"<<endl;
//             return;
//         }
//         cout << "Queue elements: ";
//         for (int i = front; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Queue<int> q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.display();
//     q.dequeue();
//     q.display();
//     return 0;
// }
//Q3
// template<class T>
// class practice{
//     public:
//     T val1;
//     T val2;
//     practice(T val1,T val2){
//         this->val1=val1;
//         this->val2 = val2;
//     }
//     void display(){
//         cout<<"the value of first value is "<<val1<<endl;
//         cout<<"the value of second value is "<<val2<<endl;
//     }
// };
// int main(){
//     practice<int>p1(2,3);
//     p1.display();
// }
//Q4
// template<class T>
// class arthematic{
//     public:
//     T val1;
//     T val2;
//     arthematic(T val1,T val2){
//         this->val1=val1;
//         this->val2 = val2;
//     }
//     T add(){
//         return val1+val2;
//     }
//     T sub(){
//         return val1-val2;
//     }
//     T mul(){
//         return val1*val2;
//     }
//     T divide(){
//         if(val2!=0){
//             return val1/val2;
//         }
//         else return 0;
//     }
// };
// int main(){
//     arthematic<int>a1(8,2);
//     cout<<a1.add()<<endl;
//     cout<<a1.mul()<<endl;
//     cout<<a1.sub()<<endl;
//     cout<<a1.divide()<<endl;
// }
//Q5
// template<class T>
// class arra{
//     public:
//     int n;
//     T arr[100];
//     void input(){
//         cout<<"enter the size of array"<<endl;
//         cin>>n;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//     }
//     void display(){
//         cout<<"The array is "<<endl;
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };
// int main(){
//     arra<int>a1;
//     a1.input();
//     a1.display();
// }
