.386
.MODEL FLAT, STDCALL
.STACK 4096
OPTION CASEMAP:NONE
ExitProcess PROTO, dwExitCode:DWORD
.DATA
 countA DWORD 40
 limitByte DD 200 ; or DWORD
 total DWORD ?
 slots DWORD 12 DUP(?)
 slotCount DWORD ?
.CODE
main PROC
 mov eax, total ; fixed fault 1
 add eax, 25
 mov total, eax
 mov eax, limitByte ; fixed fault 2
 add al, 20 ; fixed fault 3
 mov ebx, LENGTHOF slots
 mov slotCount, ebx ; fixed fault 4
 INVOKE ExitProcess, 0
main ENDP
END main