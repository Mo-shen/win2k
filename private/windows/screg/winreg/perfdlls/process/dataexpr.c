/*++

Copyright (c) 1996  Microsoft Corporation

Module Name:

    dataexpr.c

Abstract:

    a file containing the constant data structures used by the Performance
    Monitor data for the Extended Process Performance data objects

Created:

    Bob Watson  22-Oct-1996

Revision History:

    None.

--*/

//  Include Files


#include <windows.h>
#include <winperf.h>
#include <ntprfctr.h>
#include <perfutil.h>
#include "dataexpr.h"

// dummy variable for field sizing.
static EXPROCESS_COUNTER_DATA   ecd;


//  Constant structure initializations
//      defined in dataexpr.h


EXPROCESS_DATA_DEFINITION ExProcessDataDefinition = {
    {   0,
        sizeof (EXPROCESS_DATA_DEFINITION),
        sizeof (PERF_OBJECT_TYPE),
        EXPROCESS_OBJECT_TITLE_INDEX,
        0,
        787,
        0,
        PERF_DETAIL_WIZARD,
        (sizeof(EXPROCESS_DATA_DEFINITION) - sizeof (PERF_OBJECT_TYPE))/
        sizeof(PERF_COUNTER_DEFINITION),
        0,
        0,
        UNICODE_CODE_PAGE,
        {0L,0L},
        {0L,0L}
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        784,
        0,
        785,
        0,
        0,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ProcessId),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ProcessId
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        776,
        0,
        777,
        0,
        -4,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageReservedBytes),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageReservedBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        778,
        0,
        779,
        0,
        -4,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageFreeBytes),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageFreeBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        780,
        0,
        781,
        0,
        -4,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedBytes),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        782,
        0,
        783,
        0,
        -4,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.FreeBytes),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->FreeBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        710,
        0,
        711,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.CommitNoAccess),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->CommitNoAccess
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        712,
        0,
        713,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.CommitReadOnly),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->CommitReadOnly
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        714,
        0,
        715,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.CommitReadWrite),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->CommitReadWrite
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        716,
        0,
        717,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.CommitWriteCopy),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->CommitWriteCopy
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        718,
        0,
        719,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.CommitExecute),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->CommitExecute
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        720,
        0,
        721,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.CommitExecuteRead),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->CommitExecuteRead
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        722,
        0,
        723,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.CommitExecuteWrite),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->CommitExecuteWrite
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        724,
        0,
        725,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.CommitExecuteWriteCopy),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->CommitExecuteWriteCopy
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        726,
        0,
        727,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedNoAccess),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedNoAccess
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        728,
        0,
        729,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedReadOnly),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedReadOnly
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        730,
        0,
        731,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedReadWrite),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedReadWrite
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        732,
        0,
        733,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedWriteCopy),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedWriteCopy
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        734,
        0,
        735,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedExecute),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedExecute
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        736,
        0,
        737,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedExecuteRead),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedExecuteRead
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        738,
        0,
        739,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedExecuteWrite),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedExecuteWrite
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        742,
        0,
        743,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ReservedExecuteWriteCopy),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ReservedExecuteWriteCopy
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        744,
        0,
        745,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.UnassignedNoAccess),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->UnassignedNoAccess
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        746,
        0,
        747,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.UnassignedReadOnly),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->UnassignedReadOnly
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        748,
        0,
        749,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.UnassignedReadWrite),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->UnassignedReadWrite
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        750,
        0,
        751,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.UnassignedWriteCopy),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->UnassignedWriteCopy
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        752,
        0,
        753,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.UnassignedExecute),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->UnassignedExecute
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        754,
        0,
        755,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.UnassignedExecuteRead),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->UnassignedExecuteRead
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        756,
        0,
        757,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.UnassignedExecuteWrite),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->UnassignedExecuteWrite
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        758,
        0,
        759,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.UnassignedExecuteWriteCopy),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->UnassignedExecuteWriteCopy
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        760,
        0,
        761,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageTotalNoAccess),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageTotalNoAccess
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        762,
        0,
        763,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageTotalReadOnly),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageTotalReadOnly
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        764,
        0,
        765,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageTotalReadWrite),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageTotalReadWrite
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        766,
        0,
        767,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageTotalWriteCopy),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageTotalWriteCopy
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        768,
        0,
        769,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageTotalExecute),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageTotalExecute
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        770,
        0,
        771,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageTotalExecuteRead),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageTotalExecuteRead
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        772,
        0,
        773,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageTotalExecuteWrite),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageTotalExecuteWrite
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        774,
        0,
        775,
        0,
        -5,
        PERF_DETAIL_WIZARD,
        PERF_COUNTER_LARGE_RAWCOUNT,
        sizeof (ecd.ImageTotalExecuteWriteCopy),
        (DWORD)(ULONG_PTR)&((PEXPROCESS_COUNTER_DATA)0)->ImageTotalExecuteWriteCopy
    }

};

