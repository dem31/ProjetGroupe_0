// Composant6.cpp : définit les fonctions exportées pour l'application DLL.
//

#include "stdafx.h"
#include "Composant6.h"
#include "Composant6Version.h"
#include <math.h>
#include <cstdlib>
#include <ctime>


const int T = 504;
std::vector<double> sigma;
std::vector<double> N;



char * getComposant6Version()
{
	return "Composant 6 version " ;
}


std::vector<double> getSigma(int days)
{
	return sigma;
}



std::vector<double> getN(int days)
{
	return normalRandom(days);
}



std::vector<double> getChemin(int days, double spot)
{
	std::vector<double> v(days+1);
	N = getN(days);

	v.at(0) = spot;

	double volatility ;
	for (int i = 1; i<days; i++){
		double x = v.at(i - 1);
		sigma.at(i)= getLocalVol(v.at(i-1)/100, days);
		v.at(i) = x*(1 + sigma[i]*N[i] / sqrt(252));
	}
	return v;
}


double getLocalVol(double a1, int b1)
{
	return 3.0;
}

std::vector<double> normalRandom(int days)
{
	std::vector<double> v(days);
	return v;
}


