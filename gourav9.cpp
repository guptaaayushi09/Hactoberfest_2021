#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[40],firstnonrepetedchar;
	int i,j,count,found=0;
	cout<<"enter a string"<<endl;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
			count=0;
		for(j=0;j<strlen(a);j++)
		{
		
			if(a[i]==a[j])
			{
				count++;
				
			}
		}
		if(count==1)
		{
			firstnonrepetedchar=a[i];
			found=1;
			break;
		}
	}
	if(found==0)
	{
		cout<<"all char are repenting"<<endl;
	}
	else{
	cout<<firstnonrepetedchar;
}
	return 0;
}
