lbl_8045D268:
/* 8045D268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045D26C  7C 08 02 A6 */	mflr r0
/* 8045D270  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045D274  4B FF FF 91 */	bl draw__10daDmidna_cFv
/* 8045D278  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045D27C  7C 08 03 A6 */	mtlr r0
/* 8045D280  38 21 00 10 */	addi r1, r1, 0x10
/* 8045D284  4E 80 00 20 */	blr 
