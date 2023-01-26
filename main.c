#include "lib/include.h"

int main(void)
{
    uint16_t Result[6];
    char ADC[4];
    Configurar_PLL(_50MHZ);  //Confiuracion de velocidad de reloj
    Configurar_UART2();//Yo FCLK 80MHZ Baudrate 19200
    Configurar_GPIO();
    Configura_Reg_ADC0();

   
while(1)
    {
        
    ADC0_InSeq1(Result);
    utoa(Result[0],ADC,10);
    printString(ADC);
    
    utoa(Result[1],ADC,10);
    printString(ADC);

    utoa(Result[2],ADC,10);
    printString(ADC);

    utoa(Result[3],ADC,10);
    printString(ADC);

    ADC0_InSeq3(Result);
    utoa(Result[4],ADC,10);
    printString(ADC);

    ADC0_InSeq2(Result);
    utoa(Result[5],ADC,10);
    printString(ADC);

    }
}
