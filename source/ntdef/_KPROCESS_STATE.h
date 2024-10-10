#pragma once
/* ------------------ */

//0x4 bytes (sizeof)
enum _KPROCESS_STATE
{
    ProcessInMemory = 0,
    ProcessOutOfMemory = 1,
    ProcessInTransition = 2,
    ProcessOutTransition = 3,
    ProcessInSwap = 4,
    ProcessOutSwap = 5,
    ProcessRetryOutSwap = 6,
    ProcessAllSwapStates = 7
};
