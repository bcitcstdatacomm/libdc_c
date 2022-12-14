#ifndef LIBDC_C_DC_STDIO_H
#define LIBDC_C_DC_STDIO_H


/*
 * Copyright 2021-2022 D'Arcy Smith.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <dc_env/env.h>
#include <stdarg.h>
#include <stdio.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param stream
 */
void dc_clearerr(const struct dc_env *env, FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @return
 */
int dc_fclose(const struct dc_env *env, struct dc_error *err,
              FILE *stream);

/**
 *
 * @param env
 * @param stream
 * @return
 */
int dc_feof(const struct dc_env *env, FILE *stream);

/**
 *
 * @param env
 * @param stream
 * @return
 */
int dc_ferror(const struct dc_env *env, FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @return
 */
int dc_fflush(const struct dc_env *env, struct dc_error *err,
              FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @return
 */
int dc_fgetc(const struct dc_env *env, struct dc_error *err,
             FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @param pos
 * @return
 */
int dc_fgetpos(const struct dc_env *env, struct dc_error *err,
               FILE *restrict stream, fpos_t *restrict pos);

/**
 *
 * @param env
 * @param err
 * @param s
 * @param n
 * @param stream
 * @return
 */
char *dc_fgets(const struct dc_env *env, struct dc_error *err,
               char *restrict s, int n, FILE *restrict stream);

/**
 *
 * @param env
 * @param err
 * @param pathname
 * @param mode
 * @return
 */
FILE *dc_fopen(const struct dc_env *env, struct dc_error *err,
               const char *restrict pathname, const char *restrict mode);

/**
 *
 * @param env
 * @param err
 * @param c
 * @param stream
 * @return
 */
int dc_fputc(const struct dc_env *env, struct dc_error *err, int c,
             FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param s
 * @param stream
 * @return
 */
int dc_fputs(const struct dc_env *env, struct dc_error *err,
             const char *restrict s, FILE *restrict stream);

/**
 *
 * @param env
 * @param err
 * @param ptr
 * @param size
 * @param nitems
 * @param stream
 * @return
 */
size_t dc_fread(const struct dc_env *env, struct dc_error *err,
                void *restrict ptr, size_t size, size_t nitems,
                FILE *restrict stream);

/**
 *
 * @param env
 * @param err
 * @param pathname
 * @param mode
 * @param stream
 * @return
 */
FILE *dc_freopen(const struct dc_env *env, struct dc_error *err,
                 const char *restrict pathname, const char *restrict mode,
                 FILE *restrict stream);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @param offset
 * @param whence
 * @return
 */
int dc_fseek(const struct dc_env *env, struct dc_error *err, FILE *stream,
             long offset, int whence);


/**
 *
 * @param env
 * @param err
 * @param stream
 * @param pos
 * @return
 */
int dc_fsetpos(const struct dc_env *env, struct dc_error *err,
               FILE *stream, const fpos_t *pos);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @return
 */
long dc_ftell(const struct dc_env *env, struct dc_error *err,
              FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param ptr
 * @param size
 * @param nitems
 * @param stream
 * @return
 */
size_t dc_fwrite(const struct dc_env *env, struct dc_error *err,
                 const void *restrict ptr, size_t size, size_t nitems,
                 FILE *restrict stream);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @return
 */
int dc_getc(const struct dc_env *env, struct dc_error *err, FILE *stream);

/**
 *
 * @param env
 * @param err
 * @return
 */
int dc_getchar(const struct dc_env *env, struct dc_error *err);

/**
 *
 * @param env
 * @param s
 */
void dc_perror(const struct dc_env *env, const char *s);

/**
 *
 * @param env
 * @param err
 * @param c
 * @param stream
 * @return
 */
int dc_putc(const struct dc_env *env, struct dc_error *err, int c,
            FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param c
 * @return
 */
int dc_putchar(const struct dc_env *env, struct dc_error *err, int c);

/**
 *
 * @param env
 * @param err
 * @param s
 * @return
 */
int dc_puts(const struct dc_env *env, struct dc_error *err,
            const char *s);

/**
 *
 * @param env
 * @param err
 * @param path
 * @return
 */
int dc_remove(const struct dc_env *env, struct dc_error *err,
              const char *path);

/**
 *
 * @param env
 * @param err
 * @param old
 * @param new
 * @return
 */
int dc_rename(const struct dc_env *env, struct dc_error *err,
              const char *old, const char *new);

/**
 *
 * @param env
 * @param err
 * @param stream
 */
void dc_rewind(const struct dc_env *env, struct dc_error *err,
               FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @param buf
 */
void dc_setbuf(const struct dc_env *env, struct dc_error *err,
               FILE *restrict stream, char *restrict buf);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @param buf
 * @param type
 * @param size
 * @return
 */
int dc_setvbuf(const struct dc_env *env, struct dc_error *err,
               FILE *restrict stream, char *restrict buf, int type,
               size_t size);

/**
 *
 * @param env
 * @param err
 * @return
 */
FILE *dc_tmpfile(const struct dc_env *env, struct dc_error *err);

/**
 *
 * @param env
 * @param c
 * @param stream
 * @return
 */
int dc_ungetc(const struct dc_env *env, int c, FILE *stream);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @param format
 * @param ap
 * @return
 */
int dc_vfprintf(const struct dc_env *env, struct dc_error *err, FILE *restrict stream, const char *restrict format, va_list ap);

/**
 *
 * @param env
 * @param err
 * @param stream
 * @param format
 * @param ap
 * @return
 */
int dc_vfscanf(const struct dc_env *env, struct dc_error *err, FILE *restrict stream, const char *restrict format, va_list ap);

/**
 *
 * @param env
 * @param err
 * @param format
 * @param ap
 * @return
 */
int dc_vprintf(const struct dc_env *env, struct dc_error *err, const char *restrict format, va_list ap);

/**
 *
 * @param env
 * @param err
 * @param format
 * @param ap
 * @return
 */
int dc_vscanf(const struct dc_env *env, struct dc_error *err, const char *restrict format, va_list ap);

/**
 *
 * @param env
 * @param err
 * @param s
 * @param n
 * @param format
 * @param ap
 * @return
 */
int dc_vsnprintf(const struct dc_env *env, struct dc_error *err, char *restrict s, size_t n, const char *restrict format, va_list ap);

/**
 *
 * @param env
 * @param err
 * @param s
 * @param format
 * @param ap
 * @return
 */
int dc_vsscanf(const struct dc_env *env, struct dc_error *err, const char *restrict s, const char *restrict format, va_list ap);


#ifdef __cplusplus
}
#endif


// deprecated
// int dc_vsprintf(const struct dc_env *env, struct dc_error *err, char *restrict s, const char *restrict format, va_list ap);


#endif // LIBDC_C_DC_STDIO_H
