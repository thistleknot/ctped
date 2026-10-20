/* Object #17 frmProject -- ESTIMATED function range; public methods per VB header: Update, mnuFileExport, mnuFileExportOther, mnuFileImport, mnuFileImportOther */
#include "ghidra_types.h"

/* ---- 0x446110 (FUN_00446110) [estimated] strings:  ---- */
void __cdecl FUN_00446110(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 local_60;
  undefined4 local_5c [6];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff80;
  local_c = &DAT_004022f0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  puVar7 = &DAT_00417d34;
  uVar6 = 0;
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  local_40 = 0;
  local_44 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  uVar2 = (**(code **)(*piVar4 + 0x314))(piVar4,7,0,&DAT_00417d34);
  uVar2 = __vbaObjSet(&local_28,uVar2);
  uVar2 = __vbaLateIdCallLd(local_3c,uVar2);
  uVar2 = __vbaCastObjVar(uVar2,uVar6);
  uVar2 = __vbaObjSet(local_5c,uVar2);
  iVar3 = __vbaForEachCollObj(&DAT_00417d44,&local_60,&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(puVar7);
  while (iVar3 != 0) {
    iVar3 = (**(code **)(*local_20 + 0x5c))(local_20,&local_40);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_20,&DAT_00417d44,0x5c);
    }
    if ((short)local_40 != 0) {
      iVar3 = (**(code **)(*(int *)piVar4[0x15] + 0x44))((int *)piVar4[0x15],&local_28);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar4[0x15],&LAB_00414228,0x44);
      }
      piVar1 = local_28;
      iVar3 = (**(code **)(*local_20 + 0x4c))(local_20,&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_20,&DAT_00417d44,0x4c);
      }
      local_34 = local_24;
      local_24 = 0;
      local_3c[0] = 8;
      piVar5 = piVar1;
      iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,local_3c,&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_00414238,0x24);
      }
      uVar2 = local_2c;
      local_2c = 0;
      __vbaObjSet(&local_1c,uVar2);
      __vbaFreeObj();
      __vbaFreeVar(piVar5);
      iVar3 = (**(code **)(*local_1c + 0x2c))(local_1c,&local_40);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x2c);
      }
      iVar3 = (**(code **)(*local_1c + 0x24))(local_1c,&local_44);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x24);
      }
      if ((short)local_40 == 0 && (short)local_44 == 0) {
        if (DAT_0047f074 == (int *)0x0) {
          __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
        }
        piVar1 = DAT_0047f074;
        iVar3 = (**(code **)(*DAT_0047f074 + 0x6fc))(DAT_0047f074,&local_28);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413d78,0x6fc);
        }
        piVar1 = local_28;
        iVar3 = (**(code **)(*local_28 + 0x34))(local_28,&local_40);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar1,&DAT_00415000,0x34);
        }
        uVar2 = __vbaCastObj(0,&DAT_0041462c);
        __vbaObjSet(&local_2c,uVar2);
        local_44 = local_40;
        iVar3 = (**(code **)(*local_1c + 0x88))(local_1c,piVar4 + 0x15,&local_44,&local_2c);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x88);
        }
        __vbaFreeObjList(2,&local_28,&local_2c);
      }
    }
    iVar3 = __vbaNextEachCollObj(&DAT_00417d44,&local_60,&local_20);
  }
  local_8 = 0;
  __vbaFreeObjList(2,local_5c,&local_60,&LAB_00446432);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x446460 (FUN_00446460) [estimated] strings:  ---- */
undefined4 FUN_00446460(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_00402300;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  iVar3 = (**(code **)(*DAT_0047f074 + 0x718))(DAT_0047f074);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413d78,0x718);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x446510 (FUN_00446510) [estimated] strings:  ---- */
void __cdecl FUN_00446510(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined4 local_30 [4];
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00402308;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  puVar5 = &DAT_00417d34;
  uVar4 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_30[0] = 0;
  local_38[0] = 0;
  local_3c = 0;
  uVar1 = (**(code **)(*piVar3 + 0x314))(piVar3,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar4);
  uVar1 = __vbaObjSet(local_38,uVar1);
  iVar2 = __vbaForEachCollObj(&DAT_00417d44,&local_3c,&local_1c,uVar1);
  __vbaFreeObj();
  __vbaFreeVar(puVar5);
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*local_1c + 0x60))(local_1c,0xffffffff);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00417d44,0x60);
    }
    iVar2 = __vbaNextEachCollObj(&DAT_00417d44,&local_3c,&local_1c);
  }
  local_8 = 0;
  __vbaFreeObjList(2,local_38,&local_3c,&LAB_0044663d);
  __vbaFreeObj();
  return;
}

/* ---- 0x446660 (FUN_00446660) [estimated] strings:  ---- */
void __cdecl FUN_00446660(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort uVar5;
  float10 fVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float local_58 [5];
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff90;
  local_c = &DAT_00402318;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_24 = 0;
  local_34[0] = 0;
  local_44 = 0;
  local_58[0] = 0.0;
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4,0x80010005,0);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaR4Var(uVar1);
  local_1c = __vbaFpI4();
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4,0x80010006,0);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34,uVar1);
  __vbaR4Var(uVar1);
  local_20 = __vbaFpI4();
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  iVar2 = (**(code **)(*piVar4 + 0x84))(piVar4,0x4561f000);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415924,0x84);
  }
  iVar2 = (**(code **)(*piVar4 + 0x8c))(piVar4,0x45e9e800);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415924,0x8c);
  }
  iVar2 = (**(code **)(*piVar4 + 0x74))(piVar4,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415924,0x74);
  }
  iVar2 = (**(code **)(*piVar4 + 0x7c))(piVar4,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415924,0x7c);
  }
  fVar11 = (float)local_1c;
  uVar10 = 4;
  local_44 = 4;
  uVar9 = 0x80010005;
  piVar7 = piVar4;
  uVar1 = local_40;
  local_3c = fVar11;
  uVar3 = (**(code **)(*piVar4 + 0x314))(piVar4,0x80010005,4,local_40,fVar11,local_38);
  uVar3 = __vbaObjSet(&local_24,uVar3);
  __vbaLateIdSt(uVar3,piVar7,uVar9,uVar10,uVar1,fVar11);
  __vbaFreeObj();
  fVar11 = (float)local_20;
  local_44 = 4;
  uVar9 = 4;
  uVar3 = 0x80010006;
  piVar7 = piVar4;
  local_3c = fVar11;
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4,0x80010006,4,local_40,fVar11,local_38);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  __vbaLateIdSt(uVar1,piVar7,uVar3,uVar9,local_40,fVar11);
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4,0x80010006,0);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  __vbaLateIdCallLd(local_34,uVar1);
  iVar2 = (**(code **)(*piVar4 + 0x88))(piVar4,local_58);
  uVar5 = 0;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415924,0x88);
  }
  puVar8 = local_34;
  fVar6 = (float10)__vbaR4Var(puVar8);
  local_44 = 4;
  local_3c = (float)((float10)local_58[0] - fVar6);
  if ((uVar5 & 0xd) == 0) {
    __vbaVarMove();
    __vbaFreeObj();
    __vbaFreeVar(puVar8);
    uVar3 = 0;
    uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4,0x80010005,0);
    uVar1 = __vbaObjSet(&local_24,uVar1);
    __vbaLateIdCallLd(local_34,uVar1);
    iVar2 = (**(code **)(*piVar4 + 0x80))(piVar4,local_58);
    uVar5 = 0;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415924,0x80);
    }
    fVar6 = (float10)__vbaR4Var(local_34);
    local_44 = 4;
    local_3c = (float)((float10)local_58[0] - fVar6);
    if ((uVar5 & 0xd) == 0) {
      __vbaVarMove();
      __vbaFreeObj();
      __vbaFreeVar(uVar3);
      iVar2 = (**(code **)(*piVar4 + 0x6f8))(piVar4);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_0041576c,0x6f8);
      }
      return;
    }
  }
  local_44 = 4;
  __vbaFPException();
  return;
}

/* ---- 0x4469d0 (FUN_004469d0) [estimated] strings:  ---- */
void __cdecl FUN_004469d0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_c0 [6];
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c [4];
  undefined4 local_5c [4];
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
  local_10 = &stack0xffffff28;
  local_c = &DAT_00402328;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_c0[0] = 0;
  iVar1 = (**(code **)(*piVar4 + 0x88))(piVar4,local_c0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00415924,0x88);
  }
  local_74 = local_c0[0];
  local_5c[0] = 1;
  local_44 = 1;
  local_4c[0] = 2;
  local_7c[0] = 4;
  __vbaVarSub(local_2c,piVar4 + 0xd,local_7c);
  __vbaVarMove();
  FUN_00441030(local_6c,local_3c,local_4c,local_5c);
  fVar5 = (float10)__vbaR4Var(local_6c);
  fVar6 = (float)fVar5;
  uVar8 = 0x80010006;
  uVar9 = 4;
  piVar7 = piVar4;
  uVar3 = local_a8;
  local_a4 = fVar6;
  uVar2 = (**(code **)(*piVar4 + 0x314))(piVar4,0x80010006,4,local_a8,fVar6,local_a0);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  __vbaLateIdSt(uVar2,piVar7,uVar8,uVar9,uVar3,fVar6);
  __vbaFreeObj();
  __vbaFreeVarList(4,local_3c,local_4c,local_5c,local_6c);
  iVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,local_c0);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00415924,0x80);
  }
  local_5c[0] = 1;
  local_44 = 1;
  local_74 = local_c0[0];
  local_4c[0] = 2;
  local_7c[0] = 4;
  __vbaVarSub(local_2c,piVar4 + 0x11,local_7c);
  __vbaVarMove();
  FUN_00441030(local_6c,local_3c,local_4c,local_5c);
  fVar5 = (float10)__vbaR4Var(local_6c);
  fVar6 = (float)fVar5;
  uVar2 = 0x80010005;
  uVar8 = 4;
  local_a4 = fVar6;
  uVar3 = (**(code **)(*piVar4 + 0x314))(piVar4,0x80010005,4,local_a8,fVar6,local_a0);
  uVar3 = __vbaObjSet(&local_1c,uVar3);
  __vbaLateIdSt(uVar3,piVar4,uVar2,uVar8,local_a8,fVar6);
  __vbaFreeObj();
  __vbaFreeVarList(4,local_3c,local_4c,local_5c,local_6c);
  return;
}

/* ---- 0x446c80 (FUN_00446c80) [estimated] strings:  ---- */
void __cdecl FUN_00446c80(uint param_1)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff70;
  local_c = &DAT_00402338;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  piVar9 = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  uVar8 = 0;
  puVar7 = &DAT_00417d44;
  uVar6 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  uVar3 = (**(code **)(*piVar5 + 0x314))(piVar5,0xd,0,&DAT_00417d44,0);
  uVar3 = __vbaObjSet(&local_24,uVar3);
  uVar3 = __vbaLateIdCallLd(local_48,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar6);
  uVar3 = __vbaObjSet(&local_28,uVar3);
  sVar2 = __vbaObjIs(uVar3,puVar7);
  __vbaFreeObjList(2,&local_24,&local_28);
  __vbaFreeVar(uVar8);
  if (sVar2 == 0) {
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar1 = DAT_0047f074;
    uVar3 = __vbaCastObj(0,&DAT_0041462c);
    __vbaObjSet(&local_38,uVar3);
    __vbaStrCopy(piVar9);
    iVar4 = (**(code **)(*(int *)piVar5[0x15] + 0x44))((int *)piVar5[0x15]);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5[0x15],&LAB_00414228,0x44);
    }
    piVar9 = local_2c;
    uVar6 = 0;
    uVar3 = (**(code **)(*piVar5 + 0x314))(piVar5,0xd,0,&DAT_00417d44);
    uVar3 = __vbaObjSet(&local_24,uVar3);
    uVar3 = __vbaLateIdCallLd(local_48,uVar3);
    uVar3 = __vbaCastObjVar(uVar3,uVar6);
    piVar5 = (int *)__vbaObjSet(&local_28,uVar3);
    iVar4 = (**(code **)(*piVar5 + 0x4c))(piVar5,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00417d44,0x4c);
    }
    local_50 = local_1c;
    local_1c = 0;
    local_58[0] = 8;
    iVar4 = (**(code **)(*piVar9 + 0x24))(piVar9,local_58,&local_30);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar9,&DAT_00414238,0x24);
    }
    uVar3 = local_30;
    local_30 = 0;
    __vbaObjSet(&local_34,uVar3);
    iVar4 = (**(code **)(*piVar1 + 0x714))(piVar1,&local_34,&local_20,&local_38);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar1,&DAT_00413d78,0x714);
    }
    __vbaFreeStr();
    __vbaFreeObjList(5,&local_24,&local_28,&local_2c,&local_34,&local_38);
    __vbaFreeVarList(2,local_48,local_58);
  }
  return;
}

/* ---- 0x446f30 (FUN_00446f30) [estimated] strings:  ---- */
undefined4 FUN_00446f30(uint param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402348;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  sVar1 = rtcAnsiValueBstr(&DAT_004179cc /* bstr: '\r' */);
  if (*param_2 == sVar1) {
    iVar2 = (**(code **)(*piVar3 + 0x734))(piVar3);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_0041576c,0x734);
    }
  }
  local_8 = 0;
  (**(code **)(*piVar3 + 8))(piVar3);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x446fd0 (FUN_00446fd0) [estimated] strings:  ---- */
void __cdecl FUN_00446fd0(uint param_1,byte *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
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
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00402350;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  uVar6 = 0;
  puVar5 = &DAT_00417d44;
  uVar4 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  uVar2 = (**(code **)(*piVar3 + 0x314))(piVar3,0xd,0,&DAT_00417d44,0);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  uVar2 = __vbaLateIdCallLd(local_30,uVar2);
  uVar2 = __vbaCastObjVar(uVar2,uVar4);
  uVar2 = __vbaObjSet(&local_20,uVar2);
  sVar1 = __vbaObjIs(uVar2,puVar5);
  __vbaFreeObjList(2,&local_1c,&local_20);
  __vbaFreeVar(uVar6);
  if ((sVar1 == 0) && ((*param_2 & 2) != 0)) {
    (**(code **)(*piVar3 + 0x710))(piVar3);
  }
  return;
}

/* ---- 0x4470e0 (FUN_004470e0) [estimated] strings:  ---- */
void __cdecl FUN_004470e0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00402360;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x18]);
  return;
}

/* ---- 0x447170 (FUN_00447170) [estimated] strings:  ---- */
void __cdecl FUN_00447170(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
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
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff44;
  local_c = &DAT_00402370;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  sVar1 = __vbaObjIs(param_1[0x18],0);
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
  __vbaObjSetAddref(param_1 + 0x18,*param_2);
  return;
}

/* ---- 0x4472f0 (FUN_004472f0) [estimated] strings:  ---- */
void __cdecl FUN_004472f0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00402380;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x1a]);
  return;
}

/* ---- 0x447380 (FUN_00447380) [estimated] strings:  ---- */
void __cdecl FUN_00447380(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
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
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff44;
  local_c = &DAT_00402390;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  sVar1 = __vbaObjIs(param_1[0x1a],0);
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
  __vbaObjSetAddref(param_1 + 0x1a,*param_2);
  return;
}

/* ---- 0x447500 (FUN_00447500) [estimated] strings:  ---- */
void __cdecl FUN_00447500(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_004023a0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x1c]);
  return;
}

/* ---- 0x447590 (FUN_00447590) [estimated] strings:  ---- */
void __cdecl FUN_00447590(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  int *local_1c [2];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffc0;
  local_8 = &DAT_004023b0;
  local_1c[0] = (int *)0x0;
  local_20 = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x70))(*(int **)(param_1 + 0x68),local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*(undefined4 *)(param_1 + 0x68),&LAB_004133e8,0x70);
  }
  piVar1 = local_1c[0];
  piVar3 = local_1c[0];
  iVar2 = (**(code **)(*local_1c[0] + 0x24))(local_1c[0],&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&LAB_004133f8,0x24);
  }
  __vbaFreeObj();
  __vbaI2I4(piVar3);
  return;
}

/* ---- 0x447670 (FUN_00447670) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00447670(int *******param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int *******pppppppiVar5;
  int ******ppppppiVar6;
  int ******ppppppiVar7;
  int ********ppppppppiVar8;
  int iVar9;
  int ********ppppppppiVar10;
  int *piVar11;
  undefined4 uVar12;
  int *unaff_EBX;
  code *pcVar13;
  ushort uVar14;
  float10 fVar15;
  undefined4 uVar16;
  undefined4 auStack_2cc [2];
  undefined4 uStack_2c4;
  undefined4 auStack_2bc [2];
  undefined4 uStack_2b4;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  int *******pppppppiStack_2a4;
  undefined4 *puStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 ***pppuStack_294;
  int *******pppppppiStack_290;
  int *******pppppppiStack_28c;
  undefined4 ****ppppuStack_288;
  int *******pppppppiStack_284;
  int *******pppppppiStack_280;
  int ********ppppppppiStack_27c;
  int *piStack_260;
  int *piStack_25c;
  float *pfStack_258;
  float fStack_1fc;
  undefined4 uStack_1f8;
  float afStack_1f4 [13];
  undefined4 uStack_1c0;
  int *******pppppppiStack_1bc;
  int iStack_1b8;
  undefined *puStack_1b4;
  undefined4 auStack_1b0 [4];
  undefined4 auStack_1a0 [4];
  undefined ****ppppuStack_190;
  int *******pppppppiStack_18c;
  int *******pppppppiStack_188;
  undefined4 uStack_184;
  int ******ppppppiStack_180;
  int ******ppppppiStack_17c;
  undefined *puStack_178;
  int *******pppppppiStack_174;
  int ******ppppppiStack_170;
  undefined *puStack_16c;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  int *******pppppppiStack_15c;
  int ******ppppppiStack_158;
  undefined4 *puStack_154;
  int *******pppppppiStack_150;
  int ******ppppppiStack_14c;
  int ********ppppppppiStack_148;
  int ********ppppppppiStack_144;
  undefined4 *puStack_124;
  undefined8 local_120;
  int ******local_b0;
  int ******local_ac;
  int ******local_a8 [5];
  undefined4 local_94;
  undefined2 local_8c;
  undefined4 local_84;
  undefined4 local_7c;
  int *******local_74 [4];
  int *****local_64 [4];
  int ******local_54 [2];
  double local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  int *****local_34;
  int ******local_30;
  int local_2c;
  int local_24;
  undefined4 local_20;
  int *******local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffed0;
  local_8 = &DAT_004023e0;
  local_1c = (int *******)0x0;
  local_24 = 0;
  local_30 = (int ******)0x0;
  local_34 = (int *****)0x0;
  local_44[0] = 0;
  local_54[0] = (int ******)0x0;
  local_64[0] = (int *****)0x0;
  local_74[0] = (int *******)0x0;
  local_84 = 0;
  local_94 = 0;
  local_a8[0] = (int ******)0x0;
  local_ac = (int ******)0x0;
  local_b0 = (int ******)0x0;
  ppppppppiStack_144 = (int ********)0x4476fa;
  ExceptionList = &pvStack_14;
  iVar4 = __vbaForEachCollObj();
  while (iVar4 != 0) {
    iVar4 = (*(code *)(*param_1[0x19])[7])();
    if (iVar4 < 0) {
      ppppppppiStack_144 = (int ********)0x44772a;
      __vbaHresultCheckObj();
    }
    if ((short)local_a8[0] == 0) {
      local_84 = 0xb;
      ppppppppiStack_144 = (int ********)0x41802c;
      local_7c = 0xffffffff;
      ppppppppiStack_148 = (int ********)local_1c;
      ppppppiStack_14c = (int ******)0x447872;
      __vbaLateMemSt();
      ppppppiVar6 = local_30;
    }
    else {
      uVar2 = __vbaCheckType();
      local_84 = 0xb;
      ppppppppiStack_144 = (int ********)0x447767;
      local_7c._0_2_ = uVar2;
      __vbaLateMemCallLd();
      __vbaVarOr();
      ppppppppiStack_144 = (int ********)0x41802c;
      ppppppppiStack_148 = (int ********)local_1c;
      ppppppiStack_14c = (int ******)0x4477a5;
      __vbaLateMemSt();
      __vbaFreeVarList();
      uVar2 = __vbaCheckType();
      local_7c = CONCAT22(local_7c._2_2_,uVar2);
      local_84 = 0xb;
      ppppppppiStack_144 = (int ********)0x4477e3;
      __vbaLateMemCallLd();
      __vbaVarOr();
      sVar3 = __vbaBoolVarNull();
      __vbaFreeVarList();
      ppppppiVar6 = local_30;
      if ((sVar3 != 0) && (ppppppiVar6 = (int ******)((int)local_30 + 1), SCARRY4((int)local_30,1)))
      goto LAB_004481d3;
    }
    local_30 = ppppppiVar6;
    iVar4 = __vbaNextEachCollObj();
  }
  pppppppiVar5 = (int *******)(*(code *)(*param_1[0x19])[7])();
  if ((int)pppppppiVar5 < 0) {
    ppppppppiStack_144 = (int ********)param_1[0x19];
    ppppppiStack_14c = (int ******)0x44788f;
    ppppppppiStack_148 = (int ********)pppppppiVar5;
    __vbaHresultCheckObj();
  }
  if ((short)local_a8[0] == 0) {
    ppppppppiStack_144 = (int ********)0x4478a8;
    pppppppiVar5 = (int *******)(*(code *)(*param_1[0x1e])[9])();
    if ((int)pppppppiVar5 < 0) {
      ppppppppiStack_144 = (int ********)param_1[0x1e];
      ppppppiStack_14c = (int ******)0x4478c0;
      ppppppppiStack_148 = (int ********)pppppppiVar5;
      __vbaHresultCheckObj();
    }
    local_30 = local_b0;
  }
  ppppppppiStack_144 = (int ********)0x4478d9;
  (*(code *)(*param_1)[0x1d6])();
  ppppppppiStack_144 = (int ********)param_1;
  ppppppppiStack_148 = (int ********)0x4478e2;
  ppppppppiStack_148 = (int ********)(*(code *)(*param_1)[0xc6])();
  ppppppiStack_14c = &local_34;
  pppppppiStack_150 = (int *******)0x4478ef;
  ppppppiStack_14c = (int ******)__vbaObjSet();
  ppppppppiStack_148 = (int ********)&local_b0;
  pppppppiStack_150 = (int *******)0x447905;
  iVar4 = (*(code *)(*ppppppiStack_14c)[0x22])();
  uVar14 = 0;
  if (iVar4 < 0) {
    ppppppppiStack_144 = (int ********)0x447923;
    __vbaHresultCheckObj();
  }
  if (((uVar14 & 0xd) == 0) && ((uVar14 & 0xd) == 0)) {
    local_20 = __vbaFpI4();
    pcVar13 = __vbaFreeObj_exref;
    __vbaFreeObj();
    (*(code *)(*param_1)[0xc6])();
    piVar11 = (int *)__vbaObjSet();
    iVar4 = (**(code **)(*piVar11 + 0x80))();
    uVar14 = 0;
    if (iVar4 < 0) {
      ppppppppiStack_144 = (int ********)0x4479ba;
      __vbaHresultCheckObj();
    }
    if ((uVar14 & 0xd) == 0) {
      local_2c = __vbaFpI4();
      __vbaFreeObj();
      local_64[0] = (int *****)0x1;
      if (DAT_0047f000 != 0) {
        adj_fdiv_m64();
      }
      if ((uVar14 & 0xd) == 0) {
        fVar15 = (float10)__vbaFPInt();
        local_4c = (double)fVar15;
        local_54[0] = (int ******)0x5;
        local_3c = 1;
        local_44[0] = 2;
        ppppppppiStack_144 = (int ********)0x447a53;
        FUN_00441030(local_74,local_44,local_54,local_64);
        ppppppppiStack_144 = local_74;
        ppppppppiStack_148 = (int ********)0x447a5d;
        uVar2 = __vbaI2Var();
        ppppppppiStack_148 = local_74;
        *(undefined2 *)(param_1 + 0xe) = uVar2;
        ppppppiStack_14c = local_64;
        pppppppiStack_150 = local_54;
        puStack_154 = local_44;
        ppppppiStack_158 = (int ******)0x4;
        pppppppiStack_15c = (int *******)0x447a79;
        __vbaFreeVarList();
        ppppppiStack_14c = param_1[0x19];
        ppppppppiStack_148 = (int ********)local_a8;
        pppppppiStack_150 = (int *******)0x447a8c;
        iVar4 = (*(code *)(*ppppppiStack_14c)[9])();
        if (iVar4 < 0) {
          ppppppiStack_158 = param_1[0x19];
          pppppppiStack_150 = (int *******)0x24;
          puStack_154 = (undefined4 *)&DAT_00415000;
          pppuStack_160 = (undefined ***)0x447aa4;
          pppppppiStack_15c = (int *******)iVar4;
          __vbaHresultCheckObj();
        }
        if ((short)local_a8[0] == 0) {
          pppppppiStack_150 = param_1;
          puStack_154 = (undefined4 *)0x447ca6;
          puStack_154 = (undefined4 *)(*(code *)(*param_1)[199])();
          ppppppiStack_158 = &local_34;
          pppppppiStack_15c = (int *******)0x447cad;
          ppppppiStack_158 = (int ******)__vbaObjSet();
          puStack_154 = (undefined4 *)0x0;
          pppppppiStack_15c = (int *******)0x447cbe;
          iVar4 = (**(code **)((int)*ppppppiStack_158 + 0x84))();
          uVar14 = 0;
          if (iVar4 < 0) {
            ppppppppiStack_144 = (int ********)0x447cdc;
            __vbaHresultCheckObj();
          }
          __vbaFreeObj();
          if (DAT_0047f000 != 0) {
            adj_fdiv_m64();
          }
          if (((uVar14 & 0xd) != 0) || (__vbaFPInt(), (uVar14 & 0xd) != 0)) goto LAB_004481ce;
          iVar4 = __vbaFpI4();
          iVar9 = (int)((longlong)iVar4 * 2000);
          if ((longlong)iVar9 == (longlong)iVar4 * 2000) {
            if (iVar9 <= local_2c) {
              (*(code *)(*param_1)[0xca])();
              pppppppiVar5 = (int *******)__vbaObjSet();
              ppppppiVar6 = (int ******)(*(code *)(*pppppppiVar5)[0x21])();
              if ((int)ppppppiVar6 < 0) {
                ppppppppiStack_144 = (int ********)&DAT_0041805c;
                pppppppiStack_150 = (int *******)0x447fd4;
                ppppppiStack_14c = ppppppiVar6;
                ppppppppiStack_148 = (int ********)pppppppiVar5;
                __vbaHresultCheckObj();
              }
              __vbaFreeObj();
              ppppppppiStack_144 = (int ********)0x447fe2;
              ppppppppiStack_144 = (int ********)(*(code *)(*param_1)[0xca])();
              ppppppppiStack_148 = (int ********)&local_34;
              ppppppiStack_14c = (int ******)0x447fe9;
              ppppppppiStack_148 = (int ********)__vbaObjSet();
              ppppppppiStack_144 = (int ********)0x0;
              ppppppiStack_14c = (int ******)0x447ff6;
              ppppppppiVar8 = (int ********)(*(code *)(*ppppppppiStack_148)[0x2f])();
              ppppppppiVar10 = ppppppppiStack_144;
              goto joined_r0x00447ffa;
            }
            (*(code *)(*param_1)[0xca])();
            piVar11 = (int *)__vbaObjSet();
            iVar4 = (**(code **)(*piVar11 + 0x70))();
            uVar14 = 0;
            if (iVar4 < 0) {
              ppppppppiStack_144 = (int ********)0x447da3;
              __vbaHresultCheckObj();
            }
            local_64[0] = (int *****)0x1;
            if (DAT_0047f000 != 0) {
              adj_fdiv_m64();
            }
            if ((uVar14 & 0xd) == 0) {
              fVar15 = (float10)__vbaFPInt();
              local_4c = (double)fVar15;
              local_54[0] = (int ******)0x5;
              local_3c = 1;
              local_44[0] = 2;
              ppppppppiStack_144 = (int ********)0x447e1e;
              FUN_00441030(local_74,local_44,local_54,local_64);
              ppppppppiStack_144 = local_74;
              ppppppppiStack_148 = (int ********)0x447e28;
              uVar2 = __vbaI2Var();
              *(undefined2 *)(param_1 + 0xe) = uVar2;
              __vbaFreeObj();
              ppppppppiStack_144 = (int ********)0x4;
              ppppppppiStack_148 = (int ********)0x447e49;
              __vbaFreeVarList();
              if (DAT_0047f000 != 0) {
                adj_fdiv_m64();
              }
              if (((uVar14 & 0xd) == 0) && (__vbaFPInt(), (uVar14 & 0xd) == 0)) {
                local_18 = __vbaFpI4();
                (*(code *)(*param_1)[0xca])();
                ppppppppiVar10 = (int ********)__vbaObjSet();
                pppppppiVar5 = *ppppppppiVar10;
                local_120 = (double)local_2c;
                if (DAT_0047f000 != 0) {
                  adj_fdiv_m64();
                }
                if (((uVar14 & 0xd) == 0) && (__vbaFPInt(), (uVar14 & 0xd) == 0)) {
                  __vbaFpI2();
                  pppppppiVar5 = (int *******)(*(code *)pppppppiVar5[0x29])();
                  if ((int)pppppppiVar5 < 0) {
                    ppppppiStack_14c = (int ******)0x447f5c;
                    ppppppppiStack_148 = (int ********)pppppppiVar5;
                    ppppppppiStack_144 = ppppppppiVar10;
                    __vbaHresultCheckObj();
                  }
                  pcVar13 = __vbaFreeObj_exref;
                  __vbaFreeObj();
                  (*(code *)(*param_1)[0xca])();
                  ppppppppiStack_144 = (int ********)&local_34;
                  ppppppppiStack_148 = (int ********)0x447f77;
                  ppppppppiStack_144 = (int ********)__vbaObjSet();
                  ppppppppiStack_148 = (int ********)0x447f84;
                  ppppppppiVar8 = (int ********)(*(code *)(*ppppppppiStack_144)[0x21])();
                  ppppppppiVar10 = ppppppppiStack_144;
                  goto joined_r0x00447ffa;
                }
              }
            }
            goto LAB_004481ce;
          }
        }
        else {
          pppppppiStack_150 = param_1;
          puStack_154 = (undefined4 *)0x447abb;
          puStack_154 = (undefined4 *)(*(code *)(*param_1)[0xca])();
          ppppppiStack_158 = &local_34;
          pppppppiStack_15c = (int *******)0x447ac2;
          piVar11 = (int *)__vbaObjSet();
          puStack_154 = (undefined4 *)0x0;
          pppppppiStack_15c = (int *******)0x447ad3;
          ppppppiStack_158 = (int ******)piVar11;
          iVar4 = (**(code **)(*piVar11 + 0x84))();
          if (iVar4 < 0) {
            pppppppiStack_15c = (int *******)0x84;
            pppuStack_160 = (undefined ***)&DAT_0041805c;
            uStack_168 = (double)CONCAT44(piVar11,iVar4);
            puStack_16c = (undefined *)0x447af1;
            __vbaHresultCheckObj();
          }
          pppppppiStack_15c = (int *******)0x447af6;
          __vbaFreeObj();
          if ((int)local_30 <= (int)*(short *)(param_1 + 0xe)) {
            pppppppiStack_15c = param_1;
            pppuStack_160 = (undefined ***)0x447bee;
            pppuStack_160 = (undefined ***)(*(code *)(*param_1)[199])();
            uStack_168 = (double)CONCAT44(&local_34,0x447bf5);
            ppppppiVar6 = (int ******)__vbaObjSet();
            pppuStack_160 = (undefined ***)0x0;
            uStack_168._0_4_ = 0x447c06;
            uStack_168._4_4_ = ppppppiVar6;
            pppppppiVar5 = (int *******)(*(code *)(*ppppppiVar6)[0x21])();
            if ((int)pppppppiVar5 < 0) {
              uStack_168._0_4_ = 0x84;
              puStack_16c = &DAT_0041806c;
              puStack_178 = (undefined *)0x447c24;
              pppppppiStack_174 = pppppppiVar5;
              ppppppiStack_170 = ppppppiVar6;
              __vbaHresultCheckObj();
            }
            uStack_168._0_4_ = 0x447c29;
            __vbaFreeObj();
            uStack_168 = (double)CONCAT44(uStack_168._4_4_,param_1);
            puStack_16c = (undefined *)0x447c32;
            puStack_16c = (undefined *)(*(code *)(*param_1)[199])();
            ppppppiStack_170 = &local_34;
            pppppppiStack_174 = (int *******)0x447c39;
            ppppppiVar6 = (int ******)__vbaObjSet();
            puStack_16c = (undefined *)0x0;
            pppppppiStack_174 = (int *******)0x447c47;
            ppppppiStack_170 = ppppppiVar6;
            ppppppiVar7 = (int ******)(*(code *)(*ppppppiVar6)[0x1f])();
            if ((int)ppppppiVar7 < 0) {
              pppppppiStack_174 = (int *******)0x7c;
              puStack_178 = &DAT_0041806c;
              uStack_184 = 0x447c62;
              ppppppiStack_180 = ppppppiVar7;
              ppppppiStack_17c = ppppppiVar6;
              __vbaHresultCheckObj();
            }
            pppppppiStack_174 = (int *******)0x447c67;
            __vbaFreeObj();
            pppppppiStack_174 = param_1;
            puStack_178 = (undefined *)0x447c70;
            puStack_178 = (undefined *)(*(code *)(*param_1)[199])();
            ppppppiStack_17c = &local_34;
            ppppppiStack_180 = (int ******)0x447c77;
            ppppppiStack_17c = (int ******)__vbaObjSet();
            puStack_178 = (undefined *)0x0;
            ppppppiStack_180 = (int ******)0x447c84;
            ppppppppiVar8 = (int ********)(*(code *)(*ppppppiStack_17c)[0x2f])();
            ppppppppiVar10 = ppppppppiStack_144;
joined_r0x00447ffa:
            ppppppppiStack_144 = ppppppppiVar8;
            if ((int)ppppppppiStack_144 < 0) {
              ppppppppiStack_148 = (int ********)0x44800e;
              __vbaHresultCheckObj();
              ppppppppiVar10 = ppppppppiStack_144;
            }
            ppppppppiStack_144 = ppppppppiVar10;
            (*pcVar13)();
            local_24 = 0;
            ppppppppiStack_144 = (int ********)0x448034;
            iVar4 = __vbaForEachCollObj();
            do {
              if (iVar4 == 0) {
                ppppppppiStack_144 = (int ********)0x4481ac;
                __vbaFreeObjList();
                __vbaFreeObj();
                return;
              }
              iVar4 = (*(code *)(*param_1[0x19])[7])();
              if (iVar4 < 0) {
                ppppppppiStack_144 = (int ********)0x448064;
                __vbaHresultCheckObj();
              }
              local_7c = CONCAT22(local_7c._2_2_,~(ushort)local_a8[0]);
              local_84 = 0xb;
              local_8c = __vbaCheckType();
              local_94 = 0xb;
              ppppppppiStack_144 = (int ********)0x4480a9;
              __vbaLateMemCallLd();
              __vbaVarOr();
              __vbaVarOr();
              sVar3 = __vbaBoolVarNull();
              ppppppppiStack_144 = (int ********)0x4480eb;
              __vbaFreeVarList();
              iVar4 = local_24;
              if (sVar3 != 0) {
                ppppppppiStack_148 = (int ********)(*(code *)(*param_1[0x19])[9])();
                if ((int)ppppppppiStack_148 < 0) {
                  ppppppppiStack_144 = (int ********)param_1[0x19];
                  ppppppiStack_14c = (int ******)0x44811b;
                  __vbaHresultCheckObj();
                }
                local_ac = local_a8[0];
                ppppppppiStack_144 = &local_1c;
                ppppppppiStack_148 = (int ********)param_1;
                ppppppiStack_14c = (int ******)0x44813f;
                (*(code *)(*param_1)[0x1d8])();
                iVar4 = local_24 + 1;
                if (SCARRY4(local_24,1)) goto LAB_004481d3;
              }
              local_24 = iVar4;
              iVar4 = __vbaNextEachCollObj();
            } while( true );
          }
          pppppppiStack_15c = param_1;
          pppuStack_160 = (undefined ***)0x447b0c;
          pppuStack_160 = (undefined ***)(*(code *)(*param_1)[199])();
          uStack_168 = (double)CONCAT44(&local_34,0x447b13);
          ppppppiVar6 = (int ******)__vbaObjSet();
          pppuStack_160 = (undefined ***)0xffffffff;
          uStack_168._0_4_ = 0x447b24;
          uStack_168._4_4_ = ppppppiVar6;
          pppppppiVar5 = (int *******)(*(code *)(*ppppppiVar6)[0x21])();
          if ((int)pppppppiVar5 < 0) {
            uStack_168._0_4_ = 0x84;
            puStack_16c = &DAT_0041806c;
            puStack_178 = (undefined *)0x447b42;
            pppppppiStack_174 = pppppppiVar5;
            ppppppiStack_170 = ppppppiVar6;
            __vbaHresultCheckObj();
          }
          uStack_168._0_4_ = 0x447b47;
          __vbaFreeObj();
          uStack_168 = (double)CONCAT44(uStack_168._4_4_,param_1);
          puStack_16c = (undefined *)0x447b50;
          puStack_16c = (undefined *)(*(code *)(*param_1)[199])();
          ppppppiStack_170 = &local_34;
          pppppppiStack_174 = (int *******)0x447b57;
          ppppppiVar6 = (int ******)__vbaObjSet();
          puStack_16c = (undefined *)0xffffffff;
          pppppppiStack_174 = (int *******)0x447b65;
          ppppppiStack_170 = ppppppiVar6;
          ppppppiVar7 = (int ******)(*(code *)(*ppppppiVar6)[0x1f])();
          if ((int)ppppppiVar7 < 0) {
            pppppppiStack_174 = (int *******)0x7c;
            puStack_178 = &DAT_0041806c;
            uStack_184 = 0x447b80;
            ppppppiStack_180 = ppppppiVar7;
            ppppppiStack_17c = ppppppiVar6;
            __vbaHresultCheckObj();
          }
          pppppppiStack_174 = (int *******)0x447b85;
          __vbaFreeObj();
          pppppppiStack_174 = param_1;
          puStack_178 = (undefined *)0x447b8e;
          (*(code *)(*param_1)[199])();
          piVar11 = (int *)__vbaObjSet();
          iVar4 = *piVar11;
          if (!SBORROW4((int)local_30,(int)*(short *)(param_1 + 0xe))) {
            __vbaI2I4();
            ppppppppiVar8 = (int ********)(**(code **)(iVar4 + 0xa4))();
            ppppppppiVar10 = ppppppppiStack_144;
            goto joined_r0x00447ffa;
          }
        }
LAB_004481d3:
        __vbaErrorOverflow();
        ExceptionList = &stack0xfffffec0;
        ppppppiStack_14c = (int ******)0x0;
        pppppppiStack_150 = (int *******)0x0;
        pppuStack_160 = (undefined ***)0x0;
        ppppppiStack_170 = (int ******)0x0;
        ppppppiStack_180 = (int ******)0x0;
        ppppuStack_190 = (undefined ****)0x0;
        auStack_1a0[0] = 0;
        auStack_1b0[0] = 0;
        uStack_1c0 = 0;
        afStack_1f4[0] = 0.0;
        uStack_1f8 = 0;
        fStack_1fc = 0.0;
        sVar3 = __vbaCheckType();
        if (sVar3 == 0) {
          uStack_1c0 = 3;
          iStack_1b8 = 0x11d;
          __vbaLateMemSt();
        }
        if (*local_120._4_4_ == 0) {
          __vbaLateMemCallLd();
          auStack_1a0[0] = 1;
          pppppppiStack_188 = (int *******)0x1;
          ppppuStack_190 = (undefined ****)0x2;
          iStack_1b8 = 2000;
          uStack_1c0 = 3;
          __vbaVarSub();
          __vbaVarMove();
          FUN_00441030(auStack_1b0,&ppppppiStack_180,&ppppuStack_190,auStack_1a0);
          __vbaLateMemSt();
          __vbaFreeVarList();
          ppppppppiStack_148 = (int ********)__vbaI2I4();
          (**(code **)(*unaff_EBX + 0x328))();
          piStack_25c = (int *)__vbaObjSet();
          pfStack_258 = afStack_1f4;
          piStack_260 = (int *)0x4486f0;
          iVar4 = (**(code **)(*piStack_25c + 0xb8))();
          uVar14 = 0;
          if (iVar4 < 0) {
            ppppppppiStack_27c = (int ********)0x448708;
            __vbaHresultCheckObj();
          }
          iVar4 = (int)(short)ppppppppiStack_148;
          if (!SBORROW4(*(int *)local_120,iVar4)) {
            if (DAT_0047f000 != 0) {
              adj_fdiv_m64();
            }
            if ((uVar14 & 0xd) != 0) goto LAB_004488e8;
            ppppppppiStack_144 = (int ********)__vbaFpI2();
            __vbaFreeObj();
            (**(code **)(*unaff_EBX + 0x758))();
            lVar1 = (longlong)iVar4 * 0x11d;
            iVar4 = (int)lVar1;
            if ((iVar4 == lVar1) && (!SCARRY4(iVar4,(int)afStack_1f4[0]._0_2_))) {
              uStack_1c0 = 3;
              ppppppppiStack_27c = (int ********)&DAT_004180b4;
              pppppppiStack_280 = (int *******)*puStack_124;
              pppppppiStack_284 = (int *******)0x44880c;
              iStack_1b8 = iVar4 + afStack_1f4[0]._0_2_;
              __vbaLateMemSt();
              iVar4 = (int)((longlong)(int)(short)ppppppppiStack_144 * 2000);
              if (((longlong)iVar4 == (longlong)(int)(short)ppppppppiStack_144 * 2000) &&
                 (!SCARRY4(iVar4,0x78))) {
                ppppppppiStack_27c = (int ********)&pppuStack_160;
                uStack_1c0 = 3;
                pppppppiStack_280 = (int *******)0x448850;
                iStack_1b8 = iVar4 + 0x78;
                __vbaLateMemCallLd();
                __vbaVarAdd();
                pppppppiStack_280 = (int *******)*puStack_124;
                ppppppppiStack_27c = (int ********)0x4180a8;
                pppppppiStack_284 = (int *******)0x448883;
                __vbaLateMemSt();
                __vbaFreeVarList();
                return;
              }
            }
          }
        }
        else {
          (**(code **)(*unaff_EBX + 0x31c))();
          piVar11 = (int *)__vbaObjSet();
          iVar4 = (**(code **)(*piVar11 + 0x78))();
          if (iVar4 < 0) {
            __vbaHresultCheckObj();
          }
          sVar3 = afStack_1f4[0]._0_2_;
          __vbaFreeObj();
          if (sVar3 == 0) {
            (**(code **)(*unaff_EBX + 0x318))();
            piStack_25c = (int *)__vbaObjSet();
            piStack_260 = (int *)0x44843f;
            iVar4 = (**(code **)(*piStack_25c + 0x80))();
            uVar14 = 0;
            if (iVar4 < 0) {
              ppppppppiStack_27c = (int ********)0x448457;
              __vbaHresultCheckObj();
            }
            ppppppiStack_180 = (int ******)0x1;
            ppppppiStack_158 = (int ******)0x1;
            uStack_168 = (double)(fStack_1fc - 240.0);
            if ((uVar14 & 0xd) != 0) goto LAB_004488e8;
            ppppppiStack_170 = (int ******)0x5;
            pppuStack_160 = (undefined ***)0x2;
            ppppppppiStack_27c = (int ********)0x44849e;
            FUN_00441030(&ppppuStack_190,&pppuStack_160,&ppppppiStack_170,&ppppppiStack_180);
            pppppppiStack_28c = (int *******)0x41809c;
            ppppuStack_288 = (undefined4 ****)ppppuStack_190;
            pppppppiStack_284 = pppppppiStack_18c;
            pppppppiStack_280 = pppppppiStack_188;
            ppppppppiStack_27c = (int ********)uStack_184;
            pppppppiStack_290 = (int *******)*puStack_124;
            pppuStack_294 = (undefined4 ***)0x4484c8;
            __vbaLateMemSt();
            ppppppppiStack_27c = (int ********)0x4484d1;
            __vbaFreeObj();
            ppppppppiStack_27c = (int ********)&ppppuStack_190;
            pppppppiStack_280 = &ppppppiStack_180;
            pppppppiStack_284 = &ppppppiStack_170;
            ppppuStack_288 = (undefined4 ****)&pppuStack_160;
            pppppppiStack_28c = (int *******)0x4;
            pppppppiStack_290 = (int *******)0x4484e9;
            __vbaFreeVarList();
            pcVar13 = __vbaLateMemSt_exref;
          }
          else {
            (**(code **)(*unaff_EBX + 0x318))();
            piStack_25c = (int *)__vbaObjSet();
            iVar4 = (**(code **)(*piStack_25c + 0x80))();
            if (iVar4 < 0) {
              __vbaHresultCheckObj();
            }
            (**(code **)(*unaff_EBX + 0x31c))();
            piVar11 = (int *)__vbaObjSet();
            iVar4 = (**(code **)(*piVar11 + 0x68))();
            uVar14 = 0;
            if (iVar4 < 0) {
              ppppppppiStack_27c = (int ********)0x448370;
              __vbaHresultCheckObj();
            }
            uStack_168 = (double)((fStack_1fc - 240.0) - 0.0);
            if ((uVar14 & 0xd) != 0) {
LAB_004488e8:
              __vbaFPException();
              return;
            }
            ppppppiStack_180 = (int ******)0x1;
            ppppppiStack_158 = (int ******)0x1;
            ppppppiStack_170 = (int ******)0x5;
            pppuStack_160 = (undefined ***)0x2;
            ppppppppiStack_27c = (int ********)0x4483bd;
            FUN_00441030(&ppppuStack_190,&pppuStack_160,&ppppppiStack_170,&ppppppiStack_180);
            pcVar13 = __vbaLateMemSt_exref;
            pppppppiStack_28c = (int *******)0x41809c;
            ppppuStack_288 = (undefined4 ****)ppppuStack_190;
            pppppppiStack_284 = pppppppiStack_18c;
            pppppppiStack_280 = pppppppiStack_188;
            ppppppppiStack_27c = (int ********)uStack_184;
            pppppppiStack_290 = (int *******)*puStack_124;
            pppuStack_294 = (undefined4 ***)0x4483e9;
            __vbaLateMemSt();
            ppppppppiStack_27c = &pppppppiStack_150;
            pppppppiStack_280 = &ppppppiStack_14c;
            pppppppiStack_284 = (int *******)0x2;
            ppppuStack_288 = (undefined4 ****)0x4483f9;
            __vbaFreeObjList();
            ppppuStack_288 = &ppppuStack_190;
            pppppppiStack_28c = &ppppppiStack_180;
            pppppppiStack_290 = &ppppppiStack_170;
            pppuStack_294 = &pppuStack_160;
            uStack_298 = 4;
            uStack_29c = 0x448411;
            __vbaFreeVarList();
            piStack_260 = unaff_EBX;
          }
          pfStack_258 = &fStack_1fc;
          uStack_1c0 = 3;
          pppppppiStack_28c = (int *******)0x4180a8;
          ppppuStack_288 = (undefined4 ****)0x3;
          iStack_1b8 = 0x78;
          pppppppiStack_284 = pppppppiStack_1bc;
          pppppppiStack_290 = (int *******)*puStack_124;
          pppppppiStack_280 = (int *******)0x78;
          ppppppppiStack_27c = (int ********)puStack_1b4;
          pppuStack_294 = (undefined4 ***)0x44852e;
          (*pcVar13)();
          pppuStack_294 = (undefined4 ***)afStack_1f4;
          uStack_29c = 0x44853e;
          (**(code **)(*unaff_EBX + 0x758))();
          puStack_2a0 = (undefined4 *)0x448547;
          puStack_2a0 = (undefined4 *)(**(code **)(*unaff_EBX + 0x31c))();
          pppppppiStack_2a4 = &ppppppiStack_14c;
          uStack_2a8 = 0x448552;
          pppppppiStack_2a4 = (int *******)__vbaObjSet();
          puStack_2a0 = &uStack_1f8;
          uStack_2a8 = 0x448564;
          iVar4 = (**(code **)((int)*pppppppiStack_2a4 + 0xb8))();
          if (iVar4 < 0) {
            ppppppppiStack_27c = (int ********)0x44857c;
            __vbaHresultCheckObj();
          }
          if (!SBORROW4(*(int *)local_120,(int)(short)uStack_1f8)) {
            lVar1 = (longlong)(*(int *)local_120 - (int)(short)uStack_1f8) * 0x11d;
            iVar4 = (int)lVar1;
            if ((iVar4 == lVar1) && (!SCARRY4(iVar4,(int)afStack_1f4[0]._0_2_))) {
              uStack_1c0 = 3;
              ppppppppiStack_27c = (int ********)&DAT_004180b4;
              pppppppiStack_280 = (int *******)*puStack_124;
              pppppppiStack_284 = (int *******)0x4485e2;
              iStack_1b8 = iVar4 + afStack_1f4[0]._0_2_;
              (*pcVar13)();
              pppppppiStack_284 = (int *******)0x4485eb;
              __vbaFreeObj();
              return;
            }
          }
        }
        __vbaErrorOverflow();
        ExceptionList = &stack0xfffffd88;
        pppppppiStack_280 = (int *******)0x0;
        piVar11 = (int *)*piStack_25c;
        pppppppiStack_284 = (int *******)0x0;
        ppppuStack_288 = (undefined4 ****)0x0;
        pppppppiStack_28c = (int *******)0x0;
        uStack_29c = 0;
        uStack_2ac = 0;
        auStack_2bc[0] = 0;
        auStack_2cc[0] = 0;
        ppppppppiStack_27c = (int ********)0x0;
        iVar4 = (**(code **)(*piVar11 + 0x24))(piVar11,&pppppppiStack_280);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar11,&LAB_0041470c,0x24);
        }
        iVar4 = __vbaStrCmp(pppppppiStack_280,*pfStack_258);
        __vbaFreeStr();
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*(int *)piStack_260[0x1a] + 0x6c))
                            ((int *)piStack_260[0x1a],&pppppppiStack_284);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piStack_260[0x1a],&LAB_004133e8,0x6c);
          }
          pppppppiVar5 = pppppppiStack_284;
          iVar4 = (*(code *)(*pppppppiStack_284)[10])(pppppppiStack_284,pfStack_258,&ppppuStack_288)
          ;
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,pppppppiVar5,&DAT_004146fc,0x28);
          }
          sVar3 = __vbaObjIs(ppppuStack_288,0);
          __vbaFreeObjList(2,&pppppppiStack_284,&ppppuStack_288);
          if (sVar3 == 0) {
            uStack_2c4 = 0x80020004;
            uStack_2b4 = 0x80020004;
            auStack_2cc[0] = 10;
            auStack_2bc[0] = 10;
            __vbaVarDup();
            __vbaVarDup();
            rtcMsgBox(&uStack_29c,0,&uStack_2ac,auStack_2bc,auStack_2cc);
            __vbaFreeVarList(4,&uStack_29c,&uStack_2ac,auStack_2bc,auStack_2cc);
          }
          else {
            piVar11 = (int *)*piStack_25c;
            iVar4 = (**(code **)(*piVar11 + 0x28))(piVar11,*pfStack_258);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,piVar11,&LAB_0041470c,0x28);
            }
            uVar16 = 0;
            uVar12 = (**(code **)(*piStack_260 + 0x358))(piStack_260,7,0,&DAT_00417d34);
            uVar12 = __vbaObjSet(&pppppppiStack_284,uVar12);
            uVar12 = __vbaLateIdCallLd(&uStack_29c,uVar12);
            uVar12 = __vbaCastObjVar(uVar12,uVar16);
            piVar11 = (int *)__vbaObjSet(&ppppuStack_288,uVar12);
            piStack_25c = (int *)*piStack_25c;
            iVar4 = (**(code **)(*piStack_25c + 0x1c))(piStack_25c,&pppppppiStack_280);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,piStack_25c,&LAB_0041470c,0x1c);
            }
            pppppppiStack_2a4 = pppppppiStack_280;
            pppppppiStack_280 = (int *******)0x0;
            uStack_2ac = 8;
            iVar4 = (**(code **)(*piVar11 + 0x24))(piVar11,&uStack_2ac,&pppppppiStack_28c);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,piVar11,&DAT_00417d34,0x24);
            }
            pppppppiVar5 = pppppppiStack_28c;
            iVar4 = (*(code *)(*pppppppiStack_28c)[10])(pppppppiStack_28c,*pfStack_258);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,pppppppiVar5,&DAT_00417d44,0x28);
            }
            __vbaFreeObjList(3,&pppppppiStack_284,&ppppuStack_288,&pppppppiStack_28c);
            __vbaFreeVarList(2,&uStack_29c,&uStack_2ac);
            if ((short)piStack_260[0x23] == 0) {
              iVar4 = *piStack_260;
              uVar12 = __vbaCastObj(0,&DAT_00417d44);
              uVar12 = __vbaObjSet(&pppppppiStack_284,uVar12);
              (**(code **)(iVar4 + 0x788))(piStack_260,uVar12);
              __vbaFreeObj();
            }
          }
        }
        return;
      }
    }
  }
LAB_004481ce:
  __vbaFPException();
  return;
}

/* ---- 0x4481e0 (FUN_004481e0) [estimated] strings: 쒃贐쁍児ᗿሰ@ࢋ\xec83謐觔謊ш䪉謄ࡈ䪉謈謋ీꡨ䆀儀䊉，跖쁕䖍勐橐＂䀕䀐茀ೄ梛裓D㓫䶍跠\xe455剑ɪᗿၐ@䖍趀遍赐ꁕ赑끅赒쁍赐큕剑٪ᗿ၀@쒃쌨诃\xf04d幟쀳襤\r; Width; Width; Left ---- */
void __cdecl FUN_004481e0(int *param_1,undefined4 *param_2,int *param_3,short *param_4)

{
  longlong lVar1;
  wchar_t *pwVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 auStack_1a0 [2];
  undefined4 uStack_198;
  undefined4 auStack_190 [2];
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  wchar_t *pwStack_178;
  undefined4 *puStack_174;
  int *piStack_170;
  int *piStack_16c;
  undefined4 **ppuStack_168;
  int *piStack_164;
  wchar_t *pwStack_160;
  undefined4 ***pppuStack_15c;
  int *piStack_158;
  wchar_t *pwStack_154;
  undefined4 ***pppuStack_150;
  int *local_134;
  int *local_130;
  float *local_12c;
  float local_d0;
  undefined4 local_cc;
  float local_c8 [13];
  undefined4 local_94;
  int *local_90;
  int local_8c;
  undefined *local_88;
  undefined4 local_84 [4];
  undefined4 local_74 [4];
  undefined4 **local_64;
  int *local_60;
  wchar_t *local_5c;
  undefined4 local_58;
  wchar_t local_54 [8];
  int local_44 [2];
  double local_3c;
  undefined4 *local_34 [2];
  undefined4 local_2c;
  undefined4 local_24;
  wchar_t local_20 [2];
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffee8;
  local_8 = &DAT_004023f8;
  local_20[0] = L'\0';
  local_20[1] = L'\0';
  local_24 = 0;
  local_34[0] = (undefined4 *)0x0;
  local_44[0] = 0;
  local_54[0] = L'\0';
  local_54[1] = L'\0';
  local_64 = (undefined4 ***)0x0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94 = 0;
  local_c8[0] = 0.0;
  local_cc = 0;
  local_d0 = 0.0;
  ExceptionList = &pvStack_14;
  sVar3 = __vbaCheckType();
  if (sVar3 == 0) {
    local_94 = 3;
    local_8c = 0x11d;
    __vbaLateMemSt();
  }
  if (*param_4 == 0) {
    __vbaLateMemCallLd();
    local_74[0] = 1;
    local_5c = (wchar_t *)0x1;
    local_64 = (undefined4 ***)0x2;
    local_8c = 2000;
    local_94 = 3;
    __vbaVarSub();
    __vbaVarMove();
    FUN_00441030(local_84,local_54,&local_64,local_74);
    __vbaLateMemSt();
    __vbaFreeVarList();
    local_1c = __vbaI2I4();
    (**(code **)(*param_1 + 0x328))();
    local_130 = (int *)__vbaObjSet();
    local_12c = local_c8;
    local_134 = (int *)0x4486f0;
    iVar5 = (**(code **)(*local_130 + 0xb8))();
    uVar8 = 0;
    if (iVar5 < 0) {
      pppuStack_150 = (undefined4 ***)0x448708;
      __vbaHresultCheckObj();
    }
    iVar5 = (int)(short)local_1c;
    if (!SBORROW4(*param_3,iVar5)) {
      if (DAT_0047f000 != 0) {
        adj_fdiv_m64();
      }
      if ((uVar8 & 0xd) != 0) goto LAB_004488e8;
      local_18 = __vbaFpI2();
      __vbaFreeObj();
      (**(code **)(*param_1 + 0x758))();
      lVar1 = (longlong)iVar5 * 0x11d;
      iVar5 = (int)lVar1;
      if ((iVar5 == lVar1) && (!SCARRY4(iVar5,(int)local_c8[0]._0_2_))) {
        local_94 = 3;
        pppuStack_150 = (undefined4 ***)&DAT_004180b4;
        pwStack_154 = (wchar_t *)*param_2;
        piStack_158 = (int *)0x44880c;
        local_8c = iVar5 + local_c8[0]._0_2_;
        __vbaLateMemSt();
        iVar5 = (int)((longlong)(int)(short)local_18 * 2000);
        if (((longlong)iVar5 == (longlong)(int)(short)local_18 * 2000) && (!SCARRY4(iVar5,0x78))) {
          pppuStack_150 = (undefined4 ***)local_34;
          local_94 = 3;
          pwStack_154 = 
          L"쒃贐쁍児ᗿሰ@ࢋ\xec83謐觔謊ш䪉謄ࡈ䪉謈謋ీꡨ䆀儀䊉，跖쁕䖍勐橐＂䀕䀐茀ೄ梛裓D㓫䶍跠\xe455剑ɪᗿၐ@䖍趀遍赐ꁕ赑끅赒쁍赐큕剑٪ᗿ၀@쒃쌨诃\xf04d幟쀳襤\r"
          ;
          local_8c = iVar5 + 0x78;
          __vbaLateMemCallLd();
          __vbaVarAdd();
          pwStack_154 = (wchar_t *)*param_2;
          pppuStack_150 = (undefined4 ***)0x4180a8;
          piStack_158 = (int *)0x448883;
          __vbaLateMemSt();
          __vbaFreeVarList();
          return;
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x31c))();
    piVar4 = (int *)__vbaObjSet();
    iVar5 = (**(code **)(*piVar4 + 0x78))();
    if (iVar5 < 0) {
      __vbaHresultCheckObj();
    }
    sVar3 = local_c8[0]._0_2_;
    __vbaFreeObj();
    if (sVar3 == 0) {
      (**(code **)(*param_1 + 0x318))();
      local_130 = (int *)__vbaObjSet();
      local_134 = (int *)0x44843f;
      iVar5 = (**(code **)(*local_130 + 0x80))();
      uVar8 = 0;
      if (iVar5 < 0) {
        pppuStack_150 = (undefined4 ***)0x448457;
        __vbaHresultCheckObj();
      }
      local_54[0] = L'\x01';
      local_54[1] = L'\0';
      local_2c = 1;
      local_3c = (double)(local_d0 - 240.0);
      if ((uVar8 & 0xd) != 0) goto LAB_004488e8;
      local_44[0] = 5;
      local_34[0] = (undefined4 *)0x2;
      pppuStack_150 = (undefined4 ***)0x44849e;
      FUN_00441030(&local_64,local_34,local_44,local_54);
      pwStack_160 = L"Width";
      pppuStack_15c = (undefined4 ***)local_64;
      piStack_158 = local_60;
      pwStack_154 = local_5c;
      pppuStack_150 = (undefined4 ***)local_58;
      piStack_164 = (int *)*param_2;
      ppuStack_168 = (undefined4 **)0x4484c8;
      __vbaLateMemSt();
      pppuStack_150 = (undefined4 ***)0x4484d1;
      __vbaFreeObj();
      pppuStack_150 = &local_64;
      pwStack_154 = local_54;
      piStack_158 = local_44;
      pppuStack_15c = (undefined4 ***)local_34;
      pwStack_160 = (wchar_t *)0x4;
      piStack_164 = (int *)0x4484e9;
      __vbaFreeVarList();
      pcVar7 = __vbaLateMemSt_exref;
    }
    else {
      (**(code **)(*param_1 + 0x318))();
      local_130 = (int *)__vbaObjSet();
      iVar5 = (**(code **)(*local_130 + 0x80))();
      if (iVar5 < 0) {
        __vbaHresultCheckObj();
      }
      local_134 = param_1;
      (**(code **)(*param_1 + 0x31c))();
      piVar4 = (int *)__vbaObjSet();
      iVar5 = (**(code **)(*piVar4 + 0x68))();
      uVar8 = 0;
      if (iVar5 < 0) {
        pppuStack_150 = (undefined4 ***)0x448370;
        __vbaHresultCheckObj();
      }
      local_3c = (double)((local_d0 - 240.0) - 0.0);
      if ((uVar8 & 0xd) != 0) {
LAB_004488e8:
        __vbaFPException();
        return;
      }
      local_54[0] = L'\x01';
      local_54[1] = L'\0';
      local_2c = 1;
      local_44[0] = 5;
      local_34[0] = (undefined4 *)0x2;
      pppuStack_150 = (undefined4 ***)0x4483bd;
      FUN_00441030(&local_64,local_34,local_44,local_54);
      pcVar7 = __vbaLateMemSt_exref;
      pwStack_160 = L"Width";
      pppuStack_15c = (undefined4 ***)local_64;
      piStack_158 = local_60;
      pwStack_154 = local_5c;
      pppuStack_150 = (undefined4 ***)local_58;
      piStack_164 = (int *)*param_2;
      ppuStack_168 = (undefined4 **)0x4483e9;
      __vbaLateMemSt();
      pppuStack_150 = (undefined4 ***)&local_24;
      pwStack_154 = local_20;
      piStack_158 = (int *)0x2;
      pppuStack_15c = (undefined4 ***)0x4483f9;
      __vbaFreeObjList();
      pppuStack_15c = &local_64;
      pwStack_160 = local_54;
      piStack_164 = local_44;
      ppuStack_168 = local_34;
      piStack_16c = (int *)0x4;
      piStack_170 = (int *)0x448411;
      __vbaFreeVarList();
    }
    local_12c = &local_d0;
    local_94 = 3;
    pwStack_160 = L"Left";
    pppuStack_15c = (undefined4 ***)0x3;
    local_8c = 0x78;
    piStack_158 = local_90;
    piStack_164 = (int *)*param_2;
    pwStack_154 = (wchar_t *)0x78;
    pppuStack_150 = (undefined4 ***)local_88;
    ppuStack_168 = (undefined4 **)0x44852e;
    (*pcVar7)();
    ppuStack_168 = (undefined4 **)local_c8;
    piStack_16c = param_1;
    piStack_170 = (int *)0x44853e;
    (**(code **)(*param_1 + 0x758))();
    piStack_170 = param_1;
    puStack_174 = (undefined4 *)0x448547;
    puStack_174 = (undefined4 *)(**(code **)(*param_1 + 0x31c))();
    pwStack_178 = local_20;
    uStack_17c = 0x448552;
    pwStack_178 = (wchar_t *)__vbaObjSet();
    puStack_174 = &local_cc;
    uStack_17c = 0x448564;
    iVar5 = (**(code **)(*(int *)pwStack_178 + 0xb8))();
    if (iVar5 < 0) {
      pppuStack_150 = (undefined4 ***)0x44857c;
      __vbaHresultCheckObj();
    }
    if (!SBORROW4(*param_3,(int)(short)local_cc)) {
      lVar1 = (longlong)(*param_3 - (int)(short)local_cc) * 0x11d;
      iVar5 = (int)lVar1;
      if ((iVar5 == lVar1) && (!SCARRY4(iVar5,(int)local_c8[0]._0_2_))) {
        local_94 = 3;
        pppuStack_150 = (undefined4 ***)&DAT_004180b4;
        pwStack_154 = (wchar_t *)*param_2;
        piStack_158 = (int *)0x4485e2;
        local_8c = iVar5 + local_c8[0]._0_2_;
        (*pcVar7)();
        piStack_158 = (int *)0x4485eb;
        __vbaFreeObj();
        return;
      }
    }
  }
  __vbaErrorOverflow();
  ExceptionList = &stack0xfffffeb4;
  pwStack_154 = (wchar_t *)0x0;
  piVar4 = (int *)*local_130;
  piStack_158 = (int *)0x0;
  pppuStack_15c = (undefined4 ***)0x0;
  pwStack_160 = (wchar_t *)0x0;
  piStack_170 = (int *)0x0;
  uStack_180 = 0;
  auStack_190[0] = 0;
  auStack_1a0[0] = 0;
  pppuStack_150 = (undefined4 ***)0x0;
  iVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,&pwStack_154);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&LAB_0041470c,0x24);
  }
  iVar5 = __vbaStrCmp(pwStack_154,*local_12c);
  __vbaFreeStr();
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*(int *)local_134[0x1a] + 0x6c))((int *)local_134[0x1a],&piStack_158);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_134[0x1a],&LAB_004133e8,0x6c);
    }
    piVar4 = piStack_158;
    iVar5 = (**(code **)(*piStack_158 + 0x28))(piStack_158,local_12c,&pppuStack_15c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_004146fc,0x28);
    }
    sVar3 = __vbaObjIs(pppuStack_15c,0);
    __vbaFreeObjList(2,&piStack_158,&pppuStack_15c);
    if (sVar3 == 0) {
      uStack_198 = 0x80020004;
      uStack_188 = 0x80020004;
      auStack_1a0[0] = 10;
      auStack_190[0] = 10;
      __vbaVarDup();
      __vbaVarDup();
      rtcMsgBox(&piStack_170,0,&uStack_180,auStack_190,auStack_1a0);
      __vbaFreeVarList(4,&piStack_170,&uStack_180,auStack_190,auStack_1a0);
    }
    else {
      piVar4 = (int *)*local_130;
      iVar5 = (**(code **)(*piVar4 + 0x28))(piVar4,*local_12c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&LAB_0041470c,0x28);
      }
      uVar9 = 0;
      uVar6 = (**(code **)(*local_134 + 0x358))(local_134,7,0,&DAT_00417d34);
      uVar6 = __vbaObjSet(&piStack_158,uVar6);
      uVar6 = __vbaLateIdCallLd(&piStack_170,uVar6);
      uVar6 = __vbaCastObjVar(uVar6,uVar9);
      piVar4 = (int *)__vbaObjSet(&pppuStack_15c,uVar6);
      local_130 = (int *)*local_130;
      iVar5 = (**(code **)(*local_130 + 0x1c))(local_130,&pwStack_154);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_130,&LAB_0041470c,0x1c);
      }
      pwStack_178 = pwStack_154;
      pwStack_154 = (wchar_t *)0x0;
      uStack_180 = 8;
      iVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,&uStack_180,&pwStack_160);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_00417d34,0x24);
      }
      pwVar2 = pwStack_160;
      iVar5 = (**(code **)(*(int *)pwStack_160 + 0x28))(pwStack_160,*local_12c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,pwVar2,&DAT_00417d44,0x28);
      }
      __vbaFreeObjList(3,&piStack_158,&pppuStack_15c,&pwStack_160);
      __vbaFreeVarList(2,&piStack_170,&uStack_180);
      if ((short)local_134[0x23] == 0) {
        iVar5 = *local_134;
        uVar6 = __vbaCastObj(0,&DAT_00417d44);
        uVar6 = __vbaObjSet(&piStack_158,uVar6);
        (**(code **)(iVar5 + 0x788))(local_134,uVar6);
        __vbaFreeObj();
      }
    }
  }
  return;
}

/* ---- 0x448900 (FUN_00448900) [estimated] strings:  ---- */
void __cdecl FUN_00448900(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [4];
  int *local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff2c;
  local_8 = &DAT_00402408;
  local_1c = 0;
  piVar1 = (int *)*param_2;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&LAB_0041470c,0x24);
  }
  iVar3 = __vbaStrCmp(local_1c,*param_3);
  __vbaFreeStr();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,param_1[0x1a],&LAB_004133e8,0x6c);
    }
    piVar1 = local_20;
    iVar3 = (**(code **)(*local_20 + 0x28))(local_20,param_3,&local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar1,&DAT_004146fc,0x28);
    }
    sVar2 = __vbaObjIs(local_24,0);
    __vbaFreeObjList(2,&local_20,&local_24);
    if (sVar2 == 0) {
      local_60 = 0x80020004;
      local_50 = 0x80020004;
      local_68[0] = 10;
      local_58[0] = 10;
      __vbaVarDup();
      __vbaVarDup();
      rtcMsgBox(local_38,0,local_48,local_58,local_68);
      __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    }
    else {
      piVar1 = (int *)*param_2;
      iVar3 = (**(code **)(*piVar1 + 0x28))(piVar1,*param_3);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&LAB_0041470c,0x28);
      }
      uVar6 = 0;
      uVar4 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
      uVar4 = __vbaObjSet(&local_20,uVar4);
      uVar4 = __vbaLateIdCallLd(local_38,uVar4);
      uVar4 = __vbaCastObjVar(uVar4,uVar6);
      piVar5 = (int *)__vbaObjSet(&local_24,uVar4);
      piVar1 = (int *)*param_2;
      iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_1c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&LAB_0041470c,0x1c);
      }
      local_40 = local_1c;
      local_1c = 0;
      local_48[0] = 8;
      iVar3 = (**(code **)(*piVar5 + 0x24))(piVar5,local_48,&local_28);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar5,&DAT_00417d34,0x24);
      }
      piVar1 = local_28;
      iVar3 = (**(code **)(*local_28 + 0x28))(local_28,*param_3);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_00417d44,0x28);
      }
      __vbaFreeObjList(3,&local_20,&local_24,&local_28);
      __vbaFreeVarList(2,local_38,local_48);
      if ((short)param_1[0x23] == 0) {
        iVar3 = *param_1;
        uVar4 = __vbaCastObj(0,&DAT_00417d44);
        uVar4 = __vbaObjSet(&local_20,uVar4);
        (**(code **)(iVar3 + 0x788))(param_1,uVar4);
        __vbaFreeObj();
      }
    }
  }
  return;
}

/* ---- 0x448c50 (FUN_00448c50) [estimated] strings:  ---- */
void __cdecl FUN_00448c50(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff08;
  local_8 = &DAT_00402418;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  ExceptionList = &pvStack_14;
  uVar1 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_28,uVar1);
  __vbaStrCopy();
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x74))((int *)param_1[0x1a],&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x74);
  }
  uVar1 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_18,uVar1);
  __vbaFreeStr();
  __vbaFreeObj();
  iVar2 = (**(code **)(*local_18 + 0x1c))(local_18,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&LAB_0041470c,0x1c);
  }
  iVar2 = (**(code **)(*local_18 + 0x24))(local_18,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&LAB_0041470c,0x24);
  }
  uVar5 = 0;
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_28,uVar1);
  uVar1 = __vbaLateIdCallLd(local_40,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar5);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar1);
  local_68 = local_24;
  local_88 = 0x80020004;
  local_78 = 0x80020004;
  local_48 = 0x80020004;
  local_58 = local_20;
  local_90[0] = 10;
  local_80[0] = 10;
  local_24 = 0;
  local_70[0] = 8;
  local_20 = 0;
  local_60[0] = 8;
  local_50[0] = 10;
  iVar2 = (**(code **)(*piVar3 + 0x28))
                    (piVar3,local_50,local_60,local_70,local_80,local_90,&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417d34,0x28);
  }
  piVar3 = local_30;
  iVar2 = (**(code **)(*local_18 + 0x24))(local_18,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&LAB_0041470c,0x24);
  }
  piVar4 = piVar3;
  uVar1 = local_1c;
  iVar2 = (**(code **)(*piVar3 + 0x28))(piVar3,local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417d44,0x28);
  }
  __vbaFreeStr();
  __vbaFreeObjList(3,&local_28,&local_2c,&local_30);
  __vbaFreeVarList(6,local_40,local_50,local_60,local_70,local_80,local_90);
  __vbaStrCopy(piVar4,uVar1);
  (**(code **)(*param_1 + 0x77c))(param_1,&local_1c);
  __vbaFreeStr();
  __vbaFreeObj(&LAB_00448f22);
  return;
}
