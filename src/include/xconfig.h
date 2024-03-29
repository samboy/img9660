/* Note: This cmake artifact added to Git by Sam Trenholme */

/* xconfig.h.in Prototype for xconfig.h, generated automatically by cmake in
 * cdrkit's build system.
 *
 * Most features are expected to be available on every modern unixoide systems,
 * others are probed.
 *
 * NOTE: Be carefull, there are some double checks for the 1 value hidden in
 * the source, just defining it may be not enough.
 * */

/* 
 * Copyright Eduard Bloch, 2006
 *
 * Using constants names and comments from xconfig.h.in by J. Schilling,
 * Copyright (c) 1998-2003
 *
 */

/*
 * Header Files
 */
#define PROTOTYPES 1	/* if Compiler supports ANSI C prototypes */
#define HAVE_STDARG_H
	/* to use stdarg.h, else use varargs.h NOTE: SaberC on a Sun has prototypes but no stdarg.h */

#define HAVE_STDLIB_H
	/* to use general utility defines (malloc(), size_t ...) and general C library prototypes */

#define HAVE_STRING_H
	/* to get NULL and ANSI C string function prototypes */
#define HAVE_STRINGS_H
	/* to get BSD string function prototypes */
#define STDC_HEADERS 1	/* if ANSI compliant stdlib.h, stdarg.h, string.h, float.h are present */
#define HAVE_UNISTD_H
	/* to get POSIX syscall prototypes XXX sys/file.h fcntl.h (unixstd/fctl)XXX*/
#define HAVE_GETOPT_H
	/* to get getopt() prototype from getopt.h instead of unistd.h */
#define HAVE_LIMITS_H
	/* to get POSIX numeric limits constants */

#define HAVE_FCNTL_H
	/* to access, O_XXX constants for open(), otherwise use sys/file.h */
#define HAVE_SYS_FILE_H
	/* to use O_XXX constants for open() and flock() defs */
#define HAVE_INTTYPES_H
	/* to use UNIX-98 inttypes.h */
#define HAVE_DIRENT_H
	/* to use POSIX dirent.h */

#define HAVE_ALLOCA_H
	/* if alloca.h exists */

#define HAVE_TERMIOS_H
	/* to use POSIX termios.h */
#define HAVE_TERMIO_H
	/* to use SVR4 termio.h */
#define HAVE_PWD_H
	/* if pwd.h exists */

#define HAVE_SYS_TIME_H
	/* may include sys/time.h for struct timeval */
#define TIME_WITH_SYS_TIME 1   /* may include both time.h and sys/time.h */

#define HAVE_UTIME 1		/* to use AT&T utime() and utimbuf */
#define HAVE_UTIMES 1		/* to use BSD utimes() and sys/time.h */

#define HAVE_UTIME_H
		/* to use utime.h for the utimbuf structure declaration, else declare struct utimbuf yourself */

#define HAVE_SYS_IOCTL_H
		/* if sys/ioctl.h is present */

#define HAVE_SYS_PARAM_H
		/* if sys/param.h is present */

/* to use wait.h for prototypes and union wait */
#define HAVE_WAIT_H
/* else use sys/wait.h */
/* #undef define */
#define HAVE_SYS_RESOURCE_H
	/* to use sys/resource.h for rlimit() and wait3() */

#define HAVE_SYS_UTSNAME_H
	/* to use uname() */

/* #undef HAVE_SYS_MTIO_H */
		/* to use mtio definitions from sys/mtio.h */

#define HAVE_SYS_MMAN_H
		/* to use definitions for mmap()/madvise()... from sys/mman.h */
#define MAJOR_IN_SYSMACROS 1	/* if we should include sys/sysmacros.h to get major()/minor()/makedev() */
/* #undef HAVE_SYS_DKIO_H */
/* #undef HAVE_SUN_DKIO_H */
#define HAVE_POLL_H
		/* if we may include poll.h to use poll() */
#define HAVE_SYS_POLL_H
		/* if we may include sys/poll.h to use poll() */


#define HAVE_NETDB_H
		/* if we have netdb.h for get*by*() and rcmd() */
#define HAVE_SYS_SOCKET_H
	/* if we have sys/socket.h for socket() */

/* #undef HAVE_LINUX_PG_H */
		/* if we may include linux/pg.h for PP ATAPI sypport */
#define HAVE_ERRNO_DEF 1		/* if we have errno definition in <errno.h> */

#define HAVE_ARPA_INET_H
		/* if we have arpa/inet.h (missing on BeOS) */
				/* BeOS has inet_ntoa() in <netdb.h> */

/* #undef HAVE_ICONV_H */

/*
 * Convert to SCHILY name
 */
#ifdef	STDC_HEADERS
#	ifndef	HAVE_STDC_HEADERS
#		define	HAVE_STDC_HEADERS
#	endif
#endif

/*
 * Library Functions
 */
#define HAVE_ACCESS 1		/* access() is present in libc */
#define HAVE_STRERROR 1		/* strerror() is present in libc */
#define HAVE_MEMMOVE 1		/* memmove() is present in libc */

#define HAVE_MLOCK 1		/* mlock() is present in libc */
/* #undef HAVE_MLOCKALL */
	/* working mlockall() is present in libc */
#define HAVE_FLOCK 1		/* *BSD flock() is present in libc */
#define HAVE_SETREUID 1		/* setreuid() is present in libc */
#define HAVE_SETEUID 1		/* seteuid() is present in libc */
#define HAVE_SETUID 1		/* setuid() is present in libc */
#define HAVE_SETREGID 1		/* setregid() is present in libc */
#define HAVE_SETEGID 1		/* setegid() is present in libc */
#define HAVE_SETGID 1		/* setgid() is present in libc */
#define HAVE_TCGETATTR 1		/* tcgetattr() is present in libc */
#define HAVE_TCSETATTR 1		/* tcsetattr() is present in libc */
#define HAVE_GETHOSTID 1		/* gethostid() is present in libc */
#define HAVE_GETHOSTNAME 1		/* gethostname() is present in libc */
#define HAVE_GETDOMAINNAME 1	/* getdomainname() is present in libc */
#define HAVE_GETPAGESIZE 1		/* getpagesize() is present in libc */
#define HAVE_POLL 1		/* poll() is present in libc */
#define HAVE_SELECT 1		/* select() is present in libc */
#define HAVE_LCHOWN 1		/* lchown() is present in libc */
#define HAVE_SBRK 1		/* sbrk() is present in libc */
#define HAVE_VA_COPY 1		/* va_copy() is present in varargs.h/stdarg.h */
#define HAVE_DUP2 1		/* dup2() is present in libc */
#define HAVE_GETCWD 1		/* POSIX getcwd() is present in libc */
#define HAVE_SMMAP 1		/* may map anonymous memory to get shared mem */
#define HAVE_SHMAT 1		/* shmat() is present in libc */
#define HAVE_SEMGET 1		/* semget() is present in libc */
#define HAVE_LSTAT 1		/* lstat() is present in libc */
#define HAVE_READLINK 1		/* readlink() is present in libc */
#define HAVE_RENAME 1		/* rename() is present in libc */

/* #undef HAVE_RAND */
		/* rand() is present in libc */
#define HAVE_DRAND48
  /* drand48() is present in libc */
#define HAVE_SETPRIORITY 1		/* setpriority() is present in libc */
#define HAVE_NICE 1		/* nice() is present in libc */
#define HAVE_UNAME 1		/* uname() is present in libc */
#define HAVE_SNPRINTF 1		/* snprintf() is present in libc */
#define HAVE_STRCASECMP 1		/* strcasecmp() is present in libc */
#define HAVE_STRDUP 1		/* strdup() is present in libc */
#define HAVE_SIGPROCMASK 1		/* sigprocmask() is present in libc (POSIX) */
#define HAVE_SIGSET 1		/* sigset() is present in libc (POSIX) */
#define HAVE_NANOSLEEP 1		/* nanosleep() is present in libc */
#define HAVE_USLEEP 1		/* usleep() is present in libc */
#define HAVE_FORK 1		/* fork() is present in libc */
#define HAVE_ALLOCA 1		/* alloca() is present (else use malloc())*/
#define HAVE_VALLOC 1		/* valloc() is present in libc (else use malloc())*/

/*
 * Important:	This must be a result from a check _before_ the Large File test
 *		has been run. It then tells us whether these functions are
 *		available even when not in Large File mode.
 *
 *	Do not run the AC_FUNC_FSEEKO test from the GNU tar Large File test
 *	siute. It will use the same cache names and interfere with our test.
 *	Instead use the tests AC_SMALL_FSEEKO/AC_SMALL/STELLO and make sure
 *	they are placed before the large file tests.
 */

#define HAVE_RCMD 1		/* rcmd() is present in libc/libsocket */
#define HAVE_SOCKET 1		/* socket() is present in libc/libsocket */
#define HAVE_SOCKETPAIR 1		/* socketpair() is present in libc/libsocket */
#define HAVE_GETSERVBYNAME 1	/* getservbyname() is present in libc/libsocket */
/* inet_ntoa() is present in libc/libsocket */
#define HAVE_INET_NTOA

/* getnameinfo() is present in libc/libsocket */
/* #undef define */

/*
 * We need to test for the include files too because Apollo Domain/OS has a
 * libc that includes the functions but the includes files are not visible
 * from the BSD compile environment.
 */
#if	defined(HAVE_SHMAT) && defined(HAVE_SYS_SHM_H) && defined(HAVE_SYS_IPC_H)
#	define	HAVE_USGSHM	/* USG shared memory is present */
#endif
#if	defined(HAVE_SEMGET) && defined(HAVE_SYS_SHM_H) && defined(HAVE_SYS_IPC_H)
#	define	HAVE_USGSEM	/* USG semaphores are present */
#endif

#if	defined(HAVE_GETPGRP) && !defined(HAVE_BSD_GETPGRP)
#define	HAVE_POSIX_GETPGRP 1	/* getpgrp() in libc is POSIX compliant */
#endif
#if	defined(HAVE_SETPGRP) && !defined(HAVE_BSD_SETPGRP)
#define	HAVE_POSIX_SETPGRP 1	/* setpgrp() in libc is POSIX compliant */
#endif

/*
 * Structures
 */

/* have union wait in wait.h */
/* #undef HAVE_UNION_WAIT */

#define HAVE_ST_NSEC 1		/* if struct stat contains st_atim.tv_nsec (nanosecs) */
#define HAVE_ST_RDEV 1		/* if struct stat contains st_rdev */
#define HAVE_SOCKADDR_STORAGE 1	/* if socket.h defines struct sockaddr_storage */

/*
 * Byteorder/Bitorder
 */
/* If using network byte order             */
/* #undef WORDS_BIGENDIAN */
/* If high bits come first in structures   */
/* #undef BITFIELDS_HTOL */
#define	HAVE_C_BIGENDIAN	/* Flag that WORDS_BIGENDIAN test was done */
#define	HAVE_C_BITFIELDS	/* Flag that BITFIELDS_HTOL test was done  */

/*
 * Types/Keywords
 */
#define SIZEOF_CHAR 1
#define SIZEOF_SHORT_INT  2
#define SIZEOF_INT  4
#define SIZEOF_LONG_INT 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF_CHAR_P 8
#define SIZEOF_UNSIGNED_CHAR 1
#define SIZEOF_UNSIGNED_SHORT_INT 2
#define SIZEOF_UNSIGNED_INT 4
#define SIZEOF_UNSIGNED_LONG_INT  8
#define SIZEOF_UNSIGNED_LONG_LONG 8
#define SIZEOF_UNSIGNED_CHAR_P 8

#define HAVE_LONGLONG 1		/* Compiler defines long long type */


/* 
 * Critical on some of Debian architectures (EB) */
/* #define VA_LIST_IS_ARRAY 1		*/

/* #undef VA_LIST_IS_ARRAY */

#define GETGROUPS_T gid_t
#define GID_T		GETGROUPS_T

/*
 * Define as the return type of signal handlers (int or void).
 */
#define RETSIGTYPE void

#define	HAVE_LARGEFILES 1
#define _FILE_OFFSET_BITS 64 /* glibc style */
#define _LARGEFILE_SOURCE 1	/* To make ftello() visible (HP-UX 10.20). */
#define _LARGE_FILES 1 	/* Large file defined on AIX-style hosts.  */

/*
 * Misc CC / LD related stuff
 */
/* If the compiler allows dynamic sized arrays */
#define HAVE_DYN_ARRAYS	

#define HOST_SYSTEM "CYGWIN"
#define CDRKIT_VERSION "1.1.11"
/*[$Rev: 467 $]" */
