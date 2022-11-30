#ifndef tdelay_h
#define tdelay_h

#include "Arduino.h"

class TDelay {
    unsigned int bidtimi;
    unsigned long lidinn_timi;
  public:
    TDelay();
    TDelay(unsigned int bidtimi);
    unsigned int getBidtimi();
    void setBidtimi(unsigned int bidtimi);
    unsigned long getLidinnTimi();
    bool timiLidinn();
};

#endif // tdelay_h