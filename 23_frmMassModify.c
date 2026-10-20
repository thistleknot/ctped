/* Object #23 frmMassModify -- ESTIMATED function range; public methods per VB header: Setup */
#include "ghidra_types.h"

/* ---- 0x460560 (FUN_00460560) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00460560(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_44;
  uint local_40 [3];
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
  local_10 = &stack0xffffff84;
  local_c = &DAT_00402aa0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_40[1] = 0;
  local_40[0] = 0;
  local_44 = 0;
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
  uVar2 = (**(code **)(*piVar5 + 0x344))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar1 = (**(code **)(*piVar3 + 0xa8))(piVar3,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_0041807c,0xa8);
  }
  local_34 = local_1c;
  local_1c = 0;
  local_40[1] = 8;
  piVar3 = piVar4;
  iVar1 = (**(code **)(*piVar4 + 0x20))(piVar4,local_40 + 1,&local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&LAB_00414248,0x20);
  }
  __vbaObjSetAddref(piVar5 + 0xf,local_2c);
  __vbaFreeObjList(4,&local_20,&local_24,&local_28,&local_2c);
  __vbaFreeVar(piVar3);
  uVar2 = (**(code **)(*piVar5 + 0x340))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar1 = *piVar4;
  uVar2 = __vbaI2I4(&local_24);
  iVar1 = (**(code **)(iVar1 + 0x40))(piVar4,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_004182e4,0x40);
  }
  piVar4 = local_24;
  iVar1 = (**(code **)(*(int *)piVar5[0xf] + 0x54))((int *)piVar5[0xf],&local_44);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5[0xf],&DAT_00414268,0x54);
  }
  iVar1 = (**(code **)(*piVar4 + 0x9c))(piVar4,-(uint)(local_44 == 1));
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00418984,0x9c);
  }
  __vbaFreeObjList(2,&local_20,&local_24);
  iVar1 = (**(code **)(*(int *)piVar5[0xf] + 0x54))((int *)piVar5[0xf],&local_44);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar5[0xf],&DAT_00414268,0x54);
  }
  if (local_44 != 1) {
    uVar2 = (**(code **)(*piVar5 + 0x340))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar1 = *piVar4;
    uVar2 = __vbaI2I4(&local_2c);
    iVar1 = (**(code **)(iVar1 + 0x40))(piVar4,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_004182e4,0x40);
    }
    piVar4 = local_2c;
    uVar2 = (**(code **)(*piVar5 + 0x340))(piVar5);
    piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar1 = *piVar5;
    uVar2 = __vbaI2I4(&local_24);
    iVar1 = (**(code **)(iVar1 + 0x40))(piVar5,uVar2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar5,&DAT_004182e4,0x40);
    }
    piVar5 = local_24;
    iVar1 = (**(code **)(*local_24 + 0xe0))(local_24,local_40);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar5,&DAT_00418984,0xe0);
    }
    iVar1 = (**(code **)(*piVar4 + 0xe4))(piVar4,~local_40[0]);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00418984,0xe4);
    }
    __vbaFreeObjList(4,&local_20,&local_24,&local_28,&local_2c);
  }
  return;
}

/* ---- 0x4608d0 (FUN_004608d0) [estimated] strings:  ---- */
void __cdecl FUN_004608d0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
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
  local_c = &DAT_00402ab0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_00480244 == (int *)0x0) {
    __vbaNew2(&DAT_00413b34,&DAT_00480244);
  }
  piVar1 = DAT_00480244;
  iVar3 = *DAT_00480244;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413b24,0x10);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x4609a0 (FUN_004609a0) [anchored] strings: CTP Editor; These settings will do nothing; Name; Invalid SortingMethod ---- */
void __cdecl FUN_004609a0(uint param_1)

{
  ulonglong uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  code *pcVar12;
  uint uVar13;
  bool bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110 [7];
  undefined4 local_f4;
  uint local_f0 [9];
  undefined4 local_cc;
  wchar_t *local_c4;
  undefined4 local_bc [2];
  undefined8 local_b4;
  undefined4 local_ac [2];
  undefined4 local_a4;
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_8c [2];
  undefined4 local_84;
  undefined4 local_7c [2];
  undefined4 local_74;
  int *local_6c;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
  undefined4 local_38 [3];
  int *local_2c;
  uint local_28;
  int *local_24;
  uint local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffe5c;
  local_c = &DAT_00402ac0;
  local_8 = param_1 & 1;
  piVar11 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar11 + 4))(piVar11);
  local_1c = 0;
  local_24 = (int *)0x0;
  local_2c = (int *)0x0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_4c = 0;
  local_50 = (int *)0x0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = (int *)0x0;
  local_68 = (int *)0x0;
  local_6c = (int *)0x0;
  local_7c[0] = 0;
  local_8c[0] = 0;
  local_9c[0] = 0;
  local_ac[0] = 0;
  local_bc[0] = 0;
  local_cc = 0;
  local_f0[0] = 0;
  local_f4 = 0;
  local_110[0] = 0;
  local_114 = 0;
  local_118 = 0;
  local_11c = 0;
  local_120 = 0;
  local_124 = 0;
  uVar5 = (**(code **)(*piVar11 + 0x310))(piVar11);
  piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
  iVar7 = (**(code **)(*piVar6 + 0xe0))(piVar6,local_f0);
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417e48,0xe0);
  }
  iVar7 = piVar11[0x12];
  bVar14 = (short)local_f0[0] == 0;
  __vbaFreeObj();
  if (bVar14 && iVar7 == 2) {
    local_a4 = 0x80020004;
    local_94 = 0x80020004;
    local_ac[0] = 10;
    local_9c[0] = 10;
    local_c4 = L"CTP Editor";
    local_cc = 8;
    __vbaVarDup();
    local_b4 = (double)CONCAT44(local_b4._4_4_,L"These settings will do nothing");
    local_bc[0] = 8;
    __vbaVarDup();
    rtcMsgBox(local_7c,0,local_8c,local_9c,local_ac);
    __vbaFreeVarList(4,local_7c,local_8c,local_9c,local_ac);
  }
  else {
    if (DAT_00480244 == (int *)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    piVar6 = DAT_00480244;
    piVar8 = DAT_00480244;
    iVar7 = (**(code **)(*DAT_00480244 + 0x18))(DAT_00480244,&local_64);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar6,&DAT_00413b24,0x18);
    }
    piVar6 = local_64;
    iVar7 = *local_64;
    uVar5 = __vbaI2I4(piVar8);
    iVar7 = (**(code **)(iVar7 + 0x7c))(piVar6,uVar5);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar6,&DAT_0041490c,0x7c);
    }
    __vbaFreeObj();
    uVar5 = __vbaCastObj(0,&LAB_0041470c);
    __vbaObjSet(&local_68,uVar5);
    local_f4 = 0;
    local_f0[0] = 0xffffffff;
    uVar5 = __vbaCastObj(0,&LAB_0041470c);
    __vbaObjSet(&local_64,uVar5);
    iVar7 = (**(code **)(*(int *)piVar11[0xd] + 0x730))
                      ((int *)piVar11[0xd],&local_64,local_f0,&local_f4,&local_68);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar11[0xd],&DAT_00413728,0x730);
    }
    __vbaFreeObjList(2,&local_64,&local_68);
    iVar7 = (**(code **)(*(int *)piVar11[0x10] + 0x6c))((int *)piVar11[0x10],&local_64);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar11[0x10],&LAB_004133e8,0x6c);
    }
    piVar6 = local_64;
    local_64 = (int *)0x0;
    uVar5 = __vbaObjSet(local_110,piVar6);
    iVar7 = __vbaForEachCollObj(&LAB_0041470c,&local_114,&local_50,uVar5);
    while (iVar7 != 0) {
      uVar13 = 0xffffffff;
      local_28 = 0xffffffff;
      uVar5 = (**(code **)(*piVar11 + 0x35c))(piVar11);
      piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
      iVar7 = (**(code **)(*piVar6 + 0xe0))(piVar6,local_f0);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417e48,0xe0);
      }
      bVar14 = (short)local_f0[0] == 1;
      __vbaFreeObj();
      if (bVar14) {
        uVar19 = 0;
        uVar5 = (**(code **)(*(int *)piVar11[0xd] + 0x358))((int *)piVar11[0xd],7,0,&DAT_00417d34);
        uVar5 = __vbaObjSet(&local_64,uVar5);
        uVar5 = __vbaLateIdCallLd(local_7c,uVar5);
        uVar5 = __vbaCastObjVar(uVar5,uVar19);
        piVar6 = (int *)__vbaObjSet(&local_68,uVar5);
        iVar7 = (**(code **)(*local_50 + 0x1c))(local_50,&local_54);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,local_50,&LAB_0041470c,0x1c);
        }
        local_84 = local_54;
        local_54 = 0;
        local_8c[0] = 8;
        iVar7 = (**(code **)(*piVar6 + 0x24))(piVar6,local_8c,&local_6c);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417d34,0x24);
        }
        piVar6 = local_6c;
        iVar7 = (**(code **)(*local_6c + 0x5c))(local_6c,local_f0);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417d44,0x5c);
        }
        uVar13 = local_f0[0];
        local_28 = local_f0[0];
        __vbaFreeObjList(3,&local_64,&local_68,&local_6c);
        __vbaFreeVarList(2,local_7c,local_8c);
      }
      uVar5 = (**(code **)(*piVar11 + 0x348))(piVar11);
      piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
      iVar7 = (**(code **)(*piVar6 + 0xe0))(piVar6,local_f0);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417e48,0xe0);
      }
      bVar14 = (short)local_f0[0] == 1;
      __vbaFreeObj();
      if ((ushort)(-(ushort)bVar14 & (ushort)uVar13) != 0) {
        iVar7 = (**(code **)(*local_50 + 0x3c))(local_50,&local_64);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,local_50,&LAB_0041470c,0x3c);
        }
        piVar8 = local_64;
        piVar6 = piVar11 + 0xf;
        iVar7 = (**(code **)(*local_64 + 0x2c))(local_64,piVar6,&local_68);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,piVar8,&DAT_00414ba4,0x2c);
        }
        piVar8 = local_68;
        local_68 = (int *)0x0;
        __vbaObjSet(&local_2c,piVar8);
        __vbaFreeObj();
        sVar2 = __vbaObjIs(local_2c,0);
        if (sVar2 == 0) {
          piVar8 = local_2c;
          iVar7 = (**(code **)(*local_2c + 0x30))(local_2c,local_7c);
          if (iVar7 < 0) {
            __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
          }
          sVar2 = rtcIsObject(local_7c);
          __vbaFreeVar(piVar8);
          if (sVar2 == 0) {
            iVar7 = (**(code **)(*local_2c + 0x30))(local_2c,local_7c);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
            }
            __vbaVarMove();
          }
          else {
            piVar8 = local_2c;
            iVar7 = (**(code **)(*local_2c + 0x30))(local_2c,local_7c);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
            }
            uVar5 = __vbaVarLateMemCallLd(local_8c,local_7c,L"Name",0);
            __vbaVarSetVar(local_48,uVar5);
            __vbaFreeVar(piVar8);
          }
          iVar7 = piVar11[0x11];
          if (iVar7 == 0) {
            uVar5 = (**(code **)(*piVar11 + 0x33c))(piVar11);
            piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
            iVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_54);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417a98,0xa0);
            }
            uVar5 = (**(code **)(*piVar11 + 0x334))(piVar11);
            piVar6 = (int *)__vbaObjSet(&local_68,uVar5);
            iVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_5c);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417a98,0xa0);
            }
            __vbaStrErrVarCopy(local_48);
            uVar5 = __vbaStrMove();
            iVar7 = __vbaStrCmp(local_5c,uVar5);
            __vbaStrErrVarCopy(local_48);
            uVar5 = __vbaStrMove();
            iVar9 = __vbaStrCmp(local_54,uVar5);
            local_28 = -(uint)(-1 < iVar9 && iVar7 < 1);
            __vbaFreeStrList(4,&local_58,&local_54,&local_60,&local_5c);
            __vbaFreeObjList(2,&local_64,&local_68);
          }
          else if (iVar7 == 1) {
            uVar5 = (**(code **)(*piVar11 + 0x33c))(piVar11);
            piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
            iVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_54);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417a98,0xa0);
            }
            uVar5 = (**(code **)(*piVar11 + 0x334))(piVar11);
            piVar6 = (int *)__vbaObjSet(&local_68,uVar5);
            iVar7 = (**(code **)(*piVar6 + 0xa0))(piVar6,&local_58);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417a98,0xa0);
            }
            fVar18 = (float10)__vbaR8ErrVar(local_48);
            fVar15 = (float10)__vbaR8Str(local_54);
            fVar16 = (float10)__vbaR8ErrVar(local_48);
            fVar17 = (float10)__vbaR8Str(local_58);
            local_28 = -(uint)(fVar15 <= (float10)(double)fVar18 &&
                              (float10)(double)fVar16 <= fVar17);
            __vbaFreeStrList(2,&local_54,&local_58);
            __vbaFreeObjList(2,&local_64,&local_68);
          }
          else if (iVar7 == 2) {
            iVar7 = (**(code **)(*(int *)piVar11[0xd] + 0x70c))((int *)piVar11[0xd],&local_64);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar11[0xd],&DAT_00413728,0x70c);
            }
            piVar8 = local_64;
            iVar7 = (**(code **)(*local_64 + 0x44))(local_64,&local_68);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar8,&LAB_00414228,0x44);
            }
            piVar8 = local_68;
            iVar7 = (**(code **)(*(int *)*piVar6 + 0x58))((int *)*piVar6,local_7c);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,*piVar6,&DAT_00414268,0x58);
            }
            piVar6 = piVar8;
            iVar7 = (**(code **)(*piVar8 + 0x24))(piVar8,local_7c,&local_6c);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar8,&DAT_00414238,0x24);
            }
            piVar8 = local_6c;
            local_6c = (int *)0x0;
            __vbaObjSet(&local_24,piVar8);
            __vbaFreeObjList(2,&local_64,&local_68);
            __vbaFreeVar(piVar6);
            sVar2 = rtcIsObject(local_48);
            if (sVar2 == 0) {
              iVar7 = (**(code **)(*local_24 + 0x6c))(local_24,&local_64);
              if (iVar7 < 0) {
                __vbaHresultCheckObj(iVar7,local_24,&LAB_004133e8,0x6c);
              }
              piVar6 = local_64;
              __vbaStrErrVarCopy(local_48);
              __vbaStrMove();
              iVar7 = (**(code **)(*piVar6 + 0x28))(piVar6,&local_54,&local_68);
              if (iVar7 < 0) {
                __vbaHresultCheckObj(iVar7,piVar6,&DAT_004146fc,0x28);
              }
              piVar6 = local_68;
              local_68 = (int *)0x0;
              __vbaVarSetObj(local_48,piVar6);
              __vbaFreeStr();
              __vbaFreeObj();
            }
            iVar7 = (**(code **)(*local_24 + 0x6c))(local_24,&local_68);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,local_24,&LAB_004133e8,0x6c);
            }
            piVar6 = local_68;
            uVar5 = (**(code **)(*piVar11 + 0x338))(piVar11);
            piVar8 = (int *)__vbaObjSet(&local_64,uVar5);
            iVar7 = (**(code **)(*piVar8 + 0xa8))(piVar8,&local_54);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar8,&DAT_0041807c,0xa8);
            }
            local_54 = 0;
            __vbaStrMove();
            iVar7 = (**(code **)(*piVar6 + 0x28))(piVar6,&local_58,&local_6c);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar6,&DAT_004146fc,0x28);
            }
            piVar6 = local_6c;
            local_6c = (int *)0x0;
            __vbaObjSet(&local_1c,piVar6);
            __vbaFreeStr();
            __vbaFreeObjList(2,&local_64,&local_68);
            iVar7 = (**(code **)(*local_24 + 0x6c))(local_24,&local_68);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,local_24,&LAB_004133e8,0x6c);
            }
            piVar6 = local_68;
            uVar5 = (**(code **)(*piVar11 + 0x330))(piVar11);
            piVar8 = (int *)__vbaObjSet(&local_64,uVar5);
            iVar7 = (**(code **)(*piVar8 + 0xa8))(piVar8,&local_54);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar8,&DAT_0041807c,0xa8);
            }
            local_54 = 0;
            __vbaStrMove();
            iVar7 = (**(code **)(*piVar6 + 0x28))(piVar6,&local_58,&local_6c);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar6,&DAT_004146fc,0x28);
            }
            piVar6 = local_6c;
            local_6c = (int *)0x0;
            __vbaObjSet(&local_4c,piVar6);
            __vbaFreeStr();
            __vbaFreeObjList(2,&local_64,&local_68);
            uVar19 = 0;
            uVar5 = __vbaUnkVar(local_48);
            sVar2 = __vbaObjIs(uVar5,uVar19);
            sVar3 = __vbaObjIs(local_1c,0);
            sVar4 = __vbaObjIs(local_4c,0);
            if (sVar4 == 0 && (sVar2 == 0 && sVar3 == 0)) {
              uVar13 = 0;
              local_20 = 0;
              iVar7 = (**(code **)(*local_24 + 0x6c))(local_24,&local_64);
              if (iVar7 < 0) {
                __vbaHresultCheckObj(iVar7,local_24,&LAB_004133e8,0x6c);
              }
              piVar6 = local_64;
              local_64 = (int *)0x0;
              uVar5 = __vbaObjSet(&local_118,piVar6);
              iVar7 = __vbaForEachCollObj(&LAB_0041470c,&local_11c,local_38,uVar5);
              while (iVar7 != 0) {
                sVar2 = __vbaObjIs(local_38[0],local_1c);
                if (sVar2 != 0) {
                  local_20 = 0xffffffff;
                }
                uVar5 = __vbaUnkVar(local_48);
                sVar2 = __vbaObjIs(local_38[0],uVar5);
                if (sVar2 != 0) {
                  local_28 = ~uVar13 & local_20;
                  __vbaExitEachColl(&local_11c);
                  break;
                }
                sVar2 = __vbaObjIs(local_38[0],local_4c);
                if (sVar2 != 0) {
                  uVar13 = 0xffffffff;
                }
                iVar7 = __vbaNextEachCollObj(&LAB_0041470c,&local_11c,local_38);
              }
            }
            else {
              local_28 = 0;
            }
          }
          else {
            uVar5 = rtcErrObj();
            piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
            local_ac[0] = 10;
            local_9c[0] = 10;
            local_a4 = 0x80020004;
            local_94 = 0x80020004;
            local_c4 = L"Invalid SortingMethod";
            local_cc = 8;
            __vbaVarDup();
            local_b4 = (double)CONCAT44(local_b4._4_4_,L"CTPEditor.frmMassModify");
            local_bc[0] = 8;
            __vbaVarDup();
            iVar7 = (**(code **)(*piVar6 + 0x44))(piVar6,0x415,local_7c,local_8c,local_9c,local_ac);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar6,&DAT_00413af4,0x44);
            }
            __vbaFreeObj();
            __vbaFreeVarList(4,local_7c,local_8c,local_9c,local_ac);
          }
        }
        else {
          local_28 = 0;
        }
      }
      if ((short)local_28 != 0) {
        if (piVar11[0x12] == 0) {
          iVar7 = (**(code **)(*local_50 + 0x3c))(local_50,&local_64);
          if (iVar7 < 0) {
            __vbaHresultCheckObj(iVar7,local_50,&LAB_0041470c,0x3c);
          }
          piVar8 = local_64;
          piVar6 = piVar11 + 0xe;
          iVar7 = (**(code **)(*local_64 + 0x2c))(local_64,piVar6,&local_68);
          if (iVar7 < 0) {
            __vbaHresultCheckObj(iVar7,piVar8,&DAT_00414ba4,0x2c);
          }
          piVar8 = local_68;
          local_68 = (int *)0x0;
          __vbaObjSet(&local_2c,piVar8);
          __vbaFreeObj();
          sVar2 = __vbaObjIs(local_2c,0);
          if ((sVar2 != 0) &&
             (iVar7 = (**(code **)(*(int *)*piVar6 + 0x80))((int *)*piVar6,&local_50), iVar7 < 0)) {
            __vbaHresultCheckObj(iVar7,*piVar6,&DAT_00414268,0x80);
          }
        }
        else if (piVar11[0x12] == 1) {
          iVar7 = (**(code **)(*local_50 + 0x3c))(local_50,&local_64);
          if (iVar7 < 0) {
            __vbaHresultCheckObj(iVar7,local_50,&LAB_0041470c,0x3c);
          }
          piVar6 = local_64;
          iVar7 = (**(code **)(*local_64 + 0x40))(local_64,piVar11 + 0xe);
          if (iVar7 < 0) {
            __vbaHresultCheckObj(iVar7,piVar6,&DAT_00414ba4,0x40);
          }
          __vbaFreeObj();
        }
        uVar5 = (**(code **)(*piVar11 + 0x310))(piVar11);
        piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
        iVar7 = (**(code **)(*piVar6 + 0xe0))(piVar6,local_f0);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417e48,0xe0);
        }
        bVar14 = (short)local_f0[0] == 1;
        __vbaFreeObj();
        if (bVar14) {
          uVar5 = (**(code **)(*piVar11 + 0x314))(piVar11);
          piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
          iVar7 = (**(code **)(*piVar6 + 0x98))(piVar6,local_f0);
          if (iVar7 < 0) {
            __vbaHresultCheckObj(iVar7,piVar6,&DAT_0041807c,0x98);
          }
          sVar2 = (short)local_f0[0];
          __vbaFreeObj();
          if (sVar2 == 0) {
            local_74 = (**(code **)(*piVar11 + 0x318))(piVar11);
            local_7c[0] = 9;
            __vbaVarMove();
            pcVar12 = __vbaVarMove_exref;
          }
          else {
            uVar5 = (**(code **)(*piVar11 + 0x314))(piVar11);
            piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
            iVar7 = (**(code **)(*piVar6 + 0xa8))(piVar6,&local_54);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,piVar6,&DAT_0041807c,0xa8);
            }
            local_74 = local_54;
            pcVar12 = __vbaVarMove_exref;
            local_54 = 0;
            local_7c[0] = 8;
            __vbaVarMove();
            __vbaFreeObj();
          }
          if ((piVar11[0x13] == 2) || (piVar11[0x13] == 3)) {
            sVar2 = rtcIsNumeric(local_48);
            if (sVar2 == 0) {
              uVar1 = (ulonglong)local_b4 >> 0x20;
              local_b4 = (double)((ulonglong)local_b4 & 0xffffffff00000000);
              if (piVar11[0x13] != 2) {
                local_b4 = (double)CONCAT44((int)uVar1,1);
              }
              local_bc[0] = 2;
            }
            else {
              fVar18 = (float10)__vbaR8ErrVar(local_48);
              local_b4 = (double)fVar18;
              local_bc[0] = 5;
            }
            (*pcVar12)();
          }
          iVar7 = (**(code **)(*local_50 + 0x3c))(local_50,&local_64);
          if (iVar7 < 0) {
            __vbaHresultCheckObj(iVar7,local_50,&LAB_0041470c,0x3c);
          }
          piVar6 = local_64;
          local_64 = (int *)0x0;
          uVar5 = __vbaObjSet(&local_120,piVar6);
          iVar7 = __vbaForEachCollObj(&DAT_00414bb4,&local_124,&local_2c,uVar5);
          while (iVar7 != 0) {
            iVar7 = (**(code **)(*local_2c + 0x28))(local_2c,&local_64);
            if (iVar7 < 0) {
              __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x28);
            }
            sVar2 = __vbaObjIs(local_64,piVar11[0xe]);
            __vbaFreeObj();
            if (sVar2 != 0) {
              switch(piVar11[0x13]) {
              case 0:
                iVar7 = (**(code **)(*local_2c + 0x34))(local_2c,local_48);
                if (iVar7 < 0) {
                  __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x34);
                }
                break;
              case 1:
                iVar7 = (**(code **)(*local_2c + 0x2c))(local_2c,&local_54);
                if (iVar7 < 0) {
                  __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x2c);
                }
                local_74 = local_54;
                local_54 = 0;
                local_7c[0] = 8;
                iVar7 = *local_2c;
                uVar5 = __vbaVarCat(local_8c,local_48,local_7c);
                iVar7 = (**(code **)(iVar7 + 0x34))(local_2c,uVar5);
                if (iVar7 < 0) {
                  __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x34);
                }
                __vbaFreeVarList(2,local_7c,local_8c);
                break;
              case 2:
                puVar10 = local_7c;
                iVar7 = (**(code **)(*local_2c + 0x30))(local_2c,puVar10);
                if (iVar7 < 0) {
                  __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
                }
                sVar2 = rtcIsNumeric(local_7c);
                __vbaFreeVar(puVar10);
                if (sVar2 != 0) {
                  uVar5 = (**(code **)(*piVar11 + 0x30c))(piVar11);
                  piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
                  iVar7 = (**(code **)(*piVar6 + 0xe0))(piVar6,local_f0);
                  if (iVar7 < 0) {
                    __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417e48,0xe0);
                  }
                  bVar14 = (short)local_f0[0] == 1;
                  __vbaFreeObj();
                  if (bVar14) {
                    iVar7 = (**(code **)(*local_2c + 0x30))();
                    if (iVar7 < 0) {
                      __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
                    }
                    fVar18 = (float10)__vbaR8ErrVar(local_7c);
                    local_b4 = (double)fVar18;
                    uVar19 = 0;
                    local_bc[0] = 5;
                    uVar5 = __vbaVarAdd(local_8c,local_48,local_bc);
                    rtcRound(local_9c,uVar5,uVar19);
                    iVar7 = (**(code **)(*local_2c + 0x34))(local_2c,local_9c);
                    if (iVar7 < 0) {
                      __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x34);
                    }
                    puVar21 = local_9c;
                    puVar20 = local_8c;
                    puVar10 = local_7c;
                    goto LAB_00461f0b;
                  }
                  iVar7 = (**(code **)(*local_2c + 0x30))(local_2c,local_7c);
                  if (iVar7 < 0) {
                    __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
                  }
                  fVar18 = (float10)__vbaR8ErrVar(local_7c);
                  local_bc[0] = 5;
                  local_b4 = (double)fVar18;
                  iVar7 = *local_2c;
                  uVar5 = __vbaVarAdd(local_8c,local_48,local_bc);
                  iVar7 = (**(code **)(iVar7 + 0x34))(local_2c,uVar5);
                  if (iVar7 < 0) {
                    __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x34);
                  }
                  __vbaFreeVarList(3,local_7c,local_7c,local_8c);
                }
                break;
              case 3:
                puVar10 = local_7c;
                iVar7 = (**(code **)(*local_2c + 0x30))(local_2c,puVar10);
                if (iVar7 < 0) {
                  __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
                }
                sVar2 = rtcIsNumeric(local_7c);
                __vbaFreeVar(puVar10);
                if (sVar2 != 0) {
                  uVar5 = (**(code **)(*piVar11 + 0x30c))(piVar11);
                  piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
                  iVar7 = (**(code **)(*piVar6 + 0xe0))(piVar6,local_f0);
                  if (iVar7 < 0) {
                    __vbaHresultCheckObj(iVar7,piVar6,&DAT_00417e48,0xe0);
                  }
                  bVar14 = (short)local_f0[0] == 1;
                  __vbaFreeObj();
                  if (bVar14) {
                    iVar7 = (**(code **)(*local_2c + 0x30))(local_2c,local_7c);
                    if (iVar7 < 0) {
                      __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
                    }
                    __vbaVarMul(local_8c,local_48,local_7c);
                    __vbaVarMove();
                    rtcRound(local_ac,local_9c,0);
                    iVar7 = (**(code **)(*local_2c + 0x34))(local_2c,local_ac);
                    if (iVar7 < 0) {
                      __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x34);
                    }
                    __vbaFreeVarList(3,local_7c,local_9c,local_ac);
                  }
                  else {
                    iVar7 = (**(code **)(*local_2c + 0x30))(local_2c,local_7c);
                    if (iVar7 < 0) {
                      __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x30);
                    }
                    __vbaVarMul(local_8c,local_48,local_7c);
                    __vbaVarMove();
                    iVar7 = (**(code **)(*local_2c + 0x34))(local_2c,local_9c);
                    if (iVar7 < 0) {
                      __vbaHresultCheckObj(iVar7,local_2c,&DAT_00414bb4,0x34);
                    }
                    __vbaFreeVarList(2,local_7c,local_9c);
                  }
                }
                break;
              default:
                uVar5 = rtcErrObj();
                piVar6 = (int *)__vbaObjSet(&local_64,uVar5);
                local_ac[0] = 10;
                local_9c[0] = 10;
                local_a4 = 0x80020004;
                local_94 = 0x80020004;
                local_c4 = L"Invalid Modification";
                local_cc = 8;
                __vbaVarDup();
                local_b4 = (double)CONCAT44(local_b4._4_4_,L"CTPEditor.frmMassModify");
                local_bc[0] = 8;
                __vbaVarDup();
                iVar7 = (**(code **)(*piVar6 + 0x44))
                                  (piVar6,0x416,local_7c,local_8c,local_9c,local_ac);
                if (iVar7 < 0) {
                  __vbaHresultCheckObj(iVar7,piVar6,&DAT_00413af4,0x44);
                }
                __vbaFreeObj();
                puVar21 = local_ac;
                puVar20 = local_9c;
                puVar10 = local_8c;
LAB_00461f0b:
                __vbaFreeVarList(4,local_7c,puVar10,puVar20,puVar21);
              }
            }
            iVar7 = __vbaNextEachCollObj(&DAT_00414bb4,&local_124,&local_2c);
          }
        }
      }
      iVar7 = __vbaNextEachCollObj(&LAB_0041470c,&local_114,&local_50);
    }
    local_f0[0] = 0;
    iVar7 = (**(code **)(*(int *)piVar11[0xd] + 0x72c))((int *)piVar11[0xd],local_f0);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar11[0xd],&DAT_00413728,0x72c);
    }
    if (DAT_00480244 == (int *)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    piVar6 = DAT_00480244;
    piVar11 = DAT_00480244;
    iVar7 = (**(code **)(*DAT_00480244 + 0x18))(DAT_00480244,&local_64);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar6,&DAT_00413b24,0x18);
    }
    piVar6 = local_64;
    iVar7 = *local_64;
    uVar5 = __vbaI2I4(piVar11);
    iVar7 = (**(code **)(iVar7 + 0x7c))(piVar6,uVar5);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar6,&DAT_0041490c,0x7c);
    }
    __vbaFreeObj();
  }
  local_8 = 0;
  puVar22 = &LAB_004620af;
  __vbaFreeObjList(6,local_110,&local_114,&local_118,&local_11c,&local_120,&local_124,&LAB_004620af)
  ;
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeVar(puVar22);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x4620e0 (FUN_004620e0) [estimated] strings:  ---- */
void __cdecl FUN_004620e0(uint param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_7c;
  undefined4 local_78;
  int *local_74 [8];
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined4 local_30;
  int *local_2c;
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
  local_10 = &stack0xffffff64;
  local_c = &DAT_00402ad0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  sVar1 = *param_2;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_40[0] = 0;
  local_54[1] = 0;
  local_54[0] = 0;
  local_74[0] = (int *)0x0;
  local_78 = 0;
  local_7c = 0;
  piVar5[0x13] = (int)sVar1;
  if (sVar1 == 0) {
    iVar2 = (**(code **)(*(int *)piVar5[0xe] + 0x54))((int *)piVar5[0xe],local_54);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5[0xe],&DAT_00414268,0x54);
    }
    if (local_54[0] == 1) {
      uVar3 = (**(code **)(*piVar5 + 0x314))(piVar5);
      __vbaObjSet(local_74,uVar3);
      iVar2 = (**(code **)(*local_74[0] + 0x9c))(local_74[0],0xffffffff);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_74[0],&DAT_0041807c,0x9c);
      }
      iVar2 = (**(code **)(*local_74[0] + 0x1e8))(local_74[0]);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_74[0],&DAT_0041807c,0x1e8);
      }
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      piVar4 = DAT_0047f074;
      iVar2 = (**(code **)(*DAT_0047f074 + 0x6f8))(DAT_0047f074,&local_28);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413d78,0x6f8);
      }
      piVar4 = local_28;
      iVar2 = (**(code **)(*local_28 + 0x44))(local_28,&local_2c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&LAB_00414228,0x44);
      }
      piVar4 = local_2c;
      iVar2 = (**(code **)(*(int *)piVar5[0xe] + 0x58))((int *)piVar5[0xe],local_40);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5[0xe],&DAT_00414268,0x58);
      }
      piVar6 = piVar4;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,local_40,&local_30);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414238,0x24);
      }
      uVar3 = local_30;
      local_30 = 0;
      __vbaObjSet(&local_1c,uVar3);
      __vbaFreeObjList(2,&local_28,&local_2c);
      __vbaFreeVar(piVar6);
      iVar2 = (**(code **)(*local_1c + 0x6c))(local_1c,&local_28);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x6c);
      }
      piVar4 = local_28;
      local_28 = (int *)0x0;
      uVar3 = __vbaObjSet(&local_78,piVar4);
      iVar2 = __vbaForEachCollObj(&LAB_0041470c,&local_7c,&local_20,uVar3);
      while (iVar2 != 0) {
        iVar2 = (**(code **)(*local_20 + 0x24))(local_20,&local_24);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_20,&LAB_0041470c,0x24);
        }
        iVar2 = (**(code **)(*local_74[0] + 0x1ec))
                          (local_74[0],local_24,10,local_54[2],0x80020004,local_44);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_74[0],&DAT_0041807c,0x1ec);
        }
        __vbaFreeStr();
        iVar2 = __vbaNextEachCollObj(&LAB_0041470c,&local_7c,&local_20);
      }
      __vbaObjSetAddref(local_74,0);
      uVar3 = (**(code **)(*piVar5 + 0x318))(piVar5);
      piVar5 = (int *)__vbaObjSet(&local_28,uVar3);
      iVar2 = (**(code **)(*piVar5 + 0x94))(piVar5,0);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00417a98,0x94);
      }
      __vbaFreeObj();
      goto LAB_00462483;
    }
  }
  uVar3 = (**(code **)(*piVar5 + 0x318))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x94))(piVar4,0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417a98,0x94);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*piVar5 + 0x314))(piVar5);
  piVar5 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = (**(code **)(*piVar5 + 0x9c))(piVar5,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_0041807c,0x9c);
  }
  __vbaFreeObj();
LAB_00462483:
  local_8 = 0;
  __vbaFreeObjList(3,local_74,&local_78,&local_7c,&LAB_004624df);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x462500 (FUN_00462500) [estimated] strings:  ---- */
void __cdecl FUN_00462500(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_84;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int *local_74;
  int *local_70 [4];
  int *local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined4 local_30;
  int *local_2c;
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
  local_10 = &stack0xffffff5c;
  local_c = &DAT_00402ae0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_54 = 0;
  local_70[0] = (int *)0x0;
  local_74 = (int *)0x0;
  local_78 = 0;
  local_7c = 0;
  local_80 = (int *)0x0;
  local_84 = (int *)0x0;
  piVar5[0x11] = (int)*param_2;
  if (*param_2 == 2) {
    uVar1 = (**(code **)(*piVar5 + 0x330))(piVar5);
    pcVar4 = __vbaObjSet_exref;
    piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x9c))(piVar2,0xffffffff);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_0041807c,0x9c);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar5 + 0x33c))(piVar5);
    piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x94))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x94);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar5 + 0x334))(piVar5);
    piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x94))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x94);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar5 + 0x338))(piVar5);
    __vbaObjSet(local_70,uVar1);
    iVar3 = (**(code **)(*local_70[0] + 0x9c))(local_70[0],0xffffffff);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_70[0],&DAT_0041807c,0x9c);
    }
    iVar3 = (**(code **)(*local_70[0] + 0x1e8))(local_70[0]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_70[0],&DAT_0041807c,0x1e8);
    }
    __vbaObjSetAddref(local_70,0);
    uVar1 = (**(code **)(*piVar5 + 0x330))(piVar5);
    __vbaObjSet(&local_74,uVar1);
    iVar3 = (**(code **)(*local_74 + 0x9c))(local_74,0xffffffff);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_74,&DAT_0041807c,0x9c);
    }
    iVar3 = (**(code **)(*local_74 + 0x1e8))(local_74);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_74,&DAT_0041807c,0x1e8);
    }
    __vbaObjSetAddref(&local_74,0);
    iVar3 = (**(code **)(*(int *)piVar5[0xd] + 0x70c))((int *)piVar5[0xd],&local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5[0xd],&DAT_00413728,0x70c);
    }
    local_60 = local_28;
    iVar3 = (**(code **)(*local_28 + 0x44))(local_28,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_60,&LAB_00414228,0x44);
    }
    piVar2 = local_2c;
    iVar3 = (**(code **)(*(int *)piVar5[0xf] + 0x58))((int *)piVar5[0xf],local_40);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5[0xf],&DAT_00414268,0x58);
    }
    piVar6 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,local_40,&local_30);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00414238,0x24);
    }
    uVar1 = local_30;
    local_30 = 0;
    __vbaObjSet(&local_1c,uVar1);
    __vbaFreeObjList(2,&local_28,&local_2c);
    __vbaFreeVar(piVar6);
    iVar3 = (**(code **)(*local_1c + 0x6c))(local_1c,&local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x6c);
    }
    piVar2 = local_28;
    local_28 = (int *)0x0;
    uVar1 = __vbaObjSet(&local_78,piVar2);
    iVar3 = __vbaForEachCollObj(&LAB_0041470c,&local_7c,&local_20,uVar1);
    while (iVar3 != 0) {
      uVar1 = (**(code **)(*piVar5 + 0x338))(piVar5);
      piVar2 = (int *)(*pcVar4)(&local_28,uVar1);
      iVar3 = (**(code **)(*local_20 + 0x24))(local_20,&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_20,&LAB_0041470c,0x24);
      }
      iVar3 = (**(code **)(*piVar2 + 0x1ec))(piVar2,local_24,10,local_4c,0x80020004,local_44);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_0041807c,0x1ec);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      uVar1 = (**(code **)(*piVar5 + 0x330))(piVar5);
      piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
      iVar3 = (**(code **)(*local_20 + 0x24))(local_20,&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_20,&LAB_0041470c,0x24);
      }
      iVar3 = (**(code **)(*piVar2 + 0x1ec))(piVar2,local_24,10,local_4c,0x80020004,local_44);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_0041807c,0x1ec);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      iVar3 = __vbaNextEachCollObj(&LAB_0041470c,&local_7c,&local_20);
      pcVar4 = __vbaObjSet_exref;
    }
    uVar1 = (**(code **)(*piVar5 + 0x338))(piVar5);
    (*pcVar4)(&local_80,uVar1);
    iVar3 = (**(code **)(*local_80 + 0xe8))(local_80,&local_54);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_80,&DAT_0041807c,0xe8);
    }
    if ((0 < (short)local_54) && (iVar3 = (**(code **)(*local_80 + 0xf4))(local_80,1), iVar3 < 0)) {
      __vbaHresultCheckObj(iVar3,local_80,&DAT_0041807c,0xf4);
    }
    __vbaObjSetAddref(&local_80,0);
    uVar1 = (**(code **)(*piVar5 + 0x330))(piVar5);
    (*pcVar4)(&local_84,uVar1);
    iVar3 = (**(code **)(*local_84 + 0xe8))(local_84,&local_54);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_84,&DAT_0041807c,0xe8);
    }
    if ((0 < (short)local_54) && (iVar3 = (**(code **)(*local_84 + 0xf4))(local_84,1), iVar3 < 0)) {
      __vbaHresultCheckObj(iVar3,local_84,&DAT_0041807c,0xf4);
    }
    __vbaObjSetAddref(&local_84,0);
  }
  else {
    uVar1 = (**(code **)(*piVar5 + 0x338))(piVar5);
    piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x9c))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_0041807c,0x9c);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar5 + 0x330))(piVar5);
    piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x9c))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_0041807c,0x9c);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar5 + 0x33c))(piVar5);
    piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x94))(piVar2,0xffffffff);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x94);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar5 + 0x334))(piVar5);
    piVar5 = (int *)__vbaObjSet(&local_28,uVar1);
    iVar3 = (**(code **)(*piVar5 + 0x94))(piVar5,0xffffffff);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_00417a98,0x94);
    }
    __vbaFreeObj();
  }
  local_8 = 0;
  __vbaFreeObjList(6,local_70,&local_74,&local_78,&local_7c,&local_80,&local_84,&LAB_00462bc3);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x462bf0 (FUN_00462bf0) [estimated] strings:  ---- */
void __cdecl FUN_00462bf0(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *local_28 [2];
  int local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00402af0;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  local_20 = 0;
  local_28[0] = (int *)0x0;
  piVar3[0x12] = (int)*param_2;
  uVar1 = (**(code **)(*piVar3 + 0x310))(piVar3);
  __vbaObjSet(local_28,uVar1);
  iVar2 = (**(code **)(*(int *)piVar3[0xe] + 0x44))((int *)piVar3[0xe],&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3[0xe],&DAT_00414268,0x44);
  }
  if (((short)local_1c == 0) || (piVar3[0x12] == 1)) {
    iVar2 = (**(code **)(*local_28[0] + 0xe4))(local_28[0],0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_28[0],&DAT_00417e48,0xe4);
    }
    iVar2 = (**(code **)(*local_28[0] + 0x94))(local_28[0],0);
  }
  else {
    iVar2 = (**(code **)(*(int *)piVar3[0xe] + 0x54))((int *)piVar3[0xe],&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3[0xe],&DAT_00414268,0x54);
    }
    iVar2 = *local_28[0];
    if (local_20 == 2) {
      iVar2 = (**(code **)(iVar2 + 0xe4))(local_28[0],0);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_28[0],&DAT_00417e48,0xe4);
      }
      uVar1 = 0;
      iVar2 = *local_28[0];
    }
    else {
      uVar1 = 0xffffffff;
    }
    iVar2 = (**(code **)(iVar2 + 0x94))(local_28[0],uVar1);
  }
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_28[0],&DAT_00417e48,0x94);
  }
  __vbaObjSetAddref(local_28,0);
  local_8 = 0;
  __vbaFreeObj(&LAB_00462d5e);
  return;
}

/* ---- 0x462d80 (FUN_00462d80) [estimated] strings: GL field of some entry doesn\'t point to an object; You cannot make major changes to the great library since ; is not editable.  Some changes may not take effec ---- */
void __cdecl
FUN_00462d80(int ****param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,ushort *param_6)

{
  int **ppiVar1;
  int *****pppppiVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  int ******ppppppiVar8;
  int ******ppppppiVar9;
  int *****pppppiVar10;
  uint *puVar11;
  undefined4 uVar12;
  int *piVar13;
  code *pcVar14;
  int ****ppppiVar15;
  code *pcVar16;
  undefined1 *puVar17;
  code *pcStack_288;
  int ****ppppiStack_284;
  code *pcStack_280;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 auStack_258 [6];
  undefined4 uStack_240;
  undefined4 auStack_23c [4];
  undefined4 uStack_22c;
  int *****pppppiStack_204;
  int *****in_stack_fffffe04;
  undefined4 *puVar18;
  int ******ppppppiStack_1e8;
  int ******ppppppiStack_1e4;
  int *****pppppiStack_1e0;
  int *****pppppiStack_1dc;
  int *****pppppiStack_1d8;
  uint *puStack_1d4;
  int *****pppppiStack_1d0;
  int *****pppppiStack_1cc;
  int ******ppppppiStack_1b8;
  int *****pppppiStack_1b4;
  int ******ppppppiStack_1b0;
  int ******ppppppiStack_1ac;
  int ******ppppppiStack_1a8;
  int ******ppppppiStack_1a4;
  int *****pppppiStack_1a0;
  int ******ppppppiStack_19c;
  int ******ppppppiStack_198;
  int *****pppppiStack_194;
  int ******ppppppiStack_190;
  int ****ppppiStack_18c;
  int *****pppppiStack_188;
  int ******ppppppiStack_184;
  int ******ppppppiStack_180;
  int *****pppppiStack_17c;
  int *****pppppiStack_178;
  int *****pppppiStack_174;
  int ****ppppiStack_170;
  int *piStack_16c;
  int ******ppppppiStack_168;
  int *****pppppiStack_164;
  undefined *puStack_160;
  int *****pppppiStack_15c;
  int *****pppppiStack_158;
  int ******ppppppiStack_154;
  int *****pppppiStack_150;
  int *****pppppiStack_14c;
  int *piStack_148;
  int ******ppppppiStack_144;
  int ****local_fc;
  int ****local_f8 [7];
  int local_dc;
  int local_d8;
  uint local_d4 [9];
  undefined4 local_b0;
  wchar_t *local_a8;
  int ****local_a0;
  int *****local_9c;
  int *****local_98;
  int *****local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  int ****local_70 [2];
  int ****local_68;
  int ****local_60 [2];
  undefined4 local_58;
  int *****local_50;
  int *****local_4c;
  int *****local_48;
  undefined4 local_44;
  int ****local_40;
  int ****local_3c;
  int ****local_38;
  int *****local_34;
  int *****local_30;
  undefined4 local_2c;
  int ****local_28;
  uint local_24;
  int *****local_20;
  int *****local_1c [2];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffec0;
  local_8 = &DAT_00402b00;
  ppppppiStack_144 = &local_48;
  local_1c[0] = (int *****)0x0;
  piVar13 = (int *)*param_2;
  local_20 = (int *****)0x0;
  local_24 = 0;
  local_28 = (int ****)0x0;
  local_30 = (int *****)0x0;
  local_34 = (int *****)0x0;
  local_38 = (int ****)0x0;
  local_3c = (int ****)0x0;
  local_40 = (int ****)0x0;
  local_44 = 0;
  local_48 = (int *****)0x0;
  local_4c = (int *****)0x0;
  local_50 = (int *****)0x0;
  local_60[0] = (int ****)0x0;
  local_70[0] = (int ****)0x0;
  local_80 = 0;
  local_90 = 0;
  local_a0 = (int ****)0x0;
  local_b0 = 0;
  local_d4[0] = 0;
  local_d8 = 0;
  local_dc = 0;
  local_f8[0] = (int ****)0x0;
  local_fc = (int ****)0x0;
  pppppiStack_14c = (int *****)0x462e1d;
  ExceptionList = &pvStack_14;
  piStack_148 = piVar13;
  iVar6 = (**(code **)(*piVar13 + 0x70))();
  pcVar16 = __vbaHresultCheckObj_exref;
  if (iVar6 < 0) {
    pppppiStack_14c = (int *****)0x70;
    pppppiStack_150 = (int *****)&LAB_004133e8;
    pppppiStack_15c = (int *****)0x462e34;
    pppppiStack_158 = (int *****)iVar6;
    ppppppiStack_154 = (int ******)piVar13;
    __vbaHresultCheckObj();
  }
  pppppiVar10 = local_48;
  pppppiStack_14c = (int *****)&local_4c;
  pppppiStack_150 = local_48;
  ppppppiStack_154 = (int ******)0x462e4b;
  puVar7 = (undefined *)(*(code *)(*local_48)[0x1c])();
  if ((int)puVar7 < 0) {
    ppppppiStack_154 = (int ******)0x70;
    pppppiStack_158 = (int *****)&LAB_004133f8;
    pppppiStack_15c = pppppiVar10;
    pppppiStack_164 = (int *****)0x462e5c;
    puStack_160 = puVar7;
    __vbaHresultCheckObj();
  }
  ppppppiStack_154 = (int ******)local_4c;
  local_4c = (int *****)0x0;
  pppppiStack_158 = &local_28;
  pppppiStack_15c = (int *****)0x462e6d;
  __vbaObjSet();
  ppppppiStack_154 = (int ******)0x462e76;
  __vbaFreeObj();
  if (DAT_00480244 == (int ******)0x0) {
    ppppppiStack_154 = (int ******)&DAT_00480244;
    pppppiStack_158 = (int *****)&DAT_00413b34;
    pppppiStack_15c = (int *****)0x462e8e;
    __vbaNew2();
  }
  ppppppiVar9 = DAT_00480244;
  ppppppiStack_154 = &local_48;
  pppppiStack_158 = (int *****)DAT_00480244;
  pppppiStack_15c = (int *****)0x462e9e;
  ppppppiVar8 = (int ******)(*(code *)(*DAT_00480244)[6])();
  if ((int)ppppppiVar8 < 0) {
    pppppiStack_15c = (int *****)0x18;
    puStack_160 = &DAT_00413b24;
    pppppiStack_164 = (int *****)ppppppiVar9;
    piStack_16c = (int *)0x462eaf;
    ppppppiStack_168 = ppppppiVar8;
    __vbaHresultCheckObj();
  }
  pppppiVar2 = local_48;
  pppppiVar10 = (int *****)*local_48;
  pppppiStack_15c = (int *****)0x462ebf;
  pppppiStack_158 = (int *****)__vbaI2I4();
  pppppiStack_15c = pppppiVar2;
  puStack_160 = (undefined *)0x462ec4;
  iVar6 = (*(code *)pppppiVar10[0x1f])();
  if (iVar6 < 0) {
    puStack_160 = (undefined *)0x7c;
    pppppiStack_164 = (int *****)&DAT_0041490c;
    ppppppiStack_168 = (int ******)pppppiVar2;
    ppppiStack_170 = (int ****)0x462ed5;
    piStack_16c = (int *)iVar6;
    __vbaHresultCheckObj();
  }
  puStack_160 = (undefined *)0x462ede;
  __vbaFreeObj();
  puStack_160 = (undefined *)0x0;
  pppppiStack_164 = (int *****)param_1;
  ppppppiStack_168 = (int ******)0x462eec;
  iVar6 = (*(code *)(*param_1)[0x25])();
  if (iVar6 < 0) {
    ppppppiStack_168 = (int ******)0x94;
    piStack_16c = (int *)&DAT_0041708c;
    ppppiStack_170 = param_1;
    pppppiStack_178 = (int *****)0x462f00;
    pppppiStack_174 = (int *****)iVar6;
    __vbaHresultCheckObj();
  }
  ppppppiStack_168 = &local_48;
  piVar13 = (int *)*param_2;
  ppppiStack_170 = (int ****)0x462f0f;
  piStack_16c = piVar13;
  iVar6 = (**(code **)(*piVar13 + 0x6c))();
  if (iVar6 < 0) {
    ppppiStack_170 = (int ****)0x6c;
    pppppiStack_174 = (int *****)&LAB_004133e8;
    ppppppiStack_180 = (int ******)0x462f20;
    pppppiStack_17c = (int *****)iVar6;
    pppppiStack_178 = (int *****)piVar13;
    __vbaHresultCheckObj();
  }
  pppppiVar10 = local_48;
  ppppiStack_170 = (int ****)&local_d8;
  pppppiStack_174 = local_48;
  pppppiStack_178 = (int *****)0x462f32;
  ppppppiStack_184 = (int ******)(*(code *)(*local_48)[0xd])();
  if ((int)ppppppiStack_184 < 0) {
    pppppiStack_178 = (int *****)0x34;
    pppppiStack_17c = (int *****)&DAT_004146fc;
    ppppppiStack_180 = (int ******)pppppiVar10;
    pppppiStack_188 = (int *****)0x462f43;
    __vbaHresultCheckObj();
  }
  pppppiStack_17c = (int *****)(float)local_d8;
  pppppiStack_188 = (int *****)0x1;
  ppppppiStack_184 = (int ******)0x4;
  local_a0 = (int ****)0x4;
  ppppiStack_18c = param_1;
  ppppppiStack_180 = (int ******)local_9c;
  pppppiStack_178 = local_94;
  ppppppiStack_190 = (int ******)0x462f8a;
  local_98 = pppppiStack_17c;
  ppppppiStack_190 = (int ******)(*(code *)(*param_1)[0xe2])();
  pppppiStack_194 = (int *****)&local_4c;
  ppppppiStack_198 = (int ******)0x462f95;
  ppppppiStack_190 = (int ******)__vbaObjSet();
  pcVar14 = __vbaLateIdSt_exref;
  pppppiStack_194 = (int *****)0x462f9e;
  __vbaLateIdSt();
  pppppiStack_17c = (int *****)&local_4c;
  ppppppiStack_180 = &local_48;
  ppppppiStack_184 = (int ******)0x2;
  pppppiStack_188 = (int *****)0x462fae;
  __vbaFreeObjList();
  local_a0 = (int ****)0x4;
  local_98 = (int *****)0x0;
  ppppiStack_18c = (int ****)0x5;
  ppppppiStack_190 = (int ******)param_1;
  pppppiStack_188 = (int *****)0x4;
  ppppppiStack_184 = (int ******)local_9c;
  ppppppiStack_180 = (int ******)0x0;
  pppppiStack_17c = local_94;
  pppppiStack_194 = (int *****)0x462fe6;
  pppppiStack_194 = (int *****)(*(code *)(*param_1)[0xe2])();
  ppppppiStack_198 = &local_48;
  ppppppiStack_19c = (int ******)0x462ff1;
  pppppiStack_194 = (int *****)__vbaObjSet();
  ppppppiStack_198 = (int ******)0x462ff4;
  __vbaLateIdSt();
  ppppppiStack_180 = (int ******)0x462ffd;
  __vbaFreeObj();
  local_a0 = (int ****)0xb;
  ppppppiStack_190 = (int ******)0x80010007;
  ppppiStack_18c = (int ****)0xb;
  local_98 = (int *****)0xffffffff;
  pppppiStack_194 = (int *****)param_1;
  pppppiStack_188 = local_9c;
  ppppppiStack_184 = (int ******)0xffffffff;
  ppppppiStack_180 = (int ******)local_94;
  ppppppiStack_198 = (int ******)0x46303b;
  ppppppiStack_198 = (int ******)(*(code *)(*param_1)[0xe2])();
  ppppppiStack_19c = &local_48;
  pppppiStack_1a0 = (int *****)0x463046;
  ppppppiStack_198 = (int ******)__vbaObjSet();
  ppppppiStack_19c = (int ******)0x463049;
  __vbaLateIdSt();
  ppppppiStack_184 = (int ******)0x463052;
  __vbaFreeObj();
  piVar13 = (int *)*param_2;
  ppppppiStack_184 = &local_48;
  ppppiStack_18c = (int ****)0x463061;
  pppppiStack_188 = (int *****)piVar13;
  puVar7 = (undefined *)(**(code **)(*piVar13 + 0x6c))();
  if ((int)puVar7 < 0) {
    ppppiStack_18c = (int ****)0x6c;
    ppppppiStack_190 = (int ******)&LAB_004133e8;
    ppppppiStack_19c = (int ******)0x463072;
    ppppppiStack_198 = (int ******)puVar7;
    pppppiStack_194 = (int *****)piVar13;
    __vbaHresultCheckObj();
  }
  pppppiVar10 = local_48;
  ppppiStack_18c = (int ****)&local_d8;
  ppppppiStack_190 = (int ******)local_48;
  pppppiStack_194 = (int *****)0x463084;
  ppppppiVar9 = (int ******)(*(code *)(*local_48)[0xd])();
  if ((int)ppppppiVar9 < 0) {
    pppppiStack_194 = (int *****)0x34;
    ppppppiStack_198 = (int ******)&DAT_004146fc;
    ppppppiStack_19c = (int ******)pppppiVar10;
    ppppppiStack_1a4 = (int ******)0x463095;
    pppppiStack_1a0 = (int *****)ppppppiVar9;
    __vbaHresultCheckObj();
  }
  pppppiStack_194 = (int *****)0x4630a1;
  sVar4 = __vbaI2I4();
  local_24 = 1;
  ppppppiStack_190 = (int ******)0x4630b7;
  __vbaFreeObj();
  uVar3 = local_24;
  do {
    local_24 = uVar3;
    if (sVar4 < (short)local_24) {
      local_a0 = (int ****)0xb;
      pppppiStack_1a0 = (int *****)0x80010007;
      ppppppiStack_19c = (int ******)0xb;
      local_98 = (int *****)0x0;
      ppppppiStack_198 = (int ******)local_9c;
      pppppiStack_194 = (int *****)0x0;
      ppppppiStack_190 = (int ******)local_94;
      ppppppiStack_1a4 = (int ******)param_1;
      ppppppiStack_1a8 = (int ******)0x463a39;
      ppppppiStack_1a8 = (int ******)(*(code *)(*param_1)[0xe2])();
      ppppppiStack_1ac = &local_48;
      ppppppiStack_1b0 = (int ******)0x463a44;
      ppppppiStack_1a8 = (int ******)__vbaObjSet();
      ppppppiStack_1ac = (int ******)0x463a47;
      (*pcVar14)();
      ppppppiStack_1ac = (int ******)0x463a50;
      __vbaFreeObj();
      if (DAT_00480244 == (int ******)0x0) {
        ppppppiStack_1ac = (int ******)&DAT_00480244;
        ppppppiStack_1b0 = (int ******)&DAT_00413b34;
        pppppiStack_1b4 = (int *****)0x463a69;
        __vbaNew2();
      }
      ppppppiStack_1ac = &local_48;
      ppppppiStack_1b0 = DAT_00480244;
      pppppiStack_1b4 = (int *****)0x463a79;
      iVar6 = (*(code *)(*DAT_00480244)[6])();
      if (iVar6 < 0) {
        pppppiStack_1b4 = (int *****)0x18;
        ppppppiStack_1b8 = (int ******)&DAT_00413b24;
        __vbaHresultCheckObj();
      }
      pppppiVar2 = local_48;
      pppppiVar10 = (int *****)*local_48;
      pppppiStack_1b4 = (int *****)0x463a97;
      ppppppiStack_1b0 = (int ******)__vbaI2I4();
      pppppiStack_1b4 = pppppiVar2;
      ppppppiStack_1b8 = (int ******)0x463a9c;
      iVar6 = (*(code *)pppppiVar10[0x1f])();
      if (iVar6 < 0) {
        ppppppiStack_1b8 = (int ******)0x7c;
        __vbaHresultCheckObj();
      }
      ppppppiStack_1b8 = (int ******)0x463ab6;
      __vbaFreeObj();
      ppppppiStack_1b8 = (int ******)0xffffffff;
      pppppiStack_1cc = (int *****)(*(code *)(*param_1)[0x25])();
      if ((int)pppppiStack_1cc < 0) {
        pppppiStack_1d0 = (int *****)0x463ad8;
        __vbaHresultCheckObj();
      }
      pppppiStack_1cc = (int *****)0x2;
      pppppiStack_1d0 = (int *****)0x463b41;
      __vbaFreeObjList();
      __vbaFreeObj();
      __vbaFreeObj();
      __vbaFreeObj();
      __vbaFreeObj();
      __vbaFreeObj();
      return;
    }
    ppppppiStack_190 = &local_48;
    pppppiVar10 = (int *****)*param_2;
    ppppppiStack_198 = (int ******)0x4630d6;
    pppppiStack_194 = pppppiVar10;
    ppppppiStack_1a4 = (int ******)(*(code *)(*pppppiVar10)[0x1b])();
    if ((int)ppppppiStack_1a4 < 0) {
      ppppppiStack_198 = (int ******)0x6c;
      ppppppiStack_19c = (int ******)&LAB_004133e8;
      ppppppiStack_1a8 = (int ******)0x4630e7;
      pppppiStack_1a0 = pppppiVar10;
      __vbaHresultCheckObj();
    }
    pppppiVar10 = local_48;
    local_98 = (int *****)&local_24;
    ppppppiStack_198 = &local_4c;
    ppppppiStack_19c = (int ******)&local_a0;
    local_a0 = (int ****)0x4002;
    pppppiStack_1a0 = local_48;
    ppppppiStack_1a4 = (int ******)0x463110;
    ppppppiVar9 = (int ******)(*(code *)(*local_48)[9])();
    if ((int)ppppppiVar9 < 0) {
      ppppppiStack_1a4 = (int ******)0x24;
      ppppppiStack_1a8 = (int ******)&DAT_004146fc;
      ppppppiStack_1ac = (int ******)pppppiVar10;
      pppppiStack_1b4 = (int *****)0x463121;
      ppppppiStack_1b0 = ppppppiVar9;
      __vbaHresultCheckObj();
    }
    ppppppiStack_1a8 = &local_34;
    ppppiVar15 = (int ****)0x0;
    ppppppiStack_1a4 = (int ******)local_4c;
    local_4c = (int *****)0x0;
    ppppppiStack_1ac = (int ******)0x463134;
    __vbaObjSet();
    ppppppiStack_1a4 = (int ******)0x46313d;
    __vbaFreeObj();
    local_2c = 0;
    if (*(short *)(param_1 + 0x28) != 0) {
      ppppppiStack_1a4 = (int ******)param_1[0xf];
      ppppppiStack_1a8 = (int ******)*param_2;
      ppppppiStack_1ac = (int ******)0x463160;
      sVar5 = __vbaObjIs();
      if (sVar5 != 0) {
        ppppppiStack_1a4 = (int ******)&DAT_00417d34;
        ppppppiStack_1a8 = (int ******)0x0;
        ppppppiStack_1ac = (int ******)0x7;
        ppppppiStack_1b0 = (int ******)param_1;
        pppppiStack_1b4 = (int *****)0x46317d;
        pppppiStack_1b4 = (int *****)(*(code *)(*param_1)[0xe5])();
        ppppppiStack_1b8 = &local_48;
        pppppiStack_1b4 = (int *****)__vbaObjSet();
        ppppppiStack_1b8 = (int ******)local_60;
        ppppppiStack_1ac = (int ******)__vbaLateIdCallLd();
        ppppppiStack_1b0 = (int ******)0x46319f;
        ppppppiStack_1a8 = (int ******)__vbaCastObjVar();
        ppppppiStack_1ac = &local_4c;
        ppppppiStack_1b0 = (int ******)0x4631a6;
        ppppppiVar9 = (int ******)__vbaObjSet();
        ppppppiStack_1a8 = (int ******)&local_38;
        ppppppiStack_1ac = (int ******)local_34;
        ppppppiStack_1b0 = (int ******)0x4631b5;
        iVar6 = (*(code *)(*local_34)[7])();
        if (iVar6 < 0) {
          ppppppiStack_1b0 = (int ******)0x1c;
          pppppiStack_1b4 = (int *****)&LAB_0041470c;
          ppppppiStack_1b8 = (int ******)local_34;
          __vbaHresultCheckObj();
        }
        local_68 = local_38;
        ppppppiStack_1b0 = &local_50;
        pppppiStack_1b4 = local_70;
        local_38 = (int ****)0x0;
        local_70[0] = (int ****)0x8;
        ppppppiStack_1b8 = ppppppiVar9;
        iVar6 = (*(code *)(*ppppppiVar9)[9])();
        if (iVar6 < 0) {
          pppppiStack_1cc = (int *****)0x4631fc;
          __vbaHresultCheckObj();
        }
        pppppiVar10 = local_50;
        ppppppiStack_1b0 = (int ******)(*(code *)(*local_50)[0x17])();
        if ((int)ppppppiStack_1b0 < 0) {
          ppppppiStack_1a4 = (int ******)0x5c;
          ppppppiStack_1a8 = (int ******)&DAT_00417d44;
          ppppppiStack_1ac = (int ******)pppppiVar10;
          pppppiStack_1b4 = (int *****)0x46321f;
          __vbaHresultCheckObj();
        }
        ppppppiStack_1a4 = &local_50;
        ppppppiStack_1a8 = &local_4c;
        ppppppiStack_1ac = &local_48;
        ppppppiStack_1b0 = (int ******)0x3;
        ppppiVar15 = (int ****)~local_d4[0];
        pppppiStack_1b4 = (int *****)0x46323b;
        __vbaFreeObjList();
        pppppiStack_1b4 = local_70;
        ppppppiStack_1b8 = (int ******)local_60;
        __vbaFreeVarList();
        if ((short)ppppiVar15 != 0) {
          local_2c = 0xffffffff;
        }
      }
    }
    if ((short)local_2c == 0) {
      ppppppiStack_1a4 = &local_48;
      ppppppiStack_1a8 = (int ******)local_34;
      ppppppiStack_1ac = (int ******)0x463272;
      ppppppiStack_1b8 = (int ******)(*(code *)(*local_34)[0xf])();
      if ((int)ppppppiStack_1b8 < 0) {
        ppppppiStack_1ac = (int ******)0x3c;
        ppppppiStack_1b0 = (int ******)&LAB_0041470c;
        pppppiStack_1b4 = local_34;
        __vbaHresultCheckObj();
      }
      ppppppiStack_1ac = &local_4c;
      ppppppiStack_1b0 = (int ******)&local_28;
      pppppiStack_1b4 = local_48;
      ppppppiStack_1b8 = (int ******)0x463299;
      iVar6 = (*(code *)(*local_48)[0xb])();
      if (iVar6 < 0) {
        ppppppiStack_1b8 = (int ******)0x2c;
        __vbaHresultCheckObj();
      }
      ppppppiStack_1b8 = (int ******)local_4c;
      local_4c = (int *****)0x0;
      __vbaObjSet();
      ppppppiStack_1b8 = (int ******)0x4632c6;
      __vbaFreeObj();
      ppppppiStack_1b8 = (int ******)local_60;
      pppppiVar10 = (int *****)(*(code *)(*local_28)[0x17])();
      if ((int)pppppiVar10 < 0) {
        pppppiStack_1d0 = (int *****)0x4632e7;
        pppppiStack_1cc = pppppiVar10;
        __vbaHresultCheckObj();
      }
      puVar11 = (uint *)(*(code *)(*local_34)[9])();
      if ((int)puVar11 < 0) {
        pppppiStack_1cc = (int *****)&LAB_0041470c;
        pppppiStack_1d0 = local_34;
        pppppiStack_1d8 = (int *****)0x463308;
        puStack_1d4 = puVar11;
        __vbaHresultCheckObj();
      }
      local_38 = (int ****)0x0;
      __vbaStrMove();
      __vbaStrCopy();
      puVar18 = &local_44;
      pppppiVar10 = &local_40;
      pppppiStack_1cc = &local_3c;
      pppppiStack_1d0 = (int *****)0x46333b;
      uVar12 = __vbaStrVarVal();
      pppppiStack_1cc = (int *****)0x463341;
      local_68 = (int ****)FUN_004419b0(uVar12,pppppiVar10,puVar18);
      pppppiStack_1cc = local_70;
      local_70[0] = (int ****)0x8;
      pppppiStack_1d0 = local_20;
      puStack_1d4 = (uint *)0x463358;
      pppppiStack_1e0 = (int *****)(*(code *)(*local_20)[0xd])();
      if ((int)pppppiStack_1e0 < 0) {
        puStack_1d4 = (uint *)0x34;
        pppppiStack_1d8 = (int *****)&DAT_00414bb4;
        pppppiStack_1dc = local_20;
        ppppppiStack_1e4 = (int ******)0x46336c;
        __vbaHresultCheckObj();
      }
      puStack_1d4 = &local_44;
      pppppiStack_1d8 = &local_40;
      pppppiStack_1dc = &local_3c;
      pppppiStack_1e0 = (int *****)0x3;
      ppppppiStack_1e4 = (int ******)0x463380;
      __vbaFreeStrList();
      ppppppiStack_1e4 = (int ******)local_70;
      ppppppiStack_1e8 = (int ******)local_60;
      __vbaFreeVarList();
      puStack_1d4 = local_d4;
      local_d4[0] = 0;
      pppppiStack_1d8 = local_20;
      pppppiStack_1dc = (int *****)0x4633a9;
      ppppppiVar9 = (int ******)(*(code *)(*local_20)[0xe])();
      if ((int)ppppppiVar9 < 0) {
        pppppiStack_1dc = (int *****)0x38;
        pppppiStack_1e0 = (int *****)&DAT_00414bb4;
        ppppppiStack_1e4 = (int ******)local_20;
        ppppppiStack_1e8 = ppppppiVar9;
        __vbaHresultCheckObj();
      }
      pppppiStack_1dc = local_60;
      pppppiStack_1e0 = local_20;
      ppppppiStack_1e4 = (int ******)0x4633ca;
      iVar6 = (*(code *)(*local_20)[0xc])();
      if (iVar6 < 0) {
        ppppppiStack_1e4 = (int ******)0x30;
        ppppppiStack_1e8 = (int ******)&DAT_00414bb4;
        __vbaHresultCheckObj();
      }
      ppppppiStack_1e4 = (int ******)local_60;
      ppppppiStack_1e8 = (int ******)0x4633ea;
      sVar5 = rtcIsObject();
      ppppppiStack_1e4 = (int ******)0x4633f6;
      __vbaFreeVar();
      if (sVar5 == 0) {
        pppppiStack_1e0 = (int *****)&LAB_0041470c;
        ppppppiStack_1e4 = (int ******)0x0;
        ppppppiStack_1e8 = (int ******)0x46367e;
        pppppiStack_1e0 = (int *****)__vbaCastObj();
        ppppppiStack_1e4 = &local_48;
        ppppppiStack_1e8 = (int ******)0x463689;
        __vbaObjSet();
        pppppiStack_1e0 = local_60;
        ppppppiStack_1e4 = (int ******)local_20;
        ppppppiStack_1e8 = (int ******)0x463696;
        iVar6 = (*(code *)(*local_20)[0xc])();
        if (iVar6 < 0) {
          ppppppiStack_1e8 = (int ******)0x30;
          __vbaHresultCheckObj();
        }
        ppppppiStack_1e8 = (int ******)local_60;
        __vbaStrVarMove();
        ppppppiStack_1e8 = (int ******)0x4636bf;
        __vbaStrMove();
        ppppppiStack_1e8 = &local_4c;
        iVar6 = (*(code *)(*param_1[0xe])[0x1d])();
        if (iVar6 < 0) {
          __vbaHresultCheckObj();
        }
        __vbaFreeStr();
        __vbaFreeObjList();
        __vbaFreeVar();
        local_d4[0] = 0;
        iVar6 = (*(code *)(*local_20)[0xe])();
        if (iVar6 < 0) {
          __vbaHresultCheckObj();
        }
        iVar6 = (*(code *)(*local_20)[0xc])();
        if (iVar6 < 0) {
          __vbaHresultCheckObj();
        }
        sVar5 = rtcIsObject();
        __vbaFreeVar();
        if (sVar5 != -1) {
          rtcErrObj();
          piVar13 = (int *)__vbaObjSet();
          local_90 = 10;
          local_80 = 10;
          local_88 = 0x80020004;
          local_78 = 0x80020004;
          local_a8 = L"GL field of some entry doesn\'t point to an object";
          local_b0 = 8;
          __vbaVarDup();
          local_98 = (int *****)0x413274;
          local_a0 = (int ****)0x8;
          __vbaVarDup();
          iVar6 = (**(code **)(*piVar13 + 0x44))();
          if (iVar6 < 0) {
            __vbaHresultCheckObj();
          }
          __vbaFreeObj();
          __vbaFreeVarList();
        }
        iVar6 = (*(code *)(*local_20)[0xc])();
        if (iVar6 < 0) {
          __vbaHresultCheckObj();
        }
        __vbaCastObjVar();
        __vbaObjSet();
        __vbaFreeVar();
        iVar6 = (*(code *)(*local_30)[0xf])();
        if (iVar6 < 0) {
          ppppppiStack_1e4 = (int ******)0x3c;
          ppppppiStack_1e8 = (int ******)&LAB_0041470c;
          __vbaHresultCheckObj();
        }
        ppppppiStack_1e8 = (int ******)local_f8;
        ppppppiStack_1e4 = (int ******)local_48;
        local_48 = (int *****)0x0;
        ppppppiStack_1e4 = (int ******)__vbaObjSet();
        ppppppiStack_1e8 = local_1c;
        iVar6 = __vbaForEachCollObj();
        while (iVar6 != 0) {
          ppppppiStack_1e4 = &local_48;
          ppppppiStack_1e8 = (int ******)local_1c[0];
          iVar6 = (*(code *)(*local_1c[0])[10])();
          if (iVar6 < 0) {
            __vbaHresultCheckObj();
          }
          iVar6 = (*(code *)(*local_48)[0x17])();
          if (iVar6 < 0) {
            __vbaHresultCheckObj();
          }
          iVar6 = (*(code *)(*local_34)[9])();
          if (iVar6 < 0) {
            __vbaHresultCheckObj();
          }
          local_38 = (int ****)0x0;
          __vbaStrMove();
          __vbaStrCopy();
          puVar18 = &local_44;
          pppppiVar10 = &local_40;
          uVar12 = __vbaStrVarVal();
          local_68 = (int ****)FUN_004419b0(uVar12,pppppiVar10,puVar18);
          local_70[0] = (int ****)0x8;
          iVar6 = (*(code *)(*local_1c[0])[0xd])();
          if (iVar6 < 0) {
            ppppppiStack_1e4 = (int ******)0x34;
            ppppppiStack_1e8 = (int ******)&DAT_00414bb4;
            __vbaHresultCheckObj();
          }
          ppppppiStack_1e4 = (int ******)&local_44;
          ppppppiStack_1e8 = (int ******)&local_40;
          __vbaFreeStrList();
          ppppppiStack_1e4 = (int ******)0x4639cf;
          __vbaFreeObj();
          ppppppiStack_1e4 = (int ******)local_70;
          ppppppiStack_1e8 = (int ******)local_60;
          __vbaFreeVarList();
          ppppppiStack_1e4 = local_1c;
          ppppppiStack_1e8 = (int ******)&local_fc;
          iVar6 = __vbaNextEachCollObj();
        }
      }
      else {
        pppppiStack_1e0 = local_60;
        ppppppiStack_1e4 = (int ******)local_20;
        ppppppiStack_1e8 = (int ******)0x46340c;
        iVar6 = (*(code *)(*local_20)[0xc])();
        if (iVar6 < 0) {
          ppppppiStack_1e8 = (int ******)0x30;
          __vbaHresultCheckObj();
        }
        ppppppiStack_1e8 = (int ******)&LAB_0041470c;
        ppppppiStack_1e8 = (int ******)__vbaCastObjVar();
        __vbaObjSet();
        ppppppiStack_1e8 = (int ******)0x463443;
        __vbaFreeVar();
      }
      ppppppiStack_1e4 = &local_48;
      ppppppiStack_1e8 = (int ******)local_30;
      iVar6 = (*(code *)(*local_30)[0xf])();
      if (iVar6 < 0) {
        __vbaHresultCheckObj();
      }
      iVar6 = (*(code *)(*local_48)[0xb])();
      if (iVar6 < 0) {
        __vbaHresultCheckObj();
      }
      local_4c = (int *****)0x0;
      __vbaObjSet();
      __vbaFreeObj();
      iVar6 = (*(code *)(*local_34)[9])();
      if (iVar6 < 0) {
        __vbaHresultCheckObj();
      }
      local_38 = (int ****)0x0;
      __vbaStrMove();
      __vbaStrCopy();
      in_stack_fffffe04 = &local_3c;
      local_58 = FUN_004419b0(*param_4,in_stack_fffffe04,&local_40);
      pppppiStack_204 = local_60;
      local_60[0] = (int ****)0x8;
      iVar6 = (*(code *)(*local_1c[0])[0xd])();
      if (iVar6 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaFreeStrList();
      __vbaFreeVar();
      iVar6 = (*(code *)(*local_1c[0])[0xc])();
      if (iVar6 < 0) {
        __vbaHresultCheckObj();
      }
      local_dc = 0;
      local_d8 = 0;
      ppppiVar15 = param_1 + 0xd;
      uStack_22c = 0x463599;
      FUN_0046ea50(*param_5,&local_34,ppppiVar15,param_1 + 0x11,param_6,&local_d8,&local_dc);
      __vbaStrMove();
      ppiVar1 = **ppppiVar15;
      __vbaStrVarVal();
      pppppiStack_1b4 = (int *****)(*(code *)ppiVar1[0x16])();
      if ((int)pppppiStack_1b4 < 0) {
        ppppppiStack_1b0 = (int ******)*ppppiVar15;
        ppppppiStack_1a8 = (int ******)0x58;
        ppppppiStack_1ac = (int ******)&LAB_00414228;
        ppppppiStack_1b8 = (int ******)0x4635d0;
        __vbaHresultCheckObj();
      }
      ppppppiStack_1a8 = (int ******)&local_3c;
      ppppppiStack_1ac = (int ******)&local_38;
      ppppppiStack_1b0 = (int ******)0x2;
      pppppiStack_1b4 = (int *****)0x4635e0;
      __vbaFreeStrList();
      ppppppiStack_1a8 = (int ******)0x4635ec;
      __vbaFreeVar();
      pcVar14 = __vbaLateIdSt_exref;
    }
    ppppppiStack_1a8 = (int ******)(float)(int)(wchar_t)local_24;
    pppppiStack_1b4 = (int *****)0x5;
    ppppppiStack_1b0 = (int ******)0x4;
    local_a0 = (int ****)0x4;
    ppppppiStack_1ac = (int ******)local_9c;
    ppppppiStack_1b8 = (int ******)param_1;
    ppppppiStack_1a4 = (int ******)local_94;
    local_98 = (int *****)ppppppiStack_1a8;
    (*(code *)(*param_1)[0xe2])();
    __vbaObjSet();
    (*pcVar14)();
    ppppppiStack_190 = (int ******)0x46365a;
    __vbaFreeObj();
    uVar3 = (uint)(ushort)((wchar_t)local_24 + L'\x01');
  } while (!SCARRY2((wchar_t)local_24,1));
  ppppppiStack_190 = (int ******)0x463b7f;
  __vbaErrorOverflow();
  ppppppiVar8 = ppppppiStack_184;
  ppppppiStack_19c = (int ******)&LAB_004032d6;
  pppppiStack_1a0 = ExceptionList;
  ppppppiStack_198 = (int ******)&pcStack_288;
  pcStack_288 = pcVar16;
  pppppiStack_194 = (int *****)&DAT_00402b10;
  ppppppiStack_190 = (int ******)0x0;
  ExceptionList = &pppppiStack_1a0;
  ppppiStack_284 = ppppiVar15;
  pcStack_280 = pcVar14;
  ppppiStack_18c = (int ****)&stack0xfffffffc;
  (*(code *)(*ppppppiStack_184)[1])(ppppppiStack_184);
  ppppppiStack_1a4 = (int ******)0x0;
  ppppppiStack_1a8 = (int ******)0x0;
  ppppppiStack_1ac = (int ******)0x0;
  ppppppiStack_1b0 = (int ******)0x0;
  pppppiStack_1b4 = (int *****)0x0;
  ppppppiStack_1b8 = (int ******)0x0;
  pppppiStack_1d8 = (int *****)0x0;
  ppppppiStack_1e8 = (int ******)0x0;
  auStack_23c[0] = 0;
  uStack_240 = 0;
  auStack_258[0] = 0;
  uStack_25c = 0;
  uStack_260 = 0;
  uStack_264 = 0;
  __vbaObjSetAddref(ppppppiVar8 + 0x11,*ppppppiStack_180);
  ppppppiVar9 = ppppppiVar8 + 0xd;
  __vbaObjSetAddref(ppppppiVar9,*pppppiStack_17c);
  __vbaObjSetAddref(ppppppiVar8 + 0x12,*pppppiStack_178);
  uVar12 = (*(code *)(*ppppppiVar8)[0xdd])(ppppppiVar8);
  piVar13 = (int *)__vbaObjSet(&pppppiStack_1b4,uVar12);
  iVar6 = (**(code **)(*piVar13 + 0x1e8))(piVar13);
  pcVar16 = __vbaHresultCheckObj_exref;
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar13,&DAT_0041807c,0x1e8);
  }
  __vbaFreeObj();
  iVar6 = (*(code *)(**ppppppiVar9)[0x11])(*ppppppiVar9,&pppppiStack_1b4);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,*ppppppiVar9,&LAB_00414228,0x44);
  }
  pppppiVar10 = pppppiStack_1b4;
  pppppiStack_1b4 = (int *****)0x0;
  uVar12 = __vbaObjSet(auStack_258,pppppiVar10);
  iVar6 = __vbaForEachCollObj(&LAB_004133e8,&uStack_25c,&ppppppiStack_1a4,uVar12);
  while (iVar6 != 0) {
    iVar6 = (*(code *)(*ppppppiStack_1a4)[0x1c])(ppppppiStack_1a4,&pppppiStack_1b4);
    if (iVar6 < 0) {
      (*pcVar16)(iVar6,ppppppiStack_1a4,&LAB_004133e8,0x70);
    }
    pppppiVar10 = pppppiStack_1b4;
    iVar6 = (*(code *)(*pppppiStack_1b4)[0xb])(pppppiStack_1b4,auStack_23c);
    if (iVar6 < 0) {
      (*pcVar16)(iVar6,pppppiVar10,&LAB_004133f8,0x2c);
    }
    sVar4 = (short)auStack_23c[0];
    __vbaFreeObj();
    if (sVar4 != 0) {
      uVar12 = (*(code *)(*ppppppiVar8)[0xdd])(ppppppiVar8);
      piVar13 = (int *)__vbaObjSet(&ppppppiStack_1b8,uVar12);
      uVar12 = 0x80020004;
      iVar6 = (*(code *)(*ppppppiStack_1a4)[0x16])(ppppppiStack_1a4,&pppppiStack_1b4);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,ppppppiStack_1a4,&LAB_004133e8,0x58);
      }
      pppppiVar10 = pppppiStack_1b4;
      iVar6 = (*(code *)(*pppppiStack_1b4)[0xc])(pppppiStack_1b4,&ppppppiStack_1a8);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,pppppiVar10,&DAT_00414258,0x30);
      }
      iVar6 = (**(code **)(*piVar13 + 0x1ec))
                        (piVar13,ppppppiStack_1a8,10,pppppiStack_204,uVar12,in_stack_fffffe04);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar13,&DAT_0041807c,0x1ec);
      }
      __vbaFreeStr();
      __vbaFreeObjList(2,&pppppiStack_1b4,&ppppppiStack_1b8);
      pcVar16 = __vbaHresultCheckObj_exref;
    }
    iVar6 = __vbaNextEachCollObj(&LAB_004133e8,&uStack_25c,&ppppppiStack_1a4);
  }
  iVar6 = (*(code *)(*ppppppiVar8[0xd])[0x13])(ppppppiVar8[0xd],&pppppiStack_1b4);
  if (iVar6 < 0) {
    (*pcVar16)(iVar6,ppppppiVar8[0xd],&LAB_00414228,0x4c);
  }
  ppppppiVar9 = ppppppiVar8 + 0xe;
  __vbaObjSetAddref(ppppppiVar9,pppppiStack_1b4);
  __vbaFreeObj();
  sVar4 = __vbaObjIs(*ppppppiVar9,0);
  pcVar16 = __vbaHresultCheckObj_exref;
  if (sVar4 != 0) {
    uVar12 = rtcErrObj();
    piVar13 = (int *)__vbaObjSet(&pppppiStack_1b4,uVar12);
    ppppppiStack_1e8 = (int ******)0xa;
    pppppiStack_1e0 = (int *****)0x80020004;
    __vbaVarDup();
    __vbaVarDup();
    iVar6 = (**(code **)(*piVar13 + 0x44))
                      (piVar13,0x41d,&stack0xfffffe38,&pppppiStack_1d8,&ppppppiStack_1e8,
                       &stack0xfffffe08);
    pcVar16 = __vbaHresultCheckObj_exref;
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar13,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,&stack0xfffffe38,&pppppiStack_1d8,&ppppppiStack_1e8,&stack0xfffffe08);
  }
  iVar6 = (*(code *)(**ppppppiVar9)[0x13])(*ppppppiVar9,auStack_23c);
  if (iVar6 < 0) {
    (*pcVar16)(iVar6,*ppppppiVar9,&LAB_004133e8,0x4c);
  }
  if ((short)auStack_23c[0] == 0) {
    iVar6 = (*(code *)(**ppppppiVar9)[0x16])(*ppppppiVar9,&pppppiStack_1b4);
    if (iVar6 < 0) {
      (*pcVar16)(iVar6,*ppppppiVar9,&LAB_004133e8,0x58);
    }
    pppppiVar10 = pppppiStack_1b4;
    iVar6 = (*(code *)(*pppppiStack_1b4)[0xc])(pppppiStack_1b4,&ppppppiStack_1a8);
    if (iVar6 < 0) {
      (*pcVar16)(iVar6,pppppiVar10,&DAT_00414258,0x30);
    }
    ppppppiStack_1e8 = (int ******)0xa;
    pppppiStack_1e0 = (int *****)0x80020004;
    __vbaVarDup();
    __vbaStrCat(ppppppiStack_1a8,L"You cannot make major changes to the great library since ");
    uVar12 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar12);
    uVar12 = __vbaStrMove();
    __vbaStrCat(L"is not editable.  Some changes may not take effect.",uVar12);
    rtcMsgBox(&stack0xfffffe38,0,&pppppiStack_1d8,&ppppppiStack_1e8,&stack0xfffffe08);
    __vbaFreeStrList(3,&ppppppiStack_1a8,&ppppppiStack_1ac,&ppppppiStack_1b0);
    __vbaFreeObj();
    __vbaFreeVarList(4,&stack0xfffffe38,&pppppiStack_1d8,&ppppppiStack_1e8,&stack0xfffffe08);
    ppppppiVar8 = ppppppiStack_184;
    pcVar16 = __vbaHresultCheckObj_exref;
  }
  pppppiVar10 = *ppppppiVar9;
  iVar6 = (*(code *)(*pppppiVar10)[0xb])(pppppiVar10,auStack_23c);
  if (iVar6 < 0) {
    (*pcVar16)(iVar6,*ppppppiVar9,&LAB_004133e8,0x2c);
  }
  if ((short)auStack_23c[0] == 0) {
    iVar6 = (*(code *)(*ppppppiVar8[0x11])[0xd])(ppppppiVar8[0x11],auStack_23c);
    if (iVar6 < 0) {
      (*pcVar16)(iVar6,ppppppiVar8[0x11],&DAT_00415000,0x34);
    }
    uVar12 = __vbaCastObj(0,&DAT_0041462c);
    __vbaObjSet(&pppppiStack_1b4,uVar12);
    uStack_240 = auStack_23c[0];
    iVar6 = (*(code *)(**ppppppiVar9)[0x22])
                      (*ppppppiVar9,ppppppiVar8 + 0xd,&uStack_240,&pppppiStack_1b4);
    if (iVar6 < 0) {
      (*pcVar16)(iVar6,*ppppppiVar9,&LAB_004133e8,0x88);
    }
    __vbaFreeObj();
  }
  pppppiVar2 = pppppiStack_174;
  sVar4 = __vbaObjIs(*pppppiStack_174,0);
  ppppiVar15 = ppppiStack_170;
  if (sVar4 == 0) {
    uVar12 = __vbaCastObj(*pppppiVar2,&DAT_00418c2c);
    uVar12 = __vbaObjSet(&pppppiStack_1b4,uVar12);
    __vbaObjSetAddref(ppppppiVar8 + 0x10,uVar12);
    __vbaFreeObj();
    puVar17 = &LAB_004133e8;
    uVar12 = __vbaLateMemCallLd(&stack0xfffffe38,ppppppiVar8[0x10],L"File",0,&LAB_004133e8);
    uVar12 = __vbaCastObjVar(uVar12,puVar17);
    uVar12 = __vbaObjSet(&pppppiStack_1b4,uVar12);
    __vbaObjSetAddref(ppppppiVar8 + 0xf,uVar12);
    __vbaFreeObj();
    __vbaFreeVar(pppppiVar10);
  }
  else {
    sVar4 = __vbaObjIs(*ppppiStack_170,0);
    if (sVar4 == 0) {
      __vbaObjSetAddref(ppppppiVar8 + 0xf,*ppppiVar15);
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      piVar13 = DAT_0047f074;
      iVar6 = (**(code **)(*DAT_0047f074 + 0x728))(DAT_0047f074,ppppppiVar8 + 0xf,&pppppiStack_1b4);
    }
    else {
      iVar6 = (*(code *)(*ppppppiVar8[0xd])[0x11])(ppppppiVar8[0xd],&pppppiStack_1b4);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,ppppppiVar8[0xd],&LAB_00414228,0x44);
      }
      pppppiVar10 = pppppiStack_1b4;
      pppppiStack_1b4 = (int *****)0x0;
      uVar12 = __vbaObjSet(&uStack_260,pppppiVar10);
      iVar6 = __vbaForEachCollObj(&LAB_004133e8,&uStack_264,&ppppppiStack_1a4,uVar12);
      while (iVar6 != 0) {
        iVar6 = (*(code *)(*ppppppiStack_1a4)[0x1c])(ppppppiStack_1a4,&pppppiStack_1b4);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,ppppppiStack_1a4,&LAB_004133e8,0x70);
        }
        pppppiVar10 = pppppiStack_1b4;
        iVar6 = (*(code *)(*pppppiStack_1b4)[0xb])(pppppiStack_1b4,auStack_23c);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,pppppiVar10,&LAB_004133f8,0x2c);
        }
        sVar4 = (short)auStack_23c[0];
        __vbaFreeObj();
        if (sVar4 != 0) {
          __vbaObjSetAddref(ppppppiVar8 + 0xf,ppppppiStack_1a4);
          __vbaExitEachColl(&uStack_264);
          break;
        }
        iVar6 = __vbaNextEachCollObj(&LAB_004133e8,&uStack_264,&ppppppiStack_1a4);
      }
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      piVar13 = DAT_0047f074;
      iVar6 = (**(code **)(*DAT_0047f074 + 0x728))(DAT_0047f074,ppppppiVar8 + 0xf,&pppppiStack_1b4);
    }
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar13,&DAT_00413d78,0x728);
    }
    uVar12 = __vbaCastObj(pppppiStack_1b4,&DAT_00418c2c);
    uVar12 = __vbaObjSet(&ppppppiStack_1b8,uVar12);
    __vbaObjSetAddref(ppppppiVar8 + 0x10,uVar12);
    __vbaFreeObjList(2,&pppppiStack_1b4,&ppppppiStack_1b8);
  }
  uVar12 = (*(code *)(*ppppppiVar8)[0xdd])(ppppppiVar8);
  piVar13 = (int *)__vbaObjSet(&ppppppiStack_1b8,uVar12);
  pppppiVar10 = ppppppiVar8[0xf];
  iVar6 = (*(code *)(*pppppiVar10)[0x16])(pppppiVar10,&pppppiStack_1b4);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,ppppppiVar8[0xf],&LAB_004133e8,0x58);
  }
  pppppiVar10 = pppppiStack_1b4;
  iVar6 = (*(code *)(*pppppiStack_1b4)[0xc])(pppppiStack_1b4,&ppppppiStack_1a8);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,pppppiVar10,&DAT_00414258,0x30);
  }
  iVar6 = (**(code **)(*piVar13 + 0xac))(piVar13,ppppppiStack_1a8);
  if (iVar6 < 0) {
    __vbaHresultCheckObj(iVar6,piVar13,&DAT_0041807c,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&pppppiStack_1b4,&ppppppiStack_1b8);
  __vbaFreeObjList(4,auStack_258,&uStack_25c,&uStack_260,&uStack_264,&LAB_00464490);
  __vbaFreeObj();
  return;
}
