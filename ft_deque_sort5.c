/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_sort5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 09:37:22 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 03:15:37 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 0 1 2 3 4 -> 0
** 0 1 2 4 3 -> 1
** 0 1 3 2 4 -> 2
** 0 1 3 4 2 -> 3
** 0 1 4 2 3 -> 4
** 0 1 4 3 2 -> 5
** 0 2 1 3 4 -> 6
** 0 2 1 4 3 -> 7
** 0 2 3 1 4 -> 8
** 0 2 3 4 1 -> 9
** 0 2 4 1 3 -> 10
** 0 2 4 3 1 -> 11
** 0 3 1 2 4 -> 12
** 0 3 1 4 2 -> 13
** 0 3 2 1 4 -> 14
** 0 3 2 4 1 -> 15
** 0 3 4 1 2 -> 16
** 0 3 4 2 1 -> 17
** 0 4 1 2 3 -> 18
** 0 4 1 3 2 -> 19
** 0 4 2 1 3 -> 20
** 0 4 2 3 1 -> 21
** 0 4 3 1 2 -> 22
** 0 4 3 2 1 -> 23
** 1 0 2 3 4 -> 24
** 1 0 2 4 3 -> 25
** 1 0 3 2 4 -> 26
** 1 0 3 4 2 -> 27
** 1 0 4 2 3 -> 28
** 1 0 4 3 2 -> 29
** 1 2 0 3 4 -> 30
** 1 2 0 4 3 -> 31
** 1 2 3 0 4 -> 32
** 1 2 3 4 0 -> 33
** 1 2 4 0 3 -> 34
** 1 2 4 3 0 -> 35
** 1 3 0 2 4 -> 36
** 1 3 0 4 2 -> 37
** 1 3 2 0 4 -> 38
** 1 3 2 4 0 -> 39
** 1 3 4 0 2 -> 40
** 1 3 4 2 0 -> 41
** 1 4 0 2 3 -> 42
** 1 4 0 3 2 -> 43
** 1 4 2 0 3 -> 44
** 1 4 2 3 0 -> 45
** 1 4 3 0 2 -> 46
** 1 4 3 2 0 -> 47
** 2 0 1 3 4 -> 48
** 2 0 1 4 3 -> 49
** 2 0 3 1 4 -> 50
** 2 0 3 4 1 -> 51
** 2 0 4 1 3 -> 52
** 2 0 4 3 1 -> 53
** 2 1 0 3 4 -> 54
** 2 1 0 4 3 -> 55
** 2 1 3 0 4 -> 56
** 2 1 3 4 0 -> 57
** 2 1 4 0 3 -> 58
** 2 1 4 3 0 -> 59
** 2 3 0 1 4 -> 60
** 2 3 0 4 1 -> 61
** 2 3 1 0 4 -> 62
** 2 3 1 4 0 -> 63
** 2 3 4 0 1 -> 64
** 2 3 4 1 0 -> 65
** 2 4 0 1 3 -> 66
** 2 4 0 3 1 -> 67
** 2 4 1 0 3 -> 68
** 2 4 1 3 0 -> 69
** 2 4 3 0 1 -> 70
** 2 4 3 1 0 -> 71
** 3 0 1 2 4 -> 72
** 3 0 1 4 2 -> 73
** 3 0 2 1 4 -> 74
** 3 0 2 4 1 -> 75
** 3 0 4 1 2 -> 76
** 3 0 4 2 1 -> 77
** 3 1 0 2 4 -> 78
** 3 1 0 4 2 -> 79
** 3 1 2 0 4 -> 80
** 3 1 2 4 0 -> 81
** 3 1 4 0 2 -> 82
** 3 1 4 2 0 -> 83
** 3 2 0 1 4 -> 84
** 3 2 0 4 1 -> 85
** 3 2 1 0 4 -> 86
** 3 2 1 4 0 -> 87
** 3 2 4 0 1 -> 88
** 3 2 4 1 0 -> 89
** 3 4 0 1 2 -> 90
** 3 4 0 2 1 -> 91
** 3 4 1 0 2 -> 92
** 3 4 1 2 0 -> 93
** 3 4 2 0 1 -> 94
** 3 4 2 1 0 -> 95
** 4 0 1 2 3 -> 96
** 4 0 1 3 2 -> 97
** 4 0 2 1 3 -> 98
** 4 0 2 3 1 -> 99
** 4 0 3 1 2 -> 100
** 4 0 3 2 1 -> 101
** 4 1 0 2 3 -> 102
** 4 1 0 3 2 -> 103
** 4 1 2 0 3 -> 104
** 4 1 2 3 0 -> 105
** 4 1 3 0 2 -> 106
** 4 1 3 2 0 -> 107
** 4 2 0 1 3 -> 108
** 4 2 0 3 1 -> 109
** 4 2 1 0 3 -> 110
** 4 2 1 3 0 -> 111
** 4 2 3 0 1 -> 112
** 4 2 3 1 0 -> 113
** 4 3 0 1 2 -> 114
** 4 3 0 2 1 -> 115
** 4 3 1 0 2 -> 116
** 4 3 1 2 0 -> 117
** 4 3 2 0 1 -> 118
** 4 3 2 1 0 -> 119
*/

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
