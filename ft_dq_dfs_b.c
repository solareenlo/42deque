/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dq_dfs_b2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:13:57 by tayamamo          #+#    #+#             */
/*   Updated: 2021/04/28 02:50:02 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	_run_op(t_dq *dq, int n, t_deque *op)
{
	t_dq	*tmp_dq;
	t_deque	*tmp_op;
	int		ope;
	int		ret;

	tmp_dq = ft_dq_init(dq->b->size);
	ft_deque_copy(tmp_dq->b, dq->b);
	tmp_op = ft_deque_init(OPSIZE);
	ft_deque_copy(tmp_op, op);
	while (!ft_deque_is_empty(tmp_op))
	{
		ope = ft_deque_get_front(tmp_op);
		ft_deque_pop_front(tmp_op);
		ft_op_run_dq(tmp_dq, ope);
	}
	ret = ft_deque_is_sorted_front(tmp_dq->b, n, tmp_dq->cmp_b);
	if (ft_deque_get_size(tmp_dq->b, tmp_dq->b->front, tmp_dq->b->back) != n)
		ret = 0;
	ft_deque_free(tmp_op);
	ft_dq_free(tmp_dq);
	return (ret);
}

static int	_get_size(t_dq *dq, t_deque *op, char type)
{
	int		res;
	int		ope;
	t_dq	*tmp_dq;
	t_deque	*tmp_op;

	tmp_dq = ft_dq_init(dq->b->size);
	ft_deque_copy(tmp_dq->b, dq->b);
	tmp_op = ft_deque_init(OPSIZE);
	ft_deque_copy(tmp_op, op);
	while (!ft_deque_is_empty(tmp_op))
	{
		ope = ft_deque_get_front(tmp_op);
		ft_deque_pop_front(tmp_op);
		ft_op_run_dq(tmp_dq, ope);
	}
	if (type == A)
		res = ft_deque_get_size(tmp_dq->a, tmp_dq->a->front, tmp_dq->a->back);
	else
		res = ft_deque_get_size(tmp_dq->b, tmp_dq->b->front, tmp_dq->b->back);
	ft_deque_free(tmp_op);
	ft_dq_free(tmp_dq);
	return (res);
}

static void	_do_dfs(t_dq *dq, int n, t_deque *op[], int ope)
{
	ft_deque_push_back(op[0], ope);
	ft_dq_dfs_b(dq, n, op);
	ft_deque_pop_back(op[0]);
}

static void	_do_dfs_sa_rra_ra_sb_rrb_rb(t_dq *dq, int n, t_deque *op[])
{
	if (_get_size(dq, op[0], A) > 0)
	{
		_do_dfs(dq, n, op, PB);
		if (_get_size(dq, op[0], A) > 1)
		{
			if (ft_deque_get_back(op[0]) != SA)
				_do_dfs(dq, n, op, SA);
			if (ft_deque_get_back(op[0]) != RRA)
				_do_dfs(dq, n, op, RA);
			if (ft_deque_get_back(op[0]) != RA)
				_do_dfs(dq, n, op, RRA);
		}
	}
	if (_get_size(dq, op[0], B) > 0)
		_do_dfs(dq, n, op, PA);
	if (_get_size(dq, op[0], B) > 1)
	{
		if (ft_deque_get_back(op[0]) != SB)
			_do_dfs(dq, n, op, SB);
		if (ft_deque_get_back(op[0]) != RRB)
			_do_dfs(dq, n, op, RB);
		if (ft_deque_get_back(op[0]) != RB)
			_do_dfs(dq, n, op, RRB);
	}
}

void	ft_dq_dfs_b(t_dq *dq, int n, t_deque *op[])
{
	int	mini;
	int	size;

	size = ft_deque_get_size(op[0], op[0]->front, op[0]->back);
	mini = ft_deque_get_size(op[1], op[1]->front, op[1]->back);
	if (size >= mini || size >= n * 2 - 1)
		return ;
	if (ft_deque_is_sorted_front(dq->b, n, dq->cmp_b))
		return ;
	if (_run_op(dq, n, op[0]) == 1)
	{
		if (mini > ft_deque_get_size(op[0], op[0]->front, op[0]->back))
			ft_deque_copy(op[1], op[0]);
		return ;
	}
	_do_dfs_sa_rra_ra_sb_rrb_rb(dq, n, op);
	if (_get_size(dq, op[0], A) > 1 && _get_size(dq, op[0], B) > 1)
	{
		if (ft_deque_get_back(op[0]) != SB)
			_do_dfs(dq, n, op, SS);
		if (ft_deque_get_back(op[0]) != RRR)
			_do_dfs(dq, n, op, RR);
		if (ft_deque_get_back(op[0]) != RR)
			_do_dfs(dq, n, op, RRR);
	}
}
