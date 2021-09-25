#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	while (true)
	{
		int a;
		cout << "How many numbers do you have: ";
		cin >> a;
		if (a <= 0)
		{
			cout << "Your number must be positive" << endl;
			cout << "==========================================================================================================" << endl;
		}
		else if (a % 2 != 0)
		{
			cout << abs(a) / 2 << " pairs of numbers and 1 non pair number, his position: " << abs(a) / 2 + 1 << endl;
			cout << "==========================================================================================================" << endl;
		}
		else
		{
			cout << abs(a) / 2 << " pairs of numbers and 0 non pair numbers" << endl;
			cout << "==========================================================================================================" << endl;
		}
	}
	return 0;
}

