#pragma once

#include "plugin_global.h"

using hello_funcion = void (*)();

extern "C" {
void PLUIGN_SHARED_EXPORT hello();
}
