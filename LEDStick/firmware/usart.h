#ifndef _USART_H
#define _USART_H

void USART0_Init (void);
void USART0_putc (char c);
uint8_t USART0_Getc_nb(uint8_t*);

volatile uint8_t appStart;

#endif

