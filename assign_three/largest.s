; Avik Bhatnagar IMT2018505	
	AREA greatest, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg	
	ENTRY
      
__main  FUNCTION
	
	MOV R0,#0x20000000
	ADD R1,R0, #0x00000005 
	ADD R2, R1, #0x00000007
	MOV R4, #0x1
	MOV R5, #0x9
	MOV R6, #0x3
	STR R4, [R0]
	STR R5, [R1]
	STR R6, [R2]
	LDR R7, [R0]
	LDR R8, [R1]
	LDR R9, [R2]	
	CMP R7, R8
	ITE GT
	MOVGT R10, R7
	MOVLE R10, R8
	
	CMP R9, R10
	ITE GT
	MOVGT R4, R9
	MOVLE R4, R10
	MOV R0,R4
	BL printMsg
stop B stop
	ENDFUNC
	END