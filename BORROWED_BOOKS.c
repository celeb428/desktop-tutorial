/*
NAME:CALEB NGUGI MBURU
REG:CT100/G/26188/25
DES:BORROWED BOOKS
*/

#include <stdio.h>

int main()
{

	char book[100];
	FILE *lby;
	lby = fopen("Borrowed_books.txt","a+");
	if(lby==NULL){
		printf("Error in opening file!\n");
		return 1;
		
	}
	
	
	printf("Enter the title of the book\n");
	fgets(book,sizeof(book),stdin);
	fprintf(lby, "%s\n",book);
	

	
	fclose(lby);
	printf("results have been written to Borrowed_books.txt");
	return 0;
}