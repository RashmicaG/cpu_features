// Copyright 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "hwcaps_for_testing.h"
#include <string.h>

namespace cpu_features {

namespace {
static char p[100];
static char b_p[100];
static auto* const g_hardware_capabilities = new HardwareCapabilities();
static auto* const g_platform_types = new PlatformType();
}  // namespace

void SetHardwareCapabilities(uint32_t hwcaps, uint32_t hwcaps2) {
  g_hardware_capabilities->hwcaps = hwcaps;
  g_hardware_capabilities->hwcaps2 = hwcaps2;
}

HardwareCapabilities GetHardwareCapabilities(void) {
  return *g_hardware_capabilities;
}

void SetPlatformTypes(const char *platform, const char *base_platform) {
    g_platform_types->platform = p;
    g_platform_types->base_platform = b_p;

    if (g_platform_types->platform != NULL)
        strcpy(g_platform_types->platform, platform);
    if (g_platform_types->base_platform != NULL)
        strcpy(g_platform_types->base_platform, base_platform);
}

PlatformType GetPlatformType(void) {
  return *g_platform_types;
}
}  // namespace cpu_features
