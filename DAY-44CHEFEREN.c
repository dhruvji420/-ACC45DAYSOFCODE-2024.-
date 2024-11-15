#include <stdio.h>

int main(void) {
    int fde,i;
    scanf("%d",&fde);
    while(fde--){
        int jh,rt,yu;
        int srh=0;
        scanf("%d%d%d",&jh,&rt,&yu);
        for(i=1;i<=jh;i++){
            if(i%2==0){
                srh+=rt;
            }
            else{
                srh+=yu;
            }
        }
        printf("%d\n",srh);
    }
	// your code goes here
	return 0;
}

