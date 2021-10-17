#include <stdio.h>
int main(void){
        int x, y, lines;
        scanf("%d", &y);
    
        for (x = 0; x < y; ++x){
                scanf("%d", &lines);
                printf("%d\n",(int)ceil(log2(lines)));
        }
}
