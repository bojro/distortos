/**
 * \file
 * \brief Declarations of low-level SPI master drivers for STM32F4
 *
 * \author Copyright (C) 2016 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef SOURCE_CHIP_STM32_STM32F4_INCLUDE_DISTORTOS_CHIP_SPIS_HPP_
#define SOURCE_CHIP_STM32_STM32F4_INCLUDE_DISTORTOS_CHIP_SPIS_HPP_

#include "distortos/distortosConfiguration.h"

namespace distortos
{

namespace chip
{

class ChipSpiMasterLowLevel;

/*---------------------------------------------------------------------------------------------------------------------+
| global objects
+---------------------------------------------------------------------------------------------------------------------*/

#ifdef CONFIG_CHIP_SPI1_ENABLE

/// SPI master low-level driver for SPI1
extern ChipSpiMasterLowLevel spi1;

#endif	// def CONFIG_CHIP_SPI1_ENABLE

#ifdef CONFIG_CHIP_SPI2_ENABLE

/// SPI master low-level driver for SPI2
extern ChipSpiMasterLowLevel spi2;

#endif	// def CONFIG_CHIP_SPI2_ENABLE

#ifdef CONFIG_CHIP_SPI3_ENABLE

/// SPI master low-level driver for SPI3
extern ChipSpiMasterLowLevel spi3;

#endif	// def CONFIG_CHIP_SPI3_ENABLE

#ifdef CONFIG_CHIP_SPI4_ENABLE

/// SPI master low-level driver for SPI4
extern ChipSpiMasterLowLevel spi4;

#endif	// def CONFIG_CHIP_SPI4_ENABLE

#ifdef CONFIG_CHIP_SPI5_ENABLE

/// SPI master low-level driver for SPI5
extern ChipSpiMasterLowLevel spi5;

#endif	// def CONFIG_CHIP_SPI5_ENABLE

#ifdef CONFIG_CHIP_SPI6_ENABLE

/// SPI master low-level driver for SPI6
extern ChipSpiMasterLowLevel spi6;

#endif	// def CONFIG_CHIP_SPI6_ENABLE

}	// namespace chip

}	// namespace distortos

#endif	// SOURCE_CHIP_STM32_STM32F4_INCLUDE_DISTORTOS_CHIP_SPIS_HPP_
