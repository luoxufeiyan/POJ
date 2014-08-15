#include<iostream>
using namespace std;
#define n 1000
int main()
{
	int r[n],g[n],b[n],flag=0;
	int d=0;
	int i=0,j=0,k=0;
	int temp;
	while (cin>>r[i]>>g[i]>>b[i],r[i]!=-1&&g[i]!=-1&&b[i]!=-1)
	{
		j=i;
		if(j>=16)
		{
			d=(r[j]-r[0])*(r[j]-r[0])+(g[j]-g[0])*(g[j]-g[0])+(b[j]-b[0])*(b[j]-b[0]);
			for(flag=k=0;k<16;k++)
			{
				temp=(r[j]-r[k])*(r[j]-r[k])+(g[j]-g[k])*(g[j]-g[k])+(b[j]-b[k])*(b[j]-b[k]);
				if(d>temp)
				{
					d=temp;
					flag=k;
				}
			}
			cout<<"("<<r[j]<<","<<g[j]<<","<<b[j]<<") maps to (" <<r[flag]<<","<<g[flag]<<","<<b[flag]<<")"<<endl;
		}
		i++;
	}
	return 0;
}
