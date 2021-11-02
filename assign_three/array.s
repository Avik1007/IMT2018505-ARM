; Avik Bhatnagar IMT2018505	
	AREA greatest, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg	
	ENTRY


__main  FUNCTION
	MOV R0, #0x20000000
	MOV R2, #03			
	MOV R3, #01
	
LOOP1	SUBS R2, R2, #01
		STR R3, [R0]
		ADD R3, #01
		ADD R0, #04
		CMP R2, #00
		BNE LOOP1

		MOV R0, #0x20000000
		LDR R1, [R0]
		MOV R2, #05	

	

J1		ADD R0,R0,#0x4
        LDR R4,[R0] 
		CMP R5,R4
		BGT J2
		MOV R5,R4  
		
J2   	SUBS R1,R1,#01  
		CMP R1,#00
		BNE J1
		MOV R0,R5
		BL printMsg
stop    B stop 
	 ENDFUNC
	 END