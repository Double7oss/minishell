/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:38:24 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/03/04 19:01:48 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

typedef struct s_token {
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
	char *value;
	struct s_token *next;
} t_token;

typedef struct s_redirection {
	int type;
	char *filename;
	struct s_redirection *next;
} t_redirection;

#endif