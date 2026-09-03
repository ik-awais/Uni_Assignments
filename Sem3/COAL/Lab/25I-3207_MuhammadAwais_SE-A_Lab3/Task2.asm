.386
.MODEL FLAT, STDCALL
.STACK 4096

OPTION CASEMAP:NONE

ExitProcess PROTO, dwExitCode:DWORD

.DATA

holdWater DD 1840
holdRations DD 960
holdOxygen DD 275
holdParts DD 88
updateWater DD ?
updateRations DD ?
updateOxygen DD ?
updateParts DD ?
totalAfter DD ?

.CODE

main PROC
mov eax, holdWater
add eax, 400
mov updateWater, eax
mov eax, holdRations
add eax, 250
mov updateRations, eax
mov eax, holdOxygen
add eax, 60
mov updateOxygen, eax
mov eax, holdParts
add eax, 0
mov updateParts, eax
mov eax, updateWater
sub eax, 130
mov updateWater, eax
mov eax, updateRations
sub eax, 145
mov updateRations, eax
mov eax, updateOxygen
sub eax, 12
mov updateOxygen, eax
DEC updateParts
DEC updateParts
mov eax, totalAfter
add eax, updateWater
add eax, updateRations
add eax, updateOxygen
add eax, updateParts
mov totalAfter, eax

 INVOKE ExitProcess, 0
main ENDP
END main