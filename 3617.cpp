#include<iostream>
#include<cstdio>
#include<cstdlib>
int N,i;
const int MAX_N = 2000;
char S[MAX_N + 1];

int main()
{
	while (~scanf("%d", &N))
	{
		for (i = 0; i < N; i++)
		{
			getchar();
			scanf("%c", &S[i]);
		}
		int a = 0, b = N - 1, cnt;
		cnt = 0;
		while (a <= b)
		{
			bool left = false;//比较左侧和右侧的字符串
			for (int i = 0; a + i <= b; i++)
			{
				if (S[a + i] < S[b - i])
				{
					left = true;
					break;
				}
				else if (S[a + i]>S[b - i])
				{
					left = false;
					break;
				}
			}
			if (left)putchar(S[a++]);
			else putchar(S[b--]);
			cnt++;
			if (cnt % 80 == 0)
				putchar('\n');
		}
	}
	return 0;
}
