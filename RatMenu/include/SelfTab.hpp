#pragma once

#include <map>
#include <string>

namespace RatMenu {
class SelfTab {
public:
    SelfTab();
    void Draw();
private:
    std::map<std::string, bool> m_options;
};
}
