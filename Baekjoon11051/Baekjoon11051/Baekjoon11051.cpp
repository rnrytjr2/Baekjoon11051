// Baekjoon11051.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N, K;
	vector<vector<int>> pascalstriangle;

	cin >> N >> K;
	//N = 1000;
	//K = 1000;
	for (int i = 0; i < N + 1; i++)
	{
		vector<int> firstVector;
		pascalstriangle.push_back(firstVector);
	}
	pascalstriangle[0].push_back(1);
	pascalstriangle[1].push_back(1);
	pascalstriangle[1].push_back(1);
	for (int numberN = 2; numberN < N+1; numberN++)
	{
		pascalstriangle[numberN].push_back(1);
		for (int numberK = 1; numberK < numberN; numberK++)
		{
			int a= pascalstriangle[numberN - 1][numberK - 1], b= pascalstriangle[numberN - 1][numberK];
			pascalstriangle[numberN].push_back((pascalstriangle[numberN - 1][numberK - 1] + pascalstriangle[numberN - 1][numberK]) % 10007);
		}
		pascalstriangle[numberN].push_back(1);
	}
	cout << pascalstriangle[N][K];
}
