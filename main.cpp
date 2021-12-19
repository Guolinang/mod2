#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <math.h>
#include "functions.h"



struct People {
	char Surname[32];
	char Name[32];
	char Patronymic[32];
	char Sex;
	char Post[32];
	char Born[16];
};

void N2(struct People* array,int n)
{
	for (int i = 0; i < n; ++i)
	{
		int date;

		if (array[i].Post == "engineer")
		{
			int c = 0;
			int date = 2021 - atoi(array[i].Born);
			}
		if (array[i].Sex == 'm' && date > 65)
				printf("%s %s %s", array[i].Surname, array[i].Name, array[i].Patronymic);
		if (array[i].Sex == 'f' && date > 60)
				printf("%s %s %s", array[i].Surname, array[i].Name, array[i].Patronymic);
		
	}
	return;
}

void N3()
{
	FILE* F;
	errno_t err = fopen_s(&F, "f.txt", "r");

	if (err)
	{
		perror("file F");
		return;
	}

	FILE* G;
	errno_t err_ = fopen_s(&G, "g.txt", "w+");

	if (err_)
	{
		perror("file G");
		return;
	}
	int c = 0;

	for (char tmp = 0; fscanf_s(F, "%d", &tmp) != EOF;)
	{
		if (tmp == ' ')
		{
			++c;
		}

		if ((c + 1) % 4 != 0 && tmp == 'ï')
			fscanf_s(F, "%c", G);

	}
	return;
}

