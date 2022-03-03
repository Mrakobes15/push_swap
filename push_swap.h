#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_stack
{
	long				num;
	long				score;
	struct s_stack	*next;
}					t_stack;

void	doubles_checker(t_stack **stack);
int		check_int_overflow(char *str);
int		check_argv(char *str);
void	ft_swap(int *a, int *b);
int		partition(int *stack1, int start, int end);
void	quick_sort(int *stack1, int start, int end);
t_stack *create_node();
void	stack_clear(t_stack **root);
int		stack_len(t_stack *root);
t_stack	*copy_args_in_stack(int argc, char **argv);
void	ft_sort_3_element(t_stack *root);
#endif