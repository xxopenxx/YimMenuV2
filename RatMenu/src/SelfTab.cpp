#include "SelfTab.hpp"
#include <imgui.h>

namespace RatMenu {
SelfTab::SelfTab()
    : m_options{{"Godmode", false},
                {"Super Jump", false},
                {"Super Run", false},
                {"Infinite Ammo", false},
                {"No Ragdoll", false},
                {"Noclip", false},
                {"Heal", false}}
{
}

void SelfTab::Draw()
{
    for (auto &opt : m_options)
    {
        ImGui::Checkbox(opt.first.c_str(), &opt.second);
    }
}
} // namespace RatMenu
