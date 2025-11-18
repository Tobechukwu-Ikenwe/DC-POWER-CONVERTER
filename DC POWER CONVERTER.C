#include <stdio.h>
#include <stdlib.h>
#include "power_converter.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
	double voltage = 0.0;
	double current = 0.0;
	double time = 0.0;
	printf("Welcome to the Dc Power Converter please input Voltage, current and time");
	printf("Input Voltage (V): ");
	scanf_s("%lf/n ", voltage);
	printf("Input Current (A): ");
	scanf_s("%lf/n ", current);
	printf("Input Time applied for in seconds (H): ");
	scanf_s("%lf/n ", time);

	if (voltage < 0 || current < 0 || time < 0) {
		printf("Error: Voltage, Current, and Time must be non-negative values.\n");
		return 1;
	}

	double power = calculate_power(voltage, current);
	double energy = calculate_energy(power, time);
	double rate = rate_per_kwh(energy);
	double cost = cost_over_time(energy, rate);


	printf("Calculated Power: %.2f W\n", power);
	printf("Calculated Energy: %.2f J\n", energy);
	printf("Rate per kWh: $%.4f\n", rate);
	printf("Total Cost over Time: $%.2f\n", cost);

}




double calculate_power(double voltage, double current) {
	double power = 0.0;
	power =  voltage * current;
	return power;
}

double calculate_energy(double power, double time) {
	double energy = 0.0;
	energy = power * time;
	return energy;

}

double rate_per_kwh(double energy) {
	double rate =0.0;
	rate = (energy/3600000) * 0.12;
	return rate;
}
double cost_over_time(double energy, double rate) {
	double cost = 0.0;

	return (energy / 1000) * rate;
	return cost;
}
