 #include <stdio.h>

/**
* main - Fonction main.
*
* @argc: Size of array.
* @argv: Array.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return(0);
}
