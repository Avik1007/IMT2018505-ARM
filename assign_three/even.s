; Avik Bhatnagar IMT2018505	
	AREA greatest, CODE, READONLY
	EXPORT __main 
	IMPORT printMsg	
	ENTRY
      
__main  FUNCTION
	
	  MOV R0,#0x20000000
	  MOV R3,#0x00000000
	  ADD R1,R0, #0x00000004
	  ADD R2, R1, #0x00000004
	  MOV R4, #0x1
	  MOV R5, #0x2
	  MOV R6, #0x5
	  STR R4, [R0]
	  STR R5, [R1]
	  STR R6, [R2]
	  LDR R7, [R0]
	  LDR R8, [R1]
	  LDR R9, [R2]
      MOV R0,#01
	  
	  TST R7,#01     
      BNE J1
	  ADD R3,#01

J1	  TST R8,#01     
      BNE J2
	  ADD R3,#01

J2	  TST R9,#01      
      BNE J3
	  ADD R3,#01

J3 	  MOV R0, R3
	  BL printMsg
stop B stop  
      END