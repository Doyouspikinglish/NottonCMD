#pragma once
#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

inline void SHW_USER_TIME() {
	auto now = std::chrono::system_clock::now();
	auto now_time_t = std::chrono::system_clock::to_time_t(now);
	std::tm local_tm{};
#ifdef _WIN32
	localtime_s(&local_tm, &now_time_t);
#else
	localtime_r(&now_time_t, &local_tm);
#endif
	std::cout << "current time: " << std::put_time(&local_tm, "%Y-%m-%d %H:%M:%S") << "\n";
}
