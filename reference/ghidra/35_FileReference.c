/* Object #35 FileReference -- ESTIMATED function range; public methods per VB header: FileAbsent, FileInterface, FileName, FileName, Path, AssertFileExists */
#include "ghidra_types.h"

/* ---- 0x47c3b0 (FUN_0047c3b0) [estimated] strings: Path or file not found:; Please check paths specified in CTPEd.ini; FileReference ---- */
void __cdecl FUN_0047c3b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_a0 [9];
  undefined4 local_7c;
  wchar_t *local_74;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [4];
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
  local_10 = &stack0xffffff44;
  local_c = &DAT_004031c0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c = 0;
  local_a0[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,local_a0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_0041462c,0x1c);
  }
  if ((short)local_a0[0] != 0) {
    uVar2 = rtcErrObj();
    piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
    local_64 = 0x80020004;
    local_6c[0] = 10;
    local_54 = 0x80020004;
    local_5c[0] = 10;
    __vbaStrCat(&LAB_004143c4,L"Path or file not found:");
    uVar2 = __vbaStrMove();
    __vbaStrCat(param_1[0xe],uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(param_1[0xf],uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar2);
    uVar2 = __vbaStrMove();
    local_44 = __vbaStrCat(L"Please check paths specified in CTPEd.ini",uVar2);
    local_4c[0] = 8;
    local_74 = L"FileReference";
    local_7c = 8;
    __vbaVarDup();
    iVar1 = (**(code **)(*piVar3 + 0x44))(piVar3,0x42d,local_3c,local_4c,local_5c,local_6c);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00413af4,0x44);
    }
    __vbaFreeStrList(4,&local_1c,&local_20,&local_24,&local_28);
    __vbaFreeObj();
    __vbaFreeVarList(4,local_3c,local_4c,local_5c,local_6c);
  }
  return;
}

/* ---- 0x47c5c0 (FUN_0047c5c0) [estimated] strings: Path not found:; Please check paths specified in CTPEd.ini; FileReference ---- */
void __cdecl FUN_0047c5c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_9c [9];
  undefined4 local_78;
  wchar_t *local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [4];
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
  local_10 = &stack0xffffff44;
  local_c = &DAT_004031d0;
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
  local_78 = 0;
  local_9c[0] = 0;
  iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x28))((int *)param_1[0xd],param_1 + 0xe,local_9c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_004146ac,0x28);
  }
  if ((short)local_9c[0] != 0) {
    uVar2 = rtcErrObj();
    piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
    local_60 = 0x80020004;
    local_68[0] = 10;
    local_50 = 0x80020004;
    local_58[0] = 10;
    __vbaStrCat(&LAB_004143c4,L"Path not found:");
    uVar2 = __vbaStrMove();
    __vbaStrCat(param_1[0xe],uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar2);
    uVar2 = __vbaStrMove();
    local_40 = __vbaStrCat(L"Please check paths specified in CTPEd.ini",uVar2);
    local_48[0] = 8;
    local_70 = L"FileReference";
    local_78 = 8;
    __vbaVarDup();
    iVar1 = (**(code **)(*piVar3 + 0x44))(piVar3,0x42c,local_38,local_48,local_58,local_68);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00413af4,0x44);
    }
    __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
    __vbaFreeObj();
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
  }
  return;
}

/* ---- 0x47c7c0 (FUN_0047c7c0) [estimated] strings:  ---- */
void __cdecl FUN_0047c7c0(int *param_1,undefined4 *param_2,undefined4 param_3)

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
  local_c = &DAT_004031e0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  piVar1 = (int *)*param_2;
  local_1c = 0;
  __vbaObjSetAddref(&local_1c,param_1);
  iVar2 = (**(code **)(*piVar1 + 0x68))(piVar1,&local_1c,param_3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x68);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x47c870 (FUN_0047c870) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0047c870(int *param_1,undefined4 *param_2,short *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_34 [5];
  uint local_20;
  uint local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa8;
  local_c = &LAB_004031f0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_34[4] = 0;
  local_34[3] = 0;
  local_34[2] = 0;
  local_34[1] = 0;
  local_34[0] = 0;
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_0041462c,0x30);
  }
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x34);
  }
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x1c);
  }
  local_20 = ~local_34[0];
  if ((short)local_20 != 0) {
    piVar1 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,local_34 + 4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x2c);
    }
    piVar1 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_34 + 3);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x24);
    }
    __vbaStrCat(local_34[3],local_34[4]);
    uVar3 = __vbaStrMove();
    local_1c = rtcGetFileAttr(uVar3);
    __vbaFreeStrList(3,local_34 + 4,local_34 + 3,local_34 + 2);
  }
  if ((*param_3 != 0) || ((local_1c & 1) == 0)) {
    if ((short)local_20 != 0) {
      piVar1 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,local_34 + 4);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x2c);
      }
      piVar1 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_34 + 3);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x24);
      }
      uVar4 = 0;
      __vbaStrCat(local_34[3],local_34[4]);
      uVar3 = __vbaStrMove(uVar4);
      rtcSetFileAttr(uVar3,uVar4);
      __vbaFreeStrList(3,local_34 + 4,local_34 + 3,local_34 + 2);
    }
    piVar1 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,local_34 + 4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x2c);
    }
    piVar1 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_34 + 3);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x24);
    }
    __vbaStrCat(local_34[3],local_34[4]);
    uVar3 = __vbaStrMove();
    __vbaStrCat(param_1[0xf],param_1[0xe]);
    uVar4 = __vbaStrMove(uVar3);
    rtcFileCopy(uVar4,uVar3);
    __vbaFreeStrList(4,local_34 + 4,local_34 + 3,local_34 + 2,local_34 + 1);
    if ((short)local_20 != 0) {
      piVar1 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,local_34 + 4);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x2c);
      }
      piVar1 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_34 + 3);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x24);
      }
      uVar5 = local_1c;
      __vbaStrCat(local_34[3],local_34[4]);
      uVar3 = __vbaStrMove(uVar5);
      rtcSetFileAttr(uVar3,uVar5);
      __vbaFreeStrList(3,local_34 + 4,local_34 + 3,local_34 + 2);
    }
  }
  return;
}

/* ---- 0x47cb80 (FUN_0047cb80) [estimated] strings:  ---- */
void __cdecl FUN_0047cb80(int *param_1)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined4 local_20;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &LAB_00403200;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_28[0] = 0;
  local_2c = 0;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_0041462c,0x30);
  }
  iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_0041462c,0x1c);
  }
  if ((short)local_2c == 0) {
    iVar1 = param_1[0xe];
    local_20 = __vbaStrCat(param_1[0xf],iVar1);
    local_28[0] = 8;
    rtcKillFiles(local_28);
    __vbaFreeVar(iVar1);
  }
  return;
}

/* ---- 0x47cc60 (FUN_0047cc60) [estimated] strings:  ---- */
void __cdecl FUN_0047cc60(int *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &LAB_00403210;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_0041462c,0x30);
  }
  __vbaStrCat(param_1[0xf],param_1[0xe]);
  uVar2 = __vbaStrMove();
  __vbaFileOpen(1,0xffffffff,CONCAT22(extraout_var,*param_2),uVar2);
  __vbaFreeStr();
  return;
}

/* ---- 0x47cd20 (FUN_0047cd20) [estimated] strings:  ---- */
void __cdecl FUN_0047cd20(int *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_00403220;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_0041462c,0x34);
  }
  __vbaStrCat(param_1[0xf],param_1[0xe]);
  uVar2 = __vbaStrMove();
  __vbaFileOpen(2,0xffffffff,CONCAT22(extraout_var,*param_2),uVar2);
  __vbaFreeStr();
  return;
}

/* ---- 0x47cde0 (FUN_0047cde0) [estimated] strings:  ---- */
void __cdecl FUN_0047cde0(int *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_00403230;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_0041462c,0x30);
  }
  __vbaStrCat(param_1[0xf],param_1[0xe]);
  uVar2 = __vbaStrMove();
  __vbaFileOpen(8,0xffffffff,CONCAT22(extraout_var,*param_2),uVar2);
  __vbaFreeStr();
  return;
}

/* ---- 0x47cea0 (FUN_0047cea0) [estimated] strings: Failed to provide FileInterface when initializing FileReference; FileReference; \\ ---- */
void __cdecl FUN_0047cea0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_84 [2];
  wchar_t *local_7c;
  undefined4 local_74 [2];
  wchar_t *local_6c;
  undefined4 local_64;
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
  local_10 = &stack0xffffff40;
  local_c = &DAT_00403240;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar2 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64 = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  __vbaStrCopy(piVar2);
  sVar1 = __vbaObjIs(*param_4);
  if (sVar1 != 0) {
    rtcErrObj();
    piVar2 = (int *)__vbaObjSet(&local_24);
    local_5c = 0x80020004;
    local_4c = 0x80020004;
    local_64 = 10;
    local_54[0] = 10;
    local_7c = L"Failed to provide FileInterface when initializing FileReference";
    local_84[0] = 8;
    __vbaVarDup();
    local_6c = L"FileReference";
    local_74[0] = 8;
    __vbaVarDup();
    iVar3 = (**(code **)(*piVar2 + 0x44))(piVar2,0x44d,local_34,local_44,local_54);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00413af4);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_34,local_44,local_54);
  }
  __vbaObjSetAddref(param_1 + 0xd);
  local_6c = (wchar_t *)&local_1c;
  local_74[0] = 0x4008;
  rtcRightCharVar(local_34,local_74);
  local_7c = L"\\";
  local_84[0] = 0x8008;
  sVar1 = __vbaVarTstNe(local_84);
  __vbaFreeVar();
  if (sVar1 != 0) {
    __vbaStrCat();
    __vbaStrMove();
  }
  local_6c = (wchar_t *)&local_1c;
  local_74[0] = 0x4008;
  rtcLowerCaseVar();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaStrCopy();
  __vbaFreeStr();
  __vbaFreeVar();
  __vbaStrCopy();
  __vbaFreeStr();
  return;
}

/* ---- 0x47d100 (FUN_0047d100) [estimated] strings:  ---- */
void __cdecl FUN_0047d100(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
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
  local_c = &DAT_00403250;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  puVar4 = &local_1c;
  piVar1 = (int *)*param_2;
  piVar3 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,puVar4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x2c);
  }
  __vbaStrCopy(piVar3,puVar4);
  __vbaFreeStr();
  piVar1 = (int *)*param_2;
  puVar4 = &local_1c;
  piVar3 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,puVar4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x24);
  }
  __vbaStrCopy(piVar3,puVar4);
  __vbaFreeStr();
  piVar1 = (int *)*param_2;
  iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041462c,0x20);
  }
  __vbaObjSetAddref(param_1 + 0xd,local_20);
  __vbaFreeObj();
  return;
}

/* ---- 0x47d220 (FUN_0047d220) [estimated] strings:  ---- */
undefined4 FUN_0047d220(int *param_1,undefined4 param_2)

{
  undefined4 local_24;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00403260;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaRaiseEvent(param_1,1,1,0x400c,local_24,param_2,local_1c);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x47d2b0 (FUN_0047d2b0) [estimated] strings:  ---- */
undefined4 FUN_0047d2b0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00403268;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaObjSetAddref(param_1 + 0xd,*param_2);
  __vbaObjSetAddref(param_1 + 0xe,*param_3);
  __vbaObjSetAddref(param_1 + 0xf,*param_4);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x47d340 (FUN_0047d340) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0047d340(uint param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint unaff_ESI;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  int *piStack_b0;
  code *pcStack_ac;
  int *piStack_a8;
  int iStack_a4;
  int iStack_a0;
  int *piStack_9c;
  int **ppiStack_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  int *piStack_84;
  int *piStack_80;
  undefined *puStack_7c;
  int *piStack_78;
  int local_54;
  int local_50;
  int local_4c [2];
  int *local_44;
  int local_3c [4];
  undefined4 local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff8c;
  local_c = &DAT_00403270;
  local_8 = param_1 & 1;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  puStack_7c = (undefined *)0x47d380;
  ExceptionList = &pvStack_18;
  piStack_78 = piVar7;
  (**(code **)(*piVar7 + 4))();
  pcVar1 = __vbaObjSet_exref;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_50 = 0;
  local_54 = 0;
  local_1c = 1;
  iVar3 = local_1c;
  while( true ) {
    local_1c = iVar3;
    puStack_7c = &DAT_00417d34;
    piStack_80 = (int *)0x0;
    piStack_84 = (int *)0x7;
    piStack_8c = (int *)0x47d3bb;
    piStack_88 = piVar7;
    piStack_8c = (int *)(**(code **)(*piVar7 + 0x308))();
    piStack_90 = &local_24;
    piStack_94 = (int *)0x47d3c2;
    piStack_8c = (int *)__vbaObjSet();
    piStack_90 = local_3c;
    piStack_94 = (int *)0x47d3cd;
    piStack_84 = (int *)__vbaLateIdCallLd();
    piStack_88 = (int *)0x47d3d7;
    piStack_80 = (int *)__vbaCastObjVar();
    piStack_84 = &local_28;
    piStack_88 = (int *)0x47d3de;
    piVar2 = (int *)__vbaObjSet();
    piStack_80 = &local_54;
    piStack_88 = (int *)0x47d3ea;
    piStack_84 = piVar2;
    piStack_94 = (int *)(**(code **)(*piVar2 + 0x1c))();
    if ((int)piStack_94 < 0) {
      piStack_88 = (int *)0x1c;
      piStack_8c = (int *)&DAT_00417d34;
      ppiStack_98 = (int **)0x47d3ff;
      piStack_90 = piVar2;
      __vbaHresultCheckObj();
    }
    piStack_88 = &local_28;
    piStack_8c = &local_24;
    bVar8 = local_54 < local_1c;
    piStack_90 = (int *)0x2;
    piStack_94 = (int *)0x47d41e;
    __vbaFreeObjList();
    piStack_88 = (int *)0x47d42a;
    __vbaFreeVar();
    piStack_84 = (int *)&DAT_00417d34;
    piStack_88 = (int *)0x0;
    piStack_8c = (int *)0x7;
    piStack_90 = piVar7;
    if (bVar8) break;
    piStack_94 = (int *)0x47d445;
    piStack_94 = (int *)(**(code **)(*piVar7 + 0x308))();
    ppiStack_98 = (int **)&local_24;
    piStack_9c = (int *)0x47d44c;
    piStack_94 = (int *)__vbaObjSet();
    ppiStack_98 = (int **)local_3c;
    piStack_9c = (int *)0x47d457;
    piStack_8c = (int *)__vbaLateIdCallLd();
    piStack_90 = (int *)0x47d461;
    piStack_88 = (int *)__vbaCastObjVar();
    piStack_8c = &local_28;
    piStack_90 = (int *)0x47d468;
    piVar2 = (int *)__vbaObjSet();
    local_44 = &local_1c;
    piStack_88 = &local_2c;
    piStack_8c = local_4c;
    local_4c[0] = 0x4003;
    piStack_94 = (int *)0x47d485;
    piStack_90 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x24))();
    if (iVar3 < 0) {
      piStack_94 = (int *)0x24;
      ppiStack_98 = (int **)&DAT_00417d34;
      iStack_a4 = 0x47d49a;
      iStack_a0 = iVar3;
      piStack_9c = piVar2;
      __vbaHresultCheckObj();
    }
    piStack_94 = (int *)&DAT_00417d44;
    ppiStack_98 = (int **)local_2c;
    piStack_9c = (int *)0x47d4a9;
    piStack_94 = (int *)__vbaCastObj();
    ppiStack_98 = &local_20;
    piStack_9c = (int *)0x47d4b0;
    __vbaObjSet();
    piStack_94 = &local_2c;
    ppiStack_98 = (int **)&local_28;
    piStack_9c = &local_24;
    iStack_a0 = 3;
    iStack_a4 = 0x47d4c4;
    __vbaFreeObjList();
    piStack_94 = (int *)0x47d4d0;
    __vbaFreeVar();
    piStack_90 = &local_50;
    piStack_94 = local_20;
    ppiStack_98 = (int **)0x47d4dd;
    puVar4 = (undefined4 *)(**(code **)(*local_20 + 0x5c))();
    if ((int)puVar4 < 0) {
      puStack_7c = (undefined *)0x5c;
      piStack_80 = (int *)&DAT_00417d44;
      piStack_84 = local_20;
      piStack_8c = (int *)0x47d4f5;
      piStack_88 = puVar4;
      __vbaHresultCheckObj();
    }
    if ((short)local_50 == 0) {
      iVar3 = local_1c + 1;
      if (SCARRY4(local_1c,1)) {
        puStack_7c = (undefined *)0x47d6c5;
        __vbaErrorOverflow();
        piStack_88 = (int *)&LAB_004032d6;
        piStack_8c = ExceptionList;
        pcStack_ac = pcVar1;
        piStack_84 = (int *)&piStack_b0;
        piStack_80 = (int *)&DAT_00403280;
        puStack_7c = (undefined *)(unaff_ESI & 1);
        piVar6 = (int *)(unaff_ESI & 0xfffffffe);
        ExceptionList = &piStack_8c;
        piStack_b0 = piVar7;
        piStack_a8 = piVar2;
        piStack_78 = (int *)&stack0xfffffffc;
        (**(code **)(*piVar6 + 4))(piVar6);
        piStack_90 = (int *)0x0;
        iVar3 = (**(code **)(*(int *)piVar6[0xf] + 0x20))((int *)piVar6[0xf],0xffffffff);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar6[0xf],&DAT_00415640,0x20);
        }
        if (DAT_00480244 == (int *)0x0) {
          __vbaNew2(&DAT_00413b34,&DAT_00480244);
        }
        piVar7 = DAT_00480244;
        iStack_a4 = *DAT_00480244;
        uVar5 = __vbaObjSetAddref(&piStack_90,piVar6);
        iVar3 = (**(code **)(iStack_a4 + 0x10))(piVar7,uVar5);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar7,&DAT_00413b24,0x10);
        }
        __vbaFreeObj();
        return;
      }
    }
    else {
      puStack_7c = &DAT_00417d34;
      piStack_80 = (int *)0x0;
      piStack_84 = (int *)0x7;
      piStack_8c = (int *)0x47d512;
      piStack_88 = piVar7;
      piStack_8c = (int *)(**(code **)(*piVar7 + 0x308))();
      piStack_90 = &local_24;
      piStack_94 = (int *)0x47d519;
      piStack_8c = (int *)__vbaObjSet();
      piStack_90 = local_3c;
      piStack_94 = (int *)0x47d524;
      piStack_84 = (int *)__vbaLateIdCallLd();
      piStack_88 = (int *)0x47d52e;
      piStack_80 = (int *)__vbaCastObjVar();
      piStack_84 = &local_28;
      piStack_88 = (int *)0x47d535;
      piVar2 = (int *)__vbaObjSet();
      local_44 = &local_1c;
      piStack_80 = local_4c;
      local_4c[0] = 0x4003;
      piStack_88 = (int *)0x47d54e;
      piStack_84 = piVar2;
      piStack_8c = (int *)(**(code **)(*piVar2 + 0x34))();
      if ((int)piStack_8c < 0) {
        piStack_80 = (int *)0x34;
        piStack_84 = (int *)&DAT_00417d34;
        piStack_90 = (int *)0x47d563;
        piStack_88 = piVar2;
        __vbaHresultCheckObj();
      }
      piStack_80 = &local_28;
      piStack_84 = &local_24;
      piStack_88 = (int *)0x2;
      piStack_8c = (int *)0x47d573;
      __vbaFreeObjList();
      piStack_80 = (int *)0x47d57f;
      __vbaFreeVar();
      iVar3 = local_1c;
    }
  }
  piStack_94 = (int *)0x47d5a5;
  piStack_94 = (int *)(**(code **)(*piVar7 + 0x308))();
  ppiStack_98 = (int **)&local_24;
  piStack_9c = (int *)0x47d5ac;
  piStack_94 = (int *)__vbaObjSet();
  ppiStack_98 = (int **)local_3c;
  piStack_9c = (int *)0x47d5b7;
  piStack_8c = (int *)__vbaLateIdCallLd();
  piStack_90 = (int *)0x47d5c1;
  piStack_88 = (int *)__vbaCastObjVar();
  piStack_8c = &local_28;
  piStack_90 = (int *)0x47d5c8;
  piVar2 = (int *)__vbaObjSet();
  piStack_88 = &local_54;
  piStack_90 = (int *)0x47d5d4;
  piStack_8c = piVar2;
  piStack_9c = (int *)(**(code **)(*piVar2 + 0x1c))();
  if ((int)piStack_9c < 0) {
    piStack_90 = (int *)0x1c;
    piStack_94 = (int *)&DAT_00417d34;
    iStack_a0 = 0x47d5e9;
    ppiStack_98 = (int **)piVar2;
    __vbaHresultCheckObj();
  }
  bVar8 = local_54 == 0;
  piStack_90 = &local_28;
  piStack_94 = &local_24;
  ppiStack_98 = (int **)0x2;
  piStack_9c = (int *)0x47d607;
  __vbaFreeObjList();
  piStack_90 = (int *)0x47d613;
  __vbaFreeVar();
  if (bVar8) {
    if (DAT_00480244 == (int *)0x0) {
      piStack_8c = (int *)&DAT_00480244;
      piStack_90 = (int *)&DAT_00413b34;
      piStack_94 = (int *)0x47d631;
      __vbaNew2();
    }
    piVar2 = DAT_00480244;
    piStack_90 = &local_24;
    iVar3 = *DAT_00480244;
    piStack_94 = (int *)0x47d644;
    piStack_8c = piVar7;
    piStack_8c = (int *)__vbaObjSetAddref();
    piStack_90 = piVar2;
    piStack_94 = (int *)0x47d649;
    iVar3 = (**(code **)(iVar3 + 0x10))();
    if (iVar3 < 0) {
      piStack_8c = (int *)0x10;
      piStack_90 = (int *)&DAT_00413b24;
      piStack_94 = piVar2;
      piStack_9c = (int *)0x47d65e;
      ppiStack_98 = (int **)iVar3;
      __vbaHresultCheckObj();
    }
    piStack_8c = (int *)0x47d667;
    __vbaFreeObj();
  }
  local_8 = 0;
  piStack_8c = (int *)&LAB_0047d6a0;
  piStack_90 = (int *)0x47d69f;
  __vbaFreeObj();
  return;
}

/* ---- 0x47d6d0 (FUN_0047d6d0) [estimated] strings:  ---- */
void __cdecl FUN_0047d6d0(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00403280;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  iVar2 = (**(code **)(*(int *)piVar4[0xf] + 0x20))((int *)piVar4[0xf],0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4[0xf],&DAT_00415640,0x20);
  }
  if (DAT_00480244 == (int *)0x0) {
    __vbaNew2(&DAT_00413b34,&DAT_00480244);
  }
  piVar1 = DAT_00480244;
  iVar2 = *DAT_00480244;
  uVar3 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar2 = (**(code **)(iVar2 + 0x10))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413b24,0x10);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x47d7c0 (FUN_0047d7c0) [estimated] strings:  ---- */
void __cdecl FUN_0047d7c0(uint param_1)

{
  code *pcVar1;
  code *pcVar2;
  int ****ppppiVar3;
  int *piVar4;
  int ***pppiVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint unaff_ESI;
  int *piVar10;
  int ****ppppiVar11;
  bool bVar12;
  undefined4 uVar13;
  int ***pppiStack_e0;
  code *pcStack_dc;
  code *pcStack_d8;
  int ***pppiStack_d4;
  undefined4 uStack_d0;
  int ****ppppiStack_cc;
  undefined4 uStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  int ***pppiStack_bc;
  undefined *puStack_b8;
  int ***pppiStack_b4;
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  int ****ppppiStack_a8;
  int ****ppppiStack_a4;
  int ****ppppiStack_a0;
  int ****ppppiStack_9c;
  int ****ppppiStack_98;
  int ***pppiStack_94;
  int ****ppppiStack_90;
  int ***pppiStack_8c;
  int local_5c;
  int **local_58;
  int **local_54 [2];
  int *local_4c;
  int **local_44 [2];
  undefined4 local_3c;
  int **local_34;
  int **local_30;
  int ***local_2c;
  undefined4 local_28;
  int ****local_24;
  int *local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff78;
  local_c = &DAT_00403290;
  local_8 = param_1 & 1;
  ppppiVar11 = (int ****)(param_1 & 0xfffffffe);
  ppppiStack_90 = (int ****)0x47d800;
  ExceptionList = &pvStack_18;
  pppiStack_8c = (int ***)ppppiVar11;
  (*(code *)(*ppppiVar11)[1])();
  pcVar2 = __vbaObjSet_exref;
  local_20 = (int *)0x0;
  local_24 = (int ****)0x0;
  local_28 = 0;
  local_2c = (int ***)0x0;
  local_30 = (int **)0x0;
  local_34 = (int **)0x0;
  local_44[0] = (int **)0x0;
  local_54[0] = (int **)0x0;
  local_58 = (int **)0x0;
  local_5c = 0;
  local_1c = 1;
  iVar7 = local_1c;
  while( true ) {
    local_1c = iVar7;
    ppppiStack_90 = (int ****)&DAT_00417d34;
    pppiStack_94 = (int ***)0x0;
    ppppiStack_98 = (int ****)0x7;
    ppppiStack_a0 = (int ****)0x47d841;
    ppppiStack_9c = ppppiVar11;
    ppppiStack_a0 = (int ****)(*(code *)(*ppppiVar11)[0xc2])();
    ppppiStack_a4 = &local_2c;
    ppppiStack_a8 = (int ****)0x47d848;
    ppppiStack_a0 = (int ****)__vbaObjSet();
    ppppiStack_a4 = (int ****)local_44;
    ppppiStack_a8 = (int ****)0x47d853;
    ppppiStack_98 = (int ****)__vbaLateIdCallLd();
    ppppiStack_9c = (int ****)0x47d85d;
    pppiStack_94 = (int ***)__vbaCastObjVar();
    ppppiStack_98 = (int ****)&local_30;
    ppppiStack_9c = (int ****)0x47d864;
    ppppiVar3 = (int ****)__vbaObjSet();
    pppiStack_94 = (int ***)&local_5c;
    ppppiStack_9c = (int ****)0x47d870;
    ppppiStack_98 = ppppiVar3;
    ppppiStack_a8 = (int ****)(*(code *)(*ppppiVar3)[7])();
    if ((int)ppppiStack_a8 < 0) {
      ppppiStack_9c = (int ****)0x1c;
      ppppiStack_a0 = (int ****)&DAT_00417d34;
      ppppiStack_ac = (int ****)0x47d885;
      ppppiStack_a4 = ppppiVar3;
      __vbaHresultCheckObj();
    }
    ppppiStack_9c = (int ****)&local_30;
    ppppiStack_a0 = &local_2c;
    bVar12 = local_5c < local_1c;
    ppppiStack_a4 = (int ****)0x2;
    ppppiStack_a8 = (int ****)0x47d8a4;
    __vbaFreeObjList();
    ppppiStack_9c = (int ****)0x47d8b0;
    __vbaFreeVar();
    ppppiStack_98 = (int ****)&DAT_00417d34;
    ppppiStack_9c = (int ****)0x0;
    ppppiStack_a0 = (int ****)0x7;
    ppppiStack_a4 = ppppiVar11;
    if (bVar12) break;
    ppppiStack_a8 = (int ****)0x47d8cb;
    ppppiStack_a8 = (int ****)(*(code *)(*ppppiVar11)[0xc2])();
    ppppiStack_ac = &local_2c;
    ppppiStack_b0 = (int ****)0x47d8d2;
    ppppiStack_a8 = (int ****)__vbaObjSet();
    ppppiStack_ac = (int ****)local_44;
    ppppiStack_b0 = (int ****)0x47d8dd;
    ppppiStack_a0 = (int ****)__vbaLateIdCallLd();
    ppppiStack_a4 = (int ****)0x47d8e7;
    ppppiStack_9c = (int ****)__vbaCastObjVar();
    ppppiStack_a0 = (int ****)&local_30;
    ppppiStack_a4 = (int ****)0x47d8ee;
    ppppiVar3 = (int ****)__vbaObjSet();
    local_4c = &local_1c;
    ppppiStack_9c = (int ****)&local_34;
    ppppiStack_a0 = (int ****)local_54;
    local_54[0] = (int **)0x4003;
    ppppiStack_a8 = (int ****)0x47d90b;
    ppppiStack_a4 = ppppiVar3;
    piVar4 = (int *)(*(code *)(*ppppiVar3)[9])();
    pcVar1 = __vbaHresultCheckObj_exref;
    if ((int)piVar4 < 0) {
      ppppiStack_a8 = (int ****)0x24;
      ppppiStack_ac = (int ****)&DAT_00417d34;
      puStack_b8 = (undefined *)0x47d922;
      pppiStack_b4 = (int ***)piVar4;
      ppppiStack_b0 = ppppiVar3;
      __vbaHresultCheckObj();
    }
    ppppiStack_a8 = (int ****)&DAT_00417d44;
    ppppiStack_ac = (int ****)local_34;
    ppppiStack_b0 = (int ****)0x47d939;
    ppppiStack_a8 = (int ****)__vbaCastObj();
    ppppiStack_ac = (int ****)&local_24;
    ppppiStack_b0 = (int ****)0x47d940;
    __vbaObjSet();
    ppppiStack_a8 = (int ****)&local_34;
    ppppiStack_ac = (int ****)&local_30;
    ppppiStack_b0 = &local_2c;
    pppiStack_b4 = (int ***)0x3;
    puStack_b8 = (undefined *)0x47d954;
    __vbaFreeObjList();
    ppppiStack_a8 = (int ****)0x47d960;
    __vbaFreeVar();
    ppppiStack_a4 = (int ****)&local_58;
    ppppiStack_a8 = local_24;
    ppppiStack_ac = (int ****)0x47d96d;
    pppiVar5 = (int ***)(*(code *)(*local_24)[0x17])();
    if ((int)pppiVar5 < 0) {
      ppppiStack_90 = (int ****)0x5c;
      pppiStack_94 = (int ***)&DAT_00417d44;
      ppppiStack_98 = local_24;
      ppppiStack_a0 = (int ****)0x47d981;
      ppppiStack_9c = (int ****)pppiVar5;
      __vbaHresultCheckObj();
    }
    if ((short)local_58 == 0) {
      iVar7 = local_1c + 1;
      if (SCARRY4(local_1c,1)) {
        ppppiStack_90 = (int ****)0x47dc52;
        __vbaErrorOverflow();
        ppppiStack_9c = (int ****)&LAB_004032d6;
        ppppiStack_a0 = ExceptionList;
        pcStack_d8 = pcVar1;
        pcStack_dc = pcVar2;
        ppppiStack_98 = &pppiStack_e0;
        pppiStack_94 = (int ***)&DAT_004032a0;
        ppppiStack_90 = (int ****)(unaff_ESI & 1);
        piVar10 = (int *)(unaff_ESI & 0xfffffffe);
        ExceptionList = &ppppiStack_a0;
        pppiStack_e0 = (int ***)ppppiVar11;
        pppiStack_8c = (int ***)&stack0xfffffffc;
        (**(code **)(*piVar10 + 4))(piVar10);
        uVar13 = 0;
        ppppiStack_a4 = (int ****)0x0;
        ppppiStack_a8 = (int ****)0x0;
        puStack_b8 = (undefined *)0x0;
        pppiStack_bc = (int ***)0x0;
        uVar8 = (**(code **)(*piVar10 + 0x308))(piVar10,7,0,&DAT_00417d34);
        uVar8 = __vbaObjSet(&ppppiStack_a4,uVar8);
        uVar8 = __vbaLateIdCallLd(&puStack_b8,uVar8);
        uVar8 = __vbaCastObjVar(uVar8,uVar13);
        piVar9 = (int *)__vbaObjSet(&ppppiStack_a8,uVar8);
        piVar4 = piVar9;
        iVar7 = (**(code **)(*piVar9 + 0x1c))(piVar9,&pppiStack_bc);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,piVar9,&DAT_00417d34,0x1c);
        }
        bVar12 = pppiStack_bc == (int ***)0x0;
        __vbaFreeObjList(2,&ppppiStack_a4,&ppppiStack_a8);
        __vbaFreeVar(piVar4);
        if (bVar12) {
          if (DAT_00480244 == (int ****)0x0) {
            __vbaNew2(&DAT_00413b34,&DAT_00480244);
          }
          ppppiVar11 = DAT_00480244;
          pppiStack_d4 = *DAT_00480244;
          uVar8 = __vbaObjSetAddref(&ppppiStack_a4,piVar10);
          iVar7 = (*(code *)pppiStack_d4[4])(ppppiVar11,uVar8);
          if (iVar7 < 0) {
            __vbaHresultCheckObj(iVar7,ppppiVar11,&DAT_00413b24,0x10);
          }
          __vbaFreeObj();
        }
        return;
      }
    }
    else {
      pppiStack_94 = ppppiVar11[0xd];
      ppppiStack_90 = &local_2c;
      ppppiStack_98 = (int ****)0x47d999;
      ppppiVar3 = (int ****)(*(code *)(*pppiStack_94)[0x11])();
      if ((int)ppppiVar3 < 0) {
        ppppiStack_a0 = (int ****)ppppiVar11[0xd];
        ppppiStack_98 = (int ****)0x44;
        ppppiStack_9c = (int ****)&LAB_00414228;
        ppppiStack_a8 = (int ****)0x47d9ad;
        ppppiStack_a4 = ppppiVar3;
        __vbaHresultCheckObj();
      }
      pppiVar5 = local_2c;
      ppppiStack_98 = (int ****)&local_28;
      ppppiStack_9c = local_24;
      ppppiStack_a0 = (int ****)0x47d9bd;
      ppppiStack_ac = (int ****)(*(code *)(*local_24)[0x13])();
      if ((int)ppppiStack_ac < 0) {
        ppppiStack_a0 = (int ****)0x4c;
        ppppiStack_a4 = (int ****)&DAT_00417d44;
        ppppiStack_a8 = local_24;
        ppppiStack_b0 = (int ****)0x47d9d5;
        __vbaHresultCheckObj();
      }
      ppppiStack_a4 = (int ****)local_44;
      local_3c = local_28;
      ppppiStack_a0 = (int ****)&local_30;
      local_28 = 0;
      local_44[0] = (int **)0x8;
      ppppiStack_a8 = (int ****)pppiVar5;
      ppppiStack_ac = (int ****)0x47d9f7;
      puVar6 = (undefined *)(*(code *)(*pppiVar5)[9])();
      if ((int)puVar6 < 0) {
        ppppiStack_ac = (int ****)0x24;
        ppppiStack_b0 = (int ****)&DAT_00414238;
        pppiStack_b4 = pppiVar5;
        pppiStack_bc = (int ***)0x47da0c;
        puStack_b8 = puVar6;
        __vbaHresultCheckObj();
      }
      ppppiStack_b0 = (int ****)&local_20;
      ppppiStack_ac = (int ****)local_30;
      local_30 = (int **)0x0;
      pppiStack_b4 = (int ***)0x47da1d;
      __vbaObjSet();
      ppppiStack_ac = (int ****)0x47da28;
      __vbaFreeObj();
      ppppiStack_ac = (int ****)0x47da31;
      __vbaFreeVar();
      ppppiStack_a8 = (int ****)&DAT_0041462c;
      ppppiStack_ac = (int ****)0x0;
      ppppiStack_b0 = (int ****)0x47da3e;
      ppppiStack_a8 = (int ****)__vbaCastObj();
      ppppiStack_ac = &local_2c;
      ppppiStack_b0 = (int ****)0x47da45;
      __vbaObjSet();
      ppppiStack_a8 = &local_2c;
      ppppiStack_ac = ppppiVar11 + 0xe;
      ppppiStack_b0 = ppppiVar11 + 0xd;
      pppiStack_b4 = (int ***)local_20;
      puStack_b8 = (undefined *)0x47da5d;
      iVar7 = (**(code **)(*local_20 + 0x84))();
      if (iVar7 < 0) {
        puStack_b8 = (undefined *)0x84;
        pppiStack_bc = (int ***)&LAB_004133e8;
        pppiStack_c0 = (int ***)local_20;
        uStack_c8 = 0x47da78;
        pppiStack_c4 = (int ***)iVar7;
        __vbaHresultCheckObj();
      }
      puStack_b8 = (undefined *)0x47da7d;
      __vbaFreeObj();
      puStack_b8 = &DAT_00417d34;
      pppiStack_bc = (int ***)0x0;
      pppiStack_c0 = (int ***)0x7;
      uStack_c8 = 0x47da8f;
      pppiStack_c4 = (int ***)ppppiVar11;
      uStack_c8 = (*(code *)(*ppppiVar11)[0xc2])();
      ppppiStack_cc = &local_2c;
      uStack_d0 = 0x47da96;
      uStack_c8 = __vbaObjSet();
      ppppiStack_cc = (int ****)local_44;
      uStack_d0 = 0x47daa1;
      pppiStack_c0 = (int ***)__vbaLateIdCallLd();
      pppiStack_c4 = (int ***)0x47daab;
      pppiStack_bc = (int ***)__vbaCastObjVar();
      pppiStack_c0 = &local_30;
      pppiStack_c4 = (int ***)0x47dab2;
      piVar4 = (int *)__vbaObjSet();
      local_4c = &local_1c;
      pppiStack_bc = local_54;
      local_54[0] = (int **)0x4003;
      pppiStack_c4 = (int ***)0x47dacb;
      pppiStack_c0 = (int ***)piVar4;
      ppppiStack_a0 = (int ****)(**(code **)(*piVar4 + 0x34))();
      if ((int)ppppiStack_a0 < 0) {
        pppiStack_94 = (int ***)0x34;
        ppppiStack_98 = (int ****)&DAT_00417d34;
        ppppiStack_a4 = (int ****)0x47dae0;
        ppppiStack_9c = (int ****)piVar4;
        __vbaHresultCheckObj();
      }
      pppiStack_94 = &local_30;
      ppppiStack_98 = &local_2c;
      ppppiStack_9c = (int ****)0x2;
      ppppiStack_a0 = (int ****)0x47daf0;
      __vbaFreeObjList();
      pppiStack_94 = (int ***)0x47dafc;
      __vbaFreeVar();
      iVar7 = local_1c;
    }
  }
  ppppiStack_a8 = (int ****)0x47db22;
  ppppiStack_a8 = (int ****)(*(code *)(*ppppiVar11)[0xc2])();
  ppppiStack_ac = &local_2c;
  ppppiStack_b0 = (int ****)0x47db29;
  ppppiStack_a8 = (int ****)__vbaObjSet();
  ppppiStack_ac = (int ****)local_44;
  ppppiStack_b0 = (int ****)0x47db34;
  ppppiStack_a0 = (int ****)__vbaLateIdCallLd();
  ppppiStack_a4 = (int ****)0x47db3e;
  ppppiStack_9c = (int ****)__vbaCastObjVar();
  ppppiStack_a0 = (int ****)&local_30;
  ppppiStack_a4 = (int ****)0x47db45;
  ppppiVar3 = (int ****)__vbaObjSet();
  ppppiStack_9c = (int ****)&local_5c;
  ppppiStack_a4 = (int ****)0x47db51;
  ppppiStack_a0 = ppppiVar3;
  ppppiStack_b0 = (int ****)(*(code *)(*ppppiVar3)[7])();
  if ((int)ppppiStack_b0 < 0) {
    ppppiStack_a4 = (int ****)0x1c;
    ppppiStack_a8 = (int ****)&DAT_00417d34;
    pppiStack_b4 = (int ***)0x47db66;
    ppppiStack_ac = ppppiVar3;
    __vbaHresultCheckObj();
  }
  bVar12 = local_5c == 0;
  ppppiStack_a4 = (int ****)&local_30;
  ppppiStack_a8 = &local_2c;
  ppppiStack_ac = (int ****)0x2;
  ppppiStack_b0 = (int ****)0x47db84;
  __vbaFreeObjList();
  ppppiStack_a4 = (int ****)0x47db90;
  __vbaFreeVar();
  if (bVar12) {
    if (DAT_00480244 == (int ****)0x0) {
      ppppiStack_a0 = (int ****)&DAT_00480244;
      ppppiStack_a4 = (int ****)&DAT_00413b34;
      ppppiStack_a8 = (int ****)0x47dbae;
      __vbaNew2();
    }
    ppppiVar3 = DAT_00480244;
    ppppiStack_a4 = &local_2c;
    pppiVar5 = *DAT_00480244;
    ppppiStack_a8 = (int ****)0x47dbc1;
    ppppiStack_a0 = ppppiVar11;
    ppppiStack_a0 = (int ****)__vbaObjSetAddref();
    ppppiStack_a4 = ppppiVar3;
    ppppiStack_a8 = (int ****)0x47dbc6;
    iVar7 = (*(code *)pppiVar5[4])();
    if (iVar7 < 0) {
      ppppiStack_a0 = (int ****)0x10;
      ppppiStack_a4 = (int ****)&DAT_00413b24;
      ppppiStack_a8 = ppppiVar3;
      ppppiStack_b0 = (int ****)0x47dbdb;
      ppppiStack_ac = (int ****)iVar7;
      __vbaHresultCheckObj();
    }
    ppppiStack_a0 = (int ****)0x47dbe4;
    __vbaFreeObj();
  }
  local_8 = 0;
  ppppiStack_a0 = (int ****)&LAB_0047dc2d;
  ppppiStack_a4 = (int ****)0x47dc27;
  __vbaFreeObj();
  ppppiStack_a4 = (int ****)0x47dc2c;
  __vbaFreeObj();
  return;
}
