/* Object #29 frmIndentIncrement -- ESTIMATED function range; public methods per VB header: Preferences */
#include "ghidra_types.h"

/* ---- 0x473db0 (FUN_00473db0) [estimated] strings:  ---- */
void __cdecl FUN_00473db0(uint param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
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
  local_10 = &stack0xffffffb4;
  local_c = &DAT_00402e18;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  sVar1 = rtcAnsiValueBstr(&DAT_004179cc /* bstr: '\r' */);
  if (*param_2 == sVar1) {
    uVar2 = (**(code **)(*piVar5 + 0x2fc))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00417a98,0xa0);
    }
    local_1c = 0;
    __vbaStrMove();
    iVar4 = (**(code **)(*(int *)piVar5[0xd] + 0x40))((int *)piVar5[0xd],&local_20);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5[0xd],&DAT_00415000,0x40);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    if (DAT_00480244 == (int *)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    piVar3 = DAT_00480244;
    iVar4 = *DAT_00480244;
    uVar2 = __vbaObjSetAddref(&local_24,piVar5);
    iVar4 = (**(code **)(iVar4 + 0x10))(piVar3,uVar2);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00413b24,0x10);
    }
    __vbaFreeObj();
  }
  return;
}

/* ---- 0x473f40 (FUN_00473f40) [estimated] strings: Invalid SortingMethod ---- */
void __cdecl FUN_00473f40(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  bool bVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 local_f4;
  undefined4 local_f0 [7];
  undefined4 local_d4 [9];
  undefined4 local_b0;
  double local_a8;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70;
  int *local_6c;
  int *local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_44 [4];
  undefined4 local_34 [4];
  int *local_24;
  int *local_20;
  uint local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffecc;
  local_c = &DAT_00402e28;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  piVar4 = (int *)*param_2;
  local_34[0] = 0;
  local_44[0] = 0;
  local_48 = 0;
  local_58[0] = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = (int *)0x0;
  local_6c = (int *)0x0;
  local_70 = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0 = 0;
  local_d4[0] = 0;
  local_f0[0] = 0;
  local_f4 = 0;
  local_1c = 0;
  local_5c = 0;
  iVar2 = (**(code **)(*piVar4 + 0x3c))(piVar4,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&LAB_0041470c,0x3c);
  }
  piVar6 = local_68;
  piVar4 = param_1 + 0xf;
  iVar2 = (**(code **)(*local_68 + 0x2c))(local_68,piVar4,&local_6c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar6,&DAT_00414ba4,0x2c);
  }
  piVar6 = local_6c;
  local_6c = (int *)0x0;
  __vbaObjSet(&local_24,piVar6);
  __vbaFreeObj();
  sVar1 = __vbaObjIs(local_24,0);
  if (sVar1 == 0) {
    iVar2 = (**(code **)(*local_24 + 0x2c))(local_24,&local_60);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_24,&DAT_00414bb4,0x2c);
    }
    local_78 = local_60;
    pcVar7 = __vbaVarMove_exref;
    local_60 = 0;
    local_80[0] = 8;
    __vbaVarMove();
  }
  else {
    local_a8 = (double)CONCAT44(local_a8._4_4_,&DAT_00412f74);
    local_b0 = 8;
    __vbaVarCopy();
    pcVar7 = __vbaVarMove_exref;
  }
  piVar6 = (int *)*param_3;
  iVar2 = (**(code **)(*piVar6 + 0x3c))(piVar6,&local_68);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar6,&LAB_0041470c,0x3c);
  }
  piVar6 = local_68;
  iVar2 = (**(code **)(*local_68 + 0x2c))(local_68,piVar4,&local_6c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar6,&DAT_00414ba4,0x2c);
  }
  piVar6 = local_6c;
  local_6c = (int *)0x0;
  __vbaObjSet(&local_24,piVar6);
  __vbaFreeObj();
  sVar1 = __vbaObjIs(local_24,0);
  if (sVar1 == 0) {
    iVar2 = (**(code **)(*local_24 + 0x2c))(local_24,&local_60);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_24,&DAT_00414bb4,0x2c);
    }
    local_78 = local_60;
    local_60 = 0;
    local_80[0] = 8;
    (*pcVar7)();
  }
  else {
    local_a8 = (double)CONCAT44(local_a8._4_4_,&DAT_00412f74);
    local_b0 = 8;
    __vbaVarCopy();
  }
  iVar2 = param_1[0x10];
  if (iVar2 == 0) {
    __vbaStrErrVarCopy(local_44);
    uVar3 = __vbaStrMove();
    __vbaStrErrVarCopy(local_34);
    uVar5 = __vbaStrMove(uVar3);
    iVar2 = __vbaStrCmp(uVar5,uVar3);
    local_1c = -(uint)(iVar2 < 0);
    __vbaFreeStrList(2,&local_60,&local_64);
  }
  else if (iVar2 == 1) {
    sVar1 = rtcIsNumeric(local_44);
    if (sVar1 == 0) {
      local_a8 = (double)((ulonglong)local_a8 & 0xffffffff00000000);
      local_b0 = 2;
    }
    else {
      fVar9 = (float10)__vbaR8ErrVar(local_44);
      local_a8 = (double)fVar9;
      local_b0 = 5;
    }
    (*pcVar7)();
    sVar1 = rtcIsNumeric(local_34);
    if (sVar1 == 0) {
      local_a8 = (double)((ulonglong)local_a8 & 0xffffffff00000000);
      local_b0 = 2;
    }
    else {
      fVar9 = (float10)__vbaR8ErrVar(local_34);
      local_a8 = (double)fVar9;
      local_b0 = 5;
    }
    (*pcVar7)();
    uVar3 = __vbaVarCmpLt(local_80,local_34,local_44);
    local_1c = __vbaBoolVar(uVar3);
  }
  else if (iVar2 == 2) {
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x70c))((int *)param_1[0xd],&local_68);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413728,0x70c);
    }
    piVar6 = local_68;
    iVar2 = (**(code **)(*local_68 + 0x44))(local_68,&local_6c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar6,&LAB_00414228,0x44);
    }
    piVar6 = local_6c;
    iVar2 = (**(code **)(*(int *)*piVar4 + 0x58))((int *)*piVar4,local_80);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,*piVar4,&DAT_00414268,0x58);
    }
    piVar4 = piVar6;
    iVar2 = (**(code **)(*piVar6 + 0x24))(piVar6,local_80,&local_70);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar6,&DAT_00414238,0x24);
    }
    uVar3 = local_70;
    local_70 = 0;
    __vbaObjSet(&local_20,uVar3);
    __vbaFreeObjList(2,&local_68,&local_6c);
    __vbaFreeVar(piVar4);
    iVar2 = (**(code **)(*local_20 + 0x6c))(local_20,&local_68);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x6c);
    }
    piVar4 = local_68;
    __vbaStrErrVarCopy(local_44);
    __vbaStrMove();
    iVar2 = (**(code **)(*piVar4 + 0x28))(piVar4,&local_60,&local_6c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_004146fc,0x28);
    }
    piVar4 = local_6c;
    local_6c = (int *)0x0;
    __vbaVarSetObj(local_44,piVar4);
    __vbaFreeStr();
    __vbaFreeObj();
    iVar2 = (**(code **)(*local_20 + 0x6c))(local_20,&local_68);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x6c);
    }
    piVar4 = local_68;
    __vbaStrErrVarCopy(local_34);
    __vbaStrMove();
    iVar2 = (**(code **)(*piVar4 + 0x28))(piVar4,&local_60,&local_6c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_004146fc,0x28);
    }
    piVar4 = local_6c;
    local_6c = (int *)0x0;
    __vbaVarSetObj(local_34,piVar4);
    __vbaFreeStr();
    __vbaFreeObj();
    iVar2 = (**(code **)(*local_20 + 0x6c))(local_20,&local_68);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x6c);
    }
    piVar4 = local_68;
    local_68 = (int *)0x0;
    uVar3 = __vbaObjSet(local_f0,piVar4);
    iVar2 = __vbaForEachCollObj(&LAB_0041470c,&local_f4,&local_48,uVar3);
    while (iVar2 != 0) {
      uVar3 = __vbaUnkVar(local_34);
      sVar1 = __vbaObjIs(local_48,uVar3);
      if (sVar1 != 0) {
        local_1c = 0;
        __vbaExitEachColl(&local_f4);
        break;
      }
      uVar3 = __vbaUnkVar(local_44);
      sVar1 = __vbaObjIs(local_48,uVar3);
      if (sVar1 != 0) {
        local_1c = 0xffffffff;
        __vbaExitEachColl(&local_f4);
        break;
      }
      iVar2 = __vbaNextEachCollObj(&LAB_0041470c,&local_f4,&local_48);
    }
  }
  else {
    uVar3 = rtcErrObj();
    piVar4 = (int *)__vbaObjSet(&local_68,uVar3);
    local_98 = 0x80020004;
    local_88 = 0x80020004;
    local_a0[0] = 10;
    local_90[0] = 10;
    local_a8 = (double)CONCAT44(local_a8._4_4_,L"Invalid SortingMethod");
    local_b0 = 8;
    __vbaVarDup();
    iVar2 = (**(code **)(*piVar4 + 0x44))(piVar4,0x415,local_58,local_80,local_90,local_a0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(3,local_80,local_90,local_a0);
  }
  uVar3 = (**(code **)(*param_1 + 0x310))(param_1);
  piVar6 = (int *)__vbaObjSet(&local_68,uVar3);
  puVar11 = local_d4;
  piVar4 = piVar6;
  iVar2 = (**(code **)(*piVar6 + 0xe0))(piVar6,puVar11);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar6,&DAT_00417e48,0xe0);
  }
  bVar8 = (short)local_d4[0] == 1;
  __vbaFreeObj();
  if (bVar8) {
    local_5c = ~local_1c;
  }
  else {
    local_5c = local_1c;
  }
  puVar10 = &LAB_004746f5;
  __vbaFreeObjList(2,local_f0,&local_f4,&LAB_004746f5);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeVar(puVar10);
  __vbaFreeVar(piVar4);
  __vbaFreeObj();
  __vbaFreeVar(puVar11);
  return;
}

/* ---- 0x474720 (FUN_00474720) [estimated] strings: Sorting entries of  ---- */
void __cdecl FUN_00474720(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 local_60;
  undefined4 local_5c [3];
  int *local_50;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  int *local_2c;
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
  local_10 = &stack0xffffff84;
  local_c = &DAT_00402e38;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  piVar4 = param_1 + 0xd;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  __vbaObjSetAddref(piVar4,*param_2);
  iVar2 = (**(code **)(*(int *)*piVar4 + 0x714))((int *)*piVar4,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*piVar4,&DAT_00413728,0x714);
  }
  piVar4 = param_1 + 0xe;
  __vbaObjSetAddref(piVar4,local_28);
  __vbaFreeObj();
  iVar2 = (**(code **)(*(int *)*piVar4 + 0x58))((int *)*piVar4,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*piVar4,&LAB_004133e8,0x58);
  }
  piVar4 = local_28;
  iVar2 = (**(code **)(*local_28 + 0x30))(local_28,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414258,0x30);
  }
  iVar2 = *param_1;
  __vbaStrCat(local_20,L"Sorting entries of ");
  uVar3 = __vbaStrMove();
  iVar2 = (**(code **)(iVar2 + 0x54))(param_1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&LAB_00417670,0x54);
  }
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaFreeObj();
  param_1[0x11] = 1;
  param_1[0x10] = 0;
  uVar3 = (**(code **)(*param_1 + 0x318))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = *piVar4;
  uVar3 = __vbaI2I4(&local_2c);
  iVar2 = (**(code **)(iVar2 + 0x40))(piVar4,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004182e4,0x40);
  }
  piVar4 = local_2c;
  iVar2 = (**(code **)(*local_2c + 0xe4))(local_2c,0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00418984,0xe4);
  }
  __vbaFreeObjList(2,&local_28,&local_2c);
  uVar3 = (**(code **)(*param_1 + 0x304))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = *piVar4;
  uVar3 = __vbaI2I4(&local_2c);
  iVar2 = (**(code **)(iVar2 + 0x40))(piVar4,uVar3);
  pcVar5 = __vbaHresultCheckObj_exref;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004182e4,0x40);
  }
  piVar4 = local_2c;
  iVar2 = (**(code **)(*local_2c + 0xe4))(local_2c,0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00418984,0xe4);
  }
  __vbaFreeObjList(2,&local_28,&local_2c);
  uVar3 = (**(code **)(*param_1 + 0x31c))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x1e8))(piVar4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_0041807c,0x1e8);
  }
  __vbaFreeObj();
  iVar2 = (**(code **)(*(int *)param_1[0xe] + 0x70))((int *)param_1[0xe],&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xe],&LAB_004133e8,0x70);
  }
  piVar4 = local_28;
  iVar2 = (**(code **)(*local_28 + 0x6c))(local_28,&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&LAB_004133f8,0x6c);
  }
  piVar4 = local_2c;
  local_2c = (int *)0x0;
  uVar3 = __vbaObjSet(local_5c,piVar4);
  iVar2 = __vbaForEachCollObj(&DAT_00414268,&local_60,&local_1c,uVar3);
  __vbaFreeObj();
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*local_1c + 0x44))(local_1c,&local_40);
    if (iVar2 < 0) {
      (*pcVar5)(iVar2,local_1c,&DAT_00414268,0x44);
    }
    if ((short)local_40 != 0) {
      iVar2 = (**(code **)(*local_1c + 0x54))(local_1c,&local_44);
      if (iVar2 < 0) {
        (*pcVar5)(iVar2,local_1c,&DAT_00414268,0x54);
      }
      if (local_44 != 2) {
        uVar3 = (**(code **)(*param_1 + 0x31c))(param_1);
        piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
        iVar2 = (**(code **)(*local_1c + 0x34))(local_1c,&local_20);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414268,0x34);
        }
        iVar2 = (**(code **)(*piVar4 + 0x1ec))(piVar4,local_20,10,local_38,0x80020004,local_30);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&DAT_0041807c,0x1ec);
        }
        __vbaFreeStr();
        __vbaFreeObj();
        pcVar5 = __vbaHresultCheckObj_exref;
      }
    }
    iVar2 = __vbaNextEachCollObj(&DAT_00414268,&local_60,&local_1c);
  }
  uVar3 = (**(code **)(*param_1 + 0x31c))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0xe8))(piVar4,&local_40);
  if (iVar2 < 0) {
    (*pcVar5)(iVar2,piVar4,&DAT_0041807c,0xe8);
  }
  local_50 = (int *)CONCAT22(local_50._2_2_,-(ushort)(0 < (short)local_40));
  __vbaFreeObj();
  if ((short)local_50 == 0) {
    uVar3 = __vbaCastObj(0,&DAT_00414268);
    uVar3 = __vbaObjSet(&local_28,uVar3);
    __vbaObjSetAddref(param_1 + 0xf,uVar3);
    __vbaFreeObj();
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x31c))(param_1);
    piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
    iVar2 = (**(code **)(*piVar4 + 0xf4))(piVar4,0);
    if (iVar2 < 0) {
      (*pcVar5)(iVar2,piVar4,&DAT_0041807c,0xf4);
    }
    __vbaFreeObj();
    iVar2 = (**(code **)(*param_1 + 0x700))(param_1);
    if (iVar2 < 0) {
      (*pcVar5)(iVar2,param_1,&DAT_004176a0,0x700);
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x30c))(param_1);
  local_50 = (int *)__vbaObjSet(&local_2c,uVar3);
  uVar3 = (**(code **)(*param_1 + 0x31c))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0xe8))(piVar4,&local_40);
  if (iVar2 < 0) {
    (*pcVar5)(iVar2,piVar4,&DAT_0041807c,0xe8);
  }
  piVar4 = local_50;
  iVar2 = (**(code **)(*local_50 + 0x94))(local_50,-(uint)(0 < (short)local_40));
  if (iVar2 < 0) {
    (*pcVar5)(iVar2,piVar4,&DAT_0041804c,0x94);
  }
  __vbaFreeObjList(2,&local_28,&local_2c);
  uVar3 = (**(code **)(*param_1 + 0x2fc))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar2 = (**(code **)(*(int *)param_1[0xe] + 0x70))((int *)param_1[0xe],&local_28);
  if (iVar2 < 0) {
    (*pcVar5)(iVar2,param_1[0xe],&LAB_004133e8,0x70);
  }
  piVar1 = local_28;
  iVar2 = (**(code **)(*local_28 + 0x24))(local_28,&local_40);
  if (iVar2 < 0) {
    (*pcVar5)(iVar2,piVar1,&LAB_004133f8,0x24);
  }
  iVar2 = (**(code **)(*piVar4 + 0x94))(piVar4,local_40);
  if (iVar2 < 0) {
    (*pcVar5)(iVar2,piVar4,&DAT_0041804c,0x94);
  }
  __vbaFreeObjList(2,&local_28,&local_2c);
  __vbaFreeObjList(2,local_5c,&local_60,&LAB_00474d5d);
  __vbaFreeObj();
  return;
}

/* ---- 0x474d80 (FUN_00474d80) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00474d80(uint param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_4c [2];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 local_38;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff6c;
  local_c = &DAT_00402e48;
  local_8 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar8 + 4))(piVar8);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_40[0] = 0;
  local_44 = 0;
  local_4c[1] = 0;
  local_4c[0] = 0;
  uVar4 = (**(code **)(*piVar8 + 0x31c))(piVar8);
  piVar5 = (int *)__vbaObjSet(&local_20,uVar4);
  iVar6 = (**(code **)(*piVar5 + 0xf0))(piVar5,&local_44);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar5,&DAT_0041807c,0xf0);
  }
  bVar1 = -1 < (short)local_44;
  __vbaFreeObj();
  if (bVar1) {
    iVar6 = (**(code **)(*(int *)piVar8[0xe] + 0x70))((int *)piVar8[0xe],&local_24);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar8[0xe],&LAB_004133e8,0x70);
    }
    piVar5 = local_24;
    iVar6 = (**(code **)(*local_24 + 0x6c))(local_24,&local_28);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&LAB_004133f8,0x6c);
    }
    piVar5 = local_28;
    uVar4 = (**(code **)(*piVar8 + 0x31c))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_20,uVar4);
    iVar6 = (**(code **)(*piVar7 + 0xa8))(piVar7,&local_1c);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar7,&DAT_0041807c,0xa8);
    }
    local_38 = local_1c;
    local_1c = 0;
    local_40[0] = 8;
    piVar7 = piVar5;
    iVar6 = (**(code **)(*piVar5 + 0x20))(piVar5,local_40,&local_2c);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&LAB_00414248,0x20);
    }
    piVar5 = piVar8 + 0xf;
    __vbaObjSetAddref(piVar5,local_2c);
    __vbaFreeObjList(4,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeVar(piVar7);
    iVar6 = (**(code **)(*(int *)*piVar5 + 0x54))((int *)*piVar5,local_4c);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,*piVar5,&DAT_00414268,0x54);
    }
    if (local_4c[0] == 1) {
      uVar4 = (**(code **)(*piVar8 + 0x318))(piVar8);
      piVar5 = (int *)__vbaObjSet(&local_2c,uVar4);
      iVar6 = (**(code **)(*piVar5 + 0x40))(piVar5,2,&local_30);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar5,&DAT_004182e4,0x40);
      }
      piVar5 = local_30;
      iVar6 = (**(code **)(*(int *)piVar8[0xd] + 0x70c))((int *)piVar8[0xd],&local_20);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar8[0xd],&DAT_00413728,0x70c);
      }
      piVar7 = local_20;
      iVar6 = (**(code **)(*local_20 + 0x44))(local_20,&local_24);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar7,&LAB_00414228,0x44);
      }
      piVar7 = local_24;
      iVar6 = (**(code **)(*(int *)piVar8[0xf] + 0x58))((int *)piVar8[0xf],local_40);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar8[0xf],&DAT_00414268,0x58);
      }
      iVar6 = (**(code **)(*piVar7 + 0x24))(piVar7,local_40,&local_28);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar7,&DAT_00414238,0x24);
      }
      piVar7 = local_28;
      iVar6 = (**(code **)(*local_28 + 0x2c))(local_28,&local_44);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar7,&LAB_004133e8,0x2c);
      }
      piVar7 = piVar5;
      iVar6 = (**(code **)(*piVar5 + 0x94))(piVar5,local_44);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar5,&DAT_00418984,0x94);
      }
      __vbaFreeObjList(5,&local_20,&local_24,&local_28,&local_2c,&local_30);
      __vbaFreeVar(piVar7);
    }
    else {
      uVar4 = (**(code **)(*piVar8 + 0x318))(piVar8);
      piVar5 = (int *)__vbaObjSet(&local_20,uVar4);
      iVar6 = (**(code **)(*piVar5 + 0x40))(piVar5,2,&local_24);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar5,&DAT_004182e4,0x40);
      }
      piVar5 = local_24;
      iVar6 = (**(code **)(*local_24 + 0x94))(local_24,0);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar5,&DAT_00418984,0x94);
      }
      __vbaFreeObjList(2,&local_20,&local_24);
    }
    uVar4 = (**(code **)(*piVar8 + 0x318))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_20,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x40))(piVar5,2,&local_24);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004182e4,0x40);
    }
    piVar5 = local_24;
    iVar6 = (**(code **)(*local_24 + 0xe0))(local_24,&local_44);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00418984,0xe0);
    }
    uVar4 = (**(code **)(*piVar8 + 0x318))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_28,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x40))(piVar5,2,&local_2c);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_004182e4,0x40);
    }
    piVar5 = local_2c;
    iVar6 = (**(code **)(*local_2c + 0x90))(local_2c,local_4c + 1);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00418984,0x90);
    }
    uVar3 = (ushort)local_4c[1];
    uVar2 = (ushort)local_44;
    __vbaFreeObjList(4,&local_20,&local_24,&local_28,&local_2c);
    if ((~uVar3 & uVar2) != 0) {
      uVar4 = (**(code **)(*piVar8 + 0x318))(piVar8);
      piVar5 = (int *)__vbaObjSet(&local_20,uVar4);
      iVar6 = (**(code **)(*piVar5 + 0x40))(piVar5,0,&local_24);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar5,&DAT_004182e4,0x40);
      }
      piVar5 = local_24;
      iVar6 = (**(code **)(*local_24 + 0xe4))(local_24,0xffffffff);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar5,&DAT_00418984,0xe4);
      }
      __vbaFreeObjList(2,&local_20,&local_24);
    }
  }
  return;
}
