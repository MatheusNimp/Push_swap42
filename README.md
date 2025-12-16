*This project has been created as part of the 42 curriculum by maamaral.*

# Push_Swap

## Description
Push_Swap is a project from the 42 curriculum designed to test your understanding of algorithms and data manipulation.  
The goal of the project is to sort a stack of integers in ascending order using a limited set of operations (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`) in the fewest moves possible.  

In this implementation, the **Turkish Sort** algorithm was used to optimize the number of operations. The algorithm intelligently divides and orders elements, ensuring an efficient sorting process even with larger stacks.  

## Instructions
### Compilation
To compile the project, run the following command in the root directory:  
```bash
make
```
Execution

To run the program, use the following syntax:
```bash
./push_swap [numbers...]
```

Example:
```bash
./push_swap 3 2 5 1 4
```
The program will output a sequence of operations that, when applied to the stack, will sort it in ascending order.

Resources

42 Push_Swap PDF
 – Official project subject.

(https://www.geeksforgeeks.org/dsa/stack-data-structure/)
https://www.youtube.com/watch?v=wRvipSG4Mmk&t=599s&pp=ygUScHVzaCBzd2FwIHR1dG9yaWFs
AI was used to help research different sorting methods and understand their differences, as well as to clarify questions about project structure.

# Project Structure

push_swap/
├── push_swap.c
├── README.md
├── Makefile
├── include/
│ ├── operations.h
│ ├── push_swap.h
│ ├── stack.h
│ └── utils.h
└── src/
├── algorithm/
│ ├── algorithm_utils.c
│ ├── big_sorts.c
│ ├── indexing.c
│ └── small_sorts.c
├── operations/
│ ├── push.c
│ ├── reverse.c
│ ├── rotate.c
│ └── swap.c
├── parsing/
│ ├── error_checker.c
│ ├── ft_atol.c
│ └── parse.c
├── stack/
│ ├── stack_init.c
│ └── stack_utils.c
└── utils/
├── free_split.c
├── ft_split.c
└── ft_strlcpy.c
