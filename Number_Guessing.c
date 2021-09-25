/*
--The whole program can probably be in multiple while loops that keeps the player
  in the game until they press '3'
--For option 1 create a while loop that keeps the player in the guessing stage
  until they guess the right number or press 'q'. Use if statements to check if the user
  number is the right number. If they get it right use a continue/break statement that will
  push them out of the option 1 stage loop and to the outer loop which will prompt
  them again with the 3 original options.
--For option 2 display what the max value the user can set a the number to. Can create
  a while loop that keep them in option 2 stage until they input a number that is 
  less than or equal to the max number and not a negative number/less than 0. Once they
  do put in a right number, continue/break the loop to move the user out of option 2 stage.
--For option 3 print Thank You for Playing and exit the program.
--Try to save max number of the program to a file and then read that number back into the program
  when you start it up again.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_num_generator(int max_number)

int main() {

    //Declarations
    int user_choice;
    int user_guess;
    int winning_number;

    //Get user input
    printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
    scanf("%d\n", user_choice);

    //Call random number generator function

    //Outer Loop that will constantly print out the options of the game
    while(user_choice != 3){
        while(user_guess != winning_number){

            //if Statement to see if user_guess is lower or higher than the winning number
            

        }

    }

    



    return 0;
}