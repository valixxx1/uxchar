// Copyright (C) 2024 by valixxx1

#ifndef UNICODE_H
#define UNICODE_H

#ifdef __cplusplus
extern "C" {
#endif

/* Len of strings */
typedef unsigned long long len_t;

/* UTF-8 string */
struct ustring {
  char *bytes; /* UTF-8 bytes */
  len_t len;   /* Length in bytes */
};

/* Copy CSTR to USTR */
void ustrfill(struct ustring *ustr, char *cstr);

/* Free memory of USTR */
void ustrfree(struct ustring *ustr);

/* Len of USTR in symbols */
len_t ustrlen(struct ustring *ustr);

/* Len of USTR in bytes */
len_t ustrlenbytes(struct ustring *ustr);

/* Bytes to ustring */
struct ustring bytestoustr(char *bytes);

/* Ustring to bytes */
char* ustrtobytes(struct ustring *ustr);

/* Create a new ustring */
struct ustring unew(char *bytes);

#ifdef __cplusplus
}
#endif

#endif
