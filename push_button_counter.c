#include <reg51.h>

sbit BTN = P3^2;
sbit RS  = P3^0;
sbit EN  = P3^1;

void delay(unsigned int d)
{
    unsigned int i,j;
    for(i=0;i<d;i++)
        for(j=0;j<1275;j++);
}

/* LCD functions */
void lcd_cmd(unsigned char cmd)
{
    RS = 0;
    P2 = cmd;
    EN = 1; delay(2); EN = 0;
}

void lcd_data(unsigned char dat)
{
    RS = 1;
    P2 = dat;
    EN = 1; delay(2); EN = 0;
}

void lcd_init()
{
    lcd_cmd(0x38);  // 8-bit, 2-line
    lcd_cmd(0x0C);  // Display ON
    lcd_cmd(0x06);  // Entry mode
    lcd_cmd(0x01);  // Clear
}

void lcd_number(unsigned int num)
{
    lcd_data((num/10) + '0');
    lcd_data((num%10) + '0');
}

void main()
{
    unsigned int count = 0;

    lcd_init();
    lcd_cmd(0x80);
    lcd_data('C'); lcd_data('O'); lcd_data('U'); lcd_data('N'); lcd_data('T');

    while(1)
    {
        if(BTN == 0)          // Button pressed
        {
            delay(20);        // Debounce
            if(BTN == 0)
            {
                count++;
                lcd_cmd(0xC0);
                lcd_number(count);
                while(BTN == 0);  // Wait for release
            }
        }
    }
}
