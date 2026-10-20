/* Object #10 File -- ESTIMATED function range; public methods per VB header: Editable, Editable, SetDataSource, DataSource, DuplicateFiles, Comments */
#include "ghidra_types.h"

/* ---- 0x432120 (FUN_00432120) [estimated] strings:  ---- */
undefined4 FUN_00432120(int *param_1,undefined2 *param_2)

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
  local_c = &DAT_004019c8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x14];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (short)iVar1;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x432190 (FUN_00432190) [estimated] strings:  ---- */
void __cdecl FUN_00432190(int *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_28 [2];
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_004019d0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *(undefined2 *)(param_1 + 0x14) = *param_2;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_28[0] = 0;
  uVar2 = __vbaForEachCollObj(&LAB_004133e8,local_28,&local_1c,param_1[0x1a]);
  while ((int)uVar2 != 0) {
    local_20 = CONCAT22((short)((ulonglong)uVar2 >> 0x30),*param_2);
    iVar1 = (**(code **)(*local_1c + 0x50))(local_1c,&local_20);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_1c,&LAB_004133e8,0x50);
    }
    uVar2 = __vbaNextEachCollObj(&LAB_004133e8,local_28,&local_1c);
  }
  __vbaFreeObj(&LAB_0043224d);
  __vbaFreeObj();
  return;
}

/* ---- 0x432270 (FUN_00432270) [estimated] strings:  ---- */
void __cdecl FUN_00432270(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004019e0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  __vbaObjSetAddref(&local_1c,param_2);
  piVar1 = param_1 + 0x19;
  uVar2 = __vbaNew(&DAT_00408318);
  uVar2 = __vbaObjSet(&local_20,uVar2);
  __vbaObjSetAddref(piVar1,uVar2);
  __vbaFreeObj();
  iVar3 = (**(code **)(*(int *)*piVar1 + 0x5c))((int *)*piVar1,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,*piVar1,&DAT_00414258,0x5c);
  }
  iVar3 = (**(code **)(*local_1c + 0x20))(local_1c,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_1c,&DAT_0041462c,0x20);
  }
  __vbaObjSetAddref(param_1 + 0x17,local_20);
  __vbaFreeObj();
  __vbaFreeObj(&LAB_00432359);
  return;
}

/* ---- 0x432380 (FUN_00432380) [estimated] strings:  ---- */
void __cdecl FUN_00432380(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_004019f0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x19]);
  return;
}

/* ---- 0x432410 (FUN_00432410) [estimated] strings:  ---- */
void __cdecl FUN_00432410(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401a00;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x1a]);
  return;
}

/* ---- 0x4324a0 (FUN_004324a0) [estimated] strings:  ---- */
void __cdecl FUN_004324a0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401a10;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x1b]);
  return;
}

/* ---- 0x432530 (FUN_00432530) [estimated] strings: null\\ ---- */
void __cdecl FUN_00432530(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_2c;
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
  local_10 = &stack0xffffffb4;
  local_c = &DAT_00401a20;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar4 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  __vbaObjSetAddref(&local_1c,param_2);
  piVar3 = param_1 + 0x18;
  uVar1 = __vbaNew(&DAT_00408318);
  uVar1 = __vbaObjSet(&local_2c,uVar1);
  __vbaObjSetAddref(piVar3,uVar1);
  __vbaFreeObj();
  __vbaStrCopy(piVar4);
  __vbaStrCopy();
  __vbaStrCopy();
  iVar2 = (**(code **)(*(int *)*piVar3 + 0x84))((int *)*piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*piVar3,&DAT_00414258,0x84);
  }
  __vbaFreeStrList(3,&local_20,&local_24,&local_28);
  iVar2 = (**(code **)(*(int *)*piVar3 + 0x5c))((int *)*piVar3,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*piVar3,&DAT_00414258,0x5c);
  }
  iVar2 = (**(code **)(*(int *)*piVar3 + 0x34))((int *)*piVar3,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*piVar3,&DAT_00414258,0x34);
  }
  iVar2 = __vbaStrCmp(L"null\\",local_20);
  __vbaFreeStr();
  if (iVar2 == 0) {
    *(undefined2 *)(param_1 + 0x10) = 0xffff;
  }
  __vbaFreeObj(&LAB_004326ca);
  return;
}

/* ---- 0x4326f0 (FUN_004326f0) [estimated] strings:  ---- */
void __cdecl FUN_004326f0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401a30;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x18]);
  return;
}

/* ---- 0x432780 (FUN_00432780) [estimated] strings:  ---- */
void __cdecl FUN_00432780(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401a40;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x16]);
  return;
}

/* ---- 0x432810 (FUN_00432810) [estimated] strings:  ---- */
void __cdecl FUN_00432810(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401a50;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x15]);
  return;
}

/* ---- 0x4328a0 (FUN_004328a0) [estimated] strings:  ---- */
void __cdecl FUN_004328a0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_50;
  undefined4 local_4c [3];
  undefined4 local_40;
  undefined4 local_3c [4];
  undefined4 local_2c;
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
  local_10 = &stack0xffffff90;
  local_c = &DAT_00401a60;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  *param_4 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_40 = 0;
  local_4c[0] = 0;
  local_50 = 0;
  iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x4c))((int *)param_1[0x16],*param_2,local_3c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1[0x16],&DAT_004146fc,0x4c);
  }
  __vbaStrVarMove(local_3c);
  __vbaStrMove();
  piVar5 = (int *)param_1[0x16];
  piVar1 = param_1 + 0x15;
  iVar3 = (**(code **)(*piVar5 + 0x1c))(piVar5,piVar1,&local_28,&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1[0x16],&DAT_004146fc,0x1c);
  }
  uVar4 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_20,uVar4);
  __vbaFreeStr();
  __vbaFreeVar(piVar5);
  iVar3 = (**(code **)(*local_20 + 0x28))(local_20,*param_2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_20,&LAB_0041470c,0x28);
  }
  iVar3 = (**(code **)(*(int *)*piVar1 + 0x6c))((int *)*piVar1,&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,*piVar1,&LAB_004133f8,0x6c);
  }
  uVar4 = local_2c;
  local_2c = 0;
  uVar4 = __vbaObjSet(local_4c,uVar4);
  iVar3 = __vbaForEachCollObj(&DAT_00414268,&local_50,&local_24,uVar4);
  while (iVar3 != 0) {
    iVar3 = (**(code **)(*local_24 + 0x2c))(local_24,&local_40);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_24,&DAT_00414268,0x2c);
    }
    if (((short)local_40 != 0) &&
       (iVar3 = (**(code **)(*local_24 + 0x80))(local_24,&local_20), iVar3 < 0)) {
      __vbaHresultCheckObj(iVar3,local_24,&DAT_00414268,0x80);
    }
    iVar3 = __vbaNextEachCollObj(&DAT_00414268,&local_50,&local_24);
  }
  sVar2 = __vbaObjIs(*param_3,0);
  if ((sVar2 == 0) &&
     (iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],&local_20,param_3),
     iVar3 < 0)) {
    __vbaHresultCheckObj(iVar3,param_1[0x16],&DAT_004146fc,0x44);
  }
  __vbaObjSetAddref(&local_1c,local_20);
  __vbaFreeObjList(2,local_4c,&local_50,&LAB_00432b03);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x432b30 (FUN_00432b30) [estimated] strings:  ---- */
void __cdecl FUN_00432b30(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *local_5c;
  int *local_58 [6];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
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
  local_10 = &stack0xffffff74;
  local_c = &DAT_00401a70;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_58[0] = (int *)0x0;
  local_5c = (int *)0x0;
  __vbaObjSetAddref(local_58,*param_2);
  puVar4 = &local_1c;
  piVar3 = local_58[0];
  iVar1 = (**(code **)(*local_58[0] + 0x1c))(local_58[0],puVar4);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_58[0],&LAB_004133e8,0x1c);
  }
  __vbaStrCat(local_1c,&DAT_0041439c /* bstr: '_' */);
  __vbaStrMove();
  __vbaStrCopy(piVar3,puVar4);
  __vbaFreeStrList(2,&local_1c,&local_20);
  iVar1 = (**(code **)(*local_58[0] + 0x24))(local_58[0],&local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_58[0],&LAB_004133e8,0x24);
  }
  *(undefined2 *)(param_1 + 0x10) = (undefined2)local_40;
  local_40 = 0;
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&LAB_004133e8,0x50);
  }
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  iVar1 = (**(code **)(*local_58[0] + 0x3c))(local_58[0],&local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_58[0],&LAB_004133e8,0x3c);
  }
  *(undefined2 *)((int)param_1 + 0x46) = (undefined2)local_40;
  __vbaObjSetAddref(local_58,0);
  piVar3 = (int *)*param_3;
  iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3,&local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_0041462c,0x20);
  }
  __vbaObjSetAddref(param_1 + 0x17,local_3c);
  __vbaFreeObj();
  uVar2 = __vbaNew(&DAT_00408318);
  uVar2 = __vbaObjSet(&local_3c,uVar2);
  __vbaObjSetAddref(param_1 + 0x18,uVar2);
  __vbaFreeObj();
  piVar3 = (int *)*param_2;
  iVar1 = (**(code **)(*piVar3 + 0x68))(piVar3,&local_3c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&LAB_004133e8,0x68);
  }
  uVar2 = local_3c;
  local_3c = 0;
  __vbaObjSet(&local_5c,uVar2);
  iVar1 = (**(code **)(*local_5c + 0x1c))(local_5c,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_5c,&DAT_00414258,0x1c);
  }
  iVar1 = (**(code **)(*local_5c + 0x20))(local_5c,&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_5c,&DAT_00414258,0x20);
  }
  iVar1 = (**(code **)(*local_5c + 0x24))(local_5c,&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_5c,&DAT_00414258,0x24);
  }
  iVar1 = (**(code **)(*local_5c + 0x28))(local_5c,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_5c,&DAT_00414258,0x28);
  }
  local_40 = 0;
  local_28 = 0;
  __vbaStrMove();
  local_24 = 0;
  __vbaStrMove();
  local_20 = 0;
  __vbaStrMove();
  local_1c = 0;
  __vbaStrMove();
  iVar1 = (**(code **)(*(int *)param_1[0x18] + 0x84))
                    ((int *)param_1[0x18],&local_2c,&local_30,&local_34,&local_38,&local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x18],&DAT_00414258,0x84);
  }
  __vbaFreeStrList(4,&local_2c,&local_30,&local_34,&local_38);
  iVar1 = (**(code **)(*local_5c + 0x30))(local_5c,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_5c,&DAT_00414258,0x30);
  }
  iVar1 = (**(code **)(*local_5c + 0x34))(local_5c,&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_5c,&DAT_00414258,0x34);
  }
  local_20 = 0;
  __vbaStrMove();
  local_1c = 0;
  __vbaStrMove();
  iVar1 = (**(code **)(*(int *)param_1[0x18] + 0x58))
                    ((int *)param_1[0x18],&local_24,&local_28,param_1 + 0x17);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x18],&DAT_00414258,0x58);
  }
  __vbaFreeStrList(2,&local_24,&local_28);
  __vbaObjSetAddref(&local_5c,0);
  piVar3 = param_1 + 0x19;
  uVar2 = __vbaNew(&DAT_00408318);
  uVar2 = __vbaObjSet(&local_3c,uVar2);
  __vbaObjSetAddref(piVar3,uVar2);
  __vbaFreeObj();
  iVar1 = (**(code **)(*(int *)*piVar3 + 0x5c))((int *)*piVar3,param_3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,*piVar3,&DAT_00414258,0x5c);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x7c))
                    ((int *)param_1[0x15],param_1 + 0x18,piVar3,param_1 + 0x17);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x15],&LAB_004133f8,0x7c);
  }
  __vbaFreeObjList(2,local_58,&local_5c,&LAB_00432fa2);
  return;
}

/* ---- 0x432fd0 (FUN_00432fd0) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00432fd0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  code *pcStack_bc;
  code *pcStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int aiStack_88 [6];
  void *pvStack_70;
  undefined1 *puStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int **ppiStack_5c;
  int **ppiStack_58;
  int *piStack_54;
  undefined *puStack_50;
  int *piStack_4c;
  undefined4 local_30 [2];
  undefined4 local_28;
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
  local_c = &DAT_00401a80;
  local_8 = 0;
  piStack_4c = param_1;
  puStack_50 = (undefined *)0x433007;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  puStack_50 = &DAT_004146ac;
  piStack_54 = (int *)0x0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_30[0] = 0;
  ppiStack_58 = (int **)0x433022;
  puStack_50 = (undefined *)__vbaCastObj();
  piStack_54 = &local_28;
  ppiStack_58 = (int **)0x43302d;
  __vbaObjSet();
  puStack_50 = (undefined *)0x433038;
  __vbaStrCopy();
  piStack_54 = (int *)param_1[0x19];
  piStack_4c = &local_24;
  puStack_50 = (undefined *)param_2;
  ppiStack_58 = (int **)0x43304d;
  puVar4 = (undefined1 *)(**(code **)(*piStack_54 + 0x58))();
  pcVar1 = __vbaHresultCheckObj_exref;
  if ((int)puVar4 < 0) {
    piStack_60 = (int *)param_1[0x19];
    ppiStack_58 = (int **)0x58;
    ppiStack_5c = (int **)&DAT_00414258;
    piStack_68 = (int *)0x433067;
    piStack_64 = (int *)puVar4;
    __vbaHresultCheckObj();
  }
  ppiStack_58 = (int **)0x433078;
  __vbaFreeStr();
  ppiStack_58 = (int **)0x433081;
  __vbaFreeObj();
  if (0 < *(short *)((int)param_1 + 0x46)) {
    ppiStack_58 = (int **)param_1[0x1a];
    ppiStack_5c = &local_1c;
    piStack_60 = local_30;
    piStack_64 = (int *)&LAB_004133e8;
    piStack_68 = (int *)0x4330a2;
    iVar5 = __vbaForEachCollObj();
    pcVar2 = __vbaNextEachCollObj_exref;
    while (iVar5 != 0) {
      ppiStack_58 = (int **)param_2;
      ppiStack_5c = (int **)local_1c;
      piStack_60 = (int *)0x4330b9;
      iVar5 = (**(code **)(*local_1c + 0x7c))();
      if (iVar5 < 0) {
        piStack_60 = (int *)0x7c;
        piStack_64 = (int *)&LAB_004133e8;
        piStack_68 = local_1c;
        pvStack_70 = (void *)0x4330cd;
        puStack_6c = (undefined1 *)iVar5;
        __vbaHresultCheckObj();
      }
      piStack_60 = &local_20;
      piStack_64 = local_1c;
      piStack_68 = (int *)0x4330dd;
      piVar6 = (int *)(**(code **)(*local_1c + 0x80))();
      if ((int)piVar6 < 0) {
        ppiStack_58 = (int **)0x80;
        ppiStack_5c = (int **)&LAB_004133e8;
        piStack_60 = local_1c;
        piStack_68 = (int *)0x4330f4;
        piStack_64 = piVar6;
        piVar6 = (int *)__vbaHresultCheckObj();
      }
      ppiStack_58 = &local_1c;
      ppiStack_5c = (int **)local_30;
      if (SCARRY2((short)local_20,1)) {
        piStack_60 = (int *)0x433162;
        __vbaErrorOverflow();
        piVar3 = piStack_54;
        puStack_6c = &LAB_004032d6;
        pvStack_70 = ExceptionList;
        uStack_b4 = 0;
        pcStack_b8 = pcVar2;
        piStack_68 = (int *)&pcStack_bc;
        pcStack_bc = pcVar1;
        piStack_64 = (int *)&DAT_00401a90;
        piStack_60 = (int *)0x0;
        ExceptionList = &pvStack_70;
        piVar9 = piStack_54;
        ppiStack_5c = (int **)&stack0xfffffffc;
        (**(code **)(*piStack_54 + 4))(piStack_54);
        puVar10 = auStack_a0;
        aiStack_88[5] = 0;
        aiStack_88[4] = 0;
        aiStack_88[3] = 0;
        aiStack_88[2] = 0;
        aiStack_88[1] = 0;
        aiStack_88[0] = 0;
        uStack_8c = 0;
        uStack_90 = 0;
        uStack_98 = puStack_50;
        auStack_a0[0] = 0x4002;
        FUN_00440790();
        __vbaStrMove(puVar10);
        piVar6 = (int *)piVar3[0x19];
        piVar8 = aiStack_88 + 3;
        iVar5 = (**(code **)(*piVar6 + 0x30))(piVar6,piVar8);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar3[0x19],&DAT_00414258,0x30);
        }
        aiStack_88[3] = 0;
        __vbaStrMove();
        iVar5 = __vbaInStr(0,aiStack_88[4],aiStack_88[5],1);
        if (iVar5 == 0) {
          __vbaStrCopy(piVar6,piVar8);
          __vbaStrCopy(puVar10,piVar9);
          FUN_00441680(aiStack_88 + 5,aiStack_88 + 3);
          uVar7 = __vbaStrMove();
          __vbaStrCat(aiStack_88[4],uVar7);
          uVar7 = __vbaStrMove();
          __vbaStrCat(&DAT_00414e70 /* bstr: '.' */,uVar7);
          piVar8 = (int *)__vbaStrMove();
          piVar6 = aiStack_88;
          piVar9 = aiStack_88 + 5;
          FUN_00441760((undefined *)piVar9,piVar6);
          uVar7 = __vbaStrMove(piVar9,piVar6,piVar8);
          __vbaStrCat(uVar7,piVar9);
          __vbaStrMove();
          __vbaFreeStrList(6,aiStack_88 + 3,aiStack_88 + 2,aiStack_88 + 1,aiStack_88,&uStack_8c,
                           &uStack_90);
        }
        __vbaStrCopy(piVar6,piVar8);
        iVar5 = (**(code **)(*(int *)piVar3[0x19] + 0x58))
                          ((int *)piVar3[0x19],aiStack_88 + 5,aiStack_88 + 3,piVar3 + 0x17);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar3[0x19],&DAT_00414258,0x58);
        }
        __vbaFreeStr();
        *(undefined2 *)(piVar3 + 0x11) = 0xffff;
        *(undefined2 *)((int)piVar3 + 0x46) = 0;
        __vbaFreeStr(&LAB_00433350);
        __vbaFreeStr();
        return;
      }
      piStack_60 = (int *)&LAB_004133e8;
      piStack_64 = (int *)0x433110;
      local_20 = CONCAT22((short)((uint)piVar6 >> 0x10),(short)local_20 + 1);
      iVar5 = __vbaNextEachCollObj();
    }
  }
  ppiStack_58 = (int **)&LAB_0043313d;
  ppiStack_5c = (int **)0x433137;
  __vbaFreeObj();
  ppiStack_5c = (int **)0x43313c;
  __vbaFreeObj();
  return;
}

/* ---- 0x433170 (FUN_00433170) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00433170(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30 [6];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff9c;
  local_c = &DAT_00401a90;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar4 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  puVar6 = local_48;
  local_30[5] = 0;
  local_30[4] = 0;
  local_30[3] = 0;
  local_30[2] = 0;
  local_30[1] = 0;
  local_30[0] = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = param_2;
  local_48[0] = 0x4002;
  FUN_00440790();
  __vbaStrMove(puVar6);
  piVar5 = (int *)param_1[0x19];
  piVar3 = local_30 + 3;
  iVar1 = (**(code **)(*piVar5 + 0x30))(piVar5,piVar3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x19],&DAT_00414258,0x30);
  }
  local_30[3] = 0;
  __vbaStrMove();
  iVar1 = __vbaInStr(0,local_30[4],local_30[5],1);
  if (iVar1 == 0) {
    __vbaStrCopy(piVar5,piVar3);
    __vbaStrCopy(puVar6,piVar4);
    FUN_00441680(local_30 + 5,local_30 + 3);
    uVar2 = __vbaStrMove();
    __vbaStrCat(local_30[4],uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(&DAT_00414e70 /* bstr: '.' */,uVar2);
    piVar3 = (int *)__vbaStrMove();
    piVar5 = local_30;
    piVar4 = local_30 + 5;
    FUN_00441760((undefined *)piVar4,piVar5);
    uVar2 = __vbaStrMove(piVar4,piVar5,piVar3);
    __vbaStrCat(uVar2,piVar4);
    __vbaStrMove();
    __vbaFreeStrList(6,local_30 + 3,local_30 + 2,local_30 + 1,local_30,&local_34,&local_38);
  }
  __vbaStrCopy(piVar5,piVar3);
  iVar1 = (**(code **)(*(int *)param_1[0x19] + 0x58))
                    ((int *)param_1[0x19],local_30 + 5,local_30 + 3,param_1 + 0x17);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x19],&DAT_00414258,0x58);
  }
  __vbaFreeStr();
  *(undefined2 *)(param_1 + 0x11) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x46) = 0;
  __vbaFreeStr(&LAB_00433350);
  __vbaFreeStr();
  return;
}

/* ---- 0x433370 (FUN_00433370) [estimated] strings: Tried to export fake duplicate-generating file.; CTPProject.File; Tried to export before importing; CTPProject.File ---- */
void __cdecl FUN_00433370(int *param_1,int *param_2,undefined4 *param_3,int *******param_4)

{
  int *********pppppppppiVar1;
  ushort uVar2;
  ushort uVar3;
  int *********pppppppppiVar4;
  int ********ppppppppiVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  int *********pppppppppiVar9;
  int ********ppppppppiVar10;
  int *******pppppppiVar11;
  int *piVar12;
  int **********ppppppppppiVar13;
  int **********ppppppppppiVar14;
  undefined4 uVar15;
  int **********ppppppppppiVar16;
  undefined4 *puVar17;
  int **********ppppppppppiVar18;
  code *pcVar19;
  code *pcVar20;
  int **********ppppppppppiVar21;
  bool bVar22;
  int *********pppppppppiStack_350;
  int *********pppppppppiStack_34c;
  int *********pppppppppiStack_348;
  int *********pppppppppiStack_344;
  int *********pppppppppiStack_340;
  int *********pppppppppiStack_33c;
  int *********pppppppppiStack_338;
  int *********pppppppppiStack_334;
  int *********pppppppppiStack_330;
  int *********pppppppppiStack_32c;
  int *********pppppppppiStack_328;
  int *********pppppppppiStack_324;
  int *********pppppppppiStack_320;
  int *********pppppppppiStack_31c;
  int *********pppppppppiStack_318;
  undefined4 uStack_2b8;
  int *piStack_2b4;
  code *pcStack_2b0;
  int *********pppppppppiStack_2a8;
  int *********pppppppppiStack_2a4;
  int *********apppppppppiStack_25c [6];
  undefined4 uStack_244;
  int *******pppppppiStack_240;
  int ********appppppppiStack_23c [9];
  undefined4 uStack_218;
  wchar_t *pwStack_210;
  undefined4 uStack_208;
  int *********pppppppppiStack_204;
  int *********pppppppppiStack_200;
  undefined4 uStack_1fc;
  int ********appppppppiStack_1f8 [2];
  undefined4 uStack_1f0;
  undefined4 auStack_1e8 [2];
  undefined4 uStack_1e0;
  int ********appppppppiStack_1d8 [4];
  int ********appppppppiStack_1c8 [4];
  int ********ppppppppiStack_1b8;
  int ********ppppppppiStack_1b4;
  int *********pppppppppiStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int ********ppppppppiStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int ********ppppppppiStack_194;
  int ********ppppppppiStack_190;
  int *********pppppppppiStack_18c;
  int *********pppppppppiStack_188;
  int ********ppppppppiStack_184;
  int *********pppppppppiStack_180;
  int *********pppppppppiStack_17c;
  int ********ppppppppiStack_178;
  int *********pppppppppiStack_174;
  int ********ppppppppiStack_170;
  int ********ppppppppiStack_16c;
  int ********ppppppppiStack_168;
  int ********ppppppppiStack_164;
  int **********ppppppppppiVar23;
  int ******local_f8;
  int ********local_f4 [7];
  int *******local_d8;
  int ********local_d4;
  int ********local_d0 [9];
  undefined4 local_ac;
  wchar_t *local_a4;
  undefined4 local_9c;
  wchar_t *local_94;
  undefined4 local_8c [2];
  undefined4 local_84;
  undefined4 local_7c [2];
  undefined4 local_74;
  int *******local_6c [4];
  int ******local_5c [2];
  undefined4 local_54;
  int ******local_4c;
  int ********local_48;
  undefined4 local_44;
  int *****local_40;
  int *******local_3c;
  int *******local_38;
  undefined4 local_34;
  int ******local_30;
  undefined4 local_2c;
  int *******local_28;
  int ********local_24;
  int ********local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffed4;
  local_c = &DAT_00401aa0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  local_1c = 0;
  local_20 = (int ********)0x0;
  local_24 = (int ********)0x0;
  local_28 = (int *******)0x0;
  local_2c = 0;
  local_30 = (int ******)0x0;
  local_34 = 0;
  local_38 = (int *******)0x0;
  local_3c = (int *******)0x0;
  local_40 = (int *****)0x0;
  local_44 = 0;
  local_48 = (int ********)0x0;
  local_4c = (int ******)0x0;
  local_5c[0] = (int ******)0x0;
  local_6c[0] = (int *******)0x0;
  local_7c[0] = 0;
  local_8c[0] = 0;
  local_9c = 0;
  local_ac = 0;
  local_d0[0] = (int ********)0x0;
  local_d4 = (int ********)0x0;
  local_d8 = (int *******)0x0;
  local_f4[0] = (int ********)0x0;
  local_f8 = (int ******)0x0;
  pcVar19 = __vbaVarDup_exref;
  if (0 < *(short *)((int)param_1 + 0x46)) {
    rtcErrObj();
    piVar7 = (int *)__vbaObjSet();
    pcVar19 = __vbaVarDup_exref;
    local_8c[0] = 10;
    local_7c[0] = 10;
    local_84 = 0x80020004;
    local_74 = 0x80020004;
    local_a4 = L"Tried to export fake duplicate-generating file.";
    local_ac = 8;
    __vbaVarDup();
    local_94 = L"CTPProject.File";
    local_9c = 8;
    __vbaVarDup();
    iVar8 = (**(code **)(*piVar7 + 0x44))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaFreeVarList();
  }
  if (*(short *)((int)param_1 + 0x42) == 0) {
    rtcErrObj();
    piVar7 = (int *)__vbaObjSet();
    local_8c[0] = 10;
    local_7c[0] = 10;
    local_84 = 0x80020004;
    local_74 = 0x80020004;
    local_a4 = L"Tried to export before importing";
    local_ac = 8;
    (*pcVar19)();
    local_94 = L"CTPProject.File";
    local_9c = 8;
    (*pcVar19)();
    iVar8 = (**(code **)(*piVar7 + 0x44))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaFreeVarList();
  }
  iVar8 = (**(code **)(*param_1 + 0x4c))();
  if (iVar8 < 0) {
    __vbaHresultCheckObj();
  }
  if ((short)local_d0[0] == 0) {
    rtcErrObj();
    piVar7 = (int *)__vbaObjSet();
    local_8c[0] = 10;
    local_7c[0] = 10;
    local_84 = 0x80020004;
    local_74 = 0x80020004;
    local_a4 = L"Tried to export uneditable file";
    local_ac = 8;
    (*pcVar19)();
    local_94 = L"CTPProject.File";
    local_9c = 8;
    (*pcVar19)();
    iVar8 = (**(code **)(*piVar7 + 0x44))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaFreeVarList();
  }
  if (DAT_00480244 == (int **********)0x0) {
    __vbaNew2();
  }
  iVar8 = (*(code *)(*DAT_00480244)[6])();
  if (iVar8 < 0) {
    __vbaHresultCheckObj();
  }
  ppppppppiVar10 = (int ********)*local_48;
  __vbaI2I4();
  iVar8 = (*(code *)ppppppppiVar10[0x1f])();
  if (iVar8 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaFreeObj();
  sVar6 = __vbaObjIs();
  if (sVar6 == 0) {
    __vbaNew();
    __vbaObjSet();
    iVar8 = (**(code **)(*(int *)param_1[0x19] + 0x1c))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    pppppppppiVar9 = (int *********)(**(code **)(*(int *)param_1[0x19] + 0x20))();
    if ((int)pppppppppiVar9 < 0) {
      ppppppppiStack_168 = (int ********)0x4337af;
      ppppppppiStack_164 = (int ********)pppppppppiVar9;
      __vbaHresultCheckObj();
    }
    puVar17 = (undefined4 *)(**(code **)(*(int *)param_1[0x19] + 0x24))();
    if ((int)puVar17 < 0) {
      ppppppppiStack_168 = (int ********)param_1[0x19];
      ppppppppiStack_164 = (int ********)&DAT_00414258;
      ppppppppiStack_170 = (int ********)0x4337d0;
      ppppppppiStack_16c = (int ********)puVar17;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_164 = (int ********)param_1[0x19];
    ppppppppiStack_168 = (int ********)0x4337dd;
    pppppppppiVar9 = (int *********)(*(code *)(*ppppppppiStack_164)[10])();
    if ((int)pppppppppiVar9 < 0) {
      ppppppppiStack_170 = (int ********)param_1[0x19];
      ppppppppiStack_168 = (int ********)0x28;
      ppppppppiStack_16c = (int ********)&DAT_00414258;
      ppppppppiStack_178 = (int ********)0x4337f1;
      pppppppppiStack_174 = pppppppppiVar9;
      __vbaHresultCheckObj();
    }
    pcVar20 = __vbaStrMove_exref;
    local_d0[0] = (int ********)0x0;
    local_34 = 0;
    ppppppppiStack_168 = (int ********)0x43380a;
    __vbaStrMove();
    local_30 = (int ******)0x0;
    ppppppppiStack_168 = (int ********)0x433815;
    __vbaStrMove();
    local_2c = 0;
    ppppppppiStack_168 = (int ********)0x433820;
    __vbaStrMove();
    local_28 = (int *******)0x0;
    ppppppppiStack_168 = (int ********)0x43382b;
    __vbaStrMove();
    ppppppppiStack_168 = (int ********)local_d0;
    ppppppppiStack_16c = (int ********)&local_44;
    ppppppppiStack_170 = (int ********)&local_40;
    pppppppppiStack_174 = (int *********)&local_3c;
    ppppppppiStack_178 = &local_38;
    pppppppppiStack_17c = (int *********)local_20;
    pppppppppiStack_180 = (int *********)0x43384e;
    pppppppppiStack_18c = (int *********)(*(code *)(*local_20)[0x21])();
    pcVar19 = __vbaHresultCheckObj_exref;
    if ((int)pppppppppiStack_18c < 0) {
      pppppppppiStack_180 = (int *********)0x84;
      ppppppppiStack_184 = (int ********)&DAT_00414258;
      pppppppppiStack_188 = (int *********)local_20;
      ppppppppiStack_190 = (int ********)0x43386b;
      __vbaHresultCheckObj();
    }
    pppppppppiStack_180 = (int *********)&local_44;
    ppppppppiStack_184 = (int ********)&local_40;
    pppppppppiStack_188 = (int *********)&local_3c;
    pppppppppiStack_18c = (int *********)&local_38;
    ppppppppiStack_190 = (int ********)0x4;
    ppppppppiStack_194 = (int ********)0x43388b;
    __vbaFreeStrList();
    pppppppppiStack_180 = (int *********)param_4;
    ppppppppiStack_184 = local_20;
    pppppppppiStack_188 = (int *********)0x43389b;
    iVar8 = (*(code *)(*local_20)[0x17])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
  }
  else {
    __vbaObjSetAddref();
    pcVar20 = __vbaStrMove_exref;
    pcVar19 = __vbaHresultCheckObj_exref;
  }
  __vbaObjSetAddref();
  iVar8 = (*(code *)(*local_f4[0])[0x14])();
  if (iVar8 < 0) {
    (*pcVar19)();
  }
  ppppppppppiVar14 = (int **********)param_1[0x15];
  iVar8 = (*(code *)(*ppppppppppiVar14)[0x16])();
  if (iVar8 < 0) {
    ppppppppiStack_164 = (int ********)0x433907;
    (*pcVar19)();
  }
  if ((int ********)local_d8 == (int ********)0x0) {
    ppppppppiVar10 = (int ********)(*(code *)(*local_f4[0])[0x20])();
    if ((int)ppppppppiVar10 < 0) {
      ppppppppiStack_16c = (int ********)0x80;
      ppppppppiStack_170 = (int ********)&DAT_00414258;
      pppppppppiStack_174 = (int *********)local_f4[0];
      pppppppppiStack_17c = (int *********)0x433d44;
      ppppppppiStack_178 = ppppppppiVar10;
      (*pcVar19)();
    }
  }
  else if (((int ********)local_d8 == (int ********)0x1) ||
          ((int ********)local_d8 == (int ********)0x3)) {
    piVar7 = (int *)param_1[0x15];
    ppppppppppiVar18 = (int **********)local_d0;
    pppppppppiVar9 = (int *********)(**(code **)(*piVar7 + 0x1c))();
    if ((int)pppppppppiVar9 < 0) {
      ppppppppiStack_164 = (int ********)param_1[0x15];
      ppppppppiStack_16c = (int ********)0x433a16;
      ppppppppiStack_168 = (int ********)pppppppppiVar9;
      (*pcVar19)();
    }
    if ((short)local_d0[0] != 0) {
      ppppppppiStack_164 = (int ********)0x433a30;
      pppppppiVar11 = (int *******)(**(code **)(*(int *)param_1[0x16] + 0x34))();
      if ((int)pppppppiVar11 < 0) {
        ppppppppiStack_16c = (int ********)param_1[0x16];
        ppppppppiStack_164 = (int ********)0x34;
        ppppppppiStack_168 = (int ********)&DAT_004146fc;
        pppppppppiStack_174 = (int *********)0x433a44;
        ppppppppiStack_170 = (int ********)pppppppiVar11;
        (*pcVar19)();
      }
      ppppppppiStack_164 = (int ********)local_d8;
      ppppppppiStack_168 = (int ********)0x433a51;
      __vbaStrI4();
      ppppppppiStack_164 = (int ********)0x433a58;
      (*pcVar20)();
      ppppppppiStack_164 = &local_28;
      ppppppppiStack_168 = local_f4[0];
      ppppppppiStack_16c = (int ********)0x433a68;
      pppppppppiVar9 = (int *********)(*(code *)(*local_f4[0])[0x1f])();
      if ((int)pppppppppiVar9 < 0) {
        ppppppppiStack_164 = local_f4[0];
        ppppppppiStack_16c = (int ********)0x433a7f;
        ppppppppiStack_168 = (int ********)pppppppppiVar9;
        (*pcVar19)();
      }
      __vbaFreeStr();
    }
    ppppppppiStack_164 = (int ********)&local_f8;
    ppppppppiStack_168 = (int ********)&LAB_0041470c;
    local_1c = 0;
    ppppppppiStack_16c = (int ********)0x433aa9;
    iVar8 = __vbaForEachCollObj();
    while (iVar8 != 0) {
      piVar12 = (int *)*param_3;
      ppppppppiStack_164 = (int ********)0x433ac3;
      pppppppiVar11 = (int *******)(**(code **)(*piVar12 + 0x34))();
      if ((int)pppppppiVar11 < 0) {
        ppppppppiStack_164 = (int ********)0x34;
        ppppppppiStack_168 = (int ********)&DAT_00415000;
        pppppppppiStack_174 = (int *********)0x433ad8;
        ppppppppiStack_170 = (int ********)pppppppiVar11;
        ppppppppiStack_16c = (int ********)piVar12;
        __vbaHresultCheckObj();
      }
      ppppppppiStack_164 = &local_28;
      piVar12 = (int *)*param_3;
      ppppppppiStack_16c = (int ********)0x433ae7;
      ppppppppiStack_168 = (int ********)piVar12;
      ppppppppiVar10 = (int ********)(**(code **)(*piVar12 + 0x3c))();
      if ((int)ppppppppiVar10 < 0) {
        ppppppppiStack_16c = (int ********)0x3c;
        ppppppppiStack_170 = (int ********)&DAT_00415000;
        pppppppppiStack_17c = (int *********)0x433afc;
        ppppppppiStack_178 = ppppppppiVar10;
        pppppppppiStack_174 = (int *********)piVar12;
        __vbaHresultCheckObj();
      }
      ppppppppiStack_170 = (int ********)param_1[0x19];
      ppppppppiStack_16c = (int ********)&local_2c;
      pppppppppiStack_174 = (int *********)0x433b09;
      pppppppppiStack_180 = (int *********)(**(code **)((int)*ppppppppiStack_170 + 0x20))();
      if ((int)pppppppppiStack_180 < 0) {
        pppppppppiStack_17c = (int *********)param_1[0x19];
        pppppppppiStack_174 = (int *********)0x20;
        ppppppppiStack_178 = (int ********)&DAT_00414258;
        ppppppppiStack_184 = (int ********)0x433b23;
        __vbaHresultCheckObj();
      }
      pppppppppiStack_174 = (int *********)0x1;
      local_54 = local_2c;
      ppppppppiStack_178 = (int ********)local_5c;
      pppppppppiStack_17c = (int *********)local_6c;
      local_2c = 0;
      local_5c[0] = (int ******)0x8;
      pppppppppiStack_180 = (int *********)0x433b43;
      rtcLeftCharVar();
      pppppppppiStack_174 = (int *********)local_6c;
      ppppppppiStack_178 = (int ********)0x433b4d;
      __vbaStrVarMove();
      pppppppppiStack_174 = (int *********)0x433b54;
      (*pcVar20)();
      local_28 = (int *******)0x0;
      pppppppppiStack_174 = (int *********)0x433b5f;
      (*pcVar20)();
      pppppppppiStack_174 = (int *********)0x433b6d;
      __vbaStrCopy();
      ppppppppiStack_16c = (int ********)&local_1c;
      ppppppppiStack_170 = &local_38;
      pppppppppiStack_174 = (int *********)&local_34;
      ppppppppiStack_178 = (int ********)&local_30;
      pppppppppiStack_17c = (int *********)(param_1 + 0x1b);
      pppppppppiStack_180 = &local_d4;
      local_d4 = local_d0[0];
      ppppppppiStack_184 = (int ********)&local_20;
      pppppppppiStack_188 = (int *********)local_24;
      pppppppppiStack_18c = (int *********)0x433ba1;
      ppppppppiStack_168 = (int ********)(*(code *)(*local_24)[0x15])();
      if ((int)ppppppppiStack_168 < 0) {
        ppppppppiStack_164 = local_24;
        ppppppppiStack_16c = (int ********)0x433bb9;
        __vbaHresultCheckObj();
      }
      ppppppppiStack_164 = (int ********)&local_30;
      ppppppppiStack_168 = (int ********)0x3;
      ppppppppiStack_16c = (int ********)0x433bcd;
      __vbaFreeStrList();
      ppppppppiStack_16c = local_6c;
      ppppppppiStack_170 = (int ********)local_5c;
      pppppppppiStack_174 = (int *********)0x2;
      ppppppppiStack_178 = (int ********)0x433bdd;
      __vbaFreeVarList();
      ppppppppppiVar23 = (int **********)&local_24;
      ppppppppiStack_164 = (int ********)&LAB_0041470c;
      if (SCARRY4(local_1c,1)) {
        ppppppppiStack_168 = (int ********)0x433e97;
        __vbaErrorOverflow();
        pppppppppiStack_174 = (int *********)&LAB_004032d6;
        ppppppppiStack_178 = ExceptionList;
        piStack_2b4 = param_1;
        ppppppppiStack_170 = (int ********)&uStack_2b8;
        uStack_2b8 = 0;
        ppppppppiStack_16c = (int ********)&DAT_00401ab0;
        ppppppppiStack_168 = (int ********)0x0;
        ExceptionList = &ppppppppiStack_178;
        pcStack_2b0 = pcVar20;
        ppppppppiStack_164 = (int ********)&stack0xfffffffc;
        ppppppppppiVar21 = ppppppppppiVar23;
        (*(code *)(*ppppppppppiVar23)[1])();
        pppppppppiStack_17c = (int *********)0x0;
        ppppppppiStack_184 = (int ********)0x0;
        pppppppppiStack_188 = (int *********)0x0;
        pppppppppiStack_18c = (int *********)0x0;
        ppppppppiStack_190 = (int ********)0x0;
        ppppppppiStack_194 = (int ********)0x0;
        uStack_198 = 0;
        uStack_19c = 0;
        ppppppppiStack_1a0 = (int ********)0x0;
        uStack_1a4 = 0;
        uStack_1a8 = 0;
        uStack_1ac = 0;
        pppppppppiStack_1b0 = (int *********)0x0;
        ppppppppiStack_1b4 = (int ********)0x0;
        ppppppppiStack_1b8 = (int ********)0x0;
        appppppppiStack_1c8[0] = (int ********)0x0;
        appppppppiStack_1d8[0] = (int ********)0x0;
        auStack_1e8[0] = 0;
        appppppppiStack_1f8[0] = (int ********)0x0;
        uStack_208 = 0;
        uStack_218 = 0;
        appppppppiStack_23c[0] = (int ********)0x0;
        pppppppiStack_240 = (int *******)0x0;
        uStack_244 = 0;
        apppppppppiStack_25c[0] = (int *********)0x0;
        pppppppppiVar9 = (int *********)__vbaHresultCheckObj_exref;
        if (0 < *(short *)((int)ppppppppppiVar23 + 0x46)) {
          rtcErrObj();
          piVar12 = (int *)__vbaObjSet();
          uStack_1f0 = 0x80020004;
          uStack_1e0 = 0x80020004;
          appppppppiStack_1f8[0] = (int ********)0xa;
          auStack_1e8[0] = 10;
          pwStack_210 = L"Tried to import fake duplicate-generating file.";
          uStack_218 = 8;
          __vbaVarDup();
          pppppppppiStack_200 = (int *********)0x413024;
          uStack_208 = 8;
          __vbaVarDup();
          iVar8 = (**(code **)(*piVar12 + 0x44))();
          pppppppppiVar9 = (int *********)__vbaHresultCheckObj_exref;
          if (iVar8 < 0) {
            __vbaHresultCheckObj();
          }
          __vbaFreeObj();
          __vbaFreeVarList();
        }
        if (DAT_00480244 == (int **********)0x0) {
          __vbaNew2();
        }
        iVar8 = (*(code *)(*DAT_00480244)[6])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        pppppppppiVar1 = (int *********)*pppppppppiStack_1b0;
        __vbaI2I4();
        iVar8 = (*(code *)pppppppppiVar1[0x1f])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        __vbaFreeObj();
        if (DAT_0047f074 == (int *)0x0) {
          __vbaNew2();
        }
        piVar12 = DAT_0047f074;
        iVar8 = (*(code *)(*ppppppppppiVar21)[0x16])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        iVar8 = (*(code *)(*pppppppppiStack_1b0)[0xc])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        __vbaStrCat();
        __vbaStrMove();
        iVar8 = (**(code **)(*piVar12 + 0x724))();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        __vbaFreeStrList();
        __vbaFreeObj();
        sVar6 = __vbaObjIs();
        if (sVar6 == 0) {
          __vbaNew();
          __vbaObjSet();
          ppppppppppiVar23 = ppppppppppiVar21;
          iVar8 = (*(code *)(*ppppppppppiVar21[0x19])[7])();
          if (iVar8 < 0) {
            (*(code *)pppppppppiVar9)();
          }
          iVar8 = (*(code *)(*ppppppppppiVar21[0x19])[8])();
          if (iVar8 < 0) {
            (*(code *)pppppppppiVar9)();
          }
          iVar8 = (*(code *)(*ppppppppppiVar21[0x19])[9])();
          if (iVar8 < 0) {
            (*(code *)pppppppppiVar9)();
          }
          iVar8 = (*(code *)(*ppppppppppiVar21[0x19])[10])();
          if (iVar8 < 0) {
            (*(code *)pppppppppiVar9)();
          }
          appppppppiStack_23c[0] = (int ********)0x0;
          uStack_19c = 0;
          __vbaStrMove();
          uStack_198 = 0;
          __vbaStrMove();
          ppppppppiStack_194 = (int ********)0x0;
          __vbaStrMove();
          ppppppppiStack_190 = (int ********)0x0;
          __vbaStrMove();
          pppppppppiStack_318 = pppppppppiStack_17c;
          pppppppppiStack_31c = (int *********)0x434282;
          pppppppppiStack_328 = (int *********)(*(code *)(*pppppppppiStack_17c)[0x21])();
          if ((int)pppppppppiStack_328 < 0) {
            pppppppppiStack_31c = (int *********)0x84;
            pppppppppiStack_320 = (int *********)&DAT_00414258;
            pppppppppiStack_324 = pppppppppiStack_17c;
            pppppppppiStack_32c = (int *********)0x434299;
            (*(code *)pppppppppiVar9)();
          }
          pppppppppiStack_31c = (int *********)&uStack_1ac;
          pppppppppiStack_320 = (int *********)&uStack_1a8;
          pppppppppiStack_324 = (int *********)&uStack_1a4;
          pppppppppiStack_328 = &ppppppppiStack_1a0;
          pppppppppiStack_32c = (int *********)0x4;
          pppppppppiStack_330 = (int *********)0x4342b1;
          __vbaFreeStrList();
          pppppppppiStack_320 = pppppppppiStack_17c;
          pppppppppiStack_324 = (int *********)0x4342be;
          pppppppppiStack_31c = (int *********)ppppppppppiVar14;
          iVar8 = (*(code *)(*pppppppppiStack_17c)[0x17])();
          if (iVar8 < 0) {
            (*(code *)pppppppppiVar9)();
          }
        }
        else {
          ppppppppppiVar23 = ppppppppppiVar21;
          __vbaObjSetAddref();
        }
        iVar8 = (*(code *)(*ppppppppppiVar21)[0x1b])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        iVar8 = (*(code *)(*pppppppppiStack_1b0)[0xf])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        __vbaFreeObj();
        pppppppppiStack_2a4 = (int *********)(ppppppppppiVar21 + 0x1b);
        iVar8 = (*(code *)(*ppppppppppiVar21[0x1b])[0xd])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        __vbaObjSetAddref();
        iVar8 = (*(code *)(*apppppppppiStack_25c[0])[0x13])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        iVar8 = (*(code *)(*ppppppppppiVar21)[0x1b])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        iVar8 = (*(code *)(*pppppppppiStack_1b0)[0xf])();
        if (iVar8 < 0) {
          (*(code *)pppppppppiVar9)();
        }
        __vbaFreeObj();
        iVar8 = (*(code *)(**pppppppppiStack_2a4)[0xd])();
        if (iVar8 < 0) {
          pppppppppiStack_318 = (int *********)0x4343c8;
          (*(code *)pppppppppiVar9)();
        }
        ppppppppppiVar14 = ppppppppppiVar21 + 0x15;
        pppppppppiStack_2a8 = (int *********)ppppppppppiVar14;
        ppppppppppiVar13 = (int **********)(*(code *)(*ppppppppppiVar21[0x15])[7])();
        if ((int)ppppppppppiVar13 < 0) {
          pppppppppiStack_318 = *ppppppppppiVar14;
          pppppppppiStack_320 = (int *********)0x4343f4;
          pppppppppiStack_31c = (int *********)ppppppppppiVar13;
          (*(code *)pppppppppiVar9)();
        }
        if ((short)appppppppiStack_23c[0] != 0) {
          pppppppppiStack_318 = (int *********)0x434412;
          ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x1c])();
          if ((int)ppppppppppiVar14 < 0) {
            pppppppppiStack_318 = (int *********)0x70;
            pppppppppiStack_31c = (int *********)&DAT_00414258;
            pppppppppiStack_320 = apppppppppiStack_25c[0];
            pppppppppiStack_328 = (int *********)0x434429;
            pppppppppiStack_324 = (int *********)ppppppppppiVar14;
            (*(code *)pppppppppiVar9)();
          }
          ppppppppiStack_190 = (int ********)0x0;
          pppppppppiStack_318 = (int *********)0x43443c;
          __vbaStrMove();
          pppppppppiStack_318 = &ppppppppiStack_190;
          pppppppppiStack_31c = apppppppppiStack_25c[0];
          pppppppppiStack_320 = (int *********)0x43444c;
          ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[7])();
          if ((int)ppppppppppiVar14 < 0) {
            pppppppppiStack_318 = apppppppppiStack_25c[0];
            pppppppppiStack_320 = (int *********)0x434463;
            pppppppppiStack_31c = (int *********)ppppppppppiVar14;
            (*(code *)pppppppppiVar9)();
          }
          pppppppppiStack_318 = (int *********)0x434471;
          iVar8 = __vbaStrCmp();
          __vbaFreeStr();
          if (iVar8 == 0) goto LAB_00434488;
          ppppppppiStack_184 = (int ********)__vbaI4Str();
          ppppppppppiVar14 = (int **********)pppppppppiStack_2a8;
        }
        pppppppppiStack_318 = (int *********)0x4344ed;
        ppppppppppiVar13 = (int **********)(*(code *)(**ppppppppppiVar14)[0x16])();
        if ((int)ppppppppppiVar13 < 0) {
          pppppppppiStack_320 = *ppppppppppiVar14;
          pppppppppiStack_318 = (int *********)0x58;
          pppppppppiStack_31c = (int *********)&LAB_004133f8;
          pppppppppiStack_328 = (int *********)0x434500;
          pppppppppiStack_324 = (int *********)ppppppppppiVar13;
          (*(code *)pppppppppiVar9)();
        }
        switch(uStack_244) {
        case 0:
        case 2:
          goto switchD_0043450f_caseD_0;
        case 1:
          pppppppppiStack_318 = &ppppppppiStack_190;
          pppppppppiStack_31c = apppppppppiStack_25c[0];
          pppppppppiStack_180 = (int *********)0x1;
          pppppppppiStack_320 = (int *********)0x4349aa;
          ppppppppppiVar13 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x1c])();
          if ((int)ppppppppppiVar13 < 0) {
            pppppppppiStack_320 = (int *********)0x70;
            pppppppppiStack_324 = (int *********)&DAT_00414258;
            pppppppppiStack_328 = apppppppppiStack_25c[0];
            pppppppppiStack_330 = (int *********)0x4349c1;
            pppppppppiStack_32c = (int *********)ppppppppppiVar13;
            (*(code *)pppppppppiVar9)();
          }
          ppppppppiStack_190 = (int ********)0x0;
          pppppppppiStack_320 = (int *********)0x4349d4;
          __vbaStrMove();
          ppppppppppiVar16 = (int **********)pppppppppiStack_180;
          goto LAB_004349d4;
        case 3:
          pppppppppiStack_318 = &ppppppppiStack_190;
          pppppppppiStack_31c = apppppppppiStack_25c[0];
          ppppppppppiVar21 = (int **********)0x1;
          pppppppppiStack_320 = (int *********)0x4345bb;
          ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x1c])();
          if ((int)ppppppppppiVar14 < 0) {
            pppppppppiStack_320 = (int *********)0x70;
            pppppppppiStack_324 = (int *********)&DAT_00414258;
            pppppppppiStack_328 = apppppppppiStack_25c[0];
            pppppppppiStack_330 = (int *********)0x4345d2;
            pppppppppiStack_32c = (int *********)ppppppppppiVar14;
            (*(code *)pppppppppiVar9)();
          }
          ppppppppiStack_190 = (int ********)0x0;
          pppppppppiStack_320 = (int *********)0x4345e5;
          __vbaStrMove();
          goto LAB_004345e5;
        default:
          pppppppppiStack_318 = (int *********)0x434e25;
          pppppppppiStack_318 = (int *********)rtcErrObj();
          pppppppppiStack_31c = (int *********)&pppppppppiStack_1b0;
          pppppppppiStack_320 = (int *********)0x434e30;
          ppppppppppiVar14 = (int **********)__vbaObjSet();
          uStack_1f0 = 0x80020004;
          uStack_1e0 = 0x80020004;
          appppppppiStack_1f8[0] = (int ********)0xa;
          auStack_1e8[0] = 10;
          pwStack_210 = L"Invalid file format in sub Import";
          uStack_218 = 8;
          pppppppppiStack_318 = (int *********)0x434e76;
          __vbaVarDup();
          pppppppppiStack_200 = (int *********)0x413024;
          uStack_208 = 8;
          pppppppppiStack_318 = (int *********)0x434e95;
          __vbaVarDup();
          pppppppppiStack_318 = appppppppiStack_1f8;
          pppppppppiStack_31c = (int *********)auStack_1e8;
          pppppppppiStack_320 = appppppppiStack_1d8;
          pppppppppiStack_324 = appppppppiStack_1c8;
          pppppppppiStack_328 = (int *********)0x410;
          pppppppppiStack_330 = (int *********)0x434eb6;
          pppppppppiStack_32c = (int *********)ppppppppppiVar14;
          puVar17 = (undefined4 *)(*(code *)(*ppppppppppiVar14)[0x11])();
          if ((int)puVar17 < 0) {
            pppppppppiStack_320 = (int *********)0x434ec7;
            pppppppppiStack_31c = (int *********)puVar17;
            pppppppppiStack_318 = (int *********)ppppppppppiVar14;
            (*(code *)pppppppppiVar9)();
          }
          __vbaFreeObj();
          pppppppppiStack_318 = appppppppiStack_1d8;
          pppppppppiStack_31c = appppppppiStack_1c8;
          pppppppppiStack_320 = (int *********)0x4;
          pppppppppiStack_324 = (int *********)0x434eee;
          __vbaFreeVarList();
        }
        goto LAB_00434ef1;
      }
      ppppppppiStack_168 = (int ********)0x433c05;
      local_1c = local_1c + 1;
      iVar8 = __vbaNextEachCollObj();
    }
    piVar7 = (int *)*param_3;
    ppppppppiStack_164 = (int ********)0x433c1c;
    pppppppiVar11 = (int *******)(**(code **)(*piVar7 + 0x34))();
    if ((int)pppppppiVar11 < 0) {
      ppppppppiStack_164 = (int ********)0x34;
      ppppppppiStack_168 = (int ********)&DAT_00415000;
      pppppppppiStack_174 = (int *********)0x433c31;
      ppppppppiStack_170 = (int ********)pppppppiVar11;
      ppppppppiStack_16c = (int ********)piVar7;
      __vbaHresultCheckObj();
    }
    if ((short)local_d0[0] != 0) {
      ppppppppiStack_164 = (int ********)&DAT_00414bb4;
      ppppppppiStack_168 = (int ********)0x0;
      ppppppppiStack_16c = (int ********)0x433c4e;
      __vbaCastObj();
      __vbaObjSet();
      __vbaCastObj();
      __vbaObjSet();
      local_d8 = (int *******)0x0;
      __vbaStrCopy();
      ppppppppiStack_164 = (int ********)0x433ca3;
      FUN_00472670(&local_20,&local_28,param_1 + 0x1b,&local_d8,&local_48,&local_4c);
      ppppppppiStack_164 = (int ********)0x433cac;
      __vbaFreeStr();
      ppppppppiStack_164 = (int ********)&local_4c;
      ppppppppiStack_168 = (int ********)&local_48;
      ppppppppiStack_16c = (int ********)0x2;
      ppppppppiStack_170 = (int ********)0x433cbc;
      __vbaFreeObjList();
    }
    ppppppppiStack_168 = (int ********)param_1[0x15];
    ppppppppiStack_164 = (int ********)local_d0;
    ppppppppiStack_16c = (int ********)0x433ccf;
    ppppppppiVar10 = (int ********)(*(code *)(*ppppppppiStack_168)[0xd])();
    if ((int)ppppppppiVar10 < 0) {
      pppppppppiStack_174 = (int *********)param_1[0x15];
      ppppppppiStack_16c = (int ********)0x34;
      ppppppppiStack_170 = (int ********)&LAB_004133f8;
      pppppppppiStack_17c = (int *********)0x433ce7;
      ppppppppiStack_178 = ppppppppiVar10;
      __vbaHresultCheckObj();
    }
    if ((short)local_d0[0] != 0) {
      ppppppppiStack_16c = (int ********)(param_1 + 0x16);
      pppppppppiVar9 = (int *********)*param_2;
      pppppppppiStack_174 = (int *********)0x433d00;
      ppppppppiStack_170 = (int ********)pppppppppiVar9;
      ppppppppiVar10 = (int ********)(*(code *)(*pppppppppiVar9)[0x1d])();
      if ((int)ppppppppiVar10 < 0) {
        ppppppppiStack_16c = (int ********)0x74;
        ppppppppiStack_170 = (int ********)&LAB_00414228;
        pppppppppiStack_17c = (int *********)0x433d15;
        ppppppppiStack_178 = ppppppppiVar10;
        pppppppppiStack_174 = pppppppppiVar9;
        __vbaHresultCheckObj();
      }
    }
  }
  else {
    rtcErrObj();
    pppppppppiVar9 = (int *********)__vbaObjSet();
    local_84 = 0x80020004;
    local_74 = 0x80020004;
    local_8c[0] = 10;
    local_7c[0] = 10;
    local_a4 = L"Invalid file format in sub Export";
    local_ac = 8;
    __vbaVarDup();
    local_94 = L"CTPProject.File";
    local_9c = 8;
    __vbaVarDup();
    ppppppppiStack_164 = (int ********)0x410;
    ppppppppiStack_16c = (int ********)0x4339b1;
    ppppppppiStack_168 = (int ********)pppppppppiVar9;
    ppppppppiVar10 = (int ********)(*(code *)(*pppppppppiVar9)[0x11])();
    if ((int)ppppppppiVar10 < 0) {
      ppppppppiStack_16c = (int ********)0x44;
      ppppppppiStack_170 = (int ********)&DAT_00413af4;
      pppppppppiStack_17c = (int *********)0x4339c6;
      ppppppppiStack_178 = ppppppppiVar10;
      pppppppppiStack_174 = pppppppppiVar9;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_16c = (int ********)0x4339cf;
    __vbaFreeObj();
    ppppppppiStack_16c = (int ********)local_8c;
    ppppppppiStack_170 = (int ********)local_7c;
    pppppppppiStack_174 = (int *********)local_6c;
    ppppppppiStack_178 = (int ********)local_5c;
    pppppppppiStack_17c = (int *********)0x4;
    pppppppppiStack_180 = (int *********)0x4339ea;
    __vbaFreeVarList();
  }
  ppppppppiStack_16c = local_f4[0];
  ppppppppiStack_170 = (int ********)0x433d50;
  pppppppppiVar9 = (int *********)(*(code *)(*local_f4[0])[0x12])();
  if ((int)pppppppppiVar9 < 0) {
    ppppppppiStack_170 = (int ********)0x48;
    pppppppppiStack_174 = (int *********)&DAT_00414258;
    ppppppppiStack_178 = local_f4[0];
    pppppppppiStack_180 = (int *********)0x433d6d;
    pppppppppiStack_17c = pppppppppiVar9;
    __vbaHresultCheckObj();
  }
  pppppppppiStack_174 = local_f4;
  ppppppppiStack_170 = (int ********)0x0;
  ppppppppiStack_178 = (int ********)0x433d84;
  __vbaObjSetAddref();
  if (DAT_00480244 == (int **********)0x0) {
    ppppppppiStack_170 = (int ********)&DAT_00480244;
    pppppppppiStack_174 = (int *********)&DAT_00413b34;
    ppppppppiStack_178 = (int ********)0x433d9d;
    __vbaNew2();
  }
  ppppppppppiVar14 = DAT_00480244;
  ppppppppiStack_170 = (int ********)&local_48;
  pppppppppiStack_174 = (int *********)DAT_00480244;
  ppppppppiStack_178 = (int ********)0x433dad;
  pppppppppiVar9 = (int *********)(*(code *)(*DAT_00480244)[6])();
  if ((int)pppppppppiVar9 < 0) {
    ppppppppiStack_178 = (int ********)0x18;
    pppppppppiStack_17c = (int *********)&DAT_00413b24;
    pppppppppiStack_180 = (int *********)ppppppppppiVar14;
    pppppppppiStack_188 = (int *********)0x433dbe;
    ppppppppiStack_184 = (int ********)pppppppppiVar9;
    __vbaHresultCheckObj();
  }
  ppppppppiVar5 = local_48;
  ppppppppiVar10 = (int ********)*local_48;
  ppppppppiStack_178 = (int ********)0x433dcb;
  pppppppppiStack_174 = (int *********)__vbaI2I4();
  ppppppppiStack_178 = ppppppppiVar5;
  pppppppppiStack_17c = (int *********)0x433dd0;
  pppppppppiVar9 = (int *********)(*(code *)ppppppppiVar10[0x1f])();
  if ((int)pppppppppiVar9 < 0) {
    pppppppppiStack_17c = (int *********)0x7c;
    pppppppppiStack_180 = (int *********)&DAT_0041490c;
    ppppppppiStack_184 = ppppppppiVar5;
    pppppppppiStack_18c = (int *********)0x433de1;
    pppppppppiStack_188 = pppppppppiVar9;
    __vbaHresultCheckObj();
  }
  pppppppppiStack_17c = (int *********)0x433dea;
  __vbaFreeObj();
  pppppppppiStack_17c = (int *********)&LAB_00433e72;
  pppppppppiStack_180 = (int *********)&local_f8;
  ppppppppiStack_184 = (int ********)local_f4;
  pppppppppiStack_188 = (int *********)0x2;
  pppppppppiStack_18c = (int *********)0x433e5e;
  __vbaFreeObjList();
  pppppppppiStack_180 = (int *********)0x433e6c;
  __vbaFreeObj();
  pppppppppiStack_180 = (int *********)0x433e71;
  __vbaFreeObj();
  return;
  while( true ) {
    pppppppppiStack_338 = (int *********)&pppppppppiStack_1b0;
    pppppppppiStack_340 = (int *********)0x4346ae;
    pppppppppiStack_33c = (int *********)ppppppppppiVar23;
    ppppppppppiVar14 = ppppppppppiVar23;
    pppppppppiStack_34c = (int *********)(*(code *)(*ppppppppppiVar23)[0x1b])();
    if ((int)pppppppppiStack_34c < 0) {
      pppppppppiStack_340 = (int *********)0x6c;
      pppppppppiStack_344 = (int *********)&LAB_004133e8;
      pppppppppiStack_350 = (int *********)0x4346bd;
      pppppppppiStack_348 = (int *********)ppppppppppiVar23;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiVar1 = pppppppppiStack_1b0;
    pppppppppiStack_340 = &ppppppppiStack_1b4;
    pppppppppiStack_344 = (int *********)&pppppppppiStack_188;
    pppppppppiStack_348 = (int *********)(ppppppppppiVar14 + 0x15);
    pppppppppiStack_34c = pppppppppiStack_1b0;
    pppppppppiStack_350 = (int *********)0x4346d7;
    iVar8 = (*(code *)(*pppppppppiStack_1b0)[7])();
    if (iVar8 < 0) {
      pppppppppiStack_350 = (int *********)0x1c;
      (*(code *)pppppppppiVar9)(iVar8,pppppppppiVar1,&DAT_004146fc);
    }
    pppppppppiStack_350 = (int *********)ppppppppiStack_1b4;
    ppppppppiStack_1b4 = (int ********)0x0;
    __vbaObjSet(&pppppppppiStack_18c);
    pppppppppiStack_350 = (int *********)0x434706;
    __vbaFreeObj();
    pppppppppiStack_350 = pppppppppiStack_188;
    iVar8 = (*(code *)(*pppppppppiStack_18c)[10])(pppppppppiStack_18c);
    if (iVar8 < 0) {
      (*(code *)pppppppppiVar9)(iVar8,pppppppppiStack_18c,&LAB_0041470c,0x28);
    }
    pppppppppiVar1 = *ppppppppppiVar14;
    uVar15 = __vbaObjSetAddref(&pppppppppiStack_1b0,pppppppppiStack_18c);
    ppppppppppiVar23 = ppppppppppiVar14;
    iVar8 = (*(code *)pppppppppiVar1[0x2e])(ppppppppppiVar14,uVar15);
    if (iVar8 < 0) {
      (*(code *)pppppppppiVar9)(iVar8,ppppppppppiVar14,&LAB_004133e8,0xb8);
    }
    __vbaFreeObj();
    ppppppppppiVar13 =
         (int **********)
         (*(code *)(*pppppppppiStack_18c)[0x14])
                   (pppppppppiStack_18c,&pppppppppiStack_17c,ppppppppppiVar18,
                    ppppppppppiVar14 + 0x1b,appppppppiStack_23c);
    if ((int)ppppppppppiVar13 < 0) {
      pppppppppiStack_318 = pppppppppiStack_18c;
      pppppppppiStack_320 = (int *********)0x434794;
      pppppppppiStack_31c = (int *********)ppppppppppiVar13;
      (*(code *)pppppppppiVar9)();
    }
    if ((short)appppppppiStack_23c[0] != 0) goto LAB_00434efa;
    pppppppppiStack_318 = (int *********)0x4347b2;
    ppppppppppiVar13 = (int **********)apppppppppiStack_25c[0];
    ppppppppppiVar16 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x1c])();
    if ((int)ppppppppppiVar16 < 0) {
      pppppppppiStack_320 = (int *********)0x70;
      pppppppppiStack_324 = (int *********)&DAT_00414258;
      pppppppppiStack_328 = apppppppppiStack_25c[0];
      pppppppppiStack_330 = (int *********)0x4347c9;
      pppppppppiStack_32c = (int *********)ppppppppppiVar16;
      (*(code *)pppppppppiVar9)();
    }
    ppppppppiStack_190 = (int ********)0x0;
    pppppppppiStack_320 = (int *********)0x4347dc;
    __vbaStrMove();
    bVar22 = SCARRY4((int)ppppppppppiVar21,1);
    ppppppppppiVar21 = (int **********)((int)ppppppppppiVar21 + 1);
    ppppppppppiVar14 = ppppppppppiVar14 + 0x1b;
    if (bVar22) break;
LAB_004345e5:
    pppppppppiStack_320 = appppppppiStack_23c;
    ppppppppppiVar14 = ppppppppppiVar23 + 0x15;
    pppppppppiStack_324 = ppppppppppiVar23[0x15];
    pppppppppiStack_328 = (int *********)0x4345fb;
    ppppppppppiVar13 = (int **********)(*(code *)(*pppppppppiStack_324)[7])();
    if ((int)ppppppppppiVar13 < 0) {
      pppppppppiStack_330 = *ppppppppppiVar14;
      pppppppppiStack_328 = (int *********)0x1c;
      pppppppppiStack_32c = (int *********)&LAB_004133f8;
      pppppppppiStack_338 = (int *********)0x43460e;
      pppppppppiStack_334 = (int *********)ppppppppppiVar13;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_328 = &ppppppppiStack_190;
    pppppppppiStack_32c = apppppppppiStack_25c[0];
    pppppppppiStack_330 = (int *********)0x43461e;
    ppppppppppiVar13 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[7])();
    if ((int)ppppppppppiVar13 < 0) {
      pppppppppiStack_330 = (int *********)0x1c;
      pppppppppiStack_334 = (int *********)&DAT_00414258;
      pppppppppiStack_338 = apppppppppiStack_25c[0];
      pppppppppiStack_340 = (int *********)0x434635;
      pppppppppiStack_33c = (int *********)ppppppppppiVar13;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_334 = *ppppppppppiVar14;
    pppppppppiStack_330 = (int *********)&pppppppiStack_240;
    pppppppppiStack_338 = (int *********)0x434644;
    ppppppppppiVar13 = (int **********)(*(code *)(*pppppppppiStack_334)[7])();
    if ((int)ppppppppppiVar13 < 0) {
      pppppppppiStack_340 = *ppppppppppiVar14;
      pppppppppiStack_338 = (int *********)0x1c;
      pppppppppiStack_33c = (int *********)&LAB_004133f8;
      pppppppppiStack_348 = (int *********)0x434657;
      pppppppppiStack_344 = (int *********)ppppppppppiVar13;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_338 = pppppppppiStack_188;
    pppppppppiStack_33c = (int *********)ppppppppiStack_190;
    pppppppppiStack_340 = (int *********)0x434665;
    iVar8 = __vbaStrCmp();
    uVar3 = (ushort)pppppppiStack_240;
    bVar22 = (int)ppppppppppiVar21 <= (int)ppppppppiStack_184;
    uVar2 = (ushort)appppppppiStack_23c[0];
    pppppppppiStack_338 = (int *********)0x434698;
    __vbaFreeStr();
    if ((ushort)(-(ushort)(iVar8 != 0) & ~uVar3) == 0 && (-(ushort)bVar22 & uVar2) == 0) {
      pppppppppiStack_338 = &ppppppppiStack_190;
      pppppppppiStack_33c = apppppppppiStack_25c[0];
      pppppppppiStack_340 = (int *********)0x4347fa;
      ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x1c])();
      if ((int)ppppppppppiVar14 < 0) {
        pppppppppiStack_340 = (int *********)0x70;
        pppppppppiStack_344 = (int *********)&DAT_00414258;
        pppppppppiStack_348 = apppppppppiStack_25c[0];
        pppppppppiStack_350 = (int *********)0x434811;
        pppppppppiStack_34c = (int *********)ppppppppppiVar14;
        (*(code *)pppppppppiVar9)();
      }
      pppppppppiStack_340 = &ppppppppiStack_194;
      pppppppppiStack_344 = apppppppppiStack_25c[0];
      pppppppppiStack_348 = (int *********)0x434821;
      ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[7])();
      if ((int)ppppppppppiVar14 < 0) {
        pppppppppiStack_318 = apppppppppiStack_25c[0];
        pppppppppiStack_320 = (int *********)0x434838;
        pppppppppiStack_31c = (int *********)ppppppppppiVar14;
        (*(code *)pppppppppiVar9)();
      }
      pppppppppiStack_318 = (int *********)0x434846;
      iVar8 = __vbaStrCmp();
      pppppppppiStack_318 = (int *********)0x2;
      pppppppppiStack_31c = (int *********)0x434860;
      __vbaFreeStrList();
      if (iVar8 != 0) {
        uStack_208 = 0x4009;
        pppppppppiStack_200 = (int *********)&pppppppppiStack_17c;
        pppppppppiStack_320 = (int *********)0x1;
        pppppppppiStack_31c = (int *********)0x4009;
        pppppppppiStack_324 = (int *********)0x3;
        pppppppppiStack_318 = pppppppppiStack_204;
        pppppppppiStack_32c = (int *********)0x4348a6;
        pppppppppiStack_328 = (int *********)ppppppppppiVar23;
        __vbaRaiseEvent();
      }
      if (*(short *)ppppppppppiVar18 != 0) {
        pppppppppiStack_318 = (int *********)0x4348c6;
        ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0xf])();
        if ((int)ppppppppppiVar14 < 0) {
          pppppppppiStack_318 = (int *********)0x3c;
          pppppppppiStack_31c = (int *********)&DAT_00414258;
          pppppppppiStack_320 = apppppppppiStack_25c[0];
          pppppppppiStack_328 = (int *********)0x4348dd;
          pppppppppiStack_324 = (int *********)ppppppppppiVar14;
          (*(code *)pppppppppiVar9)();
        }
        pppppppppiStack_318 = (int *********)0x4348e8;
        __vbaStrCopy();
        pppppppppiStack_318 = (int *********)0x4348f7;
        __vbaCastObj();
        pppppppppiStack_318 = (int *********)0x434904;
        __vbaObjSet();
        pppppppppiStack_318 = (int *********)0x43490d;
        __vbaCastObj();
        pppppppppiStack_318 = (int *********)0x434914;
        __vbaObjSet();
        uStack_244 = 0;
        ppppppppiStack_190 = (int ********)0x0;
        __vbaStrMove();
        ppppppppppiVar14 = ppppppppppiVar23 + 0x1b;
        pppppppppiStack_328 = *ppppppppppiVar14;
        pppppppppiStack_318 = &ppppppppiStack_1b4;
        pppppppppiStack_31c = (int *********)&pppppppppiStack_1b0;
        pppppppppiStack_320 = (int *********)&uStack_244;
        pppppppppiStack_324 = &ppppppppiStack_194;
        pppppppppiStack_32c = (int *********)0x434954;
        pppppppppiStack_31c = (int *********)(*(code *)(*pppppppppiStack_328)[7])();
        if ((int)pppppppppiStack_31c < 0) {
          pppppppppiStack_318 = *ppppppppppiVar14;
          pppppppppiStack_320 = (int *********)0x434967;
          (*(code *)pppppppppiVar9)();
        }
        pppppppppiStack_318 = (int *********)0x2;
        pppppppppiStack_31c = (int *********)0x434977;
        __vbaFreeStrList();
        pppppppppiStack_31c = &ppppppppiStack_1b8;
        pppppppppiStack_320 = &ppppppppiStack_1b4;
        pppppppppiStack_324 = (int *********)&pppppppppiStack_1b0;
        pppppppppiStack_328 = (int *********)0x3;
        pppppppppiStack_32c = (int *********)0x43498b;
        __vbaFreeObjList();
      }
      goto LAB_00434ef1;
    }
  }
  goto LAB_004350a0;
LAB_00434488:
  uStack_208 = 0x4009;
  pppppppppiStack_200 = (int *********)&pppppppppiStack_17c;
  pppppppppiStack_320 = (int *********)0x1;
  pppppppppiStack_31c = (int *********)0x4009;
  pppppppppiStack_324 = (int *********)0x2;
  pppppppppiStack_318 = pppppppppiStack_204;
  pppppppppiStack_32c = (int *********)0x4344c3;
  pppppppppiStack_328 = (int *********)ppppppppppiVar21;
  __vbaRaiseEvent();
  goto LAB_00434efa;
  while( true ) {
    pppppppppiStack_340 = (int *********)0x434a9c;
    ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[7])();
    if ((int)ppppppppppiVar14 < 0) {
      pppppppppiStack_318 = apppppppppiStack_25c[0];
      pppppppppiStack_320 = (int *********)0x434ab3;
      pppppppppiStack_31c = (int *********)ppppppppppiVar14;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_318 = (int *********)0x434ac1;
    iVar8 = __vbaStrCmp();
    __vbaFreeStr();
    if (iVar8 == 0) goto LAB_00434488;
    pppppppppiStack_318 = (int *********)0x434ae6;
    pppppppppiStack_324 = (int *********)(*(code *)(*ppppppppppiVar21)[0x1b])();
    if ((int)pppppppppiStack_324 < 0) {
      pppppppppiStack_318 = (int *********)0x6c;
      pppppppppiStack_31c = (int *********)&LAB_004133e8;
      pppppppppiStack_328 = (int *********)0x434af5;
      pppppppppiStack_320 = (int *********)ppppppppppiVar21;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiVar1 = pppppppppiStack_1b0;
    pppppppppiStack_318 = &ppppppppiStack_1b4;
    pppppppppiStack_31c = (int *********)&pppppppppiStack_188;
    pppppppppiStack_320 = pppppppppiStack_2a8;
    pppppppppiStack_324 = pppppppppiStack_1b0;
    pppppppppiStack_328 = (int *********)0x434b0f;
    ppppppppppiVar14 = (int **********)(*(code *)(*pppppppppiStack_1b0)[7])();
    if ((int)ppppppppppiVar14 < 0) {
      pppppppppiStack_328 = (int *********)0x1c;
      pppppppppiStack_32c = (int *********)&DAT_004146fc;
      pppppppppiStack_330 = pppppppppiVar1;
      pppppppppiStack_338 = (int *********)0x434b20;
      pppppppppiStack_334 = (int *********)ppppppppppiVar14;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_328 = (int *********)ppppppppiStack_1b4;
    ppppppppiStack_1b4 = (int ********)0x0;
    pppppppppiStack_32c = (int *********)&pppppppppiStack_18c;
    pppppppppiStack_330 = (int *********)0x434b35;
    __vbaObjSet();
    pppppppppiStack_328 = (int *********)0x434b3e;
    __vbaFreeObj();
    pppppppppiStack_328 = pppppppppiStack_188;
    pppppppppiStack_32c = pppppppppiStack_18c;
    pppppppppiStack_330 = (int *********)0x434b4b;
    ppppppppppiVar14 = (int **********)(*(code *)(*pppppppppiStack_18c)[10])();
    if ((int)ppppppppppiVar14 < 0) {
      pppppppppiStack_330 = (int *********)0x28;
      pppppppppiStack_334 = (int *********)&LAB_0041470c;
      pppppppppiStack_338 = pppppppppiStack_18c;
      pppppppppiStack_340 = (int *********)0x434b5f;
      pppppppppiStack_33c = (int *********)ppppppppppiVar14;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiVar1 = *ppppppppppiVar21;
    pppppppppiStack_334 = (int *********)&pppppppppiStack_1b0;
    pppppppppiStack_330 = pppppppppiStack_18c;
    pppppppppiStack_338 = (int *********)0x434b6f;
    pppppppppiStack_330 = (int *********)__vbaObjSetAddref();
    pppppppppiStack_338 = (int *********)0x434b77;
    pppppppppiStack_334 = (int *********)ppppppppppiVar21;
    ppppppppppiVar14 = (int **********)(*(code *)pppppppppiVar1[0x2e])();
    if ((int)ppppppppppiVar14 < 0) {
      pppppppppiStack_338 = (int *********)0xb8;
      pppppppppiStack_33c = (int *********)&LAB_004133e8;
      pppppppppiStack_348 = (int *********)0x434b8b;
      pppppppppiStack_344 = (int *********)ppppppppppiVar14;
      pppppppppiStack_340 = (int *********)ppppppppppiVar21;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_338 = (int *********)0x434b94;
    __vbaFreeObj();
    pppppppppiStack_340 = (int *********)ppppppppppiVar18;
    pppppppppiStack_338 = appppppppiStack_23c;
    pppppppppiStack_33c = pppppppppiStack_2a4;
    pppppppppiStack_344 = (int *********)&pppppppppiStack_17c;
    pppppppppiStack_348 = pppppppppiStack_18c;
    pppppppppiStack_34c = (int *********)0x434bb3;
    ppppppppppiVar18 = (int **********)pppppppppiStack_340;
    ppppppppppiVar14 = (int **********)(*(code *)(*pppppppppiStack_18c)[0x14])();
    if ((int)ppppppppppiVar14 < 0) {
      pppppppppiStack_318 = pppppppppiStack_18c;
      pppppppppiStack_320 = (int *********)0x434bc7;
      pppppppppiStack_31c = (int *********)ppppppppppiVar14;
      (*(code *)pppppppppiVar9)();
    }
    if ((short)appppppppiStack_23c[0] != 0) goto LAB_00434efa;
    pppppppppiStack_318 = (int *********)0x434be5;
    ppppppppppiVar13 = (int **********)apppppppppiStack_25c[0];
    ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x1c])();
    if ((int)ppppppppppiVar14 < 0) {
      pppppppppiStack_320 = (int *********)0x70;
      pppppppppiStack_324 = (int *********)&DAT_00414258;
      pppppppppiStack_328 = apppppppppiStack_25c[0];
      pppppppppiStack_330 = (int *********)0x434bfc;
      pppppppppiStack_32c = (int *********)ppppppppppiVar14;
      (*(code *)pppppppppiVar9)();
    }
    ppppppppiStack_190 = (int ********)0x0;
    pppppppppiStack_320 = (int *********)0x434c0f;
    __vbaStrMove();
    ppppppppppiVar14 = (int **********)pppppppppiStack_2a8;
    ppppppppppiVar16 = (int **********)((int)pppppppppiStack_180 + 1);
    if (SCARRY4((int)pppppppppiStack_180,1)) break;
LAB_004349d4:
    pppppppppiStack_180 = (int *********)ppppppppppiVar16;
    pppppppppiStack_324 = *ppppppppppiVar14;
    pppppppppiStack_320 = appppppppiStack_23c;
    pppppppppiStack_328 = (int *********)0x4349e3;
    ppppppppppiVar13 = (int **********)(*(code *)(*pppppppppiStack_324)[7])();
    if ((int)ppppppppppiVar13 < 0) {
      pppppppppiStack_330 = *ppppppppppiVar14;
      pppppppppiStack_328 = (int *********)0x1c;
      pppppppppiStack_32c = (int *********)&LAB_004133f8;
      pppppppppiStack_338 = (int *********)0x4349f6;
      pppppppppiStack_334 = (int *********)ppppppppppiVar13;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_328 = &ppppppppiStack_190;
    pppppppppiStack_32c = apppppppppiStack_25c[0];
    pppppppppiStack_330 = (int *********)0x434a06;
    ppppppppppiVar13 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[7])();
    if ((int)ppppppppppiVar13 < 0) {
      pppppppppiStack_330 = (int *********)0x1c;
      pppppppppiStack_334 = (int *********)&DAT_00414258;
      pppppppppiStack_338 = apppppppppiStack_25c[0];
      pppppppppiStack_340 = (int *********)0x434a1d;
      pppppppppiStack_33c = (int *********)ppppppppppiVar13;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_334 = *ppppppppppiVar14;
    pppppppppiStack_330 = (int *********)&pppppppiStack_240;
    pppppppppiStack_338 = (int *********)0x434a2c;
    ppppppppppiVar13 = (int **********)(*(code *)(*pppppppppiStack_334)[7])();
    if ((int)ppppppppppiVar13 < 0) {
      pppppppppiStack_340 = *ppppppppppiVar14;
      pppppppppiStack_338 = (int *********)0x1c;
      pppppppppiStack_33c = (int *********)&LAB_004133f8;
      pppppppppiStack_348 = (int *********)0x434a3f;
      pppppppppiStack_344 = (int *********)ppppppppppiVar13;
      (*(code *)pppppppppiVar9)();
    }
    pppppppppiStack_338 = pppppppppiStack_188;
    pppppppppiStack_33c = (int *********)ppppppppiStack_190;
    pppppppppiStack_340 = (int *********)0x434a4d;
    iVar8 = __vbaStrCmp();
    uVar3 = (ushort)pppppppiStack_240;
    bVar22 = (int)pppppppppiStack_180 <= (int)ppppppppiStack_184;
    uVar2 = (ushort)appppppppiStack_23c[0];
    pppppppppiStack_338 = (int *********)0x434a83;
    __vbaFreeStr();
    pppppppppiStack_338 = &ppppppppiStack_190;
    pppppppppiStack_33c = apppppppppiStack_25c[0];
    if ((ushort)(-(ushort)(iVar8 != 0) & ~uVar3) == 0 && (-(ushort)bVar22 & uVar2) == 0) {
      pppppppppiStack_340 = (int *********)0x434c2c;
      ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x1c])();
      if ((int)ppppppppppiVar14 < 0) {
        pppppppppiStack_340 = (int *********)0x70;
        pppppppppiStack_344 = (int *********)&DAT_00414258;
        pppppppppiStack_348 = apppppppppiStack_25c[0];
        pppppppppiStack_350 = (int *********)0x434c43;
        pppppppppiStack_34c = (int *********)ppppppppppiVar14;
        (*(code *)pppppppppiVar9)();
      }
      pppppppppiStack_340 = &ppppppppiStack_194;
      pppppppppiStack_344 = apppppppppiStack_25c[0];
      pppppppppiStack_348 = (int *********)0x434c53;
      iVar8 = (*(code *)(*apppppppppiStack_25c[0])[7])();
      if (iVar8 < 0) {
        pppppppppiStack_348 = (int *********)0x1c;
        pppppppppiStack_34c = (int *********)&DAT_00414258;
        pppppppppiStack_350 = apppppppppiStack_25c[0];
        (*(code *)pppppppppiVar9)(iVar8);
      }
      pppppppppiStack_348 = (int *********)ppppppppiStack_190;
      pppppppppiStack_34c = (int *********)ppppppppiStack_194;
      pppppppppiStack_350 = (int *********)0x434c78;
      iVar8 = __vbaStrCmp();
      pppppppppiStack_348 = &ppppppppiStack_194;
      pppppppppiStack_34c = &ppppppppiStack_190;
      pppppppppiStack_350 = (int *********)0x2;
      __vbaFreeStrList();
      if (iVar8 != 0) {
        uStack_208 = 0x4009;
        pppppppppiStack_34c = (int *********)&pppppppppiStack_17c;
        pppppppppiStack_350 = pppppppppiStack_204;
        pppppppppiStack_348 = (int *********)uStack_1fc;
        pppppppppiStack_200 = pppppppppiStack_34c;
        __vbaRaiseEvent(ppppppppppiVar21,3,1,0x4009);
      }
      if (*(short *)ppppppppppiVar18 != 0) {
        pppppppppiStack_348 = &ppppppppiStack_190;
        pppppppppiStack_34c = apppppppppiStack_25c[0];
        pppppppppiStack_350 = (int *********)0x434cf5;
        iVar8 = (*(code *)(*apppppppppiStack_25c[0])[0xf])();
        if (iVar8 < 0) {
          pppppppppiStack_350 = (int *********)0x3c;
          (*(code *)pppppppppiVar9)(iVar8,apppppppppiStack_25c[0],&DAT_00414258);
        }
        pppppppppiStack_350 = (int *********)0x434d17;
        __vbaStrCopy();
        pppppppppiStack_348 = (int *********)&DAT_00414bb4;
        pppppppppiStack_34c = (int *********)0x0;
        pppppppppiStack_350 = (int *********)0x434d26;
        pppppppppiStack_348 = (int *********)__vbaCastObj();
        pppppppppiStack_34c = &ppppppppiStack_1b4;
        pppppppppiStack_350 = (int *********)0x434d33;
        __vbaObjSet();
        pppppppppiStack_348 = (int *********)&LAB_0041470c;
        pppppppppiStack_34c = (int *********)0x0;
        pppppppppiStack_350 = (int *********)0x434d3c;
        pppppppppiStack_348 = (int *********)__vbaCastObj();
        pppppppppiStack_34c = (int *********)&pppppppppiStack_1b0;
        pppppppppiStack_350 = (int *********)0x434d43;
        __vbaObjSet();
        uStack_244 = 0;
        ppppppppiStack_190 = (int ********)0x0;
        pppppppppiStack_348 = (int *********)0x434d5a;
        __vbaStrMove();
        pppppppppiVar1 = pppppppppiStack_2a4;
        pppppppppiStack_348 = &ppppppppiStack_1b8;
        pppppppppiStack_34c = (int *********)&uStack_198;
        pppppppppiStack_350 = &ppppppppiStack_1b4;
        iVar8 = (*(code *)(**pppppppppiStack_2a4)[7])
                          (*pppppppppiStack_2a4,&ppppppppiStack_194,&uStack_244,&pppppppppiStack_1b0
                          );
        if (iVar8 < 0) {
          pppppppppiStack_350 = (int *********)*pppppppppiVar1;
          pppppppppiStack_348 = (int *********)0x1c;
          pppppppppiStack_34c = (int *********)&DAT_00414c50;
          (*(code *)pppppppppiVar9)(iVar8);
        }
        pppppppppiStack_348 = (int *********)&uStack_198;
        pppppppppiStack_34c = &ppppppppiStack_194;
        pppppppppiStack_350 = (int *********)0x2;
        __vbaFreeStrList();
        __vbaFreeObjList(3,&pppppppppiStack_1b0,&ppppppppiStack_1b4,&ppppppppiStack_1b8);
      }
      pppppppppiVar1 = pppppppppiStack_2a8;
      pppppppppiStack_348 = appppppppiStack_23c;
      pppppppppiStack_34c = (int *********)*pppppppppiStack_2a8;
      pppppppppiStack_350 = (int *********)0x434dd2;
      ppppppppppiVar14 = (int **********)(*(code *)(*pppppppppiStack_34c)[0xd])();
      if ((int)ppppppppppiVar14 < 0) {
        pppppppppiStack_318 = (int *********)*pppppppppiVar1;
        pppppppppiStack_320 = (int *********)0x434de5;
        pppppppppiStack_31c = (int *********)ppppppppppiVar14;
        (*(code *)pppppppppiVar9)();
      }
      if ((short)appppppppiStack_23c[0] != 0) {
        ppppppppppiVar14 = (int **********)*piVar7;
        pppppppppiStack_318 = (int *********)0x434e05;
        ppppppppppiVar18 = (int **********)(*(code *)(*ppppppppppiVar14)[0x1c])();
        if ((int)ppppppppppiVar18 < 0) {
          pppppppppiStack_320 = (int *********)0x434e1a;
          pppppppppiStack_31c = (int *********)ppppppppppiVar18;
          pppppppppiStack_318 = (int *********)ppppppppppiVar14;
          (*(code *)pppppppppiVar9)();
        }
      }
      goto LAB_00434ef1;
    }
  }
LAB_004350a0:
  pppppppppiStack_320 = (int *********)0x4350a6;
  __vbaErrorOverflow();
  pppppppppiStack_32c = (int *********)&LAB_004032d6;
  pppppppppiStack_330 = ExceptionList;
  pppppppppiStack_328 = (int *********)&pppppppppiStack_350;
  pppppppppiStack_324 = (int *********)&DAT_00401ac0;
  pppppppppiStack_320 = (int *********)0x0;
  ExceptionList = &pppppppppiStack_330;
  pppppppppiStack_350 = pppppppppiVar9;
  pppppppppiStack_34c = (int *********)ppppppppppiVar14;
  pppppppppiStack_348 = (int *********)ppppppppppiVar21;
  pppppppppiStack_31c = &ppppppppiStack_164;
  (*(code *)(*ppppppppppiVar13)[1])(ppppppppppiVar13);
  pppppppppiStack_334 = (int *********)0x0;
  iVar8 = (*(code *)(*ppppppppppiVar13[0x16])[0xf])(ppppppppppiVar13[0x16]);
  if (iVar8 < 0) {
    __vbaHresultCheckObj(iVar8,ppppppppppiVar13[0x16],&DAT_004146fc,0x3c);
  }
  *(short *)((int)ppppppppppiVar13 + 0x42) = 0;
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar7 = DAT_0047f074;
  __vbaObjSetAddref(&pppppppppiStack_334,ppppppppppiVar13);
  iVar8 = (**(code **)(*piVar7 + 0x720))(piVar7,&pppppppppiStack_334);
  if (iVar8 < 0) {
    __vbaHresultCheckObj(iVar8,piVar7,&DAT_00413d78,0x720);
  }
  __vbaFreeObj();
  return;
switchD_0043450f_caseD_0:
  while( true ) {
    pppppppppiStack_318 = appppppppiStack_23c;
    pppppppppiStack_31c = apppppppppiStack_25c[0];
    pppppppppiStack_320 = (int *********)0x434529;
    ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x10])();
    if ((int)ppppppppppiVar14 < 0) {
      pppppppppiStack_318 = apppppppppiStack_25c[0];
      pppppppppiStack_320 = (int *********)0x434540;
      pppppppppiStack_31c = (int *********)ppppppppppiVar14;
      (*(code *)pppppppppiVar9)();
    }
    if ((short)appppppppiStack_23c[0] != 0) break;
    pppppppppiStack_318 = (int *********)0x43455e;
    ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x1e])();
    if ((int)ppppppppppiVar14 < 0) {
      pppppppppiStack_318 = apppppppppiStack_25c[0];
      pppppppppiStack_320 = (int *********)0x434575;
      pppppppppiStack_31c = (int *********)ppppppppppiVar14;
      (*(code *)pppppppppiVar9)();
    }
    ppppppppiStack_190 = (int ********)0x0;
    __vbaStrMove();
    pppppppppiStack_318 = (int *********)0x434598;
    FUN_004402a0(ppppppppppiVar23 + 0x12,&ppppppppiStack_194);
    pppppppppiStack_318 = (int *********)0x4345a1;
    __vbaFreeStr();
  }
LAB_00434ef1:
  *(short *)((int)ppppppppppiVar23 + 0x42) = -1;
LAB_00434efa:
  ppppppppppiVar14 = (int **********)(*(code *)(*apppppppppiStack_25c[0])[0x12])();
  if ((int)ppppppppppiVar14 < 0) {
    pppppppppiStack_318 = (int *********)&DAT_00414258;
    pppppppppiStack_31c = apppppppppiStack_25c[0];
    pppppppppiStack_324 = (int *********)0x434f1d;
    pppppppppiStack_320 = (int *********)ppppppppppiVar14;
    (*(code *)pppppppppiVar9)();
  }
  pppppppppiStack_318 = (int *********)apppppppppiStack_25c;
  pppppppppiStack_31c = (int *********)0x434f2c;
  __vbaObjSetAddref();
  if (DAT_0047f074 == (int *)0x0) {
    pppppppppiStack_318 = (int *********)&DAT_0040dbb8;
    pppppppppiStack_31c = (int *********)0x434f45;
    __vbaNew2();
  }
  piVar7 = DAT_0047f074;
  __vbaStrCopy();
  ppppppppppiVar14 = (int **********)(**(code **)(*piVar7 + 0x724))();
  if ((int)ppppppppppiVar14 < 0) {
    pppppppppiStack_318 = (int *********)&DAT_00413d78;
    pppppppppiStack_31c = (int *********)piVar7;
    pppppppppiStack_324 = (int *********)0x434f7a;
    pppppppppiStack_320 = (int *********)ppppppppppiVar14;
    (*(code *)pppppppppiVar9)();
  }
  __vbaFreeStr();
  if (DAT_00480244 == (int **********)0x0) {
    pppppppppiStack_318 = (int *********)&DAT_00413b34;
    pppppppppiStack_31c = (int *********)0x434f9c;
    __vbaNew2();
  }
  ppppppppppiVar14 = DAT_00480244;
  pppppppppiStack_318 = (int *********)DAT_00480244;
  pppppppppiStack_31c = (int *********)0x434fac;
  ppppppppppiVar18 = (int **********)(*(code *)(*DAT_00480244)[6])();
  if ((int)ppppppppppiVar18 < 0) {
    pppppppppiStack_31c = (int *********)0x18;
    pppppppppiStack_320 = (int *********)&DAT_00413b24;
    pppppppppiStack_324 = (int *********)ppppppppppiVar14;
    pppppppppiStack_32c = (int *********)0x434fbd;
    pppppppppiStack_328 = (int *********)ppppppppppiVar18;
    (*(code *)pppppppppiVar9)();
  }
  pppppppppiVar4 = pppppppppiStack_1b0;
  pppppppppiVar1 = (int *********)*pppppppppiStack_1b0;
  pppppppppiStack_31c = (int *********)0x434fca;
  pppppppppiStack_318 = (int *********)__vbaI2I4();
  pppppppppiStack_31c = pppppppppiVar4;
  pppppppppiStack_320 = (int *********)0x434fcf;
  ppppppppppiVar14 = (int **********)(*(code *)pppppppppiVar1[0x1f])();
  if ((int)ppppppppppiVar14 < 0) {
    pppppppppiStack_320 = (int *********)0x7c;
    pppppppppiStack_324 = (int *********)&DAT_0041490c;
    pppppppppiStack_328 = pppppppppiVar4;
    pppppppppiStack_330 = (int *********)0x434fe0;
    pppppppppiStack_32c = (int *********)ppppppppppiVar14;
    (*(code *)pppppppppiVar9)();
  }
  pppppppppiStack_320 = (int *********)0x434fe9;
  __vbaFreeObj();
  pppppppppiStack_320 = (int *********)&LAB_00435070;
  pppppppppiStack_324 = (int *********)0x43505c;
  __vbaFreeObj();
  pppppppppiStack_324 = (int *********)0x435061;
  __vbaFreeObj();
  pppppppppiStack_324 = (int *********)0x43506a;
  __vbaFreeStr();
  pppppppppiStack_324 = (int *********)0x43506f;
  __vbaFreeObj();
  return;
}

/* ---- 0x433ea0 (FUN_00433ea0) [estimated] strings: Tried to import fake duplicate-generating file.; Invalid file format in sub Import ---- */
void __cdecl FUN_00433ea0(int *****param_1,undefined4 *param_2,int *****param_3,int *****param_4)

{
  int *****pppppiVar1;
  int ****ppppiVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int ********ppppppppiVar8;
  int *******pppppppiVar9;
  undefined4 uVar10;
  int *******pppppppiVar11;
  int ********ppppppppiVar12;
  undefined4 *puVar13;
  int ********ppppppppiVar14;
  int ********ppppppppiVar15;
  int *****pppppiVar16;
  int *******pppppppiVar17;
  bool bVar18;
  int *******pppppppiStack_1f0;
  int *******pppppppiStack_1ec;
  int *******pppppppiStack_1e8;
  int *******pppppppiStack_1e4;
  int ******ppppppiStack_1e0;
  int *******pppppppiStack_1dc;
  int *******pppppppiStack_1d8;
  int *******pppppppiStack_1d4;
  int *******pppppppiStack_1d0;
  int *******pppppppiStack_1cc;
  int *******pppppppiStack_1c8;
  int *******pppppppiStack_1c4;
  int *******pppppppiStack_1c0;
  int *******pppppppiStack_1bc;
  int *******pppppppiStack_1b8;
  int *******local_fc [6];
  undefined4 local_e4;
  int *****local_e0;
  int ******local_dc [9];
  undefined4 local_b8;
  wchar_t *local_b0;
  undefined4 local_a8;
  int *******local_a4;
  int *******local_a0;
  undefined4 local_9c;
  int ******local_98 [2];
  undefined4 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  int ******local_78 [4];
  int ******local_68 [4];
  int ******local_58;
  int ******local_54;
  int *******local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int ******local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *****local_34;
  int ******local_30;
  int *******local_2c;
  int *******local_28;
  int local_24;
  int local_20;
  int *******local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffea8;
  local_c = &DAT_00401ab0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (*(code *)(*param_1)[1])();
  local_1c = (int *******)0x0;
  local_24 = 0;
  local_28 = (int *******)0x0;
  local_2c = (int *******)0x0;
  local_30 = (int ******)0x0;
  local_34 = (int *****)0x0;
  local_38 = 0;
  local_3c = 0;
  local_40 = (int ******)0x0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = (int *******)0x0;
  local_54 = (int ******)0x0;
  local_58 = (int ******)0x0;
  local_68[0] = (int ******)0x0;
  local_78[0] = (int ******)0x0;
  local_88[0] = 0;
  local_98[0] = (int ******)0x0;
  local_a8 = 0;
  local_b8 = 0;
  local_dc[0] = (int ******)0x0;
  local_e0 = (int *****)0x0;
  local_e4 = 0;
  local_fc[0] = (int *******)0x0;
  pppppppiVar17 = (int *******)__vbaHresultCheckObj_exref;
  if (0 < *(short *)((int)param_1 + 0x46)) {
    rtcErrObj();
    piVar6 = (int *)__vbaObjSet();
    local_90 = 0x80020004;
    local_80 = 0x80020004;
    local_98[0] = (int ******)0xa;
    local_88[0] = 10;
    local_b0 = L"Tried to import fake duplicate-generating file.";
    local_b8 = 8;
    __vbaVarDup();
    local_a0 = (int *******)0x413024;
    local_a8 = 8;
    __vbaVarDup();
    iVar7 = (**(code **)(*piVar6 + 0x44))();
    pppppppiVar17 = (int *******)__vbaHresultCheckObj_exref;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaFreeVarList();
  }
  if (DAT_00480244 == (int ********)0x0) {
    __vbaNew2();
  }
  iVar7 = (*(code *)(*DAT_00480244)[6])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  pppppppiVar9 = (int *******)*local_50;
  __vbaI2I4();
  iVar7 = (*(code *)pppppppiVar9[0x1f])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2();
  }
  piVar6 = DAT_0047f074;
  iVar7 = (*(code *)(*param_1)[0x16])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  iVar7 = (*(code *)(*local_50)[0xc])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  __vbaStrCat();
  __vbaStrMove();
  iVar7 = (**(code **)(*piVar6 + 0x724))();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  __vbaFreeStrList();
  __vbaFreeObj();
  sVar5 = __vbaObjIs();
  if (sVar5 == 0) {
    __vbaNew();
    __vbaObjSet();
    iVar7 = (*(code *)(*param_1[0x19])[7])();
    if (iVar7 < 0) {
      (*(code *)pppppppiVar17)();
    }
    iVar7 = (*(code *)(*param_1[0x19])[8])();
    if (iVar7 < 0) {
      (*(code *)pppppppiVar17)();
    }
    iVar7 = (*(code *)(*param_1[0x19])[9])();
    if (iVar7 < 0) {
      (*(code *)pppppppiVar17)();
    }
    iVar7 = (*(code *)(*param_1[0x19])[10])();
    if (iVar7 < 0) {
      (*(code *)pppppppiVar17)();
    }
    local_dc[0] = (int ******)0x0;
    local_3c = 0;
    __vbaStrMove();
    local_38 = 0;
    __vbaStrMove();
    local_34 = (int *****)0x0;
    __vbaStrMove();
    local_30 = (int ******)0x0;
    __vbaStrMove();
    pppppppiStack_1b8 = local_1c;
    pppppppiStack_1bc = (int *******)0x434282;
    pppppppiStack_1c8 = (int *******)(*(code *)(*local_1c)[0x21])();
    if ((int)pppppppiStack_1c8 < 0) {
      pppppppiStack_1bc = (int *******)0x84;
      pppppppiStack_1c0 = (int *******)&DAT_00414258;
      pppppppiStack_1c4 = local_1c;
      pppppppiStack_1cc = (int *******)0x434299;
      (*(code *)pppppppiVar17)();
    }
    pppppppiStack_1bc = (int *******)&local_4c;
    pppppppiStack_1c0 = (int *******)&local_48;
    pppppppiStack_1c4 = (int *******)&local_44;
    pppppppiStack_1c8 = &local_40;
    pppppppiStack_1cc = (int *******)0x4;
    pppppppiStack_1d0 = (int *******)0x4342b1;
    __vbaFreeStrList();
    pppppppiStack_1bc = (int *******)param_4;
    pppppppiStack_1c0 = local_1c;
    pppppppiStack_1c4 = (int *******)0x4342be;
    iVar7 = (*(code *)(*local_1c)[0x17])();
    if (iVar7 < 0) {
      (*(code *)pppppppiVar17)();
    }
  }
  else {
    __vbaObjSetAddref();
  }
  iVar7 = (*(code *)(*param_1)[0x1b])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  iVar7 = (*(code *)(*local_50)[0xf])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  __vbaFreeObj();
  ppppppppiVar14 = (int ********)(param_1 + 0x1b);
  iVar7 = (*(code *)(*param_1[0x1b])[0xd])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  __vbaObjSetAddref();
  iVar7 = (*(code *)(*local_fc[0])[0x13])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  iVar7 = (*(code *)(*param_1)[0x1b])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  iVar7 = (*(code *)(*local_50)[0xf])();
  if (iVar7 < 0) {
    (*(code *)pppppppiVar17)();
  }
  __vbaFreeObj();
  iVar7 = (*(code *)(**ppppppppiVar14)[0xd])();
  if (iVar7 < 0) {
    pppppppiStack_1b8 = (int *******)0x4343c8;
    (*(code *)pppppppiVar17)();
  }
  ppppppppiVar15 = (int ********)(param_1 + 0x15);
  ppppppppiVar8 = (int ********)(*(code *)(*param_1[0x15])[7])();
  if ((int)ppppppppiVar8 < 0) {
    pppppppiStack_1b8 = *ppppppppiVar15;
    pppppppiStack_1c0 = (int *******)0x4343f4;
    pppppppiStack_1bc = (int *******)ppppppppiVar8;
    (*(code *)pppppppiVar17)();
  }
  if ((short)local_dc[0] != 0) {
    pppppppiStack_1b8 = (int *******)0x434412;
    ppppppppiVar8 = (int ********)(*(code *)(*local_fc[0])[0x1c])();
    if ((int)ppppppppiVar8 < 0) {
      pppppppiStack_1b8 = (int *******)0x70;
      pppppppiStack_1bc = (int *******)&DAT_00414258;
      pppppppiStack_1c0 = local_fc[0];
      pppppppiStack_1c8 = (int *******)0x434429;
      pppppppiStack_1c4 = (int *******)ppppppppiVar8;
      (*(code *)pppppppiVar17)();
    }
    local_30 = (int ******)0x0;
    pppppppiStack_1b8 = (int *******)0x43443c;
    __vbaStrMove();
    pppppppiStack_1b8 = &local_30;
    pppppppiStack_1bc = local_fc[0];
    pppppppiStack_1c0 = (int *******)0x43444c;
    ppppppppiVar8 = (int ********)(*(code *)(*local_fc[0])[7])();
    if ((int)ppppppppiVar8 < 0) {
      pppppppiStack_1b8 = local_fc[0];
      pppppppiStack_1c0 = (int *******)0x434463;
      pppppppiStack_1bc = (int *******)ppppppppiVar8;
      (*(code *)pppppppiVar17)();
    }
    pppppppiStack_1b8 = (int *******)0x434471;
    iVar7 = __vbaStrCmp();
    __vbaFreeStr();
    if (iVar7 == 0) {
LAB_00434488:
      local_a8 = 0x4009;
      local_a0 = (int *******)&local_1c;
      pppppppiStack_1c0 = (int *******)0x1;
      pppppppiStack_1bc = (int *******)0x4009;
      pppppppiStack_1c4 = (int *******)0x2;
      pppppppiStack_1b8 = local_a4;
      pppppppiStack_1c8 = (int *******)param_1;
      pppppppiStack_1cc = (int *******)0x4344c3;
      __vbaRaiseEvent();
      goto LAB_00434efa;
    }
    local_24 = __vbaI4Str();
  }
  pppppppiStack_1b8 = (int *******)0x4344ed;
  ppppppppiVar8 = (int ********)(*(code *)(**ppppppppiVar15)[0x16])();
  if ((int)ppppppppiVar8 < 0) {
    pppppppiStack_1c0 = *ppppppppiVar15;
    pppppppiStack_1b8 = (int *******)0x58;
    pppppppiStack_1bc = (int *******)&LAB_004133f8;
    pppppppiStack_1c8 = (int *******)0x434500;
    pppppppiStack_1c4 = (int *******)ppppppppiVar8;
    (*(code *)pppppppiVar17)();
  }
  switch(local_e4) {
  case 0:
  case 2:
    while( true ) {
      pppppppiStack_1b8 = local_dc;
      pppppppiStack_1bc = local_fc[0];
      pppppppiStack_1c0 = (int *******)0x434529;
      ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[0x10])();
      if ((int)ppppppppiVar14 < 0) {
        pppppppiStack_1b8 = local_fc[0];
        pppppppiStack_1c0 = (int *******)0x434540;
        pppppppiStack_1bc = (int *******)ppppppppiVar14;
        (*(code *)pppppppiVar17)();
      }
      if ((short)local_dc[0] != 0) break;
      pppppppiStack_1b8 = (int *******)0x43455e;
      ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[0x1e])();
      if ((int)ppppppppiVar14 < 0) {
        pppppppiStack_1b8 = local_fc[0];
        pppppppiStack_1c0 = (int *******)0x434575;
        pppppppiStack_1bc = (int *******)ppppppppiVar14;
        (*(code *)pppppppiVar17)();
      }
      local_30 = (int ******)0x0;
      __vbaStrMove();
      pppppppiStack_1b8 = (int *******)0x434598;
      FUN_004402a0(param_1 + 0x12,&local_34);
      pppppppiStack_1b8 = (int *******)0x4345a1;
      __vbaFreeStr();
    }
    break;
  case 1:
    pppppppiStack_1b8 = &local_30;
    pppppppiStack_1bc = local_fc[0];
    local_20 = 1;
    pppppppiStack_1c0 = (int *******)0x4349aa;
    ppppppppiVar8 = (int ********)(*(code *)(*local_fc[0])[0x1c])();
    if ((int)ppppppppiVar8 < 0) {
      pppppppiStack_1c0 = (int *******)0x70;
      pppppppiStack_1c4 = (int *******)&DAT_00414258;
      pppppppiStack_1c8 = local_fc[0];
      pppppppiStack_1d0 = (int *******)0x4349c1;
      pppppppiStack_1cc = (int *******)ppppppppiVar8;
      (*(code *)pppppppiVar17)();
    }
    local_30 = (int ******)0x0;
    pppppppiStack_1c0 = (int *******)0x4349d4;
    __vbaStrMove();
    iVar7 = local_20;
    do {
      local_20 = iVar7;
      pppppppiStack_1c4 = *ppppppppiVar15;
      pppppppiStack_1c0 = local_dc;
      pppppppiStack_1c8 = (int *******)0x4349e3;
      pppppppiVar9 = (int *******)(*(code *)(*pppppppiStack_1c4)[7])();
      if ((int)pppppppiVar9 < 0) {
        pppppppiStack_1d0 = *ppppppppiVar15;
        pppppppiStack_1c8 = (int *******)0x1c;
        pppppppiStack_1cc = (int *******)&LAB_004133f8;
        pppppppiStack_1d8 = (int *******)0x4349f6;
        pppppppiStack_1d4 = pppppppiVar9;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1c8 = &local_30;
      pppppppiStack_1cc = local_fc[0];
      pppppppiStack_1d0 = (int *******)0x434a06;
      ppppppppiVar8 = (int ********)(*(code *)(*local_fc[0])[7])();
      if ((int)ppppppppiVar8 < 0) {
        pppppppiStack_1d0 = (int *******)0x1c;
        pppppppiStack_1d4 = (int *******)&DAT_00414258;
        pppppppiStack_1d8 = local_fc[0];
        ppppppiStack_1e0 = (int ******)0x434a1d;
        pppppppiStack_1dc = (int *******)ppppppppiVar8;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1d4 = *ppppppppiVar15;
      pppppppiStack_1d0 = (int *******)&local_e0;
      pppppppiStack_1d8 = (int *******)0x434a2c;
      ppppppppiVar8 = (int ********)(*(code *)(*pppppppiStack_1d4)[7])();
      if ((int)ppppppppiVar8 < 0) {
        ppppppiStack_1e0 = (int ******)*ppppppppiVar15;
        pppppppiStack_1d8 = (int *******)0x1c;
        pppppppiStack_1dc = (int *******)&LAB_004133f8;
        pppppppiStack_1e8 = (int *******)0x434a3f;
        pppppppiStack_1e4 = (int *******)ppppppppiVar8;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1d8 = local_28;
      pppppppiStack_1dc = (int *******)local_30;
      ppppppiStack_1e0 = (int ******)0x434a4d;
      iVar7 = __vbaStrCmp();
      uVar4 = (ushort)local_e0;
      bVar18 = local_20 <= local_24;
      uVar3 = (ushort)local_dc[0];
      pppppppiStack_1d8 = (int *******)0x434a83;
      __vbaFreeStr();
      pppppppiStack_1d8 = &local_30;
      pppppppiStack_1dc = local_fc[0];
      if ((ushort)(-(ushort)(iVar7 != 0) & ~uVar4) == 0 && (-(ushort)bVar18 & uVar3) == 0) {
        ppppppiStack_1e0 = (int ******)0x434c2c;
        ppppppppiVar8 = (int ********)(*(code *)(*local_fc[0])[0x1c])();
        if ((int)ppppppppiVar8 < 0) {
          ppppppiStack_1e0 = (int ******)0x70;
          pppppppiStack_1e4 = (int *******)&DAT_00414258;
          pppppppiStack_1e8 = local_fc[0];
          pppppppiStack_1f0 = (int *******)0x434c43;
          pppppppiStack_1ec = (int *******)ppppppppiVar8;
          (*(code *)pppppppiVar17)();
        }
        ppppppiStack_1e0 = &local_34;
        pppppppiStack_1e4 = local_fc[0];
        pppppppiStack_1e8 = (int *******)0x434c53;
        iVar7 = (*(code *)(*local_fc[0])[7])();
        if (iVar7 < 0) {
          pppppppiStack_1e8 = (int *******)0x1c;
          pppppppiStack_1ec = (int *******)&DAT_00414258;
          pppppppiStack_1f0 = local_fc[0];
          (*(code *)pppppppiVar17)(iVar7);
        }
        pppppppiStack_1e8 = (int *******)local_30;
        pppppppiStack_1ec = (int *******)local_34;
        pppppppiStack_1f0 = (int *******)0x434c78;
        iVar7 = __vbaStrCmp();
        pppppppiStack_1e8 = (int *******)&local_34;
        pppppppiStack_1ec = &local_30;
        pppppppiStack_1f0 = (int *******)0x2;
        __vbaFreeStrList();
        if (iVar7 != 0) {
          local_a8 = 0x4009;
          pppppppiStack_1ec = (int *******)&local_1c;
          pppppppiStack_1f0 = local_a4;
          pppppppiStack_1e8 = (int *******)local_9c;
          local_a0 = pppppppiStack_1ec;
          __vbaRaiseEvent(param_1,3,1,0x4009);
        }
        if (*(short *)param_3 != 0) {
          pppppppiStack_1e8 = &local_30;
          pppppppiStack_1ec = local_fc[0];
          pppppppiStack_1f0 = (int *******)0x434cf5;
          iVar7 = (*(code *)(*local_fc[0])[0xf])();
          if (iVar7 < 0) {
            pppppppiStack_1f0 = (int *******)0x3c;
            (*(code *)pppppppiVar17)(iVar7,local_fc[0],&DAT_00414258);
          }
          pppppppiStack_1f0 = (int *******)0x434d17;
          __vbaStrCopy();
          pppppppiStack_1e8 = (int *******)&DAT_00414bb4;
          pppppppiStack_1ec = (int *******)0x0;
          pppppppiStack_1f0 = (int *******)0x434d26;
          pppppppiStack_1e8 = (int *******)__vbaCastObj();
          pppppppiStack_1ec = &local_54;
          pppppppiStack_1f0 = (int *******)0x434d33;
          __vbaObjSet();
          pppppppiStack_1e8 = (int *******)&LAB_0041470c;
          pppppppiStack_1ec = (int *******)0x0;
          pppppppiStack_1f0 = (int *******)0x434d3c;
          pppppppiStack_1e8 = (int *******)__vbaCastObj();
          pppppppiStack_1ec = (int *******)&local_50;
          pppppppiStack_1f0 = (int *******)0x434d43;
          __vbaObjSet();
          local_e4 = 0;
          local_30 = (int ******)0x0;
          pppppppiStack_1e8 = (int *******)0x434d5a;
          __vbaStrMove();
          pppppppiStack_1e8 = &local_58;
          pppppppiStack_1ec = (int *******)&local_38;
          pppppppiStack_1f0 = &local_54;
          iVar7 = (*(code *)(**ppppppppiVar14)[7])(*ppppppppiVar14,&local_34,&local_e4,&local_50);
          if (iVar7 < 0) {
            pppppppiStack_1f0 = *ppppppppiVar14;
            pppppppiStack_1e8 = (int *******)0x1c;
            pppppppiStack_1ec = (int *******)&DAT_00414c50;
            (*(code *)pppppppiVar17)(iVar7);
          }
          pppppppiStack_1e8 = (int *******)&local_38;
          pppppppiStack_1ec = (int *******)&local_34;
          pppppppiStack_1f0 = (int *******)0x2;
          __vbaFreeStrList();
          __vbaFreeObjList(3,&local_50,&local_54,&local_58);
        }
        pppppppiStack_1e8 = local_dc;
        pppppppiStack_1ec = *ppppppppiVar15;
        pppppppiStack_1f0 = (int *******)0x434dd2;
        ppppppppiVar14 = (int ********)(*(code *)(*pppppppiStack_1ec)[0xd])();
        if ((int)ppppppppiVar14 < 0) {
          pppppppiStack_1b8 = *ppppppppiVar15;
          pppppppiStack_1c0 = (int *******)0x434de5;
          pppppppiStack_1bc = (int *******)ppppppppiVar14;
          (*(code *)pppppppiVar17)();
        }
        if ((short)local_dc[0] != 0) {
          ppppppppiVar14 = (int ********)*param_2;
          pppppppiStack_1b8 = (int *******)0x434e05;
          ppppppppiVar15 = (int ********)(*(code *)(*ppppppppiVar14)[0x1c])();
          if ((int)ppppppppiVar15 < 0) {
            pppppppiStack_1c0 = (int *******)0x434e1a;
            pppppppiStack_1bc = (int *******)ppppppppiVar15;
            pppppppiStack_1b8 = (int *******)ppppppppiVar14;
            (*(code *)pppppppiVar17)();
          }
        }
        goto LAB_00434ef1;
      }
      ppppppiStack_1e0 = (int ******)0x434a9c;
      ppppppppiVar8 = (int ********)(*(code *)(*local_fc[0])[7])();
      if ((int)ppppppppiVar8 < 0) {
        pppppppiStack_1b8 = local_fc[0];
        pppppppiStack_1c0 = (int *******)0x434ab3;
        pppppppiStack_1bc = (int *******)ppppppppiVar8;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1b8 = (int *******)0x434ac1;
      iVar7 = __vbaStrCmp();
      __vbaFreeStr();
      if (iVar7 == 0) goto LAB_00434488;
      pppppppiStack_1b8 = (int *******)0x434ae6;
      pppppppiStack_1c4 = (int *******)(*(code *)(*param_1)[0x1b])();
      if ((int)pppppppiStack_1c4 < 0) {
        pppppppiStack_1b8 = (int *******)0x6c;
        pppppppiStack_1bc = (int *******)&LAB_004133e8;
        pppppppiStack_1c0 = (int *******)param_1;
        pppppppiStack_1c8 = (int *******)0x434af5;
        (*(code *)pppppppiVar17)();
      }
      pppppppiVar9 = local_50;
      pppppppiStack_1b8 = &local_54;
      pppppppiStack_1bc = (int *******)&local_28;
      pppppppiStack_1c4 = local_50;
      pppppppiStack_1c8 = (int *******)0x434b0f;
      pppppppiStack_1c0 = (int *******)ppppppppiVar15;
      pppppppiVar11 = (int *******)(*(code *)(*local_50)[7])();
      if ((int)pppppppiVar11 < 0) {
        pppppppiStack_1c8 = (int *******)0x1c;
        pppppppiStack_1cc = (int *******)&DAT_004146fc;
        pppppppiStack_1d0 = pppppppiVar9;
        pppppppiStack_1d8 = (int *******)0x434b20;
        pppppppiStack_1d4 = pppppppiVar11;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1c8 = (int *******)local_54;
      local_54 = (int ******)0x0;
      pppppppiStack_1cc = (int *******)&local_2c;
      pppppppiStack_1d0 = (int *******)0x434b35;
      __vbaObjSet();
      pppppppiStack_1c8 = (int *******)0x434b3e;
      __vbaFreeObj();
      pppppppiStack_1c8 = local_28;
      pppppppiStack_1cc = local_2c;
      pppppppiStack_1d0 = (int *******)0x434b4b;
      ppppppppiVar8 = (int ********)(*(code *)(*local_2c)[10])();
      if ((int)ppppppppiVar8 < 0) {
        pppppppiStack_1d0 = (int *******)0x28;
        pppppppiStack_1d4 = (int *******)&LAB_0041470c;
        pppppppiStack_1d8 = local_2c;
        ppppppiStack_1e0 = (int ******)0x434b5f;
        pppppppiStack_1dc = (int *******)ppppppppiVar8;
        (*(code *)pppppppiVar17)();
      }
      ppppiVar2 = *param_1;
      pppppppiStack_1d4 = (int *******)&local_50;
      pppppppiStack_1d0 = local_2c;
      pppppppiStack_1d8 = (int *******)0x434b6f;
      pppppppiStack_1d0 = (int *******)__vbaObjSetAddref();
      pppppppiStack_1d4 = (int *******)param_1;
      pppppppiStack_1d8 = (int *******)0x434b77;
      ppppppppiVar8 = (int ********)(*(code *)ppppiVar2[0x2e])();
      if ((int)ppppppppiVar8 < 0) {
        pppppppiStack_1d8 = (int *******)0xb8;
        pppppppiStack_1dc = (int *******)&LAB_004133e8;
        ppppppiStack_1e0 = (int ******)param_1;
        pppppppiStack_1e8 = (int *******)0x434b8b;
        pppppppiStack_1e4 = (int *******)ppppppppiVar8;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1d8 = (int *******)0x434b94;
      __vbaFreeObj();
      pppppppiStack_1d8 = local_dc;
      ppppppiStack_1e0 = (int ******)param_3;
      pppppppiStack_1e4 = (int *******)&local_1c;
      pppppppiStack_1e8 = local_2c;
      pppppppiStack_1ec = (int *******)0x434bb3;
      pppppppiStack_1dc = (int *******)ppppppppiVar14;
      ppppppppiVar8 = (int ********)(*(code *)(*local_2c)[0x14])();
      if ((int)ppppppppiVar8 < 0) {
        pppppppiStack_1b8 = local_2c;
        pppppppiStack_1c0 = (int *******)0x434bc7;
        pppppppiStack_1bc = (int *******)ppppppppiVar8;
        (*(code *)pppppppiVar17)();
      }
      if ((short)local_dc[0] != 0) goto LAB_00434efa;
      pppppppiStack_1b8 = (int *******)0x434be5;
      ppppppppiVar8 = (int ********)local_fc[0];
      ppppppppiVar12 = (int ********)(*(code *)(*local_fc[0])[0x1c])();
      if ((int)ppppppppiVar12 < 0) {
        pppppppiStack_1c0 = (int *******)0x70;
        pppppppiStack_1c4 = (int *******)&DAT_00414258;
        pppppppiStack_1c8 = local_fc[0];
        pppppppiStack_1d0 = (int *******)0x434bfc;
        pppppppiStack_1cc = (int *******)ppppppppiVar12;
        (*(code *)pppppppiVar17)();
      }
      local_30 = (int ******)0x0;
      pppppppiStack_1c0 = (int *******)0x434c0f;
      __vbaStrMove();
      pppppiVar16 = param_1;
      iVar7 = local_20 + 1;
    } while (!SCARRY4(local_20,1));
    goto LAB_004350a0;
  case 3:
    pppppppiStack_1b8 = &local_30;
    pppppppiStack_1bc = local_fc[0];
    pppppiVar16 = (int *****)0x1;
    pppppppiStack_1c0 = (int *******)0x4345bb;
    ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[0x1c])();
    if ((int)ppppppppiVar14 < 0) {
      pppppppiStack_1c0 = (int *******)0x70;
      pppppppiStack_1c4 = (int *******)&DAT_00414258;
      pppppppiStack_1c8 = local_fc[0];
      pppppppiStack_1d0 = (int *******)0x4345d2;
      pppppppiStack_1cc = (int *******)ppppppppiVar14;
      (*(code *)pppppppiVar17)();
    }
    local_30 = (int ******)0x0;
    pppppppiStack_1c0 = (int *******)0x4345e5;
    __vbaStrMove();
    do {
      pppppppiStack_1c0 = local_dc;
      pppppiVar1 = param_1 + 0x15;
      pppppppiStack_1c4 = (int *******)param_1[0x15];
      pppppppiStack_1c8 = (int *******)0x4345fb;
      pppppppiVar9 = (int *******)(*(code *)(*pppppppiStack_1c4)[7])();
      if ((int)pppppppiVar9 < 0) {
        pppppppiStack_1d0 = (int *******)*pppppiVar1;
        pppppppiStack_1c8 = (int *******)0x1c;
        pppppppiStack_1cc = (int *******)&LAB_004133f8;
        pppppppiStack_1d8 = (int *******)0x43460e;
        pppppppiStack_1d4 = pppppppiVar9;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1c8 = &local_30;
      pppppppiStack_1cc = local_fc[0];
      pppppppiStack_1d0 = (int *******)0x43461e;
      ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[7])();
      if ((int)ppppppppiVar14 < 0) {
        pppppppiStack_1d0 = (int *******)0x1c;
        pppppppiStack_1d4 = (int *******)&DAT_00414258;
        pppppppiStack_1d8 = local_fc[0];
        ppppppiStack_1e0 = (int ******)0x434635;
        pppppppiStack_1dc = (int *******)ppppppppiVar14;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1d4 = (int *******)*pppppiVar1;
      pppppppiStack_1d0 = (int *******)&local_e0;
      pppppppiStack_1d8 = (int *******)0x434644;
      ppppppppiVar14 = (int ********)(*(code *)(*pppppppiStack_1d4)[7])();
      if ((int)ppppppppiVar14 < 0) {
        ppppppiStack_1e0 = (int ******)*pppppiVar1;
        pppppppiStack_1d8 = (int *******)0x1c;
        pppppppiStack_1dc = (int *******)&LAB_004133f8;
        pppppppiStack_1e8 = (int *******)0x434657;
        pppppppiStack_1e4 = (int *******)ppppppppiVar14;
        (*(code *)pppppppiVar17)();
      }
      pppppppiStack_1d8 = local_28;
      pppppppiStack_1dc = (int *******)local_30;
      ppppppiStack_1e0 = (int ******)0x434665;
      iVar7 = __vbaStrCmp();
      uVar4 = (ushort)local_e0;
      bVar18 = (int)pppppiVar16 <= local_24;
      uVar3 = (ushort)local_dc[0];
      pppppppiStack_1d8 = (int *******)0x434698;
      __vbaFreeStr();
      if ((ushort)(-(ushort)(iVar7 != 0) & ~uVar4) == 0 && (-(ushort)bVar18 & uVar3) == 0) {
        pppppppiStack_1d8 = &local_30;
        pppppppiStack_1dc = local_fc[0];
        ppppppiStack_1e0 = (int ******)0x4347fa;
        ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[0x1c])();
        if ((int)ppppppppiVar14 < 0) {
          ppppppiStack_1e0 = (int ******)0x70;
          pppppppiStack_1e4 = (int *******)&DAT_00414258;
          pppppppiStack_1e8 = local_fc[0];
          pppppppiStack_1f0 = (int *******)0x434811;
          pppppppiStack_1ec = (int *******)ppppppppiVar14;
          (*(code *)pppppppiVar17)();
        }
        ppppppiStack_1e0 = &local_34;
        pppppppiStack_1e4 = local_fc[0];
        pppppppiStack_1e8 = (int *******)0x434821;
        ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[7])();
        if ((int)ppppppppiVar14 < 0) {
          pppppppiStack_1b8 = local_fc[0];
          pppppppiStack_1c0 = (int *******)0x434838;
          pppppppiStack_1bc = (int *******)ppppppppiVar14;
          (*(code *)pppppppiVar17)();
        }
        pppppppiStack_1b8 = (int *******)0x434846;
        iVar7 = __vbaStrCmp();
        pppppppiStack_1b8 = (int *******)0x2;
        pppppppiStack_1bc = (int *******)0x434860;
        __vbaFreeStrList();
        if (iVar7 != 0) {
          local_a8 = 0x4009;
          local_a0 = (int *******)&local_1c;
          pppppppiStack_1c0 = (int *******)0x1;
          pppppppiStack_1bc = (int *******)0x4009;
          pppppppiStack_1c4 = (int *******)0x3;
          pppppppiStack_1b8 = local_a4;
          pppppppiStack_1c8 = (int *******)param_1;
          pppppppiStack_1cc = (int *******)0x4348a6;
          __vbaRaiseEvent();
        }
        if (*(short *)param_3 != 0) {
          pppppppiStack_1b8 = (int *******)0x4348c6;
          ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[0xf])();
          if ((int)ppppppppiVar14 < 0) {
            pppppppiStack_1b8 = (int *******)0x3c;
            pppppppiStack_1bc = (int *******)&DAT_00414258;
            pppppppiStack_1c0 = local_fc[0];
            pppppppiStack_1c8 = (int *******)0x4348dd;
            pppppppiStack_1c4 = (int *******)ppppppppiVar14;
            (*(code *)pppppppiVar17)();
          }
          pppppppiStack_1b8 = (int *******)0x4348e8;
          __vbaStrCopy();
          pppppppiStack_1b8 = (int *******)0x4348f7;
          __vbaCastObj();
          pppppppiStack_1b8 = (int *******)0x434904;
          __vbaObjSet();
          pppppppiStack_1b8 = (int *******)0x43490d;
          __vbaCastObj();
          pppppppiStack_1b8 = (int *******)0x434914;
          __vbaObjSet();
          local_e4 = 0;
          local_30 = (int ******)0x0;
          __vbaStrMove();
          pppppppiStack_1c8 = (int *******)param_1[0x1b];
          pppppppiStack_1b8 = &local_54;
          pppppppiStack_1bc = (int *******)&local_50;
          pppppppiStack_1c0 = (int *******)&local_e4;
          pppppppiStack_1c4 = (int *******)&local_34;
          pppppppiStack_1cc = (int *******)0x434954;
          pppppppiStack_1bc = (int *******)(*(code *)(*pppppppiStack_1c8)[7])();
          if ((int)pppppppiStack_1bc < 0) {
            pppppppiStack_1b8 = (int *******)param_1[0x1b];
            pppppppiStack_1c0 = (int *******)0x434967;
            (*(code *)pppppppiVar17)();
          }
          pppppppiStack_1b8 = (int *******)0x2;
          pppppppiStack_1bc = (int *******)0x434977;
          __vbaFreeStrList();
          pppppppiStack_1bc = &local_58;
          pppppppiStack_1c0 = &local_54;
          pppppppiStack_1c4 = (int *******)&local_50;
          pppppppiStack_1c8 = (int *******)0x3;
          pppppppiStack_1cc = (int *******)0x43498b;
          __vbaFreeObjList();
        }
        goto LAB_00434ef1;
      }
      pppppppiStack_1d8 = (int *******)&local_50;
      pppppppiStack_1dc = (int *******)param_1;
      ppppppiStack_1e0 = (int ******)0x4346ae;
      pppppppiStack_1ec = (int *******)(*(code *)(*param_1)[0x1b])();
      if ((int)pppppppiStack_1ec < 0) {
        ppppppiStack_1e0 = (int ******)0x6c;
        pppppppiStack_1e4 = (int *******)&LAB_004133e8;
        pppppppiStack_1e8 = (int *******)param_1;
        pppppppiStack_1f0 = (int *******)0x4346bd;
        (*(code *)pppppppiVar17)();
      }
      pppppppiVar9 = local_50;
      ppppppiStack_1e0 = (int ******)&local_54;
      pppppppiStack_1e4 = (int *******)&local_28;
      pppppppiStack_1e8 = (int *******)(param_1 + 0x15);
      pppppppiStack_1ec = local_50;
      pppppppiStack_1f0 = (int *******)0x4346d7;
      iVar7 = (*(code *)(*local_50)[7])();
      if (iVar7 < 0) {
        pppppppiStack_1f0 = (int *******)0x1c;
        (*(code *)pppppppiVar17)(iVar7,pppppppiVar9,&DAT_004146fc);
      }
      pppppppiStack_1f0 = (int *******)local_54;
      local_54 = (int ******)0x0;
      __vbaObjSet(&local_2c);
      pppppppiStack_1f0 = (int *******)0x434706;
      __vbaFreeObj();
      pppppppiStack_1f0 = local_28;
      iVar7 = (*(code *)(*local_2c)[10])(local_2c);
      if (iVar7 < 0) {
        (*(code *)pppppppiVar17)(iVar7,local_2c,&LAB_0041470c,0x28);
      }
      ppppiVar2 = *param_1;
      uVar10 = __vbaObjSetAddref(&local_50,local_2c);
      iVar7 = (*(code *)ppppiVar2[0x2e])(param_1,uVar10);
      if (iVar7 < 0) {
        (*(code *)pppppppiVar17)(iVar7,param_1,&LAB_004133e8,0xb8);
      }
      __vbaFreeObj();
      ppppppppiVar15 = (int ********)(param_1 + 0x1b);
      ppppppppiVar14 =
           (int ********)
           (*(code *)(*local_2c)[0x14])(local_2c,&local_1c,param_3,ppppppppiVar15,local_dc);
      if ((int)ppppppppiVar14 < 0) {
        pppppppiStack_1b8 = local_2c;
        pppppppiStack_1c0 = (int *******)0x434794;
        pppppppiStack_1bc = (int *******)ppppppppiVar14;
        (*(code *)pppppppiVar17)();
      }
      if ((short)local_dc[0] != 0) goto LAB_00434efa;
      pppppppiStack_1b8 = (int *******)0x4347b2;
      ppppppppiVar8 = (int ********)local_fc[0];
      ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[0x1c])();
      if ((int)ppppppppiVar14 < 0) {
        pppppppiStack_1c0 = (int *******)0x70;
        pppppppiStack_1c4 = (int *******)&DAT_00414258;
        pppppppiStack_1c8 = local_fc[0];
        pppppppiStack_1d0 = (int *******)0x4347c9;
        pppppppiStack_1cc = (int *******)ppppppppiVar14;
        (*(code *)pppppppiVar17)();
      }
      local_30 = (int ******)0x0;
      pppppppiStack_1c0 = (int *******)0x4347dc;
      __vbaStrMove();
      bVar18 = SCARRY4((int)pppppiVar16,1);
      pppppiVar16 = (int *****)((int)pppppiVar16 + 1);
    } while (!bVar18);
LAB_004350a0:
    pppppppiStack_1c0 = (int *******)0x4350a6;
    __vbaErrorOverflow();
    pppppppiStack_1cc = (int *******)&LAB_004032d6;
    pppppppiStack_1d0 = ExceptionList;
    pppppppiStack_1c8 = (int *******)&pppppppiStack_1f0;
    pppppppiStack_1c4 = (int *******)&DAT_00401ac0;
    pppppppiStack_1c0 = (int *******)0x0;
    ExceptionList = &pppppppiStack_1d0;
    pppppppiStack_1f0 = pppppppiVar17;
    pppppppiStack_1ec = (int *******)ppppppppiVar15;
    pppppppiStack_1e8 = (int *******)pppppiVar16;
    pppppppiStack_1bc = (int *******)&stack0xfffffffc;
    (*(code *)(*ppppppppiVar8)[1])(ppppppppiVar8);
    pppppppiStack_1d4 = (int *******)0x0;
    iVar7 = (*(code *)(*ppppppppiVar8[0x16])[0xf])(ppppppppiVar8[0x16]);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,ppppppppiVar8[0x16],&DAT_004146fc,0x3c);
    }
    *(undefined2 *)((int)ppppppppiVar8 + 0x42) = 0;
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar6 = DAT_0047f074;
    __vbaObjSetAddref(&pppppppiStack_1d4,ppppppppiVar8);
    iVar7 = (**(code **)(*piVar6 + 0x720))(piVar6,&pppppppiStack_1d4);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar6,&DAT_00413d78,0x720);
    }
    __vbaFreeObj();
    return;
  default:
    pppppppiStack_1b8 = (int *******)0x434e25;
    pppppppiStack_1b8 = (int *******)rtcErrObj();
    pppppppiStack_1bc = (int *******)&local_50;
    pppppppiStack_1c0 = (int *******)0x434e30;
    ppppppppiVar14 = (int ********)__vbaObjSet();
    local_90 = 0x80020004;
    local_80 = 0x80020004;
    local_98[0] = (int ******)0xa;
    local_88[0] = 10;
    local_b0 = L"Invalid file format in sub Import";
    local_b8 = 8;
    pppppppiStack_1b8 = (int *******)0x434e76;
    __vbaVarDup();
    local_a0 = (int *******)0x413024;
    local_a8 = 8;
    pppppppiStack_1b8 = (int *******)0x434e95;
    __vbaVarDup();
    pppppppiStack_1b8 = local_98;
    pppppppiStack_1bc = (int *******)local_88;
    pppppppiStack_1c0 = local_78;
    pppppppiStack_1c4 = local_68;
    pppppppiStack_1c8 = (int *******)0x410;
    pppppppiStack_1d0 = (int *******)0x434eb6;
    pppppppiStack_1cc = (int *******)ppppppppiVar14;
    puVar13 = (undefined4 *)(*(code *)(*ppppppppiVar14)[0x11])();
    if ((int)puVar13 < 0) {
      pppppppiStack_1c0 = (int *******)0x434ec7;
      pppppppiStack_1bc = (int *******)puVar13;
      pppppppiStack_1b8 = (int *******)ppppppppiVar14;
      (*(code *)pppppppiVar17)();
    }
    __vbaFreeObj();
    pppppppiStack_1b8 = local_78;
    pppppppiStack_1bc = local_68;
    pppppppiStack_1c0 = (int *******)0x4;
    pppppppiStack_1c4 = (int *******)0x434eee;
    __vbaFreeVarList();
  }
LAB_00434ef1:
  *(undefined2 *)((int)param_1 + 0x42) = 0xffff;
LAB_00434efa:
  ppppppppiVar14 = (int ********)(*(code *)(*local_fc[0])[0x12])();
  if ((int)ppppppppiVar14 < 0) {
    pppppppiStack_1b8 = (int *******)&DAT_00414258;
    pppppppiStack_1bc = local_fc[0];
    pppppppiStack_1c4 = (int *******)0x434f1d;
    pppppppiStack_1c0 = (int *******)ppppppppiVar14;
    (*(code *)pppppppiVar17)();
  }
  pppppppiStack_1b8 = (int *******)local_fc;
  pppppppiStack_1bc = (int *******)0x434f2c;
  __vbaObjSetAddref();
  if (DAT_0047f074 == (int *)0x0) {
    pppppppiStack_1b8 = (int *******)&DAT_0040dbb8;
    pppppppiStack_1bc = (int *******)0x434f45;
    __vbaNew2();
  }
  piVar6 = DAT_0047f074;
  __vbaStrCopy();
  ppppppppiVar14 = (int ********)(**(code **)(*piVar6 + 0x724))();
  if ((int)ppppppppiVar14 < 0) {
    pppppppiStack_1b8 = (int *******)&DAT_00413d78;
    pppppppiStack_1bc = (int *******)piVar6;
    pppppppiStack_1c4 = (int *******)0x434f7a;
    pppppppiStack_1c0 = (int *******)ppppppppiVar14;
    (*(code *)pppppppiVar17)();
  }
  __vbaFreeStr();
  if (DAT_00480244 == (int ********)0x0) {
    pppppppiStack_1b8 = (int *******)&DAT_00413b34;
    pppppppiStack_1bc = (int *******)0x434f9c;
    __vbaNew2();
  }
  ppppppppiVar14 = DAT_00480244;
  pppppppiStack_1b8 = (int *******)DAT_00480244;
  pppppppiStack_1bc = (int *******)0x434fac;
  ppppppppiVar15 = (int ********)(*(code *)(*DAT_00480244)[6])();
  if ((int)ppppppppiVar15 < 0) {
    pppppppiStack_1bc = (int *******)0x18;
    pppppppiStack_1c0 = (int *******)&DAT_00413b24;
    pppppppiStack_1c4 = (int *******)ppppppppiVar14;
    pppppppiStack_1cc = (int *******)0x434fbd;
    pppppppiStack_1c8 = (int *******)ppppppppiVar15;
    (*(code *)pppppppiVar17)();
  }
  pppppppiVar11 = local_50;
  pppppppiVar9 = (int *******)*local_50;
  pppppppiStack_1bc = (int *******)0x434fca;
  pppppppiStack_1b8 = (int *******)__vbaI2I4();
  pppppppiStack_1bc = pppppppiVar11;
  pppppppiStack_1c0 = (int *******)0x434fcf;
  ppppppppiVar14 = (int ********)(*(code *)pppppppiVar9[0x1f])();
  if ((int)ppppppppiVar14 < 0) {
    pppppppiStack_1c0 = (int *******)0x7c;
    pppppppiStack_1c4 = (int *******)&DAT_0041490c;
    pppppppiStack_1c8 = pppppppiVar11;
    pppppppiStack_1d0 = (int *******)0x434fe0;
    pppppppiStack_1cc = (int *******)ppppppppiVar14;
    (*(code *)pppppppiVar17)();
  }
  pppppppiStack_1c0 = (int *******)0x434fe9;
  __vbaFreeObj();
  pppppppiStack_1c0 = (int *******)&LAB_00435070;
  pppppppiStack_1c4 = (int *******)0x43505c;
  __vbaFreeObj();
  pppppppiStack_1c4 = (int *******)0x435061;
  __vbaFreeObj();
  pppppppiStack_1c4 = (int *******)0x43506a;
  __vbaFreeStr();
  pppppppiStack_1c4 = (int *******)0x43506f;
  __vbaFreeObj();
  return;
}

/* ---- 0x4350b0 (FUN_004350b0) [estimated] strings:  ---- */
void __cdecl FUN_004350b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401ac0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x3c))((int *)param_1[0x16]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x16],&DAT_004146fc,0x3c);
  }
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  __vbaObjSetAddref(&local_1c,param_1);
  iVar2 = (**(code **)(*piVar1 + 0x720))(piVar1,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x720);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x4351a0 (FUN_004351a0) [estimated] strings:  ---- */
void __cdecl FUN_004351a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401ad0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x70))(param_1,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&LAB_004133e8,0x70);
  }
  piVar1 = local_1c;
  iVar2 = (**(code **)(*local_1c + 0x7c))(local_1c,param_1 + 0x18,param_1 + 0x19,param_1 + 0x17);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&LAB_004133f8,0x7c);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x435260 (FUN_00435260) [estimated] strings:  ---- */
void __cdecl FUN_00435260(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401ae0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x80))((int *)param_1[0x15]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x15],&LAB_004133f8,0x80);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x3c))((int *)param_1[0x16]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x16],&DAT_004146fc,0x3c);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x1b] + 0x34))((int *)param_1[0x1b]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x1b],&DAT_00414c50,0x34);
  }
  uVar2 = __vbaCastObj(0,&DAT_004146fc);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  __vbaObjSetAddref(param_1 + 0x16,uVar2);
  __vbaFreeObj();
  uVar2 = __vbaCastObj(0,&LAB_004133f8);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  __vbaObjSetAddref(param_1 + 0x15,uVar2);
  __vbaFreeObj();
  uVar2 = __vbaCastObj(0,&DAT_00414238);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  __vbaObjSetAddref(param_1 + 0x1a,uVar2);
  __vbaFreeObj();
  uVar2 = __vbaCastObj(0,&DAT_00414c50);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  __vbaObjSetAddref(param_1 + 0x1b,uVar2);
  __vbaFreeObj();
  return;
}

/* ---- 0x4353e0 (FUN_004353e0) [estimated] strings:  ---- */
void __cdecl FUN_004353e0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &LAB_00401af0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaNew(&DAT_004085d0);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x15,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaNew(&DAT_004077b8);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x16,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaNew(&DAT_00406900);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x1a,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaNew(&DAT_00406d98);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x1b,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x435500 (FUN_00435500) [estimated] strings:  ---- */
void __cdecl FUN_00435500(uint param_1)

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
  local_c = &DAT_00401b00;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaCastObj(0,&DAT_004146fc);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x16,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&LAB_004133f8);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x15,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_00414238);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x1a,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x435600 (FUN_00435600) [estimated] strings:  ---- */
undefined4 FUN_00435600(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffb4;
  local_c = &DAT_00401b10;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,1,2,0x4008,local_34,param_3,local_2c,0x4009,local_24,param_2,local_1c);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4356b0 (FUN_004356b0) [estimated] strings:  ---- */
undefined4 FUN_004356b0(uint param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00401b18;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,2,1,0x4009,local_24,param_2,local_1c);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x435750 (FUN_00435750) [estimated] strings:  ---- */
undefined4 FUN_00435750(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffa4;
  local_c = &DAT_00401b20;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,4,3,0x4008,local_44,param_4,local_3c,0x4008,local_34,param_3,local_2c,
                  0x4009,local_24,param_2,local_1c);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x435820 (FUN_00435820) [estimated] strings:  ---- */
undefined4 FUN_00435820(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffb4;
  local_c = &DAT_00401b28;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaRaiseEvent(piVar1,5,2,0x4008,local_34,param_3,local_2c,0x4009,local_24,param_2,local_1c);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}
