#include <stdio.h>
int main(void){
    
    int copas;
    while(1){
        scanf("%i", &copas);
        if (copas==0)break;
        
        if(copas!=1){
            printf ("%d\n",copas-copas%2); 
       }else{
            printf ("1\n");
        }
    }
}
