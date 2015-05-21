

#pragma once
#ifndef COMPOSANT6_H
#define COMPOSANT6_H

#ifdef COMPOSANT0_EXPORTS
	#define COMPOSANT6_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT6_INTERFACE __declspec(dllimport)
#endif


#include <vector>
#include <string>


COMPOSANT6_INTERFACE char * getComposant6Version();
COMPOSANT6_INTERFACE std::vector<double> getChemin(int, double);
COMPOSANT6_INTERFACE std::vector<double> getN(int);
COMPOSANT6_INTERFACE std::vector<double> getSigma(int);

COMPOSANT6_INTERFACE std::vector<double> normalRandom(int);
COMPOSANT6_INTERFACE double getLocalVol(double strike, int maturity);


#endif
