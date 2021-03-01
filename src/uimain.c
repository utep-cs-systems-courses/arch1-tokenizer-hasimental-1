#include <stdio.h>
#include "tokenizer.h"


int main(){
  //here we are setting the max string
  int max_str =1000; 
 char input_string[max_str];
   puts("Welcome!");

   // this will ask for the user to input the string they would like tokenized
   puts("Please enter the string that you would like tokenized: ");
   fgets(input_string, max_str, stdin);
   //here for testing
   non_space_char(input_string);
 }
