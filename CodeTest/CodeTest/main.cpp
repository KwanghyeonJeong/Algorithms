/******************************************************************************
폴더 안에 있는 .txt파일을 복사,붙여넣기 하거나 cpp소스파일을 직접 사용해도 된다.
*******************************************************************************/

/***************************
여기 다음부터 작성 혹은 복사,붙여넣기
****************************/

/*
사용언어: C++
정보: 백준 - 1931번 문제
*/



#include <iostream>

using namespace std;

class meet
{
public:
	int first;
	int finish;
};

int main()
{
	int n; //n개의 회의
	int i, j;
	int count = 0;
	cin >> n;
	meet* meeting = new meet[n];

	for (i = 0; i < n; i++)
	{
		//시작 시간과 끝시간 입력
		cin >> meeting[i].first >> meeting[i].finish;
	}

	for (i = 0; i < n - 1; i++)
	{
		count++;

	}
	return 0;

}
