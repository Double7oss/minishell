/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 19:11:40 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/03/03 19:11:40 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

int is_whitespace(char c )
{
    if ( c == ' ' || (c > 8 && c < 14))
        return (1);
    return (0);
}

t_tokens *lexer_advenced_with_token(t_lexer *lexer, t_token *token)
{
    lexer_advenced(lexer);
    return (token);
}

char *lexer_get_current_char_as_string(t_lexer *lexer)
{
    
}