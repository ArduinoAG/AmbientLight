#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>
#include <Arduino.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);
decode_results results;

extern String getTastennamen(long int Code);

extern void setupFernBedienung();
extern void LoopFernBedienung();
