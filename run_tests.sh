#!/bin/bash
gcc -Wall -Wextra -Isrc src/bms_protection.c test/test_bms_protection.c -o test_runner || exit 1
./test_runner
result=$?
echo "exit code: $result"
exit $result