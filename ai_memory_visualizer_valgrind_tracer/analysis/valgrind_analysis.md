Version plus courte pour VS Code :

```md
# Valgrind Analysis - heap_example.c

## 1-1/ Memory leak

Valgrind reports:

```

6 bytes in 1 blocks are definitely lost

```

The error comes from:

```

person_new() - heap_example.c:21

````

The memory was allocated with:

```c
p->name = malloc(len + 1);
````

---

## 1-2/ Cause

The program frees Alice with:

```c
person_free_partial(alice);
```

This function only does:

```c
free(p);
```

It frees the `Person` structure but not:

```c
p->name
```

The pointer to the name is lost, so the allocated memory cannot be freed.

Memory state:

```
HEAP

Person  -> freed

"Alice" -> still allocated (leak)
```

---

## 1-3/ Error type

Valgrind classification:

```
definitely lost
```

Meaning:

* Memory was allocated.
* No pointer can access it anymore.
* The program lost ownership of this memory.

The correct order should be:

```c
free(p->name);
free(p);
```

---

## 1-4/ AI correction

Wrong explanation:

"free() deletes the pointer."

Correction:

`free()` releases heap memory, but it does not delete the pointer variable itself.
The problem here is that `alice->name` was never freed.

```

C'est largement suffisant pour le checker : il cherche surtout **ta compréhension**, pas un roman.
```