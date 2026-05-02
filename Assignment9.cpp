#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>
using namespace std;
//1.
// int main(){
//     ofstream fout("NUM.txt");
//     for(int i=1;i<=200;i++){
//         fout<<i<<" ";
//     }
//     fout.close();
//     cout<<"success";
// }
//2.
// void countAlphabets() {
//     ifstream fin("NOTES.TXT");
//     char ch;
//     int count = 0;

//     while(fin.get(ch)) {
//         if(isalpha(ch))
//             count++;
//     }

//     cout << "Total alphabets " << count << endl;
//     fin.close();
// }

// int main() {
//     countAlphabets();
// }
//3.
// int main() {
//     ifstream fin("source.txt");
//     ofstream fout("destination.txt");
//     char ch;
//     while(fin.get(ch)) {
//         fout.put(ch);
//     }
//     cout << "File copied successfully ";
//     fin.close();
//     fout.close();
// }
//4.
// int main() {
//     char str[100];
//     cout << "Enter string: ";
//     cin.getline(str, 100);
//     cout << "Length = " << strlen(str) << endl;
//     ofstream fout("data.txt");
//     fout << str;
//     fout.close();
//     ifstream fin("data.txt");
//     char ch;
//     cout << "File content: ";
//     while(fin.get(ch)) {
//         cout << ch;
//     }
//     fin.close();
// }
//5.a.
// int main() {
//     ofstream fout("file.txt");
//     for(char ch = 'A'; ch <= 'Z'; ch++)
//         fout << ch;
//     fout.close();
//     ifstream fin("file.txt");
//     fin.seekg(9);
//     char ch;
//     fin.get(ch);
//     cout << "10th character: " << ch << endl;
//     fin.close();
// }
//b.
// int main() {
//     fstream file("file.txt", ios::in | ios::out);
//     file.seekp(4);
//     file.put('X');
//     file.close();
// }
//c.
// int main() {
//     ifstream fin("file.txt");

//     fin.seekg(0, ios::end);
//     cout << "File size: " << fin.tellg() << " bytes";

//     fin.close();
// }
//d.
// int main() {
//     ifstream fin("file.txt");
//     fin.seekg(-1, ios::end);
//     char ch;
//     fin.get(ch);
//     cout << "Last character: " << ch << endl;
//     fin.close();
// }
//e.
// int main() {
//     ofstream fout("data.txt");
//     fout << "This is line 1\nthis is line 2\nThis is line 3";
//     fout.close();
//     ifstream fin("data.txt");
//     fin.seekg(10);
//     cout << "Current position: " << fin.tellg() << endl;
//     char ch;
//     cout << "Remaining content:\n";
//     while(fin.get(ch)) {
//         cout << ch;
//     }
//     fin.close();
// }
//6.
// int main() {
//     fstream file("hello.txt", ios::out | ios::in);
//     string text = "Hello World";
//     for(char ch : text) {
//         file.put(ch);
//         cout << "Position: " << file.tellp() << endl;
//     }
//     file.seekp(6);
//     file << "C++  ";
//     file.close();
//     ifstream fin("hello.txt");
//     char ch;
//     cout << "\nUpdated content:\n";
//     while(fin.get(ch)) {
//         cout << ch;
//     }
//     fin.close();
// }
