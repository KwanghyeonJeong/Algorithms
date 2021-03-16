#include <iostream>
#include <algorithm>

#define MAX 1000

using namespace std;

int main()
{
	int n;
	int time = 0;
	int times[MAX];
	cin >> n;

	for (int i = 0; i<n; i++)
		cin >> times[i];

	sort(times, times + n);

	for (int j = 0; j<n; j++)
	{
		time += times[j];
	}
	cout << time << endl;

	return 0;
}