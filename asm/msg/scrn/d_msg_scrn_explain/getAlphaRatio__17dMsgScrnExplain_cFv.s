lbl_8023E5CC:
/* 8023E5CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023E5D0  88 03 00 60 */	lbz r0, 0x60(r3)
/* 8023E5D4  2C 00 00 02 */	cmpwi r0, 2
/* 8023E5D8  41 82 00 20 */	beq lbl_8023E5F8
/* 8023E5DC  40 80 00 10 */	bge lbl_8023E5EC
/* 8023E5E0  2C 00 00 00 */	cmpwi r0, 0
/* 8023E5E4  41 82 00 48 */	beq lbl_8023E62C
/* 8023E5E8  48 00 00 4C */	b lbl_8023E634
lbl_8023E5EC:
/* 8023E5EC  2C 00 00 05 */	cmpwi r0, 5
/* 8023E5F0  41 82 00 08 */	beq lbl_8023E5F8
/* 8023E5F4  48 00 00 40 */	b lbl_8023E634
lbl_8023E5F8:
/* 8023E5F8  C0 42 B1 E0 */	lfs f2, lit_4211(r2)
/* 8023E5FC  A8 03 00 5A */	lha r0, 0x5a(r3)
/* 8023E600  C8 22 B1 F0 */	lfd f1, lit_4416(r2)
/* 8023E604  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8023E608  90 01 00 0C */	stw r0, 0xc(r1)
/* 8023E60C  3C 00 43 30 */	lis r0, 0x4330
/* 8023E610  90 01 00 08 */	stw r0, 8(r1)
/* 8023E614  C8 01 00 08 */	lfd f0, 8(r1)
/* 8023E618  EC 20 08 28 */	fsubs f1, f0, f1
/* 8023E61C  C0 02 B1 EC */	lfs f0, lit_4414(r2)
/* 8023E620  EC 01 00 24 */	fdivs f0, f1, f0
/* 8023E624  EC 22 00 28 */	fsubs f1, f2, f0
/* 8023E628  48 00 00 10 */	b lbl_8023E638
lbl_8023E62C:
/* 8023E62C  C0 22 B1 E0 */	lfs f1, lit_4211(r2)
/* 8023E630  48 00 00 08 */	b lbl_8023E638
lbl_8023E634:
/* 8023E634  C0 22 B1 C0 */	lfs f1, lit_3980(r2)
lbl_8023E638:
/* 8023E638  38 21 00 10 */	addi r1, r1, 0x10
/* 8023E63C  4E 80 00 20 */	blr 
