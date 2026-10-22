/* Object #33 FileAccess -- ESTIMATED function range; public methods per VB header: CommentChar, DelimiterChar, DelimiterCharRight, DelimiterCharLeft, FileAbsent, FileName */
#include "ghidra_types.h"

/* ---- 0x477f60 (FUN_00477f60) [estimated] strings:  ---- */
void __cdecl FUN_00477f60(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402f70;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x477ff0 (FUN_00477ff0) [estimated] strings:  ---- */
undefined4 FUN_00477ff0(int *param_1,undefined2 *param_2)

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
  local_c = &DAT_00402f80;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_20 = 0;
  local_1c = 0;
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x1c))((int *)param_1[0x14],&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_0041462c,0x1c);
  }
  local_1c = local_20;
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (undefined2)local_1c;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x478090 (FUN_00478090) [estimated] strings:  ---- */
void __cdecl FUN_00478090(int *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00402f88;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  sVar1 = __vbaObjIs(param_1[0x14],0);
  if (sVar1 == 0) {
    iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x24))((int *)param_1[0x14],&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0x14],&DAT_0041462c);
    }
    local_20 = 0;
    __vbaStrMove();
  }
  else {
    __vbaStrCopy(piVar3);
  }
  return;
}

/* ---- 0x478170 (FUN_00478170) [estimated] strings:  ---- */
void __cdecl FUN_00478170(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00402f98;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x2c))((int *)param_1[0x14],&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_0041462c,0x2c);
  }
  local_20 = 0;
  __vbaStrMove();
  return;
}

/* ---- 0x478230 (FUN_00478230) [estimated] strings:  ---- */
undefined4 FUN_00478230(int *param_1,int *param_2)

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
  local_c = &DAT_00402fa8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x16];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = iVar1;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4782a0 (FUN_004782a0) [estimated] strings:  ---- */
void __cdecl FUN_004782a0(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402fb0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  __vbaStrCopy();
  return;
}

/* ---- 0x478340 (FUN_00478340) [estimated] strings:  ---- */
void __cdecl FUN_00478340(int *param_1)

{
  undefined2 extraout_var;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 extraout_var_00;
  undefined2 uVar4;
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
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff44;
  local_c = &DAT_00402fc0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  uVar4 = extraout_var;
  if ((short)param_1[0xd] == 0) {
    uVar1 = rtcErrObj();
    piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
    local_58 = 0x80020004;
    local_48 = 0x80020004;
    local_60[0] = 10;
    local_50[0] = 10;
    __vbaVarDup();
    __vbaVarDup();
    iVar3 = (**(code **)(*piVar2 + 0x44))(piVar2,0x440,local_30,local_40,local_50,local_60);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
    uVar4 = extraout_var_00;
  }
  rtcEndOfFile(CONCAT22(uVar4,(short)param_1[0x12]));
  return;
}

/* ---- 0x4784c0 (FUN_004784c0) [estimated] strings:  ---- */
undefined4 FUN_004784c0(int *param_1)

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
  local_c = &DAT_00402fd0;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_00414258,0x48);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x40))((int *)param_1[0x14]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_0041462c,0x40);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x478560 (FUN_00478560) [estimated] strings:  ---- */
undefined4 FUN_00478560(int *param_1)

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
  local_c = &DAT_00402fd8;
  local_8 = 0;
  ExceptionList = &local_18;
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaStrCopy(piVar1);
  __vbaStrCopy();
  if ((short)param_1[0xd] != 0) {
    __vbaFileClose();
    *(undefined2 *)(param_1 + 0xd) = 0;
  }
  (**(code **)(*param_1 + 8))();
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4785f0 (FUN_004785f0) [estimated] strings:  ---- */
void __cdecl FUN_004785f0(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
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
  local_10 = &stack0xffffff44;
  local_c = &DAT_00402fe0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x24))((int *)param_1[0x14],&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x14],&DAT_0041462c,0x24);
  }
  iVar2 = __vbaLenBstr(local_1c);
  __vbaFreeStr();
  if (iVar2 == 0) {
    uVar3 = rtcErrObj();
    piVar4 = (int *)__vbaObjSet(&local_20,uVar3);
    local_58 = 0x80020004;
    local_48 = 0x80020004;
    local_60[0] = 10;
    local_50[0] = 10;
    __vbaVarDup();
    __vbaVarDup();
    iVar2 = (**(code **)(*piVar4 + 0x44))(piVar4,0x403,local_30,local_40,local_50,local_60);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
  }
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00414258,0x48);
  }
  local_28 = 0x80020004;
  local_30[0] = 10;
  uVar1 = rtcFreeFile(local_30);
  *(undefined2 *)(param_1 + 0x12) = uVar1;
  __vbaFreeVar(piVar4);
  iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x44))((int *)param_1[0x14],param_1 + 0x12);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x14],&DAT_0041462c,0x44);
  }
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  param_1[0x16] = 0;
  return;
}

/* ---- 0x478800 (FUN_00478800) [estimated] strings:  ---- */
void __cdecl FUN_00478800(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
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
  local_10 = &stack0xffffff44;
  local_c = &DAT_00402ff0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x24))((int *)param_1[0x14],&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x14],&DAT_0041462c,0x24);
  }
  iVar2 = __vbaLenBstr(local_1c);
  __vbaFreeStr();
  if (iVar2 == 0) {
    uVar3 = rtcErrObj();
    piVar4 = (int *)__vbaObjSet(&local_20,uVar3);
    local_58 = 0x80020004;
    local_48 = 0x80020004;
    local_60[0] = 10;
    local_50[0] = 10;
    __vbaVarDup();
    __vbaVarDup();
    iVar2 = (**(code **)(*piVar4 + 0x44))(piVar4,0x403,local_30,local_40,local_50,local_60);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
  }
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00414258,0x48);
  }
  local_28 = 0x80020004;
  local_30[0] = 10;
  uVar1 = rtcFreeFile(local_30);
  *(undefined2 *)(param_1 + 0x12) = uVar1;
  __vbaFreeVar(piVar4);
  iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x48))((int *)param_1[0x14],param_1 + 0x12);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x14],&DAT_0041462c,0x48);
  }
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  return;
}

/* ---- 0x478a10 (FUN_00478a10) [estimated] strings:  ---- */
void __cdecl FUN_00478a10(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff44;
  local_c = &LAB_00403000;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x24))((int *)param_1[0x14],&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x14],&DAT_0041462c,0x24);
  }
  iVar2 = __vbaLenBstr(local_1c);
  __vbaFreeStr();
  if (iVar2 == 0) {
    uVar3 = rtcErrObj();
    piVar4 = (int *)__vbaObjSet(&local_20,uVar3);
    local_58 = 0x80020004;
    local_48 = 0x80020004;
    local_60[0] = 10;
    local_50[0] = 10;
    __vbaVarDup();
    __vbaVarDup();
    iVar2 = (**(code **)(*piVar4 + 0x44))(piVar4,0x403,local_30,local_40,local_50,local_60);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
  }
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00414258,0x48);
  }
  local_28 = 0x80020004;
  local_30[0] = 10;
  uVar1 = rtcFreeFile(local_30);
  *(undefined2 *)(param_1 + 0x12) = uVar1;
  __vbaFreeVar(piVar4);
  iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x4c))((int *)param_1[0x14],param_1 + 0x12);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x14],&DAT_0041462c,0x4c);
  }
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  return;
}

/* ---- 0x478c20 (FUN_00478c20) [estimated] strings:  ---- */
void __cdecl FUN_00478c20(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
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
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff34;
  local_c = &DAT_00403010;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  sVar2 = __vbaObjIs(*param_4,0);
  piVar1 = param_1 + 0x13;
  if (sVar2 == 0) {
    __vbaObjSetAddref(piVar1,*param_4);
  }
  else {
    sVar2 = __vbaObjIs(*piVar1,0);
    if (sVar2 != 0) {
      uVar5 = rtcErrObj();
      piVar3 = (int *)__vbaObjSet(&local_20,uVar5);
      local_58 = 0x80020004;
      local_48 = 0x80020004;
      local_60[0] = 10;
      local_50[0] = 10;
      __vbaVarDup();
      __vbaVarDup();
      iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3,0x44c,local_30,local_40,local_50,local_60);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_00413af4,0x44);
      }
      __vbaFreeObj();
      __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
    }
  }
  iVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,param_1,&DAT_00414258,0x48);
  }
  piVar3 = param_1 + 0x14;
  iVar4 = __vbaStrCmp(&DAT_00412f74,*param_3);
  sVar2 = __vbaObjIs(*piVar3,0);
  if (iVar4 == 0 && sVar2 == 0) {
    iVar4 = (**(code **)(*(int *)*piVar3 + 0x2c))((int *)*piVar3,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,*piVar3,&DAT_0041462c,0x2c);
    }
    local_1c = 0;
    __vbaStrMove();
  }
  iVar4 = __vbaStrCmp(&DAT_00412f74,*param_3);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)*piVar1 + 0x20))((int *)*piVar1,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,*piVar1,&DAT_004146ac,0x20);
    }
    local_1c = 0;
    __vbaStrMove();
  }
  uVar5 = __vbaNew(&DAT_00407428);
  uVar5 = __vbaObjSet(&local_20,uVar5);
  __vbaObjSetAddref(piVar3,uVar5);
  __vbaFreeObj();
  iVar4 = (**(code **)(*(int *)*piVar3 + 0x50))((int *)*piVar3,*param_3,param_2,piVar1);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,*piVar3,&DAT_0041462c,0x50);
  }
  return;
}

/* ---- 0x478ee0 (FUN_00478ee0) [estimated] strings:  ---- */
void __cdecl FUN_00478ee0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &LAB_00403020;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00414258,0x48);
  }
  piVar1 = param_1 + 0x14;
  uVar3 = __vbaNew(&DAT_00407428);
  uVar3 = __vbaObjSet(&local_1c,uVar3);
  __vbaObjSetAddref(piVar1,uVar3);
  __vbaFreeObj();
  iVar2 = (**(code **)(*(int *)*piVar1 + 0x54))((int *)*piVar1,param_2);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*piVar1,&DAT_0041462c,0x54);
  }
  iVar2 = (**(code **)(*(int *)*piVar1 + 0x20))((int *)*piVar1,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*piVar1,&DAT_0041462c,0x20);
  }
  __vbaObjSetAddref(param_1 + 0x13,local_1c);
  __vbaFreeObj();
  return;
}

/* ---- 0x478ff0 (FUN_00478ff0) [estimated] strings:  ---- */
void __cdecl FUN_00478ff0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [4];
  undefined4 local_34 [4];
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
  local_10 = &stack0xffffff38;
  local_c = &DAT_00403030;
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
  sVar3 = __vbaObjIs(*param_2,0);
  piVar1 = param_1 + 0x13;
  if (sVar3 == 0) {
    __vbaObjSetAddref(piVar1,*param_2);
  }
  else {
    sVar3 = __vbaObjIs(*piVar1,0);
    if (sVar3 != 0) {
      uVar6 = rtcErrObj();
      piVar4 = (int *)__vbaObjSet(&local_24,uVar6);
      local_5c = 0x80020004;
      local_4c = 0x80020004;
      local_64[0] = 10;
      local_54[0] = 10;
      __vbaVarDup();
      __vbaVarDup();
      iVar5 = (**(code **)(*piVar4 + 0x44))(piVar4,0x44c,local_34,local_44,local_54,local_64);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_00413af4,0x44);
      }
      __vbaFreeObj();
      __vbaFreeVarList(4,local_34,local_44,local_54,local_64);
    }
  }
  iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,param_1,&DAT_00414258,0x48);
  }
  piVar4 = param_1 + 0x14;
  uVar6 = __vbaNew(&DAT_00407428);
  uVar6 = __vbaObjSet(&local_24,uVar6);
  __vbaObjSetAddref(piVar4,uVar6);
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar2 = DAT_0047f074;
  puVar8 = &local_1c;
  piVar7 = DAT_0047f074;
  iVar5 = (**(code **)(*DAT_0047f074 + 0x708))(DAT_0047f074,puVar8);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar2,&DAT_00413d78,0x708);
  }
  __vbaStrCopy(piVar7,puVar8);
  iVar5 = (**(code **)(*(int *)*piVar4 + 0x50))((int *)*piVar4,local_1c,&local_20,piVar1);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,*piVar4,&DAT_0041462c,0x50);
  }
  __vbaFreeStrList(2,&local_1c,&local_20);
  return;
}

/* ---- 0x479270 (FUN_00479270) [estimated] strings:  ---- */
undefined4 FUN_00479270(int *param_1,undefined4 param_2,undefined4 param_3)

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
  local_c = &DAT_00403040;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_00414258,0x48);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x38))((int *)param_1[0x14],param_2,param_3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_0041462c,0x38);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x479310 (FUN_00479310) [estimated] strings:  ---- */
undefined4 FUN_00479310(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_00403048;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00414258,0x48);
  }
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,param_1 + 0x14,param_3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x3c);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4793b0 (FUN_004793b0) [estimated] strings:  ---- */
int __cdecl FUN_004793b0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa4;
  local_c = &DAT_00403050;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_44 = 0;
  __vbaStrCopy(piVar3);
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_00414258,0x4c);
  }
  while( true ) {
    puVar4 = &local_44;
    piVar3 = param_1;
    iVar1 = (**(code **)(*param_1 + 0x40))();
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1,&DAT_00414258,0x40);
    }
    if ((short)local_44 != 0) break;
    iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&local_1c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1,&DAT_00414258,0x78);
    }
    __vbaStrCat(local_1c,*param_2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar2);
    __vbaStrMove();
    __vbaFreeStrList(2,&local_1c,&local_20);
  }
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_00414258,0x48);
  }
  iVar1 = __vbaLenBstr(*param_2);
  if (1 < iVar1) {
    uVar2 = *param_2;
    local_38 = param_2;
    local_40[0] = 0x4008;
    iVar1 = __vbaLenBstr(uVar2);
    if (SBORROW4(iVar1,2)) {
      __vbaErrorOverflow(uVar2);
      FUN_004402a0(piVar3 + 0x17,puVar4);
      return 0;
    }
    rtcLeftCharVar(local_30,local_40,iVar1 + -2);
    __vbaStrVarMove(local_30);
    __vbaStrMove();
    iVar1 = __vbaFreeVar(uVar2);
  }
  return iVar1;
}

/* ---- 0x479580 (FUN_00479580) [estimated] strings: ᶋቀ@ҹȀ讀觰粍\xffff룿\n; FileAccess; 쒃謔砽䀒謀\xf01d䀐謀ࡍ冋赔呱桒⽴Aᗿᄘ@삅蔏ʻ; 삅蔏ʻ ---- */
void __cdecl FUN_00479580(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  wchar_t *pwStack_130;
  undefined4 uStack_12c;
  int *piStack_128;
  wchar_t *pwStack_124;
  int *piStack_108;
  wchar_t local_b0 [4];
  wchar_t *local_a8;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  wchar_t local_70 [8];
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  wchar_t local_44 [4];
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  wchar_t *local_2c;
  uint local_28;
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
  local_10 = &stack0xfffffeec;
  local_c = &DAT_00403060;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  local_20 = 0;
  local_24 = 0;
  local_2c = (wchar_t *)0x0;
  *param_2 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_44[2] = L'\0';
  local_44[3] = L'\0';
  local_44[0] = L'\0';
  local_44[1] = L'\0';
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_60[0] = 0;
  local_70[0] = L'\0';
  local_70[1] = L'\0';
  local_80 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_b0[0] = L'\0';
  local_b0[1] = L'\0';
  if ((short)param_1[0xd] == 0) {
    rtcErrObj();
    pwStack_124 = L"ᶋቀ@ҹȀ讀觰粍\xffff룿\n";
    pwVar4 = (wchar_t *)__vbaObjSet();
    local_88 = 0x80020004;
    local_78 = 0x80020004;
    local_90 = 10;
    local_80 = 10;
    __vbaVarDup();
    local_a8 = L"FileAccess";
    local_b0[0] = L'\b';
    local_b0[1] = L'\0';
    __vbaVarDup();
    pwStack_124 = local_70;
    piStack_128 = local_60;
    uStack_12c = 0x402;
    pwStack_130 = pwVar4;
    puVar5 = (undefined4 *)(**(code **)(*(int *)pwVar4 + 0x44))();
    if ((int)puVar5 < 0) {
      uStack_12c = 0x4796b7;
      piStack_128 = puVar5;
      pwStack_124 = pwVar4;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    pwStack_124 = local_70;
    piStack_128 = local_60;
    uStack_12c = 4;
    pwStack_130 = L"쒃謔砽䀒謀\xf01d䀐謀ࡍ冋赔呱桒⽴Aᗿᄘ@삅蔏ʻ";
    __vbaFreeVarList();
  }
  do {
    while( true ) {
      pwVar4 = (wchar_t *)(param_1 + 0x15);
      pwStack_124 = L"삅蔏ʻ";
      iVar6 = __vbaStrCmp();
      if (iVar6 != 0) break;
      sVar2 = rtcEndOfFile();
      if (sVar2 != 0) goto LAB_00479e07;
      piStack_128 = (undefined4 *)0x47972d;
      pwStack_124 = pwVar4;
      __vbaLineInputStr();
      pwStack_124 = (wchar_t *)0x479735;
      FUN_00440cb0();
      pwStack_124 = L"킋캋ᗿᇬ@䶍￀강䀒먀⽴A䶍￠\xec15䀑謀ࡅ䗇ǜ";
      __vbaStrMove();
      pwStack_124 = L"䶍￀강䀒먀⽴A䶍￠\xec15䀑謀ࡅ䗇ǜ";
      __vbaStrCopy();
      __vbaFreeStr();
      __vbaStrCopy();
      local_28 = 1;
      if (SCARRY4(param_1[0x16],1)) {
LAB_00479eb3:
        __vbaErrorOverflow();
        pwStack_124 = ExceptionList;
        ExceptionList = &pwStack_124;
        (**(code **)(*piStack_108 + 4))(piStack_108);
        piStack_128 = (int *)0x0;
        uStack_12c = 0;
        pwStack_130 = (wchar_t *)0x0;
        iVar6 = (**(code **)(*piStack_108 + 0x70))(piStack_108,&uStack_12c);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piStack_108,&DAT_00414258,0x70);
        }
        uStack_12c = 0;
        __vbaStrMove();
        piStack_128 = (int *)FUN_004403e0(&pwStack_130);
        __vbaFreeStr();
        return;
      }
      param_1[0x16] = param_1[0x16] + 1;
      iVar6 = __vbaStrCmp();
      if (iVar6 != 0) {
        while( true ) {
          iVar6 = __vbaLenBstr();
          if (iVar6 < (short)local_28) break;
          uVar7 = 1;
          while( true ) {
            local_58 = 1;
            local_34 = uVar7;
            if (SCARRY2((short)uVar7,(short)local_28)) goto LAB_00479eb3;
            local_60[0] = 2;
            local_b0[0] = L'䀈';
            local_b0[1] = L'\0';
            pwStack_124 = (wchar_t *)0x4797ed;
            local_a8 = (wchar_t *)(param_1 + 0xe);
            rtcMidCharVar();
            local_78 = 1;
            local_80 = 2;
            pwStack_124 = (wchar_t *)0x479824;
            rtcMidCharVar();
            sVar2 = __vbaVarTstEq();
            pwStack_124 = (wchar_t *)0x4;
            piStack_128 = (undefined4 *)0x479856;
            __vbaFreeVarList();
            if (sVar2 == 0) break;
            uVar7 = CONCAT22(extraout_var,(short)local_34 + 1);
            if (SCARRY2((short)local_34,1)) goto LAB_00479eb3;
          }
          local_b0[0] = L'䀈';
          local_b0[1] = L'\0';
          pwStack_124 = (wchar_t *)0x4798b2;
          local_a8 = (wchar_t *)(param_1 + 0xe);
          rtcMidCharVar();
          __vbaStrVarMove();
          __vbaStrMove();
          __vbaFreeVar();
          if (SCARRY2((short)local_34,(short)local_28)) goto LAB_00479eb3;
          local_28 = CONCAT22(extraout_var_00,(short)local_34 + (short)local_28);
          iVar6 = __vbaInStr();
          if (iVar6 != 0) {
            __vbaStrCat();
            __vbaStrMove();
            FUN_00441760((undefined *)(param_1 + 0x15),&local_30);
            __vbaStrMove();
            __vbaStrCat();
            __vbaStrMove();
            FUN_00440cb0();
            __vbaStrMove();
            pwStack_124 = local_44;
            piStack_128 = (int *)0x3;
            uStack_12c = 0x479953;
            __vbaFreeStrList();
            pwStack_124 = (wchar_t *)0x479960;
            FUN_00441680(param_1 + 0x15,&local_30);
            pwStack_124 = (wchar_t *)0x479967;
            pwStack_124 = (wchar_t *)__vbaStrMove();
            piStack_128 = (int *)0x47996d;
            FUN_00440cb0();
            piStack_128 = (int *)0x479974;
            __vbaStrMove();
            piStack_128 = (int *)0x47997e;
            __vbaStrCopy();
            pwStack_124 = local_44;
            piStack_128 = (undefined4 *)0x2;
            uStack_12c = 0x47998e;
            __vbaFreeStrList();
          }
        }
        iVar6 = __vbaStrCmp();
        if (iVar6 != 0) {
          pwStack_124 = (wchar_t *)0x4799bd;
          (**(code **)(*param_1 + 0x88))();
        }
      }
    }
    __vbaStrCopy();
    iVar6 = __vbaLenBstr();
    if (SCARRY4(iVar6,1)) goto LAB_00479eb3;
    local_1c = __vbaI2I4();
    iVar6 = __vbaLenBstr();
    if (SCARRY4(iVar6,1)) goto LAB_00479eb3;
    pwStack_124 = L"喋褈졅䊍謼㱂ｐ㠕䀐謀￈Ⱅ䀑뤀\x01";
    local_3c = __vbaI2I4();
    pwStack_124 = L"좋ᗿᄬ@ƹ";
    __vbaLenBstr();
    sVar2 = __vbaI2I4();
    local_28 = 1;
    uVar1 = local_28;
    while (local_28 = uVar1, (short)local_28 <= sVar2) {
      local_58 = 1;
      local_a8 = (wchar_t *)(param_1 + 0xf);
      pwStack_124 = local_b0;
      piStack_128 = (int *)local_70;
      local_60[0] = 2;
      local_b0[0] = L'䀈';
      local_b0[1] = L'\0';
      uStack_12c = 0x479a76;
      rtcMidCharVar();
      __vbaStrVarMove();
      __vbaStrMove();
      pwStack_124 = (wchar_t *)0x2;
      piStack_128 = (int *)0x479a97;
      __vbaFreeVarList();
      pwStack_124 = local_2c;
      piStack_128 = (undefined4 *)0x0;
      uStack_12c = 0x479aab;
      __vbaInStr();
      local_34 = __vbaI2I4();
      sVar3 = (short)local_34;
      if ((0 < sVar3) && (sVar3 <= (short)local_1c)) {
        uVar7 = CONCAT22(extraout_var_01,sVar3 + -1);
        if ((SBORROW2(sVar3,1)) || (local_1c = uVar7, SCARRY2(sVar3,1))) goto LAB_00479eb3;
        local_3c = CONCAT22((short)((uint)local_34 >> 0x10),sVar3 + 1);
        __vbaStrCopy();
      }
      uVar1 = (uint)(ushort)((short)local_28 + 1);
      if (SCARRY2((short)local_28,1)) goto LAB_00479eb3;
    }
    __vbaLenBstr();
    sVar2 = __vbaI2I4();
    local_28 = 1;
    uVar1 = local_28;
    while (local_28 = uVar1, (short)local_28 <= sVar2) {
      local_58 = 1;
      local_a8 = (wchar_t *)(param_1 + 0x10);
      pwStack_124 = local_70;
      local_60[0] = 2;
      local_b0[0] = L'䀈';
      local_b0[1] = L'\0';
      piStack_128 = (int *)0x479b6e;
      rtcMidCharVar();
      __vbaStrVarMove();
      __vbaStrMove();
      pwStack_124 = 
      L"຋喋菘ೄŪ剑jᗿᇔ@좋ᗿᄬ@蕦觀큅≾㭦\xe845᱿喋觘\xe845զ\x01䶍࿤\xe780\x02褀졅ᗿᇬ@Ƹ"
      ;
      __vbaFreeVarList();
      pwStack_124 = (wchar_t *)0x0;
      piStack_128 = (undefined4 *)0x479ba3;
      __vbaInStr();
      local_34 = __vbaI2I4();
      sVar3 = (short)local_34;
      if ((0 < sVar3) && (sVar3 <= (short)local_1c)) {
        local_1c = local_34;
        if (SCARRY2(sVar3,1)) goto LAB_00479eb3;
        local_3c = CONCAT22((short)((uint)local_34 >> 0x10),sVar3 + 1);
        __vbaStrCopy();
      }
      uVar1 = (uint)(ushort)((short)local_28 + 1);
      if (SCARRY2((short)local_28,1)) goto LAB_00479eb3;
    }
    __vbaLenBstr();
    sVar2 = __vbaI2I4();
    local_28 = 1;
    uVar1 = local_28;
    while (local_28 = uVar1, (short)local_28 <= sVar2) {
      local_58 = 1;
      local_a8 = (wchar_t *)(param_1 + 0x11);
      local_60[0] = 2;
      local_b0[0] = L'䀈';
      local_b0[1] = L'\0';
      pwStack_124 = (wchar_t *)0x479c59;
      rtcMidCharVar();
      __vbaStrVarMove();
      __vbaStrMove();
      __vbaFreeVarList();
      pwStack_124 = (wchar_t *)0x479c8e;
      __vbaInStr();
      local_34 = __vbaI2I4();
      sVar3 = (short)local_34;
      if ((1 < sVar3) && (sVar3 < (short)local_1c)) {
        local_3c = local_34;
        if (SBORROW2(sVar3,1)) goto LAB_00479eb3;
        local_1c = CONCAT22(extraout_var_02,sVar3 + -1);
        __vbaStrCopy();
      }
      uVar1 = (uint)(ushort)((short)local_28 + 1);
      if (SCARRY2((short)local_28,1)) goto LAB_00479eb3;
    }
    iVar6 = __vbaLenBstr();
    local_b0[0] = L'䀈';
    local_b0[1] = L'\0';
    local_a8 = pwVar4;
    if (iVar6 == 0) {
      rtcTrimVar();
      __vbaStrVarMove();
      __vbaStrMove();
      __vbaFreeVar();
      __vbaStrCopy();
    }
    else {
      rtcLeftCharVar();
      __vbaStrVarVal();
      FUN_00440cb0();
      __vbaStrMove();
      __vbaFreeStr();
      __vbaFreeVar();
      local_58 = 0x80020004;
      local_60[0] = 10;
      local_b0[0] = L'䀈';
      local_b0[1] = L'\0';
      local_a8 = pwVar4;
      rtcMidCharVar();
      __vbaStrVarMove();
      __vbaStrMove();
      __vbaStrCopy();
      __vbaFreeStr();
      __vbaFreeVarList();
    }
    piStack_108 = local_38;
    iVar6 = __vbaStrCmp();
  } while (iVar6 == 0);
LAB_00479e07:
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}

/* ---- 0x479ec0 (FUN_00479ec0) [estimated] strings:  ---- */
void __cdecl FUN_00479ec0(int *param_1)

{
  int iVar1;
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
  local_10 = &stack0xffffffc0;
  local_c = &DAT_00403070;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  iVar1 = (**(code **)(*param_1 + 0x70))(param_1,&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_00414258,0x70);
  }
  local_20 = 0;
  __vbaStrMove();
  local_1c = FUN_004403e0(&local_24);
  __vbaFreeStr();
  return;
}

/* ---- 0x479f90 (FUN_00479f90) [estimated] strings:  ---- */
undefined4 __cdecl FUN_00479f90(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  int *piVar2;
  undefined4 uStack_60;
  int *piStack_5c;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_00403080;
  local_8 = 0;
  piStack_38 = param_1;
  uStack_3c = 0x479fc7;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  local_1c = 0;
  local_20 = 0;
  *param_2 = 0;
  uStack_3c = CONCAT22(extraout_var_00,(short)param_1[0x12]);
  puStack_40 = (undefined4 *)0x479fdd;
  uVar1 = rtcEndOfFile();
  if ((short)uVar1 == 0) {
    uStack_3c = CONCAT22((short)((uint)uVar1 >> 0x10),(short)param_1[0x12]);
    puStack_40 = &local_20;
    puStack_44 = (undefined1 *)0x479ff8;
    __vbaLineInputStr();
    if (SCARRY4(param_1[0x16],1)) {
      uStack_3c = 0x47a057;
      __vbaErrorOverflow();
      puStack_48 = &LAB_004032d6;
      pvStack_4c = ExceptionList;
      piStack_5c = param_1;
      puStack_44 = (undefined1 *)&uStack_60;
      uStack_60 = 0;
      puStack_40 = (undefined4 *)&DAT_00403090;
      uStack_3c = 0;
      ExceptionList = &pvStack_4c;
      piVar2 = unaff_ESI;
      piStack_38 = (int *)&stack0xfffffffc;
      (**(code **)(*unaff_ESI + 4))(unaff_ESI);
      __vbaPrintFile(&DAT_0041918c,CONCAT22(extraout_var,(short)unaff_ESI[0x12]),*unaff_EBX,piVar2);
      piStack_5c = (int *)0x47a0bb;
      (**(code **)(*unaff_ESI + 8))();
      ExceptionList = pvStack_4c;
      return uStack_3c;
    }
    param_1[0x16] = param_1[0x16] + 1;
  }
  uStack_3c = 0x47a00f;
  __vbaStrCopy();
  piStack_38 = (int *)0x47a029;
  uVar1 = __vbaFreeStr();
  return uVar1;
}

/* ---- 0x47a060 (FUN_0047a060) [estimated] strings:  ---- */
undefined4 FUN_0047a060(int *param_1,undefined4 *param_2)

{
  undefined2 extraout_var;
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00403090;
  local_8 = 0;
  ExceptionList = &local_18;
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaPrintFile(&DAT_0041918c,CONCAT22(extraout_var,(short)param_1[0x12]),*param_2,piVar1);
  (**(code **)(*param_1 + 8))();
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x47a0e0 (FUN_0047a0e0) [estimated] strings:  ---- */
undefined4 FUN_0047a0e0(int *param_1,undefined4 *param_2)

{
  undefined2 extraout_var;
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00403098;
  local_8 = 0;
  ExceptionList = &local_18;
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaPrintFile(&PTR_DAT_00419194,CONCAT22(extraout_var,(short)param_1[0x12]),*param_2,piVar1);
  (**(code **)(*param_1 + 8))();
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x47a160 (FUN_0047a160) [estimated] strings:  ---- */
void __cdecl FUN_0047a160(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  short *in_stack_00000018;
  int *piVar5;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [4];
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff48;
  local_c = &DAT_004030a0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar5 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  if (*in_stack_00000018 < 0) {
    uVar2 = rtcErrObj();
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
    local_54 = 0x80020004;
    local_44 = 0x80020004;
    local_5c[0] = 10;
    local_4c[0] = 10;
    __vbaVarDup();
    __vbaVarDup();
    iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3,0x401,local_2c,local_3c,local_4c,local_5c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_2c,local_3c,local_4c,local_5c);
  }
  __vbaStrCopy(piVar5);
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  if (*in_stack_00000018 < 1) {
    local_24 = 0x80020004;
    local_2c[0] = 10;
    uVar1 = rtcFreeFile();
    *(undefined2 *)(param_1 + 0x12) = uVar1;
    __vbaFreeVar();
  }
  else {
    *(short *)(param_1 + 0x12) = *in_stack_00000018;
  }
  return;
}

/* ---- 0x47a320 (FUN_0047a320) [estimated] strings:  ---- */
undefined4 FUN_0047a320(uint param_1)

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
  local_c = &DAT_004030b0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00414258,0x48);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x47a3a0 (FUN_0047a3a0) [estimated] strings:  ---- */
void __cdecl
FUN_0047a3a0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_004030b8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_5 = 0;
  __vbaObjSetAddref(param_1 + 0xd,*param_2);
  __vbaObjSetAddref(param_1 + 0xe,*param_3);
  __vbaObjSetAddref(param_1 + 0xf,*param_4);
  return;
}

/* ---- 0x47a460 (FUN_0047a460) [estimated] strings:  ---- */
void __cdecl FUN_0047a460(int *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_64 [2];
  undefined *local_5c;
  undefined4 local_54 [2];
  undefined4 *local_4c;
  undefined4 local_44;
  undefined4 local_34 [4];
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
  local_10 = &stack0xffffff80;
  local_c = &DAT_004030c8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar5 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  *param_2 = 0;
  piVar3 = (int *)param_1[0xe];
  puVar4 = &local_24;
  local_34[0] = 0;
  local_44 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  iVar2 = (**(code **)(*piVar3 + 0xa8))(piVar3,puVar4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xe],&DAT_00416cb0,0xa8);
  }
  local_24 = 0;
  __vbaStrMove();
  local_4c = &local_20;
  local_54[0] = 0x4008;
  rtcRightCharVar(local_34,local_54,1);
  local_5c = &DAT_00419230 /* bstr: '\\' */;
  local_64[0] = 0x8008;
  sVar1 = __vbaVarTstNe(local_64,local_34);
  __vbaFreeVar(piVar3);
  if (sVar1 != 0) {
    __vbaStrCat(&DAT_00419230 /* bstr: '\\' */,local_20);
    __vbaStrMove();
  }
  __vbaStrCopy(puVar4,piVar5);
  __vbaFreeStr(&LAB_0047a595);
  return;
}

/* ---- 0x47a5c0 (FUN_0047a5c0) [estimated] strings:  ---- */
undefined4 FUN_0047a5c0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined4 local_20;
  int local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004030d8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_004146ac,0x28);
  }
  if ((short)local_20 == 0) {
    iVar1 = (**(code **)(*(int *)param_1[0xe] + 0xb4))((int *)param_1[0xe],*param_3);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xe],&DAT_00416cb0,0xb4);
    }
    iVar1 = (**(code **)(*(int *)param_1[0xe] + 0xe8))((int *)param_1[0xe],&local_20);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xe],&DAT_00416cb0,0xe8);
    }
    local_1c = -(uint)((short)local_20 == 0);
  }
  else {
    local_1c = -1;
  }
  (**(code **)(*param_1 + 8))(param_1);
  *param_4 = (undefined2)local_1c;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x47a6c0 (FUN_0047a6c0) [estimated] strings:  ---- */
undefined4 FUN_0047a6c0(int *param_1,undefined4 *param_2,undefined2 *param_3)

{
  int iVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_004032d6;
  local_20 = ExceptionList;
  local_18 = &stack0xffffffbc;
  local_14 = &DAT_004030e0;
  local_10 = 0;
  local_c = 0;
  ExceptionList = &local_20;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaOnError(1);
  iVar1 = (**(code **)(*(int *)param_1[0xe] + 0xac))((int *)param_1[0xe],*param_2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0xe],&DAT_00416cb0,0xac);
  }
  __vbaOnError(0);
  __vbaExitProc();
  (**(code **)(*param_1 + 8))(param_1);
  *param_3 = 0;
  ExceptionList = local_20;
  return local_10;
}
