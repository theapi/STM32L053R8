#ifndef USART1_H
#define USART1_H

extern char line[120];

extern void USART1_Init(void);
extern int USART1_GetChar(void);
extern char USART1_PutChar(char character);
extern void USART1_Read(void);
extern void USART1_Send(char c[]);
extern void FGPMMOPA6H_RMC_Data(void);
extern void FGPMMOPA6H_Get_RMC_UTC_Time(void);

#endif
