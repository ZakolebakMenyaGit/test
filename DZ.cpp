#include <iostream>
using namespace std;

int main() {
	double x = 0;
	double y = 0;
	char n = ' ';
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter operator: ";
	cin >> n;
	cout << "Enter second number: ";
	cin >> y;
	switch (n)
	{
	case '+':
		cout << "Result: " << x + y;
		break;
	case '-':
		cout << "Result: " << x - y;
		break;
	case '*':
		cout << "Result: " << x * y;
		break;
	case '/':
		cout << "Result: " << x / y;
		break;
	case '%':
		cout << "Result: " << (int)x / (int)y;
		break;
	case '^':
		cout << "Result: " << pow(x, y);
		break;
	default:
		cout << "Wrong operator!";
	}
	cout << endl;
	system("pause");
	return 0;
}

