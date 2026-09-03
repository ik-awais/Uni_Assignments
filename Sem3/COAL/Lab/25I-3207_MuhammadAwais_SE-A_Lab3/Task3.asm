.386
.MODEL FLAT, STDCALL
.STACK 4096

OPTION CASEMAP:NONE

ExitProcess PROTO, dwExitCode:DWORD

.DATA

frameID DWORD 0
sensorLog WORD 64 DUP(0)
statusBits BYTE 16 DUP(0)
stationName BYTE "ISS MODULE C", 0
spare DWORD 24 DUP(?)


.CODE

main PROC
mov eax, TYPE frameID
mov ebx, LENGTHOF frameID
mov ecx, SIZEOF frameID
mov eax, TYPE sensorLog
mov ebx, LENGTHOF sensorLog
mov ecx, SIZEOF sensorLog
mov eax, TYPE statusBits
mov ebx, LENGTHOF statusBits
mov ecx, SIZEOF statusBits
mov eax, TYPE stationName
	mov ebx, LENGTHOF stationName
mov ecx, SIZEOF stationName
mov eax, TYPE spare
mov ebx, LENGTHOF spare
mov ecx, SIZEOF spare

 INVOKE ExitProcess, 0
main ENDP
END main