#pragma once

#include <memory>

using hello_funcion = void (*)();

extern "C" {
void hello();
}
