/* Object #22 frmEditingNoStructure -- ESTIMATED function range; public methods per VB header: Update, EditingForm_Destroy, EditingForm_File, EditingForm_File, EditingForm_JumpTo */
#include "ghidra_types.h"

/* ---- 0x45e520 (FUN_0045e520) [estimated] strings:  ---- */
undefined4 FUN_0045e520(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_004029a8;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaObjSetAddref(piVar1 + 0x10,*param_2);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45e5a0 (FUN_0045e5a0) [estimated] strings:  ---- */
void __cdecl FUN_0045e5a0(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_004029b0;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,piVar1[0x10]);
  return;
}

/* ---- 0x45e640 (FUN_0045e640) [estimated] strings:  ---- */
undefined4 FUN_0045e640(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_004029c0;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45e6b0 (FUN_0045e6b0) [estimated] strings:  ---- */
void __cdecl FUN_0045e6b0(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff48;
  local_c = &DAT_004029c8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  piVar5 = piVar4;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  sVar1 = __vbaObjIs(piVar4[0x10],0);
  if (sVar1 == 0) {
    uVar2 = rtcErrObj();
    piVar4 = (int *)__vbaObjSet(&local_1c,uVar2);
    local_54 = 0x80020004;
    local_44 = 0x80020004;
    local_5c[0] = 10;
    local_4c[0] = 10;
    __vbaVarDup();
    __vbaVarDup();
    iVar3 = (**(code **)(*piVar4 + 0x44))(piVar4,0x400,local_2c,local_3c,local_4c,local_5c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_2c,local_3c,local_4c,local_5c);
  }
  __vbaStrCopy(piVar5);
  return;
}

/* ---- 0x45e830 (FUN_0045e830) [estimated] strings:  ---- */
void __cdecl FUN_0045e830(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_004029d8;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  *param_2 = 0;
  __vbaStrCopy(piVar1);
  return;
}

/* ---- 0x45e8d0 (FUN_0045e8d0) [estimated] strings:  ---- */
void __cdecl FUN_0045e8d0(uint param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff44;
  local_c = &DAT_004029e8;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  sVar1 = __vbaObjIs(piVar5[0xf],0);
  if (sVar1 == 0) {
    uVar2 = rtcErrObj();
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
    local_54 = 0x80020004;
    local_44 = 0x80020004;
    local_5c[0] = 10;
    local_4c[0] = 10;
    __vbaVarDup();
    __vbaVarDup();
    iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3,0x400,local_2c,local_3c,local_4c,local_5c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_2c,local_3c,local_4c,local_5c);
  }
  __vbaObjSetAddref(piVar5 + 0xf,*param_2);
  return;
}

/* ---- 0x45ea60 (FUN_0045ea60) [estimated] strings:  ---- */
undefined4 FUN_0045ea60(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_004029f8;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaObjSetAddref(piVar1 + 0xe,*param_2);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45eae0 (FUN_0045eae0) [estimated] strings:  ---- */
void __cdecl FUN_0045eae0(uint param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff44;
  local_c = &DAT_00402a00;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  *param_2 = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  sVar1 = __vbaObjIs(piVar5[0xe],0);
  if (sVar1 == 0) {
    uVar2 = rtcErrObj();
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    local_58 = 0x80020004;
    local_48 = 0x80020004;
    local_60[0] = 10;
    local_50[0] = 10;
    __vbaVarDup();
    __vbaVarDup();
    iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3,0x400,local_30,local_40,local_50,local_60);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
  }
  __vbaObjSetAddref(&local_1c,piVar5[0xe]);
  return;
}

/* ---- 0x45ec80 (FUN_0045ec80) [estimated] strings:  ---- */
undefined4 FUN_0045ec80(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402a10;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar1 + 0x710))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45ecf0 (FUN_0045ecf0) [estimated] strings:  ---- */
undefined4 FUN_0045ecf0(uint param_1)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402a18;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x2a8))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_0041358c,0x2a8);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45ed80 (FUN_0045ed80) [estimated] strings:  ---- */
undefined4 FUN_0045ed80(uint param_1)

{
  int iVar1;
  int *piVar2;
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
  local_10 = &stack0xffffffb0;
  local_c = &DAT_00402a20;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x2b0))
                    (piVar2,10,local_24,0x80020004,local_1c,10,local_34,0x80020004,local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_0041358c,0x2b0);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45ee50 (FUN_0045ee50) [estimated] strings:  ---- */
undefined4 FUN_0045ee50(uint param_1)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402a28;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x70c))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_004135bc,0x70c);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45eee0 (FUN_0045eee0) [estimated] strings:  ---- */
void __cdecl FUN_0045eee0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &LAB_00402a30;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x80))(piVar2,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x80);
  }
  local_1c = __vbaFpI4();
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x78))(piVar2,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x78);
  }
  local_20 = __vbaFpI4();
  __vbaFreeObj();
  iVar3 = (**(code **)(*piVar4 + 0x8c))(piVar4,0x455d4000);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041358c,0x8c);
  }
  iVar3 = (**(code **)(*piVar4 + 0x84))(piVar4,0x4592b800);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041358c,0x84);
  }
  uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x84))(piVar2,(float)local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x84);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x7c))(piVar2,(float)local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x7c);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x80))(piVar2,&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x80);
  }
  iVar3 = (**(code **)(*piVar4 + 0x88))(piVar4,&local_28);
  uVar5 = 0;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041358c,0x88);
  }
  if ((uVar5 & 0xd) == 0) {
    iVar3 = __vbaFpI4();
    piVar4[0x11] = iVar3;
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
    piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x78))(piVar2,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x78);
    }
    iVar3 = (**(code **)(*piVar4 + 0x80))(piVar4,&local_28);
    uVar5 = 0;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041358c,0x80);
    }
    if ((uVar5 & 0xd) == 0) {
      iVar3 = __vbaFpI4();
      piVar4[0x12] = iVar3;
      __vbaFreeObj();
      iVar3 = (**(code **)(*piVar4 + 0x70c))(piVar4);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar4,&DAT_004135bc,0x70c);
      }
      return;
    }
  }
  __vbaFPException();
  return;
}

/* ---- 0x45f1e0 (FUN_0045f1e0) [estimated] strings:  ---- */
undefined4 FUN_0045f1e0(uint param_1,undefined2 *param_2,short *param_3)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402a40;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  if (*param_3 != 1 && *param_3 != 4) {
    iVar1 = (**(code **)(*piVar2 + 0x2b4))(piVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar2,&DAT_0041358c,0x2b4);
    }
    *param_2 = 0xffff;
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45f290 (FUN_0045f290) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0045f290(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  float local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa8;
  local_c = &DAT_00402a48;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_20[1] = 0.0;
  local_20[0] = 0.0;
  uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
  piVar2 = (int *)__vbaObjSet(local_20 + 1,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0x88))(piVar4,local_20);
  uVar5 = 0;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041358c,0x88);
  }
  if ((uVar5 & 0xd) == 0) {
    iVar3 = (**(code **)(*piVar2 + 0x84))(piVar2,local_20[0] - (float)piVar4[0x11]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x84);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
    piVar2 = (int *)__vbaObjSet(local_20 + 1,uVar1);
    iVar3 = (**(code **)(*piVar4 + 0x80))(piVar4,local_20);
    uVar5 = 0;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041358c,0x80);
    }
    if ((uVar5 & 0xd) == 0) {
      iVar3 = (**(code **)(*piVar2 + 0x7c))(piVar2,local_20[0] - (float)piVar4[0x12]);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x7c);
      }
      __vbaFreeObj();
      return;
    }
  }
  __vbaFPException();
  return;
}

/* ---- 0x45f420 (FUN_0045f420) [estimated] strings:  ---- */
undefined4 FUN_0045f420(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402a58;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar1 + 0x710))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45f490 (FUN_0045f490) [estimated] strings:  ---- */
void __cdecl FUN_0045f490(int ***param_1,undefined4 *param_2,undefined4 *param_3)

{
  int **ppiVar1;
  int ***pppiVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int ***pppiVar6;
  undefined4 *puVar7;
  int ****ppppiVar8;
  int ****ppppiVar9;
  int ****ppppiVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar13;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  code *pcVar14;
  void *pvVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int *piStack_294;
  int *piStack_290;
  uint uStack_28c;
  int *apiStack_27c [9];
  int iStack_258;
  uint uStack_254;
  undefined4 auStack_250 [2];
  int *piStack_248;
  int *piStack_240;
  int *piStack_23c;
  int *piStack_238;
  int *piStack_234;
  int *piStack_230;
  void *pvStack_22c;
  int *piStack_228;
  int *piStack_224;
  int **ppiStack_220;
  int **ppiStack_21c;
  int *piStack_218;
  undefined *puStack_214;
  int *piStack_210;
  int *piStack_20c;
  undefined *puStack_208;
  int *piStack_204;
  int *piStack_200;
  undefined *puStack_1fc;
  int *piStack_1f8;
  int *piStack_1f4;
  undefined *puStack_1f0;
  int *piStack_1ec;
  int *piStack_1e8;
  undefined *puStack_1e4;
  int *piStack_1e0;
  int *piStack_1dc;
  undefined4 *puStack_1d8;
  int *piStack_1d4;
  int *piStack_1d0;
  int *piStack_1cc;
  int ***pppiStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1a0;
  int *piStack_19c;
  int iStack_198;
  int *piStack_194;
  int ***pppiStack_190;
  void *pvStack_18c;
  int *piStack_188;
  int ****ppppiStack_184;
  int ****ppppiStack_180;
  int ****ppppiStack_17c;
  int ****ppppiStack_178;
  undefined *puStack_174;
  int *piStack_170;
  int ****ppppiStack_16c;
  undefined *puStack_168;
  int *piStack_164;
  int ****ppppiStack_160;
  int ****ppppiStack_15c;
  int *piStack_158;
  int *piStack_154;
  int ***pppiStack_150;
  int ***pppiStack_14c;
  int ***pppiStack_148;
  undefined4 uStack_144;
  int iStack_140;
  int ***pppiStack_13c;
  int ***pppiStack_138;
  int ****ppppiStack_134;
  int ***pppiStack_130;
  int iStack_12c;
  int ***pppiStack_128;
  int ****ppppiStack_124;
  int ***pppiStack_120;
  int ***pppiStack_11c;
  int ****ppppiStack_118;
  int ***pppiStack_114;
  int ****ppppiStack_110;
  int ***pppiStack_10c;
  int ****ppppiStack_108;
  int ***pppiStack_104;
  int ***pppiStack_100;
  int ****ppppiStack_fc;
  int ****ppppiStack_f8;
  int ***pppiStack_f4;
  int ***pppiStack_f0;
  int ****ppppiStack_ec;
  int ****ppppiStack_e8;
  int ****ppppiStack_e4;
  int ****ppppiStack_e0;
  int ***pppiStack_dc;
  int ****ppppiStack_d8;
  int ***pppiStack_d4;
  int ***pppiStack_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int ****ppppiStack_c4;
  int **ppiStack_c0;
  int ***pppiStack_bc;
  int **ppiStack_b8;
  int **ppiStack_b4;
  int ****ppppiStack_b0;
  int ***pppiStack_ac;
  int ***pppiStack_a8;
  int ***pppiStack_a4;
  int ***pppiStack_a0;
  int ***pppiStack_9c;
  int local_7c;
  undefined4 local_70;
  undefined4 local_6c [2];
  int ***local_64;
  int ***local_60;
  int **local_5c;
  int ***local_58;
  int ***local_54;
  undefined4 local_50;
  int ***local_4c;
  int ***local_48;
  int ***local_44;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  int ***local_2c;
  int **local_28;
  undefined4 local_24;
  int ***local_20;
  int ***local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff68;
  local_c = &DAT_00402a60;
  local_8 = 0;
  pppiStack_9c = param_1;
  pppiStack_a0 = (int ***)0x45f4c7;
  ExceptionList = &pvStack_18;
  (*(code *)(*param_1)[1])();
  pppiVar6 = param_1 + 0xd;
  local_1c = (int ***)0x0;
  local_20 = (int ***)0x0;
  pppiStack_a0 = (int ***)*param_2;
  local_24 = 0;
  local_28 = (int **)0x0;
  local_2c = (int ***)0x0;
  local_30 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_54 = (int ***)0x0;
  local_6c[0] = 0;
  local_70 = 0;
  pppiStack_a8 = (int ***)0x45f4f8;
  pppiStack_a4 = pppiVar6;
  __vbaObjSetAddref();
  pppiStack_a4 = (int ***)*pppiVar6;
  pppiStack_a0 = &local_28;
  pppiStack_a8 = (int ***)0x45f507;
  iVar5 = (*(code *)(*pppiStack_a4)[0x1c5])();
  if (iVar5 < 0) {
    ppppiStack_b0 = (int ****)*pppiVar6;
    pppiStack_a8 = (int ***)0x714;
    pppiStack_ac = (int ***)&DAT_00413728;
    ppiStack_b8 = (int **)0x45f521;
    ppiStack_b4 = (int **)iVar5;
    __vbaHresultCheckObj();
  }
  pppiVar6 = param_1 + 0x10;
  pppiStack_a8 = (int ***)local_28;
  ppppiStack_b0 = (int ****)0x45f52f;
  pppiStack_ac = pppiVar6;
  __vbaObjSetAddref();
  pppiStack_a8 = (int ***)0x45f538;
  __vbaFreeObj();
  pppiStack_ac = (int ***)*pppiVar6;
  pppiStack_a8 = &local_28;
  ppppiStack_b0 = (int ****)0x45f544;
  iVar5 = (*(code *)(*pppiStack_ac)[0x16])();
  if (iVar5 < 0) {
    ppiStack_b8 = *pppiVar6;
    ppppiStack_b0 = (int ****)0x58;
    ppiStack_b4 = (int **)&LAB_004133e8;
    ppiStack_c0 = (int **)0x45f55b;
    pppiStack_bc = (int ***)iVar5;
    __vbaHresultCheckObj();
  }
  ppiVar1 = local_28;
  ppppiStack_b0 = &local_20;
  ppiStack_b4 = local_28;
  ppiStack_b8 = (int **)0x45f56a;
  iVar5 = (*(code *)(*local_28)[0xc])();
  if (iVar5 < 0) {
    ppiStack_b8 = (int **)0x30;
    pppiStack_bc = (int ***)&DAT_00414258;
    ppiStack_c0 = ppiVar1;
    pppiStack_c8 = (int ***)0x45f57f;
    ppppiStack_c4 = (int ****)iVar5;
    __vbaHresultCheckObj();
  }
  ppiVar1 = *param_1;
  ppiStack_b8 = (int **)0x418958;
  pppiStack_bc = local_20;
  ppiStack_c0 = (int **)0x45f590;
  __vbaStrCat();
  ppiStack_b8 = (int **)0x45f59b;
  ppiStack_b8 = (int **)__vbaStrMove();
  pppiStack_bc = param_1;
  ppiStack_c0 = (int **)0x45f5a0;
  pppiStack_cc = (int ***)(*(code *)ppiVar1[0x15])();
  if ((int)pppiStack_cc < 0) {
    ppiStack_c0 = (int **)0x54;
    ppppiStack_c4 = (int ****)&DAT_0041745c;
    pppiStack_c8 = param_1;
    pppiStack_d0 = (int ***)0x45f5b7;
    __vbaHresultCheckObj();
  }
  ppiStack_c0 = (int **)&local_24;
  ppppiStack_c4 = &local_20;
  pppiStack_c8 = (int ***)0x2;
  pppiStack_cc = (int ***)0x45f5cf;
  __vbaFreeStrList();
  ppiStack_c0 = (int **)0x45f5db;
  __vbaFreeObj();
  ppiStack_c0 = (int **)0x45caf800;
  ppppiStack_c4 = (int ****)param_1;
  pppiStack_c8 = (int ***)0x45f5e9;
  iVar5 = (*(code *)(*param_1)[0x21])();
  if (iVar5 < 0) {
    pppiStack_c8 = (int ***)0x84;
    pppiStack_cc = (int ***)&DAT_0041745c;
    pppiStack_d0 = param_1;
    ppppiStack_d8 = (int ****)0x45f5fd;
    pppiStack_d4 = (int ***)iVar5;
    __vbaHresultCheckObj();
  }
  pppiStack_c8 = (int ***)0x4588e000;
  pppiStack_cc = param_1;
  pppiStack_d0 = (int ***)0x45f60b;
  pppiVar6 = (int ***)(*(code *)(*param_1)[0x23])();
  if ((int)pppiVar6 < 0) {
    pppiStack_d0 = (int ***)0x8c;
    pppiStack_d4 = (int ***)&DAT_0041745c;
    ppppiStack_d8 = (int ****)param_1;
    ppppiStack_e0 = (int ****)0x45f61f;
    pppiStack_dc = pppiVar6;
    __vbaHresultCheckObj();
  }
  pppiStack_d0 = (int ***)0x0;
  pppiStack_d4 = (int ***)*param_3;
  ppppiStack_d8 = (int ****)0x45f62c;
  sVar4 = __vbaObjIs();
  if (sVar4 == 0) {
    pppiStack_d0 = (int ***)*param_3;
    pppiStack_d4 = param_1 + 0xe;
    ppppiStack_d8 = (int ****)0x45f6fb;
    __vbaObjSetAddref();
    pcVar14 = __vbaHresultCheckObj_exref;
  }
  else {
    pppiStack_d4 = (int ***)param_1[0x10];
    pppiStack_d0 = &local_28;
    ppppiStack_d8 = (int ****)0x45f642;
    iVar5 = (*(code *)(*pppiStack_d4)[0x1c])();
    pcVar14 = __vbaHresultCheckObj_exref;
    if (iVar5 < 0) {
      ppppiStack_e0 = (int ****)param_1[0x10];
      ppppiStack_d8 = (int ****)0x70;
      pppiStack_dc = (int ***)&LAB_004133e8;
      ppppiStack_e8 = (int ****)0x45f65c;
      ppppiStack_e4 = (int ****)iVar5;
      __vbaHresultCheckObj();
    }
    ppppiStack_d8 = &local_2c;
    pppiStack_dc = (int ***)local_28;
    local_5c = local_28;
    ppppiStack_e0 = (int ****)0x45f674;
    ppppiStack_ec = (int ****)(*(code *)(*local_28)[0x1b])();
    if ((int)ppppiStack_ec < 0) {
      ppppiStack_e0 = (int ****)0x6c;
      ppppiStack_e4 = (int ****)&LAB_004133f8;
      ppppiStack_e8 = (int ****)local_5c;
      pppiStack_f0 = (int ***)0x45f688;
      __vbaHresultCheckObj();
    }
    ppppiStack_e0 = (int ****)&local_30;
    ppppiStack_e4 = (int ****)local_40;
    local_38 = 1;
    local_40[0] = 2;
    ppppiStack_e8 = (int ****)local_2c;
    local_64 = local_2c;
    ppppiStack_ec = (int ****)0x45f6aa;
    puVar7 = (undefined4 *)(*(code *)(*local_2c)[8])();
    if ((int)puVar7 < 0) {
      pppiStack_d4 = (int ***)0x20;
      ppppiStack_d8 = (int ****)&LAB_00414248;
      pppiStack_dc = local_64;
      ppppiStack_e4 = (int ****)0x45f6be;
      ppppiStack_e0 = (int ****)puVar7;
      __vbaHresultCheckObj();
    }
    ppppiStack_d8 = (int ****)(param_1 + 0xe);
    pppiStack_d4 = (int ***)local_30;
    pppiStack_dc = (int ***)0x45f6cc;
    __vbaObjSetAddref();
    pppiStack_d4 = (int ***)&local_30;
    ppppiStack_d8 = &local_2c;
    pppiStack_dc = &local_28;
    ppppiStack_e0 = (int ****)0x3;
    ppppiStack_e4 = (int ****)0x45f6e0;
    __vbaFreeObjList();
    pppiStack_d4 = (int ***)0x45f6ec;
    __vbaFreeVar();
  }
  pppiStack_d0 = (int ***)param_1[0xe];
  pppiStack_d4 = param_1 + 0xf;
  ppppiStack_d8 = (int ****)0x45f70f;
  __vbaObjSetAddref();
  pppiStack_d4 = (int ***)param_1[0x10];
  pppiStack_d0 = &local_28;
  ppppiStack_d8 = (int ****)0x45f71c;
  iVar5 = (*(code *)(*pppiStack_d4)[0x1c])();
  if (iVar5 < 0) {
    ppppiStack_e0 = (int ****)param_1[0x10];
    ppppiStack_d8 = (int ****)0x70;
    pppiStack_dc = (int ***)&LAB_004133e8;
    ppppiStack_e8 = (int ****)0x45f730;
    ppppiStack_e4 = (int ****)iVar5;
    (*pcVar14)();
  }
  ppppiStack_d8 = &local_2c;
  pppiStack_dc = (int ***)local_28;
  local_5c = local_28;
  ppppiStack_e0 = (int ****)0x45f740;
  iVar5 = (*(code *)(*local_28)[0x1b])();
  if (iVar5 < 0) {
    ppppiStack_e0 = (int ****)0x6c;
    ppppiStack_e4 = (int ****)&LAB_004133f8;
    ppppiStack_e8 = (int ****)local_5c;
    pppiStack_f0 = (int ***)0x45f754;
    ppppiStack_ec = (int ****)iVar5;
    (*pcVar14)();
  }
  ppppiVar10 = (int ****)__vbaObjSet_exref;
  ppppiStack_e4 = (int ****)local_6c;
  ppppiStack_e0 = (int ****)local_2c;
  local_2c = (int ***)0x0;
  ppppiStack_e8 = (int ****)0x45f767;
  ppppiStack_e0 = (int ****)__vbaObjSet();
  ppppiStack_e4 = &local_1c;
  ppppiStack_e8 = (int ****)&local_70;
  ppppiStack_ec = (int ****)&DAT_00414268;
  pppiStack_f0 = (int ***)0x45f77b;
  local_7c = __vbaForEachCollObj();
  ppppiStack_e0 = (int ****)0x45f787;
  __vbaFreeObj();
  do {
    if (local_7c == 0) {
      ppppiStack_e0 = (int ****)param_1;
      param_1[0x11] = (int **)0x0;
      param_1[0x12] = (int **)0x2;
      param_1[0x13] = (int **)0x0;
      ppppiStack_e4 = (int ****)0x45fa26;
      ppppiStack_e4 = (int ****)(*(code *)(*param_1)[0xd0])();
      ppppiStack_e8 = (int ****)&local_28;
      ppppiStack_ec = (int ****)0x45fa2d;
      local_58 = (int ***)(*(code *)ppppiVar10)();
      pppiVar6 = (int ***)*local_58;
      ppppiStack_ec = &local_2c;
      pppiStack_f0 = (int ***)0x45fa3f;
      ppppiStack_ec = (int ****)__vbaI2I4();
      pppiVar2 = local_58;
      pppiStack_f0 = local_58;
      pppiStack_f4 = (int ***)0x45fa49;
      iVar5 = (*(code *)pppiVar6[0x10])();
      if (iVar5 < 0) {
        pppiStack_f4 = (int ***)0x40;
        ppppiStack_f8 = (int ****)&DAT_004182e4;
        ppppiStack_fc = (int ****)pppiVar2;
        pppiStack_104 = (int ***)0x45fa5e;
        pppiStack_100 = (int ***)iVar5;
        __vbaHresultCheckObj();
      }
      pppiVar6 = local_2c;
      pppiStack_f4 = (int ***)0xffffffff;
      ppppiStack_f8 = (int ****)local_2c;
      ppppiStack_fc = (int ****)0x45fa6e;
      ppppiStack_108 = (int ****)(*(code *)(*local_2c)[0x39])();
      if ((int)ppppiStack_108 < 0) {
        ppppiStack_fc = (int ****)0xe4;
        pppiStack_100 = (int ***)&DAT_00418984;
        pppiStack_104 = pppiVar6;
        pppiStack_10c = (int ***)0x45fa86;
        __vbaHresultCheckObj();
      }
      ppppiStack_fc = &local_2c;
      pppiStack_100 = &local_28;
      pppiStack_104 = (int ***)0x2;
      ppppiStack_108 = (int ****)0x45fa96;
      __vbaFreeObjList();
      ppppiStack_fc = (int ****)param_1;
      pppiStack_100 = (int ***)0x45faa2;
      pppiStack_100 = (int ***)(*(code *)(*param_1)[0xc9])();
      pppiStack_104 = &local_28;
      ppppiStack_108 = (int ****)0x45faa9;
      local_58 = (int ***)(*(code *)ppppiVar10)();
      iVar5 = (int)*local_58;
      ppppiStack_108 = &local_2c;
      pppiStack_10c = (int ***)0x45fabb;
      ppppiStack_108 = (int ****)__vbaI2I4();
      pppiVar6 = local_58;
      pppiStack_10c = local_58;
      ppppiStack_110 = (int ****)0x45fac5;
      ppppiVar8 = (int ****)(**(code **)(iVar5 + 0x40))();
      if ((int)ppppiVar8 < 0) {
        ppppiStack_110 = (int ****)0x40;
        pppiStack_114 = (int ***)&DAT_004182e4;
        ppppiStack_118 = (int ****)pppiVar6;
        pppiStack_120 = (int ***)0x45fadc;
        pppiStack_11c = (int ***)ppppiVar8;
        __vbaHresultCheckObj();
      }
      ppppiStack_110 = (int ****)0xffffffff;
      pppiStack_114 = local_2c;
      local_60 = local_2c;
      ppppiStack_118 = (int ****)0x45faf5;
      ppppiStack_124 = (int ****)(*(code *)(*local_2c)[0x39])();
      if ((int)ppppiStack_124 < 0) {
        ppppiStack_118 = (int ****)0xe4;
        pppiStack_11c = (int ***)&DAT_00418984;
        pppiStack_120 = local_60;
        pppiStack_128 = (int ***)0x45fb0c;
        __vbaHresultCheckObj();
      }
      ppppiStack_118 = &local_2c;
      pppiStack_11c = &local_28;
      pppiStack_120 = (int ***)0x2;
      ppppiStack_124 = (int ****)0x45fb1c;
      __vbaFreeObjList();
      ppppiStack_118 = (int ****)param_1;
      pppiStack_11c = (int ***)0x45fb28;
      pppiStack_11c = (int ***)(*(code *)(*param_1)[199])();
      pppiStack_120 = &local_28;
      ppppiStack_124 = (int ****)0x45fb2f;
      piVar11 = (int *)(*(code *)ppppiVar10)();
      ppppiStack_124 = &local_2c;
      iVar5 = *piVar11;
      pppiStack_128 = (int ***)0x45fb46;
      ppppiStack_124 = (int ****)__vbaI2I4();
      iStack_12c = 0x45fb51;
      pppiStack_128 = (int ***)piVar11;
      iVar5 = (**(code **)(iVar5 + 0x40))();
      if (iVar5 < 0) {
        iStack_12c = 0x40;
        pppiStack_130 = (int ***)&DAT_004182e4;
        pppiStack_13c = (int ***)0x45fb62;
        pppiStack_138 = (int ***)iVar5;
        ppppiStack_134 = (int ****)piVar11;
        __vbaHresultCheckObj();
      }
      pppiVar6 = local_2c;
      iStack_12c = 0xffffffff;
      pppiStack_130 = local_2c;
      ppppiStack_134 = (int ****)0x45fb72;
      iStack_140 = (*(code *)(*local_2c)[0x39])();
      if (iStack_140 < 0) {
        ppppiStack_134 = (int ****)0xe4;
        pppiStack_138 = (int ***)&DAT_00418984;
        pppiStack_13c = pppiVar6;
        uStack_144 = 0x45fb86;
        __vbaHresultCheckObj();
      }
      ppppiStack_134 = &local_2c;
      pppiStack_138 = &local_28;
      pppiStack_13c = (int ***)0x2;
      iStack_140 = 0x45fb96;
      __vbaFreeObjList();
      ppppiStack_134 = (int ****)&LAB_0045fbef;
      pppiStack_138 = (int ***)&local_70;
      pppiStack_13c = (int ***)local_6c;
      iStack_140 = 2;
      uStack_144 = 0x45fbe2;
      __vbaFreeObjList();
      pppiStack_138 = (int ***)0x45fbee;
      __vbaFreeObj();
      return;
    }
    ppppiStack_e0 = (int ****)param_1;
    ppppiStack_e4 = (int ****)0x45f799;
    ppppiStack_e4 = (int ****)(*(code *)(*param_1)[0xd8])();
    ppppiStack_e8 = (int ****)&local_28;
    ppppiStack_ec = (int ****)0x45f7a0;
    ppppiVar8 = (int ****)(*(code *)ppppiVar10)();
    ppppiStack_ec = &local_20;
    pppiStack_f0 = local_1c;
    pppiStack_f4 = (int ***)0x45f7af;
    pppiStack_100 = (int ***)(*(code *)(*local_1c)[0xd])();
    if ((int)pppiStack_100 < 0) {
      pppiStack_f4 = (int ***)0x34;
      ppppiStack_f8 = (int ****)&DAT_00414268;
      ppppiStack_fc = (int ****)local_1c;
      pppiStack_104 = (int ***)0x45f7c7;
      __vbaHresultCheckObj();
    }
    pppiStack_100 = (int ***)0xa;
    ppppiStack_fc = (int ****)local_4c;
    ppppiStack_f8 = (int ****)0x80020004;
    pppiStack_f4 = local_44;
    pppiStack_104 = local_20;
    pppiStack_10c = (int ***)0x45f7f4;
    ppppiStack_108 = ppppiVar8;
    ppppiVar9 = (int ****)(*(code *)(*ppppiVar8)[0x7b])();
    if ((int)ppppiVar9 < 0) {
      pppiStack_10c = (int ***)0x1ec;
      ppppiStack_110 = (int ****)&DAT_0041807c;
      pppiStack_11c = (int ***)0x45f80c;
      ppppiStack_118 = ppppiVar9;
      pppiStack_114 = (int ***)ppppiVar8;
      __vbaHresultCheckObj();
    }
    pppiStack_10c = (int ***)0x45f815;
    __vbaFreeStr();
    pppiStack_10c = (int ***)0x45f81e;
    __vbaFreeObj();
    pppiStack_10c = param_1;
    ppppiStack_110 = (int ****)0x45f827;
    ppppiStack_110 = (int ****)(*(code *)(*param_1)[0xd1])();
    pppiStack_114 = &local_28;
    ppppiStack_118 = (int ****)0x45f82e;
    pppiVar6 = (int ***)(*(code *)ppppiVar10)();
    ppppiStack_118 = &local_20;
    local_48 = (int ***)0x80020004;
    pppiStack_11c = local_1c;
    local_50 = 10;
    pppiStack_120 = (int ***)0x45f84b;
    iStack_12c = (*(code *)(*local_1c)[0xd])();
    if (iStack_12c < 0) {
      pppiStack_120 = (int ***)0x34;
      ppppiStack_124 = (int ****)&DAT_00414268;
      pppiStack_128 = local_1c;
      pppiStack_130 = (int ***)0x45f863;
      __vbaHresultCheckObj();
    }
    iStack_12c = local_50;
    pppiStack_128 = local_4c;
    ppppiStack_124 = (int ****)local_48;
    pppiStack_120 = local_44;
    pppiStack_130 = local_20;
    pppiStack_138 = (int ***)0x45f88c;
    ppppiStack_134 = (int ****)pppiVar6;
    ppppiVar8 = (int ****)(*(code *)(*pppiVar6)[0x7b])();
    if ((int)ppppiVar8 < 0) {
      ppppiStack_e0 = (int ****)0x1ec;
      ppppiStack_e4 = (int ****)&DAT_0041807c;
      pppiStack_f0 = (int ***)0x45f8a4;
      ppppiStack_ec = ppppiVar8;
      ppppiStack_e8 = (int ****)pppiVar6;
      __vbaHresultCheckObj();
    }
    ppppiStack_e0 = (int ****)0x45f8ad;
    __vbaFreeStr();
    ppppiStack_e0 = (int ****)0x45f8b6;
    __vbaFreeObj();
    ppppiStack_e0 = (int ****)param_1[0xe];
    ppppiStack_e4 = (int ****)local_1c;
    ppppiStack_e8 = (int ****)0x45f8c4;
    sVar4 = __vbaObjIs();
    if (sVar4 != 0) {
      ppppiStack_e0 = (int ****)param_1;
      ppppiStack_e4 = (int ****)0x45f8d6;
      ppppiStack_e4 = (int ****)(*(code *)(*param_1)[0xd8])();
      ppppiStack_e8 = &local_2c;
      ppppiStack_ec = (int ****)0x45f8dd;
      local_60 = (int ***)(*(code *)ppppiVar10)();
      ppppiStack_ec = (int ****)param_1;
      pppiStack_f0 = (int ***)0x45f8e9;
      pppiStack_f0 = (int ***)(*(code *)(*param_1)[0xd8])();
      pppiStack_f4 = &local_28;
      ppppiStack_f8 = (int ****)0x45f8f0;
      ppppiVar8 = (int ****)(*(code *)ppppiVar10)();
      ppppiStack_f8 = &local_54;
      pppiStack_100 = (int ***)0x45f8ff;
      ppppiStack_fc = ppppiVar8;
      pppiVar6 = (int ***)(*(code *)(*ppppiVar8)[0x3a])();
      uVar13 = extraout_var;
      if ((int)pppiVar6 < 0) {
        pppiStack_100 = (int ***)0xe8;
        pppiStack_104 = (int ***)&DAT_0041807c;
        ppppiStack_110 = (int ****)0x45f917;
        pppiStack_10c = pppiVar6;
        ppppiStack_108 = ppppiVar8;
        __vbaHresultCheckObj();
        uVar13 = extraout_var_00;
      }
      pppiVar6 = local_60;
      pppiStack_100 = (int ***)CONCAT22(uVar13,(short)local_54 + -1);
      ppppiVar8 = (int ****)local_60;
      if (SBORROW2((short)local_54,1)) {
LAB_0045fc0e:
        pppiStack_100 = (int ***)0x45fc14;
        __vbaErrorOverflow();
        pppiStack_10c = (int ***)&LAB_004032d6;
        ppppiStack_110 = ExceptionList;
        pppiStack_14c = param_1;
        ppppiStack_108 = &pppiStack_150;
        pppiStack_104 = (int ***)&DAT_00402a70;
        pppiStack_100 = (int ***)((uint)pppiStack_f4 & 1);
        piVar19 = (int *)((uint)pppiStack_f4 & 0xfffffffe);
        piStack_158 = (int *)0x45fc60;
        ExceptionList = &ppppiStack_110;
        piStack_154 = piVar19;
        pppiStack_150 = (int ***)ppppiVar8;
        pppiStack_148 = (int ***)ppppiVar10;
        ppppiStack_fc = (int ****)&stack0xfffffffc;
        pppiStack_f4 = (int ***)piVar19;
        (**(code **)(*piVar19 + 4))();
        pppiStack_11c = (int ***)0x0;
        pppiStack_120 = (int ***)0x0;
        ppppiStack_124 = (int ****)0x0;
        ppppiStack_15c = (int ****)0x45fc74;
        piStack_158 = piVar19;
        ppppiStack_15c = (int ****)(**(code **)(*piVar19 + 0x310))();
        ppppiStack_160 = &pppiStack_11c;
        piStack_164 = (int *)0x45fc81;
        piVar11 = (int *)__vbaObjSet();
        ppppiStack_15c = (int ****)&ppppiStack_124;
        piStack_164 = (int *)0x45fc90;
        ppppiStack_160 = (int ****)piVar11;
        iVar5 = (**(code **)(*piVar11 + 0xe0))();
        if (iVar5 < 0) {
          piStack_164 = (int *)0xe0;
          puStack_168 = &DAT_00417e48;
          puStack_174 = (undefined *)0x45fca8;
          piStack_170 = (int *)iVar5;
          ppppiStack_16c = (int ****)piVar11;
          __vbaHresultCheckObj();
        }
        pvVar15 = (void *)-(uint)((short)ppppiStack_124 == 1);
        piStack_164 = (int *)0x45fcc0;
        pppiStack_114 = pvVar15;
        __vbaFreeObj();
        puStack_168 = (undefined *)0x45fcc9;
        piStack_164 = piVar19;
        puStack_168 = (undefined *)(**(code **)(*piVar19 + 0x314))();
        ppppiStack_16c = &pppiStack_11c;
        piStack_170 = (int *)0x45fcd0;
        ppppiVar10 = (int ****)__vbaObjSet();
        piStack_170 = (int *)0x45fcdc;
        ppppiStack_16c = ppppiVar10;
        puStack_168 = pvVar15;
        iVar5 = (*(code *)(*ppppiVar10)[0x25])();
        if (iVar5 < 0) {
          piStack_170 = (int *)0x94;
          puStack_174 = &DAT_0041807c;
          ppppiStack_180 = (int ****)0x45fcf4;
          ppppiStack_17c = (int ****)iVar5;
          ppppiStack_178 = ppppiVar10;
          __vbaHresultCheckObj();
        }
        piStack_170 = (int *)0x45fcfd;
        __vbaFreeObj();
        puStack_174 = (undefined *)0x45fd06;
        piStack_170 = piVar19;
        puStack_174 = (undefined *)(**(code **)(*piVar19 + 0x318))();
        ppppiStack_178 = &pppiStack_11c;
        ppppiStack_17c = (int ****)0x45fd11;
        ppppiVar10 = (int ****)__vbaObjSet();
        ppppiStack_17c = (int ****)0x45fd1d;
        ppppiStack_178 = ppppiVar10;
        puStack_174 = pvVar15;
        iVar5 = (*(code *)(*ppppiVar10)[0x23])();
        if (iVar5 < 0) {
          ppppiStack_17c = (int ****)0x8c;
          ppppiStack_180 = (int ****)&DAT_00417a98;
          pvStack_18c = (void *)0x45fd35;
          piStack_188 = (int *)iVar5;
          ppppiStack_184 = ppppiVar10;
          __vbaHresultCheckObj();
        }
        ppppiStack_17c = (int ****)0x45fd3e;
        __vbaFreeObj();
        pppiStack_138 = (int ***)0x1;
        uVar12 = 0;
        do {
          uVar16 = uVar12;
          sVar4 = (short)uVar16;
          if (3 < sVar4) {
            return;
          }
          ppppiStack_180 = (int ****)0x45fd5e;
          ppppiStack_17c = (int ****)piVar19;
          ppppiStack_180 = (int ****)(**(code **)(*piVar19 + 0x31c))();
          ppppiStack_184 = &pppiStack_11c;
          piStack_188 = (int *)0x45fd69;
          piVar11 = (int *)__vbaObjSet();
          ppppiStack_180 = &pppiStack_120;
          pvStack_18c = (void *)0x45fd76;
          piStack_188 = piVar11;
          ppppiStack_184 = (int ****)uVar16;
          iVar5 = (**(code **)(*piVar11 + 0x40))();
          if (iVar5 < 0) {
            pvStack_18c = (void *)0x40;
            pppiStack_190 = (int ***)&DAT_004182e4;
            piStack_19c = (int *)0x45fd8b;
            iStack_198 = iVar5;
            piStack_194 = piVar11;
            __vbaHresultCheckObj();
          }
          pppiVar6 = pppiStack_120;
          pvStack_18c = pppiStack_114;
          pppiStack_190 = pppiStack_120;
          piStack_194 = (int *)0x45fd9d;
          piStack_188 = (int *)(*(code *)(*pppiStack_120)[0x25])();
          if ((int)piStack_188 < 0) {
            ppppiStack_17c = (int ****)0x94;
            ppppiStack_180 = (int ****)&DAT_00418984;
            ppppiStack_184 = (int ****)pppiVar6;
            pvStack_18c = (void *)0x45fdb5;
            __vbaHresultCheckObj();
          }
          ppppiStack_17c = &pppiStack_120;
          ppppiStack_180 = &pppiStack_11c;
          ppppiStack_184 = (int ****)0x2;
          piStack_188 = (int *)0x45fdc5;
          __vbaFreeObjList();
          uVar12 = CONCAT22(extraout_var_03,(short)pppiStack_138 + sVar4);
        } while (!SCARRY2((short)pppiStack_138,sVar4));
        ppppiStack_17c = (int ****)0x45fe20;
        __vbaErrorOverflow();
        piStack_188 = (int *)&LAB_004032d6;
        pvStack_18c = ExceptionList;
        pppiStack_1c8 = pppiVar6;
        ppppiStack_184 = (int ****)&piStack_1cc;
        ppppiStack_180 = (int ****)&DAT_00402a80;
        ppppiStack_17c = (int ****)((uint)piStack_170 & 1);
        piVar18 = (int *)((uint)piStack_170 & 0xfffffffe);
        piStack_1d4 = (int *)0x45fe60;
        ExceptionList = &pvStack_18c;
        piStack_1d0 = piVar18;
        piStack_1cc = piVar19;
        uStack_1c4 = uVar16;
        ppppiStack_178 = (int ****)&ppppiStack_fc;
        piStack_170 = piVar18;
        (**(code **)(*piVar18 + 4))();
        iStack_198 = 0;
        piStack_19c = (int *)0x0;
        uStack_1a0 = 0;
        puStack_1d8 = (undefined4 *)0x45fe74;
        piStack_1d4 = piVar18;
        puStack_1d8 = (undefined4 *)(**(code **)(*piVar18 + 0x348))();
        piStack_1dc = &iStack_198;
        piStack_1e0 = (int *)0x45fe81;
        piVar11 = (int *)__vbaObjSet();
        puStack_1d8 = &uStack_1a0;
        piStack_1e0 = (int *)0x45fe90;
        piStack_1dc = piVar11;
        iVar5 = (**(code **)(*piVar11 + 0xe0))();
        if (iVar5 < 0) {
          piStack_1e0 = (int *)0xe0;
          puStack_1e4 = &DAT_00417e48;
          puStack_1f0 = (undefined *)0x45fea8;
          piStack_1ec = (int *)iVar5;
          piStack_1e8 = piVar11;
          __vbaHresultCheckObj();
        }
        pppiStack_190 = (int ***)-(uint)((short)uStack_1a0 == 1);
        piStack_1e0 = (int *)0x45fec2;
        __vbaFreeObj();
        puStack_1e4 = (undefined *)0x45fecb;
        piStack_1e0 = piVar18;
        puStack_1e4 = (undefined *)(**(code **)(*piVar18 + 0x344))();
        piStack_1e8 = &iStack_198;
        piStack_1ec = (int *)0x45fed2;
        piVar11 = (int *)__vbaObjSet();
        puStack_1e4 = (undefined *)pppiStack_190;
        piStack_1ec = (int *)0x45fee1;
        piStack_1e8 = piVar11;
        iVar5 = (**(code **)(*piVar11 + 0x94))();
        if (iVar5 < 0) {
          piStack_1ec = (int *)0x94;
          puStack_1f0 = &DAT_0041807c;
          puStack_1fc = (undefined *)0x45fef9;
          piStack_1f8 = (int *)iVar5;
          piStack_1f4 = piVar11;
          __vbaHresultCheckObj();
        }
        piStack_1ec = (int *)0x45fefe;
        __vbaFreeObj();
        puStack_1f0 = (undefined *)0x45ff07;
        piStack_1ec = piVar18;
        puStack_1f0 = (undefined *)(**(code **)(*piVar18 + 0x33c))();
        piStack_1f4 = &iStack_198;
        piStack_1f8 = (int *)0x45ff12;
        piVar11 = (int *)__vbaObjSet();
        puStack_1f0 = (undefined *)pppiStack_190;
        piStack_1f8 = (int *)0x45ff21;
        piStack_1f4 = piVar11;
        iVar5 = (**(code **)(*piVar11 + 0x8c))();
        if (iVar5 < 0) {
          piStack_1f8 = (int *)0x8c;
          puStack_1fc = &DAT_00417a98;
          puStack_208 = (undefined *)0x45ff39;
          piStack_204 = (int *)iVar5;
          piStack_200 = piVar11;
          __vbaHresultCheckObj();
        }
        piStack_1f8 = (int *)0x45ff3e;
        __vbaFreeObj();
        puStack_1fc = (undefined *)0x45ff47;
        piStack_1f8 = piVar18;
        puStack_1fc = (undefined *)(**(code **)(*piVar18 + 0x334))();
        piStack_200 = &iStack_198;
        piStack_204 = (int *)0x45ff52;
        piVar11 = (int *)__vbaObjSet();
        puStack_1fc = (undefined *)pppiStack_190;
        piStack_204 = (int *)0x45ff61;
        piStack_200 = piVar11;
        iVar5 = (**(code **)(*piVar11 + 0x8c))();
        if (iVar5 < 0) {
          piStack_204 = (int *)0x8c;
          puStack_208 = &DAT_00417a98;
          puStack_214 = (undefined *)0x45ff79;
          piStack_210 = (int *)iVar5;
          piStack_20c = piVar11;
          __vbaHresultCheckObj();
        }
        piStack_204 = (int *)0x45ff7e;
        __vbaFreeObj();
        puStack_208 = (undefined *)0x45ff87;
        piStack_204 = piVar18;
        puStack_208 = (undefined *)(**(code **)(*piVar18 + 0x338))();
        piStack_20c = &iStack_198;
        piStack_210 = (int *)0x45ff92;
        piVar11 = (int *)__vbaObjSet();
        puStack_208 = (undefined *)pppiStack_190;
        piStack_210 = (int *)0x45ffa1;
        piStack_20c = piVar11;
        iVar5 = (**(code **)(*piVar11 + 0x94))();
        if (iVar5 < 0) {
          piStack_210 = (int *)0x94;
          puStack_214 = &DAT_0041807c;
          ppiStack_220 = (int **)0x45ffb9;
          ppiStack_21c = (int **)iVar5;
          piStack_218 = piVar11;
          __vbaHresultCheckObj();
        }
        piStack_210 = (int *)0x45ffbe;
        __vbaFreeObj();
        puStack_214 = (undefined *)0x45ffc7;
        piStack_210 = piVar18;
        puStack_214 = (undefined *)(**(code **)(*piVar18 + 0x330))();
        piStack_218 = &iStack_198;
        ppiStack_21c = (int **)0x45ffd2;
        piVar11 = (int *)__vbaObjSet();
        puStack_214 = (undefined *)pppiStack_190;
        ppiStack_21c = (int **)0x45ffe1;
        piStack_218 = piVar11;
        iVar5 = (**(code **)(*piVar11 + 0x94))();
        if (iVar5 < 0) {
          ppiStack_21c = (int **)0x94;
          ppiStack_220 = (int **)&DAT_0041807c;
          pvStack_22c = (void *)0x45fff9;
          piStack_228 = (int *)iVar5;
          piStack_224 = piVar11;
          __vbaHresultCheckObj();
        }
        ppiStack_21c = (int **)0x45fffe;
        __vbaFreeObj();
        uVar3 = 0;
        do {
          uVar17 = uVar3;
          sVar4 = (short)uVar17;
          if (2 < sVar4) {
            return;
          }
          ppiStack_220 = (int **)0x460017;
          ppiStack_21c = (int **)piVar18;
          ppiStack_220 = (int **)(**(code **)(*piVar18 + 0x340))();
          piStack_224 = &iStack_198;
          piStack_228 = (int *)0x460022;
          piVar11 = (int *)__vbaObjSet();
          ppiStack_220 = &piStack_19c;
          pvStack_22c = (void *)0x46002f;
          piStack_228 = piVar11;
          piStack_224 = (int *)uVar17;
          piVar19 = (int *)(**(code **)(*piVar11 + 0x40))();
          if ((int)piVar19 < 0) {
            pvStack_22c = (void *)0x40;
            piStack_230 = (int *)&DAT_004182e4;
            piStack_23c = (int *)0x460044;
            piStack_238 = piVar19;
            piStack_234 = piVar11;
            __vbaHresultCheckObj();
          }
          piVar11 = piStack_19c;
          pvStack_22c = pppiStack_190;
          piStack_230 = piStack_19c;
          piStack_234 = (int *)0x460056;
          piStack_228 = (int *)(**(code **)(*piStack_19c + 0x94))();
          if ((int)piStack_228 < 0) {
            ppiStack_21c = (int **)0x94;
            ppiStack_220 = (int **)&DAT_00418984;
            piStack_224 = piVar11;
            pvStack_22c = (void *)0x46006e;
            __vbaHresultCheckObj();
          }
          ppiStack_21c = &piStack_19c;
          ppiStack_220 = (int **)&iStack_198;
          piStack_224 = (int *)0x2;
          piStack_228 = (int *)0x46007e;
          __vbaFreeObjList();
          uVar3 = (uint)(ushort)(sVar4 + 1);
        } while (!SCARRY2(sVar4,1));
        ppiStack_21c = (int **)0x4600da;
        __vbaErrorOverflow();
        piStack_228 = (int *)&LAB_004032d6;
        pvStack_22c = ExceptionList;
        piStack_224 = (int *)&piStack_294;
        piStack_294 = piVar11;
        ppiStack_220 = (int **)&DAT_00402a90;
        ppiStack_21c = (int **)((uint)piStack_210 & 1);
        piVar11 = (int *)((uint)piStack_210 & 0xfffffffe);
        ExceptionList = &pvStack_22c;
        piStack_290 = piVar18;
        uStack_28c = uVar17;
        piStack_218 = (int *)&ppppiStack_178;
        piStack_210 = piVar11;
        (**(code **)(*piVar11 + 4))(piVar11);
        piStack_230 = (int *)0x0;
        piStack_234 = (int *)0x0;
        piStack_238 = (int *)0x0;
        piStack_23c = (int *)0x0;
        piStack_240 = (int *)0x0;
        auStack_250[0] = 0;
        uStack_254 = 0;
        iStack_258 = 0;
        apiStack_27c[0] = (int *)0x0;
        iVar5 = (**(code **)(*(int *)piVar11[0x10] + 0x70))((int *)piVar11[0x10],&piStack_238);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar11[0x10],&LAB_004133e8,0x70);
        }
        piVar19 = piStack_238;
        iVar5 = (**(code **)(*piStack_238 + 0x6c))(piStack_238,&piStack_23c);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar19,&LAB_004133f8,0x6c);
        }
        piVar19 = piStack_23c;
        uVar12 = (**(code **)(*piVar11 + 0x360))(piVar11);
        piVar18 = (int *)__vbaObjSet(&piStack_234,uVar12);
        iVar5 = (**(code **)(*piVar18 + 0xa8))(piVar18,&piStack_230);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar18,&DAT_0041807c,0xa8);
        }
        piStack_248 = piStack_230;
        piStack_230 = (int *)0x0;
        auStack_250[0] = 8;
        piVar18 = piVar19;
        iVar5 = (**(code **)(*piVar19 + 0x20))(piVar19,auStack_250,&piStack_240);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar19,&LAB_00414248,0x20);
        }
        piVar19 = piVar11 + 0xe;
        __vbaObjSetAddref(piVar19,piStack_240);
        __vbaFreeObjList(4,&piStack_234,&piStack_238,&piStack_23c,&piStack_240);
        __vbaFreeVar(piVar18);
        uVar12 = (**(code **)(*piVar11 + 0x310))(piVar11);
        __vbaObjSet(apiStack_27c,uVar12);
        iVar5 = (**(code **)(*(int *)*piVar19 + 0x44))((int *)*piVar19,&uStack_254);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,*piVar19,&DAT_00414268,0x44);
        }
        if (((short)uStack_254 == 0) || (piVar11[0x12] == 1)) {
          iVar5 = (**(code **)(*apiStack_27c[0] + 0xe4))(apiStack_27c[0],0);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,apiStack_27c[0],&DAT_00417e48,0xe4);
          }
          iVar5 = (**(code **)(*apiStack_27c[0] + 0x94))(apiStack_27c[0],0);
        }
        else {
          iVar5 = (**(code **)(*(int *)*piVar19 + 0x54))((int *)*piVar19,&iStack_258);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,*piVar19,&DAT_00414268,0x54);
          }
          iVar5 = *apiStack_27c[0];
          if (iStack_258 == 2) {
            iVar5 = (**(code **)(iVar5 + 0xe4))(apiStack_27c[0],0);
            if (iVar5 < 0) {
              __vbaHresultCheckObj(iVar5,apiStack_27c[0],&DAT_00417e48,0xe4);
            }
            uVar12 = 0;
            iVar5 = *apiStack_27c[0];
          }
          else {
            uVar12 = 0xffffffff;
          }
          iVar5 = (**(code **)(iVar5 + 0x94))(apiStack_27c[0],uVar12);
        }
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,apiStack_27c[0],&DAT_00417e48,0x94);
        }
        __vbaObjSetAddref(apiStack_27c,0);
        uVar12 = (**(code **)(*piVar11 + 0x324))(piVar11);
        piVar19 = (int *)__vbaObjSet(&piStack_234,uVar12);
        iVar5 = *piVar19;
        uVar12 = __vbaI2I4(&piStack_238);
        iVar5 = (**(code **)(iVar5 + 0x40))(piVar19,uVar12);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar19,&DAT_004182e4,0x40);
        }
        piVar19 = piStack_238;
        iVar5 = (**(code **)(*(int *)piVar11[0xe] + 0x24))((int *)piVar11[0xe],&uStack_254);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar11[0xe],&DAT_00414268,0x24);
        }
        iVar5 = (**(code **)(*piVar19 + 0x9c))(piVar19,~uStack_254);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar19,&DAT_00418984,0x9c);
        }
        __vbaFreeObjList(2,&piStack_234,&piStack_238);
        iVar5 = (**(code **)(*(int *)piVar11[0xe] + 0x24))((int *)piVar11[0xe],&uStack_254);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar11[0xe],&DAT_00414268,0x24);
        }
        if ((short)uStack_254 != 0) {
          uVar12 = (**(code **)(*piVar11 + 0x324))(piVar11);
          piVar19 = (int *)__vbaObjSet(&piStack_23c,uVar12);
          iVar5 = *piVar19;
          uVar12 = __vbaI2I4(&piStack_240);
          iVar5 = (**(code **)(iVar5 + 0x40))(piVar19,uVar12);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar19,&DAT_004182e4,0x40);
          }
          piVar19 = piStack_240;
          uVar12 = (**(code **)(*piVar11 + 0x324))(piVar11);
          piVar11 = (int *)__vbaObjSet(&piStack_234,uVar12);
          iVar5 = *piVar11;
          uVar12 = __vbaI2I4(&piStack_238);
          iVar5 = (**(code **)(iVar5 + 0x40))(piVar11,uVar12);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar11,&DAT_004182e4,0x40);
          }
          piVar11 = piStack_238;
          iVar5 = (**(code **)(*piStack_238 + 0xe0))(piStack_238,&uStack_254);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar11,&DAT_00418984,0xe0);
          }
          iVar5 = (**(code **)(*piVar19 + 0xe4))(piVar19,~uStack_254);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar19,&DAT_00418984,0xe4);
          }
          __vbaFreeObjList(4,&piStack_234,&piStack_238,&piStack_23c,&piStack_240);
        }
        ppiStack_21c = (int **)0x0;
        __vbaFreeObj(&LAB_0046053e);
        return;
      }
      pppiStack_104 = local_60;
      ppppiStack_108 = (int ****)0x45f932;
      pppiStack_114 = (int ***)(*(code *)(*local_60)[0x3d])();
      if ((int)pppiStack_114 < 0) {
        ppppiStack_108 = (int ****)0xf4;
        pppiStack_10c = (int ***)&DAT_0041807c;
        ppppiStack_110 = (int ****)pppiVar6;
        ppppiStack_118 = (int ****)0x45f94a;
        __vbaHresultCheckObj();
      }
      ppppiStack_108 = &local_2c;
      pppiStack_10c = &local_28;
      ppppiStack_110 = (int ****)0x2;
      pppiStack_114 = (int ***)0x45f95a;
      __vbaFreeObjList();
      ppppiStack_108 = (int ****)param_1;
      pppiStack_10c = (int ***)0x45f966;
      pppiStack_10c = (int ***)(*(code *)(*param_1)[0xd1])();
      ppppiStack_110 = &local_2c;
      pppiStack_114 = (int ***)0x45f96d;
      ppppiVar10 = (int ****)(*(code *)ppppiVar10)();
      pppiStack_114 = param_1;
      ppppiStack_118 = (int ****)0x45f978;
      ppppiStack_118 = (int ****)(*(code *)(*param_1)[0xd1])();
      pppiStack_11c = &local_28;
      pppiStack_120 = (int ***)0x45f983;
      ppppiVar8 = (int ****)__vbaObjSet();
      ppppiStack_118 = &local_54;
      pppiStack_120 = (int ***)0x45f992;
      pppiStack_11c = (int ***)ppppiVar8;
      pppiVar6 = (int ***)(*(code *)(*ppppiVar8)[0x3a])();
      uVar13 = extraout_var_01;
      if ((int)pppiVar6 < 0) {
        pppiStack_100 = (int ***)0xe8;
        pppiStack_104 = (int ***)&DAT_0041807c;
        ppppiStack_110 = (int ****)0x45f9aa;
        pppiStack_10c = pppiVar6;
        ppppiStack_108 = ppppiVar8;
        __vbaHresultCheckObj();
        uVar13 = extraout_var_02;
      }
      pppiStack_100 = (int ***)CONCAT22(uVar13,(short)local_54 + -1);
      if (SBORROW2((short)local_54,1)) goto LAB_0045fc0e;
      ppppiStack_108 = (int ****)0x45f9c2;
      pppiStack_104 = (int ***)ppppiVar10;
      ppppiStack_ec = (int ****)(*(code *)(*ppppiVar10)[0x3d])();
      if ((int)ppppiStack_ec < 0) {
        ppppiStack_e0 = (int ****)0xf4;
        ppppiStack_e4 = (int ****)&DAT_0041807c;
        pppiStack_f0 = (int ***)0x45f9da;
        ppppiStack_e8 = ppppiVar10;
        __vbaHresultCheckObj();
      }
      ppppiStack_e0 = &local_2c;
      ppppiStack_e4 = (int ****)&local_28;
      ppppiStack_e8 = (int ****)0x2;
      ppppiStack_ec = (int ****)0x45f9ea;
      __vbaFreeObjList();
      ppppiVar10 = (int ****)__vbaObjSet_exref;
    }
    ppppiStack_e0 = &local_1c;
    ppppiStack_e4 = (int ****)&local_70;
    ppppiStack_e8 = (int ****)&DAT_00414268;
    ppppiStack_ec = (int ****)0x45fa06;
    local_7c = __vbaNextEachCollObj();
  } while( true );
}

/* ---- 0x45fc20 (FUN_0045fc20) [estimated] strings:  ---- */
void __cdecl FUN_0045fc20(uint param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  short sVar5;
  void *pvVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piStack_19c;
  int *piStack_198;
  uint uStack_194;
  int *apiStack_184 [9];
  int iStack_160;
  uint uStack_15c;
  undefined4 auStack_158 [2];
  int *piStack_150;
  int *piStack_148;
  int *piStack_144;
  int *piStack_140;
  int *piStack_13c;
  int *piStack_138;
  void *pvStack_134;
  int *piStack_130;
  int *piStack_12c;
  int **ppiStack_128;
  int **ppiStack_124;
  int *piStack_120;
  undefined *puStack_11c;
  int *piStack_118;
  int *piStack_114;
  undefined *puStack_110;
  int *piStack_10c;
  int *piStack_108;
  undefined *puStack_104;
  int *piStack_100;
  int *piStack_fc;
  undefined *puStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  undefined *puStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  undefined4 *puStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_a8;
  int *piStack_a4;
  int iStack_a0;
  int *piStack_9c;
  int *piStack_98;
  void *pvStack_94;
  int *piStack_90;
  int *piStack_8c;
  int **ppiStack_88;
  int **ppiStack_84;
  int *piStack_80;
  undefined *puStack_7c;
  int *piStack_78;
  int *piStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  int *piStack_68;
  undefined4 *puStack_64;
  int *piStack_60;
  int *piStack_5c;
  undefined4 local_2c;
  int *local_28;
  int local_24 [2];
  void *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa8;
  local_c = &DAT_00402a70;
  local_8 = param_1 & 1;
  piVar10 = (int *)(param_1 & 0xfffffffe);
  piStack_60 = (int *)0x45fc60;
  ExceptionList = &pvStack_18;
  piStack_5c = piVar10;
  (**(code **)(*piVar10 + 4))();
  local_24[0] = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  puStack_64 = (undefined4 *)0x45fc74;
  piStack_60 = piVar10;
  puStack_64 = (undefined4 *)(**(code **)(*piVar10 + 0x310))();
  piStack_68 = local_24;
  piStack_6c = (int *)0x45fc81;
  piVar2 = (int *)__vbaObjSet();
  puStack_64 = &local_2c;
  piStack_6c = (int *)0x45fc90;
  piStack_68 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xe0))();
  if (iVar3 < 0) {
    piStack_6c = (int *)0xe0;
    puStack_70 = &DAT_00417e48;
    puStack_7c = (undefined *)0x45fca8;
    piStack_78 = (int *)iVar3;
    piStack_74 = piVar2;
    __vbaHresultCheckObj();
  }
  pvVar6 = (void *)-(uint)((short)local_2c == 1);
  piStack_6c = (int *)0x45fcc0;
  local_1c = pvVar6;
  __vbaFreeObj();
  puStack_70 = (undefined *)0x45fcc9;
  piStack_6c = piVar10;
  puStack_70 = (undefined *)(**(code **)(*piVar10 + 0x314))();
  piStack_74 = local_24;
  piStack_78 = (int *)0x45fcd0;
  piVar2 = (int *)__vbaObjSet();
  piStack_78 = (int *)0x45fcdc;
  piStack_74 = piVar2;
  puStack_70 = pvVar6;
  iVar3 = (**(code **)(*piVar2 + 0x94))();
  if (iVar3 < 0) {
    piStack_78 = (int *)0x94;
    puStack_7c = &DAT_0041807c;
    ppiStack_88 = (int **)0x45fcf4;
    ppiStack_84 = (int **)iVar3;
    piStack_80 = piVar2;
    __vbaHresultCheckObj();
  }
  piStack_78 = (int *)0x45fcfd;
  __vbaFreeObj();
  puStack_7c = (undefined *)0x45fd06;
  piStack_78 = piVar10;
  puStack_7c = (undefined *)(**(code **)(*piVar10 + 0x318))();
  piStack_80 = local_24;
  ppiStack_84 = (int **)0x45fd11;
  piVar2 = (int *)__vbaObjSet();
  ppiStack_84 = (int **)0x45fd1d;
  piStack_80 = piVar2;
  puStack_7c = pvVar6;
  iVar3 = (**(code **)(*piVar2 + 0x8c))();
  if (iVar3 < 0) {
    ppiStack_84 = (int **)0x8c;
    ppiStack_88 = (int **)&DAT_00417a98;
    pvStack_94 = (void *)0x45fd35;
    piStack_90 = (int *)iVar3;
    piStack_8c = piVar2;
    __vbaHresultCheckObj();
  }
  ppiStack_84 = (int **)0x45fd3e;
  __vbaFreeObj();
  uVar4 = 0;
  do {
    uVar7 = uVar4;
    sVar5 = (short)uVar7;
    if (3 < sVar5) {
      return;
    }
    ppiStack_88 = (int **)0x45fd5e;
    ppiStack_84 = (int **)piVar10;
    ppiStack_88 = (int **)(**(code **)(*piVar10 + 0x31c))();
    piStack_8c = local_24;
    piStack_90 = (int *)0x45fd69;
    piVar2 = (int *)__vbaObjSet();
    ppiStack_88 = &local_28;
    pvStack_94 = (void *)0x45fd76;
    piStack_90 = piVar2;
    piStack_8c = (int *)uVar7;
    iVar3 = (**(code **)(*piVar2 + 0x40))();
    if (iVar3 < 0) {
      pvStack_94 = (void *)0x40;
      piStack_98 = (int *)&DAT_004182e4;
      piStack_a4 = (int *)0x45fd8b;
      iStack_a0 = iVar3;
      piStack_9c = piVar2;
      __vbaHresultCheckObj();
    }
    piVar2 = local_28;
    pvStack_94 = local_1c;
    piStack_98 = local_28;
    piStack_9c = (int *)0x45fd9d;
    piStack_90 = (int *)(**(code **)(*local_28 + 0x94))();
    if ((int)piStack_90 < 0) {
      ppiStack_84 = (int **)0x94;
      ppiStack_88 = (int **)&DAT_00418984;
      piStack_8c = piVar2;
      pvStack_94 = (void *)0x45fdb5;
      __vbaHresultCheckObj();
    }
    ppiStack_84 = &local_28;
    ppiStack_88 = (int **)local_24;
    piStack_8c = (int *)0x2;
    piStack_90 = (int *)0x45fdc5;
    __vbaFreeObjList();
    uVar4 = CONCAT22(extraout_var,sVar5 + 1);
  } while (!SCARRY2(sVar5,1));
  ppiStack_84 = (int **)0x45fe20;
  __vbaErrorOverflow();
  piStack_90 = (int *)&LAB_004032d6;
  pvStack_94 = ExceptionList;
  piStack_d0 = piVar2;
  piStack_8c = (int *)&piStack_d4;
  ppiStack_88 = (int **)&DAT_00402a80;
  ppiStack_84 = (int **)((uint)piStack_78 & 1);
  piVar9 = (int *)((uint)piStack_78 & 0xfffffffe);
  piStack_dc = (int *)0x45fe60;
  ExceptionList = &pvStack_94;
  piStack_d8 = piVar9;
  piStack_d4 = piVar10;
  uStack_cc = uVar7;
  piStack_80 = (int *)&stack0xfffffffc;
  piStack_78 = piVar9;
  (**(code **)(*piVar9 + 4))();
  iStack_a0 = 0;
  piStack_a4 = (int *)0x0;
  uStack_a8 = 0;
  puStack_e0 = (undefined4 *)0x45fe74;
  piStack_dc = piVar9;
  puStack_e0 = (undefined4 *)(**(code **)(*piVar9 + 0x348))();
  piStack_e4 = &iStack_a0;
  piStack_e8 = (int *)0x45fe81;
  piVar2 = (int *)__vbaObjSet();
  puStack_e0 = &uStack_a8;
  piStack_e8 = (int *)0x45fe90;
  piStack_e4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xe0))();
  if (iVar3 < 0) {
    piStack_e8 = (int *)0xe0;
    puStack_ec = &DAT_00417e48;
    puStack_f8 = (undefined *)0x45fea8;
    piStack_f4 = (int *)iVar3;
    piStack_f0 = piVar2;
    __vbaHresultCheckObj();
  }
  piStack_98 = (int *)-(uint)((short)uStack_a8 == 1);
  piStack_e8 = (int *)0x45fec2;
  __vbaFreeObj();
  puStack_ec = (undefined *)0x45fecb;
  piStack_e8 = piVar9;
  puStack_ec = (undefined *)(**(code **)(*piVar9 + 0x344))();
  piStack_f0 = &iStack_a0;
  piStack_f4 = (int *)0x45fed2;
  piVar2 = (int *)__vbaObjSet();
  puStack_ec = (undefined *)piStack_98;
  piStack_f4 = (int *)0x45fee1;
  piStack_f0 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x94))();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x94;
    puStack_f8 = &DAT_0041807c;
    puStack_104 = (undefined *)0x45fef9;
    piStack_100 = (int *)iVar3;
    piStack_fc = piVar2;
    __vbaHresultCheckObj();
  }
  piStack_f4 = (int *)0x45fefe;
  __vbaFreeObj();
  puStack_f8 = (undefined *)0x45ff07;
  piStack_f4 = piVar9;
  puStack_f8 = (undefined *)(**(code **)(*piVar9 + 0x33c))();
  piStack_fc = &iStack_a0;
  piStack_100 = (int *)0x45ff12;
  piVar2 = (int *)__vbaObjSet();
  puStack_f8 = (undefined *)piStack_98;
  piStack_100 = (int *)0x45ff21;
  piStack_fc = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x8c))();
  if (iVar3 < 0) {
    piStack_100 = (int *)0x8c;
    puStack_104 = &DAT_00417a98;
    puStack_110 = (undefined *)0x45ff39;
    piStack_10c = (int *)iVar3;
    piStack_108 = piVar2;
    __vbaHresultCheckObj();
  }
  piStack_100 = (int *)0x45ff3e;
  __vbaFreeObj();
  puStack_104 = (undefined *)0x45ff47;
  piStack_100 = piVar9;
  puStack_104 = (undefined *)(**(code **)(*piVar9 + 0x334))();
  piStack_108 = &iStack_a0;
  piStack_10c = (int *)0x45ff52;
  piVar2 = (int *)__vbaObjSet();
  puStack_104 = (undefined *)piStack_98;
  piStack_10c = (int *)0x45ff61;
  piStack_108 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x8c))();
  if (iVar3 < 0) {
    piStack_10c = (int *)0x8c;
    puStack_110 = &DAT_00417a98;
    puStack_11c = (undefined *)0x45ff79;
    piStack_118 = (int *)iVar3;
    piStack_114 = piVar2;
    __vbaHresultCheckObj();
  }
  piStack_10c = (int *)0x45ff7e;
  __vbaFreeObj();
  puStack_110 = (undefined *)0x45ff87;
  piStack_10c = piVar9;
  puStack_110 = (undefined *)(**(code **)(*piVar9 + 0x338))();
  piStack_114 = &iStack_a0;
  piStack_118 = (int *)0x45ff92;
  piVar2 = (int *)__vbaObjSet();
  puStack_110 = (undefined *)piStack_98;
  piStack_118 = (int *)0x45ffa1;
  piStack_114 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x94))();
  if (iVar3 < 0) {
    piStack_118 = (int *)0x94;
    puStack_11c = &DAT_0041807c;
    ppiStack_128 = (int **)0x45ffb9;
    ppiStack_124 = (int **)iVar3;
    piStack_120 = piVar2;
    __vbaHresultCheckObj();
  }
  piStack_118 = (int *)0x45ffbe;
  __vbaFreeObj();
  puStack_11c = (undefined *)0x45ffc7;
  piStack_118 = piVar9;
  puStack_11c = (undefined *)(**(code **)(*piVar9 + 0x330))();
  piStack_120 = &iStack_a0;
  ppiStack_124 = (int **)0x45ffd2;
  piVar2 = (int *)__vbaObjSet();
  puStack_11c = (undefined *)piStack_98;
  ppiStack_124 = (int **)0x45ffe1;
  piStack_120 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x94))();
  if (iVar3 < 0) {
    ppiStack_124 = (int **)0x94;
    ppiStack_128 = (int **)&DAT_0041807c;
    pvStack_134 = (void *)0x45fff9;
    piStack_130 = (int *)iVar3;
    piStack_12c = piVar2;
    __vbaHresultCheckObj();
  }
  ppiStack_124 = (int **)0x45fffe;
  __vbaFreeObj();
  uVar1 = 0;
  do {
    uVar8 = uVar1;
    sVar5 = (short)uVar8;
    if (2 < sVar5) {
      return;
    }
    ppiStack_128 = (int **)0x460017;
    ppiStack_124 = (int **)piVar9;
    ppiStack_128 = (int **)(**(code **)(*piVar9 + 0x340))();
    piStack_12c = &iStack_a0;
    piStack_130 = (int *)0x460022;
    piVar2 = (int *)__vbaObjSet();
    ppiStack_128 = &piStack_a4;
    pvStack_134 = (void *)0x46002f;
    piStack_130 = piVar2;
    piStack_12c = (int *)uVar8;
    piVar10 = (int *)(**(code **)(*piVar2 + 0x40))();
    if ((int)piVar10 < 0) {
      pvStack_134 = (void *)0x40;
      piStack_138 = (int *)&DAT_004182e4;
      piStack_144 = (int *)0x460044;
      piStack_140 = piVar10;
      piStack_13c = piVar2;
      __vbaHresultCheckObj();
    }
    piVar2 = piStack_a4;
    pvStack_134 = piStack_98;
    piStack_138 = piStack_a4;
    piStack_13c = (int *)0x460056;
    piStack_130 = (int *)(**(code **)(*piStack_a4 + 0x94))();
    if ((int)piStack_130 < 0) {
      ppiStack_124 = (int **)0x94;
      ppiStack_128 = (int **)&DAT_00418984;
      piStack_12c = piVar2;
      pvStack_134 = (void *)0x46006e;
      __vbaHresultCheckObj();
    }
    ppiStack_124 = &piStack_a4;
    ppiStack_128 = (int **)&iStack_a0;
    piStack_12c = (int *)0x2;
    piStack_130 = (int *)0x46007e;
    __vbaFreeObjList();
    uVar1 = (uint)(ushort)(sVar5 + 1);
  } while (!SCARRY2(sVar5,1));
  ppiStack_124 = (int **)0x4600da;
  __vbaErrorOverflow();
  piStack_130 = (int *)&LAB_004032d6;
  pvStack_134 = ExceptionList;
  piStack_12c = (int *)&piStack_19c;
  piStack_19c = piVar2;
  ppiStack_128 = (int **)&DAT_00402a90;
  ppiStack_124 = (int **)((uint)piStack_118 & 1);
  piVar2 = (int *)((uint)piStack_118 & 0xfffffffe);
  ExceptionList = &pvStack_134;
  piStack_198 = piVar9;
  uStack_194 = uVar8;
  piStack_120 = (int *)&piStack_80;
  piStack_118 = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  piStack_138 = (int *)0x0;
  piStack_13c = (int *)0x0;
  piStack_140 = (int *)0x0;
  piStack_144 = (int *)0x0;
  piStack_148 = (int *)0x0;
  auStack_158[0] = 0;
  uStack_15c = 0;
  iStack_160 = 0;
  apiStack_184[0] = (int *)0x0;
  iVar3 = (**(code **)(*(int *)piVar2[0x10] + 0x70))((int *)piVar2[0x10],&piStack_140);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2[0x10],&LAB_004133e8,0x70);
  }
  piVar10 = piStack_140;
  iVar3 = (**(code **)(*piStack_140 + 0x6c))(piStack_140,&piStack_144);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar10,&LAB_004133f8,0x6c);
  }
  piVar10 = piStack_144;
  uVar4 = (**(code **)(*piVar2 + 0x360))(piVar2);
  piVar9 = (int *)__vbaObjSet(&piStack_13c,uVar4);
  iVar3 = (**(code **)(*piVar9 + 0xa8))(piVar9,&piStack_138);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar9,&DAT_0041807c,0xa8);
  }
  piStack_150 = piStack_138;
  piStack_138 = (int *)0x0;
  auStack_158[0] = 8;
  piVar9 = piVar10;
  iVar3 = (**(code **)(*piVar10 + 0x20))(piVar10,auStack_158,&piStack_148);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar10,&LAB_00414248,0x20);
  }
  piVar10 = piVar2 + 0xe;
  __vbaObjSetAddref(piVar10,piStack_148);
  __vbaFreeObjList(4,&piStack_13c,&piStack_140,&piStack_144,&piStack_148);
  __vbaFreeVar(piVar9);
  uVar4 = (**(code **)(*piVar2 + 0x310))(piVar2);
  __vbaObjSet(apiStack_184,uVar4);
  iVar3 = (**(code **)(*(int *)*piVar10 + 0x44))((int *)*piVar10,&uStack_15c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,*piVar10,&DAT_00414268,0x44);
  }
  if (((short)uStack_15c == 0) || (piVar2[0x12] == 1)) {
    iVar3 = (**(code **)(*apiStack_184[0] + 0xe4))(apiStack_184[0],0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,apiStack_184[0],&DAT_00417e48,0xe4);
    }
    iVar3 = (**(code **)(*apiStack_184[0] + 0x94))(apiStack_184[0],0);
  }
  else {
    iVar3 = (**(code **)(*(int *)*piVar10 + 0x54))((int *)*piVar10,&iStack_160);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,*piVar10,&DAT_00414268,0x54);
    }
    iVar3 = *apiStack_184[0];
    if (iStack_160 == 2) {
      iVar3 = (**(code **)(iVar3 + 0xe4))(apiStack_184[0],0);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,apiStack_184[0],&DAT_00417e48,0xe4);
      }
      uVar4 = 0;
      iVar3 = *apiStack_184[0];
    }
    else {
      uVar4 = 0xffffffff;
    }
    iVar3 = (**(code **)(iVar3 + 0x94))(apiStack_184[0],uVar4);
  }
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,apiStack_184[0],&DAT_00417e48,0x94);
  }
  __vbaObjSetAddref(apiStack_184,0);
  uVar4 = (**(code **)(*piVar2 + 0x324))(piVar2);
  piVar10 = (int *)__vbaObjSet(&piStack_13c,uVar4);
  iVar3 = *piVar10;
  uVar4 = __vbaI2I4(&piStack_140);
  iVar3 = (**(code **)(iVar3 + 0x40))(piVar10,uVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar10,&DAT_004182e4,0x40);
  }
  piVar10 = piStack_140;
  iVar3 = (**(code **)(*(int *)piVar2[0xe] + 0x24))((int *)piVar2[0xe],&uStack_15c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2[0xe],&DAT_00414268,0x24);
  }
  iVar3 = (**(code **)(*piVar10 + 0x9c))(piVar10,~uStack_15c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar10,&DAT_00418984,0x9c);
  }
  __vbaFreeObjList(2,&piStack_13c,&piStack_140);
  iVar3 = (**(code **)(*(int *)piVar2[0xe] + 0x24))((int *)piVar2[0xe],&uStack_15c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2[0xe],&DAT_00414268,0x24);
  }
  if ((short)uStack_15c != 0) {
    uVar4 = (**(code **)(*piVar2 + 0x324))(piVar2);
    piVar10 = (int *)__vbaObjSet(&piStack_144,uVar4);
    iVar3 = *piVar10;
    uVar4 = __vbaI2I4(&piStack_148);
    iVar3 = (**(code **)(iVar3 + 0x40))(piVar10,uVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar10,&DAT_004182e4,0x40);
    }
    piVar10 = piStack_148;
    uVar4 = (**(code **)(*piVar2 + 0x324))(piVar2);
    piVar2 = (int *)__vbaObjSet(&piStack_13c,uVar4);
    iVar3 = *piVar2;
    uVar4 = __vbaI2I4(&piStack_140);
    iVar3 = (**(code **)(iVar3 + 0x40))(piVar2,uVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004182e4,0x40);
    }
    piVar2 = piStack_140;
    iVar3 = (**(code **)(*piStack_140 + 0xe0))(piStack_140,&uStack_15c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00418984,0xe0);
    }
    iVar3 = (**(code **)(*piVar10 + 0xe4))(piVar10,~uStack_15c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar10,&DAT_00418984,0xe4);
    }
    __vbaFreeObjList(4,&piStack_13c,&piStack_140,&piStack_144,&piStack_148);
  }
  ppiStack_124 = (int **)0x0;
  __vbaFreeObj(&LAB_0046053e);
  return;
}

/* ---- 0x4600e0 (FUN_004600e0) [estimated] strings:  ---- */
void __cdecl FUN_004600e0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *local_68 [9];
  int local_44;
  uint local_40;
  undefined4 local_3c [2];
  undefined4 local_34;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff80;
  local_c = &DAT_00402a90;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_3c[0] = 0;
  local_40 = 0;
  local_44 = 0;
  local_68[0] = (int *)0x0;
  iVar1 = (**(code **)(*(int *)piVar5[0x10] + 0x70))((int *)piVar5[0x10],&local_24);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5[0x10],&LAB_004133e8,0x70);
  }
  piVar4 = local_24;
  iVar1 = (**(code **)(*local_24 + 0x6c))(local_24,&local_28);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&LAB_004133f8,0x6c);
  }
  piVar4 = local_28;
  uVar2 = (**(code **)(*piVar5 + 0x360))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_0041807c,0xa8);
  }
  local_34 = local_1c;
  local_1c = 0;
  local_3c[0] = 8;
  piVar3 = piVar4;
  iVar1 = (**(code **)(*piVar4 + 0x20))(piVar4,local_3c,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&LAB_00414248,0x20);
  }
  piVar4 = piVar5 + 0xe;
  __vbaObjSetAddref(piVar4,local_2c);
  __vbaFreeObjList(4,&local_20,&local_24,&local_28,&local_2c);
  __vbaFreeVar(piVar3);
  uVar2 = (**(code **)(*piVar5 + 0x310))(piVar5);
  __vbaObjSet(local_68,uVar2);
  iVar1 = (**(code **)(*(int *)*piVar4 + 0x44))((int *)*piVar4,&local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,*piVar4,&DAT_00414268,0x44);
  }
  if (((short)local_40 == 0) || (piVar5[0x12] == 1)) {
    iVar1 = (**(code **)(*local_68[0] + 0xe4))(local_68[0],0);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_68[0],&DAT_00417e48,0xe4);
    }
    iVar1 = (**(code **)(*local_68[0] + 0x94))(local_68[0],0);
  }
  else {
    iVar1 = (**(code **)(*(int *)*piVar4 + 0x54))((int *)*piVar4,&local_44);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,*piVar4,&DAT_00414268,0x54);
    }
    iVar1 = *local_68[0];
    if (local_44 == 2) {
      iVar1 = (**(code **)(iVar1 + 0xe4))(local_68[0],0);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_68[0],&DAT_00417e48,0xe4);
      }
      uVar2 = 0;
      iVar1 = *local_68[0];
    }
    else {
      uVar2 = 0xffffffff;
    }
    iVar1 = (**(code **)(iVar1 + 0x94))(local_68[0],uVar2);
  }
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,local_68[0],&DAT_00417e48,0x94);
  }
  __vbaObjSetAddref(local_68,0);
  uVar2 = (**(code **)(*piVar5 + 0x324))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar1 = *piVar4;
  uVar2 = __vbaI2I4(&local_24);
  iVar1 = (**(code **)(iVar1 + 0x40))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004182e4,0x40);
  }
  piVar4 = local_24;
  iVar1 = (**(code **)(*(int *)piVar5[0xe] + 0x24))((int *)piVar5[0xe],&local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5[0xe],&DAT_00414268,0x24);
  }
  iVar1 = (**(code **)(*piVar4 + 0x9c))(piVar4,~local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00418984,0x9c);
  }
  __vbaFreeObjList(2,&local_20,&local_24);
  iVar1 = (**(code **)(*(int *)piVar5[0xe] + 0x24))((int *)piVar5[0xe],&local_40);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5[0xe],&DAT_00414268,0x24);
  }
  if ((short)local_40 != 0) {
    uVar2 = (**(code **)(*piVar5 + 0x324))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar1 = *piVar4;
    uVar2 = __vbaI2I4(&local_2c);
    iVar1 = (**(code **)(iVar1 + 0x40))(piVar4,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_004182e4,0x40);
    }
    piVar4 = local_2c;
    uVar2 = (**(code **)(*piVar5 + 0x324))(piVar5);
    piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = *piVar5;
    uVar2 = __vbaI2I4(&local_24);
    iVar1 = (**(code **)(iVar1 + 0x40))(piVar5,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar5,&DAT_004182e4,0x40);
    }
    piVar5 = local_24;
    iVar1 = (**(code **)(*local_24 + 0xe0))(local_24,&local_40);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar5,&DAT_00418984,0xe0);
    }
    iVar1 = (**(code **)(*piVar4 + 0xe4))(piVar4,~local_40);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00418984,0xe4);
    }
    __vbaFreeObjList(4,&local_20,&local_24,&local_28,&local_2c);
  }
  local_8 = 0;
  __vbaFreeObj(&LAB_0046053e);
  return;
}
