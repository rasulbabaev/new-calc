#include <iostream> 
#include <cmath> 
#include <climits>
#include <cstring>

using namespace std;

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
	return x >> y;
}

int mod(int x, int y)
{
	return x % y;
}

int rol(int x, int y)
{
	return x << y;
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

int main()
{
	setlocale(LC_ALL, "Russian");
	int x = INT_MIN;
	int y = INT_MIN;
	char buff[200];

	cout << "Выбирите арифметический знак [+, -, *, /, %, ^, !, &, |, <, >]" << endl;
	cin >> buff;
	if (strlen(buff) > 1)
	{
		cerr << "Ошибка 1 "<< endl;
		return 0;
	}

	if (strstr("+-*/%^!&|<>", buff) == 0)
	{
		cerr << "Ошибка 2 "<< endl;
		return 0;
	}

	

	cout << "Введите число: " << endl;
	cin >> x;
	if ( x == INT_MIN )
	{
		cerr << "Ошибка 3 " << endl;
		return 0;
	}

	cout << "Выбирите чило: " << endl;
	cin >> y;
	if (y == INT_MIN)
	{
		cerr << "Ошибка 4 " << endl;
		return 0;
	}

	switch (buff[0]) 
	{
	case '+':
		cout << sum(x, y) << endl;
		break;

	case '-':
		cout << raz(x, y) << endl;
		break;

	case '/':
		if (y == 0)
			cerr << "На ноль делить нельзя Вячеслав Вадимович " << endl;
		else
			cout << del(x, y) << endl;
		break;

	case '*':
		cout << umn(x, y) << endl;
		break;

	case '>':
		cout << ror(x, y) << endl;
		break;

	case '^':
		cout << pow(x, y) << endl;
		break;

	case '%':
		cout << mod(x, y) << endl;
		break;

	case '<':
		cout << rol(x, y) << endl;
		break;

	case '!':
		cout << nnot(x) << endl;
		break;

	case '&':
		cout << aand(x, y) << endl;
		break;

	case '|':
		cout << oor(x, y) << endl;
		break;
		
	}	
	
	return 0;
}
