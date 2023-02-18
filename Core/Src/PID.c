//
// Created by kenke on 2023/01/12.
//

#include "PID.h"

float pid_e = 0;
float pid_e_sum = 0;
float pid_e_diff = 0;
float pid_result = 0;
float pid_e_pre = 0;
float pid_e_pre_pre = 0;

float calc_output_PID(float target, float curr_val, float dt) {
  pid_e = target-curr_val;
  pid_e_sum += ((pid_e + pid_e_pre)*dt/2.0); // trapezoid integral

  pid_e_diff = (3*pid_e - 4*pid_e_pre + pid_e_pre_pre) / (2*dt); // differential

  pid_result = Kp * pid_e + (Ki * pid_e_sum) + (Kd * pid_e_diff);

  pid_e_pre_pre = pid_e_pre;
  pid_e_pre = pid_e;

  return pid_result;
}
