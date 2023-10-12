#include <iostream>
#include "IRClientTCP.h"
#include <stdio.h>



using namespace std;

int _tmain(int argc, char* argv[])

{
	IRClientTCP monClient;
	unsigned char trame[512];
	for (int i= 0; i <512; i++)  trame[i]=0;
	int pan;
	do
	{
		cout<<"PAN ?"; cin>>pan;
		trame[0]=pan;
		monClient.SeConnecterAUnServeur("172.20.21.17",4123);
		monClient.Envoyer((char*)trame,512);
		monClient.SeDeconnecter();
	}while (1);







	return 0;
}
