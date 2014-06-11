/*
 * DS18B20_2.h
 *
 * Created: 3/28/2014 10:33:16 AM
 *  Author: marco
 */ 


#ifndef DS18B20_2_H_
#define DS18B20_2_H_

//DS18B0 connections
#define DS18B20_2_COM_PORT			IOPORT_CREATE_PIN(PORTA, 5)
void DS18B20_2_get_stats( int16_t * ps );

void DS18B20_2_getValue(void);
#endif /* DS18B20_H_ */