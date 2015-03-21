#ifndef _TERM_H
#define _TERM_H

extern int tgetent(char *, char *);
extern int tnchktc();
extern int tnamatch(char *);
extern char *tskip(register char *);
extern int tgetnum(char *);
extern int tgetflag(char *);
extern char *tgetstr(char *, char **);
extern char *tdecode(register char *, char **);
extern char *tgoto(char *, int, int);
extern int tputs(register char *, int, int (*)());

#endif
