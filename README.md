*This project has been created as part of the 42 curriculum by maamaral.*

# Push_Swap

## Description

Push_Swap is a project from the 42 curriculum focused on algorithmic thinking, data structures, and optimization.
The objective is to sort a stack of integers in ascending order using a restricted set of operations (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr) while minimizing the total number of moves.

This implementation uses a Turkish Sort–inspired chunk-based algorithm for medium and large stacks, combined with dedicated optimized routines for small input sizes.

Before sorting, all values are indexed according to their relative order.
For large stacks, the algorithm:

Divides the indexed values into dynamic chunks based on stack size.

Pushes elements from stack A to stack B chunk by chunk, applying rotations to keep lower indices deeper in stack B.

Pushes elements back to stack A by always selecting and positioning the maximum indexed value in stack B, ensuring efficient reconstruction of the sorted stack.

For small stacks (2 to 5 elements), specialized sorting functions are used to guarantee the minimum number of operations.

This approach provides good performance and scalability while respecting the constraints imposed by the Push_Swap project.

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
```bash
(https://www.geeksforgeeks.org/dsa/stack-data-structure/)

https://www.youtube.com/watch?v=wRvipSG4Mmk&t=599s&pp=ygUScHVzaCBzd2FwIHR1dG9yaWFs

AI was used to help research different sorting methods and understand their differences, as well as to clarify questions about project structure.
```

# Project Structure
```bash
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
```
