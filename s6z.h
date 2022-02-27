/* S6z: Strange Slow Stochastic SAT Solver by Serguey Zefirov.
 *
 * Copyright (C) 2022 Serguey Zefirov.
 */


#ifndef	__S6Z_H__
#define	__S6Z_H__

typedef struct s6z_s s6z;

/* allocate solver */
s6z* s6z_init(void);

/* add literal to clause, 0 ends clause. */
void s6z_add(s6z* solver, int lit);

int s6z_solve(s6z* solver);

/* for everyyone to fail */
void fail(char*msg, ...);

#endif /* __S6Z_H__ */

