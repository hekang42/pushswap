/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekang <hekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:20:46 by hekang            #+#    #+#             */
/*   Updated: 2021/06/21 14:14:46 by hekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = create_stack(argc, argv);
	stack_b = NULL;
	stack_sort(stack_a, stack_b);

	// while(stack_a)
	// {
	// 	printf("%d\n", stack_a->content);
	// 	stack_a = stack_a->next;
	// }
	// clear_stack(&stack_a);
	// clear_stack(&stack_b);
	return (0);
}