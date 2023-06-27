#include<reg51.h> 
sbit en1=P1^4; 
sbit mtr1=P1^0; 
sbit mtr2=P1^1; 
sbit LDR1=P1^2; 
sbit LDR2=P1^3; 
void delay(unsigned int); 
void clockwise(); 
void anticlockwise(); 
void stop();

void main()  
{ 
 	mtr1=0;  	
	mtr2=0;  	
	LDR1=0XFF; 
 	LDR2=0XFF; 
while(1) 
{ 
 	if(LDR1==1 && LDR2==0)  	 	
		clockwise(); 
 	elseif(LDR1==0 && LDR2==1) 
 	 	anticlockwise();  	
	else 
 	 	stop(); 
 	} 
} 
void clockwise(void) 
{ 
 	mtr1=1;  	
	delay(25);  	
	mtr2=0;  	
	delay(75); 
} 
void anticlockwise(void) 
{ 
 	mtr1=0;  	
	delay(25);  	
	mtr2=1;  	
	delay(75); 
} void stop(void) 
{ 
 	mtr1=0;  	
	mtt2=0; 
} 
void delay(unsigned int value) 
{ 
 	unsigned int i.j;  	
	for(i=0;i<value;i++) 
 	for(j=1;j<1275;j++) 
} 
 
