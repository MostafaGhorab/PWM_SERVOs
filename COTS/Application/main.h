#include "../SERVICES/Std_types.h"
#include "../SERVICES/Bit_utils.h"
#include "../SERVICES/Utility/Map/Map.h"
#include "../MCAL/Port/Port.h"
#include "../MCAL/Dio/Dio.h"
#include "../MCAL/Gpt/GPT.h"
#include "../HAL/Servo/Servo.h"

#include <util/delay.h>
#include <avr/io.h>

#define ADC_u16MIN			0
#define ADC_u16MAX			1023

#define SERVO_s8MIN_ANGLE	-90
#define SERVO_s8MAX_ANGLE	90
