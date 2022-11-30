#include "tdelay.h"

TDelay::TDelay() {
  this->bidtimi = 1000;
  this->lidinn_timi = 0;
}

TDelay::TDelay(unsigned int bidtimi) {
  this->bidtimi = bidtimi;
  this->lidinn_timi = 0;
}

unsigned int TDelay::getBidtimi() {
  return this->bidtimi;
}

void TDelay::setBidtimi(unsigned int bidtimi) {
  this->bidtimi = bidtimi;
}

unsigned long TDelay::getLidinnTimi() {
  return this->lidinn_timi;
}

bool TDelay::timiLidinn() {
  unsigned long timi_nuna = millis();
  if(timi_nuna - lidinn_timi >= bidtimi) {
    lidinn_timi = timi_nuna;
    return true;
  }   
  return false; 
}
