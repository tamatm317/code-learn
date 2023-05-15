#include <iostream>
#include <vector>
using namespace std;
void input(vector<vector<int>> &a, int row, int column)
{
	a.resize(row);
	for (int i = 0; i < row; ++i)
	{
		a[i].resize(column);
		for (int j = 0; j < column; ++j)
		{
			cin >> a[i][j];
		}
	}
}
void output(vector<vector<int>> a, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0.; j < column - 1; ++j)
		{
			for (int k = j + 1; k < column; ++k)
			{
				if (a[i][j] > a[i][k])
				{
					int temp = a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = temp;
				}
			}
		}
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int row, column;
	cin >> row >> column;
	vector<vector<int>> a;
	input(a, row, column);
	output(a, row, column);
}