#include "DummyServer.h"

void DummyServer::event(float * buffer){

 // DO something
 // set values back to Buffer
   uint8_t * buff = (uint8_t *) buffer; //Cast buffer address to array of unsigned integers, so it is easy to fill with zeroes 
   for(int i = 0; i < 64;i++) //Fill returning packet with 0s
      buff[i]=0x00;
}
