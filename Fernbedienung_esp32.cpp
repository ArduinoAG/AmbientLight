

typedef struct
{
 long int code;
 String name;
} TastencodeType;

#define MAX_ANZAHL_TASTEN   18
TastencodeType Tastencode[MAX_ANZAHL_TASTEN]={
  {16769055,"0"},
  {16738455,"1"},
  {16750695,"2"},
  {16756815,"3"},
  {16724175,"4"},
  {16718055,"5"},
  {16743045,"6"},
  {16716015,"7"},
  {16726215,"8"},
  {16734885,"9"},
  {16753245,"A"},
  {16769565,"B"},
  {16748655,"C"},
  {16720605,"Links"},
  {16761405,"Rechts"},
  {16736925,"Hoch"},
  {16754775,"Runter"},
  {16712445,"X"}
  };

String getTastennamen(long int Code)
{b
    for (int i =0 ; i<MAX_ANZAHL_TASTEN;i++)
     {
      if(results.value == Tastencode[i].code)
      {
      return(Tastencode[i].name);
      }
     }
return ("");
}

void setupFernBedienung() {
  Serial.begin(115200);
  irrecv.enableIRIn();
  // put your setup code here, to run once:

} 

void loopFernBedienung() {
  if(irrecv.decode(&results)) {
    Serial.println(getTastennamen(results.value));
        irrecv.resume();
  }
  // put your main code here, to run repeatedly:

}
