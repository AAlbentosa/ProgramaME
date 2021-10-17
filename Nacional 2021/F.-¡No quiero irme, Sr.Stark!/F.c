#include <stdio.h>

int inputCase() {
        int poblationSize, spidermanIndex, starkIndex, jump, x, peopleThatWillDie, dead;
        int starkAlive=1;
        int peterAlive=1;
        int deadPeople=0;
    
        scanf("%d", &poblationSize);
        scanf("%d", &starkIndex);
        scanf("%d", &spidermanIndex);
        scanf("%d", &jump);
    
        starkIndex--;
        spidermanIndex--;
        peopleThatWillDie = 1 + ((poblationSize-1) / 2);
        dead=jump;
    
        while(deadPeople<peopleThatWillDie){
                while(dead>=poblationSize){
                        dead=dead-poblationSize;
                }
                if(dead==starkIndex)
                        starkAlive=0;
                if(dead==spidermanIndex)
                        peterAlive=0;
                if(dead<starkIndex)
                        starkIndex--;
                if(dead<spidermanIndex)
                        spidermanIndex--;
        
                deadPeople++;
                poblationSize--;
                dead=dead+jump;
        }
    
        if(peterAlive==0 && starkAlive==1)
                printf("No quiero irme, Sr. Stark!\n");
        else if(peterAlive==1 && starkAlive==0)
    	        printf("No quiero irme, Peter!\n");
        else
                printf("No hay abrazo\n");
        return 1;
}

int main(){
        int n, x;
        scanf("%d", &n);
        for(x=0; x<n; x++)
                inputCase();
        return 0;
}
