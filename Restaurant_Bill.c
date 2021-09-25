/* 
Goal: Calculate tax and tip on a meal picked at random
--get values of type double for tax and tip from the user
  and consider them as percentages of the cost of the meal.
--randomly choose 1 out of 4 meals by importing time library
  and using srand() and rand() to make sure the same randomization
  value doesn't happen often.
--Once a meal is chosen, get that meal's cost and use it in the
  tax and tip calculations. We can divide percentages by 100 and 
  then multiply those new values to the meal cost. After that
  calculation we can add those values together and then add them
  to the original cost of the given meal. calculations are always done
  on the subtotal.
--once calculations are done, display meal cost, tax amount, tip amount,
  and total bill to the console.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Function declaration and implementation
double calculate_Bill(double user_tax, double user_tip, int user_choice){

    //Total cost of meal, Tax amount, and Tip amount declarations
    double total_bill = 0;
    double tax_amount;
    double tip_amount;

    //Four meals and their costs to be used in calculations
    double salad = 9.95;
    double soup = 4.55;
    double sandwich = 13.25;
    double pizza = 22.35;

    //Modified tax and tip percentages
    double new_tax = user_tax / 100;
    double new_tip = user_tip / 100;
    
    //Calender Time type from time.h library and randomization functions
    /*time_t t;
    int random_num;

    srand((unsigned) time(&t));
    random_num = rand() % 4; //returns a int from 0 to 3 */

    //Control statements to determine which meal cost to choose
    if (user_choice == 1){
        tax_amount = (salad * new_tax);
        tip_amount = (salad * new_tip);
        total_bill = salad + tax_amount + tip_amount;
        printf("%lf\n", salad);
    }
    else if(user_choice == 2){
        tax_amount = (soup * new_tax);
        tip_amount = (soup * new_tip);
        total_bill = soup + tax_amount + tip_amount;
        printf("%lf\n", soup); 
    }
    else if(user_choice == 3){
        tax_amount = (sandwich * new_tax);
        tip_amount = (sandwich * new_tip);
        total_bill = sandwich + tax_amount + tip_amount; 
        printf("%lf\n", sandwich);
    }
    else if(user_choice == 4){
        tax_amount = (pizza * new_tax);
        tip_amount = (pizza * new_tip);
        total_bill = pizza + tax_amount + tip_amount; 
        printf("%lf\n", pizza);
    }

    printf("%lf\n", tax_amount);
    printf("%lf\n", tip_amount);

    return (total_bill);
}


//Main driving function

int main(){

    //Declaring user input variables
    double user_tax;
    double user_tip;
    int user_choice;

    //Getting input with scanf
    printf("Enter tax percentage, tip percentage, and a int 1 - 4\n");
    scanf("%lf\n", user_tax);
    scanf("%lf\n", user_tip);
    scanf("%d\n", user_choice);

    //Call calculate function, pass in user input, and output results
    printf("%lf\n", calculate_Bill(user_tax, user_tip, user_choice));

    return 0;
}