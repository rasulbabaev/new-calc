#include <iostream> 
#include <cmath> 
 
int sum(int a, int b) 
{ 
 return a + b; 
} 
int raz(int a, int b) 
{ 
 return a - b; 
} 
int umn(int x, int y) 
{ 
 return x * y; 
} 
 
int del(int x, int y) 
{ 
 return x / y; 
} 
int ror(int x, int y) 
{ 
 return x » y; 
} 
int mod(int x, int y) 
{ 
 return x % y; 
} 
int rol(int x, int y) 
{ 
 return x « y; 
} 
int nnot(int x) 
{ 
 return !x; 
} 
int aand(int x, int y) 
{ 
 return x & y; 
} 
int oor(int x, int y) 
{ 
 return x | y; 
} 
using namespace std; 
 
int main() 
{ 
 setlocale(LC_ALL, "Russian"); 
 char aa; 
 int x, y; 
 char p; 
 
 cout « "Выбирете операцию: [+, -, *, /, %, ^, !, &, |, <, >]" « endl; 
 cin » p; 
 
 cout « "Введите числа для операции" « endl; 
 cout « "Первое число: " « endl; 
 cin » x; 
 cout « "Второе число: " « endl; 
 cin » y; 
 
 switch (p) { 
 case '+': 
 cout « sum(x, y) « endl; 
 break; 
 case '-': 
 cout « raz(x, y) « endl; 
 break; 
 case '/': 
 cout « del(x, y) « endl; 
 break; 
 case '*': 
 cout « umn(x, y) « endl; 
 break; 
 case '>': 
 cout « ror(x, y) « endl; 
 break; 
 case '^': 
 cout « pow(x, y) « endl; 
 break; 
 case '%': 
 cout « mod(x, y) « endl; 
 break; 
 case '<': 
 cout « rol(x, y) « endl; 
 break; 
 case '!': 
 cout « nnot(x) « endl; 
 break; 
 case '&': 
 cout « aand(x, y) « endl; 
 break; 
 case '|': 
 cout « oor(x, y) « endl;
 break;
 } 
 
 return 0; 
}
