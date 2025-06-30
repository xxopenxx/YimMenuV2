# RatMenu

RatMenu is an experimental menu inspired by YimMenu v2. It uses Dear ImGui to present a rectangular window interface.  For now it only exposes a **Self** tab with a handful of options.

## Building

You will need a C++ compiler, CMake and the development packages for OpenGL and GLFW.  The project builds as a DLL so it can be injected into a game process.

```bash
cmake -S . -B build
cmake --build build --config Release
```

The resulting library will be `RatMenu.dll` (or the platform equivalent).
