/* Object #32 frmSLICTemplate -- ESTIMATED function range; public methods per VB header: Setup */
#include "ghidra_types.h"

/* ---- 0x477830 (FUN_00477830) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00477830(uint param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  code *pcVar10;
  code *pcStack_d0;
  uint *puStack_cc;
  int *piStack_c8;
  undefined4 uStack_b8;
  int iStack_b4;
  uint *puStack_b0;
  uint *puStack_ac;
  uint *puStack_a8;
  uint *puStack_a4;
  uint *puStack_a0;
  uint *puStack_9c;
  uint *puStack_98;
  uint *puStack_94;
  uint *puStack_90;
  uint *puStack_8c;
  uint *puStack_88;
  uint *puStack_84;
  uint *puStack_80;
  uint *puStack_7c;
  uint local_3c;
  uint local_38 [7];
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff88;
  local_c = &DAT_00402f10;
  local_8 = param_1 & 1;
  puVar8 = (uint *)(param_1 & 0xfffffffe);
  puStack_80 = (uint *)0x477870;
  ExceptionList = &pvStack_18;
  puStack_7c = puVar8;
  (**(code **)(*puVar8 + 4))();
  uVar1 = *puVar8;
  pcVar10 = (code *)0x0;
  local_38[6] = 0;
  local_38[5] = 0;
  local_38[4] = 0;
  local_38[3] = 0;
  local_38[2] = 0;
  local_38[1] = 0;
  local_38[0] = 0;
  local_3c = 0;
  puStack_80 = (uint *)0x477897;
  puStack_7c = (uint *)__vbaI2I4();
  puStack_84 = (uint *)0x47789f;
  puStack_80 = puVar8;
  iVar3 = (**(code **)(uVar1 + 0xa4))();
  if (iVar3 < 0) {
    puStack_84 = (uint *)0xa4;
    puStack_88 = (uint *)&DAT_004175dc;
    puStack_94 = (uint *)0x4778b7;
    puStack_90 = (uint *)iVar3;
    puStack_8c = puVar8;
    __vbaHresultCheckObj();
  }
  puStack_88 = (uint *)0x4778c0;
  puStack_84 = puVar8;
  puStack_88 = (uint *)(**(code **)(*puVar8 + 0x30c))();
  puStack_8c = local_38 + 2;
  puStack_90 = (uint *)0x4778cb;
  piVar4 = (int *)__vbaObjSet();
  puStack_88 = local_38;
  puStack_90 = (uint *)0x4778da;
  puStack_8c = (uint *)piVar4;
  puVar5 = (uint *)(**(code **)(*piVar4 + 0xe8))();
  if ((int)puVar5 < 0) {
    puStack_90 = (uint *)0xe8;
    puStack_94 = (uint *)&DAT_00416cb0;
    puStack_a0 = (uint *)0x4778f2;
    puStack_9c = puVar5;
    puStack_98 = (uint *)piVar4;
    __vbaHresultCheckObj();
  }
  sVar2 = (short)local_38[0] + -1;
  if (!SBORROW2((short)local_38[0],1)) {
    piVar4 = (int *)0x0;
    local_1c = (int *)0x0;
    puStack_90 = (uint *)0x47791b;
    __vbaFreeObj();
    piVar9 = local_1c;
    do {
      local_1c = piVar9;
      if ((int)sVar2 < (int)piVar4) {
        uVar1 = *puVar8;
        puStack_90 = (uint *)0x477ac5;
        puStack_8c = (uint *)__vbaI2I4();
        puStack_94 = (uint *)0x477acd;
        puStack_90 = puVar8;
        puStack_a0 = (uint *)(**(code **)(uVar1 + 0xa4))();
        if ((int)puStack_a0 < 0) {
          puStack_94 = (uint *)0xa4;
          puStack_98 = (uint *)&DAT_004175dc;
          puStack_a4 = (uint *)0x477ae5;
          puStack_9c = puVar8;
          __vbaHresultCheckObj();
        }
        return;
      }
      puStack_94 = (uint *)0x47792d;
      puStack_90 = puVar8;
      puStack_94 = (uint *)(**(code **)(*puVar8 + 0x30c))();
      puStack_98 = local_38 + 2;
      puStack_9c = (uint *)0x477938;
      puVar5 = (uint *)__vbaObjSet();
      puStack_94 = local_38;
      uVar1 = *puVar5;
      puStack_98 = (uint *)0x47794b;
      puStack_94 = (uint *)__vbaI2I4();
      puStack_9c = (uint *)0x477956;
      puStack_98 = puVar5;
      puVar6 = (uint *)(**(code **)(uVar1 + 0x170))();
      if ((int)puVar6 < 0) {
        puStack_9c = (uint *)0x170;
        puStack_a0 = (uint *)&DAT_00416cb0;
        puStack_ac = (uint *)0x47796e;
        puStack_a8 = puVar6;
        puStack_a4 = puVar5;
        __vbaHresultCheckObj();
      }
      puStack_a0 = (uint *)0x477977;
      puStack_9c = puVar8;
      puStack_a0 = (uint *)(**(code **)(*puVar8 + 0x308))();
      puStack_a4 = local_38 + 1;
      puStack_a8 = (uint *)0x477984;
      puVar5 = (uint *)__vbaObjSet();
      puStack_a0 = &local_3c;
      puStack_a8 = (uint *)0x477993;
      puStack_a4 = puVar5;
      puStack_9c = (uint *)(**(code **)(*puVar5 + 0xe0))();
      if ((int)puStack_9c < 0) {
        puStack_90 = (uint *)0xe0;
        puStack_94 = (uint *)&DAT_00417e48;
        puStack_a0 = (uint *)0x4779ab;
        puStack_98 = puVar5;
        __vbaHresultCheckObj();
      }
      puStack_94 = local_38 + 2;
      pcVar10 = (code *)(-(uint)((short)local_3c == 0) | local_38[0]);
      puStack_90 = local_38 + 1;
      puStack_98 = (uint *)0x2;
      puStack_9c = (uint *)0x4779cd;
      __vbaFreeObjList();
      if ((short)pcVar10 != 0) {
        puStack_94 = (uint *)0x4779e2;
        puStack_90 = puVar8;
        puStack_94 = (uint *)(**(code **)(*puVar8 + 0x30c))();
        puStack_98 = local_38 + 2;
        puStack_9c = (uint *)0x4779e9;
        puVar5 = (uint *)__vbaObjSet();
        puStack_94 = local_38 + 6;
        puStack_9c = (uint *)0x4779f8;
        puStack_98 = puVar5;
        puVar6 = (uint *)(**(code **)(*puVar5 + 0xa8))();
        if ((int)puVar6 < 0) {
          puStack_9c = (uint *)0xa8;
          puStack_a0 = (uint *)&DAT_00416cb0;
          puStack_ac = (uint *)0x477a10;
          puStack_a8 = puVar6;
          puStack_a4 = puVar5;
          __vbaHresultCheckObj();
        }
        puStack_a0 = (uint *)0x477a19;
        puStack_9c = puVar8;
        puStack_a0 = (uint *)(**(code **)(*puVar8 + 0x30c))();
        puStack_a4 = local_38 + 1;
        puStack_a8 = (uint *)0x477a20;
        puVar5 = (uint *)__vbaObjSet();
        puStack_a0 = local_38 + 5;
        uVar1 = *puVar5;
        puStack_a4 = (uint *)0x477a31;
        puStack_a0 = (uint *)__vbaI2I4();
        puStack_a8 = (uint *)0x477a39;
        puStack_a4 = puVar5;
        iVar3 = (**(code **)(uVar1 + 0xf8))();
        if (iVar3 < 0) {
          puStack_a8 = (uint *)0xf8;
          puStack_ac = (uint *)&DAT_00416cb0;
          uStack_b8 = 0x477a53;
          iStack_b4 = iVar3;
          puStack_b0 = puVar5;
          __vbaHresultCheckObj();
        }
        pcVar10 = __vbaStrMove_exref;
        local_38[5] = 0;
        puStack_a8 = (uint *)0x477a64;
        __vbaStrMove();
        local_38[6] = 0;
        puStack_a8 = (uint *)0x477a6f;
        __vbaStrMove();
        puStack_a8 = local_38 + 3;
        puStack_ac = local_38 + 4;
        iStack_b4 = 0x477a80;
        puStack_b0 = puVar8;
        (**(code **)(*puVar8 + 0x6fc))();
        puStack_90 = local_38 + 3;
        puStack_94 = local_38 + 4;
        puStack_98 = (uint *)0x2;
        puStack_9c = (uint *)0x477a90;
        __vbaFreeStrList();
        puStack_9c = local_38 + 1;
        puStack_a0 = local_38 + 2;
        puStack_a4 = (uint *)0x2;
        puStack_a8 = (uint *)0x477aa0;
        __vbaFreeObjList();
      }
      piVar4 = (int *)((int)local_1c + 1);
      piVar9 = piVar4;
    } while (!SCARRY4((int)local_1c,1));
  }
  puStack_90 = (uint *)0x477b41;
  __vbaErrorOverflow();
  puStack_9c = (uint *)&LAB_004032d6;
  puStack_a0 = ExceptionList;
  puStack_98 = (uint *)&pcStack_d0;
  puStack_94 = (uint *)&DAT_00402f20;
  puStack_90 = (uint *)((uint)puStack_84 & 1);
  piVar9 = (int *)((uint)puStack_84 & 0xfffffffe);
  ExceptionList = &puStack_a0;
  pcStack_d0 = pcVar10;
  puStack_cc = puVar8;
  piStack_c8 = piVar4;
  puStack_8c = (uint *)&stack0xfffffffc;
  puStack_84 = (uint *)piVar9;
  (**(code **)(*piVar9 + 4))(piVar9);
  puStack_a4 = (uint *)0x0;
  puStack_a8 = (uint *)0x0;
  puStack_ac = (uint *)0x0;
  uVar7 = (**(code **)(*piVar9 + 0x30c))(piVar9);
  piVar4 = (int *)__vbaObjSet(&puStack_ac,uVar7);
  uVar7 = (**(code **)(*piVar9 + 0x314))(piVar9);
  piVar9 = (int *)__vbaObjSet(&puStack_a8,uVar7);
  iVar3 = (**(code **)(*piVar9 + 0xa8))(piVar9,&puStack_a4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar9,&DAT_00416cc0,0xa8);
  }
  iVar3 = (**(code **)(*piVar4 + 0xac))(piVar4,puStack_a4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00416cb0,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&puStack_a8,&puStack_ac);
  return;
}

/* ---- 0x477b50 (FUN_00477b50) [estimated] strings:  ---- */
void __cdecl FUN_00477b50(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00402f20;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa8))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00416cc0,0xa8);
  }
  iVar3 = (**(code **)(*piVar2 + 0xac))(piVar2,local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00416cb0,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_20,&local_24);
  return;
}

/* ---- 0x477c80 (FUN_00477c80) [estimated] strings:  ---- */
void __cdecl FUN_00477c80(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00402f30;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x30c))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  uVar1 = (**(code **)(*piVar4 + 0x310))(piVar4);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00417a98,0xa0);
  }
  iVar3 = (**(code **)(*piVar2 + 0xb4))(piVar2,local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00416cb0,0xb4);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_20,&local_24);
  return;
}

/* ---- 0x477db0 (FUN_00477db0) [estimated] strings:  ---- */
void __cdecl FUN_00477db0(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402f40;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x477e40 (FUN_00477e40) [estimated] strings:  ---- */
void __cdecl FUN_00477e40(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402f50;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x477ed0 (FUN_00477ed0) [estimated] strings:  ---- */
void __cdecl FUN_00477ed0(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402f60;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}
