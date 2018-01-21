#include "stdafx.h"
#include "LockGuard.h"

template<class T>
LockGuard<T>::LockGuard()
{
}


template<class T>
LockGuard<T>::LockGuard(const T * objectToLock)
{
	lockableObject = objectToLock;
	isLocked = false;
	lockableObject->lock();
}

template<class T>
LockGuard<T>::~LockGuard()
{
	lockableObject->unlock();
}

template<class T>
void LockGuard<T>::lock()
{
	/*
	-while condition locking process
	-set isLocked to false to release
	*/
}

template<class T>
void LockGuard<T>::unlock()
{
	/*
	-Release locked process
	*/
}
