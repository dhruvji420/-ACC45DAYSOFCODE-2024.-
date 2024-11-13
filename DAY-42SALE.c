#include <stdio.h>

int main() {
	int n,x,y,z,t1,t2;
	scanf("%d",&n);
	while(n--)
	{
	    scanf("%d%d%d",&x,&y,&z);
	    (x<y)?(t1=x):(t1=y);
	    (t1<z)?(t2=t1):(t2=z);
	    printf("%d\n",x+y+z-t2);
	}
	return 0;
}

