# include "MKL25Z4.h"
int leds[8]={6,7,8,9,10,11,12,13};
int main(){
    SIM->SCGC5|=SIM_SCGC5_PORTE_MASK;
    SIM->SCGC5|=SIM_SCGC5_PORTA_MASK;
    PORTE->PCR[2]=PORT_PCR_MUX(1)|PORT_PCR_IRQC(0b1101);
    PORTE->PCR[3]=PORT_PCR_MUX(1)|PORT_PCR_IRQC(0b1010);
    PORTE->PCR[4]=PORT_PCR_MUX(1)|PORT_PCR_IRQC(0b1000);
    PORTE->PCR[5]=PORT_PCR_MUX(1)|PORT_PCR_IRQC(0b1100);
    for(int i=0;i<=7;i++){
        PORTE->PCR[leds[i]]|=PORT_PCR_MUX(1);
    }
    while (1){
        
    }
    
}