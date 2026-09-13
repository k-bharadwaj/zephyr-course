/*
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/init.h>
#include <zephyr/sys/printk.h>

static int our_board_from_scratch_init(void)
{
	printk("Board Initialized\n");

	return 0;
}

SYS_INIT(our_board_from_scratch_init, POST_KERNEL, 90);
