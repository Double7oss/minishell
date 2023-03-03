/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 16:41:30 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/03/03 16:41:30 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_H
#define LEXER_H

#include "tokens.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ft_utils.h"

typedef struct s_lexer {
    unsigned int i;
    char *content;
    char c;
    struct s_lexer *next;
} t_lexer;

//in lexer.c file 
t_lexer init_lexer(t_lexer *lex);
void lexer_advenced(t_lexer *lexer);
void lexer_skip_whitespace(t_lexer *lexer);
t_tokens *lexer_get_next_token(t_lexer lexer);
t_tokens *lexer_collect_string(t_lexer lexer);

//utils_lexer.c
int is_whitespace(char c );
t_tokens *lexer_advenced_with_token(t_lexer *lexer, t_token *token);
char *lexer_get_current_char_as_string(t_lexer *lexer);

#endif