//
// Created by kenke on 2023/01/20.
//

#ifndef PID_ANTI_WINDUP_H
#define PID_ANTI_WINDUP_H

#ifdef CONTROLLER_INCLUDED
#error "DO NOT INCLUDE TOW OR MORE CONTROLLER HEADER FILES"
#else
#define CONTROLLER_INCLUDED
#endif


#define Kp 78.25f
#define Ki 14.25f
#define Kd 7.75f

#define MAX_OUT 950

float calc_output_PID_AW(float target, float curr_val, float dt);
void reset_pid_vars();

#endif //PID_ANTI_WINDUP_H
