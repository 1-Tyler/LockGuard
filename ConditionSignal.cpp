#include "stdafx.h"
#include "ConditionSignal.h"
#include <iostream>
using namespace std;


ConditionSignal::ConditionSignal()
{
}


ConditionSignal::~ConditionSignal()
{
}

void ConditionSignal::threadInput()
{
	string input;
	while (true)
	{
		//Lock thread
		if (cin.get() == '\n') return;
	}
	//Unlock thread
}
