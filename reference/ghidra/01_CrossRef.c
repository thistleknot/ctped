/* Object #1 CrossRef -- ESTIMATED function range; public methods per VB header: File, Field, TagString, TagString, ReadFromFile */
#include "ghidra_types.h"

/* ---- 0x4231c0 (FUN_004231c0) [estimated] strings:  ---- */
void __cdecl FUN_004231c0(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401338;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  sVar1 = __vbaObjIs(param_1[0xf],0);
  if (sVar1 != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  __vbaObjSetAddref(&local_1c,param_1[0xf]);
  return;
}

/* ---- 0x423260 (FUN_00423260) [estimated] strings:  ---- */
void __cdecl FUN_00423260(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &LAB_00401348;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  sVar1 = __vbaObjIs(param_1[0x11],0);
  if (sVar1 != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  __vbaObjSetAddref(&local_1c,param_1[0x11]);
  return;
}

/* ---- 0x423300 (FUN_00423300) [estimated] strings:  ---- */
void __cdecl FUN_00423300(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401358;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x423390 (FUN_00423390) [estimated] strings:  ---- */
undefined4 FUN_00423390(int *param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00401368;
  local_8 = 0;
  ExceptionList = &local_18;
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaStrCopy(piVar1);
  (**(code **)(*param_1 + 8))();
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x423400 (FUN_00423400) [estimated] strings:  ---- */
void __cdecl FUN_00423400(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_30 [2];
  int local_28;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffa8;
  local_8 = &DAT_00401370;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_30[0] = 0;
  ExceptionList = &pvStack_14;
  puVar3 = &stack0xffffffa8;
  if (DAT_0047f074 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    puVar3 = local_c;
  }
  local_c = puVar3;
  piVar2 = DAT_0047f074;
  iVar4 = (**(code **)(*DAT_0047f074 + 0x6f8))(DAT_0047f074,&local_18);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&DAT_00413d78,0x6f8);
  }
  piVar2 = local_18;
  iVar4 = (**(code **)(*local_18 + 0x44))(local_18,&local_1c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&LAB_00414228,0x44);
  }
  piVar2 = local_1c;
  local_30[0] = 0x4008;
  local_28 = param_1 + 0x38;
  iVar4 = (**(code **)(*local_1c + 0x24))(local_1c,local_30,&local_20);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&DAT_00414238,0x24);
  }
  puVar1 = (undefined4 *)(param_1 + 0x3c);
  __vbaObjSetAddref(puVar1,local_20);
  __vbaFreeObjList(3,&local_18,&local_1c,&local_20);
  iVar4 = (**(code **)(*(int *)*puVar1 + 0x70))((int *)*puVar1,&local_18);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,*puVar1,&LAB_004133e8,0x70);
  }
  piVar2 = local_18;
  iVar4 = (**(code **)(*local_18 + 0x6c))(local_18,&local_1c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&LAB_004133f8,0x6c);
  }
  piVar2 = local_1c;
  local_28 = param_1 + 0x40;
  local_30[0] = 0x4008;
  iVar4 = (**(code **)(*local_1c + 0x20))(local_1c,local_30,&local_20);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&LAB_00414248,0x20);
  }
  __vbaObjSetAddref(param_1 + 0x44,local_20);
  __vbaFreeObjList(3,&local_18,&local_1c,&local_20);
  return;
}

/* ---- 0x4235d0 (FUN_004235d0) [estimated] strings:  ---- */
void __cdecl FUN_004235d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *local_24 [2];
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401380;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_24[0] = (int *)0x0;
  __vbaObjSetAddref(local_24,*param_2);
  puVar3 = &local_1c;
  piVar2 = local_24[0];
  iVar1 = (**(code **)(*local_24[0] + 0x70))(local_24[0],puVar3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24[0],&DAT_00414258,0x70);
  }
  __vbaStrCopy(piVar2,puVar3);
  __vbaFreeStr();
  puVar3 = &local_1c;
  piVar2 = local_24[0];
  iVar1 = (**(code **)(*local_24[0] + 0x70))(local_24[0],puVar3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_24[0],&DAT_00414258,0x70);
  }
  __vbaStrCopy(piVar2,puVar3);
  __vbaFreeStr();
  __vbaObjSetAddref(local_24,0);
  __vbaFreeObj(&LAB_004236b4);
  return;
}

/* ---- 0x4236e0 (FUN_004236e0) [estimated] strings:  ---- */
void __cdecl FUN_004236e0(int *param_1)

{
  undefined4 uVar1;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401390;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  uVar1 = __vbaCastObj(0,&LAB_004133e8);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(param_1 + 0xf,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_00414268);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(param_1 + 0x11,uVar1);
  __vbaFreeObj();
  return;
}
