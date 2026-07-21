# heap_example.c

## 1-1/ Heap and dynamic memory

This program uses dynamic memory with `malloc()` and `free()`.

Memory types:

- Stack → local variables and pointers.
- Heap → memory allocated with malloc().

Heap memory must be manually released.

---

## 1-2/ Start of program

At the start of `main()`:    STACK

main()
├── alice = NULL
└── bob = NULL

HEAP

empty

No malloc() has been called yet.

---

## 1-3/ person_new()

When:

```c
alice = person_new("Alice", 30);
person_new() creates a stack frame.
Person *p = malloc(sizeof(Person));
STACK

p
|
v

HEAP

Person
 ├── name
 └── age
 Then: p->name = malloc(len + 1);
 creates another heap allocation for the string.
 1-4/ Return of person_new()

When the function returns:

local variable p disappears.
Heap memory stays allocated.

alice now points to the allocated Person.
1-5/ Free bob

Bob is correctly released:

free(bob->name);
free(bob);

First the string is freed, then the structure.

1-6/ Alice memory leak

The program calls:

person_free_partial(alice);

which only does:

free(p);

The structure is freed, but:

alice->name

is never freed.

Memory state:

HEAP

"Alice"  <-- still allocated

The pointer is lost, causing a memory leak.

1-7/ Valgrind expectation

Valgrind should report:

Memory leak
Lost heap allocation

Cause:

The allocated memory for alice->name was not released with free().

The problem is a loss of ownership, not an invalid pointer.