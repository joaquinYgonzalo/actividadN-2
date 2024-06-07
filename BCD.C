#include "BCD.h"
#include "MKL25Z4.h"
int display[10][4]={
    {0, 0, 0, 0},
    {0, 0, 0, 1},
    {0, 0, 1, 0},
    {0, 0, 1, 1},
    {0, 1, 0, 0},
    {0, 1, 0, 1},
    {0, 1, 1, 0},
    {0, 1, 1, 1},
    {1, 0, 0, 0},
    {1, 0, 0, 1}
};

void BCD(){
    int cont=0;  
    int i, j;
    for(i=0; i<10;i++){
        for(j=0;i<4;i++){
            PTE->PSOR|=(1u<<display[i][j]);

        }
    }
}