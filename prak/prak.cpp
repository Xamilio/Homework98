#include <iostream>
using namespace std;
int main()
{
	int x;
	int n = 1;
	int k = 0;
	cout << "Enter x: ";
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		k++;
		for (int j = 0; j < k; j++)
		{
			cout << n << " ";
		}
		n++;
		cout << endl;
	}
}