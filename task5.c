
#include <stdlib.h>
#include <stdio.h>

#include <string.h>





int main()

{

	FILE *in, *out;

	char inputString[256];

	int length;

	in = fopen("in.txt", "rt");

	out = fopen("out.txt", "wt");

	if (in == NULL)

	{

		printf("File couldn't be open.\n");

		return 1;

	}



	while (!feof(in))

	{

		fgets(inputString, 256, in);

		

		length = strlen(inputString);

		for (int i = 0; i < length; i++)

		{

			if (inputString[i] == ' ')

				inputString[i] = ',';

		}

		fputs(inputString, out);

	}



	fclose(in);

	fclose(out);

	

	return 0;

}
