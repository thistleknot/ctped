/* Object #0 EditingForms -- ESTIMATED function range; public methods per VB header: Add, Item, ItemNoError, Count, Remove, Clear */
#include "ghidra_types.h"

/* ---- 0x4225b0 (FUN_004225b0) [estimated] strings: Invalid file format in function Add ---- */
void __cdecl
FUN_004225b0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            wchar_t *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_ac [9];
  undefined4 local_88 [2];
  wchar_t *local_80;
  undefined4 local_78 [2];
  int **local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  int *local_28;
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
  local_10 = &stack0xffffff2c;
  local_c = &DAT_004012b8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_6 = 0;
  piVar3 = (int *)*param_3;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_ac[0] = 0;
  iVar1 = (**(code **)(*piVar3 + 0x70))(piVar3,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&LAB_004133e8,0x70);
  }
  piVar3 = local_28;
  puVar7 = local_ac;
  piVar6 = local_28;
  iVar1 = (**(code **)(*local_28 + 0x58))(local_28,puVar7);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&LAB_004133f8,0x58);
  }
  uVar2 = local_ac[0];
  __vbaFreeObj();
  switch(uVar2) {
  case 0:
  case 2:
    puVar5 = &LAB_004135fc;
    uVar2 = __vbaNew(&DAT_0040a134);
    pcVar4 = __vbaObjSet_exref;
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaCastObj(uVar2,puVar5);
    __vbaObjSet(&local_20,uVar2);
    __vbaFreeObj();
    break;
  case 1:
  case 3:
    puVar5 = &LAB_004135fc;
    uVar2 = __vbaNew(&DAT_0040efbc);
    pcVar4 = __vbaObjSet_exref;
    uVar2 = __vbaObjSet(&local_28,uVar2);
    uVar2 = __vbaCastObj(uVar2,puVar5);
    __vbaObjSet(&local_20,uVar2);
    __vbaFreeObj();
    break;
  default:
    uVar2 = rtcErrObj();
    pcVar4 = __vbaObjSet_exref;
    piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
    local_60 = 0x80020004;
    local_50 = 0x80020004;
    local_68[0] = 10;
    local_58[0] = 10;
    local_80 = L"Invalid file format in function Add";
    local_88[0] = 8;
    __vbaVarDup();
    local_70 = (int **)0x413048;
    local_78[0] = 8;
    __vbaVarDup();
    iVar1 = (**(code **)(*piVar3 + 0x44))(piVar3,0x410,local_38,local_48,local_58,local_68);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
  }
  __vbaStrCopy(piVar6,puVar7);
  iVar1 = (**(code **)(*local_20 + 0x20))(local_20,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&LAB_004135fc,0x20);
  }
  __vbaFreeStr();
  __vbaObjSetAddref(&local_28,*param_2);
  iVar1 = (**(code **)(*local_20 + 0x28))(local_20,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&LAB_004135fc,0x28);
  }
  __vbaFreeObj();
  __vbaObjSetAddref(&local_28,*param_3);
  iVar1 = (**(code **)(*local_20 + 0x30))(local_20,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&LAB_004135fc,0x30);
  }
  __vbaFreeObj();
  __vbaObjSetAddref(&local_28,*param_4);
  iVar1 = (**(code **)(*local_20 + 0x34))(local_20,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_20,&LAB_004135fc,0x34);
  }
  __vbaFreeObj();
  iVar1 = __vbaLenBstr(*(undefined4 *)param_5);
  if (iVar1 == 0) {
    local_58[0] = 10;
    local_48[0] = 10;
    local_38[0] = 10;
    local_50 = 0x80020004;
    local_40 = 0x80020004;
    local_30 = 0x80020004;
    __vbaObjSetAddref(&local_28,local_20);
    local_70 = &local_28;
    local_78[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_78,local_38,local_48,local_58);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_28,&LAB_004135fc);
    (*pcVar4)(&local_20,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_38,local_48,local_58);
  }
  else {
    local_48[0] = 10;
    local_38[0] = 10;
    local_40 = 0x80020004;
    local_30 = 0x80020004;
    local_80 = param_5;
    local_88[0] = 0x4008;
    __vbaObjSetAddref(&local_28,local_20);
    local_70 = &local_28;
    local_78[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_78,local_88,local_38,local_48);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_28,&LAB_004135fc);
    (*pcVar4)(&local_20,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
  }
  __vbaObjSetAddref(&local_1c,local_20);
  uVar2 = __vbaCastObj(0,&LAB_004135fc);
  (*pcVar4)(&local_20,uVar2);
  __vbaFreeObj(&LAB_00422a42);
  return;
}

/* ---- 0x422a80 (FUN_00422a80) [estimated] strings:  ---- */
void __cdecl FUN_00422a80(int *param_1,undefined4 param_2,undefined4 *param_3)

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
  local_c = &DAT_004012c8;
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
  uVar2 = __vbaCastObjVar(local_2c,&LAB_004135fc);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeVar(piVar3);
  return;
}

/* ---- 0x422b60 (FUN_00422b60) [estimated] strings:  ---- */
void __cdecl FUN_00422b60(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb8;
  local_c = &DAT_004012d8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  *param_3 = 0;
  local_24 = 0;
  local_30[0] = 0;
  iVar1 = __vbaForEachCollObj(&LAB_004135fc,local_30,&local_1c,param_1[0xd]);
  do {
    if (iVar1 == 0) {
LAB_00422c32:
      __vbaFreeObj(&LAB_00422c63);
      __vbaFreeObj();
      return;
    }
    iVar1 = (**(code **)(*local_1c + 0x1c))(local_1c,&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&LAB_004135fc,0x1c);
    }
    iVar1 = __vbaStrCmp(*param_2,local_24);
    __vbaFreeStr();
    if (iVar1 == 0) {
      __vbaObjSetAddref(&local_20,local_1c);
      goto LAB_00422c32;
    }
    iVar1 = __vbaNextEachCollObj(&LAB_004135fc,local_30,&local_1c);
  } while( true );
}

/* ---- 0x422c90 (FUN_00422c90) [estimated] strings:  ---- */
undefined4 FUN_00422c90(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_004012e8;
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

/* ---- 0x422d20 (FUN_00422d20) [estimated] strings:  ---- */
undefined4 FUN_00422d20(int *param_1,undefined4 param_2)

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
  local_c = &DAT_004012f0;
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

/* ---- 0x422da0 (FUN_00422da0) [estimated] strings:  ---- */
void __cdecl FUN_00422da0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int local_44 [5];
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff98;
  local_c = &DAT_004012f8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_30[0] = 0;
  local_44[0] = 0;
  pcVar4 = __vbaHresultCheckObj_exref;
  while( true ) {
    piVar6 = local_44;
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1,piVar6);
    if (iVar2 < 0) {
      (*pcVar4)(iVar2,param_1,&DAT_004132d8,0x28);
    }
    if (local_44[0] == 0) break;
    local_28 = 1;
    local_30[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_30,&local_1c);
    if (iVar2 < 0) {
      (*pcVar4)(iVar2,param_1,&DAT_004132d8,0x20);
    }
    piVar1 = local_1c;
    piVar5 = local_1c;
    iVar2 = (**(code **)(*local_1c + 0x4c))(local_1c);
    if (iVar2 < 0) {
      (*pcVar4)(iVar2,piVar1,&LAB_004135fc,0x4c);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    if (DAT_00480244 == (int *)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    piVar1 = DAT_00480244;
    local_28 = 1;
    local_30[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_30,&local_1c);
    if (iVar2 < 0) {
      (*pcVar4)(iVar2,param_1,&DAT_004132d8,0x20);
    }
    piVar5 = local_1c;
    local_1c = (int *)0x0;
    iVar2 = *piVar1;
    uVar3 = __vbaObjSet(&local_20,piVar5);
    piVar5 = piVar1;
    iVar2 = (**(code **)(iVar2 + 0x10))(piVar1,uVar3);
    pcVar4 = __vbaHresultCheckObj_exref;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413b24,0x10);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    local_28 = 1;
    local_30[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,local_30);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_004132d8,0x2c);
    }
    __vbaFreeVar(piVar6);
  }
  return;
}

/* ---- 0x422f80 (FUN_00422f80) [estimated] strings:  ---- */
void __cdecl FUN_00422f80(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401308;
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

/* ---- 0x423060 (FUN_00423060) [estimated] strings:  ---- */
void __cdecl FUN_00423060(uint param_1)

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
  local_c = &DAT_00401318;
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

/* ---- 0x423110 (FUN_00423110) [estimated] strings:  ---- */
void __cdecl FUN_00423110(uint param_1)

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
  local_c = &DAT_00401328;
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
