/* Object #26 Shared -- ESTIMATED function range; public methods per VB header:  */
#include "ghidra_types.h"

/* ---- 0x472440 (FUN_00472440) [estimated] strings:  ---- */
void __cdecl FUN_00472440(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_EBX;
  short sVar8;
  undefined4 *unaff_ESI;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_110;
  uint uStack_10c;
  code *pcStack_108;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 *puStack_e4;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  int *piVar14;
  short *psVar15;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_a8;
  int local_a4 [2];
  short local_9c [10];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint uVar9;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff3c;
  local_c = &DAT_00402ce0;
  local_1c = 0;
  local_20 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88 = 0;
  local_9c[0] = 0;
  local_9c[1] = 0;
  local_a4[0] = 0;
  local_a8 = 0;
  ExceptionList = &pvStack_18;
  __vbaLenBstr();
  sVar4 = __vbaI2I4();
  pcVar2 = rtcAnsiValueBstr_exref;
  uVar3 = 1;
  do {
    uVar9 = uVar3;
    sVar8 = (short)uVar9;
    if (sVar4 < sVar8) {
      iVar6 = __vbaStrCmp();
      if (iVar6 == 0) {
        __vbaStrCopy();
      }
      __vbaStrCopy();
      __vbaFreeStr();
      return;
    }
    local_80 = param_1;
    local_30 = 1;
    local_38[0] = 2;
    local_88 = 0x4008;
    puStack_d4 = (undefined4 *)0x472507;
    rtcMidCharVar();
    __vbaStrVarVal();
    uVar5 = rtcAnsiValueBstr();
    local_60 = __vbaStrCat();
    local_a4[0] = (int)(short)uVar5;
    psVar15 = local_9c;
    piVar14 = &local_a8;
    local_68[0] = 8;
    local_9c[0] = 1;
    local_9c[1] = 0;
    local_a8 = 0xff;
    puStack_d4 = (undefined4 *)0x47256e;
    FUN_00440910(local_58,local_a4,piVar14,psVar15);
    puStack_d4 = local_68;
    puStack_d8 = local_58;
    puStack_dc = local_78;
    puStack_e0 = (undefined4 *)0x472580;
    puStack_d4 = (undefined4 *)__vbaVarCat();
    puStack_d8 = (undefined4 *)0x472587;
    __vbaStrVarMove();
    puStack_d4 = (undefined4 *)0x472592;
    __vbaStrMove();
    puStack_d4 = (undefined4 *)0x47259b;
    __vbaFreeStr();
    puStack_d4 = local_78;
    puStack_d8 = local_58;
    puStack_dc = local_68;
    puStack_e0 = local_48;
    puStack_e4 = local_38;
    uStack_e8 = 5;
    uStack_ec = 0x4725b7;
    __vbaFreeVarList();
    uVar3 = (uint)(ushort)(sVar8 + 1);
  } while (!SCARRY2(sVar8,1));
  puStack_d4 = (undefined4 *)0x472661;
  __vbaErrorOverflow();
  puStack_dc = (undefined4 *)&LAB_004032d6;
  puStack_e0 = ExceptionList;
  pcStack_108 = pcVar2;
  puStack_d8 = &uStack_110;
  puStack_d4 = (undefined4 *)&DAT_00402cf0;
  piVar1 = (int *)*unaff_ESI;
  puStack_e4 = (undefined4 *)0x0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f0 = 0;
  uStack_f4 = 0;
  ExceptionList = &puStack_e0;
  piVar12 = piVar1;
  uStack_110 = uVar5;
  uStack_10c = uVar9;
  iVar6 = (**(code **)(*piVar1 + 0x28))(piVar1,unaff_EBX,uStack_b8,uStack_b4,&uStack_e8);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar1,&DAT_00414c50,0x28);
  }
  uStack_e8 = 0;
  __vbaStrMove();
  iVar6 = __vbaStrCmp(&DAT_00412f74,puStack_e4);
  if (iVar6 != 0) {
    piVar14 = (int *)*piVar14;
    __vbaStrCat(*(undefined4 *)psVar15,&LAB_004143c4);
    __vbaStrMove();
    __vbaStrCopy(piVar12,unaff_EBX);
    uVar5 = *(undefined4 *)psVar15;
    puVar13 = &uStack_ec;
    puVar11 = &uStack_e8;
    puVar10 = puStack_e4;
    FUN_004419b0(puStack_e4,puVar11,puVar13);
    uVar7 = __vbaStrMove();
    __vbaStrCat(uVar7,puVar10);
    __vbaStrMove(puVar11,puVar13,uVar5);
    iVar6 = (**(code **)(*piVar14 + 0x7c))(piVar14,&uStack_f4);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar14,&DAT_00414258,0x7c);
    }
    __vbaFreeStrList(4,&uStack_e8,&uStack_ec,&uStack_f0,&uStack_f4);
  }
  __vbaFreeStr(&LAB_004727bd);
  return;
}

/* ---- 0x472670 (FUN_00472670) [estimated] strings:  ---- */
void __cdecl
FUN_00472670(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffbc;
  local_8 = &DAT_00402cf0;
  piVar1 = (int *)*param_3;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  ExceptionList = &pvStack_14;
  piVar6 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,param_4,param_5,param_6,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414c50,0x28);
  }
  local_1c = 0;
  __vbaStrMove();
  iVar2 = __vbaStrCmp(&DAT_00412f74,local_18);
  if (iVar2 != 0) {
    piVar1 = (int *)*param_1;
    __vbaStrCat(*param_2,&LAB_004143c4);
    __vbaStrMove();
    __vbaStrCopy(piVar6,param_4);
    uVar8 = *param_2;
    puVar7 = &local_20;
    puVar5 = &local_1c;
    uVar4 = local_18;
    FUN_004419b0(local_18,puVar5,puVar7);
    uVar3 = __vbaStrMove();
    __vbaStrCat(uVar3,uVar4);
    __vbaStrMove(puVar5,puVar7,uVar8);
    iVar2 = (**(code **)(*piVar1 + 0x7c))(piVar1,&local_28);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x7c);
    }
    __vbaFreeStrList(4,&local_1c,&local_20,&local_24,&local_28);
  }
  __vbaFreeStr(&LAB_004727bd);
  return;
}

/* ---- 0x4727d0 (FUN_004727d0) [estimated] strings:  ---- */
void __cdecl FUN_004727d0(int *param_1,undefined4 *param_2)

{
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402d00;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x10]);
  return;
}

/* ---- 0x472860 (FUN_00472860) [estimated] strings:  ---- */
undefined4 FUN_00472860(int *param_1,undefined4 *param_2)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402d10;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaObjSetAddref(param_1 + 0x10,*param_2);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4728d0 (FUN_004728d0) [estimated] strings:  ---- */
void __cdecl FUN_004728d0(int *param_1,undefined4 *param_2)

{
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402d18;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x11]);
  return;
}
