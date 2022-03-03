#include "push_swap.h"

t_stack	*create_node()
{
    t_stack *root;

    root = (t_stack*)malloc(sizeof(t_stack));
    root->num = 0;
    root->score = 1;
    root->next = NULL;
    return (root);
}

void	stack_clear(t_stack **root)
{
    t_stack	*temp;
	t_stack	*deleted;

	temp = *root;
	while (temp->next)
	{
		deleted = temp;
		temp = temp->next;
		free(deleted);
	}
	free(temp);
	*root = NULL;
}

int		stack_len(t_stack *root)
{
	t_stack *tmp;
	int		count;

	count = 0;
	if (!root)
		return (0);
	tmp = root;
	while (tmp->next)
	{
		count++;
		tmp = tmp->next;
	}
	count++;
	return (count);
}

t_stack	*copy_args_in_stack(int argc, char **argv)
{
	int		i;
	t_stack	*first;
	t_stack	*tmp;

	i = 1;
	first = create_node();
	tmp = first;
	while (i < argc)
	{
		if (check_argv(argv[i]))
		{
			stack_clear(&first);
			return (NULL);
		}
		tmp->num = ft_atoi(argv[i]);
		if (i < argc - 1)
		{
			tmp->next = create_node();
			tmp = tmp->next;
			tmp->score = 1;
		}
		i++;
	}
	doubles_checker(&first);
	return (first);
}