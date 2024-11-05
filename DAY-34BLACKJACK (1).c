#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,i;
	    scanf("%d%d",&a,&b);
	   
	  i=21-(a+b);
	  if(i>0&&i<11){
	       
	       printf("%d\n",i);}
	        
	    
	    else{
	        printf("-1\n");
	 
	    }
	}
	return 0;
}

