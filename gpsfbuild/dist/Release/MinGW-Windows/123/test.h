#define PORTA0_ENABLE PORTA->SETTX=0x00000001; /*!< Включить порт A0*/
#define PORTA0_DISABLE PORTA->CLRTX=0x00000001; /*!< Выключить порт A0*/

#define PORTB0_ENABLE PORTB->SETTX=0x00000001; /*!< Включить порт B0*/
#define PORTB0_DISABLE PORTB->CLRTX=0x00000001; /*!< Выключить порт B0*/

#define PORTC0_ENABLE PORTC->SETTX=0x00000001; /*!< Включить порт C0*/
#define PORTC0_DISABLE PORTC->CLRTX=0x00000001; /*!< Выключить порт C0*/

#define PORTD0_ENABLE PORTD->SETTX=0x00000001; /*!< Включить порт D0*/
#define PORTD0_DISABLE PORTD->CLRTX=0x00000001; /*!< Выключить порт D0*/

#define PORTE0_ENABLE PORTE->SETTX=0x00000001; /*!< Включить порт E0*/
#define PORTE0_DISABLE PORTE->CLRTX=0x00000001; /*!< Выключить порт E0*/

#define PORTF0_ENABLE PORTF->SETTX=0x00000001; /*!< Включить порт F0*/
#define PORTF0_DISABLE PORTF->CLRTX=0x00000001; /*!< Выключить порт F0*/
#define PORTF15_ENABLE PORTF->SETTX=0x00008000; /*!< Включить порт F15*/
#define PORTF15_DISABLE PORTF->CLRTX=0x00008000; /*!< Выключить порт F15*/

//Init Function 
void InitFunction();