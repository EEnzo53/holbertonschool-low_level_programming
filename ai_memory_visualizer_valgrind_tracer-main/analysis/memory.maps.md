1-1/**stack_example.c** :
This program use only stack, there is no dynamic memory and no heap use, all functions created is in the stack (no use of malloc(), calloc(), realloc() or free()).

1-2/ Start of stack		 STACK :							HEAP: empty
When main() start   -->	 +-----------------------------+
|									 main() |
						 +-----------------------------+ and nothing else.

1-3/ call of walk_stack
Main call walk_stack(0,3) --> +-----------------------------+
							   walk_stack
								   depth = 0
								   max_depth = 3
								   marker = 0
							  +-----------------------------+
|										 main() |
							  +-----------------------------+ a new stack frame appear ans marker existe only for this call.

1-4/ Recursion
When walk_stack() call `walk_stack(depth + 1, max_depth);`, the ancient call does not disappear because he wait for the new call to end before he continue, so every call create his own stack frame, we got `walk_stack(3) walk_stack(2) walk_stack(1) walk_stack(0) main` Every version got his own depth and marker.

1-5/ Call of dump_frame()
When `dump_frame("enter", depth);`, a new functions add in top of the stack --> +-----------------------------+ inside `dump_frame` ---> int local_int;
																						   dump_frame									 char local_buf[16];
																				+-----------------------------+							 int *p_local;
							   														       walk_stack
							  													+-----------------------------+
|										 													main() |
							  													+-----------------------------+

1-6/ pointers p_local
int *p_local = &local_int;  ---> p_local is a local variable -> stack, he has an adress ---> local_int

1-7/ Lifetime of variable a local variable exist when a function start and until the return of the function Exemple: when dump_frame() end, the stack frame disapear