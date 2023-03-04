/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokens.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:18:38 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/03/04 18:15:40 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKENS_H
#define TOKENS_H

typedef struct TOKEN_STRUCT {
    enum {
        TOKEN_STR,
        TOKEN_EQUALS,
        TOKEN_LESS,
        TOKEN_GREATER,
        TOKEN_GREATGREATER,
        TOKEN_PIPE,
        TOKEN_SEMI;
        TOKEN_GP,
        TOKEN_DP,
        TOKEN_&,
        TOKEN_ENV,
        TOKEN_HERE_DOC,
    } type;
} t_tokens;

#endif