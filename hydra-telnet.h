#ifndef HYDRA_TELNET_DEFS_H
#define HYDRA_TELNET_DEFS_H

#define IAC 255   /* interpret as command: */
#define DONT 254  /* you are not to use option */
#define DO 253    /* please, you use option */
#define WONT 252  /* I won't use option */
#define WILL 251  /* I will use option */
#define SB 250    /* interpret as subnegotiation */
#define GA 249    /* you may reverse the line */
#define EL 248    /* erase the current line */
#define EC 247    /* erase the current character */
#define AYT 246   /* are you there */
#define AO 245    /* abort output--but let prog finish */
#define IP 244    /* interrupt process--permanently */
#define BREAK 243 /* break */
#define DM 242    /* data mark--for connect. cleaning */
#define NOP 241   /* nop */
#define SE 240    /* end sub negotiation */
#define EOR 239   /* end of record (transparent mode) */
#define ABORT 238 /* Abort process */
#define SUSP 237  /* Suspend process */
#define xEOF 236  /* End of file: EOF is already used... */
#define SYNCH 242 /* for telfunc calls */
extern char *telcmds[];
#endif
