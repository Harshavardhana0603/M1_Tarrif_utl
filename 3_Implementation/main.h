//**
 * @file main.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __BILL_H__
#define __BILL_H__
#include <stdio.h>

struct bill
{
    int units;
    int prevreading;
    int cur_reading;
    float fixed_charges;
    float ED_charges;
    char group;
};

#endif