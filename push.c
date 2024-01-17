nclude <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * Struct definition for a stack node
 *   */
typedef struct stack_s {
	    int data;
	        struct stack_s *prev;
} stack_t;

/**
 *  * Struct definition for an instruction
 *   */
typedef struct instruction_s {
	    char *opcode;
	        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 *  * Function to push an element onto the stack
 *   */
void push(stack_t **stack, int value, unsigned int line_number) {
	    stack_t *new_node = malloc(sizeof(stack_t));
	        if (new_node == NULL) {
			        fprintf(stderr, "Error: malloc failed\n");
				        exit(EXIT_FAILURE);
					    }

		    new_node->data = value;
		        new_node->prev = *stack;
			    *stack = new_node;
}

/**
 *  * Function to print all values on the stack
 *   */
void pall(stack_t **stack, unsigned int line_number) {
	    stack_t *current = *stack;

	        while (current != NULL) {
			        printf("%d\n", current->data);
				        current = current->prev;
					    }
}

/**
 *  * Main interpreter function
 *   */
void interpret(char *file_path) {
	    FILE *file = fopen(file_path, "r");
	        if (file == NULL) {
			        fprintf(stderr, "Error: Can't open file %s\n", file_path);
				        exit(EXIT_FAILURE);
					    }

		    char line[256];
		        stack_t *stack = NULL;
			    unsigned int line_number = 0;

			        while (fgets(line, sizeof(line), file) != NULL) {
					        line_number++;

						        char opcode[256];
							        int value;

								        if (sscanf(line, "%s %d", opcode, &value) == 2 && strcmp(opcode, "push") == 0) {
										            push(&stack, value, line_number);
											            } else if (strcmp(opcode, "pall") == 0) {
													                pall(&stack, line_number);
															        } else {
																	            fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
																		                exit(EXIT_FAILURE);
																				        }
									    }

				    fclose(file);
}

int main(int argc, char *argv[]) {
	    if (argc != 2) {
		            fprintf(stderr, "USAGE: %s file\n", argv[0]);
			            exit(EXIT_FAILURE);
				        }

	        interpret(argv[1]);

		    return 0;
}

