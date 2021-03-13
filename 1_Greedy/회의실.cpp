#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	int cnt=0;
	vector<pair<int, int>> meeting;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int start, end;
		cin >> start >> end;
		meeting.push_back(make_pair(end, start));
	}

	//위의 for문에서 end값이 meeting.first값으로 추가되기 때문에 begin()의 iteral은 end값이 저장된 meeting.first를 가리키고, 이 를 기준으로 정렬(오름차순)하게 된다.
	//내림차순은 greater<int>()를 추가한다. ex) sort(meeting.begin(),meeting.end(),greater<int>())
	sort(meeting.begin(), meeting.end());
	//비교할 최소값
	int temp = 0;

	for (int i = 0; i < num; i++)
	{
		int start = meeting[i].second;
		int end = meeting[i].first;
		
		if (start >= temp)
		{
			temp = end;
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}