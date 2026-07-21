## 1-1/ Invalid memory access

The program crashes because it tries to access memory through a NULL pointer.

The problem happens here:

```c
nums[0] = 42;
````

---

## 1-2/ Cause

In `main()`:

```c
int n = 0;
```

Then:

```c
nums = allocate_numbers(n);
```

Inside `allocate_numbers()`:

```c
if (n <= 0)
    return NULL;
```

The function returns `NULL` because the requested size is invalid.

Memory state:

```
STACK

nums
 |
 v
NULL


HEAP

empty
```

---

## 1-3/ Error type

The program writes to:

```c
nums[0]
```

but `nums` does not point to valid memory.

This causes:

```
Invalid write
NULL pointer dereference
Segmentation fault
```

---

## 1-4/ Memory explanation

No heap memory was allocated because `malloc()` was never called.

This is not a memory leak.

The problem is using a NULL pointer as if it was a valid array.

The program should check:

```c
if (nums != NULL)
```

before accessing `nums[0]`.

---

## 1-5/ AI correction

Wrong explanation:

"malloc failed."

Correction:

`malloc()` was never executed because `n <= 0` caused `allocate_numbers()` to return `NULL` before any allocation.
