//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

DMXTCP::DMXTCP ()
{      for(int i=0;i<512;i++)
	 {  trame[i]=0;
	 }
}
bool DMXTCP::Envoyer(char IP[16], unsigned short port)
{ if (monClient.SeConnecterAUnServeur(IP,Port)==false)return false;
  monClient.Envoyer(trame,512);
  monClient.SeDeconnecter();
  return true;
}
