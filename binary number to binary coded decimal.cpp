/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void) {

   int binaryInput = 0x10; 
   int bcdResult = 0;
   int shift = 0;

   printf("Binary: 0x%x (dec: %d)\n", binaryInput , binaryInput );

   while (binaryInput > 0) 
   {
      bcdResult |= (binaryInput % 10) << (shift++ << 2);
      binaryInput /= 10;
   }

   printf("BCD: 0x%x (dec: %d)\n", bcdResult , bcdResult );
   return 0;
}
