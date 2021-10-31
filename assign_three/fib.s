; Avik Bhatnagar IMT2018505
	AREA     appcode, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg
		
	ENTRY 

__main FUNCTION
		MOV R6, #10
		MOV R1, #00
		MOV R2, #01

loop    CMP R6, #00
		BLE stop       

		MOV R4, R2
		ADD R2, R2, R1
		MOV R5, R2
		MOV R0, R2
		BL printMsg
		MOV R2, R5
		MOV R1, R4
		SUB R6, #01
		B loop         

stop B stop 
	ENDFUNC
	
	END
