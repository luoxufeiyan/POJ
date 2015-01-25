#include<cstdio>
#include<algorithm>
using namespace std;
int cache[2000];
int main()
{
	int N;
	scanf("%d", &N);
	while (N--)
	{
		int n, k, i;
		scanf("%d%d",&n,&k);
		for (i = 0; i < n; i++)
			scanf("%d", &cache[i]);
		for (i = 0; i < k; i++)
			next_permutation(cache, cache + n);
		printf("%d", cache[0]);
		for (i = 1; i < n; i++)
			printf(" %d", cache[i]);
		printf("\n");
	}
	return 0;
}
