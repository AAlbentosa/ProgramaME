#include <stdio.h>

int casoDePrueba ( ) {
        int dividend=11;
        int count=2;
        int divider;
    
        if(scanf("%d", &divider)!=1) return 0;
        if(divider==1){
                printf("1\n");
                return 1;
        }
        for(count=2; dividend%divider!=1; count++){
                if(dividend>divider){
                        dividend=(dividend%divider*10)+1;
                }else{
                        dividend=(dividend*10)+1;
                }
        }
        printf("%d\n",count-1);
        return 1;
}

int main ( ) {
        while(casoDePrueba());
        return 0;
}
