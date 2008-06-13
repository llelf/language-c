void foo() __attribute__((noreturn, noreturn))
           __attribute__((noreturn));

/* From the gnu examples */
__attribute__((noreturn)) void 
  d0 (void),
  __attribute__((format(printf, 1, 2))) d1 (const char *, ...),
  d2 (void) ;

/* gcc.dg/attr4 */
extern __attribute__((format(printf, 1, 2))) void tformatprintf0 (const char *, ...);
extern void __attribute__((format(printf, 1, 2))) tformatprintf1 (const char *, ...);
extern void foo (void), __attribute__((format(printf, 1, 2))) tformatprintf2 (const char *, ...);
extern __attribute__((noreturn)) void bar (void), __attribute__((format(printf, 1, 2))) tformatprintf3 (const char *, ...);

/* gcc.dg/fundef-attr */
int (__attribute__((const)) x) (a, b)
     int a;
     int b;
{
  return a + b;
}

/* gcc.dg/mult-attr */
extern __attribute__((__format__(__printf__, 1, 0))) void
     my_vprintf_scanf (const char *, va_list, const char *, ...)
     __attribute__((__format__(__scanf__, 3, 4)));

extern void (__attribute__((__format__(__printf__, 1, 0))) my_vprintf_scanf2)
     (const char *, va_list, const char *, ...)
     __attribute__((__format__(__scanf__, 3, 4)));

extern __attribute__((__format__(__scanf__, 3, 4))) void
     (__attribute__((__format__(__printf__, 1, 0))) my_vprintf_scanf3)
     (const char *, va_list, const char *, ...);
