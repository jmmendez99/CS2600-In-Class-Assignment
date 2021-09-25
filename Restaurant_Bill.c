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
  to the original cost of the given meal.
--once calculations are done, display meal cost, tax amount, tip amount,
  and total bill to the console.
*/