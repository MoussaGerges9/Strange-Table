#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long n, m, x;
		cin >> n >> m >> x;

		long long Xobject = x % n;
		if (Xobject == 0)
			Xobject = n;
		long long Yobject = ((x - Xobject) / n) + 1;
		long long result = (Xobject - 1) * m + Yobject;

		cout << result << endl;
	}
}
