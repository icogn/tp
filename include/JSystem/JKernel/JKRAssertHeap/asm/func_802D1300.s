/* __dt__13JKRAssertHeapFv __ct__13JKRAssertHeapFPvUlP7JKRHeapb::__dt(void) */
/* missing reference */
/* 802D1300 002CE240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1304 002CE244  7C 08 02 A6 */	mflr r0
/* 802D1308 002CE248  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D130C 002CE24C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D1310 002CE250  93 C1 00 08 */	stw r30, 8(r1)
/* 802D1314 002CE254  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D1318 002CE258  7C 9F 23 78 */	mr r31, r4
/* 802D131C 002CE25C  41 82 00 30 */	beq lbl_802D134C
/* 802D1320 002CE260  3C 80 80 3D */	lis r4, lbl_803CC090@ha
/* 802D1324 002CE264  38 04 C0 90 */	addi r0, r4, lbl_803CC090@l
/* 802D1328 002CE268  90 1E 00 00 */	stw r0, 0(r30)
/* 802D132C 002CE26C  4B FF D7 95 */	bl dispose__7JKRHeapFv
/* 802D1330 002CE270  7F C3 F3 78 */	mr r3, r30
/* 802D1334 002CE274  38 80 00 00 */	li r4, 0
/* 802D1338 002CE278  4B FF CF 2D */	bl __dt__7JKRHeapFv
/* 802D133C 002CE27C  7F E0 07 35 */	extsh. r0, r31
/* 802D1340 002CE280  40 81 00 0C */	ble lbl_802D134C
/* 802D1344 002CE284  7F C3 F3 78 */	mr r3, r30
/* 802D1348 002CE288  4B FF D9 F5 */	bl __dl__FPv
lbl_802D134C:
/* 802D134C 002CE28C  7F C3 F3 78 */	mr r3, r30
/* 802D1350 002CE290  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D1354 002CE294  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D1358 002CE298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D135C 002CE29C  7C 08 03 A6 */	mtlr r0
/* 802D1360 002CE2A0  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1364 002CE2A4  4E 80 00 20 */	blr