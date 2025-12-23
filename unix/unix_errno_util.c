#ifndef __FreeBSD__
#  define _GNU_SOURCE
#  define _POSIX_C_SOURCE 200809L
#  define _DARWIN_C_SOURCE
#endif

#include <errno.h>

void unix_errno_reset() { errno = 0; }

int unix_errno_get() { return errno; }

// NOT OS X or FreeBSD

int unix_errno_echrng() {
#if !defined(ECHRNG)
  return -1;
#else
  return ECHRNG;
#endif
}

int unix_errno_el2nsync() {
#if !defined(EL2NSYNC)
  return -1;
#else
  return EL2NSYNC;
#endif
}

int unix_errno_el3hlt() {
#if !defined(EL3HLT)
  return -1;
#else
  return EL3HLT;
#endif
}

int unix_errno_el3rst() {
#if !defined(EL3RST)
  return -1;
#else
  return EL3RST;
#endif
}

int unix_errno_elnrng() {
#if !defined(ELNRNG)
  return -1;
#else
  return ELNRNG;
#endif
}

int unix_errno_eunatch() {
#if !defined(EUNATCH)
  return -1;
#else
  return EUNATCH;
#endif
}

int unix_errno_enocsi() {
#if !defined(ENOCSI)
  return -1;
#else
  return ENOCSI;
#endif
}

int unix_errno_el2hlt() {
#if !defined(EL2HLT)
  return -1;
#else
  return EL2HLT;
#endif
}

int unix_errno_ebade() {
#if !defined(EBADE)
  return -1;
#else
  return EBADE;
#endif
}

int unix_errno_ebadr() {
#if !defined(EBADR)
  return -1;
#else
  return EBADR;
#endif
}

int unix_errno_exfull() {
#if !defined(EXFULL)
  return -1;
#else
  return EXFULL;
#endif
}

int unix_errno_enoano() {
#if !defined(ENOANO)
  return -1;
#else
  return ENOANO;
#endif
}

int unix_errno_ebadrqc() {
#if !defined(EBADRQC)
  return -1;
#else
  return EBADRQC;
#endif
}

int unix_errno_ebadslt() {
#if !defined(EBADSLT)
  return -1;
#else
  return EBADSLT;
#endif
}

int unix_errno_ebfont() {
#if !defined(EBFONT)
  return -1;
#else
  return EBFONT;
#endif
}

int unix_errno_enonet() {
#if !defined(ENONET)
  return -1;
#else
  return ENONET;
#endif
}

int unix_errno_enopkg() {
#if !defined(ENOPKG)
  return -1;
#else
  return ENOPKG;
#endif
}

int unix_errno_eadv() {
#if !defined(EADV)
  return -1;
#else
  return EADV;
#endif
}

int unix_errno_esrmnt() {
#if !defined(ESRMNT)
  return -1;
#else
  return ESRMNT;
#endif
}

int unix_errno_ecomm() {
#if !defined(ECOMM)
  return -1;
#else
  return ECOMM;
#endif
}

int unix_errno_edotdot() {
#if !defined(EDOTDOT)
  return -1;
#else
  return EDOTDOT;
#endif
}

int unix_errno_enotuniq() {
#if !defined(ENOTUNIQ)
  return -1;
#else
  return ENOTUNIQ;
#endif
}

int unix_errno_ebadfd() {
#if !defined(EBADFD)
  return -1;
#else
  return EBADFD;
#endif
}

int unix_errno_eremchg() {
#if !defined(EREMCHG)
  return -1;
#else
  return EREMCHG;
#endif
}

int unix_errno_elibacc() {
#if !defined(ELIBACC)
  return -1;
#else
  return ELIBACC;
#endif
}

int unix_errno_elibbad() {
#if !defined(ELIBBAD)
  return -1;
#else
  return ELIBBAD;
#endif
}

int unix_errno_elibscn() {
#if !defined(ELIBSCN)
  return -1;
#else
  return ELIBSCN;
#endif
}

int unix_errno_elibmax() {
#if !defined(ELIBMAX)
  return -1;
#else
  return ELIBMAX;
#endif
}

int unix_errno_elibexec() {
#if !defined(ELIBEXEC)
  return -1;
#else
  return ELIBEXEC;
#endif
}

int unix_errno_erestart() {
#if !defined(ERESTART)
  return -1;
#else
  return ERESTART;
#endif
}

int unix_errno_estrpipe() {
#if !defined(ESTRPIPE)
  return -1;
#else
  return ESTRPIPE;
#endif
}

int unix_errno_euclean() {
#if !defined(EUCLEAN)
  return -1;
#else
  return EUCLEAN;
#endif
}

int unix_errno_enotnam() {
#if !defined(ENOTNAM)
  return -1;
#else
  return ENOTNAM;
#endif
}

int unix_errno_enavail() {
#if !defined(ENAVAIL)
  return -1;
#else
  return ENAVAIL;
#endif
}

int unix_errno_eisnam() {
#if !defined(EISNAM)
  return -1;
#else
  return EISNAM;
#endif
}

int unix_errno_eremoteio() {
#if !defined(EREMOTEIO)
  return -1;
#else
  return EREMOTEIO;
#endif
}

int unix_errno_enomedium() {
#if !defined(ENOMEDIUM)
  return -1;
#else
  return ENOMEDIUM;
#endif
}

int unix_errno_emediumtype() {
#if !defined(EMEDIUMTYPE)
  return -1;
#else
  return EMEDIUMTYPE;
#endif
}

int unix_errno_enokey() {
#if !defined(ENOKEY)
  return -1;
#else
  return ENOKEY;
#endif
}

int unix_errno_ekeyexpired() {
#if !defined(EKEYEXPIRED)
  return -1;
#else
  return EKEYEXPIRED;
#endif
}

int unix_errno_ekeyrevoked() {
#if !defined(EKEYREVOKED)
  return -1;
#else
  return EKEYREVOKED;
#endif
}

int unix_errno_ekeyrejected() {
#if !defined(EKEYREJECTED)
  return -1;
#else
  return EKEYREJECTED;
#endif
}

int unix_errno_erfkill() {
#if !defined(ERFKILL)
  return -1;
#else
  return ERFKILL;
#endif
}

int unix_errno_ehwpoison() {
#if !defined(EHWPOISON)
  return -1;
#else
  return EHWPOISON;
#endif
}

// NOT FreeBSD or Linux

int unix_errno_epwroff() {
#if !defined(EPWROFF)
  return -1;
#else
  return EPWROFF;
#endif
}

int unix_errno_edeverr() {
#if !defined(EDEVERR)
  return -1;
#else
  return EDEVERR;
#endif
}

int unix_errno_ebadexec() {
#if !defined(EBADEXEC)
  return -1;
#else
  return EBADEXEC;
#endif
}

int unix_errno_ebadarch() {
#if !defined(EBADARCH)
  return -1;
#else
  return EBADARCH;
#endif
}

int unix_errno_eshlibvers() {
#if !defined(ESHLIBVERS)
  return -1;
#else
  return ESHLIBVERS;
#endif
}

int unix_errno_ebadmacho() {
#if !defined(EBADMACHO)
  return -1;
#else
  return EBADMACHO;
#endif
}

int unix_errno_enopolicy() {
#if !defined(ENOPOLICY)
  return -1;
#else
  return ENOPOLICY;
#endif
}

int unix_errno_eqfull() {
#if !defined(EQFULL)
  return -1;
#else
  return EQFULL;
#endif
}

// NOT OS X or Linux

int unix_errno_edoofus() {
#if !defined(EDOOFUS)
  return -1;
#else
  return EDOOFUS;
#endif
}

int unix_errno_enotcapable() {
#if !defined(ENOTCAPABLE)
  return -1;
#else
  return ENOTCAPABLE;
#endif
}

int unix_errno_ecapmode() {
#if !defined(ECAPMODE)
  return -1;
#else
  return ECAPMODE;
#endif
}

// NOT Linux

int unix_errno_eproclim() {
#if !defined(EPROCLIM)
  return -1;
#else
  return EPROCLIM;
#endif
}

int unix_errno_ebadrpc() {
#if !defined(EBADRPC)
  return -1;
#else
  return EBADRPC;
#endif
}

int unix_errno_erpcmismatch() {
#if !defined(ERPCMISMATCH)
  return -1;
#else
  return ERPCMISMATCH;
#endif
}

int unix_errno_eprogunavail() {
#if !defined(EPROGUNAVAIL)
  return -1;
#else
  return EPROGUNAVAIL;
#endif
}

int unix_errno_eprogmismatch() {
#if !defined(EPROGMISMATCH)
  return -1;
#else
  return EPROGMISMATCH;
#endif
}

int unix_errno_eprocunavail() {
#if !defined(EPROCUNAVAIL)
  return -1;
#else
  return EPROCUNAVAIL;
#endif
}

int unix_errno_eftype() {
#if !defined(EFTYPE)
  return -1;
#else
  return EFTYPE;
#endif
}

int unix_errno_eauth() {
#if !defined(EAUTH)
  return -1;
#else
  return EAUTH;
#endif
}

int unix_errno_eneedauth() {
#if !defined(ENEEDAUTH)
  return -1;
#else
  return ENEEDAUTH;
#endif
}

int unix_errno_enoattr() {
#if !defined(ENOATTR)
  return -1;
#else
  return ENOATTR;
#endif
}

// NOT FreeBSD

int unix_errno_enostr() {
#if !defined(ENOSTR)
  return -1;
#else
  return ENOSTR;
#endif
}

int unix_errno_enodata() {
#if !defined(ENODATA)
  return -1;
#else
  return ENODATA;
#endif
}

int unix_errno_etime() {
#if !defined(ETIME)
  return -1;
#else
  return ETIME;
#endif
}

int unix_errno_enosr() {
#if !defined(ENOSR)
  return -1;
#else
  return ENOSR;
#endif
}
