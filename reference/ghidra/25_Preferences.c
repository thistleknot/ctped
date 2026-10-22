/* Object #25 Preferences -- ESTIMATED function range; public methods per VB header: IndentInc, IndentInc, File, Load, Save */
#include "ghidra_types.h"

/* ---- 0x46e4b0 (FUN_0046e4b0) [estimated] strings:  ---- */
void __cdecl FUN_0046e4b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_00402c80;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_30[0] = (int *)0x0;
  __vbaObjSetAddref(local_30,param_1[0x10]);
  iVar1 = (**(code **)(*local_30[0] + 0x30))(local_30[0],&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x30);
  }
  iVar1 = __vbaStrCmp(&DAT_00412f74,local_1c);
  __vbaFreeStr();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*local_30[0] + 0x4c))(local_30[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x4c);
    }
    iVar1 = (**(code **)(*local_30[0] + 0x70))(local_30[0],&local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x70);
    }
    uVar2 = local_1c;
    FUN_00472200();
    __vbaStrMove(uVar2);
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_20);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1,&DAT_00415000,0x40);
    }
    __vbaFreeStrList(2,&local_1c,&local_20);
    iVar1 = (**(code **)(*local_30[0] + 0x74))(local_30[0],&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)(param_1 + 0xd) = (undefined2)local_24;
    iVar1 = (**(code **)(*local_30[0] + 0x74))(local_30[0],&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)((int)param_1 + 0x36) = (undefined2)local_24;
    iVar1 = (**(code **)(*local_30[0] + 0x74))(local_30[0],&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)(param_1 + 0xe) = (undefined2)local_24;
    iVar1 = (**(code **)(*local_30[0] + 0x74))(local_30[0],&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)((int)param_1 + 0x3a) = (undefined2)local_24;
    iVar1 = (**(code **)(*local_30[0] + 0x48))(local_30[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x48);
    }
    __vbaObjSetAddref(local_30,0);
  }
  __vbaFreeObj(&LAB_0046e6ca);
  return;
}

/* ---- 0x46e6f0 (FUN_0046e6f0) [estimated] strings:  ---- */
void __cdecl FUN_0046e6f0(int *param_1)

{
  int iVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int *local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00402c90;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_30[0] = (int *)0x0;
  __vbaObjSetAddref(local_30,param_1[0x10]);
  iVar1 = (**(code **)(*local_30[0] + 0x30))(local_30[0],&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x30);
  }
  iVar1 = __vbaStrCmp(&DAT_00412f74,local_1c);
  __vbaFreeStr();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*local_30[0] + 0x50))(local_30[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x50);
    }
    iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,&local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1,&DAT_00415000,0x3c);
    }
    local_1c = 0;
    __vbaStrMove();
    FUN_00472440(&local_20);
    __vbaStrMove();
    iVar1 = (**(code **)(*local_30[0] + 0x7c))(local_30[0],&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x7c);
    }
    __vbaFreeStrList(2,&local_20,&local_24);
    __vbaStrBool(CONCAT22(extraout_var_00,(short)param_1[0xd]));
    __vbaStrMove();
    iVar1 = (**(code **)(*local_30[0] + 0x7c))(local_30[0],&local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x7c);
    }
    __vbaFreeStr();
    __vbaStrBool(CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x36)));
    __vbaStrMove();
    iVar1 = (**(code **)(*local_30[0] + 0x7c))(local_30[0],&local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x7c);
    }
    __vbaFreeStr();
    __vbaStrBool(CONCAT22(extraout_var_01,(short)param_1[0xe]));
    __vbaStrMove();
    iVar1 = (**(code **)(*local_30[0] + 0x7c))(local_30[0],&local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x7c);
    }
    __vbaFreeStr();
    __vbaStrBool(CONCAT22(extraout_var_02,*(undefined2 *)((int)param_1 + 0x3a)));
    __vbaStrMove();
    iVar1 = (**(code **)(*local_30[0] + 0x7c))(local_30[0],&local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x7c);
    }
    __vbaFreeStr();
    iVar1 = (**(code **)(*local_30[0] + 0x48))(local_30[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_30[0],&DAT_00414258,0x48);
    }
    __vbaObjSetAddref(local_30,0);
  }
  __vbaFreeObj(&LAB_0046e975);
  return;
}

/* ---- 0x46e9a0 (FUN_0046e9a0) [estimated] strings:  ---- */
void __cdecl FUN_0046e9a0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402ca0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaNew(&DAT_00408318);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x10,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x46ea50 (FUN_0046ea50) [estimated] strings:  ---- */
void FUN_0046ea50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 ushort *param_5,int *param_6,int *param_7)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  code *pcVar8;
  ushort uVar9;
  ushort in_FPUStatusWord;
  float10 fVar10;
  float10 fVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ushort *puVar15;
  int *piVar16;
  int *piVar17;
  double in_stack_fffffdb4;
  short *psVar19;
  longlong lVar18;
  uint uVar20;
  double dVar21;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_104;
  undefined4 local_100 [5];
  undefined4 local_ec;
  int *local_e4;
  undefined4 local_dc;
  undefined4 local_cc;
  undefined4 local_bc [2];
  double local_b4;
  undefined4 local_ac;
  int *local_a8;
  int *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int *local_8c;
  undefined4 local_88;
  int *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  int *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffda8;
  local_c = &DAT_00402cb0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_40[0] = 0;
  local_44 = 0;
  local_4c = 0;
  local_50 = (int *)0x0;
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  local_64 = (int *)0x0;
  local_68 = (int *)0x0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = (int *)0x0;
  local_88 = 0;
  local_8c = (int *)0x0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = (int *)0x0;
  local_a8 = (int *)0x0;
  local_ac = 0;
  local_bc[0] = 0;
  local_cc = 0;
  local_dc = 0;
  local_ec = 0;
  local_100[0] = 0;
  local_104 = 0;
  local_120 = 0;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_130 = 0;
  local_134 = 0;
  local_138 = 0;
  local_13c = 0;
  local_140 = 0;
  local_144 = 0;
  local_148 = 0;
  local_14c = 0;
  local_150 = 0;
  local_154 = 0;
  local_158 = 0;
  local_15c = 0;
  local_160 = 0;
  local_164 = 0;
  local_168 = 0;
  local_16c = 0;
  local_170 = 0;
  local_174 = 0;
  ExceptionList = &pvStack_18;
  __vbaStrCopy();
  local_34 = __vbaInStr();
  pcVar8 = __vbaStrMove_exref;
  do {
    if (local_34 < 1) {
      __vbaStrCat();
      (*pcVar8)();
      __vbaFreeStrList();
      __vbaFreeObjList(0x16,&local_134,&local_138,&local_13c,&local_140,&local_144,&local_148,
                       &local_14c,&local_150,&local_154,&local_158,&local_15c,&local_160,&local_164,
                       &local_168,&local_16c,&local_170,&local_174);
      __vbaFreeVar();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeObj();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeObj();
      return;
    }
    FUN_00441190(local_bc,&local_58,&local_34);
    iVar4 = __vbaI4Var();
    __vbaFreeVar();
    psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
    local_e4 = &local_58;
    if (SBORROW4(local_34,1)) goto LAB_00472134;
    local_ec = 0x4008;
    rtcLeftCharVar();
    __vbaStrVarMove();
    (*pcVar8)();
    __vbaFreeVar();
    psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
    if (iVar4 == 0) {
      __vbaStrCat();
      (*pcVar8)();
      __vbaStrCat();
      (*pcVar8)();
      __vbaFreeStr();
      psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
      local_e4 = &local_58;
      if (SCARRY4(local_34,1)) goto LAB_00472134;
      local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
      local_bc[0] = 10;
      local_ec = 0x4008;
      rtcMidCharVar();
      __vbaStrVarMove();
      (*pcVar8)();
      __vbaFreeVarList();
    }
    else {
      local_e4 = &local_58;
      if (SCARRY4(local_34,1)) goto LAB_00472134;
      local_b4 = (double)CONCAT44(local_b4._4_4_,1);
      local_bc[0] = 2;
      local_ec = 0x4008;
      rtcMidCharVar();
      __vbaVarMove();
      __vbaFreeVar();
      local_e4 = (int *)&DAT_00414e70 /* bstr: '.' */;
      local_ec = 0x8008;
      sVar2 = __vbaVarTstEq();
      psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
      if (sVar2 == 0) {
        local_e4 = (int *)&DAT_00418ebc /* bstr: '~' */;
        local_ec = 0x8008;
        sVar2 = __vbaVarTstEq();
        psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
        if (sVar2 == 0) {
          local_e4 = (int *)&DAT_00418ecc /* bstr: '?' */;
          local_ec = 0x8008;
          sVar2 = __vbaVarTstEq();
          psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
          if (sVar2 == 0) {
            local_e4 = (int *)&DAT_004148f8 /* bstr: '*' */;
            local_ec = 0x8008;
            sVar2 = __vbaVarTstEq();
            psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
            if (sVar2 == 0) {
              local_e4 = (int *)&DAT_00418edc /* bstr: '#' */;
              local_ec = 0x8008;
              sVar2 = __vbaVarTstEq();
              psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
              if (sVar2 == 0) {
                local_e4 = (int *)&DAT_00418ee4 /* bstr: '!' */;
                local_ec = 0x8008;
                sVar2 = __vbaVarTstEq();
                psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
                if (sVar2 == 0) {
                  if (((SBORROW4(iVar4,local_34)) ||
                      (local_e4 = &local_58, SBORROW4(iVar4 - local_34,1))) ||
                     (local_b4 = (double)CONCAT44(local_b4._4_4_,(iVar4 - local_34) + -1),
                     SCARRY4(local_34,1))) goto LAB_00472134;
                  local_bc[0] = 3;
                  local_ec = 0x4008;
                  rtcMidCharVar();
                  puVar12 = param_2;
                  puVar13 = param_3;
                  puVar14 = param_4;
                  puVar15 = param_5;
                  piVar16 = param_6;
                  piVar17 = param_7;
                  uVar5 = __vbaStrVarVal();
                  FUN_0046ea50(uVar5,puVar12,puVar13,puVar14,puVar15,piVar16,piVar17);
                  (*pcVar8)();
                  __vbaFreeStr();
                  __vbaFreeVarList();
                  psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
                  local_e4 = &local_58;
                  if (SCARRY4(iVar4,1)) goto LAB_00472134;
                  local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
                  local_bc[0] = 10;
                  local_ec = 0x4008;
                  rtcMidCharVar();
                  __vbaStrVarMove();
                  (*pcVar8)();
                  __vbaFreeVarList();
                  __vbaStrCat();
                  (*pcVar8)();
                  __vbaStrCat();
                  (*pcVar8)();
                  __vbaStrCat();
                  (*pcVar8)();
                  __vbaStrCat();
                  (*pcVar8)();
                  __vbaFreeStrList();
                }
                else {
                  if (((SBORROW4(iVar4,local_34)) ||
                      (local_e4 = &local_58, SBORROW4(iVar4 - local_34,2))) ||
                     (local_b4 = (double)CONCAT44(local_b4._4_4_,(iVar4 - local_34) + -2),
                     SCARRY4(local_34,2))) goto LAB_00472134;
                  local_bc[0] = 3;
                  local_ec = 0x4008;
                  rtcMidCharVar();
                  puVar12 = param_2;
                  puVar13 = param_3;
                  puVar14 = param_4;
                  puVar15 = param_5;
                  piVar16 = param_6;
                  piVar17 = param_7;
                  uVar5 = __vbaStrVarVal();
                  FUN_0046ea50(uVar5,puVar12,puVar13,puVar14,puVar15,piVar16,piVar17);
                  (*pcVar8)();
                  __vbaFreeStr();
                  __vbaFreeVarList();
                  psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
                  local_e4 = &local_58;
                  if (SCARRY4(iVar4,1)) goto LAB_00472134;
                  local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
                  local_bc[0] = 10;
                  local_ec = 0x4008;
                  rtcMidCharVar();
                  __vbaStrVarMove();
                  (*pcVar8)();
                  __vbaFreeVarList();
                  iVar4 = __vbaLenBstr();
                  psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
                  if (SCARRY4(iVar4,*param_7)) goto LAB_00472134;
                  *param_7 = iVar4 + *param_7;
                }
              }
              else {
                if ((SBORROW4(iVar4,local_34)) ||
                   (local_e4 = &local_58, SBORROW4(iVar4 - local_34,2))) goto LAB_00472134;
                local_b4 = (double)CONCAT44(local_b4._4_4_,(iVar4 - local_34) + -2);
                if (SCARRY4(local_34,2)) goto LAB_00472134;
                local_bc[0] = 3;
                local_ec = 0x4008;
                rtcMidCharVar();
                puVar12 = param_2;
                puVar13 = param_3;
                puVar14 = param_4;
                puVar15 = param_5;
                piVar16 = param_6;
                piVar17 = param_7;
                uVar5 = __vbaStrVarVal();
                FUN_0046ea50(uVar5,puVar12,puVar13,puVar14,puVar15,piVar16,piVar17);
                (*pcVar8)();
                __vbaFreeStr();
                __vbaFreeVarList();
                psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
                local_e4 = &local_58;
                if (SCARRY4(iVar4,1)) goto LAB_00472134;
                local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
                local_bc[0] = 10;
                local_ec = 0x4008;
                rtcMidCharVar();
                __vbaStrVarMove();
                (*pcVar8)();
                __vbaFreeVarList();
                __vbaStrCopy();
                iVar4 = __vbaStrCmp();
                psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
                if (iVar4 == 0) {
                  if (SCARRY4(*param_6,1)) goto LAB_00472134;
                  *param_6 = *param_6 + 1;
                }
                else {
                  iVar4 = __vbaStrCmp();
                  psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
                  if (iVar4 == 0) {
                    if (SBORROW4(*param_6,1)) goto LAB_00472134;
                    *param_6 = *param_6 + -1;
                  }
                  else {
                    iVar4 = __vbaStrCmp();
                    if (iVar4 == 0) {
                      *param_6 = 0;
                    }
                    else {
                      iVar4 = __vbaStrCmp();
                      if (iVar4 == 0) {
                        local_e4 = param_6;
                        local_ec = 0x4003;
                        FUN_00440790();
                        (*pcVar8)();
                        __vbaStrCat();
                        goto LAB_00471bc7;
                      }
                    }
                  }
                }
              }
            }
            else {
              if ((SBORROW4(iVar4,local_34)) || (local_e4 = &local_58, SBORROW4(iVar4 - local_34,2))
                 ) goto LAB_00472134;
              local_b4 = (double)CONCAT44(local_b4._4_4_,(iVar4 - local_34) + -2);
              if (SCARRY4(local_34,2)) goto LAB_00472134;
              local_bc[0] = 3;
              local_ec = 0x4008;
              rtcMidCharVar();
              __vbaStrVarMove();
              (*pcVar8)();
              __vbaFreeVarList();
              local_e4 = &local_58;
              if (SCARRY4(iVar4,1)) goto LAB_00472134;
              local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
              local_bc[0] = 10;
              local_ec = 0x4008;
              rtcMidCharVar();
              __vbaStrVarMove();
              (*pcVar8)();
              __vbaFreeVarList();
              iVar4 = __vbaInStr();
              __vbaStrCat();
              (*pcVar8)();
              if (iVar4 == 0) {
                __vbaStrCopy();
                __vbaStrCopy();
              }
              else {
                local_e4 = &local_4c;
                if (SBORROW4(iVar4,1)) goto LAB_00472134;
                local_ec = 0x4008;
                rtcLeftCharVar();
                __vbaStrVarMove();
                (*pcVar8)();
                __vbaFreeVar();
                local_e4 = &local_4c;
                if (SCARRY4(iVar4,1)) goto LAB_00472134;
                local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
                local_bc[0] = 10;
                local_ec = 0x4008;
                rtcMidCharVar();
                __vbaStrVarMove();
                (*pcVar8)();
                __vbaFreeVarList();
              }
              piVar16 = (int *)*param_3;
              iVar4 = (**(code **)(*piVar16 + 0x44))();
              if (iVar4 < 0) {
                __vbaHresultCheckObj();
              }
              in_stack_fffffdb4 = (double)(ZEXT48(piVar16) << 0x20);
              iVar4 = (**(code **)(*local_a4 + 0x28))();
              in_FPUStatusWord = 0;
              if (iVar4 < 0) {
                __vbaHresultCheckObj();
              }
              local_a8 = (int *)0x0;
              __vbaObjSet();
              __vbaFreeObj();
              sVar2 = __vbaObjIs();
              if (sVar2 == 0) {
                iVar4 = (**(code **)(*local_38 + 0x2c))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                iVar4 = (**(code **)(*local_38 + 0x24))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                if (((short)local_104 == 0 && (short)local_100[0] == 0) && *param_5 != 0) {
                  if (DAT_0047f074 == (int *)0x0) {
                    __vbaNew2();
                  }
                  iVar4 = (**(code **)(*DAT_0047f074 + 0x6fc))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_a4 + 0x34))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  __vbaCastObj();
                  __vbaObjSet();
                  local_104 = local_100[0];
                  iVar4 = (**(code **)(*local_38 + 0x88))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  __vbaFreeObjList();
                }
                iVar4 = (**(code **)(*local_38 + 0x6c))();
                in_FPUStatusWord = 0;
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                local_a4 = (int *)0x0;
                __vbaObjSet();
                iVar4 = __vbaForEachCollObj();
                while (iVar4 != 0) {
                  FUN_0046ea50(local_4c,&local_84,param_3,param_4,param_5,param_6,param_7);
                  (*pcVar8)();
                  __vbaStrCat();
                  (*pcVar8)();
                  __vbaFreeStr();
                  if (0 < *param_7) {
                    __vbaExitEachColl();
                    break;
                  }
                  iVar4 = __vbaNextEachCollObj();
                }
                iVar4 = *param_7;
                goto LAB_004707e6;
              }
            }
          }
          else {
            if ((SBORROW4(iVar4,local_34)) || (local_e4 = &local_58, SBORROW4(iVar4 - local_34,2)))
            goto LAB_00472134;
            local_b4 = (double)CONCAT44(local_b4._4_4_,(iVar4 - local_34) + -2);
            if (SCARRY4(local_34,2)) goto LAB_00472134;
            local_bc[0] = 3;
            local_ec = 0x4008;
            rtcMidCharVar();
            puVar12 = param_2;
            puVar13 = param_3;
            puVar14 = param_4;
            puVar15 = param_5;
            piVar16 = param_6;
            piVar17 = param_7;
            uVar5 = __vbaStrVarVal();
            FUN_0046ea50(uVar5,puVar12,puVar13,puVar14,puVar15,piVar16,piVar17);
            (*pcVar8)();
            __vbaFreeStr();
            __vbaFreeVarList();
            local_e4 = &local_58;
            if (SCARRY4(iVar4,1)) goto LAB_00472134;
            local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
            local_bc[0] = 10;
            local_ec = 0x4008;
            rtcMidCharVar();
            __vbaStrVarMove();
            (*pcVar8)();
            __vbaFreeVarList();
            __vbaStrCopy();
            FUN_00441680(&local_4c,&local_90);
            (*pcVar8)();
            __vbaFreeStr();
            __vbaStrCopy();
            FUN_00441760((undefined *)&local_4c,&local_90);
            (*pcVar8)();
            __vbaFreeStr();
            __vbaStrCopy();
            FUN_00441680(&local_4c,&local_90);
            (*pcVar8)();
            __vbaFreeStr();
            __vbaStrCopy();
            in_stack_fffffdb4 = (double)CONCAT44(&local_90,&local_4c);
            FUN_00441760((undefined *)&local_4c,&local_90);
            (*pcVar8)();
            __vbaFreeStr();
            iVar4 = __vbaInStr();
            if (iVar4 == 0) {
              uVar9 = 0;
              sVar2 = __vbaObjIs();
              if (sVar2 == 0) {
                __vbaStrCopy();
                iVar4 = __vbaStrCmp();
                if (iVar4 == 0) {
                  in_stack_fffffdb4 = (double)CONCAT44(&local_a4,(int *)*param_2);
                  iVar4 = (**(code **)(*(int *)*param_2 + 0x44))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_a4 + 0x68))();
                  in_FPUStatusWord = 0;
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  local_a8 = (int *)0x0;
                  __vbaObjSet();
                  iVar4 = __vbaForEachCollObj();
                  __vbaFreeObj();
                  uVar9 = 0;
                  while (iVar4 != 0) {
                    iVar4 = (**(code **)(*local_64 + 0x24))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    iVar4 = (**(code **)(*local_a4 + 0x6c))();
                    in_FPUStatusWord = 0;
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    local_a8 = (int *)0x0;
                    __vbaObjSet();
                    iVar4 = __vbaForEachCollObj();
                    __vbaFreeObj();
                    while (iVar4 != 0) {
                      iVar4 = (**(code **)(*local_68 + 0x3c))();
                      in_FPUStatusWord = 0;
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj();
                      }
                      local_a4 = (int *)0x0;
                      __vbaObjSet();
                      iVar4 = __vbaForEachCollObj();
                      while (iVar4 != 0) {
                        iVar4 = (**(code **)(*local_64 + 0x28))();
                        if (iVar4 < 0) {
                          __vbaHresultCheckObj();
                        }
                        iVar4 = (**(code **)(*local_50 + 0x28))();
                        in_FPUStatusWord = 0;
                        if (iVar4 < 0) {
                          __vbaHresultCheckObj();
                        }
                        sVar2 = __vbaObjIs();
                        __vbaFreeObjList();
                        if (sVar2 != 0) {
                          iVar4 = (**(code **)(*local_50 + 0x38))();
                          if (iVar4 < 0) {
                            __vbaHresultCheckObj();
                          }
                          iVar4 = (**(code **)(*local_50 + 0x30))();
                          in_FPUStatusWord = 0;
                          if (iVar4 < 0) {
                            __vbaHresultCheckObj();
                          }
                          sVar2 = rtcIsObject();
                          __vbaFreeVar();
                          if (sVar2 != 0) {
                            iVar4 = (**(code **)(*local_50 + 0x30))();
                            in_FPUStatusWord = 0;
                            if (iVar4 < 0) {
                              __vbaHresultCheckObj();
                            }
                            __vbaUnkVar();
                            uVar9 = __vbaObjIs();
                            __vbaFreeVar();
                          }
                        }
                        if (uVar9 != 0) {
                          __vbaExitEachColl();
                          break;
                        }
                        iVar4 = __vbaNextEachCollObj();
                      }
                      if (uVar9 != 0) {
                        __vbaExitEachColl();
                        break;
                      }
                      iVar4 = __vbaNextEachCollObj();
                    }
                    if (uVar9 != 0) {
                      __vbaExitEachColl();
                      break;
                    }
                    iVar4 = __vbaNextEachCollObj();
                  }
                }
                else {
                  __vbaCastObj();
                  __vbaObjSet();
                  in_stack_fffffdb4 = (double)CONCAT44(&local_a4,(int *)*param_2);
                  iVar4 = (**(code **)(*(int *)*param_2 + 0x44))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_a4 + 0x6c))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_a8 + 0x24))();
                  in_FPUStatusWord = 0;
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  local_ac = 0;
                  __vbaObjSet();
                  __vbaFreeObjList();
                  sVar2 = __vbaObjIs();
                  if (sVar2 == 0) {
                    iVar4 = (**(code **)(*(int *)*param_2 + 0x3c))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    iVar4 = (**(code **)(*local_a4 + 0x2c))();
                    in_FPUStatusWord = 0;
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    local_a8 = (int *)0x0;
                    __vbaObjSet();
                    __vbaFreeObj();
                    uVar9 = __vbaObjIs();
                    uVar9 = ~uVar9;
                  }
                }
              }
            }
            else {
              __vbaStrCopy();
              __vbaStrCopy();
              FUN_00441680(local_40,&local_90);
              uVar5 = __vbaStrMove();
              in_stack_fffffdb4 = (double)CONCAT44(uVar5,&local_94);
              FUN_00441760((undefined *)local_40,&local_94);
              __vbaStrMove();
              iVar4 = __vbaStrCmp();
              uVar9 = -(ushort)(iVar4 == 0);
              __vbaFreeStrList();
            }
            if (uVar9 == 0) {
              __vbaStrCat();
              pcVar8 = __vbaStrMove_exref;
              __vbaStrMove();
            }
            else {
              __vbaStrCat();
              pcVar8 = __vbaStrMove_exref;
              __vbaStrMove();
            }
            __vbaStrCat();
            (*pcVar8)();
            __vbaFreeStr();
            pcVar8 = __vbaStrMove_exref;
          }
        }
        else {
          if ((SBORROW4(iVar4,local_34)) || (local_e4 = &local_58, SBORROW4(iVar4 - local_34,2)))
          goto LAB_00472134;
          local_b4 = (double)CONCAT44(local_b4._4_4_,(iVar4 - local_34) + -2);
          if (SCARRY4(local_34,2)) goto LAB_00472134;
          local_bc[0] = 3;
          local_ec = 0x4008;
          rtcMidCharVar();
          __vbaStrVarMove();
          (*pcVar8)();
          __vbaFreeVarList();
          psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
          local_e4 = &local_58;
          if (SCARRY4(iVar4,1)) goto LAB_00472134;
          local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
          local_bc[0] = 10;
          local_ec = 0x4008;
          rtcMidCharVar();
          __vbaStrVarMove();
          (*pcVar8)();
          __vbaFreeVarList();
          iVar4 = __vbaInStr();
          __vbaStrCat();
          (*pcVar8)();
          sVar2 = __vbaObjIs();
          pcVar7 = __vbaStrCopy_exref;
          psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
          if (sVar2 == 0) {
            if (iVar4 == 0) {
              __vbaStrCopy();
              __vbaStrCopy();
            }
            else {
              local_e4 = &local_4c;
              if (SBORROW4(iVar4,1)) goto LAB_00472134;
              local_ec = 0x4008;
              rtcLeftCharVar();
              __vbaStrVarMove();
              (*pcVar8)();
              __vbaFreeVar();
              local_e4 = &local_4c;
              if (SCARRY4(iVar4,1)) goto LAB_00472134;
              local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
              local_bc[0] = 10;
              local_ec = 0x4008;
              rtcMidCharVar();
              __vbaStrVarMove();
              (*pcVar8)();
              __vbaFreeVarList();
              pcVar7 = __vbaStrCopy_exref;
            }
            local_28 = 0xffffffff;
            (*pcVar7)();
            iVar4 = __vbaStrCmp();
            if (iVar4 == 0) {
              piVar16 = (int *)*param_2;
              iVar4 = (**(code **)(*piVar16 + 0x44))();
              if (iVar4 < 0) {
                __vbaHresultCheckObj();
              }
              in_stack_fffffdb4 = (double)(ZEXT48(piVar16) << 0x20);
              iVar4 = (**(code **)(*local_a4 + 0x68))();
              in_FPUStatusWord = 0;
              if (iVar4 < 0) {
                __vbaHresultCheckObj();
              }
              local_a8 = (int *)0x0;
              __vbaObjSet();
              iVar4 = __vbaForEachCollObj();
              __vbaFreeObj();
              while (iVar4 != 0) {
                iVar4 = (**(code **)(*local_64 + 0x24))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                iVar4 = (**(code **)(*local_a4 + 0x2c))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                uVar1 = (ushort)local_100[0];
                uVar9 = *param_5;
                __vbaFreeObj();
                if ((~uVar1 & uVar9) != 0) {
                  iVar4 = (**(code **)(*(int *)*param_4 + 0x34))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_64 + 0x24))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  piVar16 = local_a4;
                  __vbaCastObj();
                  __vbaObjSet();
                  local_104 = local_100[0];
                  iVar4 = (**(code **)(*piVar16 + 0x88))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  __vbaFreeObjList();
                }
                iVar4 = (**(code **)(*local_64 + 0x24))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                iVar4 = (**(code **)(*local_a4 + 0x6c))();
                in_FPUStatusWord = 0;
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                local_a8 = (int *)0x0;
                __vbaObjSet();
                iVar4 = __vbaForEachCollObj();
                __vbaFreeObj();
                while (iVar4 != 0) {
                  iVar4 = (**(code **)(*local_68 + 0x3c))();
                  in_FPUStatusWord = 0;
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  local_a4 = (int *)0x0;
                  __vbaObjSet();
                  iVar4 = __vbaForEachCollObj();
                  while (iVar4 != 0) {
                    iVar4 = (**(code **)(*local_64 + 0x28))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    iVar4 = (**(code **)(*local_50 + 0x28))();
                    in_FPUStatusWord = 0;
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    sVar2 = __vbaObjIs();
                    __vbaFreeObjList();
                    if (sVar2 != 0) {
                      iVar4 = (**(code **)(*local_50 + 0x38))();
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj();
                      }
                      iVar4 = (**(code **)(*local_50 + 0x30))();
                      in_FPUStatusWord = 0;
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj();
                      }
                      sVar2 = rtcIsObject();
                      __vbaFreeVar();
                      if (sVar2 != 0) {
                        iVar4 = (**(code **)(*local_50 + 0x30))();
                        in_FPUStatusWord = 0;
                        if (iVar4 < 0) {
                          __vbaHresultCheckObj();
                        }
                        __vbaUnkVar();
                        sVar2 = __vbaObjIs();
                        __vbaFreeVar();
                        if (sVar2 != 0) {
                          FUN_0046ea50(local_4c,&local_68,param_3,param_4,param_5,param_6,param_7);
                          (*pcVar8)();
                          iVar4 = __vbaInStr();
                          uVar5 = (undefined4)((ulonglong)in_stack_fffffdb4 >> 0x20);
                          if (iVar4 == 0) {
                            __vbaStrCat();
                            (*pcVar8)();
                          }
                          else if ((short)local_28 == 0) {
                            __vbaStrCopy();
                            __vbaStrCopy();
                            puVar12 = &local_90;
                            FUN_00441760((undefined *)&local_24,puVar12);
                            (*pcVar8)();
                            __vbaStrCat();
                            (*pcVar8)();
                            in_stack_fffffdb4 = (double)(ZEXT48(puVar12) << 0x20);
                            FUN_00441680(&local_24,&local_98);
                            (*pcVar8)();
                            __vbaStrCat();
                            (*pcVar8)();
                            __vbaFreeStrList();
                          }
                          else {
                            local_28 = 0;
                            __vbaStrCopy();
                            in_stack_fffffdb4 = (double)CONCAT44(uVar5,local_60);
                            FUN_00441680(&local_24,&local_90);
                            (*pcVar8)();
                            __vbaStrCat();
                            (*pcVar8)();
                            __vbaFreeStrList();
                          }
                        }
                      }
                    }
                    if (0 < *param_7) {
                      __vbaExitEachColl();
                      break;
                    }
                    iVar4 = __vbaNextEachCollObj();
                  }
                  if (0 < *param_7) {
                    __vbaExitEachColl();
                    break;
                  }
                  iVar4 = __vbaNextEachCollObj();
                }
                if (0 < *param_7) {
                  __vbaExitEachColl();
                  break;
                }
                iVar4 = __vbaNextEachCollObj();
              }
              iVar4 = *param_7;
LAB_004707e6:
              psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
              if (0 < iVar4) {
                if (SBORROW4(iVar4,1)) {
LAB_00472134:
                  __vbaErrorOverflow();
                  ExceptionList = &stack0xfffffd9c;
                  if (*psVar19 == 0) {
                    ExceptionList = &stack0xfffffd9c;
                    __vbaStrCopy();
                  }
                  else {
                    __vbaStrCopy();
                    FUN_00440860(psVar19,(undefined4 *)&stack0xfffffd94);
                    __vbaStrMove();
                    __vbaFreeStr();
                  }
                  return;
                }
                *param_7 = iVar4 + -1;
              }
            }
            else {
              piVar16 = (int *)*param_2;
              iVar4 = (**(code **)(*piVar16 + 0x44))();
              if (iVar4 < 0) {
                __vbaHresultCheckObj();
              }
              in_stack_fffffdb4 = (double)(ZEXT48(piVar16) << 0x20);
              iVar4 = (**(code **)(*local_a4 + 0x6c))();
              if (iVar4 < 0) {
                __vbaHresultCheckObj();
              }
              iVar4 = (**(code **)(*local_a8 + 0x24))();
              in_FPUStatusWord = 0;
              if (iVar4 < 0) {
                __vbaHresultCheckObj();
              }
              local_ac = 0;
              __vbaObjSet();
              __vbaFreeObjList();
              sVar2 = __vbaObjIs();
              if (sVar2 == 0) {
                iVar4 = (**(code **)(*(int *)*param_2 + 0x3c))();
                in_FPUStatusWord = 0;
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                local_a4 = (int *)0x0;
                __vbaObjSet();
                iVar4 = __vbaForEachCollObj();
                while (iVar4 != 0) {
                  iVar4 = (**(code **)(*local_50 + 0x28))();
                  in_FPUStatusWord = 0;
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  sVar2 = __vbaObjIs();
                  __vbaFreeObj();
                  if (sVar2 != 0) {
                    iVar4 = (**(code **)(*local_50 + 0x38))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    iVar4 = (**(code **)(*local_50 + 0x30))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    sVar2 = rtcIsObject();
                    __vbaFreeVar();
                    if (sVar2 == 0) {
                      __vbaNew();
                      __vbaObjSet();
                      iVar4 = (**(code **)(*local_50 + 0x30))();
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj();
                      }
                      iVar4 = *local_84;
                      __vbaStrVarVal();
                      iVar4 = (**(code **)(iVar4 + 0x28))();
                      in_FPUStatusWord = 0;
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj();
                      }
                      __vbaFreeStr();
                    }
                    else {
                      iVar4 = (**(code **)(*local_50 + 0x30))();
                      in_FPUStatusWord = 0;
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj();
                      }
                      __vbaCastObjVar();
                      __vbaObjSet();
                    }
                    __vbaFreeVar();
                    FUN_0046ea50(local_4c,&local_84,param_3,param_4,param_5,param_6,param_7);
                    (*pcVar8)();
                    iVar4 = __vbaInStr();
                    if (iVar4 == 0) {
                      __vbaStrCat();
                      (*pcVar8)();
                    }
                    else if ((short)local_28 == 0) {
                      __vbaStrCopy();
                      __vbaStrCopy();
                      FUN_00441760((undefined *)&local_24,&local_90);
                      (*pcVar8)();
                      __vbaStrCat();
                      (*pcVar8)();
                      FUN_00441680(&local_24,&local_98);
                      (*pcVar8)();
                      __vbaStrCat();
                      (*pcVar8)();
                      __vbaFreeStrList();
                    }
                    else {
                      local_28 = 0;
                      __vbaStrCopy();
                      FUN_00441680(&local_24,&local_90);
                      (*pcVar8)();
                      __vbaStrCat();
                      (*pcVar8)();
                      __vbaFreeStrList();
                    }
                  }
                  if (0 < *param_7) {
                    __vbaExitEachColl();
                    break;
                  }
                  iVar4 = __vbaNextEachCollObj();
                }
                psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
                iVar4 = *param_7;
                if (0 < iVar4) {
                  if (SBORROW4(iVar4,1)) goto LAB_00472134;
                  *param_7 = iVar4 + -1;
                }
              }
            }
          }
        }
      }
      else {
        if ((SBORROW4(iVar4,local_34)) || (local_e4 = &local_58, SBORROW4(iVar4 - local_34,2)))
        goto LAB_00472134;
        local_b4 = (double)CONCAT44(local_b4._4_4_,(iVar4 - local_34) + -2);
        if (SCARRY4(local_34,2)) goto LAB_00472134;
        local_bc[0] = 3;
        local_ec = 0x4008;
        rtcMidCharVar();
        puVar12 = param_2;
        puVar13 = param_3;
        puVar14 = param_4;
        puVar15 = param_5;
        piVar16 = param_6;
        piVar17 = param_7;
        uVar5 = __vbaStrVarVal();
        FUN_0046ea50(uVar5,puVar12,puVar13,puVar14,puVar15,piVar16,piVar17);
        (*pcVar8)();
        __vbaFreeStr();
        __vbaFreeVarList();
        local_e4 = &local_58;
        if (SCARRY4(iVar4,1)) goto LAB_00472134;
        local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
        local_bc[0] = 10;
        local_ec = 0x4008;
        rtcMidCharVar();
        __vbaStrVarMove();
        (*pcVar8)();
        __vbaFreeVarList();
        local_6c = __vbaInStr();
        if (local_6c == 0) {
          __vbaStrCopy();
        }
        else {
          local_e4 = &local_4c;
          if (SBORROW4(local_6c,1)) goto LAB_00472134;
          local_ec = 0x4008;
          rtcLeftCharVar();
          __vbaStrVarMove();
          (*pcVar8)();
          __vbaFreeVar();
        }
        __vbaObjSetAddref();
        lVar18 = CONCAT44(psVar19,1);
        local_48 = __vbaInStr();
LAB_0046efbd:
        uVar20 = (uint)((ulonglong)lVar18 >> 0x20);
        iVar6 = __vbaStrCmp();
        in_stack_fffffdb4 = (double)((ulonglong)uVar20 << 0x20);
        sVar2 = __vbaObjIs();
        iVar4 = local_48;
        pcVar7 = __vbaStrCopy_exref;
        psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
        if (sVar2 == 0 && iVar6 != 0) {
          if (local_48 < 1) {
            __vbaStrCopy();
            __vbaStrCopy();
          }
          else {
            local_e4 = &local_54;
            if (SBORROW4(local_48,1)) goto LAB_00472134;
            local_ec = 0x4008;
            rtcLeftCharVar();
            __vbaStrVarMove();
            (*pcVar8)();
            __vbaFreeVar();
            local_e4 = &local_54;
            if (SCARRY4(iVar4,1)) goto LAB_00472134;
            local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
            local_bc[0] = 10;
            local_ec = 0x4008;
            rtcMidCharVar();
            __vbaStrVarMove();
            (*pcVar8)();
            __vbaFreeVarList();
            pcVar7 = __vbaStrCopy_exref;
          }
          local_48 = __vbaInStr();
          (*pcVar7)();
          iVar4 = __vbaStrCmp();
          if (iVar4 == 0) {
            piVar16 = local_84;
            iVar4 = (**(code **)(*local_84 + 0x24))();
            in_FPUStatusWord = 0;
            if (iVar4 < 0) {
              __vbaHresultCheckObj();
            }
            local_90 = 0;
            (*pcVar8)();
            __vbaCastObj();
            lVar18 = ZEXT48(piVar16) << 0x20;
            __vbaObjSet();
          }
          else {
            iVar4 = __vbaStrCmp();
            if (iVar4 == 0) {
              piVar16 = local_84;
              iVar4 = (**(code **)(*local_84 + 0x44))();
              in_FPUStatusWord = 0;
              if (iVar4 < 0) {
                __vbaHresultCheckObj();
              }
              sVar2 = __vbaObjIs();
              __vbaFreeObj();
              if (sVar2 == 0) {
                iVar4 = (**(code **)(*local_84 + 0x44))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                iVar4 = (**(code **)(*local_a4 + 0x50))();
                in_FPUStatusWord = 0;
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                local_90 = 0;
                (*pcVar8)();
                __vbaFreeObj();
              }
              else {
                __vbaStrCopy();
              }
LAB_0046f2a2:
              __vbaCastObj();
              lVar18 = ZEXT48(piVar16) << 0x20;
              __vbaObjSet();
            }
            else {
              iVar4 = __vbaStrCmp();
              if (iVar4 == 0) {
                piVar16 = local_84;
                iVar4 = (**(code **)(*local_84 + 0x2c))();
                in_FPUStatusWord = 0;
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                local_90 = 0;
                (*pcVar8)();
                goto LAB_0046f2a2;
              }
              iVar4 = __vbaStrCmp();
              if (iVar4 == 0) {
                (*pcVar7)();
                __vbaCastObj();
                __vbaObjSet();
                piVar16 = local_84;
                iVar4 = (**(code **)(*local_84 + 0x44))();
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                iVar4 = (**(code **)(*local_a4 + 0x68))();
                in_FPUStatusWord = 0;
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                local_a8 = (int *)0x0;
                __vbaObjSet();
                iVar4 = __vbaForEachCollObj();
                lVar18 = CONCAT44(piVar16,0x46f388);
                __vbaFreeObj();
                while (iVar4 != 0) {
                  uVar5 = (undefined4)((ulonglong)lVar18 >> 0x20);
                  iVar4 = (**(code **)(*local_64 + 0x24))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_a4 + 0x2c))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  uVar1 = (ushort)local_100[0];
                  uVar9 = *param_5;
                  __vbaFreeObj();
                  if ((~uVar1 & uVar9) != 0) {
                    iVar4 = (**(code **)(*(int *)*param_4 + 0x34))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    iVar4 = (**(code **)(*local_64 + 0x24))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    piVar16 = local_a4;
                    __vbaCastObj();
                    __vbaObjSet();
                    local_104 = local_100[0];
                    iVar4 = (**(code **)(*piVar16 + 0x88))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    __vbaFreeObjList();
                  }
                  iVar4 = (**(code **)(*local_64 + 0x24))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_a4 + 0x6c))();
                  in_FPUStatusWord = 0;
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  local_a8 = (int *)0x0;
                  __vbaObjSet();
                  iVar4 = __vbaForEachCollObj();
                  lVar18 = CONCAT44(uVar5,0x46f546);
                  __vbaFreeObj();
                  while (uVar20 = (uint)((ulonglong)lVar18 >> 0x20), iVar4 != 0) {
                    iVar4 = (**(code **)(*local_68 + 0x3c))();
                    in_FPUStatusWord = 0;
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    local_a4 = (int *)0x0;
                    __vbaObjSet();
                    lVar18 = (ulonglong)uVar20 << 0x20;
                    iVar4 = __vbaForEachCollObj();
                    while (uVar20 = (uint)((ulonglong)lVar18 >> 0x20), iVar4 != 0) {
                      iVar4 = (**(code **)(*local_64 + 0x28))();
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj();
                      }
                      iVar4 = (**(code **)(*local_50 + 0x28))();
                      in_FPUStatusWord = 0;
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj();
                      }
                      sVar2 = __vbaObjIs();
                      __vbaFreeObjList();
                      if (sVar2 != 0) {
                        iVar4 = (**(code **)(*local_50 + 0x38))();
                        if (iVar4 < 0) {
                          __vbaHresultCheckObj();
                        }
                        iVar4 = (**(code **)(*local_50 + 0x30))();
                        in_FPUStatusWord = 0;
                        if (iVar4 < 0) {
                          __vbaHresultCheckObj();
                        }
                        sVar2 = rtcIsObject();
                        __vbaFreeVar();
                        if (sVar2 != 0) {
                          iVar4 = (**(code **)(*local_50 + 0x30))();
                          in_FPUStatusWord = 0;
                          if (iVar4 < 0) {
                            __vbaHresultCheckObj();
                          }
                          __vbaUnkVar();
                          sVar2 = __vbaObjIs();
                          __vbaFreeVar();
                          if (sVar2 != 0) {
                            __vbaObjSetAddref();
                            iVar4 = (**(code **)(*local_84 + 0x24))();
                            in_FPUStatusWord = 0;
                            if (iVar4 < 0) {
                              __vbaHresultCheckObj();
                            }
                            local_90 = 0;
                            (*pcVar8)();
                            __vbaExitEachColl();
                            break;
                          }
                        }
                      }
                      lVar18 = (ulonglong)uVar20 << 0x20;
                      iVar4 = __vbaNextEachCollObj();
                    }
                    iVar4 = __vbaStrCmp();
                    if (iVar4 != 0) {
                      __vbaExitEachColl();
                      break;
                    }
                    lVar18 = (ulonglong)uVar20 << 0x20;
                    iVar4 = __vbaNextEachCollObj();
                  }
                  iVar4 = __vbaStrCmp();
                  if (iVar4 != 0) {
                    lVar18 = (ulonglong)uVar20 << 0x20;
                    __vbaExitEachColl();
                    break;
                  }
                  lVar18 = (ulonglong)uVar20 << 0x20;
                  iVar4 = __vbaNextEachCollObj();
                }
              }
              else {
                lVar18 = CONCAT44(local_84,0x46f7e4);
                iVar4 = (**(code **)(*local_84 + 0x44))();
                in_FPUStatusWord = 0;
                if (iVar4 < 0) {
                  __vbaHresultCheckObj();
                }
                sVar2 = __vbaObjIs();
                __vbaFreeObj();
                if (sVar2 == 0) {
                  iVar4 = (**(code **)(*local_84 + 0x44))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_a4 + 0x6c))();
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  iVar4 = (**(code **)(*local_a8 + 0x24))();
                  in_FPUStatusWord = 0;
                  if (iVar4 < 0) {
                    __vbaHresultCheckObj();
                  }
                  pcVar7 = __vbaObjSet_exref;
                  local_ac = 0;
                  __vbaObjSet();
                  __vbaFreeObjList();
                  sVar2 = __vbaObjIs();
                  if (sVar2 == 0) {
                    iVar4 = (**(code **)(*local_84 + 0x3c))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj(iVar4);
                    }
                    piVar16 = local_a4;
                    iVar4 = (**(code **)(*local_a4 + 0x2c))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj(iVar4,piVar16,&DAT_00414ba4,0x2c);
                    }
                    piVar16 = local_a8;
                    pcVar7 = __vbaObjSet_exref;
                    local_a8 = (int *)0x0;
                    __vbaObjSet(&local_50,piVar16);
                    __vbaFreeObj();
                    iVar4 = (**(code **)(*local_8c + 0x44))(local_8c,local_100);
                    in_FPUStatusWord = 0;
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj();
                    }
                    sVar2 = __vbaObjIs();
                    if ((short)local_100[0] == 0 || sVar2 != 0) {
                      __vbaCastObj();
                      goto LAB_0046f9f6;
                    }
                    iVar4 = (**(code **)(*local_50 + 0x38))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj(iVar4);
                    }
                    iVar4 = (**(code **)(*local_50 + 0x30))();
                    if (iVar4 < 0) {
                      __vbaHresultCheckObj(iVar4,local_50,&DAT_00414bb4);
                    }
                    sVar2 = rtcIsObject();
                    __vbaFreeVar();
                    uVar20 = (uint)((ulonglong)lVar18 >> 0x20);
                    if (sVar2 == 0) {
                      iVar4 = (**(code **)(*local_50 + 0x30))();
                      in_FPUStatusWord = 0;
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj(iVar4,local_50,&DAT_00414bb4,0x30);
                      }
                      __vbaStrVarMove(local_bc);
                      (*pcVar8)();
                      __vbaFreeVar();
                      __vbaCastObj();
                      lVar18 = (ulonglong)uVar20 << 0x20;
                      __vbaObjSet();
                    }
                    else {
                      iVar4 = (**(code **)(*local_50 + 0x30))();
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj(iVar4,local_50,&DAT_00414bb4,0x30);
                      }
                      uVar5 = __vbaCastObjVar(local_bc,&LAB_0041470c);
                      __vbaObjSet(&local_84,uVar5);
                      __vbaFreeVar();
                      iVar4 = (**(code **)(*local_84 + 0x24))(local_84);
                      in_FPUStatusWord = 0;
                      if (iVar4 < 0) {
                        __vbaHresultCheckObj(iVar4,local_84,&LAB_0041470c,0x24);
                      }
                      local_90 = 0;
                      (*pcVar8)();
                    }
                  }
                  else {
                    __vbaCastObj();
LAB_0046f9f6:
                    (*pcVar7)();
                    __vbaStrCopy();
                  }
                }
                else {
                  __vbaCastObj();
                  __vbaObjSet();
                  __vbaStrCopy();
                }
              }
            }
          }
          goto LAB_0046efbd;
        }
        local_e4 = &local_30;
        local_ec = 0x4008;
        sVar2 = rtcIsNumeric();
        psVar19 = (short *)((ulonglong)in_stack_fffffdb4 >> 0x20);
        if ((sVar2 != 0) && (0 < local_6c)) {
          if (SCARRY4(local_6c,1)) goto LAB_00472134;
          local_b4 = (double)CONCAT44(local_b4._4_4_,0x80020004);
          local_bc[0] = 10;
          local_ec = 0x4008;
          local_e4 = &local_4c;
          rtcMidCharVar();
          rtcTrimVar();
          __vbaStrVarMove();
          (*pcVar8)();
          __vbaFreeVarList();
          while (iVar4 = __vbaInStr(), iVar4 != 0) {
            __vbaStrCopy();
            FUN_00441680(&local_20,&local_90);
            (*pcVar8)();
            __vbaFreeStr();
            __vbaStrCopy();
            FUN_00441760((undefined *)&local_20,&local_90);
            (*pcVar8)();
            __vbaFreeStr();
            __vbaStrCopy();
            FUN_00441680(&local_20,&local_90);
            (*pcVar8)();
            __vbaFreeStr();
            __vbaStrCopy();
            in_stack_fffffdb4 = (double)CONCAT44(&local_90,&local_20);
            FUN_00441760((undefined *)&local_20,&local_90);
            (*pcVar8)();
            __vbaFreeStr();
            local_e4 = &local_70;
            local_ec = 0x4008;
            sVar2 = rtcIsNumeric();
            if (sVar2 == 0) break;
            __vbaStrCopy();
            iVar4 = __vbaStrCmp();
            if (iVar4 == 0) {
              fVar10 = (float10)__vbaR8Str();
              fVar11 = (float10)__vbaR8Str();
              fVar11 = fVar11 + (float10)(double)fVar10;
LAB_0046fd6e:
              local_b4 = (double)fVar11;
              if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0047212f;
              local_bc[0] = 5;
            }
            else {
              iVar4 = __vbaStrCmp();
              uVar20 = (uint)((ulonglong)in_stack_fffffdb4 >> 0x20);
              if (iVar4 == 0) {
                fVar11 = (float10)__vbaR8Str();
                fVar10 = (float10)__vbaR8Str();
                fVar10 = (float10)(double)fVar11 - fVar10;
                in_stack_fffffdb4 = (double)((ulonglong)uVar20 << 0x20);
              }
              else {
                iVar4 = __vbaStrCmp();
                if (iVar4 != 0) {
                  iVar4 = __vbaStrCmp();
                  if (iVar4 == 0) {
                    fVar11 = (float10)__vbaR8Str();
                    dVar21 = (double)fVar11;
                    fVar11 = (float10)__vbaR8Str();
                    if (DAT_0047f000 == 0) {
                      fVar11 = (float10)dVar21 / fVar11;
                    }
                    else {
                      fVar11 = (float10)adj_fdivr_m64();
                    }
                    goto LAB_0046fd6e;
                  }
                  iVar4 = __vbaStrCmp();
                  if (iVar4 == 0) {
                    fVar11 = (float10)__vbaR8Str();
                    in_stack_fffffdb4 = (double)fVar11;
                    __vbaR8Str();
                    if (DAT_0047f000 != 0) {
                      adj_fdivr_m64();
                    }
                    if ((in_FPUStatusWord & 0xd) != 0) goto LAB_0047212f;
                    uVar3 = __vbaFpI2();
                    local_b4 = (double)CONCAT62(local_b4._2_6_,uVar3);
                    local_bc[0] = 2;
                    goto LAB_0046fd8f;
                  }
                  break;
                }
                fVar11 = (float10)__vbaR8Str();
                fVar10 = (float10)__vbaR8Str();
                fVar10 = fVar10 * (float10)(double)fVar11;
              }
              local_bc[0] = 5;
              local_b4 = (double)fVar10;
              if ((in_FPUStatusWord & 0xd) != 0) {
LAB_0047212f:
                __vbaFPException();
                return;
              }
            }
LAB_0046fd8f:
            FUN_00440790();
            (*pcVar8)();
            __vbaFreeVar();
          }
        }
        __vbaStrCat();
        (*pcVar8)();
        __vbaStrCat();
LAB_00471bc7:
        (*pcVar8)();
        __vbaFreeStr();
      }
    }
    local_34 = __vbaInStr();
  } while( true );
}

/* ---- 0x472140 (FUN_00472140) [estimated] strings:  ---- */
void __cdecl FUN_00472140(short *param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_00402cc0;
  local_1c = 0;
  local_20 = 0;
  if (*param_1 == 0) {
    ExceptionList = &pvStack_18;
    local_10 = &stack0xffffffcc;
    __vbaStrCopy();
  }
  else {
    ExceptionList = &pvStack_18;
    __vbaStrCopy();
    FUN_00440860(param_1,&local_20);
    __vbaStrMove();
    __vbaFreeStr();
  }
  return;
}

/* ---- 0x472200 (FUN_00472200) [estimated] strings:  ---- */
void FUN_00472200(void)

{
  short sVar1;
  int iVar2;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff74;
  local_c = &DAT_00402cd0;
  local_1c = 0;
  local_24[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  ExceptionList = &pvStack_18;
  __vbaStrCopy();
  while( true ) {
    iVar2 = __vbaInStr(0,&DAT_00418eb4 /* bstr: '%' */);
    if (iVar2 == 0) break;
    local_60 = &local_1c;
    local_40 = 4;
    local_48 = 2;
    local_68[0] = 0x4008;
    __vbaInStr(0,&DAT_00418eb4 /* bstr: '%' */,local_1c);
    rtcMidCharVar(local_58,local_68);
    __vbaStrVarMove();
    __vbaStrMove();
    __vbaFreeVarList(2);
    local_60 = local_24;
    local_40 = 0x80020004;
    local_48 = 10;
    local_68[0] = 0x4008;
    rtcMidCharVar(local_58,local_68);
    sVar1 = __vbaI2ErrVar();
    __vbaFreeVarList();
    if (sVar1 == 0) {
      __vbaStrCopy();
    }
    else {
      rtcVarBstrFromAnsi();
      __vbaStrVarMove();
      __vbaStrMove();
      __vbaFreeVar();
    }
    FUN_00441680(&local_1c,local_24);
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    FUN_00441760((undefined *)&local_1c,local_24);
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    __vbaFreeStrList(3,&local_30);
  }
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}
