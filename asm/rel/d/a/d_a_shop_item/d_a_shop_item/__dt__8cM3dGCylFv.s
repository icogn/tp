lbl_8059F294:
/* 8059F294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8059F298  7C 08 02 A6 */	mflr r0
/* 8059F29C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8059F2A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8059F2A4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8059F2A8  41 82 00 1C */	beq lbl_8059F2C4
/* 8059F2AC  3C A0 80 5A */	lis r5, __vt__8cM3dGCyl@ha /* 0x8059F4EC@ha */
/* 8059F2B0  38 05 F4 EC */	addi r0, r5, __vt__8cM3dGCyl@l /* 0x8059F4EC@l */
/* 8059F2B4  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8059F2B8  7C 80 07 35 */	extsh. r0, r4
/* 8059F2BC  40 81 00 08 */	ble lbl_8059F2C4
/* 8059F2C0  4B D2 FA 7D */	bl __dl__FPv
lbl_8059F2C4:
/* 8059F2C4  7F E3 FB 78 */	mr r3, r31
/* 8059F2C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8059F2CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8059F2D0  7C 08 03 A6 */	mtlr r0
/* 8059F2D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8059F2D8  4E 80 00 20 */	blr 
