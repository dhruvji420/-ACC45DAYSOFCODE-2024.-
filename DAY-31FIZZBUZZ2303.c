#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int choices=n*(n-1);
	    printf("%d\n",choices);
	}
	return 0;
}

