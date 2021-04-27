/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_sort5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:37:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/27 10:59:31 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_deque_sort5(t_dq *dq, int type)
{
	if (type == 1)
	{
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
	}
	else if (type == 2)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 3)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 4)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 5)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 6)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 7)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 8)
	{
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
	}
	else if (type == 9)
	{
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
	}
	else if (type == 10)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 11)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 12)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
	}
	else if (type == 13)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 14)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 15)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 16)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 17)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 18)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
	}
	else if (type == 19)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 20)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 21)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 22)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 23)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 24)
		ft_op_run_dq_sa(dq);
	else if (type == 25)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 26)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 27)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
	}
	else if (type == 28)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
	}
	else if (type == 29)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 30)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
	}
	else if (type == 31)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
	}
	else if (type == 32)
	{
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
	}
	else if (type == 33)
		ft_op_run_dq_rra(dq);
	else if (type == 34)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
	}
	else if (type == 35)
	{
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
	}
	else if (type == 36)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 37)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
	}
	else if (type == 38)
	{
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
	}
	else if (type == 39)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
	}
	else if (type == 40)
	{
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
	}
	else if (type == 41)
	{
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 42)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
	}
	else if (type == 43)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
	}
	else if (type == 44)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
	}
	else if (type == 45)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
	}
	else if (type == 46)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
	}
	else if (type == 47)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_ra(dq);
	}
	if (type == 48)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	if (type == 49)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
	}
	if (type == 50)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
	}
	if (type == 51)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
	}
	if (type == 52)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_rra(dq);
	}
	if (type == 53)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_pa(dq);
	}
	if (type == 54)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
	}
	if (type == 55)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ra(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
	}
	if (type == 56)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_ra(dq);
	}
	if (type == 57)
	{
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
	}
	if (type == 58)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_rra(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_sa(dq);
		ft_op_run_dq_rra(dq);
	}
	if (type == 59)
	{
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_pb(dq);
		ft_op_run_dq_ss(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_pa(dq);
		ft_op_run_dq_rra(dq);
	}
}
