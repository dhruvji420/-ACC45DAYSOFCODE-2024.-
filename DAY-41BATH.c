#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	   if(x>=2*y)
	    printf("%d\n",x/(2*y));
	    else{
	        printf("%d\n",0);
	    }
	    
	}
	return 0;
}

