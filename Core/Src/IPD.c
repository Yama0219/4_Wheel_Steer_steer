//
// Created by kenke on 2023/01/12.
//

#include "IPD.h"

float ipd_e = 0;
float ipd_e_pre = 0;

float ipd_e_sum = 0;
float ipd_val_diff = 0;
float ipd_result = 0;

float ipd_pre_val = 0;
float ipd_pre_pre_val = 0;

float calc_output_IPD(float target, float curr_val, float dt) {
  ipd_e = target-curr_val;
  ipd_e_sum += ((ipd_e + ipd_e_pre)*dt/2.0); // trapezoid integral

  ipd_val_diff = (3 * curr_val - 4 * ipd_pre_val + ipd_pre_pre_val) / (2 * dt); // differential

  ipd_result = (-Kp * curr_val) + (Ki * ipd_e_sum) - (Kd * ipd_val_diff);

  ipd_e_pre = ipd_e;
  ipd_pre_pre_val = ipd_pre_val;
  ipd_pre_val = curr_val;

  return ipd_result;
}

