#include<stdio.h>

int main()
{
    int n,i;
    int x1,y1,x2,y2;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d %d",&x1,&y1);
        scanf("%d %d",&x2,y2);

        if(x1&&y1==0){
            printf("0\n");
        }
    }


    return 0;
}
