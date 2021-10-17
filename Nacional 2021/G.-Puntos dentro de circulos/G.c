#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int inputCase() {
        int ratio, x, y, xresult, yresult;
        int xC=0;
        int yC=0;
        float distanceBetweenPoints=0;
        int count=0;
    
        if(scanf("%d", &ratio)!=1) return 0;
    
        scanf("%d", &x);
        scanf("%d", &y);
    
        distanceBetweenPoints=sqrt(pow(xC-x, 2)+pow(yC-y, 2));

        while(ratio>=1){  
                if(distanceBetweenPoints<=ratio)
                count++;
                xresult=abs(xC)-abs(x);
                yresult=abs(yC)-abs(y);
        
                if(abs(xresult)>abs(yresult)){
                        if(xC-x>=0)
                                xC=xC+(ratio*-1);
                        else
                                xC=xC+ratio;
                }else{
                        if(yC-y>=0)
                                yC=yC+(ratio*-1);
                        else
                                yC=yC+ratio;
                }
                distanceBetweenPoints=sqrt(pow(xC-x, 2)+pow(yC-y, 2));
                ratio=ratio/2;
        }
        printf("%d\n", count);
        return 1;
}

int main ( ) {
        while(inputCase());
        return 0;
}
