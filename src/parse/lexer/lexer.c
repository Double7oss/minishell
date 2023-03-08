/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:21:09 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/03/04 18:12:34 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//funcrion to handle redirection and here_doc tokens
void lexer_semi_pipe(t_token **token, t_des *des, char *line)
{
    if (line[des.l] == ';')
        add_token(token, TOKEN_SEMI,";");
    if (line[des.l] == '|')
        add_token(token, TOKEN_PIPE,"|");
    des->s = des->l + 1;
}

void lexer_redirection(t_token **token,t_des *des, char *line)
{
    if (line[des->l] == '<')
    {
        if (line[des->l + 1] == '<')
            add_token(token, TOKEN_HERE_DOC, "<<");
        else
            add_token(token, TOKEN_RED_INFIE, "<<");
    }
    else 
    {
        add_token(token, TOKEN_RED_OUTFILE, ">");
    }
    des->s = des->l + 1;
}

//to handle new line
void lexer_new_line(t_token **token, t_des *des, char *line)
{
    add_token(token, TOKEN_NEW_LINE, line + des + l);
}


// void redirection_token(t_token **token, char *string, t_des *des)
// {
//     if (string[des->l] == '<')
//     {
//         if (string[des->l+1] == '<')
//         {
//             ft_add_back_token(initialize_tokens(ft_strndup(string, des->l), TOKEN_HERE_DOC), token);
//             des->l++;
//         }
//         else 
//         {
//             ft_add_back_token(initialize_tokens(ft_strndup(string, des->l), TOKEN_RED_INFILE), token);
//         }
//     }
//     else
//     {
//          ft_add_back_token(initialize_tokens(ft_strndup(string, des->l), TOKEN_RED_OUTFILE), token);
//     }
//     des->s = des->l + 1;
// }

// void semi_token(t_token **token, char *string, t_des *des)
// {
//     if (string[des->l == ';'])
//          ft_add_back_token(initialize_tokens(ft_strndup(string, des->), TOKEN_SEMI), token);
//     else
//          ft_add_back_token(initialize_tokens(ft_strndup(string, des->l), TOKEN_PIPE), token);
//     des->s = des->l + 1;
// }

// void double_quote_token(t_token **token, char *string, t_loc *des)
// {
//     if ()
// }

// void last_word_token(t_token **token, char *string, t_loc *des)
// {
//     if (des->l == des->s)
//         ft_add_back_token(initialize_tokens(ft_strndup(string, des->l), TOKEN_STR), token);
// }