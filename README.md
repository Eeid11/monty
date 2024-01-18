# 0x19. C - Stacks, Queues - LIFO, FIFO

**About:** In this project, we created a simple interpreter for Monty ByteCodes. The interpreter reads a bytecode file and executes the bytecode commands.

### The Monty language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it.


### Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument


## Compilation & Output

* These codes were compiled using: ```gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty```

* Any output must be printed on ```stdout```

* Any error message must be printed on ```stderr```


## Examples

```

julien@ubuntu:~/monty$ cat -e bytecodes/000.m

push 0$

push 1$

push 2$

  push 3$
                   pall    $
push 4$

    push 5    $
      push    6        $
pall$

julien@ubuntu:~/monty$

```


## Tasks:

### Mandatory:-

0. push, pall

   Implement the push and pall opcodes.

1. pint

   Implement the pint opcode.

2. pop

   Implement the pop opcode.

3. swap

   Implement the swap opcode.

4. add

   Implement the add opcode.Implement the add opcode.

5. nop

   Implement the nop opcode.


### Advanced:-

6. sub

   Implement the sub opcode.

7. div

   Implement the div opcode.

8. mul

   Implement the mul opcode.

9. mod

   Implement the mod opcode.

10. comments

    When the first non-space character of a line is #, treat this line as a comment (don’t do anything).

11. pchar

    Implement the pchar opcode that prints the char at the top of the stack, followed by a new line.

12. pstr

    Implement the pstr opcode that prints the string starting at the top of the stack, followed by a new line.

13. rotl

    Implement the rotl opcode that rotates the stack to the top.

14. rotr

    Implement the rotr opcode that rotates the stack to the bottom.

15. stack, queue

    Implement the stack and queue opcodes.

    The opcode stack sets the format of the data to a stack (LIFO). This is the default behavior of the program.

    The opcode queue sets the format of the data to a queue (FIFO).

16. Brainf*ck

    Write a Brainf*ck script that prints School, followed by a new line.

17. Add two digits

    Add two digits given by the user.

18. Multiplication

    Multiply two digits given by the user.

19. Multiplication level up

    Multiply two digits given by the user.


## Author:

[Mehari Hagos](https://github.com/Hagos2022/monty/)
