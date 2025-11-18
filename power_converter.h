#pragma once

#ifndef POWER_CONVERTER_H
#define POWER_CONVERTER_H


double calculate_power(double voltage, double current);
double calculate_energy(double power, double time);
double rate_per_kwh(double energy);
double cost_over_time(double energy, double rate);


#endif
