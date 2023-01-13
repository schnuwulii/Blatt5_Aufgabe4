#include<iostream>
#include"Header.h"


int strlen(char* string)
{
	int stellen = 0;
	
	for (int i = 0; string[i] != NULL; i++)
	{
		stellen++;
	}

	return stellen;
}

//Fehler in strcat bei Neuzuweisung String2 an String1
int strcat(char* stringOne, int sizeOne, char* stringTwo)
{
	//return 0 = Fehler & return 1 = kein Fehler
	if (sizeOne <= strlen(stringTwo))
	{
		printf_s("\nFehler 1\n");
		return 0;
	}
	else if (strlen(stringOne) <= strlen(stringTwo))
	{
		printf_s("\nFehler 2\n");
		return 0;
	}
	else if ((strlen(stringTwo) + strlen(stringOne)) < sizeOne)
	{
		printf_s("\n\nMach was draus! (strcat)\n");

		//-----------------------ab hier Fehlerhaft---------------------//
	/*
		//String 2 an String 1 anschließend anschreiben; ! das \0 von String 1 wird überschrieben
		for (int i = 0; i < strlen(stringTwo); i++)
		{
			stringOne[i + sizeOne] = stringTwo[i];
		}
	
		//Ausgabe von String 1 nach Aktion
		printf_s("\nNach dem Anh\x84ngen lautet String 1:\n");
		for (int i = 0; i < strlen(stringOne); i++)
		{
			printf_s("%c ", stringOne[i]);
		}
	*/

		return 2;
	}
	else
	{
		printf_s("\nFehler 3\n");
	}
	

	
	return 0;
}

//-----------tut noch nicht ganz...------------
void strmirr(char* string)
{
	char merker;
	printf_s("\nstring 1: %c", string[0]);
	printf_s("\nstring l: %c", string[strlen(string)-1]);
	
	for (int i = 0; i < strlen(string) - 1; i++)
	{
		//erster value letztem zuweisen nach pufferung letztem oder erstem value
		merker = string[i];
		
		string[i] = string[strlen(string) - 1 - i];
		string[strlen(string) - i] = merker;
	}
	printf_s("\nstring 1: %c", string[0]);
	printf_s("\nstring l: %c", string[strlen(string) - 1]);
}