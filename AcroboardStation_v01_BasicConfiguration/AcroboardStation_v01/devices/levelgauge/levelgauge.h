/*
 * levelgauge.h
 *
 * Created: 5/8/2014 10:44:10 AM
 *  Author: marco
 */ 


#ifndef LEVELGAUGE_H_
#define LEVELGAUGE_H_

#define LG_ADC_PORT		PORTB
#define LG_ADC			ADCB
#define LG_ADC_CH		ADC_CH0
#define LG_ID			0

typedef struct {
	uint16_t val;
	uint16_t lastVal;
	uint16_t adcVal;
	uint16_t aVal;
} LG_MB7062_STATS;

void levelgauge_init(void);
void levelgauge_getValue(LG_MB7062_STATS * const);
void levelgauge_interrupt_start(void);
void levelgauge_adcGetValue( void );

#endif /* LEVELGAUGE_H_ */