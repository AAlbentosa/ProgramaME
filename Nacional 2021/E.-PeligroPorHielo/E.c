#include <stdio.h>
int main(void){
        int n=1;
        int number, count, alarm, x;
        do{
                count=0;
                alarm=0;
                scanf ("%d",&n);

                for(x=0;x<n; x++){
                        scanf( "%d", &number);
                        if(number<=4 && alarm==0) {						
					count++;
					alarm=1;
		        }else if(number>6 ) {
				        alarm=0;
		        }
                }
                printf("%d\n", count);
        }while(n!=0);
        return 0;
}
