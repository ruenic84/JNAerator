typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int __darwin_ct_rune_t; /* ct_rune_t */
/**
 * mbstate_t is an opaque object to keep conversion state, during multibyte<br>
 * stream conversions.  The content must not be referenced by user programs.
 */
typedef union {
	char __mbstate8[128];
	long long _mbstateL; /* for alignment */
} __mbstate_t;
typedef __mbstate_t __darwin_mbstate_t; /* mbstate_t */
typedef int __darwin_ptrdiff_t; /* ptr1 - ptr2 */
typedef unsigned long __darwin_size_t; /* sizeof() */
typedef void *__darwin_va_list; /* va_list */
typedef __darwin_ct_rune_t __darwin_wchar_t; /* wchar_t */
typedef __darwin_wchar_t __darwin_rune_t; /* rune_t */
typedef __darwin_ct_rune_t __darwin_wint_t; /* wint_t */
typedef unsigned long __darwin_clock_t; /* clock() */
typedef __uint32_t __darwin_socklen_t; /* socklen_t (duh) */
typedef long __darwin_ssize_t; /* byte count or error */
typedef long __darwin_time_t; /* time() */
struct __darwin_pthread_handler_rec {
	void (*__routine)(void*); /* Routine to call */
	void *__arg; /* Argument to pass */
	struct __darwin_pthread_handler_rec *__next;
};
struct _opaque_pthread_attr_t {
	long __sig;
	char __opaque[36];
};
struct _opaque_pthread_cond_t {
	long __sig;
	char __opaque[24];
};
struct _opaque_pthread_condattr_t {
	long __sig;
	char __opaque[4];
};
struct _opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
};
struct _opaque_pthread_mutexattr_t {
	long __sig;
	char __opaque[8];
};
struct _opaque_pthread_once_t {
	long __sig;
	char __opaque[4];
};
struct _opaque_pthread_rwlock_t {
	long __sig;
	char __opaque[124];
};
struct _opaque_pthread_rwlockattr_t {
	long __sig;
	char __opaque[12];
};
struct _opaque_pthread_t {
	long __sig;
	struct __darwin_pthread_handler_rec *__cleanup_stack;
	char __opaque[596];
};
typedef __int64_t __darwin_blkcnt_t; /* total blocks */
typedef __int32_t __darwin_blksize_t; /* preferred block size */
typedef __int32_t __darwin_dev_t; /* dev_t */
typedef unsigned int __darwin_fsblkcnt_t; /* Used by statvfs and fstatvfs */
typedef unsigned int __darwin_fsfilcnt_t; /* Used by statvfs and fstatvfs */
typedef __uint32_t __darwin_gid_t; /* [???] process and group IDs */
typedef __uint32_t __darwin_id_t; /* [XSI] pid_t, uid_t, or gid_t*/
typedef __uint64_t __darwin_ino64_t; /* [???] Used for 64 bit inodes */
typedef __darwin_ino64_t __darwin_ino_t; /* [???] Used for inodes */
typedef __darwin_natural_t __darwin_mach_port_name_t; /* Used by mach */
typedef __darwin_mach_port_name_t __darwin_mach_port_t; /* Used by mach */
typedef __uint16_t __darwin_mode_t; /* [???] Some file attributes */
typedef __int64_t __darwin_off_t; /* [???] Used for file sizes */
typedef __int32_t __darwin_pid_t; /* [???] process and group IDs */
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t; /* [???] Used for pthreads */
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
typedef __uint32_t __darwin_sigset_t; /* [???] signal set */
typedef __int32_t __darwin_suseconds_t; /* [???] microseconds */
typedef __uint32_t __darwin_uid_t; /* [???] user IDs */
typedef __uint32_t __darwin_useconds_t; /* [???] microseconds */
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;
typedef unsigned long __darwin_wctype_t;
struct accessx_descriptor {
	unsigned int ad_name_offset;
	int ad_flags;
	int ad_pad[2];
};
typedef __darwin_gid_t gid_t;
typedef __darwin_intptr_t intptr_t;
typedef __darwin_off_t off_t;
typedef __darwin_pid_t pid_t;
/**
 * DO NOT REMOVE THIS COMMENT: fixincludes needs to see:<br>
 * _GCC_SIZE_T
 */
typedef __darwin_size_t size_t;
typedef __darwin_ssize_t ssize_t;
typedef __darwin_uid_t uid_t; /* user id 	*/
typedef __darwin_useconds_t useconds_t;
void _exit(int);
int access(const char*, int);
unsigned int alarm(unsigned int);
int chdir(const char*);
int chown(const char*, uid_t, gid_t);
int close(int);
int dup(int);
int dup2(int, int);
int execl(const char*, const char*, ...);
int execle(const char*, const char*, ...);
int execlp(const char*, const char*, ...);
int execv(const char*, const char**);
int execve(const char*, const char**, const char**);
int execvp(const char*, const char**);
pid_t fork();
long fpathconf(int, int);
char* getcwd(char*, size_t);
gid_t getegid();
uid_t geteuid();
gid_t getgid();
int getgroups(int, gid_t[]);
char* getlogin();
pid_t getpgrp();
pid_t getpid();
pid_t getppid();
uid_t getuid();
int isatty(int);
int link(const char*, const char*);
off_t lseek(int, off_t, int);
long pathconf(const char*, int);
int pause();
 (int[2]);
ssize_t read(int, void*, size_t);
int rmdir(const char*);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid();
int setuid(uid_t);
unsigned int sleep(unsigned int);
long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char* ttyname(int);
int ttyname_r(int, char*, size_t);
int unlink(const char*);
ssize_t write(int, const void*, size_t);
size_t confstr(int, char*, size_t);
[] (const char*);
extern char *optarg; /* getopt(3) external variables */
extern int optind, opterr, optopt;
extern ""C"" {
void* brk(const void*);
	int chroot(const char*);
	char* crypt(const char*, const char*);
	char* ctermid(char*);
	void encrypt(char*, int);
	int fchdir(int);
	long gethostid();
	pid_t getpgid(pid_t);
	pid_t getsid(pid_t);
	int getdtablesize();
	int getpagesize();
	char* getpass(const char*);
	char* getwd(char*); /* obsoleted by getcwd() */
	int lchown(const char*, uid_t, gid_t);
	int lockf(int, int, off_t);
	int nice(int);
	ssize_t pread(int, void*, size_t, off_t);
	ssize_t pwrite(int, const void*, size_t, off_t);
	/**
	 * Note that Issue 5 changed the argument as intprt_t,<br>
	 * but we keep it as int for binary compatability.
	 */
	void* sbrk(int);
	pid_t setpgrp();
	int setregid(gid_t, gid_t);
	int setreuid(uid_t, uid_t);
	void swab(const void*, void*, ssize_t);
	void sync();
	int truncate(const char*, off_t);
	useconds_t ualarm(useconds_t, useconds_t);
	int usleep(useconds_t);
	pid_t vfork();
	int fsync(int);
	int ftruncate(int, off_t);
	int getlogin_r(char*, size_t);
}
extern ""C"" {
int fchown(int, uid_t, gid_t);
	int gethostname(char*, size_t);
	ssize_t readlink(const char*, char*, size_t);
	int setegid(gid_t);
	int seteuid(uid_t);
	int symlink(const char*, const char*);
}
struct timespec {
	__darwin_time_t tv_sec;
	long tv_nsec;
};
struct timeval {
	__darwin_time_t tv_sec; /* seconds */
	__darwin_suseconds_t tv_usec; /* and microseconds */
};
extern ""C"" {
typedef struct fd_set {
		__int32_t fds_bits[(((1024) % (sizeof(__int32_t) * 8)) == 0)];
	} fd_set;
}
/// This inline avoids argument side-effect issues with FD_ISSET()
static inline int __darwin_fd_isset(int _n, const struct fd_set* _p) {
	return (_p->fds_bits[_n / (sizeof(__int32_t) * 8)] & (1 << (_n % (sizeof(__int32_t) * 8))));
}
typedef __darwin_time_t time_t;
typedef __darwin_suseconds_t suseconds_t;
typedef __darwin_sigset_t sigset_t;
extern ""C"" {
int pselect(int, fd_set*, fd_set*, fd_set*, const struct timespec*, const sigset_t*);
	int select(int, fd_set*, fd_set*, fd_set*, struct timeval*);
}
typedef __darwin_dev_t dev_t;
typedef __darwin_mode_t mode_t;
typedef __darwin_uuid_t uuid_t;
extern ""C"" {
void _Exit(int);
	int accessx_np(const struct accessx_descriptor*, size_t, int*, uid_t);
	int acct(const char*);
	int add_profil(char*, size_t, unsigned long, unsigned int);
	void endusershell();
	int execvP(const char*, const char*, const char**);
	char* fflagstostr(unsigned long);
	int getdomainname(char*, int);
	int getgrouplist(const char*, int, int*, int*);
	int gethostuuid(uuid_t, const struct timespec*);
	mode_t getmode(const void*, mode_t);
	int getpeereid(int, uid_t*, gid_t*);
	int getsgroups_np(int*, uuid_t);
	char* getusershell();
	int getwgroups_np(int*, uuid_t);
	int initgroups(const char*, int);
	int iruserok(unsigned long, int, const char*, const char*);
	int iruserok_sa(const void*, int, int, const char*, const char*);
	int issetugid();
	char* mkdtemp(char*);
	int mknod(const char*, mode_t, dev_t);
	int mkstemp(char*);
	int mkstemps(char*, int);
	char* mktemp(char*);
	int nfssvc(int, void*);
	int profil(char*, size_t, unsigned long, unsigned int);
	int pthread_setugid_np(uid_t, gid_t);
	int pthread_getugid_np(uid_t*, gid_t*);
	int rcmd(char**, int, const char*, const char*, const char*, int*);
	int rcmd_af(char**, int, const char*, const char*, const char*, int*, int);
	int reboot(int);
	int revoke(const char*);
	int rresvport(int*);
	int rresvport_af(int*, int);
	int ruserok(const char*, int, const char*, const char*);
	int setdomainname(const char*, int);
	int setgroups(int, const gid_t*);
	void sethostid(long);
	int sethostname(const char*, int);
	void setkey(const char*);
	int setlogin(const char*);
	void* setmode(const char*);
	int setrgid(gid_t);
	int setruid(uid_t);
	int setsgroups_np(int, const uuid_t);
	void setusershell();
	int setwgroups_np(int, const uuid_t);
	int strtofflags(char**, unsigned long*, unsigned long*);
	int swapon(const char*);
	int syscall(int, ...);
	int ttyslot();
	int undelete(const char*);
	int unwhiteout(const char*);
	void* valloc(size_t);
	extern char *suboptarg; /* getsubopt(3) external variable */
	int getsubopt(char**, const char**, char**);
	int fgetattrlist(int, void*, void*, size_t, unsigned long);
	int fsetattrlist(int, void*, void*, size_t, unsigned long);
	int getattrlist(const char*, void*, void*, size_t, unsigned long);
	int setattrlist(const char*, void*, void*, size_t, unsigned long);
	int exchangedata(const char*, const char*, unsigned long);
	int getdirentriesattr(int, void*, void*, size_t, unsigned long*, unsigned long*, unsigned long*, unsigned long);
	struct fssearchblock;
	struct searchstate;
	int searchfs(const char*, struct fssearchblock*, unsigned long*, unsigned int, unsigned int, struct searchstate*);
	int fsctl(const char*, unsigned long, void*, unsigned int);
	int ffsctl(int, unsigned long, void*, unsigned int);
	extern int optreset;
}
extern ""C"" {
extern void __dtrace_probe$cxa_runtime$cxa_exception_rethrow$v1();
	extern int __dtrace_isenabled$cxa_runtime$cxa_exception_rethrow$v1();
	extern void __dtrace_probe$cxa_runtime$cxa_exception_throw$v1$766f6964202a(void*);
	extern int __dtrace_isenabled$cxa_runtime$cxa_exception_throw$v1();
}
namespace std {

}
struct lconv {
	char *decimal_point;
	char *thousands_sep;
	char *grouping;
	char *int_curr_symbol;
	char *currency_symbol;
	char *mon_decimal_point;
	char *mon_thousands_sep;
	char *mon_grouping;
	char *positive_sign;
	char *negative_sign;
	char int_frac_digits;
	char frac_digits;
	char p_cs_precedes;
	char p_sep_by_space;
	char n_cs_precedes;
	char n_sep_by_space;
	char p_sign_posn;
	char n_sign_posn;
	char int_p_cs_precedes;
	char int_n_cs_precedes;
	char int_p_sep_by_space;
	char int_n_sep_by_space;
	char int_p_sign_posn;
	char int_n_sign_posn;
};
extern ""C"" {
struct lconv* localeconv();
}
extern ""C"" {
char* setlocale(int, const char*);
}
namespace std {
using::lconv;
	using::setlocale;
	using::localeconv;
}
typedef __darwin_ptrdiff_t ptrdiff_t;
typedef __darwin_wint_t wint_t;
namespace std {
using::ptrdiff_t;
	using::size_t;
}
extern ""C"" {
void* memchr(const void*, int, size_t);
	int memcmp(const void*, const void*, size_t);
	void* memcpy(void*, const void*, size_t);
	void* memmove(void*, const void*, size_t);
	void* memset(void*, int, size_t);
	char* strcat(char*, const char*);
	char* strchr(const char*, int);
	int strcmp(const char*, const char*);
	int strcoll(const char*, const char*);
	char* strcpy(char*, const char*);
	size_t strcspn(const char*, const char*);
	char* strerror(int);
	size_t strlen(const char*);
	char* strncat(char*, const char*, size_t);
	int strncmp(const char*, const char*, size_t);
	char* strncpy(char*, const char*, size_t);
	char* strpbrk(const char*, const char*);
	char* strrchr(const char*, int);
	size_t strspn(const char*, const char*);
	char* strstr(const char*, const char*);
	char* strtok(char*, const char*);
	size_t strxfrm(char*, const char*, size_t);
}
extern ""C"" {
char* strtok_r(char*, const char*, char**);
}
extern ""C"" {
int strerror_r(int, char*, size_t);
	char* strdup(const char*);
	void* memccpy(void*, const void*, int, size_t);
}
extern ""C"" {
char* stpcpy(char*, const char*);
	char* stpncpy(char*, const char*, size_t);
	char* strndup(const char*, size_t);
	size_t strnlen(const char*, size_t);
	char* strsignal(int sig);
}
extern ""C"" {
void* memmem(const void*, size_t, const void*, size_t);
	void memset_pattern4(void*, const void*, size_t);
	void memset_pattern8(void*, const void*, size_t);
	void memset_pattern16(void*, const void*, size_t);
	char* strcasestr(const char*, const char*);
	char* strnstr(const char*, const char*, size_t);
	size_t strlcat(char*, const char*, size_t);
	size_t strlcpy(char*, const char*, size_t);
	void strmode(int, char*);
	char* strsep(char**, const char*);
	/// SUS places swab() in unistd.h.  It is listed here for source compatibility
	void swab(const void*, void*, ssize_t);
}
extern ""C"" {
int bcmp(const void*, const void*, size_t);
	void bcopy(const void*, void*, size_t);
	void bzero(void*, size_t);
	char* index(const char*, int);
	char* rindex(const char*, int);
	int ffs(int);
	int strcasecmp(const char*, const char*);
	int strncasecmp(const char*, const char*, size_t);
}
extern ""C"" {
int ffsl(long);
	int fls(int);
	int flsl(long);
}
namespace std {
using::memcpy;
	using::memmove;
	using::strcpy;
	using::strncpy;
	using::strcat;
	using::strncat;
	using::memcmp;
	using::strcmp;
	using::strcoll;
	using::strncmp;
	using::strxfrm;
	using::strcspn;
	using::strspn;
	using::strtok;
	using::memset;
	using::strerror;
	using::strlen;
	using::memchr;
	inline void* memchr(void* __p, int __c, size_t __n) {
		return memchr(const_cast<const void* >(__p), __c, __n);
	}
	using::strchr;
	inline char* strchr(char* __s1, int __n) {
		return __builtin_strchr(const_cast<const char* >(__s1), __n);
	}
	using::strpbrk;
	inline char* strpbrk(char* __s1, const char* __s2) {
		return __builtin_strpbrk(const_cast<const char* >(__s1), __s2);
	}
	using::strrchr;
	inline char* strrchr(char* __s1, int __n) {
		return __builtin_strrchr(const_cast<const char* >(__s1), __n);
	}
	using::strstr;
	inline char* strstr(char* __s1, const char* __s2) {
		return __builtin_strstr(const_cast<const char* >(__s1), __s2);
	}
}
/**
 * DO NOT REMOVE THIS COMMENT: fixincludes needs to see:<br>
 * __gnuc_va_list and include <stdarg.h>
 */
typedef __darwin_va_list va_list;
typedef __darwin_off_t fpos_t;
/// stdio buffers
struct __sbuf {
	unsigned char *_base;
	int _size;
};
/// hold a buncha junk that would grow the ABI
struct __sFILEX;
/**
 * stdio state variables.<br>
 * * The following always hold:<br>
 * *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),<br>
 * 	_lbfsize is -_bf._size, else _lbfsize is 0<br>
 * if _flags&__SRD, _w is 0<br>
 * if _flags&__SWR, _r is 0<br>
 * * This ensures that the getc and putc macros (or inline functions) never<br>
 * try to write or read from a file that is in `read' or `write' mode.<br>
 * (Moreover, they can, and do, automatically switch from read mode to<br>
 * write mode, and back, on "r+" and "w+" files.)<br>
 * * _lbfsize is used only to make the inline line-buffered output stream<br>
 * code as compact as possible.<br>
 * * _ub, _up, and _ur are used when ungetc() pushes back more characters<br>
 * than fit in the current _bf, or when ungetc() pushes back a character<br>
 * that does not match the previous one in _bf.  When this happens,<br>
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff<br>
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.<br>
 * * NB: see WARNING above before changing the layout of this structure!
 */
typedef struct __sFILE {
	unsigned char *_p; /* current position in (some) buffer */
	int _r; /* read space left for getc() */
	int _w; /* write space left for putc() */
	short _flags; /* flags, below; this FILE is free if 0 */
	short _file; /* fileno, if Unix descriptor, else -1 */
	struct __sbuf _bf; /* the buffer (at least 1 byte, if !NULL) */
	int _lbfsize; /* 0 or -_bf._size, for inline putc */
	/// operations
	void *_cookie; /* cookie passed to io functions */
	int (*_close)(void*);
	int (*_read)(void*, char*, int);
	fpos_t (*_seek)(void*, fpos_t, int);
	int (*_write)(void*, const char*, int);
	/// separate buffer for long sequences of ungetc()
	struct __sbuf _ub; /* ungetc buffer */
	struct __sFILEX *_extra; /* additions to FILE to not break ABI */
	int _ur; /* saved _r when _r is counting ungetc data */
	/// tricks to meet minimum requirements even when malloc() fails
	unsigned char _ubuf[3]; /* guarantee an ungetc() buffer */
	unsigned char _nbuf[1]; /* guarantee a getc() buffer */
	/// separate buffer for fgetln() when line crosses buffer boundary
	struct __sbuf _lb; /* buffer for fgetln() */
	/// Unix stdio files get aligned to block boundaries on fseek()
	int _blksize; /* stat.st_blksize (may be != _bf._size) */
	fpos_t _offset; /* current lseek offset (see WARNING) */
} FILE;
extern ""C"" {
extern FILE *__stdinp;
	extern FILE *__stdoutp;
	extern FILE *__stderrp;
}
extern ""C"" {
void clearerr(FILE*);
	int fclose(FILE*);
	int feof(FILE*);
	int ferror(FILE*);
	int fflush(FILE*);
	int fgetc(FILE*);
	int fgetpos(FILE*, fpos_t*);
	char* fgets(char*, int, FILE*);
	FILE* fopen(const char*, const char*);
	int fprintf(FILE*, const char*, ...);
	int fputc(int, FILE*);
	int fputs(const char*, FILE*);
	size_t fread(void*, size_t, size_t, FILE*);
	FILE* freopen(const char*, const char*, FILE*);
	int fscanf(FILE*, const char*, ...);
	int fseek(FILE*, long, int);
	int fsetpos(FILE*, const fpos_t*);
	long ftell(FILE*);
	size_t fwrite(const void*, size_t, size_t, FILE*);
	int getc(FILE*);
	int getchar();
	char* gets(char*);
	void perror(const char*);
	int printf(const char*, ...);
	int putc(int, FILE*);
	int putchar(int);
	int puts(const char*);
	int remove(const char*);
	int rename(const char*, const char*);
	void rewind(FILE*);
	int scanf(const char*, ...);
	void setbuf(FILE*, char*);
	int setvbuf(FILE*, char*, int, size_t);
	int sprintf(char*, const char*, ...);
	int sscanf(const char*, const char*, ...);
	FILE* tmpfile();
	char* tmpnam(char*);
	int ungetc(int, FILE*);
	int vfprintf(FILE*, const char*, va_list);
	int vprintf(const char*, va_list);
	int vsprintf(char*, const char*, va_list);
}
extern ""C"" {
FILE* fdopen(int, const char*);
	int fileno(FILE*);
}
extern ""C"" {
int pclose(FILE*);
	FILE* popen(const char*, const char*);
}
extern ""C"" {
int __srget(FILE*);
	int __svfscanf(FILE*, const char*, va_list);
	int __swbuf(int, FILE*);
}
static inline int __sputc(int _c, FILE* _p) {
	if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n')) 
		return (*++_p->_p = _c);
	else 
		return (__swbuf(_c, _p));
}
extern ""C"" {
void flockfile(FILE*);
	int ftrylockfile(FILE*);
	void funlockfile(FILE*);
	int getc_unlocked(FILE*);
	int getchar_unlocked();
	int putc_unlocked(int, FILE*);
	int putchar_unlocked(int);
	int getw(FILE*);
	int putw(int, FILE*);
	char* tempnam(const char*, const char*);
}
extern ""C"" {
int fseeko(FILE*, off_t, int);
	off_t ftello(FILE*);
}
extern ""C"" {
int snprintf(char*, size_t, const char*, ...);
	int vfscanf(FILE*, const char*, va_list);
	int vscanf(const char*, va_list);
	int vsnprintf(char*, size_t, const char*, va_list);
	int vsscanf(const char*, const char*, va_list);
}
extern ""C"" {
int dprintf(int, const char*, ...);
	int vdprintf(int, const char*, va_list);
	ssize_t getdelim(char**, size_t*, int, FILE*);
	ssize_t getline(char**, size_t*, FILE*);
}
extern ""C"" {
extern const int sys_nerr; /* perror(3) external variables */
	extern const char *const sys_errlist[];
	int asprintf(char**, const char*, ...);
	char* ctermid_r(char*);
	char* fgetln(FILE*, size_t*);
	const char* fmtcheck(const char*, const char*);
	int fpurge(FILE*);
	void setbuffer(FILE*, char*, int);
	int setlinebuf(FILE*);
	int vasprintf(char**, const char*, va_list);
	FILE* zopen(const char*, const char*, int);
	/// Stdio function-access interface.
	FILE* funopen(const void*, int (*)(void*, char*, int), int (*)(void*, const char*, int), fpos_t (*)(void*, fpos_t, int), int (*)(void*));
}
namespace std {
using::FILE;
	using::fpos_t;
	using::clearerr;
	using::fclose;
	using::feof;
	using::ferror;
	using::fflush;
	using::fgetc;
	using::fgetpos;
	using::fgets;
	using::fopen;
	using::fprintf;
	using::fputc;
	using::fputs;
	using::fread;
	using::freopen;
	using::fscanf;
	using::fseek;
	using::fsetpos;
	using::ftell;
	using::fwrite;
	using::getc;
	using::getchar;
	using::gets;
	using::perror;
	using::printf;
	using::putc;
	using::putchar;
	using::puts;
	using::remove;
	using::rename;
	using::rewind;
	using::scanf;
	using::setbuf;
	using::setvbuf;
	using::sprintf;
	using::sscanf;
	using::tmpfile;
	using::tmpnam;
	using::ungetc;
	using::vfprintf;
	using::vprintf;
	using::vsprintf;
}
namespace __gnu_cxx {
using::snprintf;
	using::vfscanf;
	using::vscanf;
	using::vsnprintf;
	using::vsscanf;
}
namespace std {
using::__gnu_cxx::snprintf;
	using::__gnu_cxx::vfscanf;
	using::__gnu_cxx::vscanf;
	using::__gnu_cxx::vsnprintf;
	using::__gnu_cxx::vsscanf;
}
namespace std {
using::va_list;
}
namespace std {
typedef int *__c_locale;
	/// and should be avoided.
	inline int __convert_from_v(const __c_locale&, char* __out, const int __size, const char* __fmt, ...) {
		char *__old = std::setlocale(4, 0);
		char *__sav = 0;
		if (std::strcmp(__old, "C")) {
			 __sav = new char[std::strlen(__old) + 1];
			std::strcpy(__sav, __old);
			std::setlocale(4, "C");
		}
		va_list __args;
		va_start(__args, __fmt);
		const int __ret = std::vsnprintf(__out, __size, __fmt, __args);
		va_end(__args);
		if (__sav) {
			std::setlocale(4, __sav);
			delete[] __sav;
		}
		return __ret;
	}
}
extern ""C"" {
struct sched_param {
		int sched_priority;
		char __opaque[4];
	};
	extern int sched_yield();
	extern int sched_get_priority_min(int);
	extern int sched_get_priority_max(int);
}
typedef __darwin_clock_t clock_t;
struct tm {
	int tm_sec; /* seconds after the minute [0-60] */
	int tm_min; /* minutes after the hour [0-59] */
	int tm_hour; /* hours since midnight [0-23] */
	int tm_mday; /* day of the month [1-31] */
	int tm_mon; /* months since January [0-11] */
	int tm_year; /* years since 1900 */
	int tm_wday; /* days since Sunday [0-6] */
	int tm_yday; /* days since January 1 [0-365] */
	int tm_isdst; /* Daylight Savings Time flag */
	long tm_gmtoff; /* offset from CUT in seconds */
	char *tm_zone; /* timezone abbreviation */
};
extern char *tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
char* asctime(const struct tm*);
clock_t clock();
char* ctime(const time_t*);
double difftime(time_t, time_t);
struct tm* getdate(const char*);
struct tm* gmtime(const time_t*);
struct tm* localtime(const time_t*);
time_t mktime(struct tm*);
size_t strftime(char*, size_t, const char*, const struct tm*);
char* strptime(const char*, const char*, struct tm*);
time_t time(time_t*);
void tzset();
/// [TSF] Thread safe functions
char* asctime_r(const struct tm*, char*);
char* ctime_r(const time_t*, char*);
struct tm* gmtime_r(const time_t*, struct tm*);
struct tm* localtime_r(const time_t*, struct tm*);
time_t posix2time(time_t);
void tzsetwall();
time_t time2posix(time_t);