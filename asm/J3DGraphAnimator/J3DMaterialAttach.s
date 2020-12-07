.include "macros.inc"

.section .text, "ax" # 8032f5a8


.global J3DMaterialTable_NS_clear
J3DMaterialTable_NS_clear:
/* 8032F5A8 0032C4E8  38 00 00 00 */	li r0, 0
/* 8032F5AC 0032C4EC  B0 03 00 04 */	sth r0, 4(r3)
/* 8032F5B0 0032C4F0  B0 03 00 06 */	sth r0, 6(r3)
/* 8032F5B4 0032C4F4  90 03 00 08 */	stw r0, 8(r3)
/* 8032F5B8 0032C4F8  90 03 00 0C */	stw r0, 0xc(r3)
/* 8032F5BC 0032C4FC  90 03 00 10 */	stw r0, 0x10(r3)
/* 8032F5C0 0032C500  90 03 00 14 */	stw r0, 0x14(r3)
/* 8032F5C4 0032C504  90 03 00 18 */	stw r0, 0x18(r3)
/* 8032F5C8 0032C508  B0 03 00 1C */	sth r0, 0x1c(r3)
/* 8032F5CC 0032C50C  4E 80 00 20 */	blr 

.global J3DMaterialTable
J3DMaterialTable:
/* 8032F5D0 0032C510  3C 80 80 3D */	lis r4, lbl_803CEE80@ha
/* 8032F5D4 0032C514  38 04 EE 80 */	addi r0, r4, lbl_803CEE80@l
/* 8032F5D8 0032C518  90 03 00 00 */	stw r0, 0(r3)
/* 8032F5DC 0032C51C  38 00 00 00 */	li r0, 0
/* 8032F5E0 0032C520  B0 03 00 04 */	sth r0, 4(r3)
/* 8032F5E4 0032C524  B0 03 00 06 */	sth r0, 6(r3)
/* 8032F5E8 0032C528  90 03 00 08 */	stw r0, 8(r3)
/* 8032F5EC 0032C52C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8032F5F0 0032C530  90 03 00 10 */	stw r0, 0x10(r3)
/* 8032F5F4 0032C534  90 03 00 14 */	stw r0, 0x14(r3)
/* 8032F5F8 0032C538  90 03 00 18 */	stw r0, 0x18(r3)
/* 8032F5FC 0032C53C  B0 03 00 1C */	sth r0, 0x1c(r3)
/* 8032F600 0032C540  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_dtor
J3DMaterialTable_NS_dtor:
/* 8032F604 0032C544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032F608 0032C548  7C 08 02 A6 */	mflr r0
/* 8032F60C 0032C54C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032F610 0032C550  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032F614 0032C554  7C 7F 1B 79 */	or. r31, r3, r3
/* 8032F618 0032C558  41 82 00 1C */	beq lbl_8032F634
/* 8032F61C 0032C55C  3C A0 80 3D */	lis r5, lbl_803CEE80@ha
/* 8032F620 0032C560  38 05 EE 80 */	addi r0, r5, lbl_803CEE80@l
/* 8032F624 0032C564  90 1F 00 00 */	stw r0, 0(r31)
/* 8032F628 0032C568  7C 80 07 35 */	extsh. r0, r4
/* 8032F62C 0032C56C  40 81 00 08 */	ble lbl_8032F634
/* 8032F630 0032C570  4B F9 F7 0D */	bl __dl__FPv
lbl_8032F634:
/* 8032F634 0032C574  7F E3 FB 78 */	mr r3, r31
/* 8032F638 0032C578  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032F63C 0032C57C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032F640 0032C580  7C 08 03 A6 */	mtlr r0
/* 8032F644 0032C584  38 21 00 10 */	addi r1, r1, 0x10
/* 8032F648 0032C588  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_removeMatColorAnimator
J3DMaterialTable_NS_removeMatColorAnimator:
/* 8032F64C 0032C58C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8032F650 0032C590  7C 08 02 A6 */	mflr r0
/* 8032F654 0032C594  90 01 00 24 */	stw r0, 0x24(r1)
/* 8032F658 0032C598  39 61 00 20 */	addi r11, r1, 0x20
/* 8032F65C 0032C59C  48 03 2B 79 */	bl _savegpr_27
/* 8032F660 0032C5A0  7C 7B 1B 78 */	mr r27, r3
/* 8032F664 0032C5A4  7C 9C 23 78 */	mr r28, r4
/* 8032F668 0032C5A8  3B C0 00 00 */	li r30, 0
/* 8032F66C 0032C5AC  A3 E4 00 14 */	lhz r31, 0x14(r4)
/* 8032F670 0032C5B0  3B A0 00 00 */	li r29, 0
/* 8032F674 0032C5B4  48 00 00 5C */	b lbl_8032F6D0
lbl_8032F678:
/* 8032F678 0032C5B8  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 8032F67C 0032C5BC  57 A0 0B FC */	rlwinm r0, r29, 1, 0xf, 0x1e
/* 8032F680 0032C5C0  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032F684 0032C5C4  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032F688 0032C5C8  41 82 00 44 */	beq lbl_8032F6CC
/* 8032F68C 0032C5CC  80 7B 00 08 */	lwz r3, 8(r27)
/* 8032F690 0032C5D0  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032F694 0032C5D4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032F698 0032C5D8  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032F69C 0032C5DC  3C 00 C0 00 */	lis r0, 0xc000
/* 8032F6A0 0032C5E0  7C 03 00 40 */	cmplw r3, r0
/* 8032F6A4 0032C5E4  40 80 00 08 */	bge lbl_8032F6AC
/* 8032F6A8 0032C5E8  48 00 00 08 */	b lbl_8032F6B0
lbl_8032F6AC:
/* 8032F6AC 0032C5EC  38 60 00 00 */	li r3, 0
lbl_8032F6B0:
/* 8032F6B0 0032C5F0  28 03 00 00 */	cmplwi r3, 0
/* 8032F6B4 0032C5F4  40 82 00 0C */	bne lbl_8032F6C0
/* 8032F6B8 0032C5F8  3B C0 00 01 */	li r30, 1
/* 8032F6BC 0032C5FC  48 00 00 10 */	b lbl_8032F6CC
lbl_8032F6C0:
/* 8032F6C0 0032C600  38 80 00 00 */	li r4, 0
/* 8032F6C4 0032C604  38 A0 00 00 */	li r5, 0
/* 8032F6C8 0032C608  4B FF CE DD */	bl J3DMaterialAnm_NS_setMatColorAnm
lbl_8032F6CC:
/* 8032F6CC 0032C60C  3B BD 00 01 */	addi r29, r29, 1
lbl_8032F6D0:
/* 8032F6D0 0032C610  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 8032F6D4 0032C614  7C 00 F8 40 */	cmplw r0, r31
/* 8032F6D8 0032C618  41 80 FF A0 */	blt lbl_8032F678
/* 8032F6DC 0032C61C  7F C3 F3 78 */	mr r3, r30
/* 8032F6E0 0032C620  39 61 00 20 */	addi r11, r1, 0x20
/* 8032F6E4 0032C624  48 03 2B 3D */	bl _restgpr_27
/* 8032F6E8 0032C628  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8032F6EC 0032C62C  7C 08 03 A6 */	mtlr r0
/* 8032F6F0 0032C630  38 21 00 20 */	addi r1, r1, 0x20
/* 8032F6F4 0032C634  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_removeTexNoAnimator
J3DMaterialTable_NS_removeTexNoAnimator:
/* 8032F6F8 0032C638  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8032F6FC 0032C63C  7C 08 02 A6 */	mflr r0
/* 8032F700 0032C640  90 01 00 24 */	stw r0, 0x24(r1)
/* 8032F704 0032C644  39 61 00 20 */	addi r11, r1, 0x20
/* 8032F708 0032C648  48 03 2A C9 */	bl _savegpr_26
/* 8032F70C 0032C64C  7C 7B 1B 78 */	mr r27, r3
/* 8032F710 0032C650  7C 9C 23 78 */	mr r28, r4
/* 8032F714 0032C654  3B E0 00 00 */	li r31, 0
/* 8032F718 0032C658  A3 44 00 16 */	lhz r26, 0x16(r4)
/* 8032F71C 0032C65C  83 C4 00 10 */	lwz r30, 0x10(r4)
/* 8032F720 0032C660  3B A0 00 00 */	li r29, 0
/* 8032F724 0032C664  48 00 00 68 */	b lbl_8032F78C
lbl_8032F728:
/* 8032F728 0032C668  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 8032F72C 0032C66C  57 A4 04 3E */	clrlwi r4, r29, 0x10
/* 8032F730 0032C670  57 A0 0B FC */	rlwinm r0, r29, 1, 0xf, 0x1e
/* 8032F734 0032C674  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032F738 0032C678  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032F73C 0032C67C  41 82 00 4C */	beq lbl_8032F788
/* 8032F740 0032C680  80 7B 00 08 */	lwz r3, 8(r27)
/* 8032F744 0032C684  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032F748 0032C688  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032F74C 0032C68C  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032F750 0032C690  3C 00 C0 00 */	lis r0, 0xc000
/* 8032F754 0032C694  7C 03 00 40 */	cmplw r3, r0
/* 8032F758 0032C698  40 80 00 08 */	bge lbl_8032F760
/* 8032F75C 0032C69C  48 00 00 08 */	b lbl_8032F764
lbl_8032F760:
/* 8032F760 0032C6A0  38 60 00 00 */	li r3, 0
lbl_8032F764:
/* 8032F764 0032C6A4  54 84 18 38 */	slwi r4, r4, 3
/* 8032F768 0032C6A8  38 04 00 04 */	addi r0, r4, 4
/* 8032F76C 0032C6AC  7C 9E 00 AE */	lbzx r4, r30, r0
/* 8032F770 0032C6B0  28 03 00 00 */	cmplwi r3, 0
/* 8032F774 0032C6B4  40 82 00 0C */	bne lbl_8032F780
/* 8032F778 0032C6B8  3B E0 00 01 */	li r31, 1
/* 8032F77C 0032C6BC  48 00 00 0C */	b lbl_8032F788
lbl_8032F780:
/* 8032F780 0032C6C0  38 A0 00 00 */	li r5, 0
/* 8032F784 0032C6C4  4B FF CE A1 */	bl J3DMaterialAnm_NS_setTexNoAnm
lbl_8032F788:
/* 8032F788 0032C6C8  3B BD 00 01 */	addi r29, r29, 1
lbl_8032F78C:
/* 8032F78C 0032C6CC  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 8032F790 0032C6D0  7C 00 D0 40 */	cmplw r0, r26
/* 8032F794 0032C6D4  41 80 FF 94 */	blt lbl_8032F728
/* 8032F798 0032C6D8  7F E3 FB 78 */	mr r3, r31
/* 8032F79C 0032C6DC  39 61 00 20 */	addi r11, r1, 0x20
/* 8032F7A0 0032C6E0  48 03 2A 7D */	bl _restgpr_26
/* 8032F7A4 0032C6E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8032F7A8 0032C6E8  7C 08 03 A6 */	mtlr r0
/* 8032F7AC 0032C6EC  38 21 00 20 */	addi r1, r1, 0x20
/* 8032F7B0 0032C6F0  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_removeTexMtxAnimator
J3DMaterialTable_NS_removeTexMtxAnimator:
/* 8032F7B4 0032C6F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8032F7B8 0032C6F8  7C 08 02 A6 */	mflr r0
/* 8032F7BC 0032C6FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8032F7C0 0032C700  39 61 00 20 */	addi r11, r1, 0x20
/* 8032F7C4 0032C704  48 03 2A 11 */	bl _savegpr_27
/* 8032F7C8 0032C708  7C 7C 1B 78 */	mr r28, r3
/* 8032F7CC 0032C70C  7C 9D 23 78 */	mr r29, r4
/* 8032F7D0 0032C710  3B E0 00 00 */	li r31, 0
/* 8032F7D4 0032C714  A0 64 00 14 */	lhz r3, 0x14(r4)
/* 8032F7D8 0032C718  38 00 00 03 */	li r0, 3
/* 8032F7DC 0032C71C  7C 03 03 D6 */	divw r0, r3, r0
/* 8032F7E0 0032C720  54 1B 04 3E */	clrlwi r27, r0, 0x10
/* 8032F7E4 0032C724  3B C0 00 00 */	li r30, 0
/* 8032F7E8 0032C728  48 00 00 70 */	b lbl_8032F858
lbl_8032F7EC:
/* 8032F7EC 0032C72C  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8032F7F0 0032C730  57 C5 04 3E */	clrlwi r5, r30, 0x10
/* 8032F7F4 0032C734  57 C0 0B FC */	rlwinm r0, r30, 1, 0xf, 0x1e
/* 8032F7F8 0032C738  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032F7FC 0032C73C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032F800 0032C740  41 82 00 54 */	beq lbl_8032F854
/* 8032F804 0032C744  80 7C 00 08 */	lwz r3, 8(r28)
/* 8032F808 0032C748  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032F80C 0032C74C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032F810 0032C750  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032F814 0032C754  3C 00 C0 00 */	lis r0, 0xc000
/* 8032F818 0032C758  7C 03 00 40 */	cmplw r3, r0
/* 8032F81C 0032C75C  40 80 00 08 */	bge lbl_8032F824
/* 8032F820 0032C760  48 00 00 08 */	b lbl_8032F828
lbl_8032F824:
/* 8032F824 0032C764  38 60 00 00 */	li r3, 0
lbl_8032F828:
/* 8032F828 0032C768  80 9D 00 28 */	lwz r4, 0x28(r29)
/* 8032F82C 0032C76C  7C 04 28 AE */	lbzx r0, r4, r5
/* 8032F830 0032C770  28 03 00 00 */	cmplwi r3, 0
/* 8032F834 0032C774  40 82 00 0C */	bne lbl_8032F840
/* 8032F838 0032C778  3B E0 00 01 */	li r31, 1
/* 8032F83C 0032C77C  48 00 00 18 */	b lbl_8032F854
lbl_8032F840:
/* 8032F840 0032C780  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8032F844 0032C784  28 04 00 FF */	cmplwi r4, 0xff
/* 8032F848 0032C788  41 82 00 0C */	beq lbl_8032F854
/* 8032F84C 0032C78C  38 A0 00 00 */	li r5, 0
/* 8032F850 0032C790  4B FF CD 95 */	bl J3DMaterialAnm_NS_setTexMtxAnm
lbl_8032F854:
/* 8032F854 0032C794  3B DE 00 01 */	addi r30, r30, 1
lbl_8032F858:
/* 8032F858 0032C798  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 8032F85C 0032C79C  7C 00 D8 40 */	cmplw r0, r27
/* 8032F860 0032C7A0  41 80 FF 8C */	blt lbl_8032F7EC
/* 8032F864 0032C7A4  7F E3 FB 78 */	mr r3, r31
/* 8032F868 0032C7A8  39 61 00 20 */	addi r11, r1, 0x20
/* 8032F86C 0032C7AC  48 03 29 B5 */	bl _restgpr_27
/* 8032F870 0032C7B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8032F874 0032C7B4  7C 08 03 A6 */	mtlr r0
/* 8032F878 0032C7B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8032F87C 0032C7BC  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_removeTevRegAnimator
J3DMaterialTable_NS_removeTevRegAnimator:
/* 8032F880 0032C7C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8032F884 0032C7C4  7C 08 02 A6 */	mflr r0
/* 8032F888 0032C7C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8032F88C 0032C7CC  39 61 00 20 */	addi r11, r1, 0x20
/* 8032F890 0032C7D0  48 03 29 41 */	bl _savegpr_26
/* 8032F894 0032C7D4  7C 7B 1B 78 */	mr r27, r3
/* 8032F898 0032C7D8  7C 9C 23 78 */	mr r28, r4
/* 8032F89C 0032C7DC  3B C0 00 00 */	li r30, 0
/* 8032F8A0 0032C7E0  A3 44 00 0C */	lhz r26, 0xc(r4)
/* 8032F8A4 0032C7E4  A3 E4 00 0E */	lhz r31, 0xe(r4)
/* 8032F8A8 0032C7E8  3B A0 00 00 */	li r29, 0
/* 8032F8AC 0032C7EC  48 00 00 6C */	b lbl_8032F918
lbl_8032F8B0:
/* 8032F8B0 0032C7F0  80 7C 00 20 */	lwz r3, 0x20(r28)
/* 8032F8B4 0032C7F4  57 A4 04 3E */	clrlwi r4, r29, 0x10
/* 8032F8B8 0032C7F8  57 A0 0B FC */	rlwinm r0, r29, 1, 0xf, 0x1e
/* 8032F8BC 0032C7FC  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032F8C0 0032C800  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032F8C4 0032C804  41 82 00 50 */	beq lbl_8032F914
/* 8032F8C8 0032C808  80 7B 00 08 */	lwz r3, 8(r27)
/* 8032F8CC 0032C80C  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032F8D0 0032C810  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032F8D4 0032C814  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032F8D8 0032C818  3C 00 C0 00 */	lis r0, 0xc000
/* 8032F8DC 0032C81C  7C 03 00 40 */	cmplw r3, r0
/* 8032F8E0 0032C820  40 80 00 08 */	bge lbl_8032F8E8
/* 8032F8E4 0032C824  48 00 00 08 */	b lbl_8032F8EC
lbl_8032F8E8:
/* 8032F8E8 0032C828  38 60 00 00 */	li r3, 0
lbl_8032F8EC:
/* 8032F8EC 0032C82C  80 BC 00 48 */	lwz r5, 0x48(r28)
/* 8032F8F0 0032C830  1C 84 00 1C */	mulli r4, r4, 0x1c
/* 8032F8F4 0032C834  38 04 00 18 */	addi r0, r4, 0x18
/* 8032F8F8 0032C838  7C 85 00 AE */	lbzx r4, r5, r0
/* 8032F8FC 0032C83C  28 03 00 00 */	cmplwi r3, 0
/* 8032F900 0032C840  40 82 00 0C */	bne lbl_8032F90C
/* 8032F904 0032C844  3B C0 00 01 */	li r30, 1
/* 8032F908 0032C848  48 00 00 0C */	b lbl_8032F914
lbl_8032F90C:
/* 8032F90C 0032C84C  38 A0 00 00 */	li r5, 0
/* 8032F910 0032C850  4B FF CD 55 */	bl J3DMaterialAnm_NS_setTevColorAnm
lbl_8032F914:
/* 8032F914 0032C854  3B BD 00 01 */	addi r29, r29, 1
lbl_8032F918:
/* 8032F918 0032C858  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 8032F91C 0032C85C  7C 00 D0 40 */	cmplw r0, r26
/* 8032F920 0032C860  41 80 FF 90 */	blt lbl_8032F8B0
/* 8032F924 0032C864  3B A0 00 00 */	li r29, 0
/* 8032F928 0032C868  57 FF 04 3E */	clrlwi r31, r31, 0x10
/* 8032F92C 0032C86C  48 00 00 6C */	b lbl_8032F998
lbl_8032F930:
/* 8032F930 0032C870  80 7C 00 34 */	lwz r3, 0x34(r28)
/* 8032F934 0032C874  57 A4 04 3E */	clrlwi r4, r29, 0x10
/* 8032F938 0032C878  57 A0 0B FC */	rlwinm r0, r29, 1, 0xf, 0x1e
/* 8032F93C 0032C87C  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032F940 0032C880  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032F944 0032C884  41 82 00 50 */	beq lbl_8032F994
/* 8032F948 0032C888  80 7B 00 08 */	lwz r3, 8(r27)
/* 8032F94C 0032C88C  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032F950 0032C890  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032F954 0032C894  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032F958 0032C898  3C 00 C0 00 */	lis r0, 0xc000
/* 8032F95C 0032C89C  7C 03 00 40 */	cmplw r3, r0
/* 8032F960 0032C8A0  40 80 00 08 */	bge lbl_8032F968
/* 8032F964 0032C8A4  48 00 00 08 */	b lbl_8032F96C
lbl_8032F968:
/* 8032F968 0032C8A8  38 60 00 00 */	li r3, 0
lbl_8032F96C:
/* 8032F96C 0032C8AC  80 BC 00 4C */	lwz r5, 0x4c(r28)
/* 8032F970 0032C8B0  1C 84 00 1C */	mulli r4, r4, 0x1c
/* 8032F974 0032C8B4  38 04 00 18 */	addi r0, r4, 0x18
/* 8032F978 0032C8B8  7C 85 00 AE */	lbzx r4, r5, r0
/* 8032F97C 0032C8BC  28 03 00 00 */	cmplwi r3, 0
/* 8032F980 0032C8C0  40 82 00 0C */	bne lbl_8032F98C
/* 8032F984 0032C8C4  3B C0 00 01 */	li r30, 1
/* 8032F988 0032C8C8  48 00 00 0C */	b lbl_8032F994
lbl_8032F98C:
/* 8032F98C 0032C8CC  38 A0 00 00 */	li r5, 0
/* 8032F990 0032C8D0  4B FF CD 15 */	bl J3DMaterialAnm_NS_setTevKColorAnm
lbl_8032F994:
/* 8032F994 0032C8D4  3B BD 00 01 */	addi r29, r29, 1
lbl_8032F998:
/* 8032F998 0032C8D8  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 8032F99C 0032C8DC  7C 00 F8 40 */	cmplw r0, r31
/* 8032F9A0 0032C8E0  41 80 FF 90 */	blt lbl_8032F930
/* 8032F9A4 0032C8E4  7F C3 F3 78 */	mr r3, r30
/* 8032F9A8 0032C8E8  39 61 00 20 */	addi r11, r1, 0x20
/* 8032F9AC 0032C8EC  48 03 28 71 */	bl _restgpr_26
/* 8032F9B0 0032C8F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8032F9B4 0032C8F4  7C 08 03 A6 */	mtlr r0
/* 8032F9B8 0032C8F8  38 21 00 20 */	addi r1, r1, 0x20
/* 8032F9BC 0032C8FC  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_createTexMtxForAnimator
J3DMaterialTable_NS_createTexMtxForAnimator:
/* 8032F9C0 0032C900  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8032F9C4 0032C904  7C 08 02 A6 */	mflr r0
/* 8032F9C8 0032C908  90 01 00 34 */	stw r0, 0x34(r1)
/* 8032F9CC 0032C90C  39 61 00 30 */	addi r11, r1, 0x30
/* 8032F9D0 0032C910  48 03 27 F9 */	bl func_803621C8
/* 8032F9D4 0032C914  7C 7C 1B 78 */	mr r28, r3
/* 8032F9D8 0032C918  7C 9D 23 78 */	mr r29, r4
/* 8032F9DC 0032C91C  3B E0 00 00 */	li r31, 0
/* 8032F9E0 0032C920  A0 64 00 14 */	lhz r3, 0x14(r4)
/* 8032F9E4 0032C924  38 00 00 03 */	li r0, 3
/* 8032F9E8 0032C928  7C 03 03 D6 */	divw r0, r3, r0
/* 8032F9EC 0032C92C  54 1B 04 3E */	clrlwi r27, r0, 0x10
/* 8032F9F0 0032C930  A0 1C 00 1C */	lhz r0, 0x1c(r28)
/* 8032F9F4 0032C934  28 00 00 01 */	cmplwi r0, 1
/* 8032F9F8 0032C938  40 82 00 0C */	bne lbl_8032FA04
/* 8032F9FC 0032C93C  38 60 00 02 */	li r3, 2
/* 8032FA00 0032C940  48 00 00 DC */	b lbl_8032FADC
lbl_8032FA04:
/* 8032FA04 0032C944  3B C0 00 00 */	li r30, 0
/* 8032FA08 0032C948  48 00 00 C4 */	b lbl_8032FACC
lbl_8032FA0C:
/* 8032FA0C 0032C94C  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8032FA10 0032C950  57 C4 04 3E */	clrlwi r4, r30, 0x10
/* 8032FA14 0032C954  57 C0 0B FC */	rlwinm r0, r30, 1, 0xf, 0x1e
/* 8032FA18 0032C958  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032FA1C 0032C95C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032FA20 0032C960  41 82 00 A8 */	beq lbl_8032FAC8
/* 8032FA24 0032C964  80 7C 00 08 */	lwz r3, 8(r28)
/* 8032FA28 0032C968  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032FA2C 0032C96C  7F 43 00 2E */	lwzx r26, r3, r0
/* 8032FA30 0032C970  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 8032FA34 0032C974  7C 83 20 AE */	lbzx r4, r3, r4
/* 8032FA38 0032C978  80 7A 00 3C */	lwz r3, 0x3c(r26)
/* 8032FA3C 0032C97C  3C 00 C0 00 */	lis r0, 0xc000
/* 8032FA40 0032C980  7C 03 00 40 */	cmplw r3, r0
/* 8032FA44 0032C984  40 80 00 08 */	bge lbl_8032FA4C
/* 8032FA48 0032C988  48 00 00 08 */	b lbl_8032FA50
lbl_8032FA4C:
/* 8032FA4C 0032C98C  38 60 00 00 */	li r3, 0
lbl_8032FA50:
/* 8032FA50 0032C990  28 03 00 00 */	cmplwi r3, 0
/* 8032FA54 0032C994  40 82 00 0C */	bne lbl_8032FA60
/* 8032FA58 0032C998  3B E0 00 01 */	li r31, 1
/* 8032FA5C 0032C99C  48 00 00 6C */	b lbl_8032FAC8
lbl_8032FA60:
/* 8032FA60 0032C9A0  54 98 06 3E */	clrlwi r24, r4, 0x18
/* 8032FA64 0032C9A4  28 18 00 FF */	cmplwi r24, 0xff
/* 8032FA68 0032C9A8  41 82 00 60 */	beq lbl_8032FAC8
/* 8032FA6C 0032C9AC  80 7A 00 28 */	lwz r3, 0x28(r26)
/* 8032FA70 0032C9B0  7F 04 C3 78 */	mr r4, r24
/* 8032FA74 0032C9B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8032FA78 0032C9B8  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8032FA7C 0032C9BC  7D 89 03 A6 */	mtctr r12
/* 8032FA80 0032C9C0  4E 80 04 21 */	bctrl 
/* 8032FA84 0032C9C4  28 03 00 00 */	cmplwi r3, 0
/* 8032FA88 0032C9C8  40 82 00 40 */	bne lbl_8032FAC8
/* 8032FA8C 0032C9CC  38 60 00 94 */	li r3, 0x94
/* 8032FA90 0032C9D0  4B F9 F1 BD */	bl __nw__FUl
/* 8032FA94 0032C9D4  7C 79 1B 79 */	or. r25, r3, r3
/* 8032FA98 0032C9D8  41 82 00 10 */	beq lbl_8032FAA8
/* 8032FA9C 0032C9DC  3C 80 80 3A */	lis r4, lbl_803A1F1C@ha
/* 8032FAA0 0032C9E0  38 84 1F 1C */	addi r4, r4, lbl_803A1F1C@l
/* 8032FAA4 0032C9E4  4B FF 5C 75 */	bl J3DTexMtxInfo_NS___as
lbl_8032FAA8:
/* 8032FAA8 0032C9E8  3B E0 00 04 */	li r31, 4
/* 8032FAAC 0032C9EC  80 7A 00 28 */	lwz r3, 0x28(r26)
/* 8032FAB0 0032C9F0  7F 04 C3 78 */	mr r4, r24
/* 8032FAB4 0032C9F4  7F 25 CB 78 */	mr r5, r25
/* 8032FAB8 0032C9F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8032FABC 0032C9FC  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8032FAC0 0032CA00  7D 89 03 A6 */	mtctr r12
/* 8032FAC4 0032CA04  4E 80 04 21 */	bctrl 
lbl_8032FAC8:
/* 8032FAC8 0032CA08  3B DE 00 01 */	addi r30, r30, 1
lbl_8032FACC:
/* 8032FACC 0032CA0C  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 8032FAD0 0032CA10  7C 00 D8 40 */	cmplw r0, r27
/* 8032FAD4 0032CA14  41 80 FF 38 */	blt lbl_8032FA0C
/* 8032FAD8 0032CA18  7F E3 FB 78 */	mr r3, r31
lbl_8032FADC:
/* 8032FADC 0032CA1C  39 61 00 30 */	addi r11, r1, 0x30
/* 8032FAE0 0032CA20  48 03 27 35 */	bl func_80362214
/* 8032FAE4 0032CA24  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8032FAE8 0032CA28  7C 08 03 A6 */	mtlr r0
/* 8032FAEC 0032CA2C  38 21 00 30 */	addi r1, r1, 0x30
/* 8032FAF0 0032CA30  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_entryMatColorAnimator
J3DMaterialTable_NS_entryMatColorAnimator:
/* 8032FAF4 0032CA34  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8032FAF8 0032CA38  7C 08 02 A6 */	mflr r0
/* 8032FAFC 0032CA3C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8032FB00 0032CA40  39 61 00 30 */	addi r11, r1, 0x30
/* 8032FB04 0032CA44  48 03 26 D1 */	bl _savegpr_27
/* 8032FB08 0032CA48  7C 7E 1B 78 */	mr r30, r3
/* 8032FB0C 0032CA4C  7C 9F 23 78 */	mr r31, r4
/* 8032FB10 0032CA50  3B 80 00 00 */	li r28, 0
/* 8032FB14 0032CA54  A0 64 00 14 */	lhz r3, 0x14(r4)
/* 8032FB18 0032CA58  A0 1E 00 1C */	lhz r0, 0x1c(r30)
/* 8032FB1C 0032CA5C  28 00 00 01 */	cmplwi r0, 1
/* 8032FB20 0032CA60  40 82 00 0C */	bne lbl_8032FB2C
/* 8032FB24 0032CA64  38 60 00 02 */	li r3, 2
/* 8032FB28 0032CA68  48 00 00 88 */	b lbl_8032FBB0
lbl_8032FB2C:
/* 8032FB2C 0032CA6C  3B 60 00 00 */	li r27, 0
/* 8032FB30 0032CA70  54 7D 04 3E */	clrlwi r29, r3, 0x10
/* 8032FB34 0032CA74  48 00 00 6C */	b lbl_8032FBA0
lbl_8032FB38:
/* 8032FB38 0032CA78  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8032FB3C 0032CA7C  57 60 0B FC */	rlwinm r0, r27, 1, 0xf, 0x1e
/* 8032FB40 0032CA80  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032FB44 0032CA84  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032FB48 0032CA88  41 82 00 54 */	beq lbl_8032FB9C
/* 8032FB4C 0032CA8C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8032FB50 0032CA90  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032FB54 0032CA94  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032FB58 0032CA98  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032FB5C 0032CA9C  3C 00 C0 00 */	lis r0, 0xc000
/* 8032FB60 0032CAA0  7C 03 00 40 */	cmplw r3, r0
/* 8032FB64 0032CAA4  40 80 00 08 */	bge lbl_8032FB6C
/* 8032FB68 0032CAA8  48 00 00 08 */	b lbl_8032FB70
lbl_8032FB6C:
/* 8032FB6C 0032CAAC  38 60 00 00 */	li r3, 0
lbl_8032FB70:
/* 8032FB70 0032CAB0  28 03 00 00 */	cmplwi r3, 0
/* 8032FB74 0032CAB4  40 82 00 0C */	bne lbl_8032FB80
/* 8032FB78 0032CAB8  3B 80 00 01 */	li r28, 1
/* 8032FB7C 0032CABC  48 00 00 20 */	b lbl_8032FB9C
lbl_8032FB80:
/* 8032FB80 0032CAC0  B3 61 00 08 */	sth r27, 8(r1)
/* 8032FB84 0032CAC4  38 00 00 01 */	li r0, 1
/* 8032FB88 0032CAC8  B0 01 00 0A */	sth r0, 0xa(r1)
/* 8032FB8C 0032CACC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032FB90 0032CAD0  38 80 00 00 */	li r4, 0
/* 8032FB94 0032CAD4  38 A1 00 08 */	addi r5, r1, 8
/* 8032FB98 0032CAD8  4B FF CA 0D */	bl J3DMaterialAnm_NS_setMatColorAnm
lbl_8032FB9C:
/* 8032FB9C 0032CADC  3B 7B 00 01 */	addi r27, r27, 1
lbl_8032FBA0:
/* 8032FBA0 0032CAE0  57 60 04 3E */	clrlwi r0, r27, 0x10
/* 8032FBA4 0032CAE4  7C 00 E8 40 */	cmplw r0, r29
/* 8032FBA8 0032CAE8  41 80 FF 90 */	blt lbl_8032FB38
/* 8032FBAC 0032CAEC  7F 83 E3 78 */	mr r3, r28
lbl_8032FBB0:
/* 8032FBB0 0032CAF0  39 61 00 30 */	addi r11, r1, 0x30
/* 8032FBB4 0032CAF4  48 03 26 6D */	bl _restgpr_27
/* 8032FBB8 0032CAF8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8032FBBC 0032CAFC  7C 08 03 A6 */	mtlr r0
/* 8032FBC0 0032CB00  38 21 00 30 */	addi r1, r1, 0x30
/* 8032FBC4 0032CB04  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_entryTexNoAnimator
J3DMaterialTable_NS_entryTexNoAnimator:
/* 8032FBC8 0032CB08  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8032FBCC 0032CB0C  7C 08 02 A6 */	mflr r0
/* 8032FBD0 0032CB10  90 01 00 34 */	stw r0, 0x34(r1)
/* 8032FBD4 0032CB14  39 61 00 30 */	addi r11, r1, 0x30
/* 8032FBD8 0032CB18  48 03 25 FD */	bl _savegpr_27
/* 8032FBDC 0032CB1C  7C 7C 1B 78 */	mr r28, r3
/* 8032FBE0 0032CB20  7C 9D 23 78 */	mr r29, r4
/* 8032FBE4 0032CB24  3B E0 00 00 */	li r31, 0
/* 8032FBE8 0032CB28  A0 64 00 16 */	lhz r3, 0x16(r4)
/* 8032FBEC 0032CB2C  A0 1C 00 1C */	lhz r0, 0x1c(r28)
/* 8032FBF0 0032CB30  28 00 00 01 */	cmplwi r0, 1
/* 8032FBF4 0032CB34  40 82 00 0C */	bne lbl_8032FC00
/* 8032FBF8 0032CB38  38 60 00 02 */	li r3, 2
/* 8032FBFC 0032CB3C  48 00 00 B0 */	b lbl_8032FCAC
lbl_8032FC00:
/* 8032FC00 0032CB40  3B C0 00 00 */	li r30, 0
/* 8032FC04 0032CB44  54 7B 04 3E */	clrlwi r27, r3, 0x10
/* 8032FC08 0032CB48  48 00 00 94 */	b lbl_8032FC9C
lbl_8032FC0C:
/* 8032FC0C 0032CB4C  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 8032FC10 0032CB50  57 C4 04 3E */	clrlwi r4, r30, 0x10
/* 8032FC14 0032CB54  57 C0 0B FC */	rlwinm r0, r30, 1, 0xf, 0x1e
/* 8032FC18 0032CB58  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032FC1C 0032CB5C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032FC20 0032CB60  41 82 00 78 */	beq lbl_8032FC98
/* 8032FC24 0032CB64  80 7C 00 08 */	lwz r3, 8(r28)
/* 8032FC28 0032CB68  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032FC2C 0032CB6C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032FC30 0032CB70  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032FC34 0032CB74  3C 00 C0 00 */	lis r0, 0xc000
/* 8032FC38 0032CB78  7C 03 00 40 */	cmplw r3, r0
/* 8032FC3C 0032CB7C  40 80 00 08 */	bge lbl_8032FC44
/* 8032FC40 0032CB80  48 00 00 08 */	b lbl_8032FC48
lbl_8032FC44:
/* 8032FC44 0032CB84  38 60 00 00 */	li r3, 0
lbl_8032FC48:
/* 8032FC48 0032CB88  80 BD 00 10 */	lwz r5, 0x10(r29)
/* 8032FC4C 0032CB8C  54 84 18 38 */	slwi r4, r4, 3
/* 8032FC50 0032CB90  38 04 00 04 */	addi r0, r4, 4
/* 8032FC54 0032CB94  7C 85 00 AE */	lbzx r4, r5, r0
/* 8032FC58 0032CB98  28 03 00 00 */	cmplwi r3, 0
/* 8032FC5C 0032CB9C  40 82 00 0C */	bne lbl_8032FC68
/* 8032FC60 0032CBA0  3B E0 00 01 */	li r31, 1
/* 8032FC64 0032CBA4  48 00 00 34 */	b lbl_8032FC98
lbl_8032FC68:
/* 8032FC68 0032CBA8  3C A0 80 3A */	lis r5, lbl_803A7C84@ha
/* 8032FC6C 0032CBAC  38 05 7C 84 */	addi r0, r5, lbl_803A7C84@l
/* 8032FC70 0032CBB0  90 01 00 08 */	stw r0, 8(r1)
/* 8032FC74 0032CBB4  B3 C1 00 0C */	sth r30, 0xc(r1)
/* 8032FC78 0032CBB8  38 00 00 01 */	li r0, 1
/* 8032FC7C 0032CBBC  B0 01 00 0E */	sth r0, 0xe(r1)
/* 8032FC80 0032CBC0  93 A1 00 10 */	stw r29, 0x10(r1)
/* 8032FC84 0032CBC4  38 A1 00 08 */	addi r5, r1, 8
/* 8032FC88 0032CBC8  4B FF C9 9D */	bl J3DMaterialAnm_NS_setTexNoAnm
/* 8032FC8C 0032CBCC  3C 60 80 3A */	lis r3, lbl_803A7C84@ha
/* 8032FC90 0032CBD0  38 03 7C 84 */	addi r0, r3, lbl_803A7C84@l
/* 8032FC94 0032CBD4  90 01 00 08 */	stw r0, 8(r1)
lbl_8032FC98:
/* 8032FC98 0032CBD8  3B DE 00 01 */	addi r30, r30, 1
lbl_8032FC9C:
/* 8032FC9C 0032CBDC  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 8032FCA0 0032CBE0  7C 00 D8 40 */	cmplw r0, r27
/* 8032FCA4 0032CBE4  41 80 FF 68 */	blt lbl_8032FC0C
/* 8032FCA8 0032CBE8  7F E3 FB 78 */	mr r3, r31
lbl_8032FCAC:
/* 8032FCAC 0032CBEC  39 61 00 30 */	addi r11, r1, 0x30
/* 8032FCB0 0032CBF0  48 03 25 71 */	bl _restgpr_27
/* 8032FCB4 0032CBF4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8032FCB8 0032CBF8  7C 08 03 A6 */	mtlr r0
/* 8032FCBC 0032CBFC  38 21 00 30 */	addi r1, r1, 0x30
/* 8032FCC0 0032CC00  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_entryTexMtxAnimator
J3DMaterialTable_NS_entryTexMtxAnimator:
/* 8032FCC4 0032CC04  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8032FCC8 0032CC08  7C 08 02 A6 */	mflr r0
/* 8032FCCC 0032CC0C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8032FCD0 0032CC10  39 61 00 40 */	addi r11, r1, 0x40
/* 8032FCD4 0032CC14  48 03 24 ED */	bl func_803621C0
/* 8032FCD8 0032CC18  7C 78 1B 78 */	mr r24, r3
/* 8032FCDC 0032CC1C  7C 99 23 78 */	mr r25, r4
/* 8032FCE0 0032CC20  A0 A4 00 14 */	lhz r5, 0x14(r4)
/* 8032FCE4 0032CC24  38 00 00 03 */	li r0, 3
/* 8032FCE8 0032CC28  7C 05 03 D6 */	divw r0, r5, r0
/* 8032FCEC 0032CC2C  54 1F 04 3E */	clrlwi r31, r0, 0x10
/* 8032FCF0 0032CC30  4B FF FC D1 */	bl J3DMaterialTable_NS_createTexMtxForAnimator
/* 8032FCF4 0032CC34  7C 7C 1B 79 */	or. r28, r3, r3
/* 8032FCF8 0032CC38  41 82 00 08 */	beq lbl_8032FD00
/* 8032FCFC 0032CC3C  48 00 01 5C */	b lbl_8032FE58
lbl_8032FD00:
/* 8032FD00 0032CC40  A0 18 00 1C */	lhz r0, 0x1c(r24)
/* 8032FD04 0032CC44  28 00 00 01 */	cmplwi r0, 1
/* 8032FD08 0032CC48  40 82 00 0C */	bne lbl_8032FD14
/* 8032FD0C 0032CC4C  38 60 00 02 */	li r3, 2
/* 8032FD10 0032CC50  48 00 01 48 */	b lbl_8032FE58
lbl_8032FD14:
/* 8032FD14 0032CC54  3B 60 00 00 */	li r27, 0
/* 8032FD18 0032CC58  48 00 01 30 */	b lbl_8032FE48
lbl_8032FD1C:
/* 8032FD1C 0032CC5C  80 79 00 2C */	lwz r3, 0x2c(r25)
/* 8032FD20 0032CC60  57 7D 04 3E */	clrlwi r29, r27, 0x10
/* 8032FD24 0032CC64  57 60 0B FC */	rlwinm r0, r27, 1, 0xf, 0x1e
/* 8032FD28 0032CC68  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032FD2C 0032CC6C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032FD30 0032CC70  41 82 01 14 */	beq lbl_8032FE44
/* 8032FD34 0032CC74  80 78 00 08 */	lwz r3, 8(r24)
/* 8032FD38 0032CC78  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032FD3C 0032CC7C  7E E3 00 2E */	lwzx r23, r3, r0
/* 8032FD40 0032CC80  83 D7 00 3C */	lwz r30, 0x3c(r23)
/* 8032FD44 0032CC84  3C 00 C0 00 */	lis r0, 0xc000
/* 8032FD48 0032CC88  7C 1E 00 40 */	cmplw r30, r0
/* 8032FD4C 0032CC8C  40 80 00 08 */	bge lbl_8032FD54
/* 8032FD50 0032CC90  48 00 00 08 */	b lbl_8032FD58
lbl_8032FD54:
/* 8032FD54 0032CC94  3B C0 00 00 */	li r30, 0
lbl_8032FD58:
/* 8032FD58 0032CC98  80 79 00 28 */	lwz r3, 0x28(r25)
/* 8032FD5C 0032CC9C  7C 03 E8 AE */	lbzx r0, r3, r29
/* 8032FD60 0032CCA0  7C 1A 03 78 */	mr r26, r0
/* 8032FD64 0032CCA4  28 1E 00 00 */	cmplwi r30, 0
/* 8032FD68 0032CCA8  40 82 00 0C */	bne lbl_8032FD74
/* 8032FD6C 0032CCAC  3B 80 00 01 */	li r28, 1
/* 8032FD70 0032CCB0  48 00 00 D4 */	b lbl_8032FE44
lbl_8032FD74:
/* 8032FD74 0032CCB4  54 16 06 3E */	clrlwi r22, r0, 0x18
/* 8032FD78 0032CCB8  28 16 00 FF */	cmplwi r22, 0xff
/* 8032FD7C 0032CCBC  41 82 00 C8 */	beq lbl_8032FE44
/* 8032FD80 0032CCC0  80 77 00 28 */	lwz r3, 0x28(r23)
/* 8032FD84 0032CCC4  7E C4 B3 78 */	mr r4, r22
/* 8032FD88 0032CCC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8032FD8C 0032CCCC  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8032FD90 0032CCD0  7D 89 03 A6 */	mtctr r12
/* 8032FD94 0032CCD4  4E 80 04 21 */	bctrl 
/* 8032FD98 0032CCD8  28 03 00 00 */	cmplwi r3, 0
/* 8032FD9C 0032CCDC  41 82 00 2C */	beq lbl_8032FDC8
/* 8032FDA0 0032CCE0  80 77 00 28 */	lwz r3, 0x28(r23)
/* 8032FDA4 0032CCE4  7E C4 B3 78 */	mr r4, r22
/* 8032FDA8 0032CCE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8032FDAC 0032CCEC  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8032FDB0 0032CCF0  7D 89 03 A6 */	mtctr r12
/* 8032FDB4 0032CCF4  4E 80 04 21 */	bctrl 
/* 8032FDB8 0032CCF8  7E C0 B3 78 */	mr r0, r22
/* 8032FDBC 0032CCFC  1C 80 00 03 */	mulli r4, r0, 3
/* 8032FDC0 0032CD00  38 04 00 1E */	addi r0, r4, 0x1e
/* 8032FDC4 0032CD04  98 03 00 02 */	stb r0, 2(r3)
lbl_8032FDC8:
/* 8032FDC8 0032CD08  80 77 00 28 */	lwz r3, 0x28(r23)
/* 8032FDCC 0032CD0C  7E C4 B3 78 */	mr r4, r22
/* 8032FDD0 0032CD10  81 83 00 00 */	lwz r12, 0(r3)
/* 8032FDD4 0032CD14  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8032FDD8 0032CD18  7D 89 03 A6 */	mtctr r12
/* 8032FDDC 0032CD1C  4E 80 04 21 */	bctrl 
/* 8032FDE0 0032CD20  88 83 00 01 */	lbz r4, 1(r3)
/* 8032FDE4 0032CD24  80 19 00 78 */	lwz r0, 0x78(r25)
/* 8032FDE8 0032CD28  54 00 38 30 */	slwi r0, r0, 7
/* 8032FDEC 0032CD2C  50 80 06 BE */	rlwimi r0, r4, 0, 0x1a, 0x1f
/* 8032FDF0 0032CD30  98 03 00 01 */	stb r0, 1(r3)
/* 8032FDF4 0032CD34  80 99 00 40 */	lwz r4, 0x40(r25)
/* 8032FDF8 0032CD38  1C BD 00 0C */	mulli r5, r29, 0xc
/* 8032FDFC 0032CD3C  7C 04 2C 2E */	lfsx f0, r4, r5
/* 8032FE00 0032CD40  D0 03 00 04 */	stfs f0, 4(r3)
/* 8032FE04 0032CD44  80 19 00 40 */	lwz r0, 0x40(r25)
/* 8032FE08 0032CD48  7C 80 2A 14 */	add r4, r0, r5
/* 8032FE0C 0032CD4C  C0 04 00 04 */	lfs f0, 4(r4)
/* 8032FE10 0032CD50  D0 03 00 08 */	stfs f0, 8(r3)
/* 8032FE14 0032CD54  80 19 00 40 */	lwz r0, 0x40(r25)
/* 8032FE18 0032CD58  7C 80 2A 14 */	add r4, r0, r5
/* 8032FE1C 0032CD5C  C0 04 00 08 */	lfs f0, 8(r4)
/* 8032FE20 0032CD60  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8032FE24 0032CD64  B3 61 00 08 */	sth r27, 8(r1)
/* 8032FE28 0032CD68  38 00 00 01 */	li r0, 1
/* 8032FE2C 0032CD6C  B0 01 00 0A */	sth r0, 0xa(r1)
/* 8032FE30 0032CD70  93 21 00 0C */	stw r25, 0xc(r1)
/* 8032FE34 0032CD74  7F C3 F3 78 */	mr r3, r30
/* 8032FE38 0032CD78  57 44 06 3E */	clrlwi r4, r26, 0x18
/* 8032FE3C 0032CD7C  38 A1 00 08 */	addi r5, r1, 8
/* 8032FE40 0032CD80  4B FF C7 A5 */	bl J3DMaterialAnm_NS_setTexMtxAnm
lbl_8032FE44:
/* 8032FE44 0032CD84  3B 7B 00 01 */	addi r27, r27, 1
lbl_8032FE48:
/* 8032FE48 0032CD88  57 60 04 3E */	clrlwi r0, r27, 0x10
/* 8032FE4C 0032CD8C  7C 00 F8 40 */	cmplw r0, r31
/* 8032FE50 0032CD90  41 80 FE CC */	blt lbl_8032FD1C
/* 8032FE54 0032CD94  7F 83 E3 78 */	mr r3, r28
lbl_8032FE58:
/* 8032FE58 0032CD98  39 61 00 40 */	addi r11, r1, 0x40
/* 8032FE5C 0032CD9C  48 03 23 B1 */	bl func_8036220C
/* 8032FE60 0032CDA0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8032FE64 0032CDA4  7C 08 03 A6 */	mtlr r0
/* 8032FE68 0032CDA8  38 21 00 40 */	addi r1, r1, 0x40
/* 8032FE6C 0032CDAC  4E 80 00 20 */	blr 

.global J3DMaterialTable_NS_entryTevRegAnimator
J3DMaterialTable_NS_entryTevRegAnimator:
/* 8032FE70 0032CDB0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8032FE74 0032CDB4  7C 08 02 A6 */	mflr r0
/* 8032FE78 0032CDB8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8032FE7C 0032CDBC  39 61 00 30 */	addi r11, r1, 0x30
/* 8032FE80 0032CDC0  48 03 23 51 */	bl _savegpr_26
/* 8032FE84 0032CDC4  7C 7B 1B 78 */	mr r27, r3
/* 8032FE88 0032CDC8  7C 9C 23 78 */	mr r28, r4
/* 8032FE8C 0032CDCC  3B C0 00 00 */	li r30, 0
/* 8032FE90 0032CDD0  A0 64 00 0C */	lhz r3, 0xc(r4)
/* 8032FE94 0032CDD4  A3 E4 00 0E */	lhz r31, 0xe(r4)
/* 8032FE98 0032CDD8  A0 1B 00 1C */	lhz r0, 0x1c(r27)
/* 8032FE9C 0032CDDC  28 00 00 01 */	cmplwi r0, 1
/* 8032FEA0 0032CDE0  40 82 00 0C */	bne lbl_8032FEAC
/* 8032FEA4 0032CDE4  38 60 00 02 */	li r3, 2
/* 8032FEA8 0032CDE8  48 00 01 2C */	b lbl_8032FFD4
lbl_8032FEAC:
/* 8032FEAC 0032CDEC  3B A0 00 00 */	li r29, 0
/* 8032FEB0 0032CDF0  54 7A 04 3E */	clrlwi r26, r3, 0x10
/* 8032FEB4 0032CDF4  48 00 00 80 */	b lbl_8032FF34
lbl_8032FEB8:
/* 8032FEB8 0032CDF8  80 7C 00 20 */	lwz r3, 0x20(r28)
/* 8032FEBC 0032CDFC  57 A4 04 3E */	clrlwi r4, r29, 0x10
/* 8032FEC0 0032CE00  57 A0 0B FC */	rlwinm r0, r29, 1, 0xf, 0x1e
/* 8032FEC4 0032CE04  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032FEC8 0032CE08  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032FECC 0032CE0C  41 82 00 64 */	beq lbl_8032FF30
/* 8032FED0 0032CE10  80 7B 00 08 */	lwz r3, 8(r27)
/* 8032FED4 0032CE14  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032FED8 0032CE18  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032FEDC 0032CE1C  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032FEE0 0032CE20  3C 00 C0 00 */	lis r0, 0xc000
/* 8032FEE4 0032CE24  7C 03 00 40 */	cmplw r3, r0
/* 8032FEE8 0032CE28  40 80 00 08 */	bge lbl_8032FEF0
/* 8032FEEC 0032CE2C  48 00 00 08 */	b lbl_8032FEF4
lbl_8032FEF0:
/* 8032FEF0 0032CE30  38 60 00 00 */	li r3, 0
lbl_8032FEF4:
/* 8032FEF4 0032CE34  80 BC 00 48 */	lwz r5, 0x48(r28)
/* 8032FEF8 0032CE38  1C 84 00 1C */	mulli r4, r4, 0x1c
/* 8032FEFC 0032CE3C  38 04 00 18 */	addi r0, r4, 0x18
/* 8032FF00 0032CE40  7C 85 00 AE */	lbzx r4, r5, r0
/* 8032FF04 0032CE44  28 03 00 00 */	cmplwi r3, 0
/* 8032FF08 0032CE48  40 82 00 0C */	bne lbl_8032FF14
/* 8032FF0C 0032CE4C  3B C0 00 01 */	li r30, 1
/* 8032FF10 0032CE50  48 00 00 20 */	b lbl_8032FF30
lbl_8032FF14:
/* 8032FF14 0032CE54  B3 A1 00 10 */	sth r29, 0x10(r1)
/* 8032FF18 0032CE58  38 00 00 01 */	li r0, 1
/* 8032FF1C 0032CE5C  B0 01 00 12 */	sth r0, 0x12(r1)
/* 8032FF20 0032CE60  93 81 00 14 */	stw r28, 0x14(r1)
/* 8032FF24 0032CE64  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8032FF28 0032CE68  38 A1 00 10 */	addi r5, r1, 0x10
/* 8032FF2C 0032CE6C  4B FF C7 39 */	bl J3DMaterialAnm_NS_setTevColorAnm
lbl_8032FF30:
/* 8032FF30 0032CE70  3B BD 00 01 */	addi r29, r29, 1
lbl_8032FF34:
/* 8032FF34 0032CE74  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 8032FF38 0032CE78  7C 00 D0 40 */	cmplw r0, r26
/* 8032FF3C 0032CE7C  41 80 FF 7C */	blt lbl_8032FEB8
/* 8032FF40 0032CE80  3B A0 00 00 */	li r29, 0
/* 8032FF44 0032CE84  57 FF 04 3E */	clrlwi r31, r31, 0x10
/* 8032FF48 0032CE88  48 00 00 7C */	b lbl_8032FFC4
lbl_8032FF4C:
/* 8032FF4C 0032CE8C  80 7C 00 34 */	lwz r3, 0x34(r28)
/* 8032FF50 0032CE90  57 A4 04 3E */	clrlwi r4, r29, 0x10
/* 8032FF54 0032CE94  57 A0 0B FC */	rlwinm r0, r29, 1, 0xf, 0x1e
/* 8032FF58 0032CE98  7C 03 02 2E */	lhzx r0, r3, r0
/* 8032FF5C 0032CE9C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8032FF60 0032CEA0  41 82 00 60 */	beq lbl_8032FFC0
/* 8032FF64 0032CEA4  80 7B 00 08 */	lwz r3, 8(r27)
/* 8032FF68 0032CEA8  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8032FF6C 0032CEAC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8032FF70 0032CEB0  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8032FF74 0032CEB4  3C 00 C0 00 */	lis r0, 0xc000
/* 8032FF78 0032CEB8  7C 03 00 40 */	cmplw r3, r0
/* 8032FF7C 0032CEBC  40 80 00 08 */	bge lbl_8032FF84
/* 8032FF80 0032CEC0  48 00 00 08 */	b lbl_8032FF88
lbl_8032FF84:
/* 8032FF84 0032CEC4  38 60 00 00 */	li r3, 0
lbl_8032FF88:
/* 8032FF88 0032CEC8  80 BC 00 4C */	lwz r5, 0x4c(r28)
/* 8032FF8C 0032CECC  1C 84 00 1C */	mulli r4, r4, 0x1c
/* 8032FF90 0032CED0  38 04 00 18 */	addi r0, r4, 0x18
/* 8032FF94 0032CED4  7C 85 00 AE */	lbzx r4, r5, r0
/* 8032FF98 0032CED8  28 03 00 00 */	cmplwi r3, 0
/* 8032FF9C 0032CEDC  40 82 00 0C */	bne lbl_8032FFA8
/* 8032FFA0 0032CEE0  3B C0 00 01 */	li r30, 1
/* 8032FFA4 0032CEE4  48 00 00 1C */	b lbl_8032FFC0
lbl_8032FFA8:
/* 8032FFA8 0032CEE8  B3 A1 00 08 */	sth r29, 8(r1)
/* 8032FFAC 0032CEEC  38 00 00 01 */	li r0, 1
/* 8032FFB0 0032CEF0  B0 01 00 0A */	sth r0, 0xa(r1)
/* 8032FFB4 0032CEF4  93 81 00 0C */	stw r28, 0xc(r1)
/* 8032FFB8 0032CEF8  38 A1 00 08 */	addi r5, r1, 8
/* 8032FFBC 0032CEFC  4B FF C6 E9 */	bl J3DMaterialAnm_NS_setTevKColorAnm
lbl_8032FFC0:
/* 8032FFC0 0032CF00  3B BD 00 01 */	addi r29, r29, 1
lbl_8032FFC4:
/* 8032FFC4 0032CF04  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 8032FFC8 0032CF08  7C 00 F8 40 */	cmplw r0, r31
/* 8032FFCC 0032CF0C  41 80 FF 80 */	blt lbl_8032FF4C
/* 8032FFD0 0032CF10  7F C3 F3 78 */	mr r3, r30
lbl_8032FFD4:
/* 8032FFD4 0032CF14  39 61 00 30 */	addi r11, r1, 0x30
/* 8032FFD8 0032CF18  48 03 22 45 */	bl _restgpr_26
/* 8032FFDC 0032CF1C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8032FFE0 0032CF20  7C 08 03 A6 */	mtlr r0
/* 8032FFE4 0032CF24  38 21 00 30 */	addi r1, r1, 0x30
/* 8032FFE8 0032CF28  4E 80 00 20 */	blr 
