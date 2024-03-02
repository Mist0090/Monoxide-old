#pragma once
#include "monoxide.h"

VOID
GetRandomPath(
    _Inout_ PWSTR szRandom,
    _In_ INT nLength
);

VOID
WINAPI
MessageBoxThread( VOID );

#ifndef safe
VOID
WINAPI
EnumGlobalWnd( VOID );

VOID
WINAPI
CursorClicker( VOID );

VOID
WINAPI
CursorMess( VOID );
#endif

VOID
WINAPI
CursorDraw( VOID );