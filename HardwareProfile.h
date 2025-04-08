/* USB_BB hardware profile */
#ifndef HARDWARE_PROFILE_USB_BB_H
#define HARDWARE_PROFILE_USB_BB_H
    #define self_power          1
    #define USE_INTERNAL_OSC
    #define CLOCK_FREQ 48000000
    #define GetSystemClock() CLOCK_FREQ
    #define SPBRG   SPBRGL

#endif 
