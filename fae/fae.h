/*
** EPITECH PROJECT, 2019
** fae.h
** File description:
** include libfae
*/

#ifndef FAE_H_
#define FAE_H_

/*  DISPLAY  */

void fae_putchar(char);

int fae_putstr(char const *);

/*  STRING  */

int fae_strlen(char const *);

void fae_revstr(char *);

int fae_strcmp(char const *, char const *);

int fae_strncmp(char const *, char const *, int);

int fae_str_is_up(char const *, char);

int fae_str_is_low(char const *, char);

int fae_str_is_num(char const *, char);

int fae_str_is_alpha(char const *, char);

int fae_str_is_alphanum(char const *, char);

void fae_str_up(char *);

void my_str_low(char *);

/*  CHAR  */

int fae_char_is_up(char);

int fae_char_is_low(char);

int fae_char_is_num(char);

int fae_char_is_alpha(char);

int fae_str_is_alphanum(char);

/*  MATHS  */

int fae_power(int, int);

int fae_square_root(int);

/* LOGIC  */

void fae_swap(void **, void **);

void fae_iswap(int *, int *);

void fae_cswap(char *, char *);

void fae_fswap(float *, float *);

#endif /*FAE_H*/
