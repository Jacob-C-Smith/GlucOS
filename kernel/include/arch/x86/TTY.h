#ifndef X86_TTY_H
#define X86_TTY_H

#include <typedef.h>
#include <string.h>

#include <arch/x86/VGA.h>

void TTY_initialize  (void);
void TTY_setcolor    (u8 color);
void TTY_putentryat  (char c, u8 color, size_t x, size_t y);
void TTY_putchar     (char c);
void TTY_write       (size_t size, const char* data);
void TTYF_write      (size_t size, void* data);
void TTYE_write      (size_t size, void* data);
void TTY_writestring (const char* data);
 
#endif