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

#include "./include/lexer.h"


//initialize the lexer
void init_lexer(char *content)
{
    t_lexer *lexer; 
    
    lexer = malloc(sizeof(struct s_lexer));
    lexer->content = content;
    lexer->i = 0;
    lexer->c = content[lexer->i];
    return (lexer);
}
//go to second token
// void lexer_advenced(t_lexer *lexer)
// {
//     if (lexer->c != '\0' && lexer->i < ft_strlen(lexer->content))
//     {
//         lexer->i += 1;
//         lexer->c = lexer->content[lexer->i];
//     }
// }
// //skip whitespace
// void lexer_skip_whitespace(t_lexer lexer)
// {
//     if (is_whitespace(lexer.c) == 1)
//         lexer_advenced(lexer);
// }

// t_tokens *lexer_get_next_token(t_lexer *lexer)
// {
//     while (lexer->c != '\0' && lexer->i < ft_strlen(lexer->content))
//     {
//         lexer_skip_whitespace(lexer);
//         switch (lexer->c)
//         {
//         case '=' : return (lexer_advenced_with_token(lexer, init_tokens(lexer_get_current_char_as_string(lexer),TOKEN_EQUALS)));break;
//         case '>' : return (lexer_advenced_with_token(lexer, init_tokens(lexer_get_current_char_as_string(lexer),TOKEN_GREATER)));break;
//         case '<' : return (lexer_advenced_with_token(lexer, init_tokens(lexer_get_current_char_as_string(lexer),TOKEN_LESS)));break;
//         case '>>' : return (lexer_advenced_with_token(lexer, init_tokens(lexer_get_current_char_as_string(lexer),TOKEN_GREATGREATER)));break;
//         case '|' : return (lexer_advenced_with_token(lexer, init_tokens(lexer_get_current_char_as_string(lexer),TOKEN_PIPE)));break;
//         case '=' : return (lexer_advenced_with_token(lexer, init_tokens(lexer_get_current_char_as_string(lexer),TOKEN_EQUALS)));break;
        
//         default:
//             break;
//         }
//     }
// }

// t_tokens *lexer_collect_string(t_lexer lexer)
// {
//     char *s;
//     char *value;
//     lexer_advenced(lexer);
    
//     s = lexer_get_current_char_as_string(lexer);
//     value = malloc(sizeof())
    
// }