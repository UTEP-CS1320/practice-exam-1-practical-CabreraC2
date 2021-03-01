/*
*   PRACTICE EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (2/19/2021)
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
  long x = 10;

  printf("%ld", x);

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Last Digits
     ***************************/
    
    // TODO: Fix the code below.
    int x, y;
    scanf("%d %d", &x, &y);

    int x_digit = x % 10;
    int y_digit = y % 10;

    if(x_digit == y_digit) {
      printf("TRUE");
    }
    else{
      printf("FALSE");
    }
    
    /* Problem 1 End */
  } else if(opt == 2) {
    
    /***************************
     *  Problem 2: Lotto
     ***************************/
    char winner[5] = "7239";
    char ticket[5];
    
    scanf("%s", ticket);    
    
      
    // TODO: Your P2 code goes here
    if (strcmp(ticket, winner)==0){
      printf("1st Prize!\n");
    }
    else if (
      (winner[1] == ticket[1] && winner[2] == ticket[2] && winner[3] == ticket[3]) || 
      (winner[0] == ticket[0] && winner[2] == ticket[2] && winner[3] == ticket[3]) || 
      (winner[0] == ticket[0] && winner[1] == ticket[1] && winner[3] == ticket[3]) || 
      (winner[0] == ticket[0] && winner[1] == ticket[1] && winner[2] == ticket[2]) ){
      printf("2nd Prize!\n");
    }
     else if (
       (winner[2] == ticket[2] && winner[3] == ticket[3]) ||
       (winner[1] == ticket[1] && winner[3] == ticket[3]) ||
       (winner[1] == ticket[1] && winner[2] == ticket[2]) ||
       (winner[0] == ticket[0] && winner[3] == ticket[3]) ||
       (winner[0] == ticket[0] && winner[2] == ticket[2]) ||
       (winner[0] == ticket[0] && winner[1] == ticket[1])){
      printf("3rd Prize!\n");
    }
    else{
      printf("No Prize! Better luck next time!\n");

    }
    
    /* Problem 2 End */
  } else if(opt == 3) {
    
    /***************************
     *  Problem 3: Hex2Dec
     ***************************/
    char hex_in[5];
    scanf("%s", hex_in);

    if (hex_in > //TODO: Your P3 code goes here
    
    printf("%", )
    /* Problem 3 End */
  }
}
