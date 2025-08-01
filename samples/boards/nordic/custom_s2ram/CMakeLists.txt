# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(nrf_custom_s2ram)

target_sources(app PRIVATE src/main.c)
if(CONFIG_SOC_NRF54H20_PM_S2RAM_OVERRIDE)
  target_sources(app PRIVATE src/custom_pm_s2ram.c)
#  zephyr_library_sources_ifdef(CONFIG_PM_S2RAM src/custom_pm_s2ram.c)
endif()
