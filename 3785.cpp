#include<cstdio>
#include<string.h>
#include<algorithm>
char num[1010];
using namespace std;
int main()
{
	int p, n, cache;
	scanf("%d", &p);
	while (p--)
	{
		memset(num, 0, sizeof(num));
		cache = n = 0;
		scanf("%d", &cache);
		scanf("%s", num);
		printf("%d ", cache);
		if (next_permutation(num, num + strlen(num)))
			puts(num);
		else printf("BIGGEST\n");
	}
	return 0;
}
