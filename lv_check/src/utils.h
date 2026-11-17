#pragma once

#include <ctime>
#include <string>

namespace Utils {
	std::string GetDate() {
		std::time_t now = std::time(nullptr);

		std::tm localDate{};

		localtime_s(&localDate, &now);

		int yyyy = localDate.tm_year + 1900;
		int MM = localDate.tm_mon + 1;
		int dd = localDate.tm_mday;

		int HH = localDate.tm_hour;
		int mm = localDate.tm_min;

		return
			std::to_string(yyyy) + "/" +
			std::to_string(MM) + "/" +
			std::to_string(dd) + " " +
			std::to_string(HH) + ":" +
			std::to_string(mm);
	}
}