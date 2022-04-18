/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sydauria <sydauria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:53:46 by sydauria          #+#    #+#             */
/*   Updated: 2022/04/18 16:57:28 by sydauria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_longest_increasing_subsequence
{

	int			min;
	int			value;
	int			size;
	t_sub		*first_of_sub;
	t_sub		*root;
	t_sub		*next;
} t_sub;

typedef struct s_stacks
{
	t_stacks	*prev;
	int			value;
	int			it_is_lis;
	t_stacks	next;
} t_stacks;

typedef struct s_storage
{
	t_sub		*sequence;
	int 		lis_size;
	t_storage 	*next;	
}t_storage;

# endif