#define  go PORTCbits.RC4
#define  second PORTCbits.RC5 
#define  third  PORTCbits.RC6 
#define  fourth PORTCbits.RC7 

/*#define  0X0C one
#define  0XDA two
#define  0X7C you
#define  0XF2 three
#define  0XEE ahh
#define  0XEC nn
#define  0X7A dwg
#define  0XFD ohh
#define  0X1E tea*/
unsigned char i, k;
unsigned char letters[] = {0X0C,  0XDA, 0XF2, 0X1C, 0X70, 0X76, 0X9E, 0XB6, 0X7C, 0X9C, 0XEE, 0XEC, 0X7A, 0XFD, 0X1E};

void Show(unsigned char num) 
{
    unsigned char *no;
    no = letters;
    for (i =1; i < num; i++) no++;
    PORTD = *no ;
}
void countD (void)
{
        Show(1);
        go = 1;
     __delay_ms(900);
        go = 0;
        Show(2);
        second = 1;
     __delay_ms(900);
        second = 0;
        Show(3);
        third = 1;
     __delay_ms(900);
        third = 0;
        Show(14);
        fourth = 1;
     __delay_ms(900);
        fourth = 0;
}
void you(void)
{
    for( k =0; k < 50;  k++) 
    {
    Show(6);
    go = 1;
 __delay_ms(10);
    go = 0;
    Show(14);
    second = 1;
 __delay_ms(10);
    second = 0;
    Show(9);
    third = 1;
 __delay_ms(10);
    third = 0;
    }
}
void yes(void)
{
     for( k =0; k < 50;  k++) 
    {
    Show(6);
    go = 1;
 __delay_ms(10);
    go = 0;
    Show(7);
    second = 1;
 __delay_ms(10);
    second = 0;
    Show(8);
    third = 1;
 __delay_ms(10);
    third = 0;
     }
}
void Bigu(void)
{
    for( k =0; k < 50;  k++) 
    {
    Show(4);
    second = 1;
 __delay_ms(10);
    second = 0;
    Show(5);
    third = 1;
 __delay_ms(10);
    third = 0;
  }
} 
void can(void)
{
    for( k =0; k < 50;  k++) 
    {
    Show(10);
    go = 1;
 __delay_ms(10);
    go = 0;
    Show(11);
    second = 1;
 __delay_ms(10);
    second = 0;
    Show(12);
    third = 1;
 __delay_ms(10);
    third = 0;
     }
}
void doo(void) 
{
   for( k =0; k < 50;  k++) 
   {
    Show(13);
    second = 1;
 __delay_ms(10);
    second = 0;
    Show(14);
    third = 1;
 __delay_ms(10);
    third = 0;
  }

} 
void it(void) 
{
    for( k =0; k < 50;  k++) 
    {
    Show(1);
    second = 1;
 __delay_ms(10);
    second = 0;
    Show(15);
    third = 1;
 __delay_ms(10);
    third = 0;
  }

}


