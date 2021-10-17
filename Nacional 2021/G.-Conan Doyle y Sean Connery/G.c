#include <stdio.h>
#include <string.h>

void checkCases(int year){
        int n, x, newyear;
        int find=0;
        int all=1;
        char winnerstr[100], str[100];
        int winneryear;
    
        scanf("%d", &n);
    
        for(x=0; x<n; x++){
                scanf("%d", &newyear);
                scanf("%100[^\n]", &str);
        
                if(find==0){
                        if(newyear>=year){
                                strcpy(winnerstr, str);
                                winneryear=newyear;
                                find++;
                        }
                        if(newyear<year)
                                all=0;
                }else{
                        if(newyear>=year && newyear<=winneryear){
                                strcpy(winnerstr, str);
                                winneryear=newyear;
                        }
                        if(newyear<year)
                                all=0;
                }
        }
    
        if(find && all==0){
                for(x=1; x<strlen(winnerstr); x++){
                        printf("%c", winnerstr[x]);
                }
                printf("\n");
        }else if(find && all==1)
                printf("TODAS\n");
        else
                printf("NINGUNA\n");
}

int inputCase() {
        int year, n, x;
        char strnose[100];
    
        if(scanf("%d", &year)!=1) return 0;
    
        scanf("%100[^\n]", &strnose);
        checkCases(year);
        return 1;
}

int main ( ) {
        while(inputCase());
        return 0;
}
