// Copyright (C) by valixxx1 2024

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

#ifdef __cplusplus
}
#endif

#endif
