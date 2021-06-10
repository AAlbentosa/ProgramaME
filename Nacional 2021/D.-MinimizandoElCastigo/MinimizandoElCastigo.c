#include <stdio.h>
int main(void){
    
    int y;
    scanf("%d", &y);

    int x;
    
    for (x = 0; x < y; ++x){
        int z;
        scanf("%d", &z);
        printf("%d\n",(int)ceil(log2(z)));
    }
}
