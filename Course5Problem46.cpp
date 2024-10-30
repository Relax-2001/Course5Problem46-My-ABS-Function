#include <iostream>
#include<cmath>

using namespace std;

int ReadNumber()
{
	int Num;

	cout << "Plese enter a number\n";
	cin >> Num;

	return Num;
}

int MyAbsFunction(int Num)
{
	if (Num >= 0)
		return Num;

	return Num * -1;
}

int main()
{

	int Number = ReadNumber();

	cout << "My abs Function : ";
	cout << MyAbsFunction(Number) << "\n";

	cout << "C++ abs function : ";
	cout << abs(Number) << "\n";

	return 0;
}
