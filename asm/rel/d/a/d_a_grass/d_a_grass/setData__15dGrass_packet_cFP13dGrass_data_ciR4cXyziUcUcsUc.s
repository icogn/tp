lbl_8052067C:
/* 8052067C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80520680  7C 08 02 A6 */	mflr r0
/* 80520684  90 01 00 54 */	stw r0, 0x54(r1)
/* 80520688  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8052068C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0 /* qr0 */
/* 80520690  39 61 00 40 */	addi r11, r1, 0x40
/* 80520694  4B E4 1B 31 */	bl _savegpr_23
/* 80520698  7C 77 1B 78 */	mr r23, r3
/* 8052069C  7C 98 23 78 */	mr r24, r4
/* 805206A0  7C B9 2B 78 */	mr r25, r5
/* 805206A4  7C DA 33 78 */	mr r26, r6
/* 805206A8  7C FB 3B 78 */	mr r27, r7
/* 805206AC  7D 1C 43 78 */	mr r28, r8
/* 805206B0  7D 3D 4B 78 */	mr r29, r9
/* 805206B4  7D 5E 53 78 */	mr r30, r10
/* 805206B8  8B E1 00 5B */	lbz r31, 0x5b(r1)
/* 805206BC  4B AF DE 9D */	bl fopOvlpM_IsPeek__Fv
/* 805206C0  2C 03 00 00 */	cmpwi r3, 0
/* 805206C4  41 82 00 1C */	beq lbl_805206E0
/* 805206C8  7F 43 D3 78 */	mr r3, r26
/* 805206CC  4B FF F8 BD */	bl checkGroundY__FR4cXyz
/* 805206D0  FF E0 08 90 */	fmr f31, f1
/* 805206D4  38 00 00 02 */	li r0, 2
/* 805206D8  98 18 00 00 */	stb r0, 0(r24)
/* 805206DC  48 00 00 10 */	b lbl_805206EC
lbl_805206E0:
/* 805206E0  C3 FA 00 04 */	lfs f31, 4(r26)
/* 805206E4  38 00 00 01 */	li r0, 1
/* 805206E8  98 18 00 00 */	stb r0, 0(r24)
lbl_805206EC:
/* 805206EC  38 00 00 02 */	li r0, 2
/* 805206F0  98 18 00 01 */	stb r0, 1(r24)
/* 805206F4  3C 60 80 52 */	lis r3, lit_4600@ha /* 0x80523098@ha */
/* 805206F8  C0 23 30 98 */	lfs f1, lit_4600@l(r3)  /* 0x80523098@l */
/* 805206FC  4B D4 72 59 */	bl cM_rndF__Ff
/* 80520700  FC 00 08 1E */	fctiwz f0, f1
/* 80520704  D8 01 00 08 */	stfd f0, 8(r1)
/* 80520708  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8052070C  98 18 00 02 */	stb r0, 2(r24)
/* 80520710  C0 3A 00 08 */	lfs f1, 8(r26)
/* 80520714  C0 1A 00 00 */	lfs f0, 0(r26)
/* 80520718  D0 18 00 0C */	stfs f0, 0xc(r24)
/* 8052071C  D3 F8 00 10 */	stfs f31, 0x10(r24)
/* 80520720  D0 38 00 14 */	stfs f1, 0x14(r24)
/* 80520724  9B 98 00 03 */	stb r28, 3(r24)
/* 80520728  9B B8 00 04 */	stb r29, 4(r24)
/* 8052072C  B3 D8 00 08 */	sth r30, 8(r24)
/* 80520730  9B F8 00 05 */	stb r31, 5(r24)
/* 80520734  57 63 10 3A */	slwi r3, r27, 2
/* 80520738  3C 63 00 02 */	addis r3, r3, 2
/* 8052073C  38 63 D5 E4 */	addi r3, r3, -10780
/* 80520740  7C 77 1A 14 */	add r3, r23, r3
/* 80520744  7F 04 C3 78 */	mr r4, r24
/* 80520748  4B FF E6 99 */	bl newData__13dGrass_room_cFP13dGrass_data_c
/* 8052074C  B3 37 00 10 */	sth r25, 0x10(r23)
/* 80520750  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0 /* qr0 */
/* 80520754  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80520758  39 61 00 40 */	addi r11, r1, 0x40
/* 8052075C  4B E4 1A B5 */	bl _restgpr_23
/* 80520760  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80520764  7C 08 03 A6 */	mtlr r0
/* 80520768  38 21 00 50 */	addi r1, r1, 0x50
/* 8052076C  4E 80 00 20 */	blr 
