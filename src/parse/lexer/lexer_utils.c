/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:11:40 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/03/04 18:12:39 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//init_tokens
t_token *initialize_tokens(char *value, int type)
{
    t_token *token;

    if (!value)
        return (NULL);
    token = (t_token *)malloc(sizeof(t_token));
    if (!token)
        return (NULL);
    token->type = type;
    token->value = value;
    token.next = NULL;
    return (token);
}

void add_to_token_list(t_token **token, int type,char *value)
{
    ft_add_back_token(token, initialize_tokens(ft_strdup(value), type));
}

void ft_add_back_token(t_token *new_token, t_token **list_token)
{
    t_token *tmp;

    tmp = *liest_token;
    if (!tmp)
    {
        *list_token = new_token
        return (NULL);
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new_token;
}
