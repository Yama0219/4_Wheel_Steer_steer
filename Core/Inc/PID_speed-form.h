//
// Created by kenke on 2023/01/18.
//

#ifndef PID_SPEED_FORM_H
#define PID_SPEED_FORM_H

#ifdef CONTROLLER_INCLUDED
#error "DO NOT INCLUDE TOW OR MORE CONTROLLER HEADER FILES"
#else
#define CONTROLLER_INCLUDED
#endif


#define Kp 0.2
#define Ki 0.01
#define Kd 0.1


float calc_output_speed(float target, float curr_val, float dt);

#endif //PID_SPEED_FORM_H
