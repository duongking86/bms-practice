#ifndef BMS_PROTECTION_H
#define BMS_PROTECTION_H

#include <stdint.h>
#include <stdbool.h>

#define CELL_MV_INVALID  0xFFFFu   /* giá trị sensor trả về khi lỗi */

/* true nếu điện áp cell (mV) vượt ngưỡng OV */
bool is_over_voltage(uint16_t cell_mv, uint16_t threshold_mv);

#endif