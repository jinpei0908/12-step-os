#ifndef _LIB_H_INCLUDED_
#define _LIB_H_INCLUDED_

/* メモリを特定のバイトデータで埋める */
void *memset(void *b, int c, long len);

/* メモリのコピー */
void *memcpy(void *dst, const void *src, long len);

/* メモリの比較 */
int memcmp(const void *b1, const void *b2, long len);

/* 文字列の長さ */
int strlen(const char *s);

/* 文字列のコピー */
char *strcpy(char *dst, const char *src);

/* 文字列の比較 */
int strcmp(const char *s1, const char *s2);

/* 長さ指定での文字列の比較 */
int strncmp(const char *s1, const char *s2, int len);

/* 1文字送信 */
int putc(unsigned char c);

/* 文字列送信 */
int puts(unsigned char *str);

/* 数値の16進数表示 */
int putxval(unsigned long value, int column);

#endif
