// This is the WA code!
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
	int j;
	scanf("%d", &j);
	while (j--)
	{
		int L, n,ni;
		int x[1000000];
		memset(0, L, sizeof L);
		memset(0, n, sizeof n);
		scanf("%d,%d", &L, &n);
		for (ni = 0; ni < n; ni++)
		{
			scanf("%d", x[ni]);
		}
		int minT = 0;//计算最短时间
		for (int i = 0; i < n; i++){
			minT = max(minT, min(x[i], L - x[i]));
		}
		int maxT = 0;//计算最长时间
		for (int i = 0; i < n; i++){
			maxT = max(maxT, max(maxT, max(x[i], L - x[i])));
		}
		printf("%d %d \n", minT, maxT);
		return 0;
	}
}
