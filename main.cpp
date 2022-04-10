#include <range/v3/algorithm/move.hpp>
#include <range/v3/iterator/insert_iterators.hpp>

#include <string>
#include <vector>

struct String
{
    String(std::string&& data) : mData(data) {}
    std::string mData;
};

int main()
{
    std::vector<std::string> v1{ "1","2","3","4","5","6","7" };
    std::vector<String> v2;
    ::ranges::move(v1, ::ranges::back_inserter(v2));
}