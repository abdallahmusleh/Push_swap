# push_swap
_This project has been created as part of the 42 curriculum by user abmusleh._ Description: push_swap is an algorithmic project from the 42 curriculum that involves sorting a stack of integers using a very limited set of operations and two stacks: stack A and stack B.
The objective is to sort the numbers in ascending order while producing the smallest possible number of operations.  
In this implementation, the problem is solved using a Radix Sort–based approach, which provides reliable performance for large input sizes (100+ and 500+ numbers).

Instructions:
Compilation-> Run the program by passing a list of integers as arguments.
ex: ./push_swap 3 2 1
To verify the correctness of the output, you can pipe the result into the checker program, which you install through the intra:
./push_swap 3 2 1 | ./checker 3 2 1
The program displays Error and exits if:
1-Duplicate values are provided
2-Non-numeric arguments are detected
3-Values exceed integer limits (INT_MIN / INT_MAX)
4-The input is empty or invalid

Resources: I used google, youtube, AI, and peers to learn about the project. AI was used to ask questions and figure out some theoretical errors in my code.
