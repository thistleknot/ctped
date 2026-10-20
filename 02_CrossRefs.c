/* Object #2 CrossRefs -- ESTIMATED function range; public methods per VB header: Add, Item, Count, Remove, Clear, NewEnum */
#include "ghidra_types.h"

/* ---- 0x4237a0 (FUN_004237a0) [estimated] strings:  ---- */
void __cdecl FUN_004237a0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff50;
  local_c = &DAT_004013a0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  *param_4 = 0;
  uVar1 = __vbaNew(&DAT_00406798);
  __vbaObjSet(&local_20,uVar1);
  uVar1 = *param_3;
  piVar4 = local_20;
  iVar2 = (**(code **)(*local_20 + 0x20))(local_20,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00413cf8,0x20);
  }
  __vbaStrCopy(piVar4,uVar1);
  iVar2 = (**(code **)(*local_20 + 0x30))(local_20,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00413cf8,0x30);
  }
  __vbaFreeStr();
  iVar2 = __vbaLenBstr(*param_3);
  if (iVar2 == 0) {
    local_58[0] = 10;
    local_48[0] = 10;
    local_38[0] = 10;
    local_50 = 0x80020004;
    local_40 = 0x80020004;
    local_30 = 0x80020004;
    __vbaObjSetAddref(&local_28,local_20);
    local_60 = &local_28;
    local_68[0] = 0x4009;
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_68,local_38,local_48,local_58);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
    }
    pcVar3 = __vbaCastObj_exref;
    uVar1 = __vbaCastObj(local_28,&DAT_00413cf8);
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_38,local_48,local_58);
  }
  else {
    local_40 = 0x80020004;
    local_30 = 0x80020004;
    local_70 = param_3;
    local_48[0] = 10;
    local_38[0] = 10;
    local_78[0] = 0x4008;
    __vbaObjSetAddref(&local_28,local_20);
    local_60 = &local_28;
    local_68[0] = 0x4009;
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_68,local_78,local_38,local_48);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
    }
    pcVar3 = __vbaCastObj_exref;
    uVar1 = __vbaCastObj(local_28,&DAT_00413cf8);
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
  }
  __vbaObjSetAddref(&local_1c,local_20);
  uVar1 = (*pcVar3)(0,&DAT_00413cf8);
  __vbaObjSet(&local_20,uVar1);
  __vbaFreeObj(&LAB_00423a37);
  return;
}

/* ---- 0x423a60 (FUN_00423a60) [estimated] strings:  ---- */
void __cdecl FUN_00423a60(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_2c [4];
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_004013b0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_2c[0] = 0;
  *param_3 = 0;
  piVar3 = (int *)param_1[0xd];
  iVar1 = (**(code **)(*piVar3 + 0x1c))(piVar3,param_2,local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x1c);
  }
  uVar2 = __vbaCastObjVar(local_2c,&DAT_00413cf8);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeVar(piVar3);
  return;
}

/* ---- 0x423b40 (FUN_00423b40) [estimated] strings:  ---- */
undefined4 FUN_00423b40(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004013c0;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_20 = 0;
  local_1c = 0;
  iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x24))((int *)param_1[0xd],&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x24);
  }
  local_1c = local_20;
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = local_1c;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x423bd0 (FUN_00423bd0) [estimated] strings:  ---- */
undefined4 FUN_00423bd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_004013c8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x28))((int *)param_1[0xd],param_2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x28);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x423c50 (FUN_00423c50) [estimated] strings:  ---- */
void __cdecl FUN_00423c50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_40 [5];
  undefined4 local_2c [2];
  undefined4 local_24;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa0;
  local_c = &DAT_004013d0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_2c[0] = 0;
  local_40[0] = 0;
  while( true ) {
    piVar4 = local_40;
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,piVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414294,0x24);
    }
    if (local_40[0] == 0) break;
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_2c,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414294,0x20);
    }
    piVar1 = local_1c;
    piVar3 = local_1c;
    iVar2 = (**(code **)(*local_1c + 0x38))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413cf8,0x38);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414294,0x28);
    }
    __vbaFreeVar(piVar4);
  }
  return;
}

/* ---- 0x423d80 (FUN_00423d80) [estimated] strings:  ---- */
void __cdecl FUN_00423d80(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004013e0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x2c))((int *)param_1[0xd],&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x2c);
  }
  uVar2 = __vbaCastObj(local_20,&DAT_004133c8);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeObj();
  return;
}

/* ---- 0x423e60 (FUN_00423e60) [estimated] strings:  ---- */
void __cdecl FUN_00423e60(uint param_1)

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
  local_c = &DAT_004013f0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaNew(&DAT_00413b54);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0xd,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x423f10 (FUN_00423f10) [estimated] strings:  ---- */
void __cdecl FUN_00423f10(uint param_1)

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
  local_c = &DAT_00401400;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaCastObj(0,&DAT_00413b04);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0xd,uVar1);
  __vbaFreeObj();
  return;
}
