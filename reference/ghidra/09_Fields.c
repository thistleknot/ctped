/* Object #9 Fields -- ESTIMATED function range; public methods per VB header: Add, Item, ItemNoError, ItemByControl, ItemByControlRecursively, Count */
#include "ghidra_types.h"

/* ---- 0x431430 (FUN_00431430) [estimated] strings:  ---- */
void __cdecl FUN_00431430(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_74 [2];
  undefined4 *local_6c;
  undefined4 local_64 [2];
  undefined4 *local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34 [2];
  undefined4 local_2c;
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
  local_10 = &stack0xffffff54;
  local_c = &DAT_00401928;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  *param_4 = 0;
  uVar1 = __vbaNew(&DAT_00408e14);
  __vbaObjSet(&local_20,uVar1);
  iVar2 = (**(code **)(*local_20 + 0x20))(local_20,*param_3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414268,0x20);
  }
  iVar2 = (**(code **)(*local_20 + 0x38))(local_20,*param_2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414268,0x38);
  }
  iVar2 = __vbaLenBstr(*param_3);
  if (iVar2 == 0) {
    local_4c = 0x80020004;
    local_3c = 0x80020004;
    local_2c = 0x80020004;
    local_54[0] = 10;
    local_44[0] = 10;
    local_34[0] = 10;
    __vbaObjSetAddref(&local_24,local_20);
    local_5c = &local_24;
    local_64[0] = 0x4009;
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_64,local_34,local_44,local_54);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
    }
    pcVar3 = __vbaCastObj_exref;
    uVar1 = __vbaCastObj(local_24,&DAT_00414268);
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_34,local_44,local_54);
  }
  else {
    local_3c = 0x80020004;
    local_2c = 0x80020004;
    local_6c = param_3;
    local_44[0] = 10;
    local_34[0] = 10;
    local_74[0] = 0x4008;
    __vbaObjSetAddref(&local_24,local_20);
    local_5c = &local_24;
    local_64[0] = 0x4009;
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_64,local_74,local_34,local_44);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
    }
    pcVar3 = __vbaCastObj_exref;
    uVar1 = __vbaCastObj(local_24,&DAT_00414268);
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_34,local_44);
  }
  __vbaObjSetAddref(&local_1c,local_20);
  uVar1 = (*pcVar3)(0,&DAT_00414268);
  __vbaObjSet(&local_20,uVar1);
  __vbaFreeObj(&LAB_004316a6);
  return;
}

/* ---- 0x4316d0 (FUN_004316d0) [estimated] strings:  ---- */
void __cdecl FUN_004316d0(int *param_1,undefined4 param_2,undefined4 *param_3)

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
  local_c = &DAT_00401938;
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
  uVar2 = __vbaCastObjVar(local_2c,&DAT_00414268);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeVar(piVar3);
  return;
}

/* ---- 0x4317b0 (FUN_004317b0) [estimated] strings:  ---- */
void __cdecl FUN_004317b0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_30 [3];
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
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00401948;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_3 = 0;
  local_24 = 0;
  local_30[0] = 0;
  iVar1 = __vbaForEachCollObj(&DAT_00414268,local_30,&local_20,param_1[0xd]);
  do {
    if (iVar1 == 0) {
LAB_00431882:
      __vbaFreeObj(&LAB_004318b3);
      __vbaFreeObj();
      return;
    }
    iVar1 = (**(code **)(*local_20 + 0x1c))(local_20,&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&DAT_00414268,0x1c);
    }
    iVar1 = __vbaStrCmp(*param_2,local_24);
    __vbaFreeStr();
    if (iVar1 == 0) {
      __vbaObjSetAddref(&local_1c,local_20);
      goto LAB_00431882;
    }
    iVar1 = __vbaNextEachCollObj(&DAT_00414268,local_30,&local_20);
  } while( true );
}

/* ---- 0x4318e0 (FUN_004318e0) [estimated] strings:  ---- */
void __cdecl FUN_004318e0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 local_30 [3];
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
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00401958;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_3 = 0;
  local_24 = 0;
  local_30[0] = 0;
  iVar2 = __vbaForEachCollObj(&DAT_00414268,local_30,&local_20,param_1[0xd]);
  do {
    if (iVar2 == 0) {
LAB_004319ab:
      __vbaFreeObj(&LAB_004319dc);
      __vbaFreeObj();
      return;
    }
    iVar2 = (**(code **)(*local_20 + 0x70))(local_20,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_00414268,0x70);
    }
    sVar1 = __vbaObjIs(local_24,*param_2);
    __vbaFreeObj();
    if (sVar1 != 0) {
      __vbaObjSetAddref(&local_1c,local_20);
      goto LAB_004319ab;
    }
    iVar2 = __vbaNextEachCollObj(&DAT_00414268,local_30,&local_20);
  } while( true );
}

/* ---- 0x431a10 (FUN_00431a10) [estimated] strings: Fields; ItemByControlRecursively ---- */
void __cdecl FUN_00431a10(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_78 [3];
  int local_6c [4];
  undefined4 local_5c;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff70;
  local_c = &DAT_00401968;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_3 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_6c[1] = 0;
  local_6c[0] = 0;
  local_78[0] = 0;
  iVar2 = __vbaForEachCollObj(&DAT_00414268,local_78,&local_24,param_1[0xd]);
  do {
    if (iVar2 == 0) {
LAB_00431c13:
      __vbaFreeObj(&LAB_00431c60);
      __vbaFreeObj();
      __vbaFreeObj();
      return;
    }
    iVar2 = (**(code **)(*local_24 + 0x70))(local_24,&local_28);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_24,&DAT_00414268,0x70);
    }
    sVar1 = __vbaObjIs(local_28,*param_2);
    __vbaFreeObj();
    piVar4 = local_24;
    if (sVar1 != 0) {
LAB_00431c0d:
      __vbaObjSetAddref(&local_1c,piVar4);
      goto LAB_00431c13;
    }
    iVar2 = (**(code **)(*local_24 + 0x54))(local_24,local_6c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_24,&DAT_00414268,0x54);
    }
    if (local_6c[0] == 2) {
      __vbaObjSetAddref(&local_28,*param_2);
      iVar2 = (**(code **)(*local_24 + 0x58))(local_24,local_38);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_24,&DAT_00414268,0x58);
      }
      uVar3 = __vbaVarLateMemCallLdRf
                        (local_48,local_38,L"Fields",0,L"ItemByControlRecursively",1,0x4009,
                         local_6c[2],&local_28,local_5c);
      __vbaVarLateMemCallLd(local_58,uVar3);
      uVar3 = __vbaCastObj(local_28,&DAT_0041352c);
      __vbaObjSet(param_2,uVar3);
      uVar3 = __vbaCastObjVar(local_58,&DAT_00414268);
      __vbaObjSet(&local_20,uVar3);
      __vbaFreeObj();
      __vbaFreeVarList(3,local_38,local_48,local_58);
      sVar1 = __vbaObjIs(local_20,0);
      piVar4 = local_20;
      if (sVar1 == 0) goto LAB_00431c0d;
    }
    iVar2 = __vbaNextEachCollObj(&DAT_00414268,local_78,&local_24);
  } while( true );
}

/* ---- 0x431c90 (FUN_00431c90) [estimated] strings:  ---- */
undefined4 FUN_00431c90(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401978;
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

/* ---- 0x431d20 (FUN_00431d20) [estimated] strings:  ---- */
undefined4 FUN_00431d20(int *param_1,undefined4 param_2)

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
  local_c = &DAT_00401980;
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

/* ---- 0x431da0 (FUN_00431da0) [estimated] strings:  ---- */
void __cdecl FUN_00431da0(int *param_1)

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
  local_c = &DAT_00401988;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_2c[0] = 0;
  local_40[0] = 0;
  while( true ) {
    piVar4 = local_40;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,piVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&LAB_00414248,0x30);
    }
    if (local_40[0] == 0) break;
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_2c,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&LAB_00414248,0x20);
    }
    piVar1 = local_1c;
    piVar3 = local_1c;
    iVar2 = (**(code **)(*local_1c + 0x88))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414268,0x88);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x34))(param_1,local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&LAB_00414248,0x34);
    }
    __vbaFreeVar(piVar4);
  }
  return;
}

/* ---- 0x431ee0 (FUN_00431ee0) [estimated] strings:  ---- */
void __cdecl FUN_00431ee0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401998;
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

/* ---- 0x431fc0 (FUN_00431fc0) [estimated] strings:  ---- */
void __cdecl FUN_00431fc0(uint param_1)

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
  local_c = &DAT_004019a8;
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

/* ---- 0x432070 (FUN_00432070) [estimated] strings:  ---- */
void __cdecl FUN_00432070(uint param_1)

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
  local_c = &DAT_004019b8;
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
