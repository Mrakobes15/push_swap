#include "push_swap.h"

void	ft_sort_3_element(t_stack *root)
{
	int max;

	max = ft_max(root);
	if (stack_len(root) == 1)
		return ;
	else if (stack_len(root) == 2)
	{
		if (root->num > root->next->num)
			ft_sa(root, 1);
		return ;
	}
	else if (stack_len(root) == 3)
	{
		if (root->num == max)
			ft_ra(&root, 1);
		if (root->next->num== max)
			ft_rra(&root, 1);
		if (root->num > root->next->num)
			ft_sa(root, 1);
	}
}

int		ft_max(t_stack *root)
{
	int max;

	max = root->num;
	while (root)
	{
		if (root->num > max)
			max = root->num;
		root = root->next;
	}
	return (max);
}