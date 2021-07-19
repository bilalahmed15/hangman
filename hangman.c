//Bilal ahmed 19I-1874 AI-K

#include <stdio.h>
#include <ctype.h>
#include "hangman.h"

#define GENRES 		3
#define ALPHABETS 	26
#define MAX_MISTAKES 5




int main( void ) {
       int vla=0;

	int g;
	const char *s;
	
	init();
	printf("Let's play the game of hangman.\n\n");

	printf("The computer will pick a random phrase.\n");
	printf("Enter letters for your guess.\n");
	printf("After 5 wrong guesses you lose.\n\n");

	printf("I am thinking of a %s ...\n\n", getGenre( g = getRandom(GENRES) ));
	
	s = getPhrase( g );

	// YOUR CODE GOES HERE !
	int check=0;
	
	char stars[100];
	printf("The current phrase is ");
       for(int i=0;i<=strlen(s);i++)
	{
	if (s[i]>='A' && s[i]<='Z'){
		stars[i]='*';printf("*");
		}
	else if(s[i]=='-'){
	printf("-");
	}	
	else if (s[i]>='a' && s[i]<='z'){
			stars[i]='*';printf("*");
		}
		else {stars[i]=' ';printf(" ");}
		
	}


	while(1){
	int win=0;
	if(win==strlen(s)){
	printf("You wins");
	printf("The secret phrase was:");
	printf("%s",s);
	break;
	}
	else if (vla == 4){
	printf("You loses.\n");
	printf("The secret phrase was: ");
	printf("%s\n",s);
	break;
	}
		
	
	
	char temp[1000];
	char alpha='A';
	char input;
        char star2;
	int j=0;
	printf("\n\nThe letters you have not guessed yet are:\n");
    for(int i=0;i<26;i++){

     printf("%c--",alpha);
     alpha++;
        if(input==alpha){
            input-alpha;
                    }
			
		
	}
	
	printf("\n\nEnter your next guess: ");
	input=getchar();
	for (int i =0; getchar() != '\n'; i++) {
		if (i ==0) {
		input = getchar();
	
		}
		
		else{
		continue;
		}
	}
	
	
	
	printf("You guessed: %c\n\n",toupper(input));
	int t=0;
	for(int i=0;s[i]!='\0' ;i++){
	if(s[i]==tolower(input) || s[i]==toupper(input)){
	t=1;
	}
	
	
	}
	
	
	if(t==1){
	printf("That is present in the secret phrase.\n\n");
	win++;
	printf("Number of wrong guesses so far: %d\n\n",vla);
	
	}else {printf("That is not present in the secret phrase.\n\n");
	printf("Number of wrong guesses so far: %d\n\n",++vla);
	
	showHangman(vla);
	}

	printf("The current phrase is ");
	
	//for(int i=0;i<=strlen(s);i++){
	
	//}
	
	for(int i=0;i<=strlen(s);i++){
	if(s[i]==tolower(input)){
	stars[i]=tolower(input);
	
	}
	else if(s[i]==toupper(input)){
	stars[i]=toupper(input);
	}
	else if(s[i]=='-'){
	printf("-");
	}
	
	
	printf("%c",stars[i]);
	
	
	}
	printf("\n");
	}	

return 0;
	
	}
	
