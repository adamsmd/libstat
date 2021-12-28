#ifndef FILEINFO_TYPES_H
#define FILEINFO_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/* TODO: automake header conditionals */

#include <stddef.h>
#include <stdint.h>

typedef struct fileinfo_struct fileinfo;

#define FIELD_NAME_SIZE 64

typedef struct {
  ptrdiff_t const offset;
  size_t const size;
  char const name[FIELD_NAME_SIZE]; /* not `char *` so fields ends up in .rodata */
} fileinfo_field;

/* TODO: true, false, undef (negative)? */
typedef struct {
  ptrdiff_t const true_offset;
  ptrdiff_t const present_offset;
  int_fast8_t const true_mask;
  int_fast8_t const present_mask;
} fileinfo_flag;

#ifdef __cplusplus
}
#endif

#endif /* FILEINFO_TYPES_H */
