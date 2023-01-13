#include<iostream>
#include<malloc.h>
#include"Header.h"
//#include"Funktionen.cpp"




int main()
{
	char* stringOne;
	char* stringTwo;

	int sizeOne = 10;		//definierte Stringgröße
	int writeOne = 5;		//Anzahl geschriebener Zeichen; stringOne[writeOne] = NULL
	int sizeTwo = 4;		//Dieser Wert - 1 ist Stringlänge, da malloc für Erstellung verwendet wurde.
	//Rückgabewert der Funktion "strcat": 0 = Fehler & 1 = kein Fehler & 2 = unvollständig

	stringOne = (char*)malloc(sizeOne * sizeof(char));
	stringTwo = (char*)malloc(sizeTwo * sizeof(char));

	if (stringOne == NULL)
		printf_s("\nSpeicherreservierung stringOne fehlgeschlagen!\n");

	if (stringTwo == NULL)
		printf_s("\nSpeicherreservierung stringTwo fehlgeschlagen!\n");

	//stringOne Beschreiben
	for (int i = 0; i < writeOne; i++)
	{
		stringOne[i] = 65 + i;
	}
	stringOne[writeOne] = NULL;

	//stringTwo beschreiben
	for (int i = 0; i < sizeTwo; i++)
	{
		stringTwo[i] = 75 + i;
	}
	stringTwo[sizeTwo - 1] = NULL;

	//Ausgabe beschriebender Strings
	printf_s("\n");
	for (int i = 0; stringOne[i] != NULL; i++)
	{
		printf_s("%c ", stringOne[i]);
	}
	printf_s("\n");
	for (int i = 0; stringTwo[i] != NULL; i++)
	{
		printf_s("%c ", stringTwo[i]);
	}

	//Ausgabe Länge der Strings mit Funktion "strlen"
	printf_s("\nDie L\x84nge des Strings 1 betr\x84gt %d Stellen ohne \'\\0\'.", strlen(stringOne));
	printf_s("\nDie L\x84nge des Strings 2 betr\x84gt %d Stellen ohne \'\\0\'.", strlen(stringTwo));
	

	//Rückgabewert strcat ausgeben
	printf_s("R\x94\ckgabewert strcat: %d", strcat(stringOne, sizeOne, stringTwo));
	
	
	strmirr(stringOne);

	printf_s("\n");
	for (int i = 0; i < strlen(stringOne); i++)
	{
		printf_s("%c ", stringOne[i]);
	}
	printf_s("\n");




	free(stringOne);
	free(stringTwo);

	return 0;
}