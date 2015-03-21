/*
 * SDRAM Access Routines for PIC32.
 * 
 * Retromaster - 10.05.2010
 * 
 * This file is in the public domain. You can use, modify, and distribute the source code
 * and executable programs based on the source code. This file is provided "as is" and 
 * without any express or implied warranties whatsoever. Use at your own risk!
 *
 * Changes by madscifi for inclusion in the retrobsd project. 
 */
 
#ifndef SDRAM_H
#define SDRAM_H

//#include <inttypes.h>
typedef unsigned short uint16_t;
typedef unsigned char uint8_t;
typedef unsigned long long uint64_t;

extern __attribute__((far)) void sdram_init();
extern __attribute__((far)) void sdram_active(uint16_t rowaddr);
extern __attribute__((far)) void sdram_write(uint16_t pseudocoladdr, uint64_t val);
extern __attribute__((far)) uint64_t sdram_read(uint16_t pseudocoladdr);
extern __attribute__((far)) void sdram_auto_refresh(void);
extern __attribute__((far)) void sdram_precharge(void);
extern __attribute__((far)) void sdram_precharge_all(void);
extern __attribute__((far)) void sdram_sleep(void);
extern __attribute__((far)) void sdram_wake(void);
extern __attribute__((far)) void sdram_bank(uint8_t bank);

#endif
