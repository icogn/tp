lbl_80CE7E14:
/* 80CE7E14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CE7E18  7C 08 02 A6 */	mflr r0
/* 80CE7E1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CE7E20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80CE7E24  7C 7F 1B 79 */	or. r31, r3, r3
/* 80CE7E28  41 82 00 1C */	beq lbl_80CE7E44
/* 80CE7E2C  3C A0 80 CF */	lis r5, __vt__10cCcD_GStts@ha /* 0x80CE8028@ha */
/* 80CE7E30  38 05 80 28 */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x80CE8028@l */
/* 80CE7E34  90 1F 00 00 */	stw r0, 0(r31)
/* 80CE7E38  7C 80 07 35 */	extsh. r0, r4
/* 80CE7E3C  40 81 00 08 */	ble lbl_80CE7E44
/* 80CE7E40  4B 5E 6E FD */	bl __dl__FPv
lbl_80CE7E44:
/* 80CE7E44  7F E3 FB 78 */	mr r3, r31
/* 80CE7E48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80CE7E4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CE7E50  7C 08 03 A6 */	mtlr r0
/* 80CE7E54  38 21 00 10 */	addi r1, r1, 0x10
/* 80CE7E58  4E 80 00 20 */	blr 
