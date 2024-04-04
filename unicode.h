// Copyright (C) by valixxx1 2024

#ifndef UNICODE_H
#define UNICODE_H

#ifdef __cplusplus
extern "C" {
#endif



/* Unicode char */
typedef struct {
  char ch[4];
} uchar;

/* Copy unicode char SRC to DEST */
void uchcpy(uchar *dst, uchar *src);




#ifdef __cplusplus
}
#endif

#endif
