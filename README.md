1. (5 pts) Write a complete program in C++ that displays a morning or a night routine. The program should prompt the user, asking them which routine they want to see (morning routine or night routine). 

Your program should define two void functions with no parameters:

morningRoutine()
This function should display at least three steps for a morning routine (e.g. "Wake up", "Brush your teeth", "Have breakfast").

nightRoutine()
This function should display at least three steps for a night routine (e.g. "Brush your teeth", "Read a book", "Go to bed").

Your program must have function prototypes. Your program will display the routine steps based on the user's choice by calling one of the functions.

Sample output and input:

Sample Input 1:

Which routine do you want to see (morning or night)? morning
Sample Output 1:

Morning Routine:
Wake up
Brush your teeth
Have breakfast
Sample Input 2:

Which routine do you want to see (morning or night)? night
Sample Output 2:

Night Routine:
Brush your teeth
Read a book
Go to bed

2. (5 pts) Write a complete program in C++ that simulates a rocket launch. 

Your program should define two void functions with no parameters:

displayWarning()
This function should display a countdown in a loop from 5 to 1. The function should not continue its countdown until the user enters a whitespace character in between the countdown. After the countdown is complete, the function should then display "Warning: Prepare for launch." 

launchSequence()
This function calls displayWarning(), then displays "Launching the rocket!" and "Rocket has left the atmosphere."

Your program must have function prototypes.

Sample output (user will input [Enter]).

Output:

5 [Enter]
4 [Enter]
3 [Enter]
2 [Enter]
1 [Enter]
Warning: Prepare for launch.
Launching the rocket!
Rocket has left the atmosphere.
