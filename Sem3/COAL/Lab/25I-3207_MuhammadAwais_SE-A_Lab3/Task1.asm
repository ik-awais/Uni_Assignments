.386
.MODEL FLAT, STDCALL
.STACK 4096

OPTION CASEMAP:NONE

ExitProcess PROTO, dwExitCode:DWORD

.DATA

 ; --- simple variables ---

 sensorA DWORD 120
 sensorB DWORD 45
 sensorC DWORD 30
 sensorD DWORD 18
 result DWORD ?

 ; --- an array ---

 readings DWORD 10, 20, 30, 40, 50

 ; --- a DUP allocation ---

 buffer BYTE 32 DUP(0)

 ; --- a string ---

 stationName BYTE "COAL LAB", 0

 ; --- places to store our findings ---

 elemCount DWORD ?
 elemSize DWORD ?
 totalBytes DWORD ?

.CODE

main PROC

 ; ---- Part 1: arithmetic -------------------------------

 mov eax, sensorA ; EAX = 120
 add eax, sensorB ; EAX = 165
 mov ebx, sensorC ; EBX = 30
 add ebx, sensorD ; EAX = 48
 sub eax, ebx ; EAX = 117
 mov result, eax ; result = 117

 ; ---- Part 2: describe the array -----------------------

 mov eax, LENGTHOF readings ; EAX = 5
 mov elemCount, eax
 mov eax, TYPE readings ; EAX = 4
 mov elemSize, eax
 mov eax, SIZEOF readings ; EAX = 20
 mov totalBytes, eax

 ; ---- Part 3: the string -------------------------------

 mov ecx, LENGTHOF stationName ; ECX = 9 (8 chars + terminator)
 dec ecx ; ECX = 8 (characters only)
 mov al, stationName ; AL = 43h = 'C'
 mov edx, OFFSET stationName ; EDX = address of the string

 ; ---- Part 4: the buffer -------------------------------

 mov ebx, SIZEOF buffer ; EBX = 32
 INVOKE ExitProcess, 0
main ENDP
END main