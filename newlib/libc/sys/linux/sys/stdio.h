#ifndef _NEWLIB_STDIO_H
#define _NEWLIB_STDIO_H

/* Internal locking macros, used to protect stdio functions.  In the
   linux case, expand to flockfile, and funlockfile, both defined in
   LinuxThreads. */
#if !defined(__SINGLE_THREAD__)
#  if !defined(_flockfile)
#    define _flockfile(fp) /* FIXME: Uncomment when LinuxThreads is in: flockfile(fp) */
#  endif
#  if !defined(_funlockfile)
#    define _funlockfile(fp) /* FIXME: Uncomment when LinuxThreads is in: funlockfile(fp) */
#  endif
#endif /* __SINGLE_THREAD__ */

#endif /* _NEWLIB_STDIO_H */
