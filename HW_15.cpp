#include <iostream>
using namespace std;

void FindOddNumbers(bool IsOdd, int Limit)
{
	for (int i = IsOdd; i <= Limit; i+=2)
	{
		cout << i << endl;
	}
}

int main()
{
	bool IsOdd;
	const int Limit = 15;
	cout << "If you want to find odd numbers press 0, else 1" << endl;
	cin >> IsOdd;
	cout << '\n';
	FindOddNumbers(IsOdd, Limit);
	
}

