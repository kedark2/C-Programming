/****************************************************************************
 * APLICATION: 	ex0902
 * MODULE: 		menu
 * PURPOSE:		To display and handle menu
 * DATE:		16.11.2011
 * AUTHOR(S):	Kedar Kanel
 *
 *  Source file
 ****************************************************************************/
#include<stdio.h>
#include<string.h>

/************************************Prototypes of Functions *****************/
static void displayText (char* const s);
static void readText (char* b, int blen);
/******************************************************************************
 *
 * MAIN FUNCTION
 * ****************************************************************************/

int main (void)
{

	char buffer[BUFSIZ]; /* we can change the number of size by putting the number we desire in place of bufsiz*/

	readText(buffer, sizeof (buffer));
	/*printf ("TEXT:	 |%s|\n", text);*/
	printf ("LENGTH: %d\n", strlen(buffer));
	printf ("SIZE:	 %d\n", sizeof(buffer));
	displayText (buffer);





return 0;
}
/********************************************************************************
 * Procedure reads text from the standard input.
 *
 * input : b Buffer for text us to be read.
 * output:
 *********************************************************************************/
void  readText(char* b, int blen)
{
	printf("TEXT:  ");
	fflush (stdout);
	fgets(b, blen, stdin);
	/*scanf("%s", b);*/
	*(b + strlen(b) - 1) = 0;



}
/********************************************************************************
 * Procedure prints out given character sequence
 *
 * input : s character sequence is to be printed put
 * output:
 *******************************************************************************/
void displayText(char* const s)
{
char *p1;

	printf("\n");
	printf("Text: %s\n", s);
	printf ("CHARS: ");
	p1 = (char*)s;

		while (*p1){
			printf("%c",*p1++);
			/*printf("\n");*/

		}


}
