lbl_8046759C:
/* 8046759C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804675A0  7C 08 02 A6 */	mflr r0
/* 804675A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 804675A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804675AC  93 C1 00 08 */	stw r30, 8(r1)
/* 804675B0  7C 7E 1B 78 */	mr r30, r3
/* 804675B4  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 804675B8  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 804675BC  38 80 00 10 */	li r4, 0x10
/* 804675C0  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 804675C4  38 DE 01 0C */	addi r6, r30, 0x10c
/* 804675C8  4B D3 C1 FD */	bl settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c
/* 804675CC  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 804675D0  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 804675D4  80 9E 05 B0 */	lwz r4, 0x5b0(r30)
/* 804675D8  80 84 00 04 */	lwz r4, 4(r4)
/* 804675DC  38 BE 01 0C */	addi r5, r30, 0x10c
/* 804675E0  4B D3 D7 C1 */	bl setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c
/* 804675E4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 804675E8  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 804675EC  80 04 5F 70 */	lwz r0, 0x5f70(r4)
/* 804675F0  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 804675F4  3B E3 4A C8 */	addi r31, r3, j3dSys@l /* 0x80434AC8@l */
/* 804675F8  90 1F 00 48 */	stw r0, 0x48(r31)
/* 804675FC  80 04 5F 74 */	lwz r0, 0x5f74(r4)
/* 80467600  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 80467604  80 7E 05 B0 */	lwz r3, 0x5b0(r30)
/* 80467608  4B BA 66 BD */	bl mDoExt_modelUpdateDL__FP8J3DModel
/* 8046760C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80467610  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80467614  80 03 5F 80 */	lwz r0, 0x5f80(r3)
/* 80467618  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8046761C  80 03 5F 84 */	lwz r0, 0x5f84(r3)
/* 80467620  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 80467624  38 60 00 01 */	li r3, 1
/* 80467628  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8046762C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80467630  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80467634  7C 08 03 A6 */	mtlr r0
/* 80467638  38 21 00 10 */	addi r1, r1, 0x10
/* 8046763C  4E 80 00 20 */	blr 
