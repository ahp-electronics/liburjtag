/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* define for dmalloc library */
/* #undef DMALLOC */

/* define if you want to build the jtag and bsdl2jtag main programs */
#define ENABLE_APPS 1

/* define if BSDL subsystem is enabled */
#define ENABLE_BSDL 1

/* define if ahbjtag is enabled */
#define ENABLE_BUS_AHBJTAG 1

/* define if arm9tdmi is enabled */
#define ENABLE_BUS_ARM9TDMI 1

/* define if au1500 is enabled */
#define ENABLE_BUS_AU1500 1

/* define if avr32 is enabled */
#define ENABLE_BUS_AVR32 1

/* define if bcm1250 is enabled */
#define ENABLE_BUS_BCM1250 1

/* define if blackfin is enabled */
#define ENABLE_BUS_BLACKFIN 1

/* define if bscoach is enabled */
#define ENABLE_BUS_BSCOACH 1

/* define if ejtag is enabled */
#define ENABLE_BUS_EJTAG 1

/* define if ejtag_dma is enabled */
#define ENABLE_BUS_EJTAG_DMA 1

/* define if fjmem is enabled */
#define ENABLE_BUS_FJMEM 1

/* define if h7202 is enabled */
#define ENABLE_BUS_H7202 1

/* define if ixp425 is enabled */
#define ENABLE_BUS_IXP425 1

/* define if ixp435 is enabled */
#define ENABLE_BUS_IXP435 1

/* define if ixp465 is enabled */
#define ENABLE_BUS_IXP465 1

/* define if jopcyc is enabled */
#define ENABLE_BUS_JOPCYC 1

/* define if lh7a400 is enabled */
#define ENABLE_BUS_LH7A400 1

/* define if mpc5200 is enabled */
#define ENABLE_BUS_MPC5200 1

/* define if mpc824x is enabled */
#define ENABLE_BUS_MPC824X 1

/* define if mpc8313 is enabled */
#define ENABLE_BUS_MPC8313 1

/* define if mpc837x is enabled */
#define ENABLE_BUS_MPC837X 1

/* define if ppc405ep is enabled */
#define ENABLE_BUS_PPC405EP 1

/* define if ppc440gx_ebc8 is enabled */
#define ENABLE_BUS_PPC440GX_EBC8 1

/* define if prototype is enabled */
#define ENABLE_BUS_PROTOTYPE 1

/* define if pxa27x is enabled */
#define ENABLE_BUS_PXA27X 1

/* define if pxa2x0 is enabled */
#define ENABLE_BUS_PXA2X0 1

/* define if s3c4510 is enabled */
#define ENABLE_BUS_S3C4510 1

/* define if sa1110 is enabled */
#define ENABLE_BUS_SA1110 1

/* define if sh7727 is enabled */
#define ENABLE_BUS_SH7727 1

/* define if sh7750r is enabled */
#define ENABLE_BUS_SH7750R 1

/* define if sh7751r is enabled */
#define ENABLE_BUS_SH7751R 1

/* define if sharc_21065L is enabled */
#define ENABLE_BUS_SHARC_21065L 1

/* define if sharc_21369_ezkit is enabled */
#define ENABLE_BUS_SHARC_21369_EZKIT 1

/* define if slsup3 is enabled */
#define ENABLE_BUS_SLSUP3 1

/* define if tx4925 is enabled */
#define ENABLE_BUS_TX4925 1

/* define if zefant_xs3 is enabled */
#define ENABLE_BUS_ZEFANT_XS3 1

/* define if arcom is enabled */
#define ENABLE_CABLE_ARCOM 1

/* define if bsdgpio is enabled */
/* #undef ENABLE_CABLE_BSDGPIO */

/* define if byteblaster is enabled */
#define ENABLE_CABLE_BYTEBLASTER 1

/* define if dirtyjtag is enabled */
#define ENABLE_CABLE_DIRTYJTAG 1

/* define if dlc5 is enabled */
#define ENABLE_CABLE_DLC5 1

/* define if ea253 is enabled */
#define ENABLE_CABLE_EA253 1

/* define if ei012 is enabled */
#define ENABLE_CABLE_EI012 1

/* define if ep9307 is enabled */
/* #undef ENABLE_CABLE_EP9307 */

/* define if ft2232 is enabled */
#define ENABLE_CABLE_FT2232 1

/* define if gpio is enabled */
#define ENABLE_CABLE_GPIO 1

/* define if ice100 is enabled */
#define ENABLE_CABLE_ICE100 1

/* define if igloo is enabled */
#define ENABLE_CABLE_IGLOO 1

/* define if jim is enabled */
/* #undef ENABLE_CABLE_JIM */

/* define if jlink is enabled */
#define ENABLE_CABLE_JLINK 1

/* define if keithkoep is enabled */
#define ENABLE_CABLE_KEITHKOEP 1

/* define if lattice is enabled */
#define ENABLE_CABLE_LATTICE 1

/* define if mpcbdm is enabled */
#define ENABLE_CABLE_MPCBDM 1

/* define if triton is enabled */
#define ENABLE_CABLE_TRITON 1

/* define if ts7800 is enabled */
/* #undef ENABLE_CABLE_TS7800 */

/* define if usbblaster is enabled */
#define ENABLE_CABLE_USBBLASTER 1

/* define if vsllink is enabled */
#define ENABLE_CABLE_VSLLINK 1

/* define if wiggler is enabled */
#define ENABLE_CABLE_WIGGLER 1

/* define if xpc is enabled */
#define ENABLE_CABLE_XPC 1

/* define if jim is enabled */
/* #undef ENABLE_JIM */

/* define if direct is enabled */
#define ENABLE_LOWLEVEL_DIRECT 1

/* define if ftd2xx is enabled */
/* #undef ENABLE_LOWLEVEL_FTD2XX */

/* define if ftdi is enabled */
#define ENABLE_LOWLEVEL_FTDI 1

/* define if ppdev is enabled */
#define ENABLE_LOWLEVEL_PPDEV 1

/* define if ppi is enabled */
/* #undef ENABLE_LOWLEVEL_PPI */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#undef ENABLE_NLS

/* define if STAPL player is enabled */
/* #undef ENABLE_STAPL */

/* define if SVF player is enabled */
#define ENABLE_SVF 1

/* define for flash multi-byte write mode */
#define FLASH_MULTI_BYTE 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dev/ppbus/ppi.h> header file. */
/* #undef HAVE_DEV_PPBUS_PPI_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the 'getdelim' function. */
#define HAVE_GETDELIM 1

/* Define to 1 if you have the 'geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the 'getline' function. */
#define HAVE_GETLINE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the 'getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the <history.h> header file. */
/* #undef HAVE_HISTORY_H */

/* Define to 1 if you have the i386_set_ioperm() function */
/* #undef HAVE_I386_SET_IOPERM */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* define if you have inpout32.dll */
/* #undef HAVE_INPOUTXX */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the ioperm() function */
#define HAVE_IOPERM 1

/* define if you have libftd2xx */
/* #undef HAVE_LIBFTD2XX */

/* Define if you have libftdi */
#define HAVE_LIBFTDI 1

/* Define if libftdi support async mode */
#define HAVE_LIBFTDI_ASYNC_MODE 1

/* Define to 1 if you have the <libgpio.h> header file. */
/* #undef HAVE_LIBGPIO_H */

/* Define if you have a readline compatible library */
#define HAVE_LIBREADLINE 1

/* Define to 1 if you have the 'rt' library (-lrt). */
/* #undef HAVE_LIBRT */

/* Define if you have libusb */
#define HAVE_LIBUSB 1

/* Define if you have libusb-1.0 */
#define HAVE_LIBUSB1 1

/* Define to 1 if you have the <linux/ppdev.h> header file. */
#define HAVE_LINUX_PPDEV_H 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 if you have the 'nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the 'pread' function. */
#define HAVE_PREAD 1

/* Define if your readline library has \`rl_completion_matches' */
#define HAVE_READLINE_COMPLETION 1

/* Define to 1 if you have the <readline.h> header file. */
/* #undef HAVE_READLINE_H */

/* Define if your readline library has \`add_history' */
#define HAVE_READLINE_HISTORY 1

/* Define to 1 if you have the <readline/history.h> header file. */
#define HAVE_READLINE_HISTORY_H 1

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Have a defined SA_ONESHOT */
#define HAVE_SIGACTION_SA_ONESHOT 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the struct timespec type */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if you have the 'swprintf' function. */
#define HAVE_SWPRINTF 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the 'usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if you have the '_sleep' function. */
/* #undef HAVE__SLEEP */

/* define if experimental JEDEC flash detection is enabled */
/* #undef JEDEC_EXP */

/* define for relocatable paths */
/* #undef JTAG_RELOCATABLE */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "urjtag"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://urjtag.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "UrJTAG"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "UrJTAG 0.12"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "urjtag"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "@URJTAG_VERSION@"

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* subversion revision number */
#define SVN_REVISION "656fea9"

/* Enable extensions on AIX, Interix, z/OS.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex F.  */
#ifndef __STDC_WANT_IEC_60559_EXT__
# define __STDC_WANT_IEC_60559_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex H and ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Version number of package */
#define VERSION "0.12"

/* Define to 1 if 'lex' declares 'yytext' as a 'char *' by default, not a
   'char[]'. */
#define YYTEXT_POINTER 1

/* Make sure we have wchar_t */
/* #undef wchar_t */
