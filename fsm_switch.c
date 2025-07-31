// fsm_switch.c
#include <stdint.h>

#define STATE_FAULT 0
#define STATE_IDLE 1
#define STATE_MOVING 2
#define STATE_HOMING 3

volatile uint8_t current_state = STATE_IDLE;




ISR(){

}