#
# file: distortos-sources.cmake
#
# author: Copyright (C) 2018-2020 Kamil Szczygiel https://distortec.com https://freddiechopin.info
#
# This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
# distributed with this file, You can obtain one at https://mozilla.org/MPL/2.0/.
#

target_include_directories(distortos PUBLIC
		${CMAKE_CURRENT_LIST_DIR}/include)

target_sources(distortos PRIVATE
		${CMAKE_CURRENT_LIST_DIR}/STM32-GPIOv2-InputPin.cpp
		${CMAKE_CURRENT_LIST_DIR}/STM32-GPIOv2-OutputPin.cpp
		${CMAKE_CURRENT_LIST_DIR}/STM32-GPIOv2.cpp)

doxygen(INPUT ${CMAKE_CURRENT_LIST_DIR} INCLUDE_PATH ${CMAKE_CURRENT_LIST_DIR}/include)
