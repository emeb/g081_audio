/*
 * timersleep.h - timer counter sleep routines
 * 10-12-21 E. Brombaugh - created as substitute for cyclsleep on M0
 */

#ifndef __timersleep__
#define __timersleep__

#include "main.h"

void timersleep_init(void);
void timersleep(uint32_t us);
uint32_t timersleep_goal(uint32_t us);
uint32_t timersleep_goal_ms(uint32_t ms);
uint32_t timersleep_check(uint32_t goal);
void timersleep_delay(uint32_t ms);
void timersleep_start_meas(void);
void timersleep_end_meas(void);
void timersleep_get_meas(uint32_t *act, uint32_t *tot);

#endif
