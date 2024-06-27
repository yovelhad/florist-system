#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <iterator> 


class FlowersBouquet
{
private:
	std::vector<std::string> bouquet;
	bool arranged;

public:
	FlowersBouquet(std::vector<std::string>);
	void arrange();
	//std::string to_string();
	std::string toString();
	std::vector<std::string> getBouquet();
	static std::string join(std::vector<std::string>, std::string delim);
};

