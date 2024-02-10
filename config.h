/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Handedness. */
#define MASTER_RIGHT

/* PMW3360 settings. */
// see mappings in promicro_to_promicro_rp2040
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN B1 // GP22
#define SPI_MISO_PIN B3 // GP20
#define SPI_MOSI_PIN B2 // GP23
#define POINTING_DEVICE_CS_PIN D1 // GP2
// #define SERIAL_USART_TX_PIN
