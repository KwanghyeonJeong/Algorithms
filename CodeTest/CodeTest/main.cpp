/******************************************************************************
폴더 안에 있는 .txt파일을 복사,붙여넣기 하거나 cpp소스파일을 직접 사용해도 된다.
*******************************************************************************/

/***************************
여기 다음부터 작성 혹은 복사,붙여넣기
****************************/

#include <iostream>
#include <algorithm>

#define MAX 1000

using namespace std;

int main()
{
	int n;
	int time = 0;
	int result = 0;
	int times[MAX];
	cin >> n;

	for (int i = 0; i<n; i++)
		cin >> times[i];

	//배열을 오름차순으로 정리 여기서 인자값은 iterater(포인터 비스한것...)
	sort(times, times + n);

	for (int j = 0; j<n; j++)
	{
		time += times[j];
		result += time;
	}

	cout << result << endl;

	return 0;
}