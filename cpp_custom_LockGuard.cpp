// cpp_custom_LockGuard.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConditionSignal.h"
#include <string>
#include <iostream>
#include <thread>

using namespace std;


int main()
{
	ConditionSignal conditionalSignal;
	thread t1 = thread(conditionalSignal.threadInput);
	thread t2 = thread(conditionalSignal.threadInput);

	t1.join();
	t2.join();

    return 0;
}
