#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>
#include "Fernbedienung_esp32.h"

/*int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);
decode_results results;

typedef struct
{
 long int code;
 String name;
} TastencodeType;

#define MAX_ANZAHL_TASTEN   18
TastencodeType Tastencode[MAX_ANZAHL_TASTEN]={
  {16769055,"Taste 0"},
  {16738455,"Taste 1"},
  {16750695,"Taste 2"},
  {16756815,"Taste 3"},
  {16724175,"Taste 4"},
  {16718055,"Taste 5"},
  {16743045,"Taste 6"},
  {16716015,"Taste 7"},
  {16726215,"Taste 8"},
  {16734885,"Taste 9"},
  {16753245,"Taste A"},
  {16769565,"Taste B"},
  {16748655,"Taste C"},
  {16720605,"Pfeil Links"},
  {16761405,"Pfeil Rechts"},
  {16736925,"Pfeil Hoch"},
  {16754775,"Pfeil Runter"},
  {16712445,"Taste X"}
  };

String getTastennamen(long int Code)
{
    for (int i =0 ; i<MAX_ANZAHL_TASTEN;i++)
     {
      if(results.value == Tastencode[i].code)
      {
      return(Tastencode[i].name);
      }
     }
return ("");
}*/

void setup() {
  /*Serial.begin(115200);
  irrecv.enableIRIn();*/
  Fernbedienung_esp32.setupFernBedienung();
  // put your setup code here, to run once:

} 

void loop() {
  /*if(irrecv.decode(&results)) {
    Serial.println(getTastennamen(results.value));
        irrecv.resume();
  }*/
  Fernbedienung_esp32.loopFernBedienung();
  // put your main code here, to run repeatedly:

}
