#include<stdio.h>
int prime(int n,int i);
int main()
{
	int p,n,tc;
	scanf("%d",&tc);
	for(int j=0;j<tc;j++)
	{
	    scanf("%d",&n);
	    p=prime(n,n/2);
	    if(p==1)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}
int prime(int n,int i)
{
    if(i==1)
	return 1;
    	
	else
	{
	    if(n%i==0)
        return 0;
        else
        prime(n,i-1);
 
    }
}
