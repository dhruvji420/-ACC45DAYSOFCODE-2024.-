#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,x,y;
	    scanf("%d%d%d%d",&a,&b,&x,&y);
	    if(a<=x && b<=y)
	    {
	        printf("possible\n");
	    }
	    else
	    {
	        printf("impossible\n");
	    }
	}
	
	return 0;
}

