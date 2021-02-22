#include <stdio.h>
#include "tokenizer.h"

int main(){
  
   puts("Welcome!");

     while(1){
    fputs("Please enter t to tokenize and q to quit");
    fflush(stdout);

      int c;
      while((c == getchar() == '\n'))
	// this will check if it is an end of file and just jump to END
	if(c == EOF)
	  goto END;
      // here are cases where we will check to see if it is 
      switch(c){
	// if user inputs t then it will ask for the users string that they want 
      case 't' :
	puts("Please enter the string that you would like tokenized: ");
	break;
	// here is where we will terminate if user inputs q
      case 'q':
	puts("Thank you for using Tokenizer!");
	goto END;
	
      case '\n':
	break;
      default:
	printf("'%c' not a valid option please enter a valid option: \n ", c);
	
      }
    }
      // this is where the program jumps to if user inputs q and ends program
    END:
      return 0;
   
 }
