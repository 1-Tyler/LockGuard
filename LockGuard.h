#pragma once

template<class T>
class LockGuard
{
private:
	T * lockableObject;
	std::atomic<bool> isLocked;
public:
	LockGuard(const T* objectToLock);
	~LockGuard();

	void lock();
	void unlock();
};
