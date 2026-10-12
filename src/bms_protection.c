#include <stdint.h>
#include <stdbool.h>

#define CELL_MV_INVALID  0xFFFFu    /* giá trị sensor trả về khi lỗi */

/* Trả về true nếu điện áp cell vượt ngưỡng OV */
bool is_over_voltage(uint16_t cell_mv, uint16_t threshold_mv)
{
    return (cell_mv > threshold_mv);
}