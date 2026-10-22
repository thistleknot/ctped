/* Object #11 Files -- ESTIMATED function range; public methods per VB header: Add, SneakyAdd, Item, ItemNoError, ItemByDataSource, Count */
#include "ghidra_types.h"

/* ---- 0x4358d0 (FUN_004358d0) [estimated] strings:  ---- */
void __cdecl
FUN_004358d0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined2 *param_4,
            undefined2 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 extraout_var;
  code *pcVar3;
  undefined4 local_98 [9];
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
  local_10 = &stack0xffffff50;
  local_c = &DAT_00401b30;
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
  local_98[0] = 0;
  *param_7 = 0;
  uVar1 = __vbaNew(&DAT_00409d00);
  __vbaObjSet(&local_20,uVar1);
  iVar2 = (**(code **)(*local_20 + 0x20))(local_20,*param_6);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x20);
  }
  iVar2 = *local_20;
  uVar1 = __vbaObjSetAddref(&local_24,*param_3);
  iVar2 = (**(code **)(iVar2 + 100))(local_20,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,100);
  }
  __vbaFreeObj();
  iVar2 = *local_20;
  uVar1 = __vbaObjSetAddref(&local_24,*param_2);
  iVar2 = (**(code **)(iVar2 + 0x54))(local_20,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x54);
  }
  __vbaFreeObj();
  local_98[0] = CONCAT22(extraout_var,*param_4);
  iVar2 = (**(code **)(*local_20 + 0x50))(local_20,local_98);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x50);
  }
  iVar2 = (**(code **)(*local_20 + 0x40))(local_20,*param_5);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x40);
  }
  iVar2 = __vbaLenBstr(*param_6);
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
    uVar1 = __vbaCastObj(local_24,&LAB_004133e8);
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_34,local_44,local_54);
  }
  else {
    local_3c = 0x80020004;
    local_2c = 0x80020004;
    local_6c = param_6;
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
    uVar1 = __vbaCastObj(local_24,&LAB_004133e8);
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_34,local_44);
  }
  __vbaObjSetAddref(&local_1c,local_20);
  uVar1 = (*pcVar3)(0,&LAB_004133e8);
  __vbaObjSet(&local_20,uVar1);
  __vbaFreeObj(&LAB_00435c02);
  return;
}

/* ---- 0x435c30 (FUN_00435c30) [estimated] strings:  ---- */
void __cdecl FUN_00435c30(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff58;
  local_c = &DAT_00401b40;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  *param_4 = 0;
  iVar1 = __vbaLenBstr(*param_3);
  if (iVar1 == 0) {
    local_48 = 0x80020004;
    local_50[0] = 10;
    local_40[0] = 10;
    local_30[0] = 10;
    local_38 = 0x80020004;
    local_28 = 0x80020004;
    __vbaObjSetAddref(&local_20,*param_2);
    local_58 = &local_20;
    local_60[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_60,local_30,local_40,local_50);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_20,&LAB_004133e8);
    __vbaObjSet(param_2,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_30,local_40,local_50);
  }
  else {
    local_68 = param_3;
    local_40[0] = 10;
    local_30[0] = 10;
    local_38 = 0x80020004;
    local_28 = 0x80020004;
    local_70[0] = 0x4008;
    __vbaObjSetAddref(&local_20,*param_2);
    local_58 = &local_20;
    local_60[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_60,local_70,local_30,local_40);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_20,&LAB_004133e8);
    __vbaObjSet(param_2,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_30,local_40);
  }
  __vbaObjSetAddref(&local_1c,*param_2);
  return;
}

/* ---- 0x435e50 (FUN_00435e50) [estimated] strings:  ---- */
void __cdecl FUN_00435e50(int *param_1,undefined4 param_2,undefined4 *param_3)

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
  local_c = &DAT_00401b50;
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
  uVar2 = __vbaCastObjVar(local_2c,&LAB_004133e8);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeVar(piVar3);
  return;
}

/* ---- 0x435f30 (FUN_00435f30) [estimated] strings:  ---- */
void __cdecl FUN_00435f30(int *param_1,undefined4 *param_2,undefined4 *param_3)

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
  local_c = &DAT_00401b60;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_3 = 0;
  local_24 = 0;
  local_30[0] = 0;
  iVar1 = __vbaForEachCollObj(&LAB_004133e8,local_30,&local_20,param_1[0xd]);
  do {
    if (iVar1 == 0) {
LAB_00436002:
      __vbaFreeObj(&LAB_00436033);
      __vbaFreeObj();
      return;
    }
    iVar1 = (**(code **)(*local_20 + 0x1c))(local_20,&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&LAB_004133e8,0x1c);
    }
    iVar1 = __vbaStrCmp(*param_2,local_24);
    __vbaFreeStr();
    if (iVar1 == 0) {
      __vbaObjSetAddref(&local_1c,local_20);
      goto LAB_00436002;
    }
    iVar1 = __vbaNextEachCollObj(&LAB_004133e8,local_30,&local_20);
  } while( true );
}

/* ---- 0x436060 (FUN_00436060) [estimated] strings:  ---- */
void __cdecl FUN_00436060(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_3c [5];
  int *local_28;
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
  local_10 = &stack0xffffffac;
  local_c = &DAT_00401b70;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  *param_3 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_3c[0] = 0;
  iVar2 = __vbaForEachCollObj(&LAB_004133e8,local_3c,&local_1c,param_1[0xd]);
  do {
    if (iVar2 == 0) {
LAB_00436167:
      __vbaFreeObj(&LAB_004361a1);
      __vbaFreeObj();
      return;
    }
    iVar2 = (**(code **)(*local_1c + 0x58))(local_1c,&local_28);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x58);
    }
    piVar1 = local_28;
    iVar2 = (**(code **)(*local_28 + 0x30))(local_28,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x30);
    }
    iVar2 = __vbaStrCmp(*param_2,local_24);
    __vbaFreeStr();
    __vbaFreeObj();
    if (iVar2 == 0) {
      __vbaObjSetAddref(&local_20,local_1c);
      goto LAB_00436167;
    }
    iVar2 = __vbaNextEachCollObj(&LAB_004133e8,local_3c,&local_1c);
  } while( true );
}

/* ---- 0x4361d0 (FUN_004361d0) [estimated] strings:  ---- */
undefined4 FUN_004361d0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401b80;
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

/* ---- 0x436260 (FUN_00436260) [estimated] strings:  ---- */
undefined4 FUN_00436260(int *param_1,undefined4 param_2)

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
  local_c = &DAT_00401b88;
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

/* ---- 0x4362e0 (FUN_004362e0) [estimated] strings:  ---- */
void __cdecl FUN_004362e0(int *param_1)

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
  local_c = &DAT_00401b90;
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
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414238,0x30);
    }
    if (local_40[0] == 0) break;
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,local_2c,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414238,0x24);
    }
    piVar1 = local_1c;
    piVar3 = local_1c;
    iVar2 = (**(code **)(*local_1c + 0x94))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&LAB_004133e8,0x94);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x34))(param_1,local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414238,0x34);
    }
    __vbaFreeVar(piVar4);
  }
  return;
}

/* ---- 0x436420 (FUN_00436420) [estimated] strings:  ---- */
void __cdecl FUN_00436420(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401ba0;
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

/* ---- 0x436500 (FUN_00436500) [estimated] strings:  ---- */
void __cdecl FUN_00436500(uint param_1)

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
  local_c = &DAT_00401bb0;
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

/* ---- 0x4365b0 (FUN_004365b0) [estimated] strings:  ---- */
void __cdecl FUN_004365b0(uint param_1)

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
  local_c = &DAT_00401bc0;
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
