lbl_8059E750:
/* 8059E750  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8059E754  7C 08 02 A6 */	mflr r0
/* 8059E758  90 01 00 14 */	stw r0, 0x14(r1)
/* 8059E75C  4B FF FF B9 */	bl draw__10daScExit_cFv
/* 8059E760  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8059E764  7C 08 03 A6 */	mtlr r0
/* 8059E768  38 21 00 10 */	addi r1, r1, 0x10
/* 8059E76C  4E 80 00 20 */	blr 
