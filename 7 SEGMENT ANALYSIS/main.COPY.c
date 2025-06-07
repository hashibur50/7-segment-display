
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
char digit[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	
t main(void)
         { 
			int count;
			int i,j,k,l,m,n;
			DDRD=0XFF;
			DDRC=0xff;
			DDRA=0x00;
     while (1)
          { 
	       for(count=0;count<=40;count++)
	                  {
	                    for (j=0;j<15;j++)
		                            {   
										i=1;
										l=k/10;
										PORTD|=(1<<PIND1);
										PORTC=digit[l];
										_delay_ms(i);
										PORTC =0x00;
										PORTD &=~(1<<PIND1);
										_delay_ms(i);
										m=k%10;
										PORTD|=(1<<PIND0);
										PORTC=digit[m];
										_delay_ms(i);
										PORTD=0x00;
										PORTD &=~(1<<PIND0);
										_delay_ms(i);
	    	                         }	
	                   }
			  }
  }



