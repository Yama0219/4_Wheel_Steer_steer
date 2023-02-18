//
// Created by kenke on 2023/01/12.
//

#ifndef IPD_H
#define IPD_H

#ifdef CONTROLLER_INCLUDED
#error "DO NOT INCLUDE TOW OR MORE CONTROLLER HEADER FILES"
#else
#define CONTROLLER_INCLUDED
#endif


#define Kp 12.4496
#define Ki 41.4987
#define Kd 0.91086

float calc_output_IPD(float target, float curr_val, float dt);

#endif //IPD_H
