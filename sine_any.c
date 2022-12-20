#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 256

//int sine[MAX] = {0};
int *sine = NULL;

int i = 0;

float t = 0;

int main(int argv, char *argc[])
{

	int input = 0, index=1, k=0;

	char number[MAX]={0};

	if(argv<3)
	{
		printf("More arguments required.\n");

		return -1;
	}

	printf("Argv[1] = %s\n", argc[1]);

//	for(i=0; (i < MAX) && (argc[1][i]!='\0'); i++)
//	{
//		number[i] = (int)*(argc[1]+(k++));
//	}
//
//	for(i=k; i>0; i--)
//	{
//		input += index * number[i];
//
//		index*=10;
//
//		printf("%d\n", input);
//	}

	input = atoi(argc[1]);


	printf("Input: %d\n", input);

	sine = (int *)malloc((int)argc[1]);

	for(i=0; i<input; i++)
	{
		t = (float)i/input;

		sine[i] = (int)((MAX-1)*sin(2*M_PI*t));

		if(argv>2)
		{
			if(*argc[2] == '+')
				sine[i] = abs(sine[i]);

			else if(*argc[2] == 'h')
			{
				if(i>input/2)
					sine[i] = 0;
			}
		}

	}

	printf("{");

	for(i=0; i < input; i++)
	{
		
		if(i == 0)
			printf("%3d", sine[i]);

		else
			printf("%4d", sine[i]);

		if(i<input-1)
			printf(", ");

		else
			printf("};");

		if(i%8 == 7)
			printf("\n");
	}
	
	free(sine);

	return 0;
}
