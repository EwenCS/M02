#include <iostream>
#include <stdio.h>
#include "DMXTCP.h"



using namespace std;

int _tmain(int argc, _TCHAR* argv[])

{
		int pan;
		DMXTCP monDMXTCP;
		IRClientTCP monClient;
		do
		{
			//cout<<"PAN ?"; cin>>pan;
			//if(monDMXTCP.ModifierCanal(1,pan)==false) cout<<"ERREUR DE CANAL"<<endl;
			//if(monDMXTCP.Envoyer("172.20.21.17",4123)==false) cout<<"LE SERVEUR EST ABSENT"<<endl;

			monDMXTCP.Demonstration();
			monDMXTCP.Envoyer("172.20.21.17",4123);
            monClient.SeDeconnecter();



		}while(1);



	return 0;
}
