//
// Created by kenke on 2023/01/18.
//

#include "PID_speed-form.h"

float e = 0;
float e_pre_1 = 0;
float e_pre_2 = 0;
float e_pre_3 = 0;

float e_diff_1 = 0;
float e_diff_2 = 0;

float sum = 0;
float out = 0;
float out_pre = 0;

float calc_output_speed(float target, float curr_val, float dt) {
  e = target - curr_val;

  e_diff_1 = (3 * e - 4 * e_pre_1 + e_pre_2) / (2 * dt);
  e_diff_2 = (2 * e - 5 * e_pre_1 + 4 * e_pre_2 - e_pre_3) / (dt * dt);

  e_pre_3 = e_pre_2;
  e_pre_2 = e_pre_1;
  e_pre_1 = e;

  sum = Kp * e_diff_1 + Ki * e + Kd * e_diff_2;
  out = sum + out_pre;
  out_pre = out;
  return out;
}