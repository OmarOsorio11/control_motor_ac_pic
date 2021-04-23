#include <16F1827.h>
#device ADC=16
#use delay(clock=4MHz,crystal=4MHz)

#define LED PIN_B0
#define DELAY 1000
void main()
{
   set_tris_a(0b11111111);
   set_tris_b(0b00000000);
   while(TRUE)
   {
      if(input_state(PIN_A0))
      {
         output_high(LED);   
      }
      else 
      {
         output_low(LED);
      }
   }
}


