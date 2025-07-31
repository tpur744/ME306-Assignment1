// fsm_switch.c
#include <stdint.h>
#include <inttypes.h>

#define STATE_FAULT 0
#define STATE_IDLE 1
#define STATE_MOVING 2
#define STATE_HOMING 3

// todo buttons and led definitions

volatile uint8_t current_state = STATE_IDLE;
volatile uint8_t flag_additional_delay;

// todo we may need to debounce the limit switch
// we also need the limit switch to enter both FAULT and reset encoders for homing... ?
// global variables to 'measuring tape' the distances of the gantry every time it HOMES like how a CNC machine probes a part

int main() {

    cli();
    DDRB |= (1 << DDB5);
    DDRD &= ~(1 << DDD2);
    flag_additional_delay = 0;
    EIMSK |= (1 << INT0);
    EICRA |= (1 << ISC00);
    sei();

    while (1) {
        switch (current_state) {
            case STATE_FAULT:
                // blink LED every 50ms
                break;
            case STATE_IDLE:
                // blink LED every 500ms
                break;
            case STATE_MOVING:
                break;
            case STATE_HOMING:
                break;
        }





    }
}


ISR(INT0_vect) {

}
