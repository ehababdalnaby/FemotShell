#include<stdio.h>
#include<string.h>




int main()
{
	char input[20] = {0};
	do
	{
		printf("Femot Shell > ");
		scanf("%s",input);
		printf("You said: %s\n",input);

	}while(strcmp(input,"exit")!=0);
	printf("Good Bye:)\n");
	return 0;
}
