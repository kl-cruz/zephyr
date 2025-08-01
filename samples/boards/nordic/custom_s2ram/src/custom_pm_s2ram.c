/*
 * Copyright (c) 2025 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdbool.h>
#include <zephyr/arch/common/pm_s2ram.h>
#include <hal/nrf_resetinfo.h>
#include "pm_s2ram.h"
#include "power.h"

int soc_s2ram_suspend(pm_s2ram_system_off_fn_t system_off)
{
	(void)(system_off);
	return -1;
}

void pm_s2ram_mark_set(void)
{
	/* empty */
}

bool pm_s2ram_mark_check_and_clear(void)
{
	uint32_t reset_reason = nrf_resetinfo_resetreas_local_get(NRF_RESETINFO);

	if (reset_reason != NRF_RESETINFO_RESETREAS_LOCAL_UNRETAINED_MASK) {
		// normal boot
		return false;
	}

	// s2ram boot 

	// Jump to application

	while(1)
	{
	}

	return true;
}
