//
// Created by kenke on 2023/01/12.
//

#ifndef PID_H
#define PID_H

#ifdef CONTROLLER_INCLUDED
#error "DO NOT INCLUDE TOW OR MORE CONTROLLER HEADER FILES"
#else
#define CONTROLLER_INCLUDED
#endif


#define Kp 55.0f
#define Ki 20.0f
#define Kd 5.5f

float calc_output_PID(float target, float curr_val, float dt);

#endif //PID_H
