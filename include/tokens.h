/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokens.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:18:38 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/03/03 18:18:38 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKENS_H
#define TOKENS_H

typedef struct TOKEN_STRUCT {
    enum {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_LESS,
        TOKEN_GREATER,
        TOKEN_GREATGREATER,
        TOKEN_PIPE,
        TOKEN_SEMI;
    } type;
    char *value;
} t_tokens;

void init_tokens(char *value, int type);

#endif