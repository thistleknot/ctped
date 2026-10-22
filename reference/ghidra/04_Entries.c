/* Object #4 Entries -- ESTIMATED function range; public methods per VB header: Add, SneakyAdd, Item, ItemByName, ItemNoError, IndexOf */
#include "ghidra_types.h"

/* ---- 0x4297b0 (FUN_004297b0) [estimated] strings:  ---- */
void __cdecl FUN_004297b0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
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
  local_c = &DAT_00401578;
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
  uVar1 = __vbaNew(&DAT_0040888c);
  __vbaObjSet(&local_20,uVar1);
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x4c))(param_1,*param_3,local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_004146fc,0x4c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaFreeVar(piVar4);
  iVar2 = (**(code **)(*local_20 + 0x20))(local_20,*param_3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_0041470c,0x20);
  }
  __vbaObjSetAddref(&local_24,*param_2);
  iVar2 = (**(code **)(*local_20 + 0x48))(local_20,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_0041470c,0x48);
  }
  __vbaFreeObj();
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
    uVar1 = __vbaCastObj(local_24,&LAB_0041470c);
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_34,local_44,local_54);
  }
  else {
    local_3c = 0x80020004;
    local_2c = 0x80020004;
    local_44[0] = 10;
    local_34[0] = 10;
    local_6c = param_3;
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
    uVar1 = __vbaCastObj(local_24,&LAB_0041470c);
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_34,local_44);
  }
  __vbaObjSetAddref(&local_1c,local_20);
  uVar1 = (*pcVar3)(0,&LAB_0041470c);
  __vbaObjSet(&local_20,uVar1);
  __vbaFreeObj(&LAB_00429a71);
  return;
}

/* ---- 0x429aa0 (FUN_00429aa0) [estimated] strings:  ---- */
void __cdecl FUN_00429aa0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff50;
  local_c = &DAT_00401588;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  __vbaStrCopy(piVar3);
  *param_4 = 0;
  piVar3 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x4c))(param_1,local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_004146fc,0x4c);
  }
  __vbaStrVarMove(local_34);
  __vbaStrMove();
  __vbaFreeVar(piVar3);
  piVar3 = (int *)*param_2;
  iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3,local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&LAB_0041470c,0x20);
  }
  iVar1 = __vbaLenBstr(local_20);
  if (iVar1 == 0) {
    local_54[0] = 10;
    local_44[0] = 10;
    local_34[0] = 10;
    local_4c = 0x80020004;
    local_3c = 0x80020004;
    local_2c = 0x80020004;
    __vbaObjSetAddref(&local_24,*param_2);
    local_5c = &local_24;
    local_64[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_64,local_34,local_44,local_54);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_24,&LAB_0041470c);
    __vbaObjSet(param_2,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_34,local_44,local_54);
  }
  else {
    local_3c = 0x80020004;
    local_2c = 0x80020004;
    local_44[0] = 10;
    local_34[0] = 10;
    local_6c = &local_20;
    local_74[0] = 0x4008;
    __vbaObjSetAddref(&local_24,*param_2);
    local_5c = &local_24;
    local_64[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_64,local_74,local_34,local_44);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_24,&LAB_0041470c);
    __vbaObjSet(param_2,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_34,local_44);
  }
  __vbaObjSetAddref(&local_1c,*param_2);
  __vbaFreeStr(&LAB_00429d05);
  return;
}

/* ---- 0x429d30 (FUN_00429d30) [estimated] strings:  ---- */
void __cdecl FUN_00429d30(int *param_1,undefined4 param_2,undefined4 *param_3)

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
  local_c = &DAT_00401598;
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
  uVar2 = __vbaCastObjVar(local_2c,&LAB_0041470c);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeVar(piVar3);
  return;
}

/* ---- 0x429e10 (FUN_00429e10) [estimated] strings:  ---- */
void __cdecl FUN_00429e10(int *param_1,undefined4 *param_2,undefined4 *param_3)

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
  local_c = &DAT_004015a8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  *param_3 = 0;
  local_24 = 0;
  local_30[0] = 0;
  iVar1 = __vbaForEachCollObj(&LAB_0041470c,local_30,&local_1c,param_1[0xd]);
  do {
    if (iVar1 == 0) {
LAB_00429ee2:
      __vbaFreeObj(&LAB_00429f13);
      __vbaFreeObj();
      return;
    }
    iVar1 = (**(code **)(*local_1c + 0x24))(local_1c,&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&LAB_0041470c,0x24);
    }
    iVar1 = __vbaStrCmp(*param_2,local_24);
    __vbaFreeStr();
    if (iVar1 == 0) {
      __vbaObjSetAddref(&local_20,local_1c);
      goto LAB_00429ee2;
    }
    iVar1 = __vbaNextEachCollObj(&LAB_0041470c,local_30,&local_1c);
  } while( true );
}

/* ---- 0x429f40 (FUN_00429f40) [estimated] strings:  ---- */
void __cdecl FUN_00429f40(int *param_1,undefined4 *param_2,undefined4 *param_3)

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
  local_c = &DAT_004015b8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_3 = 0;
  local_24 = 0;
  local_30[0] = 0;
  iVar1 = __vbaForEachCollObj(&LAB_0041470c,local_30,&local_20,param_1[0xd]);
  do {
    if (iVar1 == 0) {
LAB_0042a012:
      __vbaFreeObj(&LAB_0042a043);
      __vbaFreeObj();
      return;
    }
    iVar1 = (**(code **)(*local_20 + 0x1c))(local_20,&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&LAB_0041470c,0x1c);
    }
    iVar1 = __vbaStrCmp(*param_2,local_24);
    __vbaFreeStr();
    if (iVar1 == 0) {
      __vbaObjSetAddref(&local_1c,local_20);
      goto LAB_0042a012;
    }
    iVar1 = __vbaNextEachCollObj(&LAB_0041470c,local_30,&local_20);
  } while( true );
}

/* ---- 0x42a070 (FUN_0042a070) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_0042a070(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_EDI;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *pvStack_88;
  undefined1 *puStack_84;
  int *piStack_80;
  int *piStack_7c;
  undefined4 *puStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int local_44 [3];
  int *local_38;
  undefined4 local_30 [4];
  int local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff98;
  local_c = &DAT_004015c8;
  local_8 = 0;
  piStack_6c = param_1;
  piStack_70 = (int *)0x42a0a7;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  piStack_74 = (int *)param_1[0xd];
  piStack_70 = local_44;
  local_20[0] = 0;
  local_30[0] = 0;
  local_44[1] = 0;
  local_44[0] = 0;
  local_20[1] = 0;
  puStack_78 = (undefined4 *)0x42a0c3;
  puStack_84 = (undefined1 *)(**(code **)(*piStack_74 + 0x24))();
  if ((int)puStack_84 < 0) {
    piStack_80 = (int *)param_1[0xd];
    puStack_78 = (undefined4 *)0x24;
    piStack_7c = (int *)&DAT_00413b04;
    pvStack_88 = (void *)0x42a0db;
    __vbaHresultCheckObj();
  }
  iVar6 = local_44[0];
  local_20[0] = 1;
  iVar5 = local_20[0];
  while( true ) {
    local_20[0] = iVar5;
    if (iVar6 < local_20[0]) {
      return local_20[0];
    }
    local_38 = local_20;
    puStack_78 = local_30;
    piStack_80 = (int *)param_1[0xd];
    piStack_7c = local_44 + 1;
    local_44[1] = 0x4003;
    puStack_84 = (undefined1 *)0x42a10f;
    pvVar3 = (void *)(**(code **)(*piStack_80 + 0x1c))();
    if ((int)pvVar3 < 0) {
      puStack_84 = (undefined1 *)param_1[0xd];
      piStack_7c = (int *)0x1c;
      piStack_80 = (int *)&DAT_00413b04;
      uStack_8c = 0x42a127;
      pvStack_88 = pvVar3;
      __vbaHresultCheckObj();
    }
    piStack_7c = (int *)*param_2;
    piStack_80 = local_30;
    puStack_84 = (undefined1 *)0x42a134;
    piStack_80 = (int *)__vbaUnkVar();
    puStack_84 = (undefined1 *)0x42a13b;
    uVar4 = __vbaObjIs();
    piStack_7c = (int *)0x42a146;
    iVar5 = __vbaFreeVar();
    if ((short)uVar4 != 0) break;
    iVar5 = local_20[0] + 1;
    if (SCARRY4(local_20[0],1)) {
      puStack_78 = (undefined4 *)0x42a1a3;
      __vbaErrorOverflow();
      piVar2 = piStack_6c;
      puStack_84 = &LAB_004032d6;
      pvStack_88 = ExceptionList;
      puStack_a0 = param_2;
      piStack_80 = (int *)&piStack_a8;
      piStack_a8 = param_1;
      piStack_7c = (int *)&DAT_004015d8;
      puStack_78 = (undefined4 *)0x0;
      ExceptionList = &pvStack_88;
      uStack_a4 = uVar4;
      piStack_74 = (int *)&stack0xfffffffc;
      (**(code **)(*piStack_6c + 4))(piStack_6c);
      piVar1 = (int *)piVar2[0xd];
      uStack_90 = 0;
      uStack_8c = 0;
      iVar6 = (**(code **)(*piVar1 + 0x24))(piVar1,&uStack_90);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar2[0xd],&DAT_00413b04,0x24);
      }
      uStack_8c = uStack_90;
      (**(code **)(*piStack_6c + 8))(piStack_6c);
      *unaff_EDI = uStack_8c;
      ExceptionList = pvStack_88;
      return (int)puStack_78;
    }
  }
  return iVar5;
}

/* ---- 0x42a1b0 (FUN_0042a1b0) [estimated] strings:  ---- */
undefined4 FUN_0042a1b0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_004015d8;
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

/* ---- 0x42a240 (FUN_0042a240) [estimated] strings:  ---- */
undefined4 FUN_0042a240(int *param_1,undefined4 param_2)

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
  local_c = &DAT_004015e0;
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

/* ---- 0x42a2c0 (FUN_0042a2c0) [estimated] strings:  ---- */
void __cdecl FUN_0042a2c0(int *param_1)

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
  local_c = &DAT_004015e8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_2c[0] = 0;
  local_40[0] = 0;
  while( true ) {
    piVar4 = local_40;
    iVar2 = (**(code **)(*param_1 + 0x34))(param_1,piVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_004146fc,0x34);
    }
    if (local_40[0] == 0) break;
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,local_2c,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_004146fc,0x24);
    }
    piVar1 = local_1c;
    piVar3 = local_1c;
    iVar2 = (**(code **)(*local_1c + 0x58))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&LAB_0041470c,0x58);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_004146fc,0x38);
    }
    __vbaFreeVar(piVar4);
  }
  return;
}

/* ---- 0x42a3f0 (FUN_0042a3f0) [estimated] strings:  ---- */
void __cdecl FUN_0042a3f0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_004015f8;
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

/* ---- 0x42a4d0 (FUN_0042a4d0) [estimated] strings:  ---- */
void __cdecl FUN_0042a4d0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_64 [2];
  undefined4 *local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34 [2];
  undefined4 local_2c;
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
  local_10 = &stack0xffffff58;
  local_c = &DAT_00401608;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  sVar1 = __vbaObjIs(*param_2,*param_3);
  if (sVar1 == 0) {
    piVar4 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x1c);
    }
    local_2c = local_1c;
    piVar4 = (int *)param_1[0xd];
    local_1c = 0;
    local_34[0] = 8;
    iVar2 = (**(code **)(*piVar4 + 0x28))(piVar4,local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x28);
    }
    __vbaFreeVar(piVar4);
    piVar4 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x1c);
    }
    piVar4 = (int *)*param_3;
    iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x1c);
    }
    local_3c = local_20;
    local_2c = local_1c;
    local_4c = 0x80020004;
    local_54[0] = 10;
    local_20 = 0;
    local_44[0] = 8;
    local_1c = 0;
    local_34[0] = 8;
    __vbaObjSetAddref(&local_24,*param_2);
    local_5c = &local_24;
    local_64[0] = 0x4009;
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_64,local_34,local_44,local_54);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar3 = __vbaCastObj(local_24,&LAB_0041470c);
    __vbaObjSet(param_2,uVar3);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_34,local_44,local_54);
  }
  return;
}

/* ---- 0x42a6f0 (FUN_0042a6f0) [estimated] strings:  ---- */
void __cdecl FUN_0042a6f0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
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
  local_10 = &stack0xffffff58;
  local_c = &DAT_00401618;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x4c))(param_1,0,local_38);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_004146fc,0x4c);
  }
  __vbaStrVarMove(local_38);
  __vbaStrMove();
  __vbaFreeVar(piVar4);
  piVar4 = (int *)*param_2;
  iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x1c);
  }
  local_30 = local_24;
  local_60 = &local_1c;
  local_40 = 0x80020004;
  local_48[0] = 10;
  local_24 = 0;
  local_38[0] = 8;
  local_68[0] = 0x4008;
  __vbaObjSetAddref(&local_28,local_20);
  local_50 = &local_28;
  local_58[0] = 0x4009;
  iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                    ((int *)param_1[0xd],local_58,local_68,local_38,local_48);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
  }
  uVar3 = __vbaCastObj(local_28,&LAB_0041470c);
  __vbaObjSet(&local_20,uVar3);
  __vbaFreeObj();
  __vbaFreeVarList(2,local_38,local_48);
  piVar4 = (int *)*param_2;
  iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x1c);
  }
  local_30 = local_24;
  piVar4 = (int *)param_1[0xd];
  local_24 = 0;
  local_38[0] = 8;
  iVar2 = (**(code **)(*piVar4 + 0x28))(piVar4,local_38);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x28);
  }
  __vbaFreeVar(piVar4);
  piVar4 = (int *)*param_3;
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&LAB_0041470c,0x1c);
  }
  iVar2 = (**(code **)(*piVar4 + 0x20))(piVar4,local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x20);
  }
  __vbaFreeStr();
  piVar4 = (int *)*param_2;
  iVar2 = (**(code **)(*piVar4 + 0x58))(piVar4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x58);
  }
  piVar4 = (int *)*param_3;
  iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x1c);
  }
  local_30 = local_24;
  local_60 = &local_1c;
  local_40 = 0x80020004;
  local_48[0] = 10;
  local_68[0] = 0x4008;
  local_24 = 0;
  local_38[0] = 8;
  __vbaObjSetAddref(&local_28,*param_3);
  local_50 = &local_28;
  local_58[0] = 0x4009;
  iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                    ((int *)param_1[0xd],local_58,local_38,local_68,local_48);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
  }
  uVar3 = __vbaCastObj(local_28,&LAB_0041470c);
  __vbaObjSet(param_3,uVar3);
  __vbaFreeObj();
  __vbaFreeVarList(2,local_38,local_48);
  local_50 = &local_1c;
  local_58[0] = 0x4008;
  iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x28))((int *)param_1[0xd],local_58);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x28);
  }
  __vbaFreeStr(&LAB_0042aa6c);
  __vbaFreeObj();
  return;
}

/* ---- 0x42aa90 (FUN_0042aa90) [estimated] strings:  ---- */
void __cdecl FUN_0042aa90(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int **ppiVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  code *pcStack_b0;
  code *pcStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  int **ppiStack_94;
  int **ppiStack_90;
  uint uStack_7c;
  int *local_70;
  int *local_6c [3];
  undefined4 local_60;
  undefined4 *local_58;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff74;
  local_c = &DAT_00401628;
  uVar6 = 0;
  local_8 = 0;
  ppiStack_90 = (int **)param_1;
  ppiStack_94 = (int **)0x42aac7;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  pcVar7 = __vbaStrCopy_exref;
  local_1c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = 0;
  local_40 = 0;
  local_50[0] = 0;
  local_60 = 0;
  local_6c[0] = (int *)0x0;
  local_70 = (int *)0x0;
  ppiStack_94 = (int **)0x42aaf3;
  __vbaStrCopy();
  ppiStack_90 = (int **)&DAT_00412f74;
  *param_3 = 0;
  ppiStack_94 = (int **)0x42ab07;
  iVar2 = __vbaStrCmp();
  if (iVar2 == 0) {
    __vbaStrCopy();
  }
  else {
    ppiStack_90 = (int **)local_50;
    local_58 = &local_1c;
    local_60 = 0x4008;
    ppiStack_94 = (int **)0x42ab32;
    rtcUpperCaseVar();
    ppiStack_90 = (int **)0x42ab3c;
    __vbaStrVarMove();
    __vbaStrMove();
    __vbaFreeVar();
  }
  ppiStack_90 = local_6c;
  ppiStack_94 = (int **)&LAB_0041470c;
  puStack_98 = (undefined1 *)0x42ab67;
  iVar2 = __vbaForEachCollObj();
  pcVar1 = __vbaFreeStr_exref;
  while (iVar2 != 0) {
    ppiStack_90 = (int **)0x42ab7e;
    ppiVar3 = (int **)(**(code **)(*local_38 + 0x1c))();
    if ((int)ppiVar3 < 0) {
      ppiStack_90 = (int **)local_38;
      puStack_98 = (undefined1 *)0x42ab96;
      ppiStack_94 = ppiVar3;
      __vbaHresultCheckObj();
    }
    ppiStack_90 = (int **)0x42aba4;
    iVar2 = __vbaStrCmp();
    pcVar7 = (code *)-(uint)(iVar2 == 0);
    __vbaFreeStr();
    if ((short)pcVar7 != 0) {
      uVar6 = 0xffffffff;
      __vbaExitEachColl();
      break;
    }
    ppiStack_90 = (int **)&LAB_0041470c;
    ppiStack_94 = (int **)0x42abca;
    iVar2 = __vbaNextEachCollObj();
  }
  uVar5 = local_1c;
  if ((short)uVar6 != 0) {
    local_3c = 0;
LAB_0042abf0:
    uVar5 = local_34;
    if ((short)uVar6 != 0) {
      if (SCARRY2((short)local_3c,1)) {
        __vbaErrorOverflow();
        ppiStack_94 = (int **)&LAB_004032d6;
        puStack_98 = ExceptionList;
        ppiStack_90 = (int **)&pcStack_b0;
        pcStack_b0 = pcVar1;
        piVar8 = (int *)(uStack_7c & 0xfffffffe);
        ExceptionList = &puStack_98;
        pcStack_ac = pcVar7;
        uStack_a8 = uVar6;
        (**(code **)(*piVar8 + 4))(piVar8);
        uStack_9c = 0;
        uVar6 = __vbaNew(&DAT_00413b54);
        uVar6 = __vbaObjSet(&uStack_9c,uVar6);
        __vbaObjSetAddref(piVar8 + 0xd,uVar6);
        __vbaFreeObj();
        return;
      }
      local_58 = &local_3c;
      local_60 = 0x4002;
      ppiStack_90 = (int **)0x42ac20;
      local_3c = CONCAT22((short)((uint)local_3c >> 0x10),(short)local_3c + 1);
      FUN_00440790();
      pcVar7 = __vbaStrMove_exref;
      ppiStack_90 = (int **)0x42ac2d;
      ppiStack_90 = (int **)__vbaStrMove();
      ppiStack_94 = (int **)0x42ac34;
      __vbaStrCat();
      __vbaStrMove();
      __vbaFreeStr();
      ppiStack_90 = &local_38;
      uVar6 = 0;
      ppiStack_94 = &local_70;
      puStack_98 = &LAB_0041470c;
      uStack_9c = 0x42ac5c;
      iVar2 = __vbaForEachCollObj();
      while (iVar2 != 0) {
        ppiStack_90 = (int **)local_38;
        ppiStack_94 = (int **)0x42ac6d;
        puVar4 = (undefined1 *)(**(code **)(*local_38 + 0x1c))();
        if ((int)puVar4 < 0) {
          ppiStack_90 = (int **)&LAB_0041470c;
          ppiStack_94 = (int **)local_38;
          uStack_9c = 0x42ac85;
          puStack_98 = puVar4;
          __vbaHresultCheckObj();
        }
        ppiStack_90 = (int **)local_34;
        ppiStack_94 = (int **)0x42ac93;
        iVar2 = __vbaStrCmp();
        pcVar7 = (code *)-(uint)(iVar2 == 0);
        __vbaFreeStr();
        if ((short)pcVar7 != 0) {
          uVar6 = 0xffffffff;
          ppiStack_90 = (int **)0x42acc8;
          __vbaExitEachColl();
          break;
        }
        ppiStack_90 = &local_70;
        ppiStack_94 = (int **)&LAB_0041470c;
        puStack_98 = (undefined1 *)0x42acb9;
        iVar2 = __vbaNextEachCollObj();
      }
      goto LAB_0042abf0;
    }
  }
  local_60 = 8;
  local_58 = (undefined4 *)uVar5;
  __vbaVarCopy();
  ppiStack_90 = local_6c;
  ppiStack_94 = (int **)0x2;
  puStack_98 = (undefined1 *)0x42ad1f;
  __vbaFreeObjList();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}

/* ---- 0x42ad80 (FUN_0042ad80) [estimated] strings:  ---- */
void __cdecl FUN_0042ad80(uint param_1)

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
  local_c = &DAT_00401638;
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

/* ---- 0x42ae30 (FUN_0042ae30) [estimated] strings:  ---- */
void __cdecl FUN_0042ae30(uint param_1)

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
  local_c = &DAT_00401648;
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
