#include <stdio.h>
#include "bms_protection.h"

#define OV_THRESHOLD_MV  4200u

static int failures = 0;

#define CHECK(name, cond)                         \
    do {                                          \
        if (cond) { printf("PASS: %s\n", name); } \
        else      { printf("FAIL: %s\n", name); failures++; } \
    } while (0)

int main(void)
{
    CHECK("above threshold -> OV",  is_over_voltage(4250u, OV_THRESHOLD_MV) == true);
    CHECK("normal voltage -> no OV", is_over_voltage(3700u, OV_THRESHOLD_MV) == false);
    CHECK("at threshold -> no OV",   is_over_voltage(4200u, OV_THRESHOLD_MV) == false);

    printf("%d failure(s)\n", failures);
    return failures;
}