/* Object #16 frmProjectProperties -- ESTIMATED function range; public methods per VB header:  */
#include "ghidra_types.h"

/* ---- 0x4449b0 (FUN_004449b0) [estimated] strings:  ---- */
void __cdecl FUN_004449b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
  undefined4 local_30;
  int *local_2c;
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
  local_10 = &stack0xffffff70;
  local_c = &DAT_00402270;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_54 = 0;
  local_58 = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x15] + 0x44))((int *)param_1[0x15],&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x15],&LAB_00414228,0x44);
  }
  piVar1 = local_2c;
  uVar5 = 0;
  uVar3 = (**(code **)(*param_1 + 0x314))(param_1,0xd,0,&DAT_00417d44);
  uVar3 = __vbaObjSet(&local_24,uVar3);
  uVar3 = __vbaLateIdCallLd(local_40,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar5);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x4c))(piVar4,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x4c);
  }
  local_48 = local_20;
  local_20 = 0;
  local_50[0] = 8;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_50,&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414238,0x24);
  }
  uVar3 = local_30;
  local_30 = 0;
  __vbaObjSet(&local_1c,uVar3);
  __vbaFreeObjList(3,&local_24,&local_28,&local_2c);
  __vbaFreeVarList(2,local_40,local_50);
  iVar2 = (**(code **)(*local_1c + 0x2c))(local_1c,&local_54);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x2c);
  }
  iVar2 = (**(code **)(*local_1c + 0x4c))(local_1c,&local_58);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x4c);
  }
  if ((short)local_58 != 0 && (short)local_54 != 0) {
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar1 = DAT_0047f074;
    iVar2 = (**(code **)(*DAT_0047f074 + 0x6fc))(DAT_0047f074,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x6fc);
    }
    uVar3 = __vbaCastObj(0,&DAT_0041462c);
    __vbaObjSet(&local_2c,uVar3);
    uVar3 = local_24;
    local_24 = 0;
    __vbaObjSet(&local_28,uVar3);
    iVar2 = (**(code **)(*local_1c + 0x84))(local_1c,param_1 + 0x15,&local_28,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x84);
    }
    __vbaFreeObjList(2,&local_28,&local_2c);
  }
  __vbaFreeObj(&LAB_00444c4f);
  return;
}

/* ---- 0x444c70 (FUN_00444c70) [estimated] strings:  ---- */
void __cdecl FUN_00444c70(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [4];
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
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
  local_c = &DAT_00402280;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = (int *)0x0;
  local_3c = (int *)0x0;
  local_40 = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_64 = 0;
  local_68 = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x15] + 0x44))((int *)param_1[0x15],&local_3c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x15],&LAB_00414228,0x44);
  }
  piVar1 = local_3c;
  uVar8 = 0;
  uVar3 = (**(code **)(*param_1 + 0x314))(param_1,0xd,0,&DAT_00417d44);
  uVar3 = __vbaObjSet(&local_34,uVar3);
  uVar3 = __vbaLateIdCallLd(local_50,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar8);
  piVar4 = (int *)__vbaObjSet(&local_38,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x4c))(piVar4,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x4c);
  }
  local_58 = local_24;
  local_24 = 0;
  local_60[0] = 8;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_60,&local_40);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414238,0x24);
  }
  uVar3 = local_40;
  local_40 = 0;
  __vbaObjSet(&local_20,uVar3);
  __vbaFreeObjList(3,&local_34,&local_38,&local_3c);
  __vbaFreeVarList(2,local_50,local_60);
  uVar3 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&local_1c,uVar3);
  iVar2 = (**(code **)(*local_20 + 0x58))(local_20,&local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x58);
  }
  piVar1 = local_34;
  puVar7 = &local_24;
  piVar4 = local_34;
  iVar2 = (**(code **)(*local_34 + 0x34))(local_34,puVar7);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x34);
  }
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  ppiVar6 = &local_38;
  piVar5 = DAT_0047f074;
  iVar2 = (**(code **)(*DAT_0047f074 + 0x710))(DAT_0047f074,ppiVar6);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x710);
  }
  piVar1 = local_38;
  local_24 = 0;
  __vbaStrMove();
  __vbaStrCopy(piVar5,ppiVar6);
  __vbaStrCopy(piVar4,puVar7);
  iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,&local_1c,&local_28,&local_2c,&local_30,&local_64);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004146ac,0x30);
  }
  uVar3 = local_64;
  __vbaFreeStrList(3,&local_28,&local_2c,&local_30);
  __vbaFreeObjList(2,&local_34,&local_38);
  if ((short)uVar3 == 0) {
    iVar2 = (**(code **)(*local_20 + 0x2c))(local_20,&local_64);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x2c);
    }
    iVar2 = (**(code **)(*local_20 + 0x4c))(local_20,&local_68);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x4c);
    }
    if ((short)local_68 != 0 && (short)local_64 != 0) {
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      piVar1 = DAT_0047f074;
      iVar2 = (**(code **)(*DAT_0047f074 + 0x6fc))(DAT_0047f074,&local_34);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x6fc);
      }
      piVar1 = local_34;
      local_34 = (int *)0x0;
      __vbaObjSet(&local_38,piVar1);
      iVar2 = (**(code **)(*local_20 + 0x84))(local_20,param_1 + 0x15,&local_38,&local_1c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x84);
      }
      __vbaFreeObj();
    }
  }
  __vbaFreeObj(&LAB_00445043);
  __vbaFreeObj();
  return;
}

/* ---- 0x445070 (FUN_00445070) [estimated] strings:  ---- */
void __cdecl FUN_00445070(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff74;
  local_c = &DAT_00402290;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_54 = 0;
  local_58 = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x15] + 0x44))((int *)param_1[0x15],&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x15],&LAB_00414228,0x44);
  }
  piVar1 = local_2c;
  uVar5 = 0;
  uVar3 = (**(code **)(*param_1 + 0x314))(param_1,0xd,0,&DAT_00417d44);
  uVar3 = __vbaObjSet(&local_24,uVar3);
  uVar3 = __vbaLateIdCallLd(local_40,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar5);
  piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x4c))(piVar4,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x4c);
  }
  local_48 = local_20;
  local_20 = 0;
  local_50[0] = 8;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_50,&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414238,0x24);
  }
  uVar3 = local_30;
  local_30 = 0;
  __vbaObjSet(&local_1c,uVar3);
  __vbaFreeObjList(3,&local_24,&local_28,&local_2c);
  __vbaFreeVarList(2,local_40,local_50);
  iVar2 = (**(code **)(*local_1c + 0x2c))(local_1c,&local_54);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x2c);
  }
  iVar2 = (**(code **)(*local_1c + 0x24))(local_1c,&local_58);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x24);
  }
  if ((short)local_54 == 0 && (short)local_58 == 0) {
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar1 = DAT_0047f074;
    iVar2 = (**(code **)(*DAT_0047f074 + 0x6fc))(DAT_0047f074,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x6fc);
    }
    piVar1 = local_24;
    iVar2 = (**(code **)(*local_24 + 0x34))(local_24,&local_54);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00415000,0x34);
    }
    uVar3 = __vbaCastObj(0,&DAT_0041462c);
    __vbaObjSet(&local_28,uVar3);
    local_58 = local_54;
    iVar2 = (**(code **)(*local_1c + 0x88))(local_1c,param_1 + 0x15,&local_58,&local_28);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x88);
    }
    __vbaFreeObjList(2,&local_24,&local_28);
  }
  __vbaFreeObj(&LAB_0044531e);
  return;
}

/* ---- 0x445340 (FUN_00445340) [estimated] strings: CTP Editor; Changes since last export will be lost, proceed? ---- */
void __cdecl FUN_00445340(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int **ppiVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_c8;
  undefined4 local_c4 [9];
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [4];
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
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
  local_10 = &stack0xfffffef4;
  local_c = &DAT_004022a0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = (int *)0x0;
  local_3c = (int *)0x0;
  local_40 = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90 = 0;
  local_a0 = 0;
  local_c4[0] = 0;
  local_c8 = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x15] + 0x44))((int *)param_1[0x15],&local_3c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x15],&LAB_00414228,0x44);
  }
  piVar1 = local_3c;
  uVar8 = 0;
  uVar3 = (**(code **)(*param_1 + 0x314))(param_1,0xd,0,&DAT_00417d44);
  uVar3 = __vbaObjSet(&local_34,uVar3);
  uVar3 = __vbaLateIdCallLd(local_50,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar8);
  piVar4 = (int *)__vbaObjSet(&local_38,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x4c))(piVar4,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x4c);
  }
  local_58 = local_24;
  local_24 = 0;
  local_60[0] = 8;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_60,&local_40);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414238,0x24);
  }
  uVar3 = local_40;
  local_40 = 0;
  __vbaObjSet(&local_20,uVar3);
  __vbaFreeObjList(3,&local_34,&local_38,&local_3c);
  __vbaFreeVarList(2,local_50,local_60);
  uVar3 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&local_1c,uVar3);
  iVar2 = (**(code **)(*local_20 + 0x58))(local_20,&local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x58);
  }
  piVar1 = local_34;
  puVar7 = &local_24;
  piVar4 = local_34;
  iVar2 = (**(code **)(*local_34 + 0x34))(local_34,puVar7);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x34);
  }
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  ppiVar6 = &local_38;
  piVar5 = DAT_0047f074;
  iVar2 = (**(code **)(*DAT_0047f074 + 0x710))(DAT_0047f074,ppiVar6);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x710);
  }
  piVar1 = local_38;
  local_24 = 0;
  __vbaStrMove();
  __vbaStrCopy(piVar5,ppiVar6);
  __vbaStrCopy(piVar4,puVar7);
  iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,&local_1c,&local_28,&local_2c,&local_30,local_c4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004146ac,0x2c);
  }
  uVar3 = local_c4[0];
  __vbaFreeStrList(3,&local_28,&local_2c,&local_30);
  __vbaFreeObjList(2,&local_34,&local_38);
  if ((short)uVar3 == 0) {
    local_78 = 0x80020004;
    local_68 = 0x80020004;
    local_80[0] = 10;
    local_70[0] = 10;
    local_98 = L"CTP Editor";
    local_a0 = 8;
    __vbaVarDup();
    local_88 = L"Changes since last export will be lost, proceed?";
    local_90 = 8;
    __vbaVarDup();
    iVar2 = rtcMsgBox(local_50,0x34,local_60,local_70,local_80);
    __vbaFreeVarList(4,local_50,local_60,local_70,local_80);
    if (iVar2 != 7) {
      iVar2 = (**(code **)(*local_20 + 0x24))(local_20,local_c4);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x24);
      }
      if ((short)local_c4[0] == 0) {
        iVar2 = (**(code **)(*local_20 + 0x8c))(local_20);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x8c);
        }
        if (DAT_0047f074 == (int *)0x0) {
          __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
        }
        piVar1 = DAT_0047f074;
        iVar2 = (**(code **)(*DAT_0047f074 + 0x6fc))(DAT_0047f074,&local_34);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x6fc);
        }
        piVar1 = local_34;
        iVar2 = (**(code **)(*local_34 + 0x34))(local_34,local_c4);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar1,&DAT_00415000,0x34);
        }
        local_c8 = local_c4[0];
        iVar2 = (**(code **)(*local_20 + 0x88))(local_20,param_1 + 0x15,&local_c8,&local_1c);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x88);
        }
        __vbaFreeObj();
      }
    }
  }
  __vbaFreeObj(&LAB_004457fc);
  __vbaFreeObj();
  return;
}

/* ---- 0x445820 (FUN_00445820) [estimated] strings:  ---- */
void __cdecl FUN_00445820(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int **ppiVar7;
  undefined4 uVar8;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [4];
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
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
  local_10 = &stack0xffffff5c;
  local_c = &DAT_004022b0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = (int *)0x0;
  local_3c = (int *)0x0;
  local_40 = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_64 = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x15] + 0x44))((int *)param_1[0x15],&local_3c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x15],&LAB_00414228,0x44);
  }
  piVar1 = local_3c;
  uVar8 = 0;
  uVar3 = (**(code **)(*param_1 + 0x314))(param_1,0xd,0,&DAT_00417d44);
  uVar3 = __vbaObjSet(&local_34,uVar3);
  uVar3 = __vbaLateIdCallLd(local_50,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar8);
  piVar4 = (int *)__vbaObjSet(&local_38,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x4c))(piVar4,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x4c);
  }
  local_58 = local_24;
  local_24 = 0;
  local_60[0] = 8;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_60,&local_40);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414238,0x24);
  }
  uVar3 = local_40;
  local_40 = 0;
  __vbaObjSet(&local_1c,uVar3);
  __vbaFreeObjList(3,&local_34,&local_38,&local_3c);
  __vbaFreeVarList(2,local_50,local_60);
  uVar3 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&local_20,uVar3);
  iVar2 = (**(code **)(*local_1c + 0x58))(local_1c,&local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x58);
  }
  piVar1 = local_34;
  puVar5 = &local_24;
  piVar4 = local_34;
  iVar2 = (**(code **)(*local_34 + 0x34))(local_34,puVar5);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x34);
  }
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  ppiVar7 = &local_38;
  piVar6 = DAT_0047f074;
  iVar2 = (**(code **)(*DAT_0047f074 + 0x710))(DAT_0047f074,ppiVar7);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x710);
  }
  piVar1 = local_38;
  local_24 = 0;
  __vbaStrMove();
  __vbaStrCopy(piVar6,ppiVar7);
  __vbaStrCopy(piVar4,puVar5);
  puVar5 = &local_20;
  piVar4 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,puVar5,&local_28,&local_2c,&local_30,&local_64);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_004146ac,0x2c);
  }
  uVar3 = local_64;
  __vbaFreeStrList(3,&local_28,&local_2c,&local_30);
  __vbaFreeObjList(2,&local_34,&local_38);
  if ((short)uVar3 == 0) {
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar1 = DAT_0047f074;
    __vbaStrCopy(piVar4,puVar5);
    iVar2 = (**(code **)(*piVar1 + 0x714))(piVar1,&local_1c,&local_24,&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x714);
    }
    __vbaFreeStr();
  }
  __vbaFreeObj(&LAB_00445b4e);
  __vbaFreeObj();
  return;
}

/* ---- 0x445b70 (FUN_00445b70) [estimated] strings:  ---- */
void __cdecl FUN_00445b70(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
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
  local_10 = &stack0xffffffb4;
  local_c = &DAT_004022c0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  uVar5 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar5);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x2c);
  }
  __vbaFreeObjList(2,&local_1c,&local_20);
  __vbaFreeVar(piVar6);
  iVar3 = (**(code **)(*piVar4 + 0x6f8))(piVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041576c,0x6f8);
  }
  return;
}

/* ---- 0x445ca0 (FUN_00445ca0) [estimated] strings:  ---- */
void __cdecl FUN_00445ca0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
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
  local_10 = &stack0xffffffb4;
  local_c = &DAT_004022d0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  uVar5 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  uVar1 = (**(code **)(*piVar4 + 0x314))(piVar4,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar5);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x2c);
  }
  __vbaFreeObjList(2,&local_1c,&local_20);
  __vbaFreeVar(piVar6);
  iVar3 = (**(code **)(*piVar4 + 0x6f8))(piVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041576c,0x6f8);
  }
  return;
}

/* ---- 0x445dd0 (FUN_00445dd0) [estimated] strings:  ---- */
void __cdecl FUN_00445dd0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 local_60;
  undefined4 local_5c [5];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
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
  local_10 = &stack0xffffff7c;
  local_c = &DAT_004022e0;
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
  local_30 = 0;
  local_40[0] = 0;
  local_44 = 0;
  local_48 = 0;
  local_5c[0] = 0;
  local_60 = 0;
  uVar2 = (**(code **)(*piVar4 + 0x314))(piVar4,7,0,&DAT_00417d34);
  uVar2 = __vbaObjSet(&local_28,uVar2);
  uVar2 = __vbaLateIdCallLd(local_40,uVar2);
  uVar2 = __vbaCastObjVar(uVar2,uVar6);
  uVar2 = __vbaObjSet(local_5c,uVar2);
  iVar3 = __vbaForEachCollObj(&DAT_00417d44,&local_60,&local_20,uVar2);
  __vbaFreeObj();
  __vbaFreeVar(puVar7);
  while (iVar3 != 0) {
    iVar3 = (**(code **)(*local_20 + 0x5c))(local_20,&local_44);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_20,&DAT_00417d44,0x5c);
    }
    if ((short)local_44 != 0) {
      iVar3 = (**(code **)(*(int *)piVar4[0x15] + 0x44))((int *)piVar4[0x15],&local_28);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar4[0x15],&LAB_00414228,0x44);
      }
      piVar1 = local_28;
      iVar3 = (**(code **)(*local_20 + 0x4c))(local_20,&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_20,&DAT_00417d44,0x4c);
      }
      local_38 = local_24;
      local_24 = 0;
      local_40[0] = 8;
      piVar5 = piVar1;
      iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,local_40,&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_00414238,0x24);
      }
      uVar2 = local_2c;
      local_2c = 0;
      __vbaObjSet(&local_1c,uVar2);
      __vbaFreeObj();
      __vbaFreeVar(piVar5);
      iVar3 = (**(code **)(*local_1c + 0x2c))(local_1c,&local_44);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x2c);
      }
      iVar3 = (**(code **)(*local_1c + 0x4c))(local_1c,&local_48);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x4c);
      }
      if ((short)local_48 != 0 && (short)local_44 != 0) {
        if (DAT_0047f074 == (int *)0x0) {
          __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
        }
        piVar1 = DAT_0047f074;
        iVar3 = (**(code **)(*DAT_0047f074 + 0x6fc))(DAT_0047f074,&local_28);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413d78,0x6fc);
        }
        uVar2 = __vbaCastObj(0,&DAT_0041462c);
        __vbaObjSet(&local_30,uVar2);
        piVar1 = local_28;
        local_28 = (int *)0x0;
        __vbaObjSet(&local_2c,piVar1);
        iVar3 = (**(code **)(*local_1c + 0x84))(local_1c,piVar4 + 0x15,&local_2c,&local_30);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x84);
        }
        __vbaFreeObjList(2,&local_2c,&local_30);
      }
    }
    iVar3 = __vbaNextEachCollObj(&DAT_00417d44,&local_60,&local_20);
  }
  local_8 = 0;
  __vbaFreeObjList(2,local_5c,&local_60,&LAB_004460e2);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}
