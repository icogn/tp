lbl_800D6F00:
/* 800D6F00  80 03 05 78 */	lwz r0, 0x578(r3)
/* 800D6F04  60 00 10 00 */	ori r0, r0, 0x1000
/* 800D6F08  90 03 05 78 */	stw r0, 0x578(r3)
/* 800D6F0C  B0 A3 31 04 */	sth r5, 0x3104(r3)
/* 800D6F10  C0 04 00 00 */	lfs f0, 0(r4)
/* 800D6F14  D0 03 37 44 */	stfs f0, 0x3744(r3)
/* 800D6F18  C0 04 00 04 */	lfs f0, 4(r4)
/* 800D6F1C  D0 03 37 48 */	stfs f0, 0x3748(r3)
/* 800D6F20  C0 04 00 08 */	lfs f0, 8(r4)
/* 800D6F24  D0 03 37 4C */	stfs f0, 0x374c(r3)
/* 800D6F28  4E 80 00 20 */	blr 
