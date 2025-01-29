#ifndef INIT_H
#define INIT_H

#include <libapi.h>
#include <libgte.h>
#include <libgs.h>
#include "../ns.h"
#include "pad.h"
#include "../psx/r3000a.h"
#include "gpu.h"
#include "card.h"
#include "cdr.h"

/* External variables */
extern long rcnt_event;

/* Scratch space */
extern scratch scratch_g __attribute__((section("scratch")));

/* External structures */
extern ns_struct ns;
extern int use_cd;
extern eid_t insts[8];
extern page_struct texture_pages[16];

/* Function prototypes */
int init(void);
int kill(void);

#endif /* INIT_H */