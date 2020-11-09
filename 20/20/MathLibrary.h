#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport)
#else
#define MATHFUNCSDLL_API __declspec(dllimport)
#endif
#pragma once

namespace MathFuncs

{

	class MyMathFuncs

	{

	public:
		static MATHFUNCSDLL_API double Add(double a, double b);		// Return a + b
		static MATHFUNCSDLL_API double Subtract(double a, double b);		// Return a - b
		static MATHFUNCSDLL_API double Multiply(double a, double b);		// Return a * b
		static MATHFUNCSDLL_API double Divide(double a, double b);		// Return a / b
		static MATHFUNCSDLL_API double Pow(double a, double b);

	};

}

#include "pch.h"
#include "MathFuncsDll.h"
#include <stdexcept>

using namespace std;

namespace MathFuncs
{
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyMathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyMathFuncs::Divide(double a, double b)
	{
		if (b == 0)
		{
			throw invalid_argument("b cannot be zero!");
		}
		return a / b;
	}

	double MyMathFuncs::Pow(double a, double b)
	{
		if (b == 0.5)
		{
			a = sqrt(a);
			return a;
		}

		for (int i = 0; i < b - 1; i++)
			a *= a;
		if (b == 0)
			return 1;
		else
			return a;
	}
}