/* Object #30 frmSort -- ESTIMATED function range; public methods per VB header: CorrectOrder, Setup */
#include "ghidra_types.h"

/* ---- 0x4752a0 (FUN_004752a0) [estimated] strings:  ---- */
undefined4 __cdecl FUN_004752a0(uint param_1)

{
  bool bVar1;
  code *pcVar2;
  short sVar3;
  undefined2 uVar4;
  int *******pppppppiVar5;
  int *******pppppppiVar6;
  int ******ppppppiVar7;
  code ******ppppppcVar8;
  int ******ppppppiVar9;
  undefined4 uVar10;
  int iVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  undefined4 *puVar14;
  code *******pppppppcVar15;
  int *******pppppppiVar16;
  undefined2 uVar18;
  int *piVar17;
  ushort uVar19;
  code ******ppppppcStack_218;
  code ******ppppppcStack_214;
  code ******ppppppcStack_210;
  code ******ppppppcStack_20c;
  code ******ppppppcStack_208;
  code ******ppppppcStack_204;
  code ******ppppppcStack_200;
  code ******ppppppcStack_1fc;
  code ******ppppppcStack_1f8;
  code ******ppppppcStack_1f4;
  code ******ppppppcStack_1f0;
  code ******ppppppcStack_1ec;
  code ******ppppppcStack_1e8;
  code ****ppppcStack_1e4;
  code ******ppppppcStack_1e0;
  code *****pppppcStack_1dc;
  int ******ppppppiStack_1d8;
  int ******ppppppiStack_1d4;
  code *pcStack_1d0;
  code ******ppppppcStack_1a4;
  code ******ppppppcStack_198;
  code *****pppppcStack_190;
  undefined4 auStack_18c [6];
  code ******ppppppcStack_174;
  code *****apppppcStack_170 [5];
  undefined4 uStack_15c;
  code ******ppppppcStack_158;
  code ******ppppppcStack_150;
  code *****pppppcStack_14c;
  undefined4 uStack_148;
  int ******ppppppiStack_144;
  code ******ppppppcStack_140;
  undefined4 auStack_13c [2];
  undefined4 uStack_134;
  code *****apppppcStack_12c [2];
  undefined4 uStack_124;
  code *****apppppcStack_11c [2];
  undefined4 uStack_114;
  code *****pppppcStack_10c;
  code ******ppppppcStack_108;
  code ******ppppppcStack_104;
  code ******ppppppcStack_100;
  undefined *puStack_fc;
  undefined4 auStack_f8 [4];
  undefined4 uStack_e8;
  code ******ppppppcStack_e4;
  code *****pppppcStack_e0;
  int *****pppppiStack_dc;
  int ******ppppppiStack_d8;
  code ******ppppppcStack_d4;
  code ******ppppppcStack_d0;
  int ******ppppppiStack_cc;
  int ******ppppppiStack_c8;
  int ******ppppppiStack_c4;
  int ******ppppppiStack_c0;
  int ******ppppppiStack_bc;
  int ******ppppppiStack_b8;
  int ******ppppppiStack_b4;
  int ******ppppppiStack_b0;
  int ******ppppppiStack_ac;
  int ******ppppppiStack_a8;
  int ******ppppppiStack_a4;
  int local_54;
  code ****local_50;
  code ****local_4c [2];
  int *local_44;
  int *****local_3c;
  int ******local_38;
  code *****local_34;
  int ******local_30;
  int *****local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff60;
  local_c = &DAT_00402e58;
  local_8 = param_1 & 1;
  pppppppiVar16 = (int *******)(param_1 & 0xfffffffe);
  ppppppiStack_a8 = (int ******)0x4752e0;
  ExceptionList = &pvStack_18;
  ppppppiStack_a4 = (int ******)pppppppiVar16;
  (*(code *)(*pppppppiVar16)[1])();
  local_20 = 0;
  local_28 = 0;
  local_2c = (int *****)0x0;
  local_30 = (int ******)0x0;
  local_34 = (code *****)0x0;
  local_38 = (int ******)0x0;
  local_3c = (int *****)0x0;
  local_4c[0] = (code ****)0x0;
  local_50 = (code ****)0x0;
  local_54 = 0;
  local_24 = 1;
  if (DAT_00480244 == (int *******)0x0) {
    ppppppiStack_a8 = (int ******)&DAT_00480244;
    ppppppiStack_ac = (int ******)&DAT_00413b34;
    ppppppiStack_b0 = (int ******)0x475323;
    __vbaNew2();
  }
  pppppppiVar6 = DAT_00480244;
  ppppppiStack_a8 = (int ******)&local_30;
  ppppppiStack_ac = (int ******)DAT_00480244;
  ppppppiStack_b0 = (int ******)0x475333;
  pppppppiVar5 = (int *******)(*(code *)(*DAT_00480244)[6])();
  pcVar2 = __vbaHresultCheckObj_exref;
  if ((int)pppppppiVar5 < 0) {
    ppppppiStack_b0 = (int ******)0x18;
    ppppppiStack_b4 = (int ******)&DAT_00413b24;
    ppppppiStack_b8 = (int ******)pppppppiVar6;
    ppppppiStack_c0 = (int ******)0x47534a;
    ppppppiStack_bc = (int ******)pppppppiVar5;
    __vbaHresultCheckObj();
  }
  ppppppiVar9 = local_30;
  ppppppiVar7 = (int ******)*local_30;
  ppppppiStack_b0 = (int ******)0x475365;
  ppppppiStack_ac = (int ******)__vbaI2I4();
  ppppppiStack_b0 = ppppppiVar9;
  ppppppiStack_b4 = (int ******)0x47536f;
  pppppppiVar6 = (int *******)(*(code *)ppppppiVar7[0x1f])();
  if ((int)pppppppiVar6 < 0) {
    ppppppiStack_b4 = (int ******)0x7c;
    ppppppiStack_b8 = (int ******)&DAT_0041490c;
    ppppppiStack_bc = ppppppiVar9;
    ppppppiStack_c4 = (int ******)0x475380;
    ppppppiStack_c0 = (int ******)pppppppiVar6;
    __vbaHresultCheckObj();
  }
  ppppppiStack_b4 = (int ******)0x475389;
  __vbaFreeObj();
  iVar11 = local_24;
  do {
    local_24 = iVar11;
    ppppppiStack_b8 = pppppppiVar16[0xe];
    ppppppiStack_b4 = (int ******)&local_30;
    ppppppiStack_bc = (int ******)0x475396;
    ppppppiVar7 = (int ******)(*(code *)(*ppppppiStack_b8)[0x1b])();
    if ((int)ppppppiVar7 < 0) {
      ppppppiStack_c4 = pppppppiVar16[0xe];
      ppppppiStack_bc = (int ******)0x6c;
      ppppppiStack_c0 = (int ******)&LAB_004133e8;
      ppppppiStack_cc = (int ******)0x4753aa;
      ppppppiStack_c8 = ppppppiVar7;
      __vbaHresultCheckObj();
    }
    ppppppiVar7 = local_30;
    ppppppiStack_bc = (int ******)&local_54;
    ppppppiStack_c0 = local_30;
    ppppppiStack_c4 = (int ******)0x4753b9;
    ppppppcVar8 = (code ******)(*(code *)(*local_30)[0xd])();
    if ((int)ppppppcVar8 < 0) {
      ppppppiStack_c4 = (int ******)0x34;
      ppppppiStack_c8 = (int ******)&DAT_004146fc;
      ppppppiStack_cc = ppppppiVar7;
      ppppppcStack_d4 = (code ******)0x4753ca;
      ppppppcStack_d0 = ppppppcVar8;
      __vbaHresultCheckObj();
    }
    bVar1 = local_54 < local_24;
    ppppppiStack_c4 = (int ******)0x4753e5;
    __vbaFreeObj();
    if (bVar1) {
      if (DAT_00480244 == (int *******)0x0) {
        ppppppiStack_c4 = (int ******)&DAT_00480244;
        ppppppiStack_c8 = (int ******)&DAT_00413b34;
        ppppppiStack_cc = (int ******)0x47569b;
        __vbaNew2();
      }
      pppppppiVar6 = DAT_00480244;
      ppppppiStack_c4 = (int ******)&local_30;
      ppppppiStack_c8 = (int ******)DAT_00480244;
      ppppppiStack_cc = (int ******)0x4756ab;
      pppppppiVar5 = (int *******)(*(code *)(*DAT_00480244)[6])();
      if ((int)pppppppiVar5 < 0) {
        ppppppiStack_cc = (int ******)0x18;
        ppppppcStack_d0 = (code ******)&DAT_00413b24;
        ppppppcStack_d4 = (code ******)pppppppiVar6;
        pppppiStack_dc = (int *****)0x4756bc;
        ppppppiStack_d8 = (int ******)pppppppiVar5;
        __vbaHresultCheckObj();
      }
      ppppppiVar9 = local_30;
      ppppppiVar7 = (int ******)*local_30;
      ppppppiStack_cc = (int ******)0x4756cc;
      ppppppiStack_c8 = (int ******)__vbaI2I4();
      ppppppiStack_cc = ppppppiVar9;
      ppppppcStack_d0 = (code ******)0x4756e0;
      ppppppiVar7 = (int ******)(*(code *)ppppppiVar7[0x1f])();
      if ((int)ppppppiVar7 < 0) {
        ppppppcStack_d0 = (code ******)0x7c;
        ppppppcStack_d4 = (code ******)&DAT_0041490c;
        ppppppiStack_d8 = ppppppiVar9;
        pppppcStack_e0 = (code *****)0x4756f1;
        pppppiStack_dc = (int *****)ppppppiVar7;
        __vbaHresultCheckObj();
      }
      ppppppcStack_d0 = (code ******)0x4756fa;
      __vbaFreeObj();
      ppppppcStack_d4 = (code ******)pppppppiVar16[0xd];
      ppppppcStack_d0 = (code ******)&local_50;
      local_50 = (code ****)0xffffffff;
      ppppppiStack_d8 = (int ******)0x475711;
      ppppppcVar8 = (code ******)(*(code *)(*ppppppcStack_d4)[0x1cb])();
      if ((int)ppppppcVar8 < 0) {
        pppppcStack_e0 = (code *****)pppppppiVar16[0xd];
        ppppppiStack_d8 = (int ******)0x72c;
        pppppiStack_dc = (int *****)&DAT_00413728;
        uStack_e8 = 0x475728;
        ppppppcStack_e4 = ppppppcVar8;
        __vbaHresultCheckObj();
      }
      local_8 = 0;
      ppppppiStack_d8 = (int ******)&LAB_0047575d;
      pppppiStack_dc = (int *****)0x47575c;
      uVar10 = __vbaFreeObj();
      return uVar10;
    }
    ppppppiStack_c8 = pppppppiVar16[0xe];
    ppppppiStack_c4 = (int ******)&local_30;
    ppppppiStack_cc = (int ******)0x4753fb;
    ppppppiStack_d8 = (int ******)(*(code *)(*ppppppiStack_c8)[0x1b])();
    if ((int)ppppppiStack_d8 < 0) {
      ppppppcStack_d4 = (code ******)pppppppiVar16[0xe];
      ppppppiStack_cc = (int ******)0x6c;
      ppppppcStack_d0 = (code ******)&LAB_004133e8;
      pppppiStack_dc = (int *****)0x47540f;
      __vbaHresultCheckObj();
    }
    ppppppiVar7 = local_30;
    local_44 = &local_24;
    ppppppiStack_cc = (int ******)&local_34;
    ppppppcStack_d0 = (code ******)local_4c;
    local_4c[0] = (code ****)0x4003;
    ppppppcStack_d4 = (code ******)local_30;
    ppppppiStack_d8 = (int ******)0x47542f;
    pppppppiVar6 = (int *******)(*(code *)(*local_30)[9])();
    uVar19 = 0;
    if ((int)pppppppiVar6 < 0) {
      ppppppiStack_b4 = (int ******)0x24;
      ppppppiStack_b8 = (int ******)&DAT_004146fc;
      ppppppiStack_bc = ppppppiVar7;
      ppppppiStack_c4 = (int ******)0x475440;
      ppppppiStack_c0 = (int ******)pppppppiVar6;
      __vbaHresultCheckObj();
    }
    ppppppiStack_b8 = &local_2c;
    ppppppiStack_b4 = (int ******)local_34;
    local_34 = (code *****)0x0;
    ppppppiStack_bc = (int ******)0x475455;
    __vbaObjSet();
    ppppppiStack_b4 = (int ******)0x47545e;
    __vbaFreeObj();
    local_1c = 0;
    local_28 = local_24;
    while( true ) {
      pppppppiVar6 = (int *******)(local_28 - local_1c);
      if (SBORROW4(local_28,local_1c)) goto LAB_00475781;
      if ((int)pppppppiVar6 < 2) break;
      if (SCARRY4(local_28,local_1c)) goto LAB_00475781;
      if (DAT_0047f000 != 0) {
        ppppppiStack_b4 = (int ******)0x40000000;
        ppppppiStack_b8 = (int ******)0x0;
        ppppppiStack_bc = (int ******)0x4754c5;
        adj_fdiv_m64();
      }
      if ((uVar19 & 0xd) != 0) {
        uVar10 = __vbaFPException();
        return uVar10;
      }
      ppppppiStack_b4 = (int ******)0x4754d5;
      local_20 = __vbaFpI4();
      ppppppiStack_b8 = pppppppiVar16[0xe];
      ppppppiStack_b4 = (int ******)&local_30;
      ppppppiStack_bc = (int ******)0x4754e5;
      ppppppiStack_c8 = (int ******)(*(code *)(*ppppppiStack_b8)[0x1b])();
      if ((int)ppppppiStack_c8 < 0) {
        ppppppiStack_c4 = pppppppiVar16[0xe];
        ppppppiStack_bc = (int ******)0x6c;
        ppppppiStack_c0 = (int ******)&LAB_004133e8;
        ppppppiStack_cc = (int ******)0x4754f9;
        __vbaHresultCheckObj();
      }
      ppppppiVar7 = local_30;
      local_44 = &local_20;
      ppppppiStack_bc = (int ******)&local_34;
      ppppppiStack_c0 = (int ******)local_4c;
      local_4c[0] = (code ****)0x4003;
      ppppppiStack_c4 = local_30;
      ppppppiStack_c8 = (int ******)0x475519;
      pppppppiVar6 = (int *******)(*(code *)(*local_30)[9])();
      uVar19 = 0;
      if ((int)pppppppiVar6 < 0) {
        ppppppiStack_c8 = (int ******)0x24;
        ppppppiStack_cc = (int ******)&DAT_004146fc;
        ppppppcStack_d0 = (code ******)ppppppiVar7;
        ppppppiStack_d8 = (int ******)0x47552a;
        ppppppcStack_d4 = (code ******)pppppppiVar6;
        __vbaHresultCheckObj();
      }
      ppppppiStack_c8 = (int ******)local_34;
      local_34 = (code *****)0x0;
      ppppppiStack_cc = (int ******)&local_38;
      ppppppcStack_d0 = (code ******)0x47553f;
      __vbaObjSet();
      ppppppiStack_c8 = (int ******)&local_50;
      ppppppiStack_cc = (int ******)&local_38;
      ppppppcStack_d0 = (code ******)&local_2c;
      ppppppiStack_d8 = (int ******)0x475554;
      ppppppcStack_d4 = (code ******)pppppppiVar16;
      ppppppiStack_c0 = (int ******)(*(code *)(*pppppppiVar16)[0x1be])();
      if ((int)ppppppiStack_c0 < 0) {
        ppppppiStack_b4 = (int ******)0x6f8;
        ppppppiStack_b8 = (int ******)&DAT_004176a0;
        ppppppiStack_c4 = (int ******)0x475566;
        ppppppiStack_bc = (int ******)pppppppiVar16;
        __vbaHresultCheckObj();
      }
      sVar3 = (short)local_50;
      ppppppiStack_b4 = (int ******)&local_38;
      ppppppiStack_b8 = (int ******)&local_30;
      ppppppiStack_bc = (int ******)0x2;
      ppppppiStack_c0 = (int ******)0x47557a;
      __vbaFreeObjList();
      if (sVar3 == 0) {
        local_1c = local_20;
      }
      else {
        local_28 = local_20;
      }
    }
    if (local_28 < local_24) {
      ppppppiStack_b8 = pppppppiVar16[0xe];
      ppppppiStack_b4 = (int ******)&local_38;
      ppppppiStack_bc = (int ******)0x4755b6;
      ppppppiVar7 = (int ******)(*(code *)(*ppppppiStack_b8)[0x1b])();
      if ((int)ppppppiVar7 < 0) {
        ppppppiStack_c4 = pppppppiVar16[0xe];
        ppppppiStack_bc = (int ******)0x6c;
        ppppppiStack_c0 = (int ******)&LAB_004133e8;
        ppppppiStack_cc = (int ******)0x4755ca;
        ppppppiStack_c8 = ppppppiVar7;
        __vbaHresultCheckObj();
      }
      pppppppiVar6 = (int *******)local_38;
      ppppppiStack_c0 = pppppppiVar16[0xe];
      ppppppiStack_bc = (int ******)&local_30;
      ppppppiStack_c4 = (int ******)0x4755da;
      ppppppcStack_d0 = (code ******)(*(code *)(*ppppppiStack_c0)[0x1b])();
      if ((int)ppppppcStack_d0 < 0) {
        ppppppiStack_cc = pppppppiVar16[0xe];
        ppppppiStack_c4 = (int ******)0x6c;
        ppppppiStack_c8 = (int ******)&LAB_004133e8;
        ppppppcStack_d4 = (code ******)0x4755ee;
        __vbaHresultCheckObj();
      }
      ppppppiVar7 = local_30;
      local_44 = &local_28;
      ppppppiStack_c4 = (int ******)&local_34;
      ppppppiStack_c8 = (int ******)local_4c;
      local_4c[0] = (code ****)0x4003;
      ppppppiStack_cc = local_30;
      ppppppcStack_d0 = (code ******)0x47560f;
      ppppppiVar9 = (int ******)(*(code *)(*local_30)[9])();
      if ((int)ppppppiVar9 < 0) {
        ppppppcStack_d0 = (code ******)0x24;
        ppppppcStack_d4 = (code ******)&DAT_004146fc;
        ppppppiStack_d8 = ppppppiVar7;
        pppppcStack_e0 = (code *****)0x475623;
        pppppiStack_dc = (int *****)ppppppiVar9;
        __vbaHresultCheckObj();
      }
      ppppppcStack_d0 = (code ******)local_34;
      local_34 = (code *****)0x0;
      ppppppcStack_d4 = (code ******)&local_3c;
      ppppppiStack_d8 = (int ******)0x475638;
      __vbaObjSet();
      ppppppcStack_d0 = (code ******)&local_3c;
      ppppppcStack_d4 = (code ******)&local_2c;
      ppppppiStack_d8 = (int ******)pppppppiVar6;
      pppppiStack_dc = (int *****)0x475646;
      ppppppiStack_c0 = (int ******)(*(code *)(*pppppppiVar6)[0x11])();
      if ((int)ppppppiStack_c0 < 0) {
        ppppppiStack_b4 = (int ******)0x44;
        ppppppiStack_b8 = (int ******)&DAT_004146fc;
        ppppppiStack_bc = (int ******)pppppppiVar6;
        ppppppiStack_c4 = (int ******)0x475657;
        __vbaHresultCheckObj();
      }
      ppppppiStack_b4 = (int ******)&local_38;
      ppppppiStack_b8 = &local_3c;
      ppppppiStack_bc = (int ******)&local_30;
      ppppppiStack_c0 = (int ******)0x3;
      ppppppiStack_c4 = (int ******)0x47566b;
      __vbaFreeObjList();
    }
    iVar11 = local_24 + 1;
  } while (!SCARRY4(local_24,1));
LAB_00475781:
  ppppppiStack_b4 = (int ******)0x475787;
  __vbaErrorOverflow();
  ppppppiStack_c0 = (int ******)&LAB_004032d6;
  ppppppiStack_c4 = ExceptionList;
  pcStack_1d0 = pcVar2;
  ppppppiStack_bc = (int ******)&ppppppiStack_1d8;
  ppppppiStack_b8 = (int ******)&DAT_00402e68;
  ppppppiStack_b4 = (int ******)((uint)ppppppiStack_a8 & 1);
  ppppppcVar8 = (code ******)((uint)ppppppiStack_a8 & 0xfffffffe);
  ppppppcStack_1e0 = (code ******)0x4757d3;
  ExceptionList = &ppppppiStack_c4;
  pppppcStack_1dc = (code *****)ppppppcVar8;
  ppppppiStack_1d8 = (int ******)pppppppiVar6;
  ppppppiStack_1d4 = (int ******)pppppppiVar16;
  ppppppiStack_b0 = (int ******)&stack0xfffffffc;
  ppppppiStack_a8 = (int ******)ppppppcVar8;
  (*(code *)(*ppppppcVar8)[1])();
  ppppcStack_1e4 = (code ****)ppppppcVar8[0xe];
  ppppppcStack_1e0 = (code ******)&ppppppcStack_104;
  ppppppiStack_cc = (int ******)0x0;
  ppppppcStack_d0 = (code ******)0x0;
  ppppppcStack_d4 = (code ******)0x0;
  pppppiStack_dc = (int *****)0x0;
  pppppcStack_e0 = (code *****)0x0;
  ppppppcStack_e4 = (code ******)0x0;
  auStack_f8[0] = 0;
  puStack_fc = (undefined *)0x0;
  ppppppcStack_100 = (code ******)0x0;
  ppppppcStack_104 = (code ******)0x0;
  ppppppcStack_108 = (code ******)0x0;
  pppppcStack_10c = (code *****)0x0;
  apppppcStack_11c[0] = (code *****)0x0;
  apppppcStack_12c[0] = (code *****)0x0;
  auStack_13c[0] = 0;
  pppppcStack_14c = (code *****)0x0;
  apppppcStack_170[0] = (code *****)0x0;
  ppppppcStack_174 = (code ******)0x0;
  auStack_18c[0] = 0;
  pppppcStack_190 = (code *****)0x0;
  ppppppiStack_d8 = (int ******)0x1;
  uStack_15c = 0;
  ppppppcStack_1e8 = (code ******)0x475840;
  iVar11 = (*(code *)(*ppppcStack_1e4)[0x1c])();
  pcVar2 = __vbaHresultCheckObj_exref;
  if (iVar11 < 0) {
    ppppppcStack_1f0 = (code ******)ppppppcVar8[0xe];
    ppppppcStack_1e8 = (code ******)0x70;
    ppppppcStack_1ec = (code ******)&LAB_004133e8;
    ppppppcStack_1f8 = (code ******)0x47585a;
    ppppppcStack_1f4 = (code ******)iVar11;
    __vbaHresultCheckObj();
  }
  ppppppcVar8 = ppppppcStack_104;
  ppppppcStack_1e8 = (code ******)&ppppppcStack_108;
  ppppppcStack_1ec = ppppppcStack_104;
  ppppppcStack_1f0 = (code ******)0x475871;
  iVar11 = (*(code *)(*ppppppcStack_104)[0x19])();
  if (iVar11 < 0) {
    ppppppcStack_1f0 = (code ******)0x64;
    ppppppcStack_1f4 = (code ******)&LAB_004133f8;
    ppppppcStack_1f8 = ppppppcVar8;
    ppppppcStack_200 = (code ******)0x475882;
    ppppppcStack_1fc = (code ******)iVar11;
    __vbaHresultCheckObj();
  }
  ppppppcStack_1f0 = ppppppcStack_108;
  ppppppcStack_108 = (code ******)0x0;
  ppppppcStack_1f4 = (code ******)&puStack_fc;
  ppppppcStack_1f8 = (code ******)0x475893;
  __vbaObjSet();
  ppppppcStack_1f0 = (code ******)0x47589c;
  __vbaFreeObj();
  ppppppcStack_1f0 = (code ******)0x0;
  ppppppcStack_1f4 = (code ******)puStack_fc;
  ppppppcStack_1f8 = (code ******)0x4758a7;
  sVar3 = __vbaObjIs();
  if (sVar3 == 0) {
    if (DAT_0047f074 == (code *******)0x0) {
      ppppppcStack_1f0 = (code ******)&DAT_0047f074;
      ppppppcStack_1f4 = (code ******)&DAT_0040dbb8;
      ppppppcStack_1f8 = (code ******)0x4758c8;
      __vbaNew2();
    }
    pppppppcVar15 = DAT_0047f074;
    ppppppcVar8 = *DAT_0047f074;
    ppppppcStack_1f0 = (code ******)0x4758db;
    ppppppcStack_1ec = (code ******)__vbaI2I4();
    ppppppcStack_1f0 = (code ******)pppppppcVar15;
    ppppppcStack_1f4 = (code ******)0x4758e3;
    pppppppcVar12 = (code *******)(*(code *)ppppppcVar8[0x29])();
    ppppppiVar7 = ppppppiStack_d8;
    if ((int)pppppppcVar12 < 0) {
      ppppppcStack_1f4 = (code ******)0xa4;
      ppppppcStack_1f8 = (code ******)&DAT_00413d48;
      ppppppcStack_1fc = (code ******)pppppppcVar15;
      ppppppcStack_204 = (code ******)0x4758f7;
      ppppppcStack_200 = (code ******)pppppppcVar12;
      __vbaHresultCheckObj();
      ppppppiVar7 = ppppppiStack_d8;
    }
    while( true ) {
      ppppppiStack_d8 = ppppppiVar7;
      pppppppcVar15 = (code *******)ppppppiStack_a8;
      ppppppcStack_1f4 = (code ******)&ppppppcStack_104;
      ppppppcStack_1f8 = (code ******)ppppppiStack_a8[0xe];
      ppppppcStack_1fc = (code ******)0x475907;
      pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_1f8)[0x1b])();
      if ((int)pppppppcVar12 < 0) {
        ppppppcStack_204 = pppppppcVar15[0xe];
        ppppppcStack_1fc = (code ******)0x6c;
        ppppppcStack_200 = (code ******)&LAB_004133e8;
        ppppppcStack_20c = (code ******)0x47591b;
        ppppppcStack_208 = (code ******)pppppppcVar12;
        __vbaHresultCheckObj();
      }
      ppppppcVar8 = ppppppcStack_104;
      ppppppcStack_1fc = (code ******)&ppppppcStack_174;
      ppppppcStack_200 = ppppppcStack_104;
      ppppppcStack_204 = (code ******)0x47592d;
      pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_104)[0xd])();
      if ((int)pppppppcVar12 < 0) {
        ppppppcStack_204 = (code ******)0x34;
        ppppppcStack_208 = (code ******)&DAT_004146fc;
        ppppppcStack_20c = ppppppcVar8;
        ppppppcStack_214 = (code ******)0x47593e;
        ppppppcStack_210 = (code ******)pppppppcVar12;
        __vbaHresultCheckObj();
      }
      bVar1 = (int)ppppppcStack_174 <= (int)ppppppiStack_d8;
      ppppppcStack_204 = (code ******)0x47595c;
      __vbaFreeObj();
      if (bVar1) break;
      ppppppcStack_208 = pppppppcVar15[0xe];
      ppppppcStack_204 = (code ******)&ppppppcStack_104;
      ppppppcStack_20c = (code ******)0x475972;
      ppppppcStack_218 = (code ******)(*(code *)(*ppppppcStack_208)[0x1b])();
      if ((int)ppppppcStack_218 < 0) {
        ppppppcStack_214 = pppppppcVar15[0xe];
        ppppppcStack_20c = (code ******)0x6c;
        ppppppcStack_210 = (code ******)&LAB_004133e8;
        __vbaHresultCheckObj();
      }
      ppppppcVar8 = ppppppcStack_104;
      ppppppiStack_144 = (int ******)&ppppppiStack_d8;
      ppppppcStack_20c = (code ******)&ppppppcStack_108;
      ppppppcStack_210 = &pppppcStack_14c;
      pppppcStack_14c = (code *****)0x4003;
      ppppppcStack_214 = ppppppcStack_104;
      ppppppcStack_218 = (code ******)0x4759af;
      iVar11 = (*(code *)(*ppppppcStack_104)[9])();
      if (iVar11 < 0) {
        ppppppcStack_218 = (code ******)0x24;
        __vbaHresultCheckObj(iVar11,ppppppcVar8,&DAT_004146fc);
      }
      ppppppcStack_218 = ppppppcStack_108;
      ppppppcStack_108 = (code ******)0x0;
      __vbaObjSet(&pppppcStack_e0);
      ppppppcStack_218 = (code ******)0x4759e0;
      __vbaFreeObj();
      if (pppppppcVar15[0x11] == (code ******)0x1) {
        ppppppcStack_218 = (code ******)&DAT_004077b8;
        ppppppcStack_218 = (code ******)__vbaNew();
        __vbaObjSet(&ppppppcStack_d4);
      }
      ppppppcStack_218 = (code ******)&ppppppcStack_104;
      iVar11 = (*(code *)(*pppppppcVar15[0xe])[0x1b])(pppppppcVar15[0xe]);
      if (iVar11 < 0) {
        __vbaHresultCheckObj(iVar11,pppppppcVar15[0xe],&LAB_004133e8,0x6c);
      }
      pppppppcVar12 = (code *******)ppppppcStack_104;
      pppppppcVar13 =
           (code *******)(*(code *)(*ppppppcStack_104)[0xd])(ppppppcStack_104,&ppppppcStack_174);
      if ((int)pppppppcVar13 < 0) {
        ppppppcStack_1f4 = (code ******)0x34;
        ppppppcStack_1f8 = (code ******)&DAT_004146fc;
        ppppppcStack_1fc = (code ******)pppppppcVar12;
        ppppppcStack_204 = (code ******)0x475a3c;
        ppppppcStack_200 = (code ******)pppppppcVar13;
        __vbaHresultCheckObj();
      }
      ppppppcStack_198 = ppppppcStack_174;
      pppppiStack_dc = (int *****)ppppppiStack_d8;
      ppppppcStack_1f4 = (code ******)0x475a57;
      __vbaFreeObj();
      ppppppiVar7 = (int ******)pppppiStack_dc;
      while (pppppiStack_dc = (int *****)ppppppiVar7, (int)pppppiStack_dc <= (int)ppppppcStack_198)
      {
        ppppppcStack_1f8 = pppppppcVar15[0xe];
        ppppppcStack_1f4 = (code ******)&ppppppcStack_104;
        ppppppcStack_1fc = (code ******)0x475a73;
        ppppppcStack_208 = (code ******)(*(code *)(*ppppppcStack_1f8)[0x1b])();
        if ((int)ppppppcStack_208 < 0) {
          ppppppcStack_204 = pppppppcVar15[0xe];
          ppppppcStack_1fc = (code ******)0x6c;
          ppppppcStack_200 = (code ******)&LAB_004133e8;
          ppppppcStack_20c = (code ******)0x475a87;
          __vbaHresultCheckObj();
        }
        ppppppcVar8 = ppppppcStack_104;
        ppppppiStack_144 = &pppppiStack_dc;
        ppppppcStack_1fc = (code ******)&ppppppcStack_108;
        ppppppcStack_200 = &pppppcStack_14c;
        pppppcStack_14c = (code *****)0x4003;
        ppppppcStack_204 = ppppppcStack_104;
        ppppppcStack_208 = (code ******)0x475ab0;
        pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_104)[9])();
        if ((int)pppppppcVar12 < 0) {
          ppppppcStack_208 = (code ******)0x24;
          ppppppcStack_20c = (code ******)&DAT_004146fc;
          ppppppcStack_210 = ppppppcVar8;
          ppppppcStack_218 = (code ******)0x475ac1;
          ppppppcStack_214 = (code ******)pppppppcVar12;
          __vbaHresultCheckObj();
        }
        pppppppcVar12 = (code *******)__vbaObjSet_exref;
        ppppppcStack_208 = ppppppcStack_108;
        ppppppcStack_20c = (code ******)&ppppppcStack_e4;
        ppppppcStack_108 = (code ******)0x0;
        ppppppcStack_210 = (code ******)0x475ad8;
        __vbaObjSet();
        ppppppcStack_208 = (code ******)0x475ae1;
        __vbaFreeObj();
        ppppppcStack_208 = (code ******)&ppppppcStack_104;
        ppppppcStack_20c = ppppppcStack_e4;
        ppppppiStack_c8 = (int ******)0xffffffff;
        ppppppcStack_210 = (code ******)0x475af5;
        ppppppcVar8 = (code ******)(*(code *)(*ppppppcStack_e4)[0xf])();
        if ((int)ppppppcVar8 < 0) {
          ppppppcStack_1f4 = (code ******)0x3c;
          ppppppcStack_1f8 = (code ******)&LAB_0041470c;
          ppppppcStack_1fc = ppppppcStack_e4;
          ppppppcStack_204 = (code ******)0x475b09;
          ppppppcStack_200 = ppppppcVar8;
          __vbaHresultCheckObj();
        }
        ppppppcStack_1f8 = (code ******)auStack_18c;
        ppppppcStack_1f4 = ppppppcStack_104;
        ppppppcStack_104 = (code ******)0x0;
        ppppppcStack_1fc = (code ******)0x475b1d;
        ppppppcStack_1f4 = (code ******)__vbaObjSet();
        ppppppcStack_1f8 = (code ******)&ppppppcStack_d0;
        ppppppcStack_1fc = &pppppcStack_190;
        ppppppcStack_200 = (code ******)&DAT_00414bb4;
        ppppppcStack_204 = (code ******)0x475b34;
        iVar11 = __vbaForEachCollObj();
        while (iVar11 != 0) {
          ppppppcStack_1f4 = (code ******)&ppppppcStack_104;
          ppppppcStack_1f8 = ppppppcStack_d0;
          ppppppcStack_1fc = (code ******)0x475b49;
          pppppppcVar13 = (code *******)(*(code *)(*ppppppcStack_d0)[10])();
          if ((int)pppppppcVar13 < 0) {
            ppppppcStack_1f4 = (code ******)0x28;
            ppppppcStack_1f8 = (code ******)&DAT_00414bb4;
            ppppppcStack_1fc = ppppppcStack_d0;
            ppppppcStack_204 = (code ******)0x475b5d;
            ppppppcStack_200 = (code ******)pppppppcVar13;
            __vbaHresultCheckObj();
          }
          ppppppcStack_1f4 = (code ******)puStack_fc;
          ppppppcStack_1f8 = ppppppcStack_104;
          ppppppcStack_1fc = (code ******)0x475b6b;
          sVar3 = __vbaObjIs();
          uVar18 = (undefined2)((uint)pppppppcVar12 >> 0x10);
          pppppppcVar12 = (code *******)CONCAT22(uVar18,sVar3);
          ppppppcStack_1f4 = (code ******)0x475b77;
          __vbaFreeObj();
          if (sVar3 != 0) {
            ppppppcStack_1f4 = apppppcStack_170;
            apppppcStack_170[0] = (code *****)0x0;
            ppppppcStack_1f8 = ppppppcStack_d0;
            ppppppcStack_1fc = (code ******)0x475b9a;
            pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_d0)[0xe])();
            if ((int)pppppppcVar12 < 0) {
              ppppppcStack_1fc = (code ******)0x38;
              ppppppcStack_200 = (code ******)&DAT_00414bb4;
              ppppppcStack_204 = ppppppcStack_d0;
              ppppppcStack_20c = (code ******)0x475bae;
              ppppppcStack_208 = (code ******)pppppppcVar12;
              __vbaHresultCheckObj();
            }
            ppppppcStack_1fc = apppppcStack_11c;
            ppppppcStack_200 = ppppppcStack_d0;
            ppppppcStack_204 = (code ******)0x475bbb;
            pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_d0)[0xc])();
            if ((int)pppppppcVar12 < 0) {
              ppppppcStack_1f8 = (code ******)0x30;
              ppppppcStack_1fc = (code ******)&DAT_00414bb4;
              ppppppcStack_200 = ppppppcStack_d0;
              ppppppcStack_208 = (code ******)0x475bcf;
              ppppppcStack_204 = (code ******)pppppppcVar12;
              __vbaHresultCheckObj();
            }
            ppppppcStack_1f8 = apppppcStack_11c;
            ppppppcStack_1fc = (code ******)0x475bd9;
            uVar4 = rtcIsObject();
            pppppppcVar12 = (code *******)~CONCAT22(uVar18,uVar4);
            ppppppcStack_1f8 = (code ******)0x475be7;
            __vbaFreeVar();
            if ((short)pppppppcVar12 == 0) {
              ppppppcStack_1f4 = apppppcStack_11c;
              ppppppcStack_1f8 = ppppppcStack_d0;
              ppppppcStack_1fc = (code ******)0x475bfd;
              pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_d0)[0xc])();
              if ((int)pppppppcVar12 < 0) {
                ppppppcStack_1fc = (code ******)0x30;
                ppppppcStack_200 = (code ******)&DAT_00414bb4;
                ppppppcStack_204 = ppppppcStack_d0;
                ppppppcStack_20c = (code ******)0x475c11;
                ppppppcStack_208 = (code ******)pppppppcVar12;
                __vbaHresultCheckObj();
              }
              ppppppcStack_200 = apppppcStack_11c;
              ppppppcStack_1fc = (code ******)&LAB_0041470c;
              ppppppcStack_204 = (code ******)0x475c20;
              ppppppcStack_1fc = (code ******)__vbaCastObjVar();
              ppppppcStack_200 = (code ******)&ppppppiStack_cc;
              ppppppcStack_204 = (code ******)0x475c2b;
              __vbaObjSet();
              ppppppcStack_1fc = (code ******)0x475c34;
              __vbaFreeVar();
              ppppppcStack_1fc = pppppppcVar15[0xe];
              ppppppcStack_1f8 = (code ******)&ppppppcStack_104;
              ppppppcStack_200 = (code ******)0x475c41;
              ppppppcStack_20c = (code ******)(*(code *)(*ppppppcStack_1fc)[0x1b])();
              if ((int)ppppppcStack_20c < 0) {
                ppppppcStack_208 = pppppppcVar15[0xe];
                ppppppcStack_200 = (code ******)0x6c;
                ppppppcStack_204 = (code ******)&LAB_004133e8;
                ppppppcStack_210 = (code ******)0x475c55;
                __vbaHresultCheckObj();
              }
              ppppppcVar8 = ppppppcStack_104;
              ppppppcStack_200 = (code ******)&ppppppcStack_174;
              ppppppcStack_204 = (code ******)&ppppppiStack_cc;
              ppppppcStack_208 = ppppppcStack_104;
              ppppppcStack_20c = (code ******)0x475c6b;
              pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_104)[0xc])();
              if ((int)pppppppcVar12 < 0) {
                ppppppcStack_1f4 = (code ******)0x30;
                ppppppcStack_1f8 = (code ******)&DAT_004146fc;
                ppppppcStack_1fc = ppppppcVar8;
                ppppppcStack_204 = (code ******)0x475c7c;
                ppppppcStack_200 = (code ******)pppppppcVar12;
                __vbaHresultCheckObj();
              }
              pppppppcVar12 = (code *******)ppppppcStack_174;
              ppppppcStack_1f4 = (code ******)0x475c8b;
              __vbaFreeObj();
              if ((pppppppcVar12 == (code *******)0x0) ||
                 ((int)ppppppiStack_d8 <= (int)pppppppcVar12)) goto LAB_00475c94;
            }
            else {
LAB_00475c94:
              ppppppiStack_c8 = (int ******)0x0;
            }
            if ((short)ppppppiStack_c8 == 0) {
              ppppppcStack_1f4 = &pppppcStack_190;
              ppppppcStack_1f8 = (code ******)0x475cca;
              __vbaExitEachColl();
              break;
            }
          }
          ppppppcStack_1f4 = (code ******)&ppppppcStack_d0;
          ppppppcStack_1f8 = &pppppcStack_190;
          ppppppcStack_1fc = (code ******)&DAT_00414bb4;
          ppppppcStack_200 = (code ******)0x475cb8;
          iVar11 = __vbaNextEachCollObj();
        }
        if ((short)ppppppiStack_c8 != 0) {
          if (pppppppcVar15[0x11] == (code ******)0x0) {
            ppppppcStack_1f8 = pppppppcVar15[0xe];
            ppppppcStack_1f4 = (code ******)&ppppppcStack_104;
            ppppppcStack_1fc = (code ******)0x475e0f;
            ppppppcStack_208 = (code ******)(*(code *)(*ppppppcStack_1f8)[0x1b])();
            if ((int)ppppppcStack_208 < 0) {
              ppppppcStack_204 = pppppppcVar15[0xe];
              ppppppcStack_1fc = (code ******)0x6c;
              ppppppcStack_200 = (code ******)&LAB_004133e8;
              ppppppcStack_20c = (code ******)0x475e23;
              __vbaHresultCheckObj();
            }
            pppppppcVar12 = (code *******)ppppppcStack_104;
            ppppppcStack_1fc = &pppppcStack_e0;
            ppppppcStack_200 = (code ******)&ppppppcStack_e4;
            ppppppcStack_204 = ppppppcStack_104;
            ppppppcStack_208 = (code ******)0x475e36;
            pppppppcVar13 = (code *******)(*(code *)(*ppppppcStack_104)[0x11])();
            if ((int)pppppppcVar13 < 0) {
              ppppppcStack_1f4 = (code ******)0x44;
              ppppppcStack_1f8 = (code ******)&DAT_004146fc;
              ppppppcStack_1fc = (code ******)pppppppcVar12;
              ppppppcStack_204 = (code ******)0x475e47;
              ppppppcStack_200 = (code ******)pppppppcVar13;
              __vbaHresultCheckObj();
            }
            ppppppcStack_1f4 = (code ******)0x475e50;
            __vbaFreeObj();
            break;
          }
          if (pppppppcVar15[0x11] == (code ******)0x1) {
            ppppppcStack_1f4 = (code ******)&ppppppcStack_100;
            ppppppcStack_1f8 = ppppppcStack_e4;
            ppppppcStack_1fc = (code ******)0x475d9b;
            ppppppcStack_208 = (code ******)(*(code *)(*ppppppcStack_e4)[7])();
            if ((int)ppppppcStack_208 < 0) {
              ppppppcStack_1fc = (code ******)0x1c;
              ppppppcStack_200 = (code ******)&LAB_0041470c;
              ppppppcStack_204 = ppppppcStack_e4;
              ppppppcStack_20c = (code ******)0x475daf;
              __vbaHresultCheckObj();
            }
            ppppppcStack_1fc = (code ******)&ppppppcStack_104;
            ppppppcStack_200 = ppppppcStack_100;
            ppppppcStack_204 = (code ******)&ppppppcStack_e4;
            ppppppcStack_208 = ppppppcStack_d4;
            ppppppcStack_20c = (code ******)0x475dc4;
            pppppppcVar13 = (code *******)(*(code *)(*ppppppcStack_d4)[8])();
            if ((int)pppppppcVar13 < 0) {
              ppppppcStack_1f4 = (code ******)0x20;
              ppppppcStack_1f8 = (code ******)&DAT_004146fc;
              ppppppcStack_1fc = ppppppcStack_d4;
              ppppppcStack_204 = (code ******)0x475dd8;
              ppppppcStack_200 = (code ******)pppppppcVar13;
              __vbaHresultCheckObj();
            }
            ppppppcStack_1f4 = (code ******)0x475de1;
            __vbaFreeStr();
            ppppppcStack_1f4 = (code ******)0x475dea;
            __vbaFreeObj();
          }
          else {
            ppppppcStack_1f4 = (code ******)0x475cee;
            ppppppcStack_1f4 = (code ******)rtcErrObj();
            ppppppcStack_1f8 = (code ******)&ppppppcStack_104;
            ppppppcStack_1fc = (code ******)0x475cf9;
            pppppppcVar12 = (code *******)__vbaObjSet();
            auStack_13c[0] = 10;
            apppppcStack_12c[0] = (code *****)0xa;
            uStack_134 = 0x80020004;
            uStack_124 = 0x80020004;
            ppppppiStack_144 = (int ******)0x418f38;
            pppppcStack_14c = (code *****)0x8;
            ppppppcStack_1f4 = (code ******)0x475d3a;
            __vbaVarDup();
            ppppppcStack_1f4 = (code ******)auStack_13c;
            ppppppcStack_1f8 = apppppcStack_12c;
            ppppppcStack_1fc = apppppcStack_11c;
            ppppppcStack_200 = (code ******)auStack_f8;
            ppppppcStack_204 = (code ******)0x448;
            ppppppcStack_20c = (code ******)0x475d58;
            ppppppcStack_208 = (code ******)pppppppcVar12;
            puVar14 = (undefined4 *)(*(code *)(*pppppppcVar12)[0x11])();
            if ((int)puVar14 < 0) {
              ppppppcStack_1f4 = (code ******)0x44;
              ppppppcStack_1f8 = (code ******)&DAT_00413af4;
              ppppppcStack_204 = (code ******)0x475d69;
              ppppppcStack_200 = (code ******)puVar14;
              ppppppcStack_1fc = (code ******)pppppppcVar12;
              __vbaHresultCheckObj();
            }
            ppppppcStack_1f4 = (code ******)0x475d72;
            __vbaFreeObj();
            ppppppcStack_1f4 = (code ******)auStack_13c;
            ppppppcStack_1f8 = apppppcStack_12c;
            ppppppcStack_1fc = apppppcStack_11c;
            ppppppcStack_200 = (code ******)0x3;
            ppppppcStack_204 = (code ******)0x475d89;
            __vbaFreeVarList();
          }
        }
        ppppppiVar7 = (int ******)((int)pppppiStack_dc + 1);
        if (SCARRY4((int)pppppiStack_dc,1)) goto LAB_0047638f;
      }
      if (pppppppcVar15[0x11] == (code ******)0x1) {
        ppppppcStack_1f4 = (code ******)&ppppppcStack_174;
        ppppppcStack_1f8 = ppppppcStack_d4;
        ppppppcStack_1fc = (code ******)0x475e6a;
        pppppppcVar15 = (code *******)(*(code *)(*ppppppcStack_d4)[0xd])();
        if ((int)pppppppcVar15 < 0) {
          ppppppcStack_1f4 = (code ******)0x34;
          ppppppcStack_1f8 = (code ******)&DAT_004146fc;
          ppppppcStack_1fc = ppppppcStack_d4;
          ppppppcStack_204 = (code ******)0x475e7e;
          ppppppcStack_200 = (code ******)pppppppcVar15;
          __vbaHresultCheckObj();
        }
        ppppppiVar7 = ppppppiStack_a8;
        if ((code *******)ppppppcStack_174 == (code *******)0x0) {
          ppppppcStack_1f4 = (code ******)&ppppppcStack_104;
          ppppppcStack_1f8 = (code ******)ppppppiStack_a8[0xe];
          ppppppcStack_1fc = (code ******)0x475e9c;
          pppppppcVar15 = (code *******)(*(code *)(*ppppppcStack_1f8)[0x1b])();
          if ((int)pppppppcVar15 < 0) {
            ppppppcStack_204 = (code ******)ppppppiVar7[0xe];
            ppppppcStack_1fc = (code ******)0x6c;
            ppppppcStack_200 = (code ******)&LAB_004133e8;
            ppppppcStack_20c = (code ******)0x475eb0;
            ppppppcStack_208 = (code ******)pppppppcVar15;
            __vbaHresultCheckObj();
          }
          ppppppcVar8 = ppppppcStack_104;
          ppppppcStack_1fc = (code ******)&ppppppcStack_174;
          ppppppcStack_200 = ppppppcStack_104;
          ppppppcStack_204 = (code ******)0x475ec2;
          pppppppcVar15 = (code *******)(*(code *)(*ppppppcStack_104)[0xd])();
          if ((int)pppppppcVar15 < 0) {
            ppppppcStack_1f4 = (code ******)0x34;
            ppppppcStack_1f8 = (code ******)&DAT_004146fc;
            ppppppcStack_1fc = ppppppcVar8;
            ppppppcStack_204 = (code ******)0x475ed3;
            ppppppcStack_200 = (code ******)pppppppcVar15;
            __vbaHresultCheckObj();
          }
          ppppppcStack_1a4 = ppppppcStack_174;
          pppppppcVar15 = (code *******)0x1;
          pppppiStack_dc = (int *****)ppppppiStack_d8;
          ppppppcStack_1f4 = (code ******)0x475ef3;
          __vbaFreeObj();
          ppppppiVar7 = (int ******)pppppiStack_dc;
          while (pppppiStack_dc = (int *****)ppppppiVar7, ppppppiVar7 = ppppppiStack_a8,
                (int)pppppiStack_dc <= (int)ppppppcStack_1a4) {
            ppppppcStack_1f4 = (code ******)&ppppppcStack_104;
            ppppppcStack_1f8 = (code ******)ppppppiStack_a8[0xe];
            ppppppcStack_1fc = (code ******)0x475f12;
            ppppppcStack_208 = (code ******)(*(code *)(*ppppppcStack_1f8)[0x1b])();
            if ((int)ppppppcStack_208 < 0) {
              ppppppcStack_204 = (code ******)ppppppiVar7[0xe];
              ppppppcStack_1fc = (code ******)0x6c;
              ppppppcStack_200 = (code ******)&LAB_004133e8;
              ppppppcStack_20c = (code ******)0x475f26;
              __vbaHresultCheckObj();
            }
            ppppppcVar8 = ppppppcStack_104;
            ppppppiStack_144 = &pppppiStack_dc;
            ppppppcStack_1fc = (code ******)&ppppppcStack_108;
            ppppppcStack_200 = &pppppcStack_14c;
            pppppcStack_14c = (code *****)0x4003;
            ppppppcStack_204 = ppppppcStack_104;
            ppppppcStack_208 = (code ******)0x475f4f;
            pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_104)[9])();
            if ((int)pppppppcVar12 < 0) {
              ppppppcStack_208 = (code ******)0x24;
              ppppppcStack_20c = (code ******)&DAT_004146fc;
              ppppppcStack_210 = ppppppcVar8;
              ppppppcStack_218 = (code ******)0x475f60;
              ppppppcStack_214 = (code ******)pppppppcVar12;
              __vbaHresultCheckObj();
            }
            ppppppcStack_208 = ppppppcStack_108;
            ppppppcStack_108 = (code ******)0x0;
            ppppppcStack_20c = (code ******)&ppppppcStack_e4;
            ppppppcStack_210 = (code ******)0x475f75;
            __vbaObjSet();
            pppppppcVar12 = (code *******)__vbaFreeObj_exref;
            ppppppcStack_208 = (code ******)0x475f80;
            __vbaFreeObj();
            ppppppcStack_208 = (code ******)&ppppppcStack_100;
            ppppppcStack_20c = ppppppcStack_e4;
            ppppppcStack_210 = (code ******)0x475f8d;
            iVar11 = (*(code *)(*ppppppcStack_e4)[7])();
            if (iVar11 < 0) {
              ppppppcStack_210 = (code ******)0x1c;
              ppppppcStack_214 = (code ******)&LAB_0041470c;
              ppppppcStack_218 = ppppppcStack_e4;
              __vbaHresultCheckObj(iVar11);
            }
            ppppppcStack_210 = (code ******)&ppppppcStack_104;
            ppppppcStack_214 = ppppppcStack_100;
            ppppppcStack_218 = (code ******)&ppppppcStack_e4;
            pppppppcVar13 = (code *******)(*(code *)(*ppppppcStack_d4)[8])(ppppppcStack_d4);
            if ((int)pppppppcVar13 < 0) {
              ppppppcStack_1f4 = (code ******)0x20;
              ppppppcStack_1f8 = (code ******)&DAT_004146fc;
              ppppppcStack_1fc = ppppppcStack_d4;
              ppppppcStack_204 = (code ******)0x475fca;
              ppppppcStack_200 = (code ******)pppppppcVar13;
              __vbaHresultCheckObj();
            }
            ppppppcStack_1f4 = (code ******)0x475fd3;
            __vbaFreeStr();
            ppppppcStack_1f4 = (code ******)0x475fd8;
            __vbaFreeObj();
            ppppppiVar7 = (int ******)((int)pppppiStack_dc + 1);
            if (SCARRY4((int)pppppiStack_dc,1)) goto LAB_0047638f;
          }
        }
        ppppppcStack_1f4 = (code ******)&ppppppcStack_174;
        ppppppcStack_1f8 = ppppppcStack_d4;
        pppppppcVar15 = (code *******)0x1;
        ppppppcStack_1fc = (code ******)0x476002;
        pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_d4)[0xd])();
        if ((int)pppppppcVar12 < 0) {
          ppppppcStack_1fc = (code ******)0x34;
          ppppppcStack_200 = (code ******)&DAT_004146fc;
          ppppppcStack_204 = ppppppcStack_d4;
          ppppppcStack_20c = (code ******)0x476016;
          ppppppcStack_208 = (code ******)pppppppcVar12;
          __vbaHresultCheckObj();
        }
        if ((code *******)ppppppcStack_174 == (code *******)0x1) {
          ppppppcStack_1fc = (code ******)&ppppppcStack_104;
          ppppppcStack_200 = apppppcStack_11c;
          uStack_114 = 1;
          apppppcStack_11c[0] = (code *****)0x2;
          ppppppcStack_204 = ppppppcStack_d4;
          ppppppcStack_208 = (code ******)0x47603d;
          pppppppcVar12 = (code *******)(*(code *)(*ppppppcStack_d4)[9])();
          if ((int)pppppppcVar12 < 0) {
            ppppppcStack_208 = (code ******)0x24;
            ppppppcStack_20c = (code ******)&DAT_004146fc;
            ppppppcStack_210 = ppppppcStack_d4;
            ppppppcStack_218 = (code ******)0x476051;
            ppppppcStack_214 = (code ******)pppppppcVar12;
            __vbaHresultCheckObj();
          }
          ppppppiVar7 = ppppppiStack_a8;
          ppppppcStack_208 = (code ******)&ppppppcStack_108;
          ppppppcStack_20c = (code ******)ppppppiStack_a8[0xe];
          ppppppcStack_210 = (code ******)0x476061;
          iVar11 = (*(code *)(*ppppppcStack_20c)[0x1b])();
          if (iVar11 < 0) {
            ppppppcStack_218 = (code ******)ppppppiVar7[0xe];
            ppppppcStack_210 = (code ******)0x6c;
            ppppppcStack_214 = (code ******)&LAB_004133e8;
            __vbaHresultCheckObj(iVar11);
          }
          pppppppcVar12 = (code *******)ppppppcStack_108;
          ppppppcStack_214 = &pppppcStack_10c;
          ppppppcStack_210 = ppppppcStack_104;
          ppppppcStack_104 = (code ******)0x0;
          ppppppcStack_218 = (code ******)0x47608d;
          __vbaObjSet();
          ppppppcStack_210 = &pppppcStack_e0;
          ppppppcStack_214 = &pppppcStack_10c;
          ppppppcStack_218 = (code ******)pppppppcVar12;
          ppppppcStack_204 = (code ******)(*(code *)(*pppppppcVar12)[0x11])();
          if ((int)ppppppcStack_204 < 0) {
            ppppppcStack_1f8 = (code ******)0x44;
            ppppppcStack_1fc = (code ******)&DAT_004146fc;
            ppppppcStack_200 = (code ******)pppppppcVar12;
            ppppppcStack_208 = (code ******)0x4760ac;
            __vbaHresultCheckObj();
          }
          ppppppcStack_1f8 = (code ******)&ppppppcStack_108;
          ppppppcStack_1fc = &pppppcStack_10c;
          ppppppcStack_200 = (code ******)0x2;
          ppppppcStack_204 = (code ******)0x4760bc;
          __vbaFreeObjList();
          ppppppcStack_1f8 = (code ******)0x4760c8;
          __vbaFreeVar();
        }
        else {
          if (DAT_0047f2e8 == (int *)0x0) {
            ppppppcStack_1fc = (code ******)&DAT_0047f2e8;
            ppppppcStack_200 = (code ******)&DAT_00407de4;
            ppppppcStack_204 = (code ******)0x4760e6;
            __vbaNew2();
          }
          piVar17 = DAT_0047f2e8;
          ppppppcStack_1fc = (code ******)&ppppppcStack_d4;
          ppppppcStack_200 = (code ******)DAT_0047f2e8;
          ppppppcStack_204 = (code ******)0x4760f9;
          pppppppcVar15 = (code *******)(**(code **)(*DAT_0047f2e8 + 0x704))();
          if ((int)pppppppcVar15 < 0) {
            ppppppcStack_204 = (code ******)0x704;
            ppppppcStack_208 = (code ******)&DAT_00418f8c;
            ppppppcStack_20c = (code ******)piVar17;
            ppppppcStack_214 = (code ******)0x47610d;
            ppppppcStack_210 = (code ******)pppppppcVar15;
            __vbaHresultCheckObj();
          }
          if (DAT_0047f2e8 == (int *)0x0) {
            ppppppcStack_204 = (code ******)&DAT_0047f2e8;
            ppppppcStack_208 = (code ******)&DAT_00407de4;
            ppppppcStack_20c = (code ******)0x476126;
            __vbaNew2();
          }
          piVar17 = DAT_0047f2e8;
          pppppppcVar15 = &ppppppcStack_210;
          ppppppiStack_144 = (int ******)0x1;
          ppppppcStack_210 = (code ******)0xa;
          pppppcStack_14c = (code *****)0x3;
          ppppppcStack_20c = ppppppcStack_158;
          ppppppcStack_208 = (code ******)0x80020004;
          ppppppcStack_204 = ppppppcStack_150;
          ppppppcStack_218 = (code ******)0x1;
          ppppppcStack_214 = ppppppcStack_140;
          iVar11 = (**(code **)(*DAT_0047f2e8 + 0x2b0))(DAT_0047f2e8,3,uStack_148);
          if (iVar11 < 0) {
            __vbaHresultCheckObj(iVar11,piVar17,&DAT_00418a08,0x2b0);
          }
          if (DAT_0047f2e8 == (int *)0x0) {
            __vbaNew2(&DAT_00407de4,&DAT_0047f2e8);
          }
          piVar17 = DAT_0047f2e8;
          iVar11 = (**(code **)(*DAT_0047f2e8 + 0x6f8))(DAT_0047f2e8,&ppppppcStack_104);
          if (iVar11 < 0) {
            __vbaHresultCheckObj(iVar11,piVar17,&DAT_00418f8c,0x6f8);
          }
          ppppppiVar7 = ppppppiStack_a8;
          iVar11 = (*(code *)(*ppppppiStack_a8[0xe])[0x1b])(ppppppiStack_a8[0xe],&ppppppcStack_108);
          if (iVar11 < 0) {
            __vbaHresultCheckObj(iVar11,ppppppiVar7[0xe],&LAB_004133e8,0x6c);
          }
          ppppppcVar8 = ppppppcStack_104;
          pppppppcVar12 = (code *******)ppppppcStack_108;
          ppppppcStack_104 = (code ******)0x0;
          __vbaObjSet(&pppppcStack_10c,ppppppcVar8);
          ppppppcStack_200 =
               (code ******)
               (*(code *)(*pppppppcVar12)[0x11])(pppppppcVar12,&pppppcStack_10c,&pppppcStack_e0);
          if ((int)ppppppcStack_200 < 0) {
            ppppppcStack_1f4 = (code ******)0x44;
            ppppppcStack_1f8 = (code ******)&DAT_004146fc;
            ppppppcStack_1fc = (code ******)pppppppcVar12;
            ppppppcStack_204 = (code ******)0x476242;
            __vbaHresultCheckObj();
          }
          ppppppcStack_1f4 = (code ******)&ppppppcStack_108;
          ppppppcStack_1f8 = &pppppcStack_10c;
          ppppppcStack_1fc = (code ******)0x2;
          ppppppcStack_200 = (code ******)0x476252;
          __vbaFreeObjList();
        }
      }
      ppppppiVar7 = (int ******)((int)ppppppiStack_d8 + 1);
      if (SCARRY4((int)ppppppiStack_d8,1)) {
LAB_0047638f:
        ppppppcStack_1f4 = (code ******)0x476395;
        __vbaErrorOverflow();
        ppppppcStack_200 = (code ******)&LAB_004032d6;
        ppppppcStack_204 = ExceptionList;
        ppppppcStack_1fc = (code ******)&ppppppcStack_218;
        ppppppcStack_218 = (code ******)pcVar2;
        ppppppcStack_1f8 = (code ******)&DAT_00402e78;
        ppppppcStack_1f4 = (code ******)((uint)ppppppcStack_1e8 & 1);
        piVar17 = (int *)((uint)ppppppcStack_1e8 & 0xfffffffe);
        ExceptionList = &ppppppcStack_204;
        ppppppcStack_214 = (code ******)pppppppcVar12;
        ppppppcStack_210 = (code ******)pppppppcVar15;
        ppppppcStack_1f0 = (code ******)&ppppppiStack_b0;
        ppppppcStack_1e8 = (code ******)piVar17;
        (**(code **)(*piVar17 + 4))(piVar17);
        piVar17[0x11] = (int)*(short *)ppppcStack_1e4;
        ppppppcStack_1f4 = (code ******)0x0;
        (**(code **)((int)*ppppppcStack_1e8 + 8))(ppppppcStack_1e8);
        ExceptionList = ppppppcStack_204;
        return ppppppcStack_1f4;
      }
    }
    if (DAT_0047f074 == (code *******)0x0) {
      ppppppcStack_204 = (code ******)&DAT_0047f074;
      ppppppcStack_208 = (code ******)&DAT_0040dbb8;
      ppppppcStack_20c = (code ******)0x476282;
      __vbaNew2();
    }
    pppppppcVar15 = DAT_0047f074;
    ppppppcVar8 = *DAT_0047f074;
    ppppppcStack_204 = (code ******)0x476292;
    ppppppcStack_200 = (code ******)__vbaI2I4();
    ppppppcStack_204 = (code ******)pppppppcVar15;
    ppppppcStack_208 = (code ******)0x47629a;
    pppppppcVar12 = (code *******)(*(code *)ppppppcVar8[0x29])();
    if ((int)pppppppcVar12 < 0) {
      ppppppcStack_208 = (code ******)0xa4;
      ppppppcStack_20c = (code ******)&DAT_00413d48;
      ppppppcStack_210 = (code ******)pppppppcVar15;
      ppppppcStack_218 = (code ******)0x4762b0;
      ppppppcStack_214 = (code ******)pppppppcVar12;
      __vbaHresultCheckObj();
    }
    ppppppiVar7 = ppppppiStack_a8;
    ppppppcStack_208 = apppppcStack_170;
    apppppcStack_170[0] = (code *****)0xffffffff;
    ppppppcStack_20c = (code ******)ppppppiStack_a8[0xd];
    ppppppcStack_210 = (code ******)0x4762d0;
    ppppppcStack_1fc = (code ******)(*(code *)(*ppppppcStack_20c)[0x1cb])();
    if ((int)ppppppcStack_1fc < 0) {
      ppppppcStack_1f8 = (code ******)ppppppiVar7[0xd];
      ppppppcStack_1f0 = (code ******)0x72c;
      ppppppcStack_1f4 = (code ******)&DAT_00413728;
      ppppppcStack_200 = (code ******)0x4762e7;
      __vbaHresultCheckObj();
    }
  }
  ppppppiStack_b4 = (int ******)0x0;
  ppppppcStack_1f0 = (code ******)&LAB_00476370;
  ppppppcStack_1f4 = &pppppcStack_190;
  ppppppcStack_1f8 = (code ******)auStack_18c;
  ppppppcStack_1fc = (code ******)0x2;
  ppppppcStack_200 = (code ******)0x47633f;
  __vbaFreeObjList();
  ppppppcStack_1f4 = (code ******)0x47634d;
  __vbaFreeObj();
  ppppppcStack_1f4 = (code ******)0x476352;
  __vbaFreeObj();
  ppppppcStack_1f4 = (code ******)0x476357;
  __vbaFreeObj();
  ppppppcStack_1f4 = (code ******)0x47635c;
  __vbaFreeObj();
  ppppppcStack_1f4 = (code ******)0x476361;
  __vbaFreeObj();
  ppppppcStack_1f4 = (code ******)0x47636a;
  __vbaFreeVar();
  ppppppcStack_1f0 = (code ******)0x47636f;
  uVar10 = __vbaFreeObj();
  return uVar10;
}

/* ---- 0x475790 (FUN_00475790) [estimated] strings: Invalid PreqMethod in cmdGoSortPreq_Click ---- */
undefined4 __cdecl FUN_00475790(uint param_1)

{
  code ******ppppppcVar1;
  bool bVar2;
  code *pcVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  code *******pppppppcVar7;
  code *******pppppppcVar8;
  code ******ppppppcVar9;
  code *******pppppppcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  code ******ppppppcVar13;
  undefined2 uVar15;
  int *piVar14;
  code ******ppppppcStack_16c;
  code ******ppppppcStack_168;
  code ******ppppppcStack_164;
  code ******ppppppcStack_160;
  code ******ppppppcStack_15c;
  code ******ppppppcStack_158;
  code ******ppppppcStack_154;
  code ******ppppppcStack_150;
  code ******ppppppcStack_14c;
  code ******ppppppcStack_148;
  code ******ppppppcStack_144;
  code ******ppppppcStack_140;
  code ******ppppppcStack_13c;
  code ****ppppcStack_138;
  code ******ppppppcStack_134;
  code *****pppppcStack_130;
  code *****local_e4;
  undefined4 local_e0 [6];
  code ******local_c8;
  code *****local_c4 [5];
  undefined4 local_b0;
  code ******local_ac;
  code ******local_a4;
  code *****local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  code ******local_94;
  undefined4 local_90 [2];
  undefined4 local_88;
  code *****local_80 [2];
  undefined4 local_78;
  code *****local_70 [2];
  undefined4 local_68;
  code *****local_60;
  code ******local_5c;
  code ******local_58;
  code ******local_54;
  undefined *local_50;
  undefined4 local_4c [5];
  code ******local_38;
  code *****local_34;
  int local_30;
  int local_2c;
  code ******local_28;
  code ******local_24;
  code *****local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffed4;
  local_c = &DAT_00402e68;
  local_8 = param_1 & 1;
  ppppppcVar13 = (code ******)(param_1 & 0xfffffffe);
  ppppppcStack_134 = (code ******)0x4757d3;
  ExceptionList = &pvStack_18;
  pppppcStack_130 = (code *****)ppppppcVar13;
  (*(code *)(*ppppppcVar13)[1])();
  ppppcStack_138 = (code ****)ppppppcVar13[0xe];
  ppppppcStack_134 = (code ******)&local_58;
  local_20 = (code *****)0x0;
  local_24 = (code ******)0x0;
  local_28 = (code ******)0x0;
  local_30 = 0;
  local_34 = (code *****)0x0;
  local_38 = (code ******)0x0;
  local_4c[0] = 0;
  local_50 = (undefined *)0x0;
  local_54 = (code ******)0x0;
  local_58 = (code ******)0x0;
  local_5c = (code ******)0x0;
  local_60 = (code *****)0x0;
  local_70[0] = (code *****)0x0;
  local_80[0] = (code *****)0x0;
  local_90[0] = 0;
  local_a0 = (code *****)0x0;
  local_c4[0] = (code *****)0x0;
  local_c8 = (code ******)0x0;
  local_e0[0] = 0;
  local_e4 = (code *****)0x0;
  local_2c = 1;
  local_b0 = 0;
  ppppppcStack_13c = (code ******)0x475840;
  iVar6 = (*(code *)(*ppppcStack_138)[0x1c])();
  pcVar3 = __vbaHresultCheckObj_exref;
  if (iVar6 < 0) {
    ppppppcStack_144 = (code ******)ppppppcVar13[0xe];
    ppppppcStack_13c = (code ******)0x70;
    ppppppcStack_140 = (code ******)&LAB_004133e8;
    ppppppcStack_14c = (code ******)0x47585a;
    ppppppcStack_148 = (code ******)iVar6;
    __vbaHresultCheckObj();
  }
  ppppppcVar1 = local_58;
  ppppppcStack_13c = (code ******)&local_5c;
  ppppppcStack_140 = local_58;
  ppppppcStack_144 = (code ******)0x475871;
  iVar6 = (*(code *)(*local_58)[0x19])();
  if (iVar6 < 0) {
    ppppppcStack_144 = (code ******)0x64;
    ppppppcStack_148 = (code ******)&LAB_004133f8;
    ppppppcStack_14c = ppppppcVar1;
    ppppppcStack_154 = (code ******)0x475882;
    ppppppcStack_150 = (code ******)iVar6;
    __vbaHresultCheckObj();
  }
  ppppppcStack_144 = local_5c;
  local_5c = (code ******)0x0;
  ppppppcStack_148 = (code ******)&local_50;
  ppppppcStack_14c = (code ******)0x475893;
  __vbaObjSet();
  ppppppcStack_144 = (code ******)0x47589c;
  __vbaFreeObj();
  ppppppcStack_144 = (code ******)0x0;
  ppppppcStack_148 = (code ******)local_50;
  ppppppcStack_14c = (code ******)0x4758a7;
  sVar4 = __vbaObjIs();
  if (sVar4 == 0) {
    if (DAT_0047f074 == (code *******)0x0) {
      ppppppcStack_144 = (code ******)&DAT_0047f074;
      ppppppcStack_148 = (code ******)&DAT_0040dbb8;
      ppppppcStack_14c = (code ******)0x4758c8;
      __vbaNew2();
    }
    pppppppcVar8 = DAT_0047f074;
    ppppppcVar1 = *DAT_0047f074;
    ppppppcStack_144 = (code ******)0x4758db;
    ppppppcStack_140 = (code ******)__vbaI2I4();
    ppppppcStack_144 = (code ******)pppppppcVar8;
    ppppppcStack_148 = (code ******)0x4758e3;
    pppppppcVar7 = (code *******)(*(code *)ppppppcVar1[0x29])();
    iVar6 = local_2c;
    if ((int)pppppppcVar7 < 0) {
      ppppppcStack_148 = (code ******)0xa4;
      ppppppcStack_14c = (code ******)&DAT_00413d48;
      ppppppcStack_150 = (code ******)pppppppcVar8;
      ppppppcStack_158 = (code ******)0x4758f7;
      ppppppcStack_154 = (code ******)pppppppcVar7;
      __vbaHresultCheckObj();
      iVar6 = local_2c;
    }
    while( true ) {
      local_2c = iVar6;
      ppppppcStack_148 = (code ******)&local_58;
      ppppppcStack_14c = (code ******)ppppppcVar13[0xe];
      ppppppcStack_150 = (code ******)0x475907;
      pppppppcVar8 = (code *******)(*(code *)(*ppppppcStack_14c)[0x1b])();
      if ((int)pppppppcVar8 < 0) {
        ppppppcStack_158 = (code ******)ppppppcVar13[0xe];
        ppppppcStack_150 = (code ******)0x6c;
        ppppppcStack_154 = (code ******)&LAB_004133e8;
        ppppppcStack_160 = (code ******)0x47591b;
        ppppppcStack_15c = (code ******)pppppppcVar8;
        __vbaHresultCheckObj();
      }
      ppppppcVar1 = local_58;
      ppppppcStack_150 = (code ******)&local_c8;
      ppppppcStack_154 = local_58;
      ppppppcStack_158 = (code ******)0x47592d;
      pppppppcVar8 = (code *******)(*(code *)(*local_58)[0xd])();
      if ((int)pppppppcVar8 < 0) {
        ppppppcStack_158 = (code ******)0x34;
        ppppppcStack_15c = (code ******)&DAT_004146fc;
        ppppppcStack_160 = ppppppcVar1;
        ppppppcStack_168 = (code ******)0x47593e;
        ppppppcStack_164 = (code ******)pppppppcVar8;
        __vbaHresultCheckObj();
      }
      bVar2 = (int)local_c8 <= local_2c;
      ppppppcStack_158 = (code ******)0x47595c;
      __vbaFreeObj();
      if (bVar2) break;
      ppppppcStack_15c = (code ******)ppppppcVar13[0xe];
      ppppppcStack_158 = (code ******)&local_58;
      ppppppcStack_160 = (code ******)0x475972;
      ppppppcStack_16c = (code ******)(*(code *)(*ppppppcStack_15c)[0x1b])();
      if ((int)ppppppcStack_16c < 0) {
        ppppppcStack_168 = (code ******)ppppppcVar13[0xe];
        ppppppcStack_160 = (code ******)0x6c;
        ppppppcStack_164 = (code ******)&LAB_004133e8;
        __vbaHresultCheckObj();
      }
      ppppppcVar1 = local_58;
      local_98 = (wchar_t *)&local_2c;
      ppppppcStack_160 = (code ******)&local_5c;
      ppppppcStack_164 = &local_a0;
      local_a0 = (code *****)0x4003;
      ppppppcStack_168 = local_58;
      ppppppcStack_16c = (code ******)0x4759af;
      iVar6 = (*(code *)(*local_58)[9])();
      if (iVar6 < 0) {
        ppppppcStack_16c = (code ******)0x24;
        __vbaHresultCheckObj(iVar6,ppppppcVar1,&DAT_004146fc);
      }
      ppppppcStack_16c = local_5c;
      local_5c = (code ******)0x0;
      __vbaObjSet(&local_34);
      ppppppcStack_16c = (code ******)0x4759e0;
      __vbaFreeObj();
      if (ppppppcVar13[0x11] == (code *****)0x1) {
        ppppppcStack_16c = (code ******)&DAT_004077b8;
        ppppppcStack_16c = (code ******)__vbaNew();
        __vbaObjSet(&local_28);
      }
      ppppppcStack_16c = (code ******)&local_58;
      iVar6 = (*(code *)(*ppppppcVar13[0xe])[0x1b])(ppppppcVar13[0xe]);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,ppppppcVar13[0xe],&LAB_004133e8,0x6c);
      }
      pppppppcVar8 = (code *******)local_58;
      pppppppcVar7 = (code *******)(*(code *)(*local_58)[0xd])(local_58,&local_c8);
      if ((int)pppppppcVar7 < 0) {
        ppppppcStack_148 = (code ******)0x34;
        ppppppcStack_14c = (code ******)&DAT_004146fc;
        ppppppcStack_150 = (code ******)pppppppcVar8;
        ppppppcStack_158 = (code ******)0x475a3c;
        ppppppcStack_154 = (code ******)pppppppcVar7;
        __vbaHresultCheckObj();
      }
      ppppppcVar1 = local_c8;
      local_30 = local_2c;
      ppppppcStack_148 = (code ******)0x475a57;
      __vbaFreeObj();
      iVar6 = local_30;
      while (local_30 = iVar6, pppppppcVar7 = (code *******)ppppppcVar13,
            local_30 <= (int)ppppppcVar1) {
        ppppppcStack_14c = (code ******)ppppppcVar13[0xe];
        ppppppcStack_148 = (code ******)&local_58;
        ppppppcStack_150 = (code ******)0x475a73;
        ppppppcStack_15c = (code ******)(*(code *)(*ppppppcStack_14c)[0x1b])();
        if ((int)ppppppcStack_15c < 0) {
          ppppppcStack_158 = (code ******)ppppppcVar13[0xe];
          ppppppcStack_150 = (code ******)0x6c;
          ppppppcStack_154 = (code ******)&LAB_004133e8;
          ppppppcStack_160 = (code ******)0x475a87;
          __vbaHresultCheckObj();
        }
        ppppppcVar9 = local_58;
        local_98 = (wchar_t *)&local_30;
        ppppppcStack_150 = (code ******)&local_5c;
        ppppppcStack_154 = &local_a0;
        local_a0 = (code *****)0x4003;
        ppppppcStack_158 = local_58;
        ppppppcStack_15c = (code ******)0x475ab0;
        pppppppcVar8 = (code *******)(*(code *)(*local_58)[9])();
        if ((int)pppppppcVar8 < 0) {
          ppppppcStack_15c = (code ******)0x24;
          ppppppcStack_160 = (code ******)&DAT_004146fc;
          ppppppcStack_164 = ppppppcVar9;
          ppppppcStack_16c = (code ******)0x475ac1;
          ppppppcStack_168 = (code ******)pppppppcVar8;
          __vbaHresultCheckObj();
        }
        pppppppcVar8 = (code *******)__vbaObjSet_exref;
        ppppppcStack_15c = local_5c;
        ppppppcStack_160 = (code ******)&local_38;
        local_5c = (code ******)0x0;
        ppppppcStack_164 = (code ******)0x475ad8;
        __vbaObjSet();
        ppppppcStack_15c = (code ******)0x475ae1;
        __vbaFreeObj();
        ppppppcStack_15c = (code ******)&local_58;
        ppppppcStack_160 = local_38;
        local_1c = 0xffffffff;
        ppppppcStack_164 = (code ******)0x475af5;
        ppppppcVar9 = (code ******)(*(code *)(*local_38)[0xf])();
        if ((int)ppppppcVar9 < 0) {
          ppppppcStack_148 = (code ******)0x3c;
          ppppppcStack_14c = (code ******)&LAB_0041470c;
          ppppppcStack_150 = local_38;
          ppppppcStack_158 = (code ******)0x475b09;
          ppppppcStack_154 = ppppppcVar9;
          __vbaHresultCheckObj();
        }
        ppppppcStack_14c = (code ******)local_e0;
        ppppppcStack_148 = local_58;
        local_58 = (code ******)0x0;
        ppppppcStack_150 = (code ******)0x475b1d;
        ppppppcStack_148 = (code ******)__vbaObjSet();
        ppppppcStack_14c = (code ******)&local_24;
        ppppppcStack_150 = &local_e4;
        ppppppcStack_154 = (code ******)&DAT_00414bb4;
        ppppppcStack_158 = (code ******)0x475b34;
        iVar6 = __vbaForEachCollObj();
        while (iVar6 != 0) {
          ppppppcStack_148 = (code ******)&local_58;
          ppppppcStack_14c = local_24;
          ppppppcStack_150 = (code ******)0x475b49;
          pppppppcVar10 = (code *******)(*(code *)(*local_24)[10])();
          if ((int)pppppppcVar10 < 0) {
            ppppppcStack_148 = (code ******)0x28;
            ppppppcStack_14c = (code ******)&DAT_00414bb4;
            ppppppcStack_150 = local_24;
            ppppppcStack_158 = (code ******)0x475b5d;
            ppppppcStack_154 = (code ******)pppppppcVar10;
            __vbaHresultCheckObj();
          }
          ppppppcStack_148 = (code ******)local_50;
          ppppppcStack_14c = local_58;
          ppppppcStack_150 = (code ******)0x475b6b;
          sVar4 = __vbaObjIs();
          uVar15 = (undefined2)((uint)pppppppcVar8 >> 0x10);
          pppppppcVar8 = (code *******)CONCAT22(uVar15,sVar4);
          ppppppcStack_148 = (code ******)0x475b77;
          __vbaFreeObj();
          if (sVar4 != 0) {
            ppppppcStack_148 = local_c4;
            local_c4[0] = (code *****)0x0;
            ppppppcStack_14c = local_24;
            ppppppcStack_150 = (code ******)0x475b9a;
            pppppppcVar8 = (code *******)(*(code *)(*local_24)[0xe])();
            if ((int)pppppppcVar8 < 0) {
              ppppppcStack_150 = (code ******)0x38;
              ppppppcStack_154 = (code ******)&DAT_00414bb4;
              ppppppcStack_158 = local_24;
              ppppppcStack_160 = (code ******)0x475bae;
              ppppppcStack_15c = (code ******)pppppppcVar8;
              __vbaHresultCheckObj();
            }
            ppppppcStack_150 = local_70;
            ppppppcStack_154 = local_24;
            ppppppcStack_158 = (code ******)0x475bbb;
            pppppppcVar8 = (code *******)(*(code *)(*local_24)[0xc])();
            if ((int)pppppppcVar8 < 0) {
              ppppppcStack_14c = (code ******)0x30;
              ppppppcStack_150 = (code ******)&DAT_00414bb4;
              ppppppcStack_154 = local_24;
              ppppppcStack_15c = (code ******)0x475bcf;
              ppppppcStack_158 = (code ******)pppppppcVar8;
              __vbaHresultCheckObj();
            }
            ppppppcStack_14c = local_70;
            ppppppcStack_150 = (code ******)0x475bd9;
            uVar5 = rtcIsObject();
            pppppppcVar8 = (code *******)~CONCAT22(uVar15,uVar5);
            ppppppcStack_14c = (code ******)0x475be7;
            __vbaFreeVar();
            if ((short)pppppppcVar8 == 0) {
              ppppppcStack_148 = local_70;
              ppppppcStack_14c = local_24;
              ppppppcStack_150 = (code ******)0x475bfd;
              pppppppcVar8 = (code *******)(*(code *)(*local_24)[0xc])();
              if ((int)pppppppcVar8 < 0) {
                ppppppcStack_150 = (code ******)0x30;
                ppppppcStack_154 = (code ******)&DAT_00414bb4;
                ppppppcStack_158 = local_24;
                ppppppcStack_160 = (code ******)0x475c11;
                ppppppcStack_15c = (code ******)pppppppcVar8;
                __vbaHresultCheckObj();
              }
              ppppppcStack_154 = local_70;
              ppppppcStack_150 = (code ******)&LAB_0041470c;
              ppppppcStack_158 = (code ******)0x475c20;
              ppppppcStack_150 = (code ******)__vbaCastObjVar();
              ppppppcStack_154 = &local_20;
              ppppppcStack_158 = (code ******)0x475c2b;
              __vbaObjSet();
              ppppppcStack_150 = (code ******)0x475c34;
              __vbaFreeVar();
              ppppppcStack_150 = (code ******)ppppppcVar13[0xe];
              ppppppcStack_14c = (code ******)&local_58;
              ppppppcStack_154 = (code ******)0x475c41;
              ppppppcStack_160 = (code ******)(*(code *)(*ppppppcStack_150)[0x1b])();
              if ((int)ppppppcStack_160 < 0) {
                ppppppcStack_15c = (code ******)ppppppcVar13[0xe];
                ppppppcStack_154 = (code ******)0x6c;
                ppppppcStack_158 = (code ******)&LAB_004133e8;
                ppppppcStack_164 = (code ******)0x475c55;
                __vbaHresultCheckObj();
              }
              ppppppcVar9 = local_58;
              ppppppcStack_154 = (code ******)&local_c8;
              ppppppcStack_158 = &local_20;
              ppppppcStack_15c = local_58;
              ppppppcStack_160 = (code ******)0x475c6b;
              pppppppcVar8 = (code *******)(*(code *)(*local_58)[0xc])();
              if ((int)pppppppcVar8 < 0) {
                ppppppcStack_148 = (code ******)0x30;
                ppppppcStack_14c = (code ******)&DAT_004146fc;
                ppppppcStack_150 = ppppppcVar9;
                ppppppcStack_158 = (code ******)0x475c7c;
                ppppppcStack_154 = (code ******)pppppppcVar8;
                __vbaHresultCheckObj();
              }
              pppppppcVar8 = (code *******)local_c8;
              ppppppcStack_148 = (code ******)0x475c8b;
              __vbaFreeObj();
              if ((pppppppcVar8 == (code *******)0x0) || (local_2c <= (int)pppppppcVar8))
              goto LAB_00475c94;
            }
            else {
LAB_00475c94:
              local_1c = 0;
            }
            if ((short)local_1c == 0) {
              ppppppcStack_148 = &local_e4;
              ppppppcStack_14c = (code ******)0x475cca;
              __vbaExitEachColl();
              break;
            }
          }
          ppppppcStack_148 = (code ******)&local_24;
          ppppppcStack_14c = &local_e4;
          ppppppcStack_150 = (code ******)&DAT_00414bb4;
          ppppppcStack_154 = (code ******)0x475cb8;
          iVar6 = __vbaNextEachCollObj();
        }
        if ((short)local_1c != 0) {
          if (ppppppcVar13[0x11] == (code *****)0x0) {
            ppppppcStack_14c = (code ******)ppppppcVar13[0xe];
            ppppppcStack_148 = (code ******)&local_58;
            ppppppcStack_150 = (code ******)0x475e0f;
            ppppppcStack_15c = (code ******)(*(code *)(*ppppppcStack_14c)[0x1b])();
            if ((int)ppppppcStack_15c < 0) {
              ppppppcStack_158 = (code ******)ppppppcVar13[0xe];
              ppppppcStack_150 = (code ******)0x6c;
              ppppppcStack_154 = (code ******)&LAB_004133e8;
              ppppppcStack_160 = (code ******)0x475e23;
              __vbaHresultCheckObj();
            }
            pppppppcVar8 = (code *******)local_58;
            ppppppcStack_150 = &local_34;
            ppppppcStack_154 = (code ******)&local_38;
            ppppppcStack_158 = local_58;
            ppppppcStack_15c = (code ******)0x475e36;
            pppppppcVar10 = (code *******)(*(code *)(*local_58)[0x11])();
            if ((int)pppppppcVar10 < 0) {
              ppppppcStack_148 = (code ******)0x44;
              ppppppcStack_14c = (code ******)&DAT_004146fc;
              ppppppcStack_150 = (code ******)pppppppcVar8;
              ppppppcStack_158 = (code ******)0x475e47;
              ppppppcStack_154 = (code ******)pppppppcVar10;
              __vbaHresultCheckObj();
            }
            ppppppcStack_148 = (code ******)0x475e50;
            __vbaFreeObj();
            break;
          }
          if (ppppppcVar13[0x11] == (code *****)0x1) {
            ppppppcStack_148 = (code ******)&local_54;
            ppppppcStack_14c = local_38;
            ppppppcStack_150 = (code ******)0x475d9b;
            ppppppcStack_15c = (code ******)(*(code *)(*local_38)[7])();
            if ((int)ppppppcStack_15c < 0) {
              ppppppcStack_150 = (code ******)0x1c;
              ppppppcStack_154 = (code ******)&LAB_0041470c;
              ppppppcStack_158 = local_38;
              ppppppcStack_160 = (code ******)0x475daf;
              __vbaHresultCheckObj();
            }
            ppppppcStack_150 = (code ******)&local_58;
            ppppppcStack_154 = local_54;
            ppppppcStack_158 = (code ******)&local_38;
            ppppppcStack_15c = local_28;
            ppppppcStack_160 = (code ******)0x475dc4;
            pppppppcVar10 = (code *******)(*(code *)(*local_28)[8])();
            if ((int)pppppppcVar10 < 0) {
              ppppppcStack_148 = (code ******)0x20;
              ppppppcStack_14c = (code ******)&DAT_004146fc;
              ppppppcStack_150 = local_28;
              ppppppcStack_158 = (code ******)0x475dd8;
              ppppppcStack_154 = (code ******)pppppppcVar10;
              __vbaHresultCheckObj();
            }
            ppppppcStack_148 = (code ******)0x475de1;
            __vbaFreeStr();
            ppppppcStack_148 = (code ******)0x475dea;
            __vbaFreeObj();
          }
          else {
            ppppppcStack_148 = (code ******)0x475cee;
            ppppppcStack_148 = (code ******)rtcErrObj();
            ppppppcStack_14c = (code ******)&local_58;
            ppppppcStack_150 = (code ******)0x475cf9;
            pppppppcVar8 = (code *******)__vbaObjSet();
            local_90[0] = 10;
            local_80[0] = (code *****)0xa;
            local_88 = 0x80020004;
            local_78 = 0x80020004;
            local_98 = L"Invalid PreqMethod in cmdGoSortPreq_Click";
            local_a0 = (code *****)0x8;
            ppppppcStack_148 = (code ******)0x475d3a;
            __vbaVarDup();
            ppppppcStack_148 = (code ******)local_90;
            ppppppcStack_14c = local_80;
            ppppppcStack_150 = local_70;
            ppppppcStack_154 = (code ******)local_4c;
            ppppppcStack_158 = (code ******)0x448;
            ppppppcStack_160 = (code ******)0x475d58;
            ppppppcStack_15c = (code ******)pppppppcVar8;
            puVar11 = (undefined4 *)(*(code *)(*pppppppcVar8)[0x11])();
            if ((int)puVar11 < 0) {
              ppppppcStack_148 = (code ******)0x44;
              ppppppcStack_14c = (code ******)&DAT_00413af4;
              ppppppcStack_158 = (code ******)0x475d69;
              ppppppcStack_154 = (code ******)puVar11;
              ppppppcStack_150 = (code ******)pppppppcVar8;
              __vbaHresultCheckObj();
            }
            ppppppcStack_148 = (code ******)0x475d72;
            __vbaFreeObj();
            ppppppcStack_148 = (code ******)local_90;
            ppppppcStack_14c = local_80;
            ppppppcStack_150 = local_70;
            ppppppcStack_154 = (code ******)0x3;
            ppppppcStack_158 = (code ******)0x475d89;
            __vbaFreeVarList();
          }
        }
        iVar6 = local_30 + 1;
        if (SCARRY4(local_30,1)) goto LAB_0047638f;
      }
      if (ppppppcVar13[0x11] == (code *****)0x1) {
        ppppppcStack_148 = (code ******)&local_c8;
        ppppppcStack_14c = local_28;
        ppppppcStack_150 = (code ******)0x475e6a;
        pppppppcVar8 = (code *******)(*(code *)(*local_28)[0xd])();
        if ((int)pppppppcVar8 < 0) {
          ppppppcStack_148 = (code ******)0x34;
          ppppppcStack_14c = (code ******)&DAT_004146fc;
          ppppppcStack_150 = local_28;
          ppppppcStack_158 = (code ******)0x475e7e;
          ppppppcStack_154 = (code ******)pppppppcVar8;
          __vbaHresultCheckObj();
        }
        if ((code *******)local_c8 == (code *******)0x0) {
          ppppppcStack_148 = (code ******)&local_58;
          ppppppcStack_14c = (code ******)ppppppcVar13[0xe];
          ppppppcStack_150 = (code ******)0x475e9c;
          pppppppcVar8 = (code *******)(*(code *)(*ppppppcStack_14c)[0x1b])();
          if ((int)pppppppcVar8 < 0) {
            ppppppcStack_158 = (code ******)ppppppcVar13[0xe];
            ppppppcStack_150 = (code ******)0x6c;
            ppppppcStack_154 = (code ******)&LAB_004133e8;
            ppppppcStack_160 = (code ******)0x475eb0;
            ppppppcStack_15c = (code ******)pppppppcVar8;
            __vbaHresultCheckObj();
          }
          ppppppcVar1 = local_58;
          ppppppcStack_150 = (code ******)&local_c8;
          ppppppcStack_154 = local_58;
          ppppppcStack_158 = (code ******)0x475ec2;
          pppppppcVar8 = (code *******)(*(code *)(*local_58)[0xd])();
          if ((int)pppppppcVar8 < 0) {
            ppppppcStack_148 = (code ******)0x34;
            ppppppcStack_14c = (code ******)&DAT_004146fc;
            ppppppcStack_150 = ppppppcVar1;
            ppppppcStack_158 = (code ******)0x475ed3;
            ppppppcStack_154 = (code ******)pppppppcVar8;
            __vbaHresultCheckObj();
          }
          ppppppcVar1 = local_c8;
          pppppppcVar7 = (code *******)0x1;
          local_30 = local_2c;
          ppppppcStack_148 = (code ******)0x475ef3;
          __vbaFreeObj();
          iVar6 = local_30;
          while (local_30 = iVar6, local_30 <= (int)ppppppcVar1) {
            ppppppcStack_148 = (code ******)&local_58;
            ppppppcStack_14c = (code ******)ppppppcVar13[0xe];
            ppppppcStack_150 = (code ******)0x475f12;
            ppppppcStack_15c = (code ******)(*(code *)(*ppppppcStack_14c)[0x1b])();
            if ((int)ppppppcStack_15c < 0) {
              ppppppcStack_158 = (code ******)ppppppcVar13[0xe];
              ppppppcStack_150 = (code ******)0x6c;
              ppppppcStack_154 = (code ******)&LAB_004133e8;
              ppppppcStack_160 = (code ******)0x475f26;
              __vbaHresultCheckObj();
            }
            ppppppcVar9 = local_58;
            local_98 = (wchar_t *)&local_30;
            ppppppcStack_150 = (code ******)&local_5c;
            ppppppcStack_154 = &local_a0;
            local_a0 = (code *****)0x4003;
            ppppppcStack_158 = local_58;
            ppppppcStack_15c = (code ******)0x475f4f;
            pppppppcVar8 = (code *******)(*(code *)(*local_58)[9])();
            if ((int)pppppppcVar8 < 0) {
              ppppppcStack_15c = (code ******)0x24;
              ppppppcStack_160 = (code ******)&DAT_004146fc;
              ppppppcStack_164 = ppppppcVar9;
              ppppppcStack_16c = (code ******)0x475f60;
              ppppppcStack_168 = (code ******)pppppppcVar8;
              __vbaHresultCheckObj();
            }
            ppppppcStack_15c = local_5c;
            local_5c = (code ******)0x0;
            ppppppcStack_160 = (code ******)&local_38;
            ppppppcStack_164 = (code ******)0x475f75;
            __vbaObjSet();
            pppppppcVar8 = (code *******)__vbaFreeObj_exref;
            ppppppcStack_15c = (code ******)0x475f80;
            __vbaFreeObj();
            ppppppcStack_15c = (code ******)&local_54;
            ppppppcStack_160 = local_38;
            ppppppcStack_164 = (code ******)0x475f8d;
            iVar6 = (*(code *)(*local_38)[7])();
            if (iVar6 < 0) {
              ppppppcStack_164 = (code ******)0x1c;
              ppppppcStack_168 = (code ******)&LAB_0041470c;
              ppppppcStack_16c = local_38;
              __vbaHresultCheckObj(iVar6);
            }
            ppppppcStack_164 = (code ******)&local_58;
            ppppppcStack_168 = local_54;
            ppppppcStack_16c = (code ******)&local_38;
            pppppppcVar10 = (code *******)(*(code *)(*local_28)[8])(local_28);
            if ((int)pppppppcVar10 < 0) {
              ppppppcStack_148 = (code ******)0x20;
              ppppppcStack_14c = (code ******)&DAT_004146fc;
              ppppppcStack_150 = local_28;
              ppppppcStack_158 = (code ******)0x475fca;
              ppppppcStack_154 = (code ******)pppppppcVar10;
              __vbaHresultCheckObj();
            }
            ppppppcStack_148 = (code ******)0x475fd3;
            __vbaFreeStr();
            ppppppcStack_148 = (code ******)0x475fd8;
            __vbaFreeObj();
            iVar6 = local_30 + 1;
            if (SCARRY4(local_30,1)) goto LAB_0047638f;
          }
        }
        ppppppcStack_148 = (code ******)&local_c8;
        ppppppcStack_14c = local_28;
        pppppppcVar7 = (code *******)0x1;
        ppppppcStack_150 = (code ******)0x476002;
        pppppppcVar8 = (code *******)(*(code *)(*local_28)[0xd])();
        if ((int)pppppppcVar8 < 0) {
          ppppppcStack_150 = (code ******)0x34;
          ppppppcStack_154 = (code ******)&DAT_004146fc;
          ppppppcStack_158 = local_28;
          ppppppcStack_160 = (code ******)0x476016;
          ppppppcStack_15c = (code ******)pppppppcVar8;
          __vbaHresultCheckObj();
        }
        if ((code *******)local_c8 == (code *******)0x1) {
          ppppppcStack_150 = (code ******)&local_58;
          ppppppcStack_154 = local_70;
          local_68 = 1;
          local_70[0] = (code *****)0x2;
          ppppppcStack_158 = local_28;
          ppppppcStack_15c = (code ******)0x47603d;
          pppppppcVar8 = (code *******)(*(code *)(*local_28)[9])();
          if ((int)pppppppcVar8 < 0) {
            ppppppcStack_15c = (code ******)0x24;
            ppppppcStack_160 = (code ******)&DAT_004146fc;
            ppppppcStack_164 = local_28;
            ppppppcStack_16c = (code ******)0x476051;
            ppppppcStack_168 = (code ******)pppppppcVar8;
            __vbaHresultCheckObj();
          }
          ppppppcStack_15c = (code ******)&local_5c;
          ppppppcStack_160 = (code ******)ppppppcVar13[0xe];
          ppppppcStack_164 = (code ******)0x476061;
          iVar6 = (*(code *)(*ppppppcStack_160)[0x1b])();
          if (iVar6 < 0) {
            ppppppcStack_16c = (code ******)ppppppcVar13[0xe];
            ppppppcStack_164 = (code ******)0x6c;
            ppppppcStack_168 = (code ******)&LAB_004133e8;
            __vbaHresultCheckObj(iVar6);
          }
          pppppppcVar8 = (code *******)local_5c;
          ppppppcStack_168 = &local_60;
          ppppppcStack_164 = local_58;
          local_58 = (code ******)0x0;
          ppppppcStack_16c = (code ******)0x47608d;
          __vbaObjSet();
          ppppppcStack_164 = &local_34;
          ppppppcStack_168 = &local_60;
          ppppppcStack_16c = (code ******)pppppppcVar8;
          ppppppcStack_158 = (code ******)(*(code *)(*pppppppcVar8)[0x11])();
          if ((int)ppppppcStack_158 < 0) {
            ppppppcStack_14c = (code ******)0x44;
            ppppppcStack_150 = (code ******)&DAT_004146fc;
            ppppppcStack_154 = (code ******)pppppppcVar8;
            ppppppcStack_15c = (code ******)0x4760ac;
            __vbaHresultCheckObj();
          }
          ppppppcStack_14c = (code ******)&local_5c;
          ppppppcStack_150 = &local_60;
          ppppppcStack_154 = (code ******)0x2;
          ppppppcStack_158 = (code ******)0x4760bc;
          __vbaFreeObjList();
          ppppppcStack_14c = (code ******)0x4760c8;
          __vbaFreeVar();
        }
        else {
          if (DAT_0047f2e8 == (int *)0x0) {
            ppppppcStack_150 = (code ******)&DAT_0047f2e8;
            ppppppcStack_154 = (code ******)&DAT_00407de4;
            ppppppcStack_158 = (code ******)0x4760e6;
            __vbaNew2();
          }
          piVar14 = DAT_0047f2e8;
          ppppppcStack_150 = (code ******)&local_28;
          ppppppcStack_154 = (code ******)DAT_0047f2e8;
          ppppppcStack_158 = (code ******)0x4760f9;
          pppppppcVar8 = (code *******)(**(code **)(*DAT_0047f2e8 + 0x704))();
          if ((int)pppppppcVar8 < 0) {
            ppppppcStack_158 = (code ******)0x704;
            ppppppcStack_15c = (code ******)&DAT_00418f8c;
            ppppppcStack_160 = (code ******)piVar14;
            ppppppcStack_168 = (code ******)0x47610d;
            ppppppcStack_164 = (code ******)pppppppcVar8;
            __vbaHresultCheckObj();
          }
          if (DAT_0047f2e8 == (int *)0x0) {
            ppppppcStack_158 = (code ******)&DAT_0047f2e8;
            ppppppcStack_15c = (code ******)&DAT_00407de4;
            ppppppcStack_160 = (code ******)0x476126;
            __vbaNew2();
          }
          piVar14 = DAT_0047f2e8;
          pppppppcVar7 = &ppppppcStack_164;
          local_98 = (wchar_t *)0x1;
          ppppppcStack_164 = (code ******)0xa;
          local_a0 = (code *****)0x3;
          ppppppcStack_160 = local_ac;
          ppppppcStack_15c = (code ******)0x80020004;
          ppppppcStack_158 = local_a4;
          ppppppcStack_16c = (code ******)0x1;
          ppppppcStack_168 = local_94;
          iVar6 = (**(code **)(*DAT_0047f2e8 + 0x2b0))(DAT_0047f2e8,3,local_9c);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,piVar14,&DAT_00418a08,0x2b0);
          }
          if (DAT_0047f2e8 == (int *)0x0) {
            __vbaNew2(&DAT_00407de4,&DAT_0047f2e8);
          }
          piVar14 = DAT_0047f2e8;
          iVar6 = (**(code **)(*DAT_0047f2e8 + 0x6f8))(DAT_0047f2e8,&local_58);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,piVar14,&DAT_00418f8c,0x6f8);
          }
          iVar6 = (*(code *)(*ppppppcVar13[0xe])[0x1b])(ppppppcVar13[0xe],&local_5c);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,ppppppcVar13[0xe],&LAB_004133e8,0x6c);
          }
          ppppppcVar1 = local_58;
          pppppppcVar8 = (code *******)local_5c;
          local_58 = (code ******)0x0;
          __vbaObjSet(&local_60,ppppppcVar1);
          ppppppcStack_154 =
               (code ******)(*(code *)(*pppppppcVar8)[0x11])(pppppppcVar8,&local_60,&local_34);
          if ((int)ppppppcStack_154 < 0) {
            ppppppcStack_148 = (code ******)0x44;
            ppppppcStack_14c = (code ******)&DAT_004146fc;
            ppppppcStack_150 = (code ******)pppppppcVar8;
            ppppppcStack_158 = (code ******)0x476242;
            __vbaHresultCheckObj();
          }
          ppppppcStack_148 = (code ******)&local_5c;
          ppppppcStack_14c = &local_60;
          ppppppcStack_150 = (code ******)0x2;
          ppppppcStack_154 = (code ******)0x476252;
          __vbaFreeObjList();
        }
      }
      iVar6 = local_2c + 1;
      if (SCARRY4(local_2c,1)) {
LAB_0047638f:
        ppppppcStack_148 = (code ******)0x476395;
        __vbaErrorOverflow();
        ppppppcStack_154 = (code ******)&LAB_004032d6;
        ppppppcStack_158 = ExceptionList;
        ppppppcStack_150 = (code ******)&ppppppcStack_16c;
        ppppppcStack_16c = (code ******)pcVar3;
        ppppppcStack_14c = (code ******)&DAT_00402e78;
        ppppppcStack_148 = (code ******)((uint)ppppppcStack_13c & 1);
        piVar14 = (int *)((uint)ppppppcStack_13c & 0xfffffffe);
        ExceptionList = &ppppppcStack_158;
        ppppppcStack_168 = (code ******)pppppppcVar8;
        ppppppcStack_164 = (code ******)pppppppcVar7;
        ppppppcStack_144 = (code ******)&stack0xfffffffc;
        ppppppcStack_13c = (code ******)piVar14;
        (**(code **)(*piVar14 + 4))(piVar14);
        piVar14[0x11] = (int)*(short *)ppppcStack_138;
        ppppppcStack_148 = (code ******)0x0;
        (**(code **)((int)*ppppppcStack_13c + 8))(ppppppcStack_13c);
        ExceptionList = ppppppcStack_158;
        return ppppppcStack_148;
      }
    }
    if (DAT_0047f074 == (code *******)0x0) {
      ppppppcStack_158 = (code ******)&DAT_0047f074;
      ppppppcStack_15c = (code ******)&DAT_0040dbb8;
      ppppppcStack_160 = (code ******)0x476282;
      __vbaNew2();
    }
    pppppppcVar8 = DAT_0047f074;
    ppppppcVar1 = *DAT_0047f074;
    ppppppcStack_158 = (code ******)0x476292;
    ppppppcStack_154 = (code ******)__vbaI2I4();
    ppppppcStack_158 = (code ******)pppppppcVar8;
    ppppppcStack_15c = (code ******)0x47629a;
    pppppppcVar7 = (code *******)(*(code *)ppppppcVar1[0x29])();
    if ((int)pppppppcVar7 < 0) {
      ppppppcStack_15c = (code ******)0xa4;
      ppppppcStack_160 = (code ******)&DAT_00413d48;
      ppppppcStack_164 = (code ******)pppppppcVar8;
      ppppppcStack_16c = (code ******)0x4762b0;
      ppppppcStack_168 = (code ******)pppppppcVar7;
      __vbaHresultCheckObj();
    }
    ppppppcStack_15c = local_c4;
    local_c4[0] = (code *****)0xffffffff;
    ppppppcStack_160 = (code ******)ppppppcVar13[0xd];
    ppppppcStack_164 = (code ******)0x4762d0;
    ppppppcStack_150 = (code ******)(*(code *)(*ppppppcStack_160)[0x1cb])();
    if ((int)ppppppcStack_150 < 0) {
      ppppppcStack_14c = (code ******)ppppppcVar13[0xd];
      ppppppcStack_144 = (code ******)0x72c;
      ppppppcStack_148 = (code ******)&DAT_00413728;
      ppppppcStack_154 = (code ******)0x4762e7;
      __vbaHresultCheckObj();
    }
  }
  local_8 = 0;
  ppppppcStack_144 = (code ******)&LAB_00476370;
  ppppppcStack_148 = &local_e4;
  ppppppcStack_14c = (code ******)local_e0;
  ppppppcStack_150 = (code ******)0x2;
  ppppppcStack_154 = (code ******)0x47633f;
  __vbaFreeObjList();
  ppppppcStack_148 = (code ******)0x47634d;
  __vbaFreeObj();
  ppppppcStack_148 = (code ******)0x476352;
  __vbaFreeObj();
  ppppppcStack_148 = (code ******)0x476357;
  __vbaFreeObj();
  ppppppcStack_148 = (code ******)0x47635c;
  __vbaFreeObj();
  ppppppcStack_148 = (code ******)0x476361;
  __vbaFreeObj();
  ppppppcStack_148 = (code ******)0x47636a;
  __vbaFreeVar();
  ppppppcStack_144 = (code ******)0x47636f;
  uVar12 = __vbaFreeObj();
  return uVar12;
}

/* ---- 0x4763a0 (FUN_004763a0) [estimated] strings:  ---- */
undefined4 FUN_004763a0(uint param_1,short *param_2)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402e78;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  piVar1[0x11] = (int)*param_2;
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x476410 (FUN_00476410) [estimated] strings:  ---- */
undefined4 FUN_00476410(uint param_1,short *param_2)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402e80;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  piVar1[0x10] = (int)*param_2;
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x476480 (FUN_00476480) [estimated] strings:  ---- */
undefined4 FUN_00476480(int *param_1,undefined4 *param_2)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402e88;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaObjSetAddref(param_1 + 0xe,*param_2);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4764f0 (FUN_004764f0) [estimated] strings:  ---- */
void __cdecl FUN_004764f0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_dc [2];
  int local_d4;
  int *local_cc;
  int local_c8 [13];
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff00;
  local_c = &DAT_00402e90;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  uVar6 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_c8[0] = 0;
  local_dc[0] = 0;
  uVar1 = (**(code **)(*piVar5 + 0x2fc))(piVar5,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_28,uVar1);
  uVar1 = __vbaLateIdCallLd(local_44,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar6);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  local_cc = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_cc,&DAT_00417d34,0x2c);
  }
  __vbaFreeObjList(2,&local_28,&local_2c);
  __vbaFreeVar(piVar2);
  iVar3 = __vbaForEachCollObj(&LAB_0041470c,local_dc,&local_1c,piVar5[0xe]);
  while (iVar3 != 0) {
    iVar3 = (**(code **)(*local_1c + 0x1c))(local_1c,&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&LAB_0041470c,0x1c);
    }
    iVar3 = (**(code **)(*local_1c + 0x24))(local_1c,&local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&LAB_0041470c,0x24);
    }
    uVar6 = 0;
    uVar1 = (**(code **)(*piVar5 + 0x2fc))(piVar5,7,0,&DAT_00417d34);
    uVar1 = __vbaObjSet(&local_28,uVar1);
    uVar1 = __vbaLateIdCallLd(local_44,uVar1);
    uVar1 = __vbaCastObjVar(uVar1,uVar6);
    piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
    local_5c = local_20;
    local_94[0] = 10;
    local_84[0] = 10;
    local_54[0] = 10;
    local_8c = 0x80020004;
    local_7c = 0x80020004;
    local_4c = 0x80020004;
    local_6c = local_24;
    local_24 = 0;
    local_74[0] = 8;
    local_20 = 0;
    local_64[0] = 8;
    iVar3 = (**(code **)(*piVar2 + 0x28))
                      (piVar2,local_54,local_64,local_74,local_84,local_94,&local_30);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x28);
    }
    __vbaFreeObjList(3,&local_28,&local_2c,&local_30);
    __vbaFreeVarList(6,local_44,local_54,local_64,local_74,local_84,local_94);
    iVar3 = __vbaNextEachCollObj(&LAB_0041470c,local_dc,&local_1c);
  }
  uVar6 = 0;
  uVar1 = (**(code **)(*piVar5 + 0x2fc))(piVar5,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_28,uVar1);
  uVar1 = __vbaLateIdCallLd(local_44,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar6);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  local_cc = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,local_c8);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_cc,&DAT_00417d34,0x1c);
  }
  local_d4 = -(uint)(local_c8[0] == 0);
  __vbaFreeObjList(2,&local_28,&local_2c);
  __vbaFreeVar(piVar2);
  if ((short)local_d4 == 0) {
    uVar6 = 0;
    uVar1 = (**(code **)(*piVar5 + 0x2fc))(piVar5,7,0,&DAT_00417d34);
    uVar1 = __vbaObjSet(&local_28,uVar1);
    uVar1 = __vbaLateIdCallLd(local_44,uVar1);
    uVar1 = __vbaCastObjVar(uVar1,uVar6);
    local_cc = (int *)__vbaObjSet(&local_2c,uVar1);
    local_4c = 1;
    local_54[0] = 2;
    iVar3 = (**(code **)(*local_cc + 0x24))(local_cc,local_54,&local_30);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_cc,&DAT_00417d34,0x24);
    }
    local_5c = local_30;
    local_30 = 0;
    local_64[0] = 9;
    puVar4 = (undefined4 *)__vbaVerifyVarObj(local_64);
    uVar1 = (**(code **)(*piVar5 + 0x2fc))(piVar5,0xd,0,*puVar4,puVar4[1],puVar4[2],puVar4[3]);
    uVar1 = __vbaObjSet(&local_34,uVar1);
    __vbaLateIdStAd(uVar1);
    __vbaFreeObjList(3,&local_28,&local_2c,&local_34);
    __vbaFreeVarList(3,local_44,local_54,local_64);
  }
  else {
    uVar1 = __vbaCastObj(0,&LAB_0041470c);
    uVar1 = __vbaObjSet(&local_28,uVar1);
    __vbaObjSetAddref(piVar5 + 0xd,uVar1);
    __vbaFreeObj();
    iVar3 = (**(code **)(*piVar5 + 0x2b4))(piVar5);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_00418a08,0x2b4);
    }
  }
  local_8 = 0;
  __vbaFreeObj(&LAB_004769a6);
  __vbaFreeObj();
  return;
}

/* ---- 0x4769d0 (FUN_004769d0) [estimated] strings:  ---- */
void __cdecl FUN_004769d0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c [4];
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00402ea0;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  local_2c[0] = 0;
  local_30 = 0;
  uVar1 = (**(code **)(*piVar3 + 0x2fc))(piVar3,0x80010006,0);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaLateIdCallLd(local_2c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x88))(piVar3,&local_30);
  uVar4 = 0;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00418a08,0x88);
  }
  puVar5 = local_2c;
  __vbaR4Var(puVar5);
  if ((uVar4 & 0xd) == 0) {
    iVar2 = __vbaFpI4();
    piVar3[0xf] = iVar2;
    __vbaFreeObj();
    __vbaFreeVar(puVar5);
    uVar6 = 0;
    uVar1 = (**(code **)(*piVar3 + 0x2fc))(piVar3,0x80010005,0);
    uVar1 = __vbaObjSet(&local_1c,uVar1);
    __vbaLateIdCallLd(local_2c,uVar1);
    iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,&local_30);
    uVar4 = 0;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00418a08,0x80);
    }
    __vbaR4Var(local_2c);
    if ((uVar4 & 0xd) == 0) {
      iVar2 = __vbaFpI4();
      piVar3[0x10] = iVar2;
      __vbaFreeObj();
      __vbaFreeVar(uVar6);
      return;
    }
  }
  __vbaFPException();
  return;
}
