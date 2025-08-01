/*
 * Copyright (c) 2025 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>

int main(void)
{
	printf("Hello Custom S2RAM! %s\n", CONFIG_BOARD_TARGET);

	return 0;
}
