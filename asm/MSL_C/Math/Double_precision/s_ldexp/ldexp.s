lbl_8036C2D0:
/* 8036C2D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8036C2D4  7C 08 02 A6 */	mflr r0
/* 8036C2D8  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 8036C2DC  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 8036C2E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8036C2E4  3C 00 7F F0 */	lis r0, 0x7ff0
/* 8036C2E8  54 A4 00 56 */	rlwinm r4, r5, 0, 1, 0xb
/* 8036C2EC  7C 04 00 00 */	cmpw r4, r0
/* 8036C2F0  D8 21 00 08 */	stfd f1, 8(r1)
/* 8036C2F4  41 82 00 14 */	beq lbl_8036C308
/* 8036C2F8  40 80 00 58 */	bge lbl_8036C350
/* 8036C2FC  2C 04 00 00 */	cmpwi r4, 0
/* 8036C300  41 82 00 2C */	beq lbl_8036C32C
/* 8036C304  48 00 00 4C */	b lbl_8036C350
lbl_8036C308:
/* 8036C308  54 A0 03 3F */	clrlwi. r0, r5, 0xc
/* 8036C30C  40 82 00 10 */	bne lbl_8036C31C
/* 8036C310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036C314  2C 00 00 00 */	cmpwi r0, 0
/* 8036C318  41 82 00 0C */	beq lbl_8036C324
lbl_8036C31C:
/* 8036C31C  38 00 00 01 */	li r0, 1
/* 8036C320  48 00 00 34 */	b lbl_8036C354
lbl_8036C324:
/* 8036C324  38 00 00 02 */	li r0, 2
/* 8036C328  48 00 00 2C */	b lbl_8036C354
lbl_8036C32C:
/* 8036C32C  54 A0 03 3F */	clrlwi. r0, r5, 0xc
/* 8036C330  40 82 00 10 */	bne lbl_8036C340
/* 8036C334  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036C338  2C 00 00 00 */	cmpwi r0, 0
/* 8036C33C  41 82 00 0C */	beq lbl_8036C348
lbl_8036C340:
/* 8036C340  38 00 00 05 */	li r0, 5
/* 8036C344  48 00 00 10 */	b lbl_8036C354
lbl_8036C348:
/* 8036C348  38 00 00 03 */	li r0, 3
/* 8036C34C  48 00 00 08 */	b lbl_8036C354
lbl_8036C350:
/* 8036C350  38 00 00 04 */	li r0, 4
lbl_8036C354:
/* 8036C354  2C 00 00 02 */	cmpwi r0, 2
/* 8036C358  40 81 01 2C */	ble lbl_8036C484
/* 8036C35C  C8 02 D1 10 */	lfd f0, lit_91(r2)
/* 8036C360  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8036C364  40 82 00 08 */	bne lbl_8036C36C
/* 8036C368  48 00 01 1C */	b lbl_8036C484
lbl_8036C36C:
/* 8036C36C  80 A1 00 08 */	lwz r5, 8(r1)
/* 8036C370  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 8036C374  54 A4 65 7F */	rlwinm. r4, r5, 0xc, 0x15, 0x1f
/* 8036C378  40 82 00 4C */	bne lbl_8036C3C4
/* 8036C37C  54 A0 00 7E */	clrlwi r0, r5, 1
/* 8036C380  7C C0 03 79 */	or. r0, r6, r0
/* 8036C384  40 82 00 08 */	bne lbl_8036C38C
/* 8036C388  48 00 00 FC */	b lbl_8036C484
lbl_8036C38C:
/* 8036C38C  C8 21 00 08 */	lfd f1, 8(r1)
/* 8036C390  3C 80 FF FF */	lis r4, 0xFFFF /* 0xFFFF3CB0@ha */
/* 8036C394  C8 02 D1 18 */	lfd f0, lit_92(r2)
/* 8036C398  38 04 3C B0 */	addi r0, r4, 0x3CB0 /* 0xFFFF3CB0@l */
/* 8036C39C  7C 03 00 00 */	cmpw r3, r0
/* 8036C3A0  FC 21 00 32 */	fmul f1, f1, f0
/* 8036C3A4  D8 21 00 08 */	stfd f1, 8(r1)
/* 8036C3A8  80 A1 00 08 */	lwz r5, 8(r1)
/* 8036C3AC  54 A4 65 7E */	rlwinm r4, r5, 0xc, 0x15, 0x1f
/* 8036C3B0  38 84 FF CA */	addi r4, r4, -54
/* 8036C3B4  40 80 00 10 */	bge lbl_8036C3C4
/* 8036C3B8  C8 02 D1 20 */	lfd f0, lit_93(r2)
/* 8036C3BC  FC 20 00 72 */	fmul f1, f0, f1
/* 8036C3C0  48 00 00 C4 */	b lbl_8036C484
lbl_8036C3C4:
/* 8036C3C4  2C 04 07 FF */	cmpwi r4, 0x7ff
/* 8036C3C8  40 82 00 10 */	bne lbl_8036C3D8
/* 8036C3CC  C8 01 00 08 */	lfd f0, 8(r1)
/* 8036C3D0  FC 20 00 2A */	fadd f1, f0, f0
/* 8036C3D4  48 00 00 B0 */	b lbl_8036C484
lbl_8036C3D8:
/* 8036C3D8  7C 84 1A 14 */	add r4, r4, r3
/* 8036C3DC  2C 04 07 FE */	cmpwi r4, 0x7fe
/* 8036C3E0  40 81 00 1C */	ble lbl_8036C3FC
/* 8036C3E4  C8 22 D1 28 */	lfd f1, lit_94(r2)
/* 8036C3E8  C8 41 00 08 */	lfd f2, 8(r1)
/* 8036C3EC  4B FF FC 15 */	bl copysign
/* 8036C3F0  C8 02 D1 28 */	lfd f0, lit_94(r2)
/* 8036C3F4  FC 20 00 72 */	fmul f1, f0, f1
/* 8036C3F8  48 00 00 8C */	b lbl_8036C484
lbl_8036C3FC:
/* 8036C3FC  2C 04 00 00 */	cmpwi r4, 0
/* 8036C400  40 81 00 1C */	ble lbl_8036C41C
/* 8036C404  54 A3 03 00 */	rlwinm r3, r5, 0, 0xc, 0
/* 8036C408  54 80 A0 16 */	slwi r0, r4, 0x14
/* 8036C40C  7C 60 03 78 */	or r0, r3, r0
/* 8036C410  90 01 00 08 */	stw r0, 8(r1)
/* 8036C414  C8 21 00 08 */	lfd f1, 8(r1)
/* 8036C418  48 00 00 6C */	b lbl_8036C484
lbl_8036C41C:
/* 8036C41C  2C 04 FF CA */	cmpwi r4, -54
/* 8036C420  41 81 00 44 */	bgt lbl_8036C464
/* 8036C424  3C 80 00 01 */	lis r4, 0x0001 /* 0x0000C350@ha */
/* 8036C428  38 04 C3 50 */	addi r0, r4, 0xC350 /* 0x0000C350@l */
/* 8036C42C  7C 03 00 00 */	cmpw r3, r0
/* 8036C430  40 81 00 1C */	ble lbl_8036C44C
/* 8036C434  C8 22 D1 28 */	lfd f1, lit_94(r2)
/* 8036C438  C8 41 00 08 */	lfd f2, 8(r1)
/* 8036C43C  4B FF FB C5 */	bl copysign
/* 8036C440  C8 02 D1 28 */	lfd f0, lit_94(r2)
/* 8036C444  FC 20 00 72 */	fmul f1, f0, f1
/* 8036C448  48 00 00 3C */	b lbl_8036C484
lbl_8036C44C:
/* 8036C44C  C8 22 D1 20 */	lfd f1, lit_93(r2)
/* 8036C450  C8 41 00 08 */	lfd f2, 8(r1)
/* 8036C454  4B FF FB AD */	bl copysign
/* 8036C458  C8 02 D1 20 */	lfd f0, lit_93(r2)
/* 8036C45C  FC 20 00 72 */	fmul f1, f0, f1
/* 8036C460  48 00 00 24 */	b lbl_8036C484
lbl_8036C464:
/* 8036C464  38 04 00 36 */	addi r0, r4, 0x36
/* 8036C468  54 A3 03 00 */	rlwinm r3, r5, 0, 0xc, 0
/* 8036C46C  54 00 A0 16 */	slwi r0, r0, 0x14
/* 8036C470  C8 22 D1 30 */	lfd f1, lit_95(r2)
/* 8036C474  7C 60 03 78 */	or r0, r3, r0
/* 8036C478  90 01 00 08 */	stw r0, 8(r1)
/* 8036C47C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8036C480  FC 21 00 32 */	fmul f1, f1, f0
lbl_8036C484:
/* 8036C484  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8036C488  7C 08 03 A6 */	mtlr r0
/* 8036C48C  38 21 00 20 */	addi r1, r1, 0x20
/* 8036C490  4E 80 00 20 */	blr 
