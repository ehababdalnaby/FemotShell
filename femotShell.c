#include<stdio.h>
#include<string.h>




int main()
{
	char input[50] = {0};
	do
	{
		printf("Femot Shell > ");
		scanf("%[^\n]*c",input);
		scanf("%*[^\n]"); scanf("%*c");
		printf("You said: %s\n",input);

	}while(strcmp(input,"exit")!=0);
	printf("Good Bye:)\n");
	return 0;
}
