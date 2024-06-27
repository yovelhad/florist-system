#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> bouquet) : bouquet(bouquet), arranged(false)
{
}

void FlowersBouquet::arrange()
{
    arranged = true;
}

std::string  FlowersBouquet:: toString()
{
	return join(bouquet, ", ");
}

std::string FlowersBouquet::join(std::vector<std::string> v, std::string delim)
{
	std::string ans = "";
	for (int i = 0; i < v.size(); i++) {
		ans += v[i];
		if (i < v.size() - 1) {
			ans += delim;
		}
	}
	ans += ".";
	return ans;
}
