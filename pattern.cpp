#include <bits/stdc++.h>
using namespace std;

void pattern(int n, int m)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (i == 1 || i == n ||
				j == 1 || j == m)		
				cout << "*" << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}

}
int main()
{
	int rows = 3, columns = 5;
    pattern(rows, columns);
	return 0;
}

