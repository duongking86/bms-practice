#include "bms_protection.h"

bool is_over_voltage(uint16_t cell_mv, uint16_t threshold_mv)
{
	if (cell_mv == CELL_MV_INVALID)
	{
		return false;
	}
    return (cell_mv > threshold_mv);
}