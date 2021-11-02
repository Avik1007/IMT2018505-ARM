; Avik Bhatnagar IMT2018505	
	AREA even, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg	
	ENTRY
      
__main  FUNCTION
	MOV R0, #0x20000000
    MOV R1, #01          
	MOV R2, #05				
	MOV R3, #06
	
LOOP1	SUBS R2, R2, #01
		STR R3, [R0]
		ADD R3, #01
		ADD R0, #04
		CMP R2, #00
		BNE LOOP1

		MOV R0, #0x20000000
		LDR R4, [R0]
		MOV R2, #05

LOOP2	TST R4, R1
		BNE INCR
		ADD R12, #01
INCR	ADD R0, #04
		LDR R4, [R0]
		SUBS R2, R2, #01
		CMP R2, #00
		BNE LOOP2
		MOV R0, R12
		BL printMsg
stop	B stop
		ENDFUNC
		END