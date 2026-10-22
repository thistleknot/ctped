/* Object #18 frmEditingEntriesAndFields -- ESTIMATED function range; public methods per VB header: Project, Project, File, File, Clipboard */
#include "ghidra_types.h"

/* ---- 0x448f40 (FUN_00448f40) [estimated] strings: Difference; NoDifference; Unique ---- */
void __cdecl FUN_00448f40(int *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 local_8c;
  undefined4 local_88 [4];
  int *local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [4];
  int *local_34;
  int *local_30;
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
  local_10 = &stack0xffffff44;
  local_c = &DAT_00402428;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_34 = (int *)0x0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64 = 0;
  local_68 = 0;
  local_88[0] = 0;
  local_8c = 0;
  __vbaObjSetAddref(param_1 + 0x24,*param_2);
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x6c);
  }
  piVar4 = local_2c;
  pcVar5 = __vbaObjSet_exref;
  local_2c = (int *)0x0;
  uVar3 = __vbaObjSet(local_88,piVar4);
  iVar2 = __vbaForEachCollObj(&LAB_0041470c,&local_8c,&local_1c,uVar3);
  while (iVar2 != 0) {
    piVar4 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar4 + 0x714))(piVar4,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413728,0x714);
    }
    piVar4 = local_2c;
    iVar2 = (**(code **)(*local_2c + 0x6c))(local_2c,&local_30);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&LAB_004133e8,0x6c);
    }
    piVar4 = local_30;
    iVar2 = (**(code **)(*local_1c + 0x24))(local_1c,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&LAB_0041470c,0x24);
    }
    local_24 = 0;
    __vbaStrMove();
    iVar2 = (**(code **)(*piVar4 + 0x28))(piVar4,&local_28,&local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_004146fc,0x28);
    }
    piVar4 = local_34;
    local_34 = (int *)0x0;
    (*pcVar5)(&local_20,piVar4);
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_2c,&local_30);
    sVar1 = __vbaObjIs(local_20,0);
    if (sVar1 == 0) {
      iVar2 = (**(code **)(*local_1c + 0x4c))(local_1c,&local_20,&local_68);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&LAB_0041470c,0x4c);
      }
      if ((short)local_68 == 0) {
        piVar4 = param_1;
        uVar3 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
        uVar3 = (*pcVar5)(&local_2c,uVar3);
        uVar3 = __vbaLateIdCallLd(local_44,uVar3);
        uVar3 = __vbaCastObjVar(uVar3,piVar4);
        piVar4 = (int *)(*pcVar5)(&local_30,uVar3);
        iVar2 = (**(code **)(*local_1c + 0x1c))(local_1c,&local_24);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_1c,&LAB_0041470c,0x1c);
        }
        local_4c = local_24;
        local_24 = 0;
        local_54[0] = 8;
        iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,local_54,&local_34);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x24);
        }
        piVar4 = local_34;
        iVar2 = (**(code **)(*local_34 + 0x68))(local_34,8,local_60,L"Difference",local_58);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x68);
        }
        __vbaFreeObjList(3,&local_2c,&local_30,&local_34);
        __vbaFreeVarList(2,local_44,local_54);
      }
      else {
        piVar4 = param_1;
        uVar3 = (**(code **)(*param_1 + 0x358))(param_1);
        uVar3 = (*pcVar5)(&local_2c,uVar3);
        uVar3 = __vbaLateIdCallLd(local_44,uVar3);
        uVar3 = __vbaCastObjVar(uVar3,piVar4);
        piVar4 = (int *)(*pcVar5)(&local_30,uVar3);
        iVar2 = (**(code **)(*local_1c + 0x1c))(local_1c,&local_24);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_1c,&LAB_0041470c,0x1c);
        }
        local_4c = local_24;
        local_24 = 0;
        local_54[0] = 8;
        iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,local_54,&local_34);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x24);
        }
        piVar4 = local_34;
        iVar2 = (**(code **)(*local_34 + 0x68))(local_34,8,local_60,L"NoDifference",local_58);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x68);
        }
        __vbaFreeObjList(3,&local_2c,&local_30,&local_34);
        __vbaFreeVarList(2,local_44,local_54);
      }
    }
    else {
      piVar4 = param_1;
      uVar3 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
      uVar3 = (*pcVar5)(&local_2c,uVar3);
      uVar3 = __vbaLateIdCallLd(local_44,uVar3);
      uVar3 = __vbaCastObjVar(uVar3,piVar4);
      piVar4 = (int *)(*pcVar5)(&local_30,uVar3);
      iVar2 = (**(code **)(*local_1c + 0x1c))(local_1c,&local_24);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&LAB_0041470c,0x1c);
      }
      local_4c = local_24;
      local_24 = 0;
      local_54[0] = 8;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,local_54,&local_34);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x24);
      }
      local_78 = local_34;
      iVar2 = (**(code **)(*local_34 + 0x68))(local_34,8,local_60,L"Unique",local_58);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_78,&DAT_00417d44,0x68);
      }
      __vbaFreeObjList(3,&local_2c,&local_30,&local_34);
      __vbaFreeVarList(2,local_44,local_54);
    }
    pcVar5 = __vbaObjSet_exref;
    iVar2 = __vbaNextEachCollObj(&LAB_0041470c,&local_8c,&local_1c);
  }
  __vbaFreeObjList(2,local_88,&local_8c,&LAB_004494c1);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x4494e0 (FUN_004494e0) [estimated] strings: None ---- */
void __cdecl FUN_004494e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30 [4];
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff9c;
  local_c = &DAT_00402438;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  puVar4 = &DAT_00417d34;
  uVar3 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_30[0] = 0;
  local_40 = 0;
  local_48[0] = 0;
  local_4c = 0;
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar3);
  uVar1 = __vbaObjSet(local_48,uVar1);
  iVar2 = __vbaForEachCollObj(&DAT_00417d44,&local_4c,&local_1c,uVar1);
  __vbaFreeObj();
  __vbaFreeVar(puVar4);
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*local_1c + 0x68))(local_1c,8,local_3c,L"None",local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00417d44,0x68);
    }
    iVar2 = __vbaNextEachCollObj(&DAT_00417d44,&local_4c,&local_1c);
  }
  uVar1 = __vbaCastObj(0,&DAT_00413728);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  __vbaObjSetAddref(param_1 + 0x24,uVar1);
  __vbaFreeObj();
  __vbaFreeObjList(2,local_48,&local_4c,&LAB_00449650);
  __vbaFreeObj();
  return;
}

/* ---- 0x449670 (FUN_00449670) [estimated] strings:  ---- */
void __cdecl FUN_00449670(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [4];
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
  local_c = &stack0xffffffa8;
  local_8 = &DAT_00402448;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_38 = 0;
  local_3c = 0;
  ExceptionList = &pvStack_14;
  piVar4 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x728))(param_1,local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00413728,0x728);
  }
  __vbaFreeVar(piVar4);
  uVar3 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_1c,uVar3);
  local_3c = 0;
  local_38 = 0xffffffff;
  iVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_1 + 0x1c,&local_38,&local_3c,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00413728,0x730);
  }
  __vbaFreeObj();
  iVar2 = (**(code **)(*(int *)param_1[0x19] + 0x2c))((int *)param_1[0x19],&local_38);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x19],&DAT_00415000,0x2c);
  }
  if ((short)local_38 != 0) {
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar4 = DAT_0047f074;
    uVar3 = __vbaCastObj(param_1,&LAB_004135fc);
    __vbaObjSet(&local_1c,uVar3);
    iVar2 = (**(code **)(*piVar4 + 0x72c))(piVar4,&local_1c,&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413d78,0x72c);
    }
    uVar3 = __vbaCastObj(local_20,&DAT_00413728);
    __vbaObjSet(&local_18,uVar3);
    __vbaFreeObjList(2,&local_1c,&local_20);
    sVar1 = __vbaObjIs(local_18,0);
    if (sVar1 == 0) {
      piVar4 = local_18;
      iVar2 = (**(code **)(*local_18 + 0x728))(local_18,local_34);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00413728,0x728);
      }
      __vbaFreeVar(piVar4);
      uVar3 = __vbaCastObj(0,&LAB_0041470c);
      __vbaObjSet(&local_24,uVar3);
      local_3c = 0;
      local_38 = 0xffffffff;
      iVar2 = (**(code **)(*local_18 + 0x71c))(local_18,&local_1c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&DAT_00413728,0x71c);
      }
      uVar3 = local_1c;
      local_1c = 0;
      __vbaObjSet(&local_20,uVar3);
      iVar2 = (**(code **)(*param_1 + 0x730))(param_1,&local_20,&local_38,&local_3c,&local_24);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_00413728,0x730);
      }
      __vbaFreeObjList(2,&local_20,&local_24);
    }
  }
  __vbaFreeObj(&LAB_00449907);
  return;
}

/* ---- 0x449920 (FUN_00449920) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00449920(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_a4;
  undefined4 local_a0 [9];
  undefined4 local_7c [2];
  int *local_74;
  undefined4 local_6c [4];
  undefined4 local_5c [4];
  undefined4 local_4c [2];
  int local_44;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff30;
  local_8 = &LAB_00402458;
  uVar6 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_a0[0] = 0;
  local_a4 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1,0xd,0,&DAT_00417d44);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_3c,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar6);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x44))(piVar2,&local_a4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d44,0x44);
  }
  local_18 = local_a4;
  __vbaFreeObjList(2,&local_20,&local_24);
  __vbaFreeVar(piVar4);
  iVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1[0x1a],&LAB_004133e8,0x6c);
  }
  piVar4 = local_20;
  iVar3 = (**(code **)(*(int *)param_1[0x1b] + 0x1c))((int *)param_1[0x1b],&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1[0x1b],&LAB_0041470c,0x1c);
  }
  local_34 = local_1c;
  local_1c = 0;
  local_3c[0] = 8;
  piVar2 = piVar4;
  iVar3 = (**(code **)(*piVar4 + 0x38))(piVar4,local_3c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_004146fc,0x38);
  }
  __vbaFreeObj();
  __vbaFreeVar(piVar2);
  uVar6 = 0;
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_3c,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar6);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x2c);
  }
  __vbaFreeObjList(2,&local_20,&local_24);
  __vbaFreeVar(piVar4);
  local_a0[0] = 0;
  iVar3 = (**(code **)(*param_1 + 0x72c))(param_1,local_a0);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1,&DAT_00413728,0x72c);
  }
  uVar6 = 0;
  uVar1 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_3c,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar6);
  piVar4 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_a4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00417d34,0x1c);
  }
  local_74 = &local_18;
  local_44 = local_a4;
  local_5c[0] = 1;
  local_4c[0] = 3;
  local_7c[0] = 0x4003;
  FUN_00440ed0(local_6c,local_7c,local_4c,local_5c);
  local_18 = __vbaI4Var(local_6c);
  __vbaFreeObjList(2,&local_20,&local_24);
  __vbaFreeVarList(4,local_3c,local_4c,local_5c,local_6c);
  if (0 < local_18) {
    uVar6 = 0;
    uVar1 = (**(code **)(*param_1 + 0x358))(param_1,0xd,0,&DAT_00417d44);
    uVar1 = __vbaObjSet(&local_20,uVar1);
    uVar1 = __vbaLateIdCallLd(local_3c,uVar1);
    uVar1 = __vbaCastObjVar(uVar1,uVar6);
    piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
    piVar4 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0x60))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d44,0x60);
    }
    __vbaFreeObjList(2,&local_20,&local_24);
    __vbaFreeVar(piVar4);
    uVar6 = 0;
    uVar1 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
    uVar1 = __vbaObjSet(&local_20,uVar1);
    uVar1 = __vbaLateIdCallLd(local_3c,uVar1);
    uVar1 = __vbaCastObjVar(uVar1,uVar6);
    piVar4 = (int *)__vbaObjSet(&local_24,uVar1);
    local_74 = &local_18;
    local_7c[0] = 0x4003;
    iVar3 = (**(code **)(*piVar4 + 0x24))(piVar4,local_7c,&local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00417d34,0x24);
    }
    local_44 = local_28;
    local_28 = 0;
    local_4c[0] = 9;
    puVar5 = (undefined4 *)__vbaVerifyVarObj(local_4c);
    uVar1 = (**(code **)(*param_1 + 0x358))(param_1,0xd,0,*puVar5,puVar5[1],puVar5[2],puVar5[3]);
    uVar1 = __vbaObjSet(&local_2c,uVar1);
    __vbaLateIdStAd(uVar1);
    __vbaFreeObjList(3,&local_20,&local_24,&local_2c);
    __vbaFreeVarList(2,local_3c,local_4c);
  }
  iVar3 = *param_1;
  uVar1 = __vbaCastObj(0,&DAT_00417d44);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  (**(code **)(iVar3 + 0x788))(param_1,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x449e20 (FUN_00449e20) [estimated] strings:  ---- */
void __cdecl FUN_00449e20(int *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff78;
  local_8 = &DAT_00402468;
  local_18 = 0;
  local_28 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  ExceptionList = &pvStack_14;
  sVar1 = __vbaObjIs(*param_2,0);
  if (sVar1 == 0) {
    piVar4 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar4 + 0x44))(piVar4,&local_5c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414268,0x44);
    }
    iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],&local_60);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
    }
    if ((short)local_5c != 0 || (short)local_60 != 0) {
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar3 = (**(code **)(*DAT_0047f074 + 900))(DAT_0047f074);
      pcVar6 = __vbaObjSet_exref;
      piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
      iVar2 = (**(code **)(*piVar4 + 0x5c))(piVar4,0xffffffff);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar3 = (**(code **)(*DAT_0047f074 + 0x380))(DAT_0047f074);
      piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
      iVar2 = (**(code **)(*piVar4 + 0x5c))(piVar4,0xffffffff);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      piVar4 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar4 + 0x44))(piVar4,&local_5c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414268,0x44);
      }
      if ((short)local_5c == 0) {
        if (DAT_0047f074 == (int *)0x0) {
          __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
        }
        uVar3 = (**(code **)(*DAT_0047f074 + 900))(DAT_0047f074);
        piVar4 = (int *)__vbaObjSet(&local_18,uVar3);
        iVar2 = (**(code **)(*piVar4 + 0x5c))(piVar4,0);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415a1c,0x5c);
        }
        __vbaFreeObj();
      }
      else {
        if (DAT_0047f074 == (int *)0x0) {
          __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
        }
        uVar3 = (**(code **)(*DAT_0047f074 + 900))(DAT_0047f074);
        piVar5 = (int *)__vbaObjSet(&local_18,uVar3);
        piVar4 = (int *)*param_2;
        iVar2 = (**(code **)(*piVar4 + 0x54))(piVar4,&local_64);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414268,0x54);
        }
        iVar2 = (**(code **)(*piVar5 + 0x5c))(piVar5,-(uint)(local_64 == 1));
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar5,&DAT_00415a1c,0x5c);
        }
        __vbaFreeObj();
        pcVar6 = __vbaObjSet_exref;
      }
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar3 = (**(code **)(*DAT_0047f074 + 0x380))(DAT_0047f074);
      piVar4 = (int *)(*pcVar6)(&local_18,uVar3);
      iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],&local_5c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
      }
      iVar2 = (**(code **)(*piVar4 + 0x5c))(piVar4,local_5c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      __vbaObjSetAddref(param_1 + 0x20,*param_2);
      iVar2 = (**(code **)(*param_1 + 0x2a8))(param_1);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_004136f8,0x2a8);
      }
      local_20 = 0x80020004;
      local_28 = 10;
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      iVar2 = *param_1;
      uVar3 = (**(code **)(*DAT_0047f074 + 0x37c))
                        (DAT_0047f074,local_28,local_24,local_20,local_1c,10,local_34,0x80020004,
                         local_2c,10,local_44,0x80020004,local_3c,10,local_54,0x80020004,local_4c);
      uVar3 = __vbaObjSet(&local_18,uVar3);
      iVar2 = (**(code **)(iVar2 + 700))(param_1,uVar3);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_004136f8,700);
      }
      __vbaFreeObj();
    }
  }
  return;
}

/* ---- 0x44a250 (FUN_0044a250) [estimated] strings:  ---- */
void __cdecl FUN_0044a250(int *param_1,undefined4 *param_2,byte *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff70;
  local_8 = &DAT_00402478;
  local_1c = 0;
  local_2c[0] = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_70[1] = 0;
  local_70[0] = 0;
  ExceptionList = &pvStack_14;
  if ((*param_3 & 2) != 0) {
    uVar5 = 0;
    puVar4 = &DAT_00417d44;
    ExceptionList = &pvStack_14;
    uVar1 = __vbaLateIdCallLd(local_2c,*param_2,0xd,0,&DAT_00417d44,0);
    uVar1 = __vbaCastObjVar(uVar1,puVar4);
    uVar1 = __vbaObjSet(&local_1c,uVar1);
    local_18 = __vbaObjIs(uVar1,uVar5);
    local_18 = ~local_18;
    __vbaFreeObj();
    __vbaFreeVar();
    iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a]);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
    }
    if (((short)local_70[0] != 0) || ((short)local_18 != 0)) {
      __vbaObjSetAddref(param_1 + 0x1f,*param_2);
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar1 = (**(code **)(*DAT_0047f074 + 0x368))(DAT_0047f074);
      piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
      iVar2 = (**(code **)(*piVar3 + 0x5c))(piVar3,0xffffffff);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar1 = (**(code **)(*DAT_0047f074 + 0x370))(DAT_0047f074);
      piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
      iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_70);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
      }
      iVar2 = (**(code **)(*piVar3 + 0x5c))(piVar3,local_70[0]);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar1 = (**(code **)(*DAT_0047f074 + 0x36c))(DAT_0047f074);
      piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
      iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_70);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
      }
      iVar2 = (**(code **)(*piVar3 + 0x5c))(piVar3,local_70[0]);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar1 = (**(code **)(*DAT_0047f074 + 0x368))(DAT_0047f074);
      piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
      iVar2 = (**(code **)(*piVar3 + 0x5c))(piVar3,local_18);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar1 = (**(code **)(*DAT_0047f074 + 0x374))(DAT_0047f074);
      piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
      iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_70);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
      }
      iVar2 = (**(code **)(*piVar3 + 0x5c))(piVar3,local_70[0] & local_18);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      uVar1 = (**(code **)(*DAT_0047f074 + 0x378))(DAT_0047f074);
      piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
      iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_70);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
      }
      iVar2 = (**(code **)(*piVar3 + 0x5c))(piVar3,local_70[0] & local_18);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x5c);
      }
      __vbaFreeObj();
      iVar2 = (**(code **)(*param_1 + 0x2a8))(param_1);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_004136f8,0x2a8);
      }
      local_34 = 0x80020004;
      local_3c = 10;
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      iVar2 = *param_1;
      uVar1 = (**(code **)(*DAT_0047f074 + 0x364))
                        (DAT_0047f074,local_3c,local_38,local_34,local_30,10,local_48,0x80020004,
                         local_40,10,local_58,0x80020004,local_50,10,local_70[2],0x80020004,local_60
                        );
      uVar1 = __vbaObjSet(&local_1c,uVar1);
      iVar2 = (**(code **)(iVar2 + 700))(param_1,uVar1);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_004136f8,700);
      }
      __vbaFreeObj();
    }
  }
  return;
}

/* ---- 0x44a710 (FUN_0044a710) [estimated] strings:  ---- */
void __cdecl FUN_0044a710(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffbc;
  local_8 = &DAT_00402488;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  ExceptionList = &pvStack_14;
  (**(code **)(*param_1 + 0x780))(param_1,param_2,&local_24);
  if ((short)local_24 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x33c))(param_1);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x204))(piVar2);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x204);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*param_1 + 0x33c))(param_1);
    piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x114))(piVar2,0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x114);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*param_1 + 0x33c))(param_1);
    piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
    uVar1 = (**(code **)(*param_1 + 0x33c))(param_1);
    piVar4 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_18);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00417a98,0xa0);
    }
    iVar3 = *piVar2;
    uVar1 = __vbaLenBstr(local_18);
    iVar3 = (**(code **)(iVar3 + 0x11c))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0x11c);
    }
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_1c,&local_20);
  }
  return;
}

/* ---- 0x44a8b0 (FUN_0044a8b0) [estimated] strings: CTP Editor; No entry of that name.; Would you like to create one? ---- */
void __cdecl FUN_0044a8b0(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_d4;
  undefined4 local_d0 [9];
  undefined4 local_ac;
  wchar_t *local_a4;
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_8c [2];
  undefined4 local_84;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c [2];
  int *local_64;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffee8;
  local_8 = &DAT_00402498;
  local_18 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_8c[0] = 0;
  local_9c[0] = 0;
  local_ac = 0;
  local_d0[0] = 0;
  local_d4 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x6c);
  }
  piVar4 = local_30;
  iVar2 = (**(code **)(*local_30 + 0x28))(local_30,param_2,&local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004146fc,0x28);
  }
  uVar3 = local_34;
  local_34 = 0;
  __vbaObjSet(&local_18,uVar3);
  __vbaFreeObj();
  sVar1 = __vbaObjIs(local_18,0);
  if (sVar1 != 0) {
    local_74 = 0x80020004;
    local_64 = (int *)0x80020004;
    local_7c[0] = 10;
    local_6c[0] = 10;
    local_a4 = L"CTP Editor";
    local_ac = 8;
    __vbaVarDup();
    __vbaStrCat(&LAB_004143c4,L"No entry of that name.");
    uVar3 = __vbaStrMove();
    local_44 = __vbaStrCat(L"Would you like to create one?",uVar3);
    local_4c[0] = 8;
    local_20 = rtcMsgBox(local_4c,4,local_5c,local_6c,local_7c);
    __vbaFreeStr();
    __vbaFreeVarList(4,local_4c,local_5c,local_6c,local_7c);
    if (local_20 == 7) {
      local_1c = 0xffffffff;
      goto LAB_0044aebf;
    }
    uVar3 = __vbaCastObj(0,&LAB_0041470c);
    __vbaObjSet(&local_30,uVar3);
    iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x74))
                      ((int *)param_1[0x1a],param_2,&local_30,&local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x74);
    }
    uVar3 = local_34;
    local_34 = 0;
    __vbaObjSet(&local_18,uVar3);
    __vbaFreeObj();
    iVar2 = (**(code **)(*local_18 + 0x1c))(local_18,&local_28);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&LAB_0041470c,0x1c);
    }
    iVar2 = (**(code **)(*local_18 + 0x24))(local_18,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&LAB_0041470c,0x24);
    }
    uVar7 = 0;
    uVar3 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
    uVar3 = __vbaObjSet(&local_30,uVar3);
    uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
    uVar3 = __vbaCastObjVar(uVar3,uVar7);
    piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
    local_74 = local_2c;
    local_94 = 0x80020004;
    local_84 = 0x80020004;
    local_54 = 0x80020004;
    local_64 = (int *)local_28;
    local_9c[0] = 10;
    local_8c[0] = 10;
    local_2c = 0;
    local_7c[0] = 8;
    local_28 = 0;
    local_6c[0] = 8;
    local_5c[0] = 10;
    iVar2 = (**(code **)(*piVar4 + 0x28))
                      (piVar4,local_5c,local_6c,local_7c,local_8c,local_9c,&local_38);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x28);
    }
    piVar4 = local_38;
    iVar2 = (**(code **)(*local_18 + 0x24))(local_18,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&LAB_0041470c,0x24);
    }
    iVar2 = (**(code **)(*piVar4 + 0x28))(piVar4,local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x28);
    }
    __vbaFreeStr();
    __vbaFreeObjList(3,&local_30,&local_34,&local_38);
    __vbaFreeVarList(6,local_4c,local_5c,local_6c,local_7c,local_8c,local_9c);
  }
  uVar3 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_30,uVar3);
  local_d4 = 0xffffffff;
  local_d0[0] = 0xffffffff;
  iVar2 = (**(code **)(*param_1 + 0x730))(param_1,param_1 + 0x1b,local_d0,&local_d4,&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00413728,0x730);
  }
  __vbaFreeObj();
  uVar7 = 0;
  uVar3 = (**(code **)(*param_1 + 0x358))(param_1,0xd,0,&DAT_00417d44);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar7);
  piVar5 = (int *)__vbaObjSet(&local_34,uVar3);
  piVar4 = piVar5;
  iVar2 = (**(code **)(*piVar5 + 0x60))(piVar5,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00417d44,0x60);
  }
  __vbaFreeObjList(2,&local_30,&local_34);
  __vbaFreeVar(piVar4);
  uVar7 = 0;
  uVar3 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar7);
  piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
  iVar2 = (**(code **)(*local_18 + 0x1c))(local_18,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_18,&LAB_0041470c,0x1c);
  }
  local_54 = local_24;
  local_24 = 0;
  local_5c[0] = 8;
  iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,local_5c,&local_38);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x24);
  }
  local_64 = local_38;
  local_38 = (int *)0x0;
  local_6c[0] = 9;
  puVar6 = (undefined4 *)__vbaVerifyVarObj(local_6c);
  uVar3 = (**(code **)(*param_1 + 0x358))(param_1,0xd,0,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
  uVar3 = __vbaObjSet(&local_3c,uVar3);
  __vbaLateIdStAd(uVar3);
  __vbaFreeObjList(3,&local_30,&local_34,&local_3c);
  __vbaFreeVarList(3,local_4c,local_5c,local_6c);
  if ((short)param_1[0x23] == 0) {
    iVar2 = *param_1;
    uVar3 = __vbaCastObj(0,&DAT_00417d44);
    uVar3 = __vbaObjSet(&local_30,uVar3);
    (**(code **)(iVar2 + 0x788))(param_1,uVar3);
    __vbaFreeObj();
  }
LAB_0044aebf:
  __vbaFreeObj(&LAB_0044aec9);
  return;
}

/* ---- 0x44aef0 (FUN_0044aef0) [estimated] strings:  ---- */
void __cdecl FUN_0044aef0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffb0;
  local_c = &DAT_004024a8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  *param_2 = 0;
  piVar1 = param_1 + 0x1c;
  uVar2 = __vbaNew(&DAT_0040888c);
  uVar2 = __vbaObjSet(&local_2c,uVar2);
  __vbaObjSetAddref(piVar1,uVar2);
  __vbaFreeObj();
  iVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x70))((int *)param_1[0x1a],&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1[0x1a],&LAB_004133e8,0x70);
  }
  uVar2 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_30,uVar2);
  iVar3 = (**(code **)(*(int *)*piVar1 + 0x48))((int *)*piVar1,&local_30);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,*piVar1,&LAB_0041470c,0x48);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x44b030 (FUN_0044b030) [estimated] strings: Attempt to update frmEditing before file imported ---- */
void __cdecl FUN_0044b030(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104 [4];
  int *local_f4;
  int *local_f0;
  int local_ec;
  undefined4 local_e8 [9];
  undefined4 local_c4;
  wchar_t *local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  int **local_ac;
  undefined4 local_a8;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [4];
  undefined4 local_44;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined2 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffebc;
  local_c = &DAT_004024b8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (undefined2)param_1[0x23];
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = 0;
  local_3c = (int *)0x0;
  local_40 = (int *)0x0;
  local_44 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_b4 = 0;
  local_c4 = 0;
  local_e8[0] = 0;
  local_ec = 0;
  local_104[0] = 0;
  local_108 = 0;
  local_10c = 0;
  local_110 = 0;
  *(undefined2 *)(param_1 + 0x23) = 0xffff;
  local_20 = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x2c))((int *)param_1[0x1a],local_e8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x2c);
  }
  if ((short)local_e8[0] == 0) {
    uVar3 = rtcErrObj();
    local_f0 = (int *)__vbaObjSet(&local_3c,uVar3);
    local_7c = 0x80020004;
    local_6c = 0x80020004;
    local_84[0] = 10;
    local_74[0] = 10;
    local_bc = L"Attempt to update frmEditing before file imported";
    local_c4 = 8;
    __vbaVarDup();
    local_ac = (int **)0x41316c;
    local_b4 = 8;
    __vbaVarDup();
    iVar2 = (**(code **)(*local_f0 + 0x44))(local_f0,0x407,local_54,local_64,local_74,local_84);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_f0,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_54,local_64,local_74,local_84);
  }
  if (*param_2 != 0) {
    puVar12 = &DAT_00417d34;
    uVar11 = 0;
    uVar3 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
    uVar3 = __vbaObjSet(&local_3c,uVar3);
    uVar3 = __vbaLateIdCallLd(local_54,uVar3);
    uVar3 = __vbaCastObjVar(uVar3,uVar11);
    piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
    iVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x2c);
    }
    __vbaFreeObjList(2,&local_3c,&local_40);
    __vbaFreeVar(puVar12);
  }
  uVar11 = 0;
  uVar3 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
  uVar3 = __vbaObjSet(&local_3c,uVar3);
  uVar3 = __vbaLateIdCallLd(local_54,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar11);
  piVar5 = (int *)__vbaObjSet(&local_40,uVar3);
  piVar4 = piVar5;
  iVar2 = (**(code **)(*piVar5 + 0x1c))(piVar5,&local_ec);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00417d34,0x1c);
  }
  bVar7 = local_ec == 0;
  __vbaFreeObjList(2,&local_3c,&local_40);
  __vbaFreeVar(piVar4);
  if (bVar7) {
    local_20 = 0xffffffff;
  }
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],&local_3c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x6c);
  }
  piVar4 = local_3c;
  local_3c = (int *)0x0;
  uVar3 = __vbaObjSet(local_104,piVar4);
  iVar2 = __vbaForEachCollObj(&LAB_0041470c,&local_108,&local_30,uVar3);
  while (iVar2 != 0) {
    if ((short)local_20 == 0) {
      uVar11 = 0;
      uVar3 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
      uVar3 = __vbaObjSet(&local_3c,uVar3);
      uVar3 = __vbaLateIdCallLd(local_54,uVar3);
      uVar3 = __vbaCastObjVar(uVar3,uVar11);
      piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
      iVar2 = (**(code **)(*local_30 + 0x1c))(local_30,&local_34);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_30,&LAB_0041470c,0x1c);
      }
      local_5c = local_34;
      local_34 = 0;
      local_64[0] = 8;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,local_64,&local_44);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x24);
      }
      uVar3 = __vbaCastObj(local_44,&DAT_00417d44);
      __vbaObjSet(&local_28,uVar3);
      __vbaFreeObjList(3,&local_3c,&local_40,&local_44);
      __vbaFreeVarList(2,local_54,local_64);
    }
    else {
      iVar2 = (**(code **)(*local_30 + 0x1c))(local_30,&local_34);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_30,&LAB_0041470c,0x1c);
      }
      iVar2 = (**(code **)(*local_30 + 0x24))(local_30,&local_38);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_30,&LAB_0041470c,0x24);
      }
      uVar11 = 0;
      uVar3 = (**(code **)(*param_1 + 0x358))(param_1,7,0,&DAT_00417d34);
      uVar3 = __vbaObjSet(&local_3c,uVar3);
      uVar3 = __vbaLateIdCallLd(local_54,uVar3);
      uVar3 = __vbaCastObjVar(uVar3,uVar11);
      piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
      local_7c = local_38;
      local_9c = 0x80020004;
      local_8c = 0x80020004;
      local_5c = 0x80020004;
      local_6c = local_34;
      local_a4[0] = 10;
      local_94[0] = 10;
      local_38 = 0;
      local_84[0] = 8;
      local_34 = 0;
      local_74[0] = 8;
      local_64[0] = 10;
      iVar2 = (**(code **)(*piVar4 + 0x28))
                        (piVar4,local_64,local_74,local_84,local_94,local_a4,&local_44);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x28);
      }
      uVar3 = __vbaCastObj(local_44,&DAT_00417d44);
      __vbaObjSet(&local_28,uVar3);
      __vbaFreeObjList(3,&local_3c,&local_40,&local_44);
      __vbaFreeVarList(6,local_54,local_64,local_74,local_84,local_94,local_a4);
    }
    iVar2 = (**(code **)(*local_30 + 0x24))(local_30,&local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_30,&LAB_0041470c,0x24);
    }
    iVar2 = (**(code **)(*local_28 + 0x28))(local_28,local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_28,&DAT_00417d44,0x28);
    }
    __vbaFreeStr();
    iVar2 = (**(code **)(*local_30 + 0x44))(local_30,&local_3c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_30,&LAB_0041470c,0x44);
    }
    piVar4 = local_3c;
    iVar2 = (**(code **)(*local_3c + 0x24))(local_3c,local_e8);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&LAB_004133f8,0x24);
    }
    sVar1 = (short)local_e8[0];
    __vbaFreeObj();
    if (sVar1 != 0) {
      iVar2 = (**(code **)(*local_30 + 0x3c))(local_30,&local_3c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_30,&LAB_0041470c,0x3c);
      }
      piVar4 = local_3c;
      local_3c = (int *)0x0;
      uVar3 = __vbaObjSet(&local_10c,piVar4);
      iVar2 = __vbaForEachCollObj(&DAT_00414bb4,&local_110,&local_24,uVar3);
      while (iVar2 != 0) {
        iVar2 = (**(code **)(*local_30 + 0x44))(local_30,&local_40);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_30,&LAB_0041470c,0x44);
        }
        piVar4 = local_40;
        iVar2 = (**(code **)(*local_40 + 100))(local_40,&local_44);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar4,&LAB_004133f8,100);
        }
        iVar2 = (**(code **)(*local_24 + 0x28))(local_24,&local_3c);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_24,&DAT_00414bb4,0x28);
        }
        sVar1 = __vbaObjIs(local_3c,local_44);
        __vbaFreeObjList(3,&local_40,&local_44,&local_3c);
        if (sVar1 != 0) {
          puVar9 = local_54;
          iVar2 = (**(code **)(*local_24 + 0x30))(local_24,puVar9);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,local_24,&DAT_00414bb4,0x30);
          }
          sVar1 = rtcIsObject(local_54);
          __vbaFreeVar(puVar9);
          if (sVar1 != -1) {
            ppiVar10 = &local_3c;
            iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],ppiVar10);
            if (iVar2 < 0) {
              __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x6c);
            }
            piVar4 = local_3c;
            iVar2 = (**(code **)(*local_24 + 0x30))(local_24,local_54);
            if (iVar2 < 0) {
              __vbaHresultCheckObj(iVar2,local_24,&DAT_00414bb4,0x30);
            }
            __vbaStrVarMove(local_54);
            __vbaStrMove();
            iVar2 = (**(code **)(*piVar4 + 0x28))(piVar4,&local_34,&local_40);
            if (iVar2 < 0) {
              __vbaHresultCheckObj(iVar2,piVar4,&DAT_004146fc,0x28);
            }
            piVar4 = local_40;
            local_40 = (int *)0x0;
            __vbaObjSet(&local_2c,piVar4);
            __vbaFreeStr();
            __vbaFreeObj();
            __vbaFreeVar(ppiVar10);
            sVar1 = __vbaObjIs(local_2c,0);
            if (sVar1 == 0) {
              __vbaObjSetAddref(&local_3c,local_2c);
              local_ac = &local_3c;
              local_b4 = 0x4009;
              iVar2 = (**(code **)(*local_24 + 0x34))(local_24,&local_b4);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,local_24,&DAT_00414bb4,0x34);
              }
              uVar3 = __vbaCastObj(local_3c,&LAB_0041470c);
              __vbaObjSet(&local_2c,uVar3);
              __vbaFreeObj();
            }
          }
        }
        iVar2 = __vbaNextEachCollObj(&DAT_00414bb4,&local_110,&local_24);
      }
    }
    iVar2 = __vbaNextEachCollObj(&LAB_0041470c,&local_108,&local_30);
  }
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
  }
  uVar6 = (uint)((short)local_e8[0] == 0);
  local_b4 = 3;
  uVar11 = 8;
  uVar8 = 3;
  piVar4 = param_1;
  local_ac = (int **)uVar6;
  uVar3 = (**(code **)(*param_1 + 0x358))(param_1,8,3,local_b0,uVar6,local_a8);
  uVar3 = __vbaObjSet(&local_3c,uVar3);
  __vbaLateIdSt(uVar3,piVar4,uVar11,uVar8,local_b0,uVar6);
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x30c))(param_1);
  local_f4 = (int *)__vbaObjSet(&local_3c,uVar3);
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
  }
  iVar2 = (**(code **)(*local_f4 + 0x8c))(local_f4,local_e8[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_f4,&DAT_00418260,0x8c);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x304))(param_1);
  local_f4 = (int *)__vbaObjSet(&local_3c,uVar3);
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
  }
  iVar2 = (**(code **)(*local_f4 + 0x8c))(local_f4,local_e8[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_f4,&DAT_00418260,0x8c);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x2fc))(param_1);
  local_f4 = (int *)__vbaObjSet(&local_3c,uVar3);
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
  }
  iVar2 = (**(code **)(*local_f4 + 0x8c))(local_f4,local_e8[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_f4,&DAT_00418260,0x8c);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x300))(param_1);
  local_f4 = (int *)__vbaObjSet(&local_3c,uVar3);
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
  }
  iVar2 = (**(code **)(*local_f4 + 0x8c))(local_f4,local_e8[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_f4,&DAT_00418260,0x8c);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x308))(param_1);
  local_f4 = (int *)__vbaObjSet(&local_3c,uVar3);
  iVar2 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x1a],&LAB_004133e8,0x4c);
  }
  iVar2 = (**(code **)(*local_f4 + 0x8c))(local_f4,local_e8[0]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_f4,&DAT_00418260,0x8c);
  }
  __vbaFreeObj();
  iVar2 = *param_1;
  uVar3 = __vbaCastObj(0,&DAT_00417d44);
  uVar3 = __vbaObjSet(&local_3c,uVar3);
  (**(code **)(iVar2 + 0x788))(param_1,uVar3);
  __vbaFreeObj();
  *(undefined2 *)(param_1 + 0x23) = local_1c;
  __vbaFreeObjList(4,local_104,&local_108,&local_10c,&local_110,&LAB_0044bc52);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x44bc80 (FUN_0044bc80) [estimated] strings: UpdateEntryFields recieved neither entry nor structure; Invalid ArgumentTypeType; 開＠\xffff\xec83謐료\v; Locked ---- */
void FUN_0044bc80(undefined *******param_1,undefined ******param_2,short *param_3,
                 undefined4 *param_4,ushort *param_5)

{
  undefined *****pppppuVar1;
  undefined ********ppppppppuVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *********pppppppppuVar8;
  undefined **********ppppppppppuVar9;
  int iVar10;
  undefined **********ppppppppppuVar11;
  undefined **********ppppppppppuVar12;
  undefined **********ppppppppppuVar13;
  undefined2 extraout_var;
  uint uVar14;
  undefined4 uVar15;
  int *piVar16;
  int *piVar17;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined *******pppppppuVar18;
  code *pcVar19;
  code *pcVar20;
  undefined4 in_stack_fffffb60;
  undefined4 in_stack_fffffb64;
  undefined4 in_stack_fffffb68;
  undefined4 in_stack_fffffb6c;
  undefined *********pppppppppuVar21;
  undefined4 in_stack_fffffb70;
  uint *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined *********pppppppppuVar25;
  undefined4 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *********pppppppppuStack_390;
  undefined *********pppppppppuStack_38c;
  undefined *******pppppppuStack_388;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  int *apiStack_338 [2];
  undefined ********ppppppppuStack_330;
  short sStack_324;
  short sStack_320;
  undefined ********ppppppppuStack_31c;
  int *piStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  uint auStack_30c [4];
  undefined4 uStack_2fc;
  undefined *********pppppppppuStack_2f8;
  wchar_t *pwStack_2f4;
  int iStack_2f0;
  undefined *********pppppppppuStack_2ec;
  undefined *********pppppppppuStack_2e8;
  undefined *********pppppppppuStack_2e4;
  undefined *********pppppppppuStack_2e0;
  undefined *********pppppppppuStack_2dc;
  undefined *********pppppppppuStack_2d8;
  undefined *********pppppppppuStack_2d4;
  undefined *********pppppppppuStack_2d0;
  undefined *********pppppppppuStack_2cc;
  undefined *********pppppppppuStack_2c8;
  undefined *********pppppppppuStack_2c4;
  undefined *********pppppppppuStack_2c0;
  undefined *********pppppppppuStack_2bc;
  undefined *********pppppppppuStack_2b8;
  undefined *********pppppppppuStack_2b4;
  undefined *********pppppppppuStack_2b0;
  undefined *********pppppppppuStack_2ac;
  undefined *********pppppppppuStack_2a8;
  undefined *********pppppppppuStack_2a4;
  undefined *********pppppppppuStack_2a0;
  undefined *********pppppppppuStack_29c;
  undefined *********pppppppppuStack_298;
  undefined *********pppppppppuStack_294;
  undefined *********pppppppppuStack_290;
  undefined *********pppppppppuStack_28c;
  undefined *********pppppppppuStack_288;
  undefined *********pppppppppuStack_284;
  undefined *********pppppppppuStack_280;
  undefined *********pppppppppuStack_27c;
  undefined *********pppppppppuStack_278;
  undefined *********pppppppppuStack_274;
  undefined ********ppppppppuStack_270;
  int iStack_26c;
  undefined *********pppppppppuStack_268;
  undefined *********pppppppppuStack_264;
  undefined *********pppppppppuStack_260;
  undefined *********pppppppppuStack_25c;
  undefined *********pppppppppuStack_258;
  undefined *********pppppppppuStack_254;
  undefined *********pppppppppuStack_250;
  undefined *********pppppppppuStack_24c;
  undefined *********pppppppppuStack_248;
  undefined *********pppppppppuStack_244;
  undefined *********pppppppppuStack_240;
  undefined *********pppppppppuStack_23c;
  undefined *********pppppppppuStack_238;
  undefined *********pppppppppuStack_234;
  undefined *********pppppppppuStack_230;
  undefined *********pppppppppuStack_22c;
  undefined *********pppppppppuStack_228;
  undefined *********pppppppppuStack_224;
  undefined *********pppppppppuStack_220;
  undefined *********pppppppppuStack_21c;
  undefined *********pppppppppuStack_218;
  undefined *********pppppppppuStack_214;
  undefined *********pppppppppuStack_210;
  undefined *********pppppppppuStack_20c;
  undefined *********pppppppppuStack_208;
  undefined *********pppppppppuStack_204;
  undefined *********pppppppppuStack_200;
  undefined *********pppppppppuStack_1fc;
  undefined *********pppppppppuStack_1f8;
  undefined *********pppppppppuStack_1f4;
  undefined *********pppppppppuStack_1f0;
  undefined *********pppppppppuStack_1ec;
  undefined *********pppppppppuStack_1e8;
  undefined *********pppppppppuStack_1e4;
  undefined *********pppppppppuStack_1e0;
  undefined *********pppppppppuStack_1dc;
  undefined *********pppppppppuStack_1d8;
  undefined *********pppppppppuStack_1d4;
  undefined *********local_134;
  undefined *********local_130;
  undefined *******local_12c;
  undefined *******local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined *********local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined *********local_108 [7];
  undefined ********local_ec;
  undefined ********local_e8;
  undefined *********local_e4 [9];
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined *********local_b0;
  undefined *********local_ac;
  undefined *********local_a8;
  undefined *********local_a4;
  undefined ********local_a0 [2];
  undefined4 local_98;
  undefined ********local_90 [2];
  undefined4 local_88;
  undefined ********local_80 [4];
  undefined *********local_70;
  undefined *********local_6c;
  undefined *********local_68;
  undefined *********local_64;
  undefined *******local_60;
  undefined ********local_5c;
  undefined *********local_58;
  undefined *********local_54;
  undefined ********local_50;
  undefined *********local_4c;
  undefined *********local_48;
  undefined *********local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined *********local_28;
  undefined *********local_24;
  undefined *********local_20;
  undefined2 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffe30;
  local_8 = &DAT_004024c8;
  local_1c = *(undefined2 *)(param_1 + 0x23);
  ExceptionList = &pvStack_14;
  *(undefined2 *)(param_1 + 0x23) = 0xffff;
  pppppppppuStack_1d8 = (undefined *********)*param_4;
  pppppppppuStack_1d4 = (undefined *********)0x0;
  local_18 = 0;
  local_24 = (undefined *********)0x0;
  local_28 = (undefined *********)0x0;
  local_3c = 0;
  local_40 = 0;
  local_44 = (undefined *********)0x0;
  local_48 = (undefined *********)0x0;
  local_4c = (undefined *********)0x0;
  local_50 = (undefined ********)0x0;
  local_54 = (undefined *********)0x0;
  local_58 = (undefined *********)0x0;
  local_5c = (undefined ********)0x0;
  local_60 = (undefined *******)0x0;
  local_70 = (undefined *********)0x0;
  local_80[0] = (undefined ********)0x0;
  local_90[0] = (undefined ********)0x0;
  local_a0[0] = (undefined ********)0x0;
  local_b0 = (undefined *********)0x0;
  local_c0 = 0;
  local_e4[0] = (undefined *********)0x0;
  local_e8 = (undefined ********)0x0;
  local_ec = (undefined ********)0x0;
  local_108[0] = (undefined *********)0x0;
  local_10c = 0;
  local_110 = 0;
  local_114 = (undefined *********)0x0;
  local_118 = 0;
  local_11c = 0;
  local_120 = 0;
  local_124 = 0;
  local_128 = (undefined *******)0x0;
  local_12c = (undefined *******)0x0;
  local_130 = (undefined *********)0x0;
  local_134 = (undefined *********)0x0;
  pppppppppuStack_1dc = (undefined *********)0x44bd73;
  sVar3 = __vbaObjIs();
  pppppppppuStack_1d8 = (undefined *********)*param_2;
  pppppppppuStack_1d4 = (undefined *********)0x0;
  pppppppppuStack_1dc = (undefined *********)0x44bd8b;
  sVar4 = __vbaObjIs();
  pppppppuVar18 = (undefined *******)__vbaHresultCheckObj_exref;
  if (sVar3 != 0 && sVar4 != 0) {
    pppppppppuStack_1d4 = (undefined *********)0x44bda5;
    pppppppppuStack_1d4 = (undefined *********)rtcErrObj();
    pppppppppuStack_1d8 = (undefined *********)&local_54;
    pppppppppuStack_1dc = (undefined *********)0x44bdb0;
    pppppppppuVar8 = (undefined *********)__vbaObjSet();
    local_98 = 0x80020004;
    local_88 = 0x80020004;
    local_a0[0] = (undefined ********)0xa;
    local_90[0] = (undefined ********)0xa;
    local_b8 = L"UpdateEntryFields recieved neither entry nor structure";
    local_c0 = 8;
    pppppppppuStack_1d4 = (undefined *********)0x44bdf7;
    __vbaVarDup();
    local_a8 = (undefined *********)0x41316c;
    local_b0 = (undefined *********)0x8;
    pppppppppuStack_1d4 = (undefined *********)0x44be1a;
    __vbaVarDup();
    pppppppppuStack_1d4 = local_a0;
    pppppppppuStack_1d8 = local_90;
    pppppppppuStack_1dc = local_80;
    pppppppppuStack_1e0 = (undefined *********)&local_70;
    pppppppppuStack_1e4 = (undefined *********)0x40a;
    pppppppppuStack_1ec = (undefined *********)0x44be3b;
    pppppppppuStack_1e8 = pppppppppuVar8;
    ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppppppuVar8)[0x11])();
    pppppppuVar18 = (undefined *******)__vbaHresultCheckObj_exref;
    if ((int)ppppppppppuVar9 < 0) {
      pppppppppuStack_1d4 = (undefined *********)0x44;
      pppppppppuStack_1d8 = (undefined *********)&DAT_00413af4;
      pppppppppuStack_1e4 = (undefined *********)0x44be52;
      pppppppppuStack_1e0 = (undefined *********)ppppppppppuVar9;
      pppppppppuStack_1dc = pppppppppuVar8;
      __vbaHresultCheckObj();
    }
    pppppppppuStack_1d4 = (undefined *********)0x44be63;
    __vbaFreeObj();
    pppppppppuStack_1d4 = local_a0;
    pppppppppuStack_1d8 = local_90;
    pppppppppuStack_1dc = local_80;
    pppppppppuStack_1e0 = (undefined *********)&local_70;
    pppppppppuStack_1e4 = (undefined *********)0x4;
    pppppppppuStack_1e8 = (undefined *********)0x44be81;
    __vbaFreeVarList();
  }
  pppppppppuStack_1d8 = (undefined *********)*param_4;
  pppppppppuStack_1d4 = (undefined *********)0x0;
  pppppppppuStack_1dc = (undefined *********)0x44be97;
  sVar3 = __vbaObjIs();
  if (sVar3 != 0) {
    pppppppppuStack_1d4 = (undefined *********)&local_54;
    pppppuVar1 = *param_2;
    pppppppppuStack_1dc = (undefined *********)0x44beab;
    pppppppppuStack_1d8 = (undefined *********)pppppuVar1;
    ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppuVar1)[0x11])();
    if ((int)ppppppppppuVar9 < 0) {
      pppppppppuStack_1d4 = (undefined *********)0x44;
      pppppppppuStack_1d8 = (undefined *********)&LAB_0041470c;
      pppppppppuStack_1e4 = (undefined *********)0x44bebc;
      pppppppppuStack_1e0 = (undefined *********)ppppppppppuVar9;
      pppppppppuStack_1dc = (undefined *********)pppppuVar1;
      (*(code *)pppppppuVar18)();
    }
    pppppppppuStack_1d4 = local_54;
    local_54 = (undefined *********)0x0;
    pppppppppuStack_1d8 = (undefined *********)param_4;
    pppppppppuStack_1dc = (undefined *********)0x44bece;
    __vbaObjSet();
  }
  pppppppppuStack_1d4 = (undefined *********)0x0;
  pppppppppuStack_1d8 = (undefined *********)*param_2;
  pppppppppuStack_1dc = (undefined *********)0x44bedc;
  sVar3 = __vbaObjIs();
  if (sVar3 != 0) {
    pppppppppuStack_1d4 = (undefined *********)&DAT_0040888c;
    pppppppppuStack_1d8 = (undefined *********)0x44beec;
    pppppppppuStack_1d4 = (undefined *********)__vbaNew();
    pppppppppuStack_1d8 = (undefined *********)param_2;
    pppppppppuStack_1dc = (undefined *********)0x44bef7;
    __vbaObjSet();
    pppppppppuStack_1d4 = (undefined *********)*param_4;
    pppppuVar1 = *param_2;
    pppppppppuStack_1d8 = (undefined *********)&local_54;
    pppppppppuStack_1dc = (undefined *********)0x44bf06;
    __vbaObjSetAddref();
    pppppppppuStack_1d4 = (undefined *********)&local_54;
    pppppppppuStack_1dc = (undefined *********)0x44bf10;
    pppppppppuStack_1d8 = (undefined *********)pppppuVar1;
    ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppuVar1)[0x12])();
    if ((int)ppppppppppuVar9 < 0) {
      pppppppppuStack_1d4 = (undefined *********)0x48;
      pppppppppuStack_1d8 = (undefined *********)&LAB_0041470c;
      pppppppppuStack_1e4 = (undefined *********)0x44bf21;
      pppppppppuStack_1e0 = (undefined *********)ppppppppppuVar9;
      pppppppppuStack_1dc = (undefined *********)pppppuVar1;
      (*(code *)pppppppuVar18)();
    }
    pppppppppuStack_1d4 = (undefined *********)0x44bf2a;
    __vbaFreeObj();
  }
  pppppppppuStack_1d8 = (undefined *********)local_108;
  pppppppppuStack_1d4 = (undefined *********)*param_2;
  pppppppppuStack_1dc = (undefined *********)0x44bf3d;
  __vbaObjSetAddref();
  pppppppppuStack_1d4 = (undefined *********)&local_54;
  pppppppppuStack_1d8 = local_108[0];
  pppppppppuStack_1dc = (undefined *********)0x44bf4d;
  iVar10 = (*(code *)(*local_108[0])[0x11])();
  if (iVar10 < 0) {
    pppppppppuStack_1dc = (undefined *********)0x44;
    pppppppppuStack_1e0 = (undefined *********)&LAB_0041470c;
    pppppppppuStack_1e4 = local_108[0];
    pppppppppuStack_1ec = (undefined *********)0x44bf64;
    pppppppppuStack_1e8 = (undefined *********)iVar10;
    (*(code *)pppppppuVar18)();
  }
  pppppppppuVar8 = local_54;
  pppppppppuStack_1dc = (undefined *********)&local_58;
  pppppppppuStack_1e0 = local_54;
  pppppppppuStack_1e4 = (undefined *********)0x44bf73;
  iVar10 = (*(code *)(*local_54)[0x1b])();
  if (iVar10 < 0) {
    pppppppppuStack_1e4 = (undefined *********)0x6c;
    pppppppppuStack_1e8 = (undefined *********)&LAB_004133f8;
    pppppppppuStack_1ec = pppppppppuVar8;
    pppppppppuStack_1f4 = (undefined *********)0x44bf84;
    pppppppppuStack_1f0 = (undefined *********)iVar10;
    (*(code *)pppppppuVar18)();
  }
  pppppppppuStack_1e8 = (undefined *********)&local_10c;
  pppppppppuStack_1e4 = local_58;
  local_58 = (undefined *********)0x0;
  pppppppppuStack_1ec = (undefined *********)0x44bf9c;
  pppppppppuStack_1e4 = (undefined *********)__vbaObjSet();
  pppppppppuStack_1e8 = (undefined *********)&local_48;
  pppppppppuStack_1ec = (undefined *********)&local_110;
  pppppppppuStack_1f0 = (undefined *********)&DAT_00414268;
  pppppppppuStack_1f4 = (undefined *********)0x44bfb3;
  iVar10 = __vbaForEachCollObj();
  pppppppppuStack_1e4 = (undefined *********)0x44bfbe;
  __vbaFreeObj();
  do {
    if (iVar10 == 0) {
      pppppppppuStack_1e8 = (undefined *********)local_108;
      pppppppppuStack_1e4 = (undefined *********)0x0;
      pppppppppuStack_1ec = (undefined *********)0x44e0c5;
      __vbaObjSetAddref();
      pppppppppuStack_1e4 = (undefined *********)&LAB_0044e1b1;
      *(undefined2 *)(param_1 + 0x23) = local_1c;
      pppppppppuStack_1e8 = (undefined *********)&local_134;
      pppppppppuStack_1ec = (undefined *********)&local_130;
      pppppppppuStack_1f0 = (undefined *********)&local_12c;
      pppppppppuStack_1f4 = (undefined *********)&local_128;
      pppppppppuStack_1f8 = (undefined *********)&local_124;
      pppppppppuStack_1fc = (undefined *********)&local_120;
      pppppppppuStack_200 = (undefined *********)&local_11c;
      pppppppppuStack_204 = (undefined *********)&local_118;
      pppppppppuStack_208 = (undefined *********)&local_114;
      pppppppppuStack_20c = (undefined *********)&local_110;
      pppppppppuStack_210 = (undefined *********)&local_10c;
      pppppppppuStack_214 = (undefined *********)local_108;
      pppppppppuStack_218 = (undefined *********)0xc;
      pppppppppuStack_21c = (undefined *********)0x44e180;
      __vbaFreeObjList();
      pppppppppuStack_1e8 = (undefined *********)0x44e18e;
      __vbaFreeObj();
      pppppppppuStack_1e8 = (undefined *********)0x44e193;
      __vbaFreeObj();
      pppppppppuStack_1e8 = (undefined *********)0x44e198;
      __vbaFreeObj();
      pppppppppuStack_1e8 = (undefined *********)0x44e1a1;
      __vbaFreeVar();
      pppppppppuStack_1e4 = (undefined *********)0x44e1a6;
      __vbaFreeObj();
      pppppppppuStack_1e4 = (undefined *********)0x44e1ab;
      __vbaFreeObj();
      pppppppppuStack_1e4 = (undefined *********)0x44e1b0;
      __vbaFreeObj();
      return;
    }
    pppppppppuStack_1e4 = (undefined *********)&local_54;
    pppppppppuStack_1e8 = local_108[0];
    pppppppppuStack_1ec = (undefined *********)0x44bfd6;
    pppppppppuStack_1f8 = (undefined *********)(*(code *)(*local_108[0])[0xf])();
    if ((int)pppppppppuStack_1f8 < 0) {
      pppppppppuStack_1ec = (undefined *********)0x3c;
      pppppppppuStack_1f0 = (undefined *********)&LAB_0041470c;
      pppppppppuStack_1f4 = local_108[0];
      pppppppppuStack_1fc = (undefined *********)0x44bfed;
      (*(code *)pppppppuVar18)();
    }
    pppppppppuVar8 = local_54;
    pppppppppuStack_1ec = (undefined *********)&local_58;
    pppppppppuStack_1f0 = (undefined *********)&local_48;
    pppppppppuStack_1f4 = local_54;
    pppppppppuStack_1f8 = (undefined *********)0x44c000;
    ppppppppppuVar9 = (undefined **********)(*(code *)(*local_54)[0xb])();
    if ((int)ppppppppppuVar9 < 0) {
      pppppppppuStack_1f8 = (undefined *********)0x2c;
      pppppppppuStack_1fc = (undefined *********)&DAT_00414ba4;
      pppppppppuStack_200 = pppppppppuVar8;
      pppppppppuStack_208 = (undefined *********)0x44c011;
      pppppppppuStack_204 = (undefined *********)ppppppppppuVar9;
      (*(code *)pppppppuVar18)();
    }
    pppppppppuStack_1f8 = local_58;
    local_58 = (undefined *********)0x0;
    pppppppppuStack_1fc = (undefined *********)&local_28;
    pppppppppuStack_200 = (undefined *********)0x44c026;
    __vbaObjSet();
    pppppppppuStack_1f8 = (undefined *********)0x44c02f;
    __vbaFreeObj();
    pppppppppuStack_1f8 = (undefined *********)&local_54;
    pppppppppuStack_1fc = local_108[0];
    pppppppppuStack_200 = (undefined *********)0x44c03f;
    ppppppppppuVar9 = (undefined **********)(*(code *)(*local_108[0])[0x11])();
    if ((int)ppppppppppuVar9 < 0) {
      pppppppppuStack_200 = (undefined *********)0x44;
      pppppppppuStack_204 = (undefined *********)&LAB_0041470c;
      pppppppppuStack_208 = local_108[0];
      pppppppppuStack_210 = (undefined *********)0x44c056;
      pppppppppuStack_20c = (undefined *********)ppppppppppuVar9;
      (*(code *)pppppppuVar18)();
    }
    pppppppppuVar8 = local_54;
    pppppppppuStack_200 = (undefined *********)&local_58;
    pppppppppuStack_204 = local_54;
    pppppppppuStack_208 = (undefined *********)0x44c065;
    ppppppppppuVar9 = (undefined **********)(*(code *)(*local_54)[0x19])();
    if ((int)ppppppppppuVar9 < 0) {
      pppppppppuStack_1e4 = (undefined *********)0x64;
      pppppppppuStack_1e8 = (undefined *********)&LAB_004133f8;
      pppppppppuStack_1ec = pppppppppuVar8;
      pppppppppuStack_1f4 = (undefined *********)0x44c076;
      pppppppppuStack_1f0 = (undefined *********)ppppppppppuVar9;
      (*(code *)pppppppuVar18)();
    }
    pppppppppuStack_1e4 = local_58;
    pppppppppuStack_1e8 = local_48;
    pppppppppuStack_1ec = (undefined *********)0x44c084;
    sVar3 = __vbaObjIs();
    pppppppppuStack_1e4 = (undefined *********)&local_58;
    pppppppppuStack_1e8 = (undefined *********)&local_54;
    pppppppppuStack_1ec = (undefined *********)0x2;
    pppppppppuStack_1f0 = (undefined *********)0x44c099;
    __vbaFreeObjList();
    if (sVar3 != -1) {
      pppppppppuStack_1e4 = (undefined *********)&local_54;
      pppppppppuStack_1e8 = local_48;
      pppppppppuStack_1ec = (undefined *********)0x44c0b2;
      ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1c])();
      if ((int)ppppppppppuVar9 < 0) {
        pppppppppuStack_1ec = (undefined *********)0x70;
        pppppppppuStack_1f0 = (undefined *********)&DAT_00414268;
        pppppppppuStack_1f4 = local_48;
        pppppppppuStack_1fc = (undefined *********)0x44c0c6;
        pppppppppuStack_1f8 = (undefined *********)ppppppppppuVar9;
        (*(code *)pppppppuVar18)();
      }
      pppppppppuStack_1ec = (undefined *********)0x0;
      pppppppppuStack_1f0 = local_54;
      pppppppppuStack_1f4 = (undefined *********)0x44c0d2;
      sVar3 = __vbaObjIs();
      pppppppppuStack_1ec = (undefined *********)0x44c0de;
      __vbaFreeObj();
      if (sVar3 != 0) {
        pppppppppuStack_1ec = (undefined *********)local_e4;
        pppppppppuStack_1f0 = local_48;
        pppppppppuStack_1f4 = (undefined *********)0x44c0f7;
        ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0xf])();
        if ((int)ppppppppppuVar9 < 0) {
          pppppppppuStack_1f4 = (undefined *********)0x3c;
          pppppppppuStack_1f8 = (undefined *********)&DAT_00414268;
          pppppppppuStack_1fc = local_48;
          pppppppppuStack_204 = (undefined *********)0x44c10b;
          pppppppppuStack_200 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        if ((short)local_e4[0] != 0) {
          if (DAT_00480244 == (undefined **********)0x0) {
            pppppppppuStack_1f4 = (undefined *********)&DAT_00480244;
            pppppppppuStack_1f8 = (undefined *********)&DAT_00413b34;
            pppppppppuStack_1fc = (undefined *********)0x44c132;
            __vbaNew2();
          }
          ppppppppppuVar9 = DAT_00480244;
          pppppppppuStack_1f4 = (undefined *********)param_1;
          pppppppppuStack_1f8 = (undefined *********)0x44c144;
          pppppppppuStack_1f8 = (undefined *********)(*(code *)(*param_1)[0xcb])();
          pppppppppuStack_1fc = (undefined *********)&local_58;
          pppppppppuStack_200 = (undefined *********)0x44c14f;
          ppppppppppuVar11 = (undefined **********)__vbaObjSet();
          pppppppppuStack_1f8 = (undefined *********)param_1;
          pppppppppuStack_1fc = (undefined *********)0x44c15a;
          pppppppppuStack_1fc = (undefined *********)(*(code *)(*param_1)[0xcb])();
          pppppppppuStack_200 = (undefined *********)&local_54;
          pppppppppuStack_204 = (undefined *********)0x44c165;
          ppppppppppuVar12 = (undefined **********)__vbaObjSet();
          pppppppppuStack_1fc = (undefined *********)local_e4;
          pppppppppuStack_204 = (undefined *********)0x44c174;
          pppppppppuStack_200 = (undefined *********)ppppppppppuVar12;
          pppppppppuStack_210 = (undefined *********)(*(code *)(*ppppppppppuVar12)[0x13])();
          if ((int)pppppppppuStack_210 < 0) {
            pppppppppuStack_204 = (undefined *********)0x4c;
            pppppppppuStack_208 = (undefined *********)&DAT_004182e4;
            pppppppppuStack_214 = (undefined *********)0x44c189;
            pppppppppuStack_20c = (undefined *********)ppppppppppuVar12;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_204 = &local_5c;
          pppppppppuStack_208 = local_e4[0];
          pppppppppuStack_210 = (undefined *********)0x44c19a;
          pppppppppuStack_20c = (undefined *********)ppppppppppuVar11;
          ppppppppppuVar12 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
          if ((int)ppppppppppuVar12 < 0) {
            pppppppppuStack_210 = (undefined *********)0x40;
            pppppppppuStack_214 = (undefined *********)&DAT_004182e4;
            pppppppppuStack_220 = (undefined *********)0x44c1af;
            pppppppppuStack_21c = (undefined *********)ppppppppppuVar12;
            pppppppppuStack_218 = (undefined *********)ppppppppppuVar11;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_214 = (undefined *********)&local_60;
          pppppppppuStack_210 = (undefined *********)local_5c;
          local_5c = (undefined ********)0x0;
          pppppppppuVar8 = *ppppppppppuVar9;
          pppppppppuStack_218 = (undefined *********)0x44c1c6;
          pppppppppuStack_210 = (undefined *********)__vbaObjSet();
          pppppppppuStack_214 = (undefined *********)ppppppppppuVar9;
          pppppppppuStack_218 = (undefined *********)0x44c1cb;
          pppppppppuStack_224 = (undefined *********)(*(code *)pppppppppuVar8[3])();
          if ((int)pppppppppuStack_224 < 0) {
            pppppppppuStack_218 = (undefined *********)0xc;
            pppppppppuStack_21c = (undefined *********)&DAT_00413b24;
            pppppppppuStack_220 = (undefined *********)ppppppppppuVar9;
            pppppppppuStack_228 = (undefined *********)0x44c1e0;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_218 = (undefined *********)&local_60;
          pppppppppuStack_21c = (undefined *********)&local_58;
          pppppppppuStack_220 = (undefined *********)&local_54;
          pppppppppuStack_224 = (undefined *********)0x3;
          pppppppppuStack_228 = (undefined *********)0x44c1f4;
          __vbaFreeObjList();
          pppppppppuStack_218 = (undefined *********)param_1;
          pppppppppuStack_21c = (undefined *********)0x44c203;
          pppppppppuStack_21c = (undefined *********)(*(code *)(*param_1)[0xcb])();
          pppppppppuStack_220 = (undefined *********)&local_58;
          pppppppppuStack_224 = (undefined *********)0x44c210;
          ppppppppppuVar11 = (undefined **********)__vbaObjSet();
          pppppppppuStack_21c = (undefined *********)param_1;
          pppppppppuStack_220 = (undefined *********)0x44c21b;
          pppppppppuStack_220 = (undefined *********)(*(code *)(*param_1)[0xcb])();
          pppppppppuStack_224 = (undefined *********)&local_54;
          pppppppppuStack_228 = (undefined *********)0x44c222;
          ppppppppppuVar12 = (undefined **********)__vbaObjSet();
          pppppppppuStack_220 = (undefined *********)local_e4;
          pppppppppuStack_228 = (undefined *********)0x44c231;
          pppppppppuStack_224 = (undefined *********)ppppppppppuVar12;
          ppppppppppuVar13 = (undefined **********)(*(code *)(*ppppppppppuVar12)[0x13])();
          ppppppppppuVar9 = (undefined **********)__vbaHresultCheckObj_exref;
          uVar5 = extraout_var_02;
          if ((int)ppppppppppuVar13 < 0) {
            pppppppppuStack_228 = (undefined *********)0x4c;
            pppppppppuStack_22c = (undefined *********)&DAT_004182e4;
            pppppppppuStack_238 = (undefined *********)0x44c248;
            pppppppppuStack_234 = (undefined *********)ppppppppppuVar13;
            pppppppppuStack_230 = (undefined *********)ppppppppppuVar12;
            __vbaHresultCheckObj();
            uVar5 = extraout_var_03;
          }
          pppppppppuStack_228 = &local_5c;
          pppppppppuStack_22c = (undefined *********)CONCAT22(uVar5,(short)local_e4[0] + -1);
          pppppppuVar18 = param_1;
          if (SBORROW2((short)local_e4[0],1)) goto LAB_0044e1c6;
          pppppppppuStack_234 = (undefined *********)0x44c26c;
          pppppppppuStack_230 = (undefined *********)ppppppppppuVar11;
          ppppppppppuVar12 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
          if ((int)ppppppppppuVar12 < 0) {
            pppppppppuStack_234 = (undefined *********)0x40;
            pppppppppuStack_238 = (undefined *********)&DAT_004182e4;
            pppppppppuStack_244 = (undefined *********)0x44c27d;
            pppppppppuStack_240 = (undefined *********)ppppppppppuVar12;
            pppppppppuStack_23c = (undefined *********)ppppppppppuVar11;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_234 = (undefined *********)&DAT_0041352c;
          pppppppppuStack_238 = (undefined *********)local_5c;
          pppppppppuStack_23c = (undefined *********)0x44c28c;
          pppppppppuStack_234 = (undefined *********)__vbaCastObj();
          pppppppppuStack_238 = (undefined *********)&local_60;
          pppppppppuStack_23c = (undefined *********)0x44c297;
          __vbaObjSet();
          pppppppppuStack_234 = (undefined *********)&local_60;
          pppppppppuStack_238 = local_48;
          pppppppppuStack_23c = (undefined *********)0x44c2a4;
          pppppppppuStack_248 = (undefined *********)(*(code *)(*local_48)[0x1d])();
          if ((int)pppppppppuStack_248 < 0) {
            pppppppppuStack_23c = (undefined *********)0x74;
            pppppppppuStack_240 = (undefined *********)&DAT_00414268;
            pppppppppuStack_244 = local_48;
            pppppppppuStack_24c = (undefined *********)0x44c2b8;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_23c = (undefined *********)&local_60;
          pppppppppuStack_240 = &local_5c;
          pppppppppuStack_244 = (undefined *********)&local_58;
          pppppppppuStack_248 = (undefined *********)&local_54;
          pppppppppuStack_24c = (undefined *********)0x4;
          pppppppppuStack_250 = (undefined *********)0x44c2d0;
          __vbaFreeObjList();
LAB_0044c680:
          pppppppppuStack_23c = (undefined *********)0x44c68b;
          __vbaStrCopy();
          pppppppppuStack_234 = (undefined *********)&local_54;
          pppppppppuStack_238 = local_48;
          pppppppppuStack_23c = (undefined *********)0x44c698;
          ppppppppppuVar11 = (undefined **********)(*(code *)(*local_48)[0x1c])();
          if ((int)ppppppppppuVar11 < 0) {
            pppppppppuStack_23c = (undefined *********)0x70;
            pppppppppuStack_240 = (undefined *********)&DAT_00414268;
            pppppppppuStack_244 = local_48;
            pppppppppuStack_24c = (undefined *********)0x44c6ac;
            pppppppppuStack_248 = (undefined *********)ppppppppppuVar11;
            (*(code *)ppppppppppuVar9)();
          }
          pppppppppuStack_240 = (undefined *********)&local_58;
          pppppppppuStack_23c = local_54;
          local_54 = (undefined *********)0x0;
          pppppppppuStack_244 = (undefined *********)0x44c6c1;
          __vbaObjSet();
          pppppppppuStack_248 = (undefined *********)param_1[0x1e];
          pppppppppuStack_23c = &local_5c;
          pppppppppuStack_240 = (undefined *********)&local_4c;
          pppppppppuStack_244 = (undefined *********)&local_58;
          pppppppppuStack_24c = (undefined *********)0x44c6d6;
          ppppppppppuVar11 = (undefined **********)(*(code *)(*pppppppppuStack_248)[7])();
          if ((int)ppppppppppuVar11 < 0) {
            pppppppppuStack_1f4 = (undefined *********)param_1[0x1e];
            pppppppppuStack_1ec = (undefined *********)0x1c;
            pppppppppuStack_1f0 = (undefined *********)&DAT_0041803c;
            pppppppppuStack_1fc = (undefined *********)0x44c6ea;
            pppppppppuStack_1f8 = (undefined *********)ppppppppppuVar11;
            (*(code *)ppppppppppuVar9)();
          }
          pppppppppuStack_1ec = (undefined *********)0x44c6f3;
          __vbaFreeStr();
          pppppppppuStack_1ec = &local_5c;
          pppppppppuStack_1f0 = (undefined *********)&local_58;
          pppppppppuStack_1f4 = (undefined *********)0x2;
          pppppppppuStack_1f8 = (undefined *********)0x44c703;
          __vbaFreeObjList();
          pppppppuVar18 = (undefined *******)__vbaHresultCheckObj_exref;
          goto LAB_0044c70c;
        }
        pppppppppuStack_1f4 = (undefined *********)local_e4;
        pppppppppuStack_1f8 = local_48;
        pppppppppuStack_1fc = (undefined *********)0x44c2e8;
        ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[9])();
        if ((int)ppppppppppuVar9 < 0) {
          pppppppppuStack_1fc = (undefined *********)0x24;
          pppppppppuStack_200 = (undefined *********)&DAT_00414268;
          pppppppppuStack_204 = local_48;
          pppppppppuStack_20c = (undefined *********)0x44c2fc;
          pppppppppuStack_208 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        if ((short)local_e4[0] == 0) {
          if (DAT_00480244 == (undefined **********)0x0) {
            pppppppppuStack_1fc = (undefined *********)&DAT_00480244;
            pppppppppuStack_200 = (undefined *********)&DAT_00413b34;
            pppppppppuStack_204 = (undefined *********)0x44c4d6;
            __vbaNew2();
          }
          ppppppppppuVar9 = DAT_00480244;
          pppppppppuStack_1fc = (undefined *********)param_1;
          pppppppppuStack_200 = (undefined *********)0x44c4e8;
          pppppppppuStack_200 = (undefined *********)(*(code *)(*param_1)[0xce])();
          pppppppppuStack_204 = (undefined *********)&local_58;
          pppppppppuStack_208 = (undefined *********)0x44c4f3;
          ppppppppppuVar11 = (undefined **********)__vbaObjSet();
          pppppppppuStack_200 = (undefined *********)param_1;
          pppppppppuStack_204 = (undefined *********)0x44c4fe;
          pppppppppuStack_204 = (undefined *********)(*(code *)(*param_1)[0xce])();
          pppppppppuStack_208 = (undefined *********)&local_54;
          pppppppppuStack_20c = (undefined *********)0x44c509;
          ppppppppppuVar12 = (undefined **********)__vbaObjSet();
          pppppppppuStack_204 = (undefined *********)local_e4;
          pppppppppuStack_20c = (undefined *********)0x44c518;
          pppppppppuStack_208 = (undefined *********)ppppppppppuVar12;
          pppppppppuStack_218 = (undefined *********)(*(code *)(*ppppppppppuVar12)[0x13])();
          if ((int)pppppppppuStack_218 < 0) {
            pppppppppuStack_20c = (undefined *********)0x4c;
            pppppppppuStack_210 = (undefined *********)&DAT_004182e4;
            pppppppppuStack_21c = (undefined *********)0x44c52d;
            pppppppppuStack_214 = (undefined *********)ppppppppppuVar12;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_20c = &local_5c;
          pppppppppuStack_210 = local_e4[0];
          pppppppppuStack_218 = (undefined *********)0x44c53e;
          pppppppppuStack_214 = (undefined *********)ppppppppppuVar11;
          ppppppppppuVar12 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
          if ((int)ppppppppppuVar12 < 0) {
            pppppppppuStack_218 = (undefined *********)0x40;
            pppppppppuStack_21c = (undefined *********)&DAT_004182e4;
            pppppppppuStack_228 = (undefined *********)0x44c553;
            pppppppppuStack_224 = (undefined *********)ppppppppppuVar12;
            pppppppppuStack_220 = (undefined *********)ppppppppppuVar11;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_21c = (undefined *********)&local_60;
          pppppppppuStack_218 = (undefined *********)local_5c;
          local_5c = (undefined ********)0x0;
          pppppppppuVar8 = *ppppppppppuVar9;
          pppppppppuStack_220 = (undefined *********)0x44c56a;
          pppppppppuStack_218 = (undefined *********)__vbaObjSet();
          pppppppppuStack_21c = (undefined *********)ppppppppppuVar9;
          pppppppppuStack_220 = (undefined *********)0x44c56f;
          pppppppppuStack_22c = (undefined *********)(*(code *)pppppppppuVar8[3])();
          if ((int)pppppppppuStack_22c < 0) {
            pppppppppuStack_220 = (undefined *********)0xc;
            pppppppppuStack_224 = (undefined *********)&DAT_00413b24;
            pppppppppuStack_228 = (undefined *********)ppppppppppuVar9;
            pppppppppuStack_230 = (undefined *********)0x44c584;
            __vbaHresultCheckObj();
          }
          pppppppuVar18 = (undefined *******)__vbaFreeObjList_exref;
          pppppppppuStack_220 = (undefined *********)&local_60;
          pppppppppuStack_224 = (undefined *********)&local_58;
          pppppppppuStack_228 = (undefined *********)&local_54;
          pppppppppuStack_22c = (undefined *********)0x3;
          pppppppppuStack_230 = (undefined *********)0x44c59a;
          __vbaFreeObjList();
          pppppppppuStack_220 = (undefined *********)param_1;
          pppppppppuStack_224 = (undefined *********)0x44c5a9;
          pppppppppuStack_224 = (undefined *********)(*(code *)(*param_1)[0xce])();
          pppppppppuStack_228 = (undefined *********)&local_58;
          pppppppppuStack_22c = (undefined *********)0x44c5b4;
          ppppppppppuVar11 = (undefined **********)__vbaObjSet();
          pppppppppuStack_224 = (undefined *********)param_1;
          pppppppppuStack_228 = (undefined *********)0x44c5bf;
          pppppppppuStack_228 = (undefined *********)(*(code *)(*param_1)[0xce])();
          pppppppppuStack_22c = (undefined *********)&local_54;
          pppppppppuStack_230 = (undefined *********)0x44c5ca;
          ppppppppppuVar12 = (undefined **********)__vbaObjSet();
          pppppppppuStack_228 = (undefined *********)local_e4;
          pppppppppuStack_230 = (undefined *********)0x44c5d9;
          pppppppppuStack_22c = (undefined *********)ppppppppppuVar12;
          ppppppppppuVar13 = (undefined **********)(*(code *)(*ppppppppppuVar12)[0x13])();
          ppppppppppuVar9 = (undefined **********)__vbaHresultCheckObj_exref;
          uVar5 = extraout_var_00;
          if ((int)ppppppppppuVar13 < 0) {
            pppppppppuStack_228 = (undefined *********)0x4c;
            pppppppppuStack_22c = (undefined *********)&DAT_004182e4;
            pppppppppuStack_238 = (undefined *********)0x44c5f0;
            pppppppppuStack_234 = (undefined *********)ppppppppppuVar13;
            pppppppppuStack_230 = (undefined *********)ppppppppppuVar12;
            __vbaHresultCheckObj();
            uVar5 = extraout_var_01;
          }
          pppppppppuStack_228 = &local_5c;
          pppppppppuStack_22c = (undefined *********)CONCAT22(uVar5,(short)local_e4[0] + -1);
          if (!SBORROW2((short)local_e4[0],1)) {
            pppppppppuStack_234 = (undefined *********)0x44c614;
            pppppppppuStack_230 = (undefined *********)ppppppppppuVar11;
            ppppppppppuVar9 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
            if ((int)ppppppppppuVar9 < 0) {
              pppppppppuStack_234 = (undefined *********)0x40;
              pppppppppuStack_238 = (undefined *********)&DAT_004182e4;
              pppppppppuStack_244 = (undefined *********)0x44c625;
              pppppppppuStack_240 = (undefined *********)ppppppppppuVar9;
              pppppppppuStack_23c = (undefined *********)ppppppppppuVar11;
              __vbaHresultCheckObj();
            }
            pppppppppuStack_234 = (undefined *********)&DAT_0041352c;
            pppppppppuStack_238 = (undefined *********)local_5c;
            pppppppppuStack_23c = (undefined *********)0x44c634;
            pppppppppuStack_234 = (undefined *********)__vbaCastObj();
            pppppppppuStack_238 = (undefined *********)&local_60;
            pppppppppuStack_23c = (undefined *********)0x44c63f;
            __vbaObjSet();
            pppppppppuStack_234 = (undefined *********)&local_60;
            pppppppppuStack_238 = local_48;
            pppppppppuStack_23c = (undefined *********)0x44c64c;
            pppppppppuStack_248 = (undefined *********)(*(code *)(*local_48)[0x1d])();
            if ((int)pppppppppuStack_248 < 0) {
              pppppppppuStack_23c = (undefined *********)0x74;
              pppppppppuStack_240 = (undefined *********)&DAT_00414268;
              pppppppppuStack_244 = local_48;
              pppppppppuStack_24c = (undefined *********)0x44c660;
              __vbaHresultCheckObj();
            }
            goto LAB_0044c670;
          }
        }
        else {
          if (DAT_00480244 == (undefined **********)0x0) {
            pppppppppuStack_1fc = (undefined *********)&DAT_00480244;
            pppppppppuStack_200 = (undefined *********)&DAT_00413b34;
            pppppppppuStack_204 = (undefined *********)0x44c323;
            __vbaNew2();
          }
          ppppppppppuVar9 = DAT_00480244;
          pppppppppuStack_1fc = (undefined *********)param_1;
          pppppppppuStack_200 = (undefined *********)0x44c335;
          pppppppppuStack_200 = (undefined *********)(*(code *)(*param_1)[0xd2])();
          pppppppppuStack_204 = (undefined *********)&local_58;
          pppppppppuStack_208 = (undefined *********)0x44c340;
          ppppppppppuVar11 = (undefined **********)__vbaObjSet();
          pppppppppuStack_200 = (undefined *********)param_1;
          pppppppppuStack_204 = (undefined *********)0x44c34b;
          pppppppppuStack_204 = (undefined *********)(*(code *)(*param_1)[0xd2])();
          pppppppppuStack_208 = (undefined *********)&local_54;
          pppppppppuStack_20c = (undefined *********)0x44c356;
          ppppppppppuVar12 = (undefined **********)__vbaObjSet();
          pppppppppuStack_204 = (undefined *********)local_e4;
          pppppppppuStack_20c = (undefined *********)0x44c365;
          pppppppppuStack_208 = (undefined *********)ppppppppppuVar12;
          pppppppppuStack_218 = (undefined *********)(*(code *)(*ppppppppppuVar12)[0x13])();
          if ((int)pppppppppuStack_218 < 0) {
            pppppppppuStack_20c = (undefined *********)0x4c;
            pppppppppuStack_210 = (undefined *********)&DAT_004182e4;
            pppppppppuStack_21c = (undefined *********)0x44c37a;
            pppppppppuStack_214 = (undefined *********)ppppppppppuVar12;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_20c = &local_5c;
          pppppppppuStack_210 = local_e4[0];
          pppppppppuStack_218 = (undefined *********)0x44c38b;
          pppppppppuStack_214 = (undefined *********)ppppppppppuVar11;
          ppppppppppuVar12 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
          if ((int)ppppppppppuVar12 < 0) {
            pppppppppuStack_218 = (undefined *********)0x40;
            pppppppppuStack_21c = (undefined *********)&DAT_004182e4;
            pppppppppuStack_228 = (undefined *********)0x44c3a0;
            pppppppppuStack_224 = (undefined *********)ppppppppppuVar12;
            pppppppppuStack_220 = (undefined *********)ppppppppppuVar11;
            __vbaHresultCheckObj();
          }
          pppppppppuStack_21c = (undefined *********)&local_60;
          pppppppppuStack_218 = (undefined *********)local_5c;
          local_5c = (undefined ********)0x0;
          pppppppppuVar8 = *ppppppppppuVar9;
          pppppppppuStack_220 = (undefined *********)0x44c3b7;
          pppppppppuStack_218 = (undefined *********)__vbaObjSet();
          pppppppppuStack_21c = (undefined *********)ppppppppppuVar9;
          pppppppppuStack_220 = (undefined *********)0x44c3bc;
          pppppppppuStack_22c = (undefined *********)(*(code *)pppppppppuVar8[3])();
          if ((int)pppppppppuStack_22c < 0) {
            pppppppppuStack_220 = (undefined *********)0xc;
            pppppppppuStack_224 = (undefined *********)&DAT_00413b24;
            pppppppppuStack_228 = (undefined *********)ppppppppppuVar9;
            pppppppppuStack_230 = (undefined *********)0x44c3d1;
            __vbaHresultCheckObj();
          }
          pppppppuVar18 = (undefined *******)__vbaFreeObjList_exref;
          pppppppppuStack_220 = (undefined *********)&local_60;
          pppppppppuStack_224 = (undefined *********)&local_58;
          pppppppppuStack_228 = (undefined *********)&local_54;
          pppppppppuStack_22c = (undefined *********)0x3;
          pppppppppuStack_230 = (undefined *********)0x44c3e7;
          __vbaFreeObjList();
          pppppppppuStack_220 = (undefined *********)param_1;
          pppppppppuStack_224 = (undefined *********)0x44c3f6;
          pppppppppuStack_224 = (undefined *********)(*(code *)(*param_1)[0xd2])();
          pppppppppuStack_228 = (undefined *********)&local_58;
          pppppppppuStack_22c = (undefined *********)0x44c401;
          ppppppppppuVar11 = (undefined **********)__vbaObjSet();
          pppppppppuStack_224 = (undefined *********)param_1;
          pppppppppuStack_228 = (undefined *********)0x44c40c;
          pppppppppuStack_228 = (undefined *********)(*(code *)(*param_1)[0xd2])();
          pppppppppuStack_22c = (undefined *********)&local_54;
          pppppppppuStack_230 = (undefined *********)0x44c417;
          ppppppppppuVar12 = (undefined **********)__vbaObjSet();
          pppppppppuStack_228 = (undefined *********)local_e4;
          pppppppppuStack_230 = (undefined *********)0x44c426;
          pppppppppuStack_22c = (undefined *********)ppppppppppuVar12;
          ppppppppppuVar13 = (undefined **********)(*(code *)(*ppppppppppuVar12)[0x13])();
          ppppppppppuVar9 = (undefined **********)__vbaHresultCheckObj_exref;
          uVar5 = extraout_var_04;
          if ((int)ppppppppppuVar13 < 0) {
            pppppppppuStack_228 = (undefined *********)0x4c;
            pppppppppuStack_22c = (undefined *********)&DAT_004182e4;
            pppppppppuStack_238 = (undefined *********)0x44c43d;
            pppppppppuStack_234 = (undefined *********)ppppppppppuVar13;
            pppppppppuStack_230 = (undefined *********)ppppppppppuVar12;
            __vbaHresultCheckObj();
            uVar5 = extraout_var_05;
          }
          pppppppppuStack_228 = &local_5c;
          pppppppppuStack_22c = (undefined *********)CONCAT22(uVar5,(short)local_e4[0] + -1);
          if (!SBORROW2((short)local_e4[0],1)) {
            pppppppppuStack_234 = (undefined *********)0x44c461;
            pppppppppuStack_230 = (undefined *********)ppppppppppuVar11;
            ppppppppppuVar9 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
            if ((int)ppppppppppuVar9 < 0) {
              pppppppppuStack_234 = (undefined *********)0x40;
              pppppppppuStack_238 = (undefined *********)&DAT_004182e4;
              pppppppppuStack_244 = (undefined *********)0x44c472;
              pppppppppuStack_240 = (undefined *********)ppppppppppuVar9;
              pppppppppuStack_23c = (undefined *********)ppppppppppuVar11;
              __vbaHresultCheckObj();
            }
            pppppppppuStack_234 = (undefined *********)&DAT_0041352c;
            pppppppppuStack_238 = (undefined *********)local_5c;
            pppppppppuStack_23c = (undefined *********)0x44c481;
            pppppppppuStack_234 = (undefined *********)__vbaCastObj();
            pppppppppuStack_238 = (undefined *********)&local_60;
            pppppppppuStack_23c = (undefined *********)0x44c48c;
            __vbaObjSet();
            pppppppppuStack_234 = (undefined *********)&local_60;
            pppppppppuStack_238 = local_48;
            pppppppppuStack_23c = (undefined *********)0x44c499;
            pppppppppuStack_248 = (undefined *********)(*(code *)(*local_48)[0x1d])();
            if ((int)pppppppppuStack_248 < 0) {
              pppppppppuStack_23c = (undefined *********)0x74;
              pppppppppuStack_240 = (undefined *********)&DAT_00414268;
              pppppppppuStack_244 = local_48;
              pppppppppuStack_24c = (undefined *********)0x44c4ad;
              __vbaHresultCheckObj();
            }
LAB_0044c670:
            pppppppppuStack_23c = (undefined *********)&local_60;
            pppppppppuStack_240 = &local_5c;
            pppppppppuStack_244 = (undefined *********)&local_58;
            pppppppppuStack_248 = (undefined *********)&local_54;
            pppppppppuStack_24c = (undefined *********)0x4;
            pppppppppuStack_250 = (undefined *********)0x44c674;
            (*(code *)pppppppuVar18)();
            ppppppppppuVar9 = (undefined **********)__vbaHresultCheckObj_exref;
            goto LAB_0044c680;
          }
        }
        goto LAB_0044e1c6;
      }
LAB_0044c70c:
      pppppppppuStack_1ec = (undefined *********)&local_54;
      pppppppppuStack_1f0 = local_48;
      pppppppppuStack_1f4 = (undefined *********)0x44c719;
      ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1c])();
      if ((int)ppppppppppuVar9 < 0) {
        pppppppppuStack_1f4 = (undefined *********)0x70;
        pppppppppuStack_1f8 = (undefined *********)&DAT_00414268;
        pppppppppuStack_1fc = local_48;
        pppppppppuStack_204 = (undefined *********)0x44c72d;
        pppppppppuStack_200 = (undefined *********)ppppppppppuVar9;
        (*(code *)pppppppuVar18)();
      }
      pppppppppuStack_1f8 = (undefined *********)&local_114;
      pppppppppuStack_1f4 = local_54;
      local_54 = (undefined *********)0x0;
      pppppppppuStack_1fc = (undefined *********)0x44c745;
      __vbaObjSet();
      pppppppppuStack_1f4 = (undefined *********)&local_54;
      pppppppppuStack_1f8 = local_48;
      pppppppppuStack_1fc = (undefined *********)0x44c752;
      ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1c])();
      if ((int)ppppppppppuVar9 < 0) {
        pppppppppuStack_1fc = (undefined *********)0x70;
        pppppppppuStack_200 = (undefined *********)&DAT_00414268;
        pppppppppuStack_204 = local_48;
        pppppppppuStack_20c = (undefined *********)0x44c766;
        pppppppppuStack_208 = (undefined *********)ppppppppppuVar9;
        (*(code *)pppppppuVar18)();
      }
      pppppppppuStack_1fc = (undefined *********)&DAT_00417e48;
      pppppppppuStack_200 = local_54;
      pppppppppuStack_204 = (undefined *********)0x44c777;
      sVar3 = __vbaCheckType();
      pppppppppuStack_1fc = (undefined *********)0x44c783;
      __vbaFreeObj();
      if (sVar3 == 0) {
        pppppppppuStack_1fc = (undefined *********)&local_54;
        pppppppppuStack_200 = local_48;
        pppppppppuStack_204 = (undefined *********)0x44c87c;
        ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1c])();
        if ((int)ppppppppppuVar9 < 0) {
          pppppppppuStack_204 = (undefined *********)0x70;
          pppppppppuStack_208 = (undefined *********)&DAT_00414268;
          pppppppppuStack_20c = local_48;
          pppppppppuStack_214 = (undefined *********)0x44c890;
          pppppppppuStack_210 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        pppppppppuStack_204 = (undefined *********)&DAT_004182f8;
        pppppppppuStack_208 = local_54;
        pppppppppuStack_20c = (undefined *********)0x44c89b;
        sVar3 = __vbaCheckType();
        pppppppppuStack_204 = (undefined *********)0x44c8a7;
        __vbaFreeObj();
        pcVar19 = __vbaLateMemSt_exref;
        local_b0 = (undefined *********)0xb;
        local_a8 = (undefined *********)CONCAT22(local_a8._2_2_,*param_5);
        if (sVar3 == 0) {
          pppppppppuStack_214 = (undefined *********)0x41801c;
          pppppppppuStack_210 = (undefined *********)0xb;
          pppppppppuStack_20c = local_ac;
          pppppppppuStack_208 = local_a8;
          pppppppppuStack_218 = local_114;
          pppppppppuStack_204 = local_a4;
          pppppppppuStack_21c = (undefined *********)0x44c941;
          __vbaLateMemSt();
          pcVar20 = __vbaFreeVar_exref;
          pppppppppuStack_204 = (undefined *********)0x44c94f;
          __vbaFreeVar();
          pppppppppuStack_204 = (undefined *********)param_1[0x1a];
          pppppppppuStack_200 = (undefined *********)local_e4;
          pppppppppuStack_208 = (undefined *********)0x44c962;
          pppppppppuStack_210 = (undefined *********)(*(code *)(*pppppppppuStack_204)[0x13])();
          if ((int)pppppppppuStack_210 < 0) {
            pppppppppuStack_204 = (undefined *********)0x4c;
            pppppppppuStack_208 = (undefined *********)&LAB_004133e8;
            pppppppppuStack_20c = (undefined *********)param_1[0x1a];
            pppppppppuStack_214 = (undefined *********)0x44c979;
            (*(code *)pppppppuVar18)();
          }
          local_a8 = (undefined *********)CONCAT22(local_a8._2_2_,~(ushort)local_e4[0]);
          pppppppppuStack_210 = (undefined *********)0xb;
          local_b0 = (undefined *********)0xb;
          pppppppppuStack_214 = (undefined *********)0x418308;
          pppppppppuStack_20c = local_ac;
          pppppppppuStack_208 = local_a8;
          pppppppppuStack_218 = local_114;
          pppppppppuStack_204 = local_a4;
          pppppppppuStack_21c = (undefined *********)0x44c9c3;
          __vbaLateMemSt();
        }
        else {
          pppppppppuStack_214 = (undefined *********)0x41801c;
          pppppppppuStack_210 = (undefined *********)0xb;
          pppppppppuStack_20c = local_ac;
          pppppppppuStack_208 = local_a8;
          pppppppppuStack_218 = local_114;
          pppppppppuStack_204 = local_a4;
          pppppppppuStack_21c = (undefined *********)0x44c8fa;
          __vbaLateMemSt();
          pcVar20 = __vbaFreeVar_exref;
        }
      }
      else {
        pppppppppuStack_1fc = (undefined *********)0x0;
        pppppppppuStack_200 = local_28;
        pppppppppuStack_204 = (undefined *********)0x44c798;
        sVar3 = __vbaObjIs();
        pcVar19 = __vbaLateMemSt_exref;
        pppppppppuStack_200 = (undefined *********)(uint)(sVar3 == 0);
        local_b0 = (undefined *********)0x2;
        pppppppppuStack_208 = (undefined *********)0x2;
        pppppppppuStack_20c = (undefined *********)0x418118;
        pppppppppuStack_204 = local_ac;
        pppppppppuStack_210 = local_114;
        pppppppppuStack_1fc = local_a4;
        pppppppppuStack_214 = (undefined *********)0x44c7e7;
        local_a8 = pppppppppuStack_200;
        __vbaLateMemSt();
        pppppppppuStack_1fc = (undefined *********)local_e4;
        pppppppppuStack_200 = (undefined *********)param_1[0x1a];
        pppppppppuStack_204 = (undefined *********)0x44c7fa;
        pppppppppuStack_210 = (undefined *********)(*(code *)(*pppppppppuStack_200)[0x13])();
        if ((int)pppppppppuStack_210 < 0) {
          pppppppppuStack_20c = (undefined *********)param_1[0x1a];
          pppppppppuStack_204 = (undefined *********)0x4c;
          pppppppppuStack_208 = (undefined *********)&LAB_004133e8;
          pppppppppuStack_214 = (undefined *********)0x44c80e;
          (*(code *)pppppppuVar18)();
        }
        local_b0 = (undefined *********)0xb;
        pppppppppuStack_210 = (undefined *********)0xb;
        local_a8 = (undefined *********)CONCAT22(local_a8._2_2_,*param_5 & (ushort)local_e4[0]);
        pppppppppuStack_20c = local_ac;
        pppppppppuStack_214 = (undefined *********)0x41801c;
        pppppppppuStack_208 = local_a8;
        pppppppppuStack_218 = local_114;
        pppppppppuStack_204 = local_a4;
        pppppppppuStack_21c = (undefined *********)0x44c85e;
        __vbaLateMemSt();
        pcVar20 = __vbaFreeVar_exref;
      }
      pppppppppuStack_204 = (undefined *********)0x44c9cb;
      (*pcVar20)();
      pppppppppuStack_204 = (undefined *********)local_e4;
      pppppppppuStack_208 = local_48;
      pppppppppuStack_20c = (undefined *********)0x44c9db;
      ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0xf])();
      if ((int)ppppppppppuVar9 < 0) {
        pppppppppuStack_20c = (undefined *********)0x3c;
        pppppppppuStack_210 = (undefined *********)&DAT_00414268;
        pppppppppuStack_214 = local_48;
        pppppppppuStack_21c = (undefined *********)0x44c9ef;
        pppppppppuStack_218 = (undefined *********)ppppppppppuVar9;
        (*(code *)pppppppuVar18)();
      }
      if ((short)local_e4[0] == 0) {
        pppppppppuStack_20c = (undefined *********)&local_4c;
        pppppppppuStack_210 = local_48;
        pppppppppuStack_214 = (undefined *********)0x44cfa0;
        pppppppppuStack_220 = (undefined *********)(*(code *)(*local_48)[0xd])();
        if ((int)pppppppppuStack_220 < 0) {
          pppppppppuStack_214 = (undefined *********)0x34;
          pppppppppuStack_218 = (undefined *********)&DAT_00414268;
          pppppppppuStack_21c = local_48;
          pppppppppuStack_224 = (undefined *********)0x44cfb4;
          (*(code *)pppppppuVar18)();
        }
        pppppppppuStack_218 = local_4c;
        local_70 = (undefined *********)0x8;
        local_68 = local_4c;
        pppppppppuStack_220 = (undefined *********)0x8;
        pppppppppuStack_224 = (undefined *********)0x41836c;
        local_4c = (undefined *********)0x0;
        pppppppppuStack_21c = local_6c;
        pppppppppuStack_228 = local_114;
        pppppppppuStack_214 = local_64;
        pppppppppuStack_22c = (undefined *********)0x44cfed;
        (*pcVar19)();
        pppppppppuStack_22c = (undefined *********)0x44cff2;
        (*pcVar20)();
        pcVar19 = __vbaLateMemSt_exref;
      }
      else {
        pppppppppuStack_20c = (undefined *********)0x0;
        pppppppppuStack_210 = (undefined *********)0x418318;
        pppppppppuStack_218 = (undefined *********)&local_70;
        pppppppppuStack_214 = local_114;
        pppppppppuStack_21c = (undefined *********)0x44ca15;
        pppppppppuStack_20c = (undefined *********)__vbaLateMemCallLd();
        pppppppppuStack_210 = (undefined *********)0x44ca1f;
        local_20 = (undefined *********)__vbaI2Var();
        pppppppppuStack_210 = (undefined *********)0x44ca27;
        (*pcVar20)();
        pppppppppuStack_210 = (undefined *********)0x0;
        pppppppppuStack_214 = local_28;
        pppppppppuStack_218 = (undefined *********)0x44ca33;
        sVar3 = __vbaObjIs();
        if (sVar3 != 0) {
          pppppppppuStack_210 = (undefined *********)&local_54;
          ppppppppppuVar9 = (undefined **********)*param_2;
          pppppppppuStack_218 = (undefined *********)0x44ca47;
          pppppppppuStack_214 = (undefined *********)ppppppppppuVar9;
          ppppppppppuVar11 = (undefined **********)(*(code *)(*ppppppppppuVar9)[0xf])();
          if ((int)ppppppppppuVar11 < 0) {
            pppppppppuStack_218 = (undefined *********)0x3c;
            pppppppppuStack_21c = (undefined *********)&LAB_0041470c;
            pppppppppuStack_228 = (undefined *********)0x44ca58;
            pppppppppuStack_224 = (undefined *********)ppppppppppuVar11;
            pppppppppuStack_220 = (undefined *********)ppppppppppuVar9;
            (*(code *)pppppppuVar18)();
          }
          pppppppppuVar8 = local_54;
          pppppppppuStack_218 = (undefined *********)0x44ca66;
          __vbaStrCopy();
          pppppppppuStack_210 = (undefined *********)&local_58;
          pppppppppuStack_214 = (undefined *********)&local_4c;
          pppppppppuStack_218 = (undefined *********)&local_48;
          pppppppppuStack_21c = pppppppppuVar8;
          pppppppppuStack_220 = (undefined *********)0x44ca78;
          ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppppppuVar8)[7])();
          if ((int)ppppppppppuVar9 < 0) {
            pppppppppuStack_210 = (undefined *********)0x1c;
            pppppppppuStack_214 = (undefined *********)&DAT_00414ba4;
            pppppppppuStack_218 = pppppppppuVar8;
            pppppppppuStack_220 = (undefined *********)0x44ca89;
            pppppppppuStack_21c = (undefined *********)ppppppppppuVar9;
            (*(code *)pppppppuVar18)();
          }
          pppppppppuStack_210 = (undefined *********)0x44ca92;
          __vbaFreeStr();
          pppppppppuStack_210 = (undefined *********)&local_58;
          pppppppppuStack_214 = (undefined *********)&local_54;
          pppppppppuStack_218 = (undefined *********)0x2;
          pppppppppuStack_21c = (undefined *********)0x44caa2;
          __vbaFreeObjList();
        }
        pppppppppuStack_210 = (undefined *********)&local_54;
        ppppppppppuVar11 = (undefined **********)0x0;
        ppppppppppuVar9 = (undefined **********)*param_2;
        pppppppppuStack_218 = (undefined *********)0x44cab6;
        pppppppppuStack_214 = (undefined *********)ppppppppppuVar9;
        ppppppppppuVar12 = (undefined **********)(*(code *)(*ppppppppppuVar9)[0xf])();
        if ((int)ppppppppppuVar12 < 0) {
          pppppppppuStack_22c = (undefined *********)0x3c;
          pppppppppuStack_230 = (undefined *********)&LAB_0041470c;
          pppppppppuStack_23c = (undefined *********)0x44cac7;
          pppppppppuStack_238 = (undefined *********)ppppppppppuVar12;
          pppppppppuStack_234 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        pppppppppuStack_22c = local_54;
        local_54 = (undefined *********)0x0;
        pppppppppuStack_230 = (undefined *********)&local_118;
        pppppppppuStack_234 = (undefined *********)0x44cadf;
        pppppppppuStack_22c = (undefined *********)__vbaObjSet();
        pppppppppuStack_230 = (undefined *********)&local_28;
        pppppppppuStack_234 = (undefined *********)&local_11c;
        pppppppppuStack_238 = (undefined *********)&DAT_00414bb4;
        pppppppppuStack_23c = (undefined *********)0x44caf6;
        iVar10 = __vbaForEachCollObj();
        while (sVar3 = (short)ppppppppppuVar11, iVar10 != 0) {
          pppppppppuStack_22c = (undefined *********)&local_54;
          pppppppppuStack_230 = local_28;
          pppppppppuStack_234 = (undefined *********)0x44cb07;
          ppppppppppuVar12 = (undefined **********)(*(code *)(*local_28)[10])();
          if ((int)ppppppppppuVar12 < 0) {
            pppppppppuStack_22c = (undefined *********)0x28;
            pppppppppuStack_230 = (undefined *********)&DAT_00414bb4;
            pppppppppuStack_234 = local_28;
            pppppppppuStack_23c = (undefined *********)0x44cb1b;
            pppppppppuStack_238 = (undefined *********)ppppppppppuVar12;
            (*(code *)pppppppuVar18)();
          }
          pppppppppuStack_22c = local_48;
          pppppppppuStack_230 = local_54;
          pppppppppuStack_234 = (undefined *********)0x44cb29;
          sVar4 = __vbaObjIs();
          ppppppppppuVar9 =
               (undefined **********)CONCAT22((short)((uint)ppppppppppuVar9 >> 0x10),sVar4);
          pppppppppuStack_22c = (undefined *********)0x44cb35;
          __vbaFreeObj();
          if ((sVar4 != 0) &&
             (ppppppppppuVar11 = (undefined **********)(uint)(ushort)(sVar3 + 1), SCARRY2(sVar3,1)))
          goto LAB_0044e1c6;
          pppppppppuStack_22c = (undefined *********)&local_28;
          pppppppppuStack_230 = (undefined *********)&local_11c;
          pppppppppuStack_234 = (undefined *********)&DAT_00414bb4;
          pppppppppuStack_238 = (undefined *********)0x44cb5a;
          iVar10 = __vbaNextEachCollObj();
        }
        if (sVar3 < (short)local_20) {
          local_20 = (undefined *********)ppppppppppuVar11;
        }
        sVar4 = (short)local_20;
        if ((sVar4 == -1) && (0 < sVar3)) {
          sVar4 = 1;
          local_20 = (undefined *********)0x1;
        }
        if (sVar4 == 0) {
          local_20 = (undefined *********)ppppppppppuVar11;
        }
        pppppppppuStack_22c = (undefined *********)0x0;
        pppppppppuStack_230 = (undefined *********)0x41832c;
        pppppppppuStack_234 = local_114;
        pppppppppuStack_238 = (undefined *********)0x44cb9b;
        __vbaLateMemCall();
        local_b0 = (undefined *********)0x8;
        local_a8 = (undefined *********)0x41833c;
        pppppppppuStack_23c = (undefined *********)0x1;
        pppppppppuStack_240 = (undefined *********)0x41835c;
        pppppppppuStack_238 = (undefined *********)0x8;
        pppppppppuStack_234 = local_ac;
        pppppppppuStack_244 = local_114;
        pppppppppuStack_230 = (undefined *********)0x41833c;
        pppppppppuStack_22c = local_a4;
        pppppppppuStack_248 = (undefined *********)0x44cbdb;
        __vbaLateMemCall();
        pppppppppuStack_22c = (undefined *********)&local_54;
        local_2c = 0;
        ppppppppppuVar9 = (undefined **********)*param_2;
        pppppppppuStack_234 = (undefined *********)0x44cbf0;
        pppppppppuStack_230 = (undefined *********)ppppppppppuVar9;
        pppppppppuVar8 = (undefined *********)(*(code *)(*ppppppppppuVar9)[0xf])();
        if ((int)pppppppppuVar8 < 0) {
          pppppppppuStack_22c = (undefined *********)0x3c;
          pppppppppuStack_230 = (undefined *********)&LAB_0041470c;
          pppppppppuStack_23c = (undefined *********)0x44cc01;
          pppppppppuStack_238 = pppppppppuVar8;
          pppppppppuStack_234 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        pppppppppuStack_230 = (undefined *********)&local_120;
        pppppppppuStack_22c = local_54;
        local_54 = (undefined *********)0x0;
        pppppppppuStack_234 = (undefined *********)0x44cc15;
        pppppppppuStack_22c = (undefined *********)__vbaObjSet();
        pppppppppuStack_230 = (undefined *********)&local_28;
        pppppppppuStack_234 = (undefined *********)&local_124;
        pppppppppuStack_238 = (undefined *********)&DAT_00414bb4;
        pppppppppuStack_23c = (undefined *********)0x44cc2c;
        iVar10 = __vbaForEachCollObj();
        ppppppppppuVar11 = (undefined **********)__vbaFreeVar_exref;
        while (pcVar19 = __vbaLateMemSt_exref, iVar10 != 0) {
          pppppppppuStack_22c = (undefined *********)&local_54;
          pppppppppuStack_230 = local_28;
          pppppppppuStack_234 = (undefined *********)0x44cc47;
          ppppppppppuVar12 = (undefined **********)(*(code *)(*local_28)[10])();
          if ((int)ppppppppppuVar12 < 0) {
            pppppppppuStack_22c = (undefined *********)0x28;
            pppppppppuStack_230 = (undefined *********)&DAT_00414bb4;
            pppppppppuStack_234 = local_28;
            pppppppppuStack_23c = (undefined *********)0x44cc5b;
            pppppppppuStack_238 = (undefined *********)ppppppppppuVar12;
            (*(code *)pppppppuVar18)();
          }
          pppppppppuStack_22c = local_48;
          pppppppppuStack_230 = local_54;
          pppppppppuStack_234 = (undefined *********)0x44cc69;
          sVar3 = __vbaObjIs();
          ppppppppppuVar9 =
               (undefined **********)CONCAT22((short)((uint)ppppppppppuVar9 >> 0x10),sVar3);
          pppppppppuStack_22c = (undefined *********)0x44cc75;
          __vbaFreeObj();
          if (sVar3 != 0) {
            uVar15 = CONCAT22(extraout_var,(short)local_2c + 1);
            if (SCARRY2((short)local_2c,1)) goto LAB_0044e1c6;
            local_2c = uVar15;
            if ((short)((short)local_2c + 1) == (short)local_20) {
              pppppppppuStack_22c = (undefined *********)&local_4c;
              pppppppppuStack_230 = local_48;
              pppppppppuStack_234 = (undefined *********)0x44cca2;
              pppppppppuStack_23c = (undefined *********)(*(code *)(*local_48)[0xd])();
              if ((int)pppppppppuStack_23c < 0) {
                pppppppppuStack_230 = (undefined *********)0x34;
                pppppppppuStack_234 = (undefined *********)&DAT_00414268;
                pppppppppuStack_238 = local_48;
                pppppppppuStack_240 = (undefined *********)0x44ccb6;
                (*(code *)pppppppuVar18)();
              }
              pppppppppuStack_234 = local_4c;
              local_70 = (undefined *********)0x8;
              local_68 = local_4c;
              pppppppppuStack_23c = (undefined *********)0x8;
              pppppppppuStack_240 = (undefined *********)0x1;
              pppppppppuStack_244 = (undefined *********)0x41835c;
              pppppppppuStack_238 = local_6c;
              pppppppppuStack_248 = local_114;
              local_4c = (undefined *********)0x0;
              pppppppppuStack_230 = local_64;
              pppppppppuStack_24c = (undefined *********)0x44ccf5;
              __vbaLateMemCall();
              pppppppppuStack_230 = (undefined *********)0x44ccfd;
              __vbaFreeVar();
              pppppppppuStack_230 = (undefined *********)&local_40;
              pppppppppuStack_22c = local_28;
              pppppppppuStack_234 = (undefined *********)0x44cd0b;
              __vbaObjSetAddref();
            }
            else {
              pppppppppuStack_22c = &local_ec;
              pppppppppuStack_230 = local_48;
              pppppppppuStack_234 = (undefined *********)0x44cd1d;
              ppppppppppuVar12 = (undefined **********)(*(code *)(*local_48)[0x15])();
              ppppppppppuVar9 = (undefined **********)0x0;
              if ((int)ppppppppppuVar12 < 0) {
                pppppppppuStack_234 = (undefined *********)0x54;
                pppppppppuStack_238 = (undefined *********)&DAT_00414268;
                pppppppppuStack_23c = local_48;
                pppppppppuStack_244 = (undefined *********)0x44cd33;
                pppppppppuStack_240 = (undefined *********)ppppppppppuVar12;
                (*(code *)pppppppuVar18)();
              }
              if ((undefined *********)local_ec == (undefined *********)0x2) {
                pppppppppuStack_234 = (undefined *********)&local_70;
                pppppppppuStack_238 = local_28;
                pppppppppuStack_23c = (undefined *********)0x44cd4f;
                ppppppppppuVar9 = (undefined **********)(*(code *)(*local_28)[0xc])();
                if ((int)ppppppppppuVar9 < 0) {
                  pppppppppuStack_23c = (undefined *********)0x30;
                  pppppppppuStack_240 = (undefined *********)&DAT_00414bb4;
                  pppppppppuStack_244 = local_28;
                  pppppppppuStack_24c = (undefined *********)0x44cd63;
                  pppppppppuStack_248 = (undefined *********)ppppppppppuVar9;
                  (*(code *)pppppppuVar18)();
                }
                pppppppppuStack_240 = (undefined *********)&local_70;
                pppppppppuStack_23c = (undefined *********)&LAB_0041470c;
                pppppppppuStack_244 = (undefined *********)0x44cd72;
                pppppppppuStack_23c = (undefined *********)__vbaCastObjVar();
                pppppppppuStack_240 = (undefined *********)&local_44;
                pppppppppuStack_244 = (undefined *********)0x44cd7d;
                __vbaObjSet();
                pppppppppuStack_23c = (undefined *********)0x44cd82;
                __vbaFreeVar();
                pppppppppuStack_238 = (undefined *********)&local_4c;
                pppppppppuStack_23c = local_44;
                pppppppppuStack_240 = (undefined *********)0x44cd8f;
                ppppppppppuVar9 = (undefined **********)(*(code *)(*local_44)[7])();
                if ((int)ppppppppppuVar9 < 0) {
                  pppppppppuStack_240 = (undefined *********)0x1c;
                  pppppppppuStack_244 = (undefined *********)&LAB_0041470c;
                  pppppppppuStack_248 = local_44;
                  pppppppppuStack_250 = (undefined *********)0x44cda3;
                  pppppppppuStack_24c = (undefined *********)ppppppppppuVar9;
                  (*(code *)pppppppuVar18)();
                }
                local_4c = (undefined *********)0x0;
                pppppppppuStack_240 = (undefined *********)0x44cdb2;
                __vbaStrMove();
                pppppppppuStack_240 = (undefined *********)&local_54;
                pppppppppuStack_244 = &local_50;
                pppppppppuStack_248 = (undefined *********)param_1[0x1d];
                pppppppppuStack_24c = (undefined *********)0x44cdc6;
                pppppppppuVar8 = (undefined *********)(*(code *)(*pppppppppuStack_248)[0xb])();
                if ((int)pppppppppuVar8 < 0) {
                  pppppppppuStack_254 = (undefined *********)param_1[0x1d];
                  pppppppppuStack_24c = (undefined *********)0x2c;
                  pppppppppuStack_250 = (undefined *********)&DAT_004146fc;
                  pppppppppuStack_25c = (undefined *********)0x44cdda;
                  pppppppppuStack_258 = pppppppppuVar8;
                  (*(code *)pppppppuVar18)();
                }
                pppppppppuStack_24c = local_44;
                pppppppppuStack_250 = local_54;
                pppppppppuStack_254 = (undefined *********)0x44cde8;
                uVar5 = __vbaObjIs();
                ppppppppppuVar9 =
                     (undefined **********)~CONCAT22((short)((uint)param_1 >> 0x10),uVar5);
                pppppppppuStack_24c = (undefined *********)0x44cdf6;
                __vbaFreeStr();
                pppppppppuStack_24c = (undefined *********)0x44cdff;
                __vbaFreeObj();
                if ((short)ppppppppppuVar9 != 0) {
                  pppppppppuStack_24c = (undefined *********)&local_4c;
                  pppppppppuStack_250 = local_48;
                  pppppppppuStack_254 = (undefined *********)0x44ce15;
                  pppppppppuStack_260 = (undefined *********)(*(code *)(*local_48)[0xd])();
                  if ((int)pppppppppuStack_260 < 0) {
                    pppppppppuStack_254 = (undefined *********)0x34;
                    pppppppppuStack_258 = (undefined *********)&DAT_00414268;
                    pppppppppuStack_25c = local_48;
                    pppppppppuStack_264 = (undefined *********)0x44ce29;
                    (*(code *)pppppppuVar18)();
                  }
                  pppppppppuStack_254 = (undefined *********)&local_54;
                  pppppppppuStack_258 = local_4c;
                  pppppppppuStack_25c = (undefined *********)&DAT_004178e0 /* bstr: '-' */;
                  pppppuVar1 = *param_1[0x1d];
                  pppppppppuStack_260 = (undefined *********)0x44ce44;
                  __vbaStrCat();
                  pppppppppuStack_258 = (undefined *********)0x44ce4f;
                  pppppppppuStack_258 = (undefined *********)__vbaStrMove();
                  pppppppppuStack_260 = (undefined *********)param_1[0x1d];
                  pppppppppuStack_25c = (undefined *********)&local_44;
                  pppppppppuStack_264 = (undefined *********)0x44ce60;
                  pppppppppuStack_258 = (undefined *********)(*(code *)pppppuVar1[8])();
                  if ((int)pppppppppuStack_258 < 0) {
                    pppppppppuStack_254 = (undefined *********)param_1[0x1d];
                    pppppppppuStack_24c = (undefined *********)0x20;
                    pppppppppuStack_250 = (undefined *********)&DAT_004146fc;
                    pppppppppuStack_25c = (undefined *********)0x44ce74;
                    (*(code *)pppppppuVar18)();
                  }
                  pppppppppuStack_24c = &local_50;
                  pppppppppuStack_250 = (undefined *********)&local_4c;
                  pppppppppuStack_254 = (undefined *********)0x2;
                  pppppppppuStack_258 = (undefined *********)0x44ce84;
                  __vbaFreeStrList();
                  pppppppppuStack_24c = (undefined *********)0x44ce90;
                  __vbaFreeObj();
                  ppppppppppuVar9 = (undefined **********)param_1;
                }
                pppppppppuStack_24c = (undefined *********)&local_4c;
                pppppppppuStack_250 = local_44;
                pppppppppuStack_254 = (undefined *********)0x44ce9d;
                pppppppppuStack_23c = (undefined *********)(*(code *)(*local_44)[7])();
                pppppppppuStack_234 = local_4c;
                if ((int)pppppppppuStack_23c < 0) {
                  pppppppppuStack_230 = (undefined *********)0x1c;
                  pppppppppuStack_234 = (undefined *********)&LAB_0041470c;
                  pppppppppuStack_238 = local_44;
                  pppppppppuStack_240 = (undefined *********)0x44ceb1;
                  (*(code *)pppppppuVar18)();
                  pppppppppuStack_234 = local_4c;
                }
              }
              else {
                pppppppppuStack_234 = (undefined *********)&local_4c;
                pppppppppuStack_238 = local_28;
                pppppppppuStack_23c = (undefined *********)0x44cec5;
                pppppppppuStack_23c = (undefined *********)(*(code *)(*local_28)[0xb])();
                pppppppppuStack_234 = local_4c;
                if ((int)pppppppppuStack_23c < 0) {
                  pppppppppuStack_230 = (undefined *********)0x2c;
                  pppppppppuStack_234 = (undefined *********)&DAT_00414bb4;
                  pppppppppuStack_238 = local_28;
                  pppppppppuStack_240 = (undefined *********)0x44ced9;
                  (*(code *)pppppppuVar18)();
                  pppppppppuStack_234 = local_4c;
                }
              }
              local_4c = (undefined *********)0x0;
              local_70 = (undefined *********)0x8;
              pppppppppuStack_240 = (undefined *********)0x1;
              pppppppppuStack_23c = (undefined *********)0x8;
              pppppppppuStack_244 = (undefined *********)0x41835c;
              pppppppppuStack_238 = local_6c;
              pppppppppuStack_248 = local_114;
              pppppppppuStack_230 = local_64;
              pppppppppuStack_24c = (undefined *********)0x44cf14;
              local_68 = pppppppppuStack_234;
              __vbaLateMemCall();
              pppppppppuStack_230 = (undefined *********)0x44cf1c;
              __vbaFreeVar();
            }
          }
          pppppppppuStack_22c = (undefined *********)&local_28;
          pppppppppuStack_230 = (undefined *********)&local_124;
          pppppppppuStack_234 = (undefined *********)&DAT_00414bb4;
          pppppppppuStack_238 = (undefined *********)0x44cf32;
          iVar10 = __vbaNextEachCollObj();
        }
        local_b0 = (undefined *********)0x2;
        pppppppppuStack_238 = (undefined *********)0x2;
        local_a8 = (undefined *********)CONCAT22(local_a8._2_2_,(short)local_20);
        pppppppppuStack_234 = local_ac;
        pppppppppuStack_23c = (undefined *********)0x418318;
        pppppppppuStack_230 = local_a8;
        pppppppppuStack_240 = local_114;
        pppppppppuStack_22c = local_a4;
        pppppppppuStack_244 = (undefined *********)0x44cf83;
        __vbaLateMemSt();
        pppppppppuStack_230 = (undefined *********)&local_28;
        pppppppppuStack_22c = (undefined *********)local_40;
        pppppppppuStack_234 = (undefined *********)0x44cf91;
        __vbaObjSetAddref();
      }
      local_a8 = (undefined *********)CONCAT22(local_a8._2_2_,*param_3);
      pppppppppuStack_238 = (undefined *********)0x2;
      local_b0 = (undefined *********)0x2;
      pppppppppuStack_23c = (undefined *********)&DAT_004180bc;
      pppppppppuStack_234 = local_ac;
      pppppppppuStack_230 = local_a8;
      pppppppppuStack_240 = local_114;
      pppppppppuStack_22c = local_a4;
      pppppppppuStack_244 = (undefined *********)0x44d040;
      (*pcVar19)();
      pppppppppuStack_244 = (undefined *********)&local_54;
      pppppppppuStack_248 = (undefined *********)param_1[0x1a];
      pppppppppuStack_24c = (undefined *********)0x44d050;
      pppppppppuStack_258 = (undefined *********)(*(code *)(*pppppppppuStack_248)[0x18])();
      if ((int)pppppppppuStack_258 < 0) {
        pppppppppuStack_254 = (undefined *********)param_1[0x1a];
        pppppppppuStack_24c = (undefined *********)0x60;
        pppppppppuStack_250 = (undefined *********)&LAB_004133e8;
        pppppppppuStack_25c = (undefined *********)0x44d064;
        (*(code *)pppppppuVar18)();
      }
      pppppppppuVar8 = local_54;
      pppppppppuStack_24c = (undefined *********)&local_4c;
      pppppppppuStack_250 = (undefined *********)&local_28;
      pppppppppuStack_254 = (undefined *********)param_2;
      pppppppppuStack_258 = &local_ec;
      local_ec = (undefined ********)0x1;
      pppppppppuStack_25c = local_54;
      pppppppppuStack_260 = (undefined *********)0x44d08c;
      iStack_26c = (*(code *)(*local_54)[10])();
      if (iStack_26c < 0) {
        pppppppppuStack_260 = (undefined *********)0x28;
        pppppppppuStack_264 = (undefined *********)&DAT_00414c50;
        pppppppppuStack_268 = pppppppppuVar8;
        ppppppppuStack_270 = (undefined ********)0x44d09d;
        (*(code *)pppppppuVar18)();
      }
      pppppppppuStack_264 = local_4c;
      local_70 = (undefined *********)0x8;
      local_68 = local_4c;
      iStack_26c = 8;
      ppppppppuStack_270 = (undefined ********)0x41837c;
      local_4c = (undefined *********)0x0;
      pppppppppuStack_268 = local_6c;
      pppppppppuStack_274 = local_114;
      pppppppppuStack_260 = local_64;
      pppppppppuStack_278 = (undefined *********)0x44d0d6;
      (*pcVar19)();
      pppppppppuStack_278 = (undefined *********)0x44d0df;
      __vbaFreeObj();
      ppppppppppuVar9 = (undefined **********)__vbaFreeVar_exref;
      pppppppppuStack_278 = (undefined *********)0x44d0ea;
      __vbaFreeVar();
      pppppppppuStack_278 = (undefined *********)&local_114;
      pppppppppuStack_274 = (undefined *********)0x0;
      pppppppppuStack_27c = (undefined *********)0x44d0f9;
      __vbaObjSetAddref();
      pppppppppuStack_274 = (undefined *********)local_e4;
      pppppppppuStack_278 = local_48;
      pppppppppuStack_27c = (undefined *********)0x44d109;
      ppppppppppuVar11 = (undefined **********)(*(code *)(*local_48)[0x11])();
      if ((int)ppppppppppuVar11 < 0) {
        pppppppppuStack_27c = (undefined *********)0x44;
        pppppppppuStack_280 = (undefined *********)&DAT_00414268;
        pppppppppuStack_284 = local_48;
        pppppppppuStack_28c = (undefined *********)0x44d11d;
        pppppppppuStack_288 = (undefined *********)ppppppppppuVar11;
        (*(code *)pppppppuVar18)();
      }
      if ((short)local_e4[0] != 0) {
        pppppppppuStack_27c = &local_ec;
        pppppppppuStack_280 = local_48;
        pppppppppuStack_284 = (undefined *********)0x44d13b;
        ppppppppppuVar11 = (undefined **********)(*(code *)(*local_48)[0x15])();
        if ((int)ppppppppppuVar11 < 0) {
          pppppppppuStack_284 = (undefined *********)0x54;
          pppppppppuStack_288 = (undefined *********)&DAT_00414268;
          pppppppppuStack_28c = local_48;
          pppppppppuStack_294 = (undefined *********)0x44d14f;
          pppppppppuStack_290 = (undefined *********)ppppppppppuVar11;
          (*(code *)pppppppuVar18)();
        }
        if ((undefined *********)local_ec == (undefined *********)0x2) {
          pppppppppuStack_284 = (undefined *********)0x0;
          pppppppppuStack_288 = local_28;
          pppppppppuStack_28c = (undefined *********)0x44d16a;
          sVar3 = __vbaObjIs();
          if (sVar3 == 0) {
            pppppppppuStack_284 = (undefined *********)&local_70;
            pppppppppuStack_288 = local_28;
            pppppppppuStack_28c = (undefined *********)0x44d23b;
            ppppppppppuVar11 = (undefined **********)(*(code *)(*local_28)[0xc])();
            if ((int)ppppppppppuVar11 < 0) {
              pppppppppuStack_22c = (undefined *********)0x30;
              pppppppppuStack_230 = (undefined *********)&DAT_00414bb4;
              pppppppppuStack_234 = local_28;
              pppppppppuStack_23c = (undefined *********)0x44d24f;
              pppppppppuStack_238 = (undefined *********)ppppppppppuVar11;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_22c = (undefined *********)&LAB_004133f8;
            pppppppppuStack_230 = (undefined *********)0x0;
            local_e8 = (undefined ********)0xffffffff;
            pppppppppuStack_234 = (undefined *********)0x44d266;
            pppppppppuStack_22c = (undefined *********)__vbaCastObj();
            ppppppppppuVar11 = (undefined **********)__vbaObjSet_exref;
            pppppppppuStack_230 = (undefined *********)&local_58;
            pppppppppuStack_234 = (undefined *********)0x44d273;
            __vbaObjSet();
            if (SCARRY4((int)*param_3,0x78)) goto LAB_0044e1c6;
            pppppppppuStack_22c = (undefined *********)0x44d288;
            local_e4[0] = (undefined *********)__vbaI2I4();
            pppppppppuStack_22c = (undefined *********)&local_70;
            pppppppppuStack_228 = (undefined *********)&LAB_0041470c;
            pppppppppuStack_230 = (undefined *********)0x44d29d;
            pppppppppuStack_228 = (undefined *********)__vbaCastObjVar();
            pppppppppuStack_22c = (undefined *********)&local_54;
            pppppppppuStack_230 = (undefined *********)0x44d2a4;
            __vbaObjSet();
            pppppppppuStack_228 = &local_e8;
            pppppppppuStack_22c = (undefined *********)&local_58;
            pppppppppuStack_230 = (undefined *********)local_e4;
            pppppppppuStack_234 = (undefined *********)&local_54;
            pppppppppuStack_238 = (undefined *********)param_1;
            pppppppppuStack_23c = (undefined *********)0x44d2c6;
            (*(code *)(*param_1)[0x1e1])();
            pppppppppuStack_280 = (undefined *********)&local_58;
            pppppppppuStack_284 = (undefined *********)&local_54;
            pppppppppuStack_288 = (undefined *********)0x2;
            pppppppppuStack_28c = (undefined *********)0x44d2d6;
            __vbaFreeObjList();
            pppppppppuStack_280 = (undefined *********)0x44d2de;
            __vbaFreeVar();
          }
          else {
            pppppppppuStack_284 = (undefined *********)&local_70;
            pppppppppuStack_288 = local_48;
            pppppppppuStack_28c = (undefined *********)0x44d180;
            ppppppppppuVar11 = (undefined **********)(*(code *)(*local_48)[0x16])();
            if ((int)ppppppppppuVar11 < 0) {
              pppppppppuStack_22c = (undefined *********)0x58;
              pppppppppuStack_230 = (undefined *********)&DAT_00414268;
              pppppppppuStack_234 = local_48;
              pppppppppuStack_23c = (undefined *********)0x44d194;
              pppppppppuStack_238 = (undefined *********)ppppppppppuVar11;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_22c = (undefined *********)0x0;
            pppppppppuStack_230 = local_28;
            pppppppppuStack_234 = (undefined *********)0x44d19c;
            uVar14 = __vbaObjIs();
            local_e8 = (undefined ********)~uVar14;
            pppppppppuStack_230 = (undefined *********)&local_70;
            pppppppppuStack_22c = (undefined *********)&LAB_004133f8;
            pppppppppuStack_234 = (undefined *********)0x44d1b3;
            pppppppppuStack_22c = (undefined *********)__vbaCastObjVar();
            ppppppppppuVar11 = (undefined **********)__vbaObjSet_exref;
            pppppppppuStack_230 = (undefined *********)&local_58;
            pppppppppuStack_234 = (undefined *********)0x44d1c0;
            __vbaObjSet();
            if (SCARRY4((int)*param_3,0x78)) {
LAB_0044e1c6:
              pppppppppuStack_22c = (undefined *********)0x44e1cc;
              __vbaErrorOverflow();
              pppppppppuStack_234 = (undefined *********)&LAB_004032d6;
              pppppppppuStack_238 = ExceptionList;
              pppppppppuStack_230 = (undefined *********)&pppppppppuStack_390;
              pppppppppuStack_22c = (undefined *********)&DAT_004024d8;
              pppppppppuStack_240 = (undefined *********)0x0;
              pppppppppuStack_244 = (undefined *********)0x0;
              pppppppppuStack_248 = (undefined *********)0x0;
              pppppppppuStack_24c = (undefined *********)0x0;
              pppppppppuStack_250 = (undefined *********)0x0;
              pppppppppuStack_254 = (undefined *********)0x0;
              pppppppppuStack_258 = (undefined *********)0x0;
              pppppppppuStack_25c = (undefined *********)0x0;
              pppppppppuStack_260 = (undefined *********)0x0;
              pppppppppuStack_264 = (undefined *********)0x0;
              pppppppppuStack_268 = (undefined *********)0x0;
              pppppppppuStack_278 = (undefined *********)0x0;
              pppppppppuStack_288 = (undefined *********)0x0;
              pppppppppuStack_298 = (undefined *********)0x0;
              pppppppppuStack_2a8 = (undefined *********)0x0;
              pppppppppuStack_2b8 = (undefined *********)0x0;
              pppppppppuStack_2c8 = (undefined *********)0x0;
              pppppppppuStack_2d8 = (undefined *********)0x0;
              auStack_30c[0] = 0;
              uStack_310 = 0;
              uStack_314 = 0;
              apiStack_338[0] = (int *)0x0;
              uStack_33c = 0;
              uStack_340 = 0;
              uStack_344 = 0;
              uStack_348 = 0;
              uStack_34c = 0;
              uStack_350 = 0;
              uStack_354 = 0;
              uStack_358 = 0;
              ExceptionList = &pppppppppuStack_238;
              pppppppppuStack_390 = (undefined *********)ppppppppppuVar11;
              pppppppppuStack_38c = (undefined *********)ppppppppppuVar9;
              pppppppuStack_388 = pppppppuVar18;
              pppppppppuStack_228 = (undefined *********)&stack0xfffffffc;
              __vbaObjSetAddref(&pppppppppuStack_240,pppppppppuStack_21c);
              pppppppppuVar8 = pppppppppuStack_220;
              pppppppppuStack_23c =
                   (undefined *********)
                   CONCAT22(pppppppppuStack_23c._2_2_,*(undefined2 *)(pppppppppuStack_220 + 0x23));
              *(undefined2 *)(pppppppppuStack_220 + 0x23) = 0xffff;
              uVar15 = (*(code *)(*pppppppppuStack_220)[0xc6])(pppppppppuStack_220);
              piStack_318 = (int *)__vbaObjSet(&pppppppppuStack_25c,uVar15);
              iVar10 = (**(code **)(*piStack_318 + 0x9c))(piStack_318,0);
              if (iVar10 < 0) {
                __vbaHresultCheckObj(iVar10,piStack_318,&DAT_0041804c,0x9c);
              }
              __vbaFreeObj();
              sVar3 = __vbaObjIs(pppppppppuStack_240,0);
              if (sVar3 == 0) {
                puVar27 = &DAT_00417d44;
                uVar26 = 0;
                pppppppppuVar21 = pppppppppuStack_240;
                uVar15 = (*(code *)(*pppppppppuVar8)[0xd6])
                                   (pppppppppuVar8,0xd,0,&DAT_00417d44,pppppppppuStack_240);
                uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                uVar15 = __vbaLateIdCallLd(&pppppppppuStack_278,uVar15);
                uVar15 = __vbaCastObjVar(uVar15,uVar26);
                uVar15 = __vbaObjSet(&pppppppppuStack_260,uVar15);
                uVar6 = __vbaObjIs(uVar15,puVar27);
                uVar26 = 0;
                uVar15 = (*(code *)(*pppppppppuVar8)[0xd6])(pppppppppuVar8,0xd,0,&DAT_00417d44,0);
                uVar15 = __vbaObjSet(&pppppppppuStack_264,uVar15);
                uVar15 = __vbaLateIdCallLd(&pppppppppuStack_288,uVar15);
                uVar15 = __vbaCastObjVar(uVar15,uVar26);
                uVar15 = __vbaObjSet(&pppppppppuStack_268,uVar15);
                uVar7 = __vbaObjIs(uVar15,pppppppppuVar21);
                __vbaFreeObjList(4,&pppppppppuStack_25c,&pppppppppuStack_260,&pppppppppuStack_264,
                                 &pppppppppuStack_268);
                __vbaFreeVarList(2,&pppppppppuStack_278,&pppppppppuStack_288);
                if ((uVar6 | uVar7) != 0xffff) {
                  uVar15 = __vbaCastObj(0,&LAB_0041470c);
                  uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                  __vbaObjSetAddref(pppppppppuVar8 + 0x1b,uVar15);
                  __vbaFreeObj();
                  goto LAB_0044f47f;
                }
              }
              else {
                puVar28 = &DAT_00417d44;
                puVar27 = &DAT_00417d44;
                uVar26 = 0;
                uVar15 = (*(code *)(*pppppppppuVar8)[0xd6])
                                   (pppppppppuVar8,0xd,0,&DAT_00417d44,&DAT_00417d44);
                uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                uVar15 = __vbaLateIdCallLd(&pppppppppuStack_278,uVar15);
                uVar15 = __vbaCastObjVar(uVar15,uVar26);
                uVar15 = __vbaObjSet(&pppppppppuStack_260,uVar15);
                uVar15 = __vbaCastObj(uVar15,puVar27);
                __vbaObjSet(&pppppppppuStack_240,uVar15);
                __vbaFreeObjList(2,&pppppppppuStack_25c,&pppppppppuStack_260);
                __vbaFreeVar(puVar28);
              }
              sVar3 = __vbaObjIs(pppppppppuStack_240,0);
              if (sVar3 == 0) {
                iVar10 = (*(code *)(*pppppppppuVar8[0x1a])[0x1b])
                                   (pppppppppuVar8[0x1a],&pppppppppuStack_25c);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,pppppppppuVar8[0x1a],&LAB_004133e8,0x6c);
                }
                pppppppppuVar21 = pppppppppuStack_25c;
                iVar10 = (*(code *)(*pppppppppuStack_240)[0x13])
                                   (pppppppppuStack_240,&pppppppppuStack_250);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,pppppppppuStack_240,&DAT_00417d44,0x4c);
                }
                ppppppppuStack_270 = (undefined ********)pppppppppuStack_250;
                pppppppppuStack_250 = (undefined *********)0x0;
                pppppppppuStack_278 = (undefined *********)0x8;
                pppppppppuVar25 = pppppppppuVar21;
                iVar10 = (*(code *)(*pppppppppuVar21)[9])
                                   (pppppppppuVar21,&pppppppppuStack_278,&pppppppppuStack_260);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,pppppppppuVar21,&DAT_004146fc,0x24);
                }
                ppppppppppuVar9 = (undefined **********)(pppppppppuVar8 + 0x1b);
                __vbaObjSetAddref(ppppppppppuVar9,pppppppppuStack_260);
                __vbaFreeObjList(2,&pppppppppuStack_25c,&pppppppppuStack_260);
                __vbaFreeVar(pppppppppuVar25);
                iVar10 = (*(code *)(*pppppppppuStack_240)[9])
                                   (pppppppppuStack_240,&pppppppppuStack_250);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,pppppppppuStack_240,&DAT_00417d44,0x24);
                }
                iVar10 = (*(code *)(**ppppppppppuVar9)[9])(*ppppppppppuVar9,&pppppppppuStack_254);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,*ppppppppppuVar9,&LAB_0041470c,0x24);
                }
                iVar10 = __vbaStrCmp(pppppppppuStack_254,pppppppppuStack_250);
                sStack_320 = -(ushort)(iVar10 != 0);
                __vbaFreeStrList(2,&pppppppppuStack_250,&pppppppppuStack_254);
                if (sStack_320 != 0) {
                  iVar10 = (*(code *)(**ppppppppppuVar9)[9])(*ppppppppppuVar9,&pppppppppuStack_250);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,*ppppppppppuVar9,&LAB_0041470c,0x24);
                  }
                  iVar10 = (*(code *)(*pppppppppuStack_240)[10])
                                     (pppppppppuStack_240,pppppppppuStack_250);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,pppppppppuStack_240,&DAT_00417d44,0x28);
                  }
                  __vbaFreeStr();
                }
                __vbaObjSetAddref(apiStack_338,*ppppppppppuVar9);
                uVar15 = (*(code *)(*pppppppppuVar8)[0xcf])(pppppppppuVar8);
                piVar16 = (int *)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                iVar10 = (**(code **)(*apiStack_338[0] + 0x24))
                                   (apiStack_338[0],&pppppppppuStack_250);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,apiStack_338[0],&LAB_0041470c,0x24);
                }
                iVar10 = (**(code **)(*piVar16 + 0xa4))(piVar16,pppppppppuStack_250);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,piVar16,&DAT_00417a98,0xa4);
                }
                __vbaFreeStr();
                __vbaFreeObj();
                uVar15 = (*(code *)(*pppppppppuVar8)[0xc9])(pppppppppuVar8);
                ppppppppuStack_31c = (undefined ********)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                iVar10 = (**(code **)(*apiStack_338[0] + 0x2c))
                                   (apiStack_338[0],&pppppppppuStack_250);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,apiStack_338[0],&LAB_0041470c,0x2c);
                }
                iVar10 = (**(code **)((int)*ppppppppuStack_31c + 0xa4))
                                   (ppppppppuStack_31c,pppppppppuStack_250);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,ppppppppuStack_31c,&DAT_00417a98,0xa4);
                }
                __vbaFreeStr();
                __vbaFreeObj();
                uVar15 = (*(code *)(*pppppppppuVar8)[200])(pppppppppuVar8);
                ppppppppuStack_31c = (undefined ********)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                iVar10 = (**(code **)(*apiStack_338[0] + 0x34))
                                   (apiStack_338[0],&pppppppppuStack_250);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,apiStack_338[0],&LAB_0041470c,0x34);
                }
                iVar10 = (**(code **)((int)*ppppppppuStack_31c + 0xa4))
                                   (ppppppppuStack_31c,pppppppppuStack_250);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,ppppppppuStack_31c,&DAT_00417a98,0xa4);
                }
                __vbaFreeStr();
                __vbaFreeObj();
                uVar15 = (*(code *)(*pppppppppuVar8)[0xcf])(pppppppppuVar8);
                ppppppppuStack_31c = (undefined ********)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                iVar10 = (*(code *)(*pppppppppuVar8[0x1a])[0x13])(pppppppppuVar8[0x1a],auStack_30c);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,pppppppppuVar8[0x1a],&LAB_004133e8,0x4c);
                }
                iVar10 = (**(code **)((int)*ppppppppuStack_31c + 0x1b4))
                                   (ppppppppuStack_31c,~auStack_30c[0]);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,ppppppppuStack_31c,&DAT_00417a98,0x1b4);
                }
                __vbaFreeObj();
                uVar15 = (*(code *)(*pppppppppuVar8)[0xc9])(pppppppppuVar8);
                ppppppppuStack_31c = (undefined ********)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                iVar10 = (*(code *)(*pppppppppuVar8[0x1a])[0x13])(pppppppppuVar8[0x1a],auStack_30c);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,pppppppppuVar8[0x1a],&LAB_004133e8,0x4c);
                }
                iVar10 = (**(code **)((int)*ppppppppuStack_31c + 0x1b4))
                                   (ppppppppuStack_31c,~auStack_30c[0]);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,ppppppppuStack_31c,&DAT_00417a98,0x1b4);
                }
                __vbaFreeObj();
                uVar15 = (*(code *)(*pppppppppuVar8)[200])(pppppppppuVar8);
                ppppppppuStack_31c = (undefined ********)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                iVar10 = (*(code *)(*pppppppppuVar8[0x1a])[0x13])(pppppppppuVar8[0x1a],auStack_30c);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,pppppppppuVar8[0x1a],&LAB_004133e8,0x4c);
                }
                iVar10 = (**(code **)((int)*ppppppppuStack_31c + 0x1b4))
                                   (ppppppppuStack_31c,~auStack_30c[0]);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,ppppppppuStack_31c,&DAT_00417a98,0x1b4);
                }
                __vbaFreeObj();
                iVar10 = (**(code **)(*apiStack_338[0] + 0x44))
                                   (apiStack_338[0],&pppppppppuStack_25c);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,apiStack_338[0],&LAB_0041470c,0x44);
                }
                ppppppppuStack_31c = (undefined ********)pppppppppuStack_25c;
                iVar10 = (*(code *)(*pppppppppuStack_25c)[9])(pppppppppuStack_25c,auStack_30c);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,ppppppppuStack_31c,&LAB_004133f8,0x24);
                }
                sStack_324 = (short)auStack_30c[0];
                __vbaFreeObj();
                if (sStack_324 == 0) {
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd1])(pppppppppuVar8);
                  piStack_318 = (int *)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                  iVar10 = (**(code **)(*piStack_318 + 0x9c))(piStack_318,0);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,piStack_318,&DAT_004182f8,0x9c);
                  }
                  __vbaFreeObj();
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd0])(pppppppppuVar8);
                  piStack_318 = (int *)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                  iVar10 = (**(code **)(*piStack_318 + 0x9c))(piStack_318,0);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,piStack_318,&DAT_004182f8,0x9c);
                  }
                  __vbaFreeObj();
                  uVar26 = 0x80010007;
                  uVar23 = 0xb;
                  uVar24 = 0;
                  ppppppppppuVar9 = (undefined **********)pppppppppuVar8;
                  ppppppppppuVar11 = (undefined **********)pppppppppuStack_2d4;
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd5])
                                     (pppppppppuVar8,0x80010007,0xb,pppppppppuStack_2d4,0,
                                      pppppppppuStack_2cc);
                  uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                  __vbaLateIdSt(uVar15,ppppppppppuVar9,uVar26,uVar23,ppppppppppuVar11,uVar24);
                  __vbaFreeObj();
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd4])
                                     (pppppppppuVar8,0x80010007,0xb,pppppppppuStack_2d4,0,
                                      pppppppppuStack_2cc);
                  uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                  __vbaLateIdSt(uVar15,in_stack_fffffb60,in_stack_fffffb64,in_stack_fffffb68,
                                in_stack_fffffb6c,in_stack_fffffb70);
                  __vbaFreeObj();
                }
                else {
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd1])(pppppppppuVar8);
                  piStack_318 = (int *)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                  iVar10 = (**(code **)(*piStack_318 + 0x9c))(piStack_318,0xffffffff);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,piStack_318,&DAT_004182f8,0x9c);
                  }
                  __vbaFreeObj();
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd0])(pppppppppuVar8);
                  piVar16 = (int *)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                  iVar10 = (**(code **)(*piVar16 + 0x9c))(piVar16,0xffffffff);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,piVar16,&DAT_004182f8,0x9c);
                  }
                  __vbaFreeObj();
                  uVar26 = 0x80010007;
                  uVar23 = 0xb;
                  uVar24 = 0xffffffff;
                  ppppppppppuVar9 = (undefined **********)pppppppppuVar8;
                  ppppppppppuVar11 = (undefined **********)pppppppppuStack_2d4;
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd5])
                                     (pppppppppuVar8,0x80010007,0xb,pppppppppuStack_2d4,0xffffffff,
                                      pppppppppuStack_2cc);
                  uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                  __vbaLateIdSt(uVar15,ppppppppppuVar9,uVar26,uVar23,ppppppppppuVar11,uVar24);
                  __vbaFreeObj();
                  uVar26 = 0x80010007;
                  uVar23 = 0xb;
                  uVar24 = 0xffffffff;
                  ppppppppppuVar9 = (undefined **********)pppppppppuVar8;
                  ppppppppppuVar11 = (undefined **********)pppppppppuStack_2d4;
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd4])
                                     (pppppppppuVar8,0x80010007,0xb,pppppppppuStack_2d4,0xffffffff,
                                      pppppppppuStack_2cc);
                  uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                  __vbaLateIdSt(uVar15,ppppppppppuVar9,uVar26,uVar23,ppppppppppuVar11,uVar24);
                  __vbaFreeObj();
                  uVar26 = 0;
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd5])(pppppppppuVar8,7,0,&DAT_00417d34);
                  uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                  uVar15 = __vbaLateIdCallLd(&pppppppppuStack_278,uVar15);
                  uVar15 = __vbaCastObjVar(uVar15,uVar26);
                  piVar17 = (int *)__vbaObjSet(&pppppppppuStack_260,uVar15);
                  piVar16 = piVar17;
                  iVar10 = (**(code **)(*piVar17 + 0x2c))(piVar17);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,piVar17,&DAT_00417d34,0x2c);
                  }
                  __vbaFreeObjList(2,&pppppppppuStack_25c,&pppppppppuStack_260);
                  __vbaFreeVar(piVar16);
                  iVar10 = (**(code **)(*apiStack_338[0] + 0x3c))
                                     (apiStack_338[0],&pppppppppuStack_25c);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,apiStack_338[0],&LAB_0041470c,0x3c);
                  }
                  pppppppppuVar21 = pppppppppuStack_25c;
                  pppppppppuStack_25c = (undefined *********)0x0;
                  uVar15 = __vbaObjSet(&uStack_33c,pppppppppuVar21);
                  iVar10 = __vbaForEachCollObj(&DAT_00414bb4,&uStack_340,&pppppppppuStack_244,uVar15
                                              );
                  while (iVar10 != 0) {
                    iVar10 = (**(code **)(*apiStack_338[0] + 0x44))
                                       (apiStack_338[0],&pppppppppuStack_260);
                    if (iVar10 < 0) {
                      __vbaHresultCheckObj(iVar10,apiStack_338[0],&LAB_0041470c,0x44);
                    }
                    pppppppppuVar21 = pppppppppuStack_260;
                    iVar10 = (*(code *)(*pppppppppuStack_260)[0x19])
                                       (pppppppppuStack_260,&pppppppppuStack_264);
                    if (iVar10 < 0) {
                      __vbaHresultCheckObj(iVar10,pppppppppuVar21,&LAB_004133f8,100);
                    }
                    iVar10 = (*(code *)(*pppppppppuStack_244)[10])
                                       (pppppppppuStack_244,&pppppppppuStack_25c);
                    if (iVar10 < 0) {
                      __vbaHresultCheckObj(iVar10,pppppppppuStack_244,&DAT_00414bb4,0x28);
                    }
                    sVar3 = __vbaObjIs(pppppppppuStack_25c,pppppppppuStack_264);
                    __vbaFreeObjList(3,&pppppppppuStack_260,&pppppppppuStack_264,
                                     &pppppppppuStack_25c);
                    if (sVar3 != 0) {
                      iVar10 = (*(code *)(*pppppppppuStack_244)[0xb])
                                         (pppppppppuStack_244,&pppppppppuStack_254);
                      if (iVar10 < 0) {
                        __vbaHresultCheckObj(iVar10,pppppppppuStack_244,&DAT_00414bb4,0x2c);
                      }
                      uVar26 = 0;
                      uVar15 = (*(code *)(*pppppppppuVar8)[0xd5])(pppppppppuVar8,7,0,&DAT_00417d34);
                      uVar15 = __vbaObjSet(&pppppppppuStack_260,uVar15);
                      uVar15 = __vbaLateIdCallLd(&pppppppppuStack_278,uVar15);
                      uVar15 = __vbaCastObjVar(uVar15,uVar26);
                      piVar16 = (int *)__vbaObjSet(&pppppppppuStack_264,uVar15);
                      pppppppppuStack_2a0 = pppppppppuStack_254;
                      pppppppppuStack_2c0 = (undefined *********)0x80020004;
                      pppppppppuStack_2b0 = (undefined *********)0x80020004;
                      pppppppppuStack_290 = (undefined *********)0x80020004;
                      pppppppppuStack_280 = (undefined *********)0x80020004;
                      pppppppppuStack_2c8 = (undefined *********)0xa;
                      pppppppppuStack_2b8 = (undefined *********)0xa;
                      pppppppppuStack_298 = (undefined *********)0xa;
                      pppppppppuStack_288 = (undefined *********)0xa;
                      pppppppppuStack_254 = (undefined *********)0x0;
                      pppppppppuStack_2a8 = (undefined *********)0x8;
                      iVar10 = (**(code **)(*piVar16 + 0x28))
                                         (piVar16,&pppppppppuStack_288,&pppppppppuStack_298,
                                          &pppppppppuStack_2a8,&pppppppppuStack_2b8,
                                          &pppppppppuStack_2c8,&pppppppppuStack_268);
                      if (iVar10 < 0) {
                        __vbaHresultCheckObj(iVar10,piVar16,&DAT_00417d34,0x28);
                      }
                      ppppppppuStack_330 = (undefined ********)pppppppppuStack_268;
                      iVar10 = (*(code *)(*pppppppppuVar8[0x1a])[0x18])
                                         (pppppppppuVar8[0x1a],&pppppppppuStack_25c);
                      if (iVar10 < 0) {
                        __vbaHresultCheckObj(iVar10,pppppppppuVar8[0x1a],&LAB_004133e8,0x60);
                      }
                      pppppppppuVar21 = pppppppppuStack_25c;
                      uStack_314 = 1;
                      iVar10 = (*(code *)(*pppppppppuStack_25c)[10])
                                         (pppppppppuStack_25c,&uStack_314,pppppppppuVar8 + 0x1b,
                                          &pppppppppuStack_244,&pppppppppuStack_250);
                      if (iVar10 < 0) {
                        __vbaHresultCheckObj(iVar10,pppppppppuVar21,&DAT_00414c50,0x28);
                      }
                      ppppppppuVar2 = ppppppppuStack_330;
                      iVar10 = (*(code *)(*ppppppppuStack_330)[0x2d])
                                         (ppppppppuStack_330,pppppppppuStack_250);
                      if (iVar10 < 0) {
                        __vbaHresultCheckObj(iVar10,ppppppppuVar2,&DAT_00417d44,0xb4);
                      }
                      __vbaFreeStr();
                      __vbaFreeObjList(4,&pppppppppuStack_25c,&pppppppppuStack_260,
                                       &pppppppppuStack_264,&pppppppppuStack_268);
                      __vbaFreeVarList(6,&pppppppppuStack_278,&pppppppppuStack_288,
                                       &pppppppppuStack_298,&pppppppppuStack_2a8,
                                       &pppppppppuStack_2b8,&pppppppppuStack_2c8);
                    }
                    iVar10 = __vbaNextEachCollObj(&DAT_00414bb4,&uStack_340,&pppppppppuStack_244);
                  }
                  uVar26 = 0;
                  uVar15 = (*(code *)(*pppppppppuVar8)[0xd4])(pppppppppuVar8,7,0,&DAT_00417d34);
                  uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                  uVar15 = __vbaLateIdCallLd(&pppppppppuStack_278,uVar15);
                  uVar15 = __vbaCastObjVar(uVar15,uVar26);
                  piVar17 = (int *)__vbaObjSet(&pppppppppuStack_260,uVar15);
                  piVar16 = piVar17;
                  iVar10 = (**(code **)(*piVar17 + 0x2c))(piVar17);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,piVar17,&DAT_00417d34,0x2c);
                  }
                  __vbaFreeObjList(2,&pppppppppuStack_25c,&pppppppppuStack_260);
                  __vbaFreeVar(piVar16);
                  iVar10 = (**(code **)(*apiStack_338[0] + 0x44))
                                     (apiStack_338[0],&pppppppppuStack_25c);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,apiStack_338[0],&LAB_0041470c,0x44);
                  }
                  pppppppppuVar21 = pppppppppuStack_25c;
                  iVar10 = (*(code *)(*pppppppppuStack_25c)[0x1a])
                                     (pppppppppuStack_25c,&pppppppppuStack_260);
                  if (iVar10 < 0) {
                    __vbaHresultCheckObj(iVar10,pppppppppuVar21,&LAB_004133f8,0x68);
                  }
                  pppppppppuVar21 = pppppppppuStack_260;
                  pppppppppuStack_260 = (undefined *********)0x0;
                  uVar15 = __vbaObjSet(&uStack_344,pppppppppuVar21);
                  iVar10 = __vbaForEachCollObj(&DAT_00413cf8,&uStack_348,&pppppppppuStack_248,uVar15
                                              );
                  __vbaFreeObj();
                  while (iVar10 != 0) {
                    iVar10 = (*(code *)(*pppppppppuStack_248)[9])
                                       (pppppppppuStack_248,&pppppppppuStack_25c);
                    if (iVar10 < 0) {
                      __vbaHresultCheckObj(iVar10,pppppppppuStack_248,&DAT_00413cf8,0x24);
                    }
                    pppppppppuVar21 = pppppppppuStack_25c;
                    iVar10 = (*(code *)(*pppppppppuStack_25c)[0x1b])
                                       (pppppppppuStack_25c,&pppppppppuStack_260);
                    if (iVar10 < 0) {
                      __vbaHresultCheckObj(iVar10,pppppppppuVar21,&LAB_004133e8,0x6c);
                    }
                    pppppppppuVar21 = pppppppppuStack_260;
                    pppppppppuStack_260 = (undefined *********)0x0;
                    uVar15 = __vbaObjSet(&uStack_34c,pppppppppuVar21);
                    iVar10 = __vbaForEachCollObj(&LAB_0041470c,&uStack_350,&pppppppppuStack_24c,
                                                 uVar15);
                    __vbaFreeObj();
                    while (iVar10 != 0) {
                      iVar10 = (*(code *)(*pppppppppuStack_24c)[0xf])
                                         (pppppppppuStack_24c,&pppppppppuStack_25c);
                      pcVar19 = __vbaHresultCheckObj_exref;
                      if (iVar10 < 0) {
                        __vbaHresultCheckObj(iVar10,pppppppppuStack_24c,&LAB_0041470c,0x3c);
                      }
                      pppppppppuVar21 = pppppppppuStack_25c;
                      pppppppppuStack_25c = (undefined *********)0x0;
                      uVar15 = __vbaObjSet(&uStack_354,pppppppppuVar21);
                      iVar10 = __vbaForEachCollObj(&DAT_00414bb4,&uStack_358,&pppppppppuStack_244,
                                                   uVar15);
                      while (iVar10 != 0) {
                        iVar10 = (*(code *)(*pppppppppuStack_248)[10])
                                           (pppppppppuStack_248,&pppppppppuStack_260);
                        if (iVar10 < 0) {
                          (*pcVar19)(iVar10,pppppppppuStack_248,&DAT_00413cf8,0x28);
                        }
                        iVar10 = (*(code *)(*pppppppppuStack_244)[10])
                                           (pppppppppuStack_244,&pppppppppuStack_25c);
                        if (iVar10 < 0) {
                          (*pcVar19)(iVar10,pppppppppuStack_244,&DAT_00414bb4,0x28);
                        }
                        sVar3 = __vbaObjIs(pppppppppuStack_25c,pppppppppuStack_260);
                        __vbaFreeObjList(2,&pppppppppuStack_260,&pppppppppuStack_25c);
                        if (sVar3 != 0) {
                          puVar22 = auStack_30c;
                          auStack_30c[0] = 0;
                          iVar10 = (*(code *)(*pppppppppuStack_244)[0xe])
                                             (pppppppppuStack_244,puVar22);
                          if (iVar10 < 0) {
                            __vbaHresultCheckObj(iVar10,pppppppppuStack_244,&DAT_00414bb4,0x38);
                          }
                          iVar10 = (*(code *)(*pppppppppuStack_244)[0xc])
                                             (pppppppppuStack_244,&pppppppppuStack_278);
                          if (iVar10 < 0) {
                            __vbaHresultCheckObj(iVar10,pppppppppuStack_244,&DAT_00414bb4,0x30);
                          }
                          sVar3 = rtcIsObject(&pppppppppuStack_278);
                          __vbaFreeVar(puVar22);
                          if (sVar3 != 0) {
                            ppppppppppuVar9 = &pppppppppuStack_278;
                            iVar10 = (*(code *)(*pppppppppuStack_244)[0xc])
                                               (pppppppppuStack_244,ppppppppppuVar9);
                            if (iVar10 < 0) {
                              __vbaHresultCheckObj(iVar10,pppppppppuStack_244,&DAT_00414bb4,0x30);
                            }
                            pppppppppuVar21 = (undefined *********)pppppppppuVar8[0x1b];
                            uVar15 = __vbaUnkVar(&pppppppppuStack_278);
                            sVar3 = __vbaObjIs(uVar15,pppppppppuVar21);
                            __vbaFreeVar(ppppppppppuVar9);
                            if (sVar3 != 0) {
                              iVar10 = (*(code *)(*pppppppppuStack_24c)[9])
                                                 (pppppppppuStack_24c,&pppppppppuStack_250);
                              if (iVar10 < 0) {
                                __vbaHresultCheckObj(iVar10,pppppppppuStack_24c,&LAB_0041470c,0x24);
                              }
                              iVar10 = (*(code *)(*pppppppppuStack_248)[0xb])
                                                 (pppppppppuStack_248,&pppppppppuStack_254);
                              if (iVar10 < 0) {
                                __vbaHresultCheckObj(iVar10,pppppppppuStack_248,&DAT_00413cf8,0x2c);
                              }
                              uVar26 = 0;
                              uVar15 = (*(code *)(*pppppppppuVar8)[0xd4])
                                                 (pppppppppuVar8,7,0,&DAT_00417d34);
                              uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                              uVar15 = __vbaLateIdCallLd(&pppppppppuStack_278,uVar15);
                              uVar15 = __vbaCastObjVar(uVar15,uVar26);
                              piVar16 = (int *)__vbaObjSet(&pppppppppuStack_260,uVar15);
                              pppppppppuStack_2c0 = (undefined *********)0x80020004;
                              pppppppppuStack_2b0 = (undefined *********)0x80020004;
                              pppppppppuStack_2c8 = (undefined *********)0xa;
                              pppppppppuStack_2b8 = (undefined *********)0xa;
                              __vbaStrCat(&DAT_004179c4 /* bstr: ' ' */,pppppppppuStack_250);
                              uVar15 = __vbaStrMove();
                              pppppppppuStack_2a0 =
                                   (undefined *********)__vbaStrCat(pppppppppuStack_254,uVar15);
                              pppppppppuStack_290 = (undefined *********)0x80020004;
                              pppppppppuStack_280 = (undefined *********)0x80020004;
                              pppppppppuStack_2a8 = (undefined *********)0x8;
                              pppppppppuStack_298 = (undefined *********)0xa;
                              pppppppppuStack_288 = (undefined *********)0xa;
                              iVar10 = (**(code **)(*piVar16 + 0x28))
                                                 (piVar16,&pppppppppuStack_288,&pppppppppuStack_298,
                                                  &pppppppppuStack_2a8,&pppppppppuStack_2b8,
                                                  &pppppppppuStack_2c8,&pppppppppuStack_264);
                              if (iVar10 < 0) {
                                __vbaHresultCheckObj(iVar10,piVar16,&DAT_00417d34,0x28);
                              }
                              __vbaFreeStrList(3,&pppppppppuStack_250,&pppppppppuStack_258,
                                               &pppppppppuStack_254);
                              __vbaFreeObjList(3,&pppppppppuStack_25c,&pppppppppuStack_260,
                                               &pppppppppuStack_264);
                              __vbaFreeVarList(6,&pppppppppuStack_278,&pppppppppuStack_288,
                                               &pppppppppuStack_298,&pppppppppuStack_2a8,
                                               &pppppppppuStack_2b8,&pppppppppuStack_2c8);
                            }
                          }
                        }
                        iVar10 = __vbaNextEachCollObj
                                           (&DAT_00414bb4,&uStack_358,&pppppppppuStack_244);
                        pcVar19 = __vbaHresultCheckObj_exref;
                      }
                      iVar10 = __vbaNextEachCollObj(&LAB_0041470c,&uStack_350,&pppppppppuStack_24c);
                    }
                    iVar10 = __vbaNextEachCollObj(&DAT_00413cf8,&uStack_348,&pppppppppuStack_248);
                  }
                }
                uStack_310 = 0xffffffff;
                uVar15 = __vbaCastObj(0,&LAB_004133f8);
                __vbaObjSet(&pppppppppuStack_25c,uVar15);
                auStack_30c[0] = 0;
                (*(code *)(*pppppppppuVar8)[0x1e1])
                          (pppppppppuVar8,pppppppppuVar8 + 0x1b,auStack_30c,&pppppppppuStack_25c,
                           &uStack_310);
                __vbaFreeObj();
                (*(code *)(*pppppppppuVar8)[0x1d7])(pppppppppuVar8);
                __vbaObjSetAddref(apiStack_338,0);
                uVar15 = (*(code *)(*pppppppppuVar8)[0xc6])(pppppppppuVar8);
                piVar16 = (int *)__vbaObjSet(&pppppppppuStack_25c,uVar15);
                iVar10 = (**(code **)(*piVar16 + 0x9c))(piVar16,0xffffffff);
                if (iVar10 < 0) {
                  __vbaHresultCheckObj(iVar10,piVar16,&DAT_0041804c,0x9c);
                }
                __vbaFreeObj();
LAB_0044f47f:
                *(undefined2 *)(pppppppppuVar8 + 0x23) = pppppppppuStack_23c._0_2_;
              }
              else {
                uVar15 = __vbaCastObj(0,&LAB_0041470c);
                uVar15 = __vbaObjSet(&pppppppppuStack_25c,uVar15);
                __vbaObjSetAddref(pppppppppuVar8 + 0x1b,uVar15);
                __vbaFreeObj();
                *(undefined2 *)(pppppppppuVar8 + 0x23) = pppppppppuStack_23c._0_2_;
              }
              __vbaFreeObjList(9,apiStack_338,&uStack_33c,&uStack_340,&uStack_344,&uStack_348,
                               &uStack_34c,&uStack_350,&uStack_354,&uStack_358,&LAB_0044f54c);
              __vbaFreeObj();
              __vbaFreeObj();
              __vbaFreeObj();
              __vbaFreeObj();
              return;
            }
            pppppppppuStack_22c = (undefined *********)0x44d1d5;
            local_e4[0] = (undefined *********)__vbaI2I4();
            pppppppppuStack_228 = (undefined *********)&LAB_0041470c;
            pppppppppuStack_22c = (undefined *********)0x0;
            pppppppppuStack_230 = (undefined *********)0x44d1e8;
            pppppppppuStack_228 = (undefined *********)__vbaCastObj();
            pppppppppuStack_22c = (undefined *********)&local_54;
            pppppppppuStack_230 = (undefined *********)0x44d1ef;
            __vbaObjSet();
            pppppppppuStack_228 = &local_e8;
            pppppppppuStack_22c = (undefined *********)&local_58;
            pppppppppuStack_230 = (undefined *********)local_e4;
            pppppppppuStack_234 = (undefined *********)&local_54;
            pppppppppuStack_238 = (undefined *********)param_1;
            pppppppppuStack_23c = (undefined *********)0x44d211;
            (*(code *)(*param_1)[0x1e1])();
            pppppppppuStack_280 = (undefined *********)&local_58;
            pppppppppuStack_284 = (undefined *********)&local_54;
            pppppppppuStack_288 = (undefined *********)0x2;
            pppppppppuStack_28c = (undefined *********)0x44d221;
            __vbaFreeObjList();
            pppppppppuStack_280 = (undefined *********)0x44d229;
            __vbaFreeVar();
          }
        }
        else {
          pppppppppuStack_284 = &local_ec;
          pppppppppuStack_288 = local_48;
          pppppppppuStack_28c = (undefined *********)0x44d2f3;
          ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x15])();
          if ((int)ppppppppppuVar9 < 0) {
            pppppppppuStack_28c = (undefined *********)0x54;
            pppppppppuStack_290 = (undefined *********)&DAT_00414268;
            pppppppppuStack_294 = local_48;
            pppppppppuStack_29c = (undefined *********)0x44d307;
            pppppppppuStack_298 = (undefined *********)ppppppppppuVar9;
            (*(code *)pppppppuVar18)();
          }
          if ((undefined *********)local_ec == (undefined *********)0x0) {
            pppppppppuStack_28c = (undefined *********)&local_54;
            pppppppppuStack_290 = local_48;
            pppppppppuStack_294 = (undefined *********)0x44d915;
            ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1a])();
            if ((int)ppppppppppuVar9 < 0) {
              pppppppppuStack_2a4 = (undefined *********)0x68;
              pppppppppuStack_2a8 = (undefined *********)&DAT_00414268;
              pppppppppuStack_2ac = local_48;
              pppppppppuStack_2b4 = (undefined *********)0x44d929;
              pppppppppuStack_2b0 = (undefined *********)ppppppppppuVar9;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_2a4 = (undefined *********)0x0;
            pppppppppuStack_2a8 = local_54;
            pppppppppuStack_2ac = (undefined *********)0x44d935;
            sVar3 = __vbaObjIs();
            pppppppppuStack_2a4 = (undefined *********)0x44d941;
            __vbaFreeObj();
            if (sVar3 != 0) {
              if (DAT_00480244 == (undefined **********)0x0) {
                pppppppppuStack_2a4 = (undefined *********)&DAT_00480244;
                pppppppppuStack_2a8 = (undefined *********)&DAT_00413b34;
                pppppppppuStack_2ac = (undefined *********)0x44d963;
                __vbaNew2();
              }
              ppppppppppuVar9 = DAT_00480244;
              pppppppppuStack_2a4 = (undefined *********)param_1;
              pppppppppuStack_2a8 = (undefined *********)0x44d975;
              pppppppppuStack_2a8 = (undefined *********)(*(code *)(*param_1)[0xcc])();
              pppppppppuStack_2ac = (undefined *********)&local_58;
              pppppppppuStack_2b0 = (undefined *********)0x44d980;
              ppppppppppuVar11 = (undefined **********)__vbaObjSet();
              pppppppppuStack_2a8 = (undefined *********)param_1;
              pppppppppuStack_2ac = (undefined *********)0x44d98b;
              pppppppppuStack_2ac = (undefined *********)(*(code *)(*param_1)[0xcc])();
              pppppppppuStack_2b0 = (undefined *********)&local_54;
              pppppppppuStack_2b4 = (undefined *********)0x44d996;
              ppppppppppuVar12 = (undefined **********)__vbaObjSet();
              pppppppppuStack_2ac = (undefined *********)local_e4;
              pppppppppuStack_2b4 = (undefined *********)0x44d9a5;
              pppppppppuStack_2b0 = (undefined *********)ppppppppppuVar12;
              pppppppppuStack_2c0 = (undefined *********)(*(code *)(*ppppppppppuVar12)[0x13])();
              if ((int)pppppppppuStack_2c0 < 0) {
                pppppppppuStack_2b4 = (undefined *********)0x4c;
                pppppppppuStack_2b8 = (undefined *********)&DAT_004182e4;
                pppppppppuStack_2c4 = (undefined *********)0x44d9ba;
                pppppppppuStack_2bc = (undefined *********)ppppppppppuVar12;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_2b4 = &local_5c;
              pppppppppuStack_2b8 = local_e4[0];
              pppppppppuStack_2c0 = (undefined *********)0x44d9cb;
              pppppppppuStack_2bc = (undefined *********)ppppppppppuVar11;
              ppppppppppuVar12 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
              if ((int)ppppppppppuVar12 < 0) {
                pppppppppuStack_2c0 = (undefined *********)0x40;
                pppppppppuStack_2c4 = (undefined *********)&DAT_004182e4;
                pppppppppuStack_2d0 = (undefined *********)0x44d9e0;
                pppppppppuStack_2cc = (undefined *********)ppppppppppuVar12;
                pppppppppuStack_2c8 = (undefined *********)ppppppppppuVar11;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_2c0 = (undefined *********)local_5c;
              local_5c = (undefined ********)0x0;
              pppppppppuVar8 = *ppppppppppuVar9;
              pppppppppuStack_2c4 = (undefined *********)&local_60;
              pppppppppuStack_2c8 = (undefined *********)0x44d9f7;
              pppppppppuStack_2c0 = (undefined *********)__vbaObjSet();
              pppppppppuStack_2c4 = (undefined *********)ppppppppppuVar9;
              pppppppppuStack_2c8 = (undefined *********)0x44d9fc;
              pppppppppuStack_2d4 = (undefined *********)(*(code *)pppppppppuVar8[3])();
              if ((int)pppppppppuStack_2d4 < 0) {
                pppppppppuStack_2c8 = (undefined *********)0xc;
                pppppppppuStack_2cc = (undefined *********)&DAT_00413b24;
                pppppppppuStack_2d0 = (undefined *********)ppppppppppuVar9;
                pppppppppuStack_2d8 = (undefined *********)0x44da11;
                __vbaHresultCheckObj();
              }
              pppppppuVar18 = (undefined *******)__vbaFreeObjList_exref;
              pppppppppuStack_2c8 = (undefined *********)&local_60;
              pppppppppuStack_2cc = (undefined *********)&local_58;
              pppppppppuStack_2d0 = (undefined *********)&local_54;
              pppppppppuStack_2d4 = (undefined *********)0x3;
              pppppppppuStack_2d8 = (undefined *********)0x44da27;
              __vbaFreeObjList();
              pppppppppuStack_2c8 = (undefined *********)param_1;
              pppppppppuStack_2cc = (undefined *********)0x44da36;
              pppppppppuStack_2cc = (undefined *********)(*(code *)(*param_1)[0xcc])();
              pppppppppuStack_2d0 = (undefined *********)&local_58;
              pppppppppuStack_2d4 = (undefined *********)0x44da41;
              ppppppppppuVar11 = (undefined **********)__vbaObjSet();
              pppppppppuStack_2cc = (undefined *********)param_1;
              pppppppppuStack_2d0 = (undefined *********)0x44da4c;
              pppppppppuStack_2d0 = (undefined *********)(*(code *)(*param_1)[0xcc])();
              pppppppppuStack_2d4 = (undefined *********)&local_54;
              pppppppppuStack_2d8 = (undefined *********)0x44da57;
              ppppppppppuVar12 = (undefined **********)__vbaObjSet();
              pppppppppuStack_2d0 = (undefined *********)local_e4;
              pppppppppuStack_2d8 = (undefined *********)0x44da66;
              pppppppppuStack_2d4 = (undefined *********)ppppppppppuVar12;
              ppppppppppuVar13 = (undefined **********)(*(code *)(*ppppppppppuVar12)[0x13])();
              ppppppppppuVar9 = (undefined **********)__vbaHresultCheckObj_exref;
              if ((int)ppppppppppuVar13 < 0) {
                pppppppppuStack_228 = (undefined *********)0x4c;
                pppppppppuStack_22c = (undefined *********)&DAT_004182e4;
                pppppppppuStack_238 = (undefined *********)0x44da7d;
                pppppppppuStack_234 = (undefined *********)ppppppppppuVar13;
                pppppppppuStack_230 = (undefined *********)ppppppppppuVar12;
                ppppppppppuVar13 = (undefined **********)__vbaHresultCheckObj();
              }
              pppppppppuStack_228 = &local_5c;
              pppppppppuStack_22c =
                   (undefined *********)
                   CONCAT22((short)((uint)ppppppppppuVar13 >> 0x10),(short)local_e4[0] + -1);
              if (SBORROW2((short)local_e4[0],1)) goto LAB_0044e1c6;
              pppppppppuStack_234 = (undefined *********)0x44daa1;
              pppppppppuStack_230 = (undefined *********)ppppppppppuVar11;
              ppppppppppuVar9 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
              if ((int)ppppppppppuVar9 < 0) {
                pppppppppuStack_234 = (undefined *********)0x40;
                pppppppppuStack_238 = (undefined *********)&DAT_004182e4;
                pppppppppuStack_244 = (undefined *********)0x44dab2;
                pppppppppuStack_240 = (undefined *********)ppppppppppuVar9;
                pppppppppuStack_23c = (undefined *********)ppppppppppuVar11;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_234 = (undefined *********)&DAT_0041352c;
              pppppppppuStack_238 = (undefined *********)local_5c;
              pppppppppuStack_23c = (undefined *********)0x44dac1;
              pppppppppuStack_234 = (undefined *********)__vbaCastObj();
              pppppppppuStack_238 = (undefined *********)&local_60;
              pppppppppuStack_23c = (undefined *********)0x44dace;
              __vbaObjSet();
              pppppppppuStack_234 = (undefined *********)&local_60;
              pppppppppuStack_238 = local_48;
              pppppppppuStack_23c = (undefined *********)0x44dadb;
              pppppppppuStack_248 = (undefined *********)(*(code *)(*local_48)[0x1b])();
              if ((int)pppppppppuStack_248 < 0) {
                pppppppppuStack_23c = (undefined *********)0x6c;
                pppppppppuStack_240 = (undefined *********)&DAT_00414268;
                pppppppppuStack_244 = local_48;
                pppppppppuStack_24c = (undefined *********)0x44daef;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_23c = (undefined *********)&local_60;
              pppppppppuStack_240 = &local_5c;
              pppppppppuStack_244 = (undefined *********)&local_58;
              pppppppppuStack_248 = (undefined *********)&local_54;
              pppppppppuStack_24c = (undefined *********)0x4;
              pppppppppuStack_250 = (undefined *********)0x44db03;
              __vbaFreeObjList();
              pppppppppuStack_23c = (undefined *********)0x44db11;
              __vbaStrCopy();
              pppppppppuStack_234 = (undefined *********)&local_54;
              pppppppppuStack_238 = local_48;
              pppppppppuStack_23c = (undefined *********)0x44db1e;
              ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1a])();
              if ((int)ppppppppppuVar9 < 0) {
                pppppppppuStack_23c = (undefined *********)0x68;
                pppppppppuStack_240 = (undefined *********)&DAT_00414268;
                pppppppppuStack_244 = local_48;
                pppppppppuStack_24c = (undefined *********)0x44db32;
                pppppppppuStack_248 = (undefined *********)ppppppppppuVar9;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_240 = (undefined *********)&local_58;
              pppppppppuStack_23c = local_54;
              local_54 = (undefined *********)0x0;
              pppppppppuStack_244 = (undefined *********)0x44db43;
              __vbaObjSet();
              pppppppppuStack_23c = &local_5c;
              pppppppppuStack_240 = (undefined *********)&local_4c;
              pppppppppuStack_248 = (undefined *********)param_1[0x1e];
              pppppppppuStack_244 = (undefined *********)&local_58;
              pppppppppuStack_24c = (undefined *********)0x44db5b;
              ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppppppuStack_248)[7])();
              if ((int)ppppppppppuVar9 < 0) {
                pppppppppuStack_2ac = (undefined *********)param_1[0x1e];
                pppppppppuStack_2a4 = (undefined *********)0x1c;
                pppppppppuStack_2a8 = (undefined *********)&DAT_0041803c;
                pppppppppuStack_2b4 = (undefined *********)0x44db6f;
                pppppppppuStack_2b0 = (undefined *********)ppppppppppuVar9;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_2a4 = (undefined *********)0x44db78;
              __vbaFreeStr();
              pppppppppuStack_2a4 = &local_5c;
              pppppppppuStack_2a8 = (undefined *********)&local_58;
              pppppppppuStack_2ac = (undefined *********)0x2;
              pppppppppuStack_2b0 = (undefined *********)0x44db84;
              __vbaFreeObjList();
              pppppppuVar18 = (undefined *******)__vbaHresultCheckObj_exref;
              pcVar19 = __vbaLateMemSt_exref;
            }
          }
          else if ((undefined *********)local_ec == (undefined *********)0x1) {
            pppppppppuStack_28c = (undefined *********)&local_54;
            pppppppppuStack_290 = (undefined *********)param_1[0x18];
            pppppppppuStack_294 = (undefined *********)0x44d407;
            ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppppppuStack_290)[0x11])();
            if ((int)ppppppppppuVar9 < 0) {
              pppppppppuStack_29c = (undefined *********)param_1[0x18];
              pppppppppuStack_294 = (undefined *********)0x44;
              pppppppppuStack_298 = (undefined *********)&LAB_00414228;
              pppppppppuStack_2a4 = (undefined *********)0x44d41b;
              pppppppppuStack_2a0 = (undefined *********)ppppppppppuVar9;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuVar8 = local_54;
            pppppppppuStack_294 = (undefined *********)&local_70;
            pppppppppuStack_298 = local_48;
            pppppppppuStack_29c = (undefined *********)0x44d42b;
            pppppppppuStack_2a8 = (undefined *********)(*(code *)(*local_48)[0x16])();
            if ((int)pppppppppuStack_2a8 < 0) {
              pppppppppuStack_29c = (undefined *********)0x58;
              pppppppppuStack_2a0 = (undefined *********)&DAT_00414268;
              pppppppppuStack_2a4 = local_48;
              pppppppppuStack_2ac = (undefined *********)0x44d43f;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_29c = (undefined *********)&local_58;
            pppppppppuStack_2a0 = (undefined *********)&local_70;
            pppppppppuStack_2a4 = pppppppppuVar8;
            pppppppppuStack_2a8 = (undefined *********)0x44d44d;
            ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppppppuVar8)[9])();
            if ((int)ppppppppppuVar9 < 0) {
              pppppppppuStack_2a8 = (undefined *********)0x24;
              pppppppppuStack_2ac = (undefined *********)&DAT_00414238;
              pppppppppuStack_2b0 = pppppppppuVar8;
              pppppppppuStack_2b8 = (undefined *********)0x44d45e;
              pppppppppuStack_2b4 = (undefined *********)ppppppppppuVar9;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_2ac = (undefined *********)&local_24;
            pppppppppuStack_2a8 = local_58;
            local_58 = (undefined *********)0x0;
            pppppppppuStack_2b0 = (undefined *********)0x44d473;
            __vbaObjSet();
            pppppppppuStack_2a8 = (undefined *********)0x44d47c;
            __vbaFreeObj();
            pppppppppuStack_2a8 = (undefined *********)0x44d485;
            __vbaFreeVar();
            pppppppppuStack_2a4 = (undefined *********)&local_54;
            pppppppppuStack_2a8 = local_48;
            pppppppppuStack_2ac = (undefined *********)0x44d492;
            ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1a])();
            if ((int)ppppppppppuVar9 < 0) {
              pppppppppuStack_2ac = (undefined *********)0x68;
              pppppppppuStack_2b0 = (undefined *********)&DAT_00414268;
              pppppppppuStack_2b4 = local_48;
              pppppppppuStack_2bc = (undefined *********)0x44d4a6;
              pppppppppuStack_2b8 = (undefined *********)ppppppppppuVar9;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_2ac = (undefined *********)0x0;
            pppppppppuStack_2b0 = local_54;
            pppppppppuStack_2b4 = (undefined *********)0x44d4b2;
            sVar3 = __vbaObjIs();
            pppppppppuStack_2ac = (undefined *********)0x44d4be;
            __vbaFreeObj();
            if (sVar3 != 0) {
              if (DAT_00480244 == (undefined **********)0x0) {
                pppppppppuStack_2ac = (undefined *********)&DAT_00480244;
                pppppppppuStack_2b0 = (undefined *********)&DAT_00413b34;
                pppppppppuStack_2b4 = (undefined *********)0x44d4e0;
                __vbaNew2();
              }
              ppppppppppuVar9 = DAT_00480244;
              pppppppppuStack_2ac = (undefined *********)param_1;
              pppppppppuStack_2b0 = (undefined *********)0x44d4f2;
              pppppppppuStack_2b0 = (undefined *********)(*(code *)(*param_1)[0xcd])();
              pppppppppuStack_2b4 = (undefined *********)&local_58;
              pppppppppuStack_2b8 = (undefined *********)0x44d4fd;
              ppppppppppuVar11 = (undefined **********)__vbaObjSet();
              pppppppppuStack_2b0 = (undefined *********)param_1;
              pppppppppuStack_2b4 = (undefined *********)0x44d508;
              pppppppppuStack_2b4 = (undefined *********)(*(code *)(*param_1)[0xcd])();
              pppppppppuStack_2b8 = (undefined *********)&local_54;
              pppppppppuStack_2bc = (undefined *********)0x44d513;
              ppppppppppuVar12 = (undefined **********)__vbaObjSet();
              pppppppppuStack_2b4 = (undefined *********)local_e4;
              pppppppppuStack_2bc = (undefined *********)0x44d522;
              pppppppppuStack_2b8 = (undefined *********)ppppppppppuVar12;
              pppppppppuStack_2c8 = (undefined *********)(*(code *)(*ppppppppppuVar12)[0x13])();
              if ((int)pppppppppuStack_2c8 < 0) {
                pppppppppuStack_2bc = (undefined *********)0x4c;
                pppppppppuStack_2c0 = (undefined *********)&DAT_004182e4;
                pppppppppuStack_2cc = (undefined *********)0x44d537;
                pppppppppuStack_2c4 = (undefined *********)ppppppppppuVar12;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_2bc = &local_5c;
              pppppppppuStack_2c0 = local_e4[0];
              pppppppppuStack_2c8 = (undefined *********)0x44d548;
              pppppppppuStack_2c4 = (undefined *********)ppppppppppuVar11;
              ppppppppppuVar12 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
              if ((int)ppppppppppuVar12 < 0) {
                pppppppppuStack_2c8 = (undefined *********)0x40;
                pppppppppuStack_2cc = (undefined *********)&DAT_004182e4;
                pppppppppuStack_2d8 = (undefined *********)0x44d55d;
                pppppppppuStack_2d4 = (undefined *********)ppppppppppuVar12;
                pppppppppuStack_2d0 = (undefined *********)ppppppppppuVar11;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_2c8 = (undefined *********)local_5c;
              local_5c = (undefined ********)0x0;
              pppppppppuVar8 = *ppppppppppuVar9;
              pppppppppuStack_2cc = (undefined *********)&local_60;
              pppppppppuStack_2d0 = (undefined *********)0x44d574;
              pppppppppuStack_2c8 = (undefined *********)__vbaObjSet();
              pppppppppuStack_2cc = (undefined *********)ppppppppppuVar9;
              pppppppppuStack_2d0 = (undefined *********)0x44d579;
              pppppppppuStack_2dc = (undefined *********)(*(code *)pppppppppuVar8[3])();
              if ((int)pppppppppuStack_2dc < 0) {
                pppppppppuStack_2d0 = (undefined *********)0xc;
                pppppppppuStack_2d4 = (undefined *********)&DAT_00413b24;
                pppppppppuStack_2d8 = (undefined *********)ppppppppppuVar9;
                pppppppppuStack_2e0 = (undefined *********)0x44d58e;
                __vbaHresultCheckObj();
              }
              pppppppuVar18 = (undefined *******)__vbaFreeObjList_exref;
              pppppppppuStack_2d0 = (undefined *********)&local_60;
              pppppppppuStack_2d4 = (undefined *********)&local_58;
              pppppppppuStack_2d8 = (undefined *********)&local_54;
              pppppppppuStack_2dc = (undefined *********)0x3;
              pppppppppuStack_2e0 = (undefined *********)0x44d5a4;
              __vbaFreeObjList();
              pppppppppuStack_2d0 = (undefined *********)param_1;
              pppppppppuStack_2d4 = (undefined *********)0x44d5b3;
              pppppppppuStack_2d4 = (undefined *********)(*(code *)(*param_1)[0xcd])();
              pppppppppuStack_2d8 = (undefined *********)&local_58;
              pppppppppuStack_2dc = (undefined *********)0x44d5be;
              ppppppppppuVar11 = (undefined **********)__vbaObjSet();
              pppppppppuStack_2d4 = (undefined *********)param_1;
              pppppppppuStack_2d8 = (undefined *********)0x44d5c9;
              pppppppppuStack_2d8 = (undefined *********)(*(code *)(*param_1)[0xcd])();
              pppppppppuStack_2dc = (undefined *********)&local_54;
              pppppppppuStack_2e0 = (undefined *********)0x44d5d4;
              ppppppppppuVar12 = (undefined **********)__vbaObjSet();
              pppppppppuStack_2d8 = (undefined *********)local_e4;
              pppppppppuStack_2e0 = (undefined *********)0x44d5e3;
              pppppppppuStack_2dc = (undefined *********)ppppppppppuVar12;
              ppppppppppuVar13 = (undefined **********)(*(code *)(*ppppppppppuVar12)[0x13])();
              ppppppppppuVar9 = (undefined **********)__vbaHresultCheckObj_exref;
              if ((int)ppppppppppuVar13 < 0) {
                pppppppppuStack_228 = (undefined *********)0x4c;
                pppppppppuStack_22c = (undefined *********)&DAT_004182e4;
                pppppppppuStack_238 = (undefined *********)0x44d5fa;
                pppppppppuStack_234 = (undefined *********)ppppppppppuVar13;
                pppppppppuStack_230 = (undefined *********)ppppppppppuVar12;
                ppppppppppuVar13 = (undefined **********)__vbaHresultCheckObj();
              }
              pppppppppuStack_228 = &local_5c;
              pppppppppuStack_22c =
                   (undefined *********)
                   CONCAT22((short)((uint)ppppppppppuVar13 >> 0x10),(short)local_e4[0] + -1);
              if (SBORROW2((short)local_e4[0],1)) goto LAB_0044e1c6;
              pppppppppuStack_234 = (undefined *********)0x44d61e;
              pppppppppuStack_230 = (undefined *********)ppppppppppuVar11;
              ppppppppppuVar9 = (undefined **********)(*(code *)(*ppppppppppuVar11)[0x10])();
              if ((int)ppppppppppuVar9 < 0) {
                pppppppppuStack_234 = (undefined *********)0x40;
                pppppppppuStack_238 = (undefined *********)&DAT_004182e4;
                pppppppppuStack_244 = (undefined *********)0x44d62f;
                pppppppppuStack_240 = (undefined *********)ppppppppppuVar9;
                pppppppppuStack_23c = (undefined *********)ppppppppppuVar11;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_234 = (undefined *********)&DAT_0041352c;
              pppppppppuStack_238 = (undefined *********)local_5c;
              pppppppppuStack_23c = (undefined *********)0x44d63e;
              pppppppppuStack_234 = (undefined *********)__vbaCastObj();
              pppppppppuStack_238 = (undefined *********)&local_60;
              pppppppppuStack_23c = (undefined *********)0x44d64b;
              __vbaObjSet();
              pppppppppuStack_234 = (undefined *********)&local_60;
              pppppppppuStack_238 = local_48;
              pppppppppuStack_23c = (undefined *********)0x44d658;
              pppppppppuStack_248 = (undefined *********)(*(code *)(*local_48)[0x1b])();
              if ((int)pppppppppuStack_248 < 0) {
                pppppppppuStack_23c = (undefined *********)0x6c;
                pppppppppuStack_240 = (undefined *********)&DAT_00414268;
                pppppppppuStack_244 = local_48;
                pppppppppuStack_24c = (undefined *********)0x44d66c;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_23c = (undefined *********)&local_60;
              pppppppppuStack_240 = &local_5c;
              pppppppppuStack_244 = (undefined *********)&local_58;
              pppppppppuStack_248 = (undefined *********)&local_54;
              pppppppppuStack_24c = (undefined *********)0x4;
              pppppppppuStack_250 = (undefined *********)0x44d680;
              __vbaFreeObjList();
              pppppppppuStack_23c = (undefined *********)0x44d68e;
              __vbaStrCopy();
              pppppppppuStack_234 = (undefined *********)&local_54;
              pppppppppuStack_238 = local_48;
              pppppppppuStack_23c = (undefined *********)0x44d69b;
              ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1a])();
              if ((int)ppppppppppuVar9 < 0) {
                pppppppppuStack_23c = (undefined *********)0x68;
                pppppppppuStack_240 = (undefined *********)&DAT_00414268;
                pppppppppuStack_244 = local_48;
                pppppppppuStack_24c = (undefined *********)0x44d6af;
                pppppppppuStack_248 = (undefined *********)ppppppppppuVar9;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_240 = (undefined *********)&local_58;
              pppppppppuStack_23c = local_54;
              local_54 = (undefined *********)0x0;
              pppppppppuStack_244 = (undefined *********)0x44d6c0;
              __vbaObjSet();
              pppppppppuStack_23c = &local_5c;
              pppppppppuStack_240 = (undefined *********)&local_4c;
              pppppppppuStack_248 = (undefined *********)param_1[0x1e];
              pppppppppuStack_244 = (undefined *********)&local_58;
              pppppppppuStack_24c = (undefined *********)0x44d6d8;
              ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppppppuStack_248)[7])();
              if ((int)ppppppppppuVar9 < 0) {
                pppppppppuStack_2b4 = (undefined *********)param_1[0x1e];
                pppppppppuStack_2ac = (undefined *********)0x1c;
                pppppppppuStack_2b0 = (undefined *********)&DAT_0041803c;
                pppppppppuStack_2bc = (undefined *********)0x44d6ec;
                pppppppppuStack_2b8 = (undefined *********)ppppppppppuVar9;
                __vbaHresultCheckObj();
              }
              pppppppppuStack_2ac = (undefined *********)0x44d6f5;
              __vbaFreeStr();
              pppppppppuStack_2ac = &local_5c;
              pppppppppuStack_2b0 = (undefined *********)&local_58;
              pppppppppuStack_2b4 = (undefined *********)0x2;
              pppppppppuStack_2b8 = (undefined *********)0x44d701;
              __vbaFreeObjList();
              pppppppuVar18 = (undefined *******)__vbaHresultCheckObj_exref;
              pcVar19 = __vbaLateMemSt_exref;
            }
            pppppppppuStack_2ac = (undefined *********)&local_54;
            pppppppppuStack_2b0 = local_48;
            pppppppppuStack_2b4 = (undefined *********)0x44d71d;
            pppppppppuStack_2c0 = (undefined *********)(*(code *)(*local_48)[0x1a])();
            if ((int)pppppppppuStack_2c0 < 0) {
              pppppppppuStack_2b4 = (undefined *********)0x68;
              pppppppppuStack_2b8 = (undefined *********)&DAT_00414268;
              pppppppppuStack_2bc = local_48;
              pppppppppuStack_2c4 = (undefined *********)0x44d731;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_2b4 = (undefined *********)0x0;
            pppppppppuStack_2b8 = (undefined *********)0x41832c;
            pppppppppuStack_2bc = local_54;
            pppppppppuStack_2c0 = (undefined *********)0x44d744;
            __vbaLateMemCall();
            pppppppppuStack_2b4 = (undefined *********)0x44d750;
            __vbaFreeObj();
            pppppppppuStack_2b4 = (undefined *********)local_e4;
            pppppppppuStack_2b8 = local_24;
            pppppppppuStack_2bc = (undefined *********)0x44d760;
            ppppppppppuVar9 = (undefined **********)(*(code *)(*local_24)[0xb])();
            if ((int)ppppppppppuVar9 < 0) {
              pppppppppuStack_2bc = (undefined *********)0x2c;
              pppppppppuStack_2c0 = (undefined *********)&LAB_004133e8;
              pppppppppuStack_2c4 = local_24;
              pppppppppuStack_2cc = (undefined *********)0x44d774;
              pppppppppuStack_2c8 = (undefined *********)ppppppppppuVar9;
              (*(code *)pppppppuVar18)();
            }
            if ((short)local_e4[0] == 0) {
              pppppppppuStack_2bc = (undefined *********)&local_54;
              local_a8 = (undefined *********)0x418398;
              local_b0 = (undefined *********)0x8;
              pppppppppuStack_2c0 = local_48;
              pppppppppuStack_2c4 = (undefined *********)0x44d8ae;
              pppppppppuStack_2b0 = (undefined *********)(*(code *)(*local_48)[0x1a])();
              if ((int)pppppppppuStack_2b0 < 0) {
                pppppppppuStack_2a4 = (undefined *********)0x68;
                pppppppppuStack_2a8 = (undefined *********)&DAT_00414268;
                pppppppppuStack_2ac = local_48;
                pppppppppuStack_2b4 = (undefined *********)0x44d8c2;
                (*(code *)pppppppuVar18)();
              }
              pppppppppuStack_2b4 = (undefined *********)0x1;
              pppppppppuStack_2b8 = (undefined *********)0x41835c;
              pppppppppuStack_2b0 = local_b0;
              pppppppppuStack_2ac = local_ac;
              pppppppppuStack_2a8 = local_a8;
              pppppppppuStack_2a4 = local_a4;
              pppppppppuStack_2bc = local_54;
              pppppppppuStack_2c0 = (undefined *********)0x44d8f7;
              __vbaLateMemCall();
              pppppppppuStack_2a4 = (undefined *********)0x44d903;
              __vbaFreeObj();
            }
            else {
              pppppppppuStack_2bc = (undefined *********)&local_54;
              pppppppppuStack_2c0 = local_24;
              pppppppppuStack_2c4 = (undefined *********)0x44d78f;
              ppppppppppuVar9 = (undefined **********)(*(code *)(*local_24)[0x1b])();
              if ((int)ppppppppppuVar9 < 0) {
                pppppppppuStack_2a4 = (undefined *********)0x6c;
                pppppppppuStack_2a8 = (undefined *********)&LAB_004133e8;
                pppppppppuStack_2ac = local_24;
                pppppppppuStack_2b4 = (undefined *********)0x44d7a3;
                pppppppppuStack_2b0 = (undefined *********)ppppppppppuVar9;
                (*(code *)pppppppuVar18)();
              }
              pppppppppuStack_2a4 = local_54;
              local_54 = (undefined *********)0x0;
              pppppppppuStack_2a8 = (undefined *********)&local_128;
              pppppppppuStack_2ac = (undefined *********)0x44d7bb;
              pppppppppuStack_2a4 = (undefined *********)__vbaObjSet();
              pppppppppuStack_2a8 = (undefined *********)&local_44;
              pppppppppuStack_2ac = (undefined *********)&local_12c;
              pppppppppuStack_2b0 = (undefined *********)&LAB_0041470c;
              pppppppppuStack_2b4 = (undefined *********)0x44d7d2;
              iVar10 = __vbaForEachCollObj();
              while (iVar10 != 0) {
                pppppppppuStack_2a4 = (undefined *********)&local_4c;
                pppppppppuStack_2a8 = local_44;
                pppppppppuStack_2ac = (undefined *********)0x44d7e7;
                ppppppppppuVar9 = (undefined **********)(*(code *)(*local_44)[9])();
                if ((int)ppppppppppuVar9 < 0) {
                  pppppppppuStack_2ac = (undefined *********)0x24;
                  pppppppppuStack_2b0 = (undefined *********)&LAB_0041470c;
                  pppppppppuStack_2b4 = local_44;
                  pppppppppuStack_2bc = (undefined *********)0x44d7fb;
                  pppppppppuStack_2b8 = (undefined *********)ppppppppppuVar9;
                  (*(code *)pppppppuVar18)();
                }
                pppppppppuStack_2ac = (undefined *********)&local_54;
                local_68 = local_4c;
                local_4c = (undefined *********)0x0;
                local_70 = (undefined *********)0x8;
                pppppppppuStack_2b0 = local_48;
                pppppppppuStack_2b4 = (undefined *********)0x44d81c;
                pppppppppuStack_2b4 = (undefined *********)(*(code *)(*local_48)[0x1a])();
                if ((int)pppppppppuStack_2b4 < 0) {
                  pppppppppuStack_2a8 = (undefined *********)0x68;
                  pppppppppuStack_2ac = (undefined *********)&DAT_00414268;
                  pppppppppuStack_2b0 = local_48;
                  pppppppppuStack_2b8 = (undefined *********)0x44d830;
                  (*(code *)pppppppuVar18)();
                }
                pppppppppuStack_2b8 = (undefined *********)0x1;
                pppppppppuStack_2bc = (undefined *********)0x41835c;
                pppppppppuStack_2b4 = local_70;
                pppppppppuStack_2b0 = local_6c;
                pppppppppuStack_2ac = local_68;
                pppppppppuStack_2a8 = local_64;
                pppppppppuStack_2c0 = local_54;
                pppppppppuStack_2c4 = (undefined *********)0x44d85d;
                __vbaLateMemCall();
                pppppppppuStack_2a8 = (undefined *********)0x44d869;
                __vbaFreeObj();
                pppppppppuStack_2a8 = (undefined *********)0x44d872;
                __vbaFreeVar();
                pppppppppuStack_2a4 = (undefined *********)&local_44;
                pppppppppuStack_2a8 = (undefined *********)&local_12c;
                pppppppppuStack_2ac = (undefined *********)&LAB_0041470c;
                pppppppppuStack_2b0 = (undefined *********)0x44d888;
                iVar10 = __vbaNextEachCollObj();
              }
            }
          }
          else {
            pppppppppuStack_28c = (undefined *********)0x44d323;
            pppppppppuStack_28c = (undefined *********)rtcErrObj();
            pppppppppuStack_290 = (undefined *********)&local_54;
            pppppppppuStack_294 = (undefined *********)0x44d32e;
            ppppppppppuVar9 = (undefined **********)__vbaObjSet();
            local_98 = 0x80020004;
            local_88 = 0x80020004;
            local_a0[0] = (undefined ********)0xa;
            local_90[0] = (undefined ********)0xa;
            local_b8 = L"Invalid ArgumentTypeType";
            local_c0 = 8;
            pppppppppuStack_28c = (undefined *********)0x44d377;
            __vbaVarDup();
            local_a8 = (undefined *********)0x41316c;
            local_b0 = (undefined *********)0x8;
            pppppppppuStack_28c = (undefined *********)0x44d396;
            __vbaVarDup();
            pppppppppuStack_28c = local_a0;
            pppppppppuStack_290 = local_90;
            pppppppppuStack_294 = local_80;
            pppppppppuStack_298 = (undefined *********)&local_70;
            pppppppppuStack_29c = (undefined *********)0x408;
            pppppppppuStack_2a4 = (undefined *********)0x44d3b7;
            pppppppppuStack_2a0 = (undefined *********)ppppppppppuVar9;
            ppppppppppuVar11 = (undefined **********)(*(code *)(*ppppppppppuVar9)[0x11])();
            if ((int)ppppppppppuVar11 < 0) {
              pppppppppuStack_2a4 = (undefined *********)0x44;
              pppppppppuStack_2a8 = (undefined *********)&DAT_00413af4;
              pppppppppuStack_2b4 = (undefined *********)0x44d3c8;
              pppppppppuStack_2b0 = (undefined *********)ppppppppppuVar11;
              pppppppppuStack_2ac = (undefined *********)ppppppppppuVar9;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_2a4 = (undefined *********)0x44d3d1;
            __vbaFreeObj();
            pppppppppuStack_2a4 = local_a0;
            pppppppppuStack_2a8 = local_90;
            pppppppppuStack_2ac = local_80;
            pppppppppuStack_2b0 = (undefined *********)&local_70;
            pppppppppuStack_2b4 = (undefined *********)0x4;
            pppppppppuStack_2b8 = (undefined *********)0x44d3ef;
            __vbaFreeVarList();
            pcVar19 = __vbaLateMemSt_exref;
          }
          pppppppppuStack_2a4 = (undefined *********)&local_54;
          pppppppppuStack_2a8 = local_48;
          pppppppppuStack_2ac = (undefined *********)0x44dba0;
          ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1a])();
          if ((int)ppppppppppuVar9 < 0) {
            pppppppppuStack_2ac = (undefined *********)0x68;
            pppppppppuStack_2b0 = (undefined *********)&DAT_00414268;
            pppppppppuStack_2b4 = local_48;
            pppppppppuStack_2bc = (undefined *********)0x44dbb4;
            pppppppppuStack_2b8 = (undefined *********)ppppppppppuVar9;
            (*(code *)pppppppuVar18)();
          }
          pppppppppuStack_2b0 = (undefined *********)&local_130;
          pppppppppuStack_2ac = local_54;
          local_54 = (undefined *********)0x0;
          pppppppppuStack_2b4 = (undefined *********)0x44dbcc;
          __vbaObjSet();
          pppppppppuStack_2ac = (undefined *********)0x0;
          pppppppppuStack_2b0 = local_28;
          pppppppppuStack_2b4 = (undefined *********)0x44dbd8;
          sVar3 = __vbaObjIs();
          if (sVar3 == 0) {
            pppppppppuStack_2ac = (undefined *********)&local_4c;
            pppppppppuStack_2b0 = local_28;
            pppppppppuStack_2b4 = (undefined *********)0x44dc70;
            pppppppppuStack_2c0 = (undefined *********)(*(code *)(*local_28)[0xb])();
            if ((int)pppppppppuStack_2c0 < 0) {
              pppppppppuStack_2b4 = (undefined *********)0x2c;
              pppppppppuStack_2b8 = (undefined *********)&DAT_00414bb4;
              pppppppppuStack_2bc = local_28;
              pppppppppuStack_2c4 = (undefined *********)0x44dc84;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_2b8 = local_4c;
            local_70 = (undefined *********)0x8;
            local_68 = local_4c;
            pppppppppuStack_2c0 = (undefined *********)0x8;
            pppppppppuStack_2c4 = (undefined *********)0x4183f0;
            local_4c = (undefined *********)0x0;
            pppppppppuStack_2bc = local_6c;
            pppppppppuStack_2c8 = local_130;
            pppppppppuStack_2b4 = local_64;
            pppppppppuStack_2cc = (undefined *********)0x44dcbd;
            (*pcVar19)();
            pppppppppuStack_2cc = (undefined *********)0x44dcc8;
            __vbaFreeVar();
            local_a8 = (undefined *********)CONCAT22(local_a8._2_2_,*param_5);
            pppppppppuStack_2d4 = (undefined *********)0xb;
            local_b0 = (undefined *********)0xb;
            pppppppppuStack_2d8 = (undefined *********)0x41801c;
            pppppppppuStack_2d0 = local_ac;
            pppppppppuStack_2cc = local_a8;
            pppppppppuStack_2dc = local_130;
            pppppppppuStack_2c8 = local_a4;
            pppppppppuStack_2e0 = (undefined *********)0x44dd10;
            (*pcVar19)();
            pppppppppuStack_2e0 = (undefined *********)0x44dd18;
            __vbaFreeVar();
            pppppppppuStack_2e0 = (undefined *********)param_1[0x1a];
            pppppppppuStack_2dc = (undefined *********)local_e4;
            pppppppppuStack_2e4 = (undefined *********)0x44dd2b;
            iStack_2f0 = (*(code *)(*pppppppppuStack_2e0)[0x13])();
            if (iStack_2f0 < 0) {
              pppppppppuStack_2e4 = (undefined *********)0x4c;
              pppppppppuStack_2e8 = (undefined *********)&LAB_004133e8;
              pppppppppuStack_2ec = (undefined *********)param_1[0x1a];
              pwStack_2f4 = L"開＠\xffff\xec83謐료\v";
              (*(code *)pppppppuVar18)();
            }
            local_a8 = (undefined *********)CONCAT22(local_a8._2_2_,~(ushort)local_e4[0]);
            iStack_2f0 = 0xb;
            local_b0 = (undefined *********)0xb;
            pwStack_2f4 = L"Locked";
            pppppppppuStack_2ec = local_ac;
            pppppppppuStack_2e8 = local_a8;
            pppppppppuStack_2f8 = local_130;
            pppppppppuStack_2e4 = local_a4;
            uStack_2fc = 0x44dd8c;
            (*pcVar19)();
            pppppppppuStack_2e0 = (undefined *********)0x44dd94;
            __vbaFreeVar();
          }
          else {
            local_b0 = (undefined *********)0xb;
            pppppppppuStack_2bc = (undefined *********)0x41801c;
            pppppppppuStack_2b8 = (undefined *********)0xb;
            local_a8 = (undefined *********)0x0;
            pppppppppuStack_2b4 = local_ac;
            pppppppppuStack_2c0 = local_130;
            pppppppppuStack_2b0 = (undefined *********)0x0;
            pppppppppuStack_2ac = local_a4;
            pppppppppuStack_2c4 = (undefined *********)0x44dc1e;
            (*pcVar19)();
            local_b0 = (undefined *********)0x8;
            pppppppppuStack_2d4 = (undefined *********)0x4183f0;
            pppppppppuStack_2d0 = (undefined *********)0x8;
            local_a8 = (undefined *********)&DAT_00412f74;
            pppppppppuStack_2cc = local_ac;
            pppppppppuStack_2d8 = local_130;
            pppppppppuStack_2c8 = (undefined *********)&DAT_00412f74;
            pppppppppuStack_2c4 = local_a4;
            pppppppppuStack_2dc = (undefined *********)0x44dc5e;
            (*pcVar19)();
          }
          pppppppppuStack_2e0 = (undefined *********)&local_130;
          pppppppppuStack_2dc = (undefined *********)0x0;
          pppppppppuStack_2e4 = (undefined *********)0x44dda5;
          __vbaObjSetAddref();
          pppppppppuStack_2dc = (undefined *********)&local_54;
          pppppppppuStack_2e0 = local_48;
          pppppppppuStack_2e4 = (undefined *********)0x44ddb2;
          iVar10 = (*(code *)(*local_48)[0x1a])();
          if (iVar10 < 0) {
            pppppppppuStack_2e4 = (undefined *********)0x68;
            pppppppppuStack_2e8 = (undefined *********)&DAT_00414268;
            pppppppppuStack_2ec = local_48;
            pwStack_2f4 = L"䖋잰끅";
            iStack_2f0 = iVar10;
            (*(code *)pppppppuVar18)();
          }
          pppppppppuStack_2e4 = local_54;
          local_54 = (undefined *********)0x0;
          pppppppppuStack_2e8 = (undefined *********)&local_134;
          pppppppppuStack_2ec = (undefined *********)0x44ddde;
          __vbaObjSet();
          local_a8 = (undefined *********)CONCAT22(local_a8._2_2_,*param_3);
          iStack_2f0 = 2;
          local_b0 = (undefined *********)0x2;
          pwStack_2f4 = L"Tag";
          pppppppppuStack_2ec = local_ac;
          pppppppppuStack_2e8 = local_a8;
          pppppppppuStack_2f8 = local_134;
          pppppppppuStack_2e4 = local_a4;
          uStack_2fc = 0x44de26;
          (*pcVar19)();
          pppppppppuStack_280 = (undefined *********)&local_134;
          pppppppppuStack_27c = (undefined *********)0x0;
          pppppppppuStack_284 = (undefined *********)0x44de31;
          __vbaObjSetAddref();
        }
      }
      pppppppppuStack_27c = (undefined *********)&local_54;
      local_a8 = (undefined *********)0x0;
      local_b0 = (undefined *********)0xb;
      pppppppppuStack_280 = local_48;
      pppppppppuStack_284 = (undefined *********)0x44de52;
      pppppppppuStack_1f4 = (undefined *********)(*(code *)(*local_48)[0x1c])();
      if ((int)pppppppppuStack_1f4 < 0) {
        pppppppppuStack_1e8 = (undefined *********)0x70;
        pppppppppuStack_1ec = (undefined *********)&DAT_00414268;
        pppppppppuStack_1f0 = local_48;
        pppppppppuStack_1f8 = (undefined *********)0x44de66;
        (*(code *)pppppppuVar18)();
      }
      pppppppppuStack_1f8 = (undefined *********)0x418408;
      pppppppppuStack_1fc = (undefined *********)0x0;
      pppppppppuStack_1f4 = local_b0;
      pppppppppuStack_200 = (undefined *********)0x4183fc;
      pppppppppuStack_1f0 = local_ac;
      pppppppppuStack_1ec = local_a8;
      pppppppppuStack_208 = (undefined *********)&local_70;
      pppppppppuStack_1e8 = local_a4;
      pppppppppuStack_204 = local_54;
      pppppppppuStack_20c = (undefined *********)0x44deaa;
      pppppppppuStack_1fc = (undefined *********)__vbaLateMemCallLd();
      pppppppppuStack_200 = (undefined *********)0x44deb4;
      __vbaVarLateMemSt();
      pppppppppuStack_1e8 = (undefined *********)0x44debd;
      __vbaFreeObj();
      pppppppppuStack_1e8 = (undefined *********)0x44dec6;
      __vbaFreeVar();
      pppppppppuStack_1e4 = (undefined *********)0x0;
      pppppppppuStack_1e8 = (undefined *********)param_1[0x24];
      pppppppppuStack_1ec = (undefined *********)0x44ded8;
      sVar3 = __vbaObjIs();
      if (sVar3 == 0) {
        pppppppppuStack_1e8 = (undefined *********)param_1[0x24];
        pppppppppuStack_1e4 = (undefined *********)&local_54;
        pppppppppuStack_1ec = (undefined *********)0x44def4;
        ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppppppuStack_1e8)[0x1c5])();
        if ((int)ppppppppppuVar9 < 0) {
          pppppppppuStack_1f4 = (undefined *********)param_1[0x24];
          pppppppppuStack_1ec = (undefined *********)0x714;
          pppppppppuStack_1f0 = (undefined *********)&DAT_00413728;
          pppppppppuStack_1fc = (undefined *********)0x44df0e;
          pppppppppuStack_1f8 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        pppppppppuVar8 = local_54;
        pppppppppuStack_1ec = (undefined *********)&local_58;
        pppppppppuStack_1f0 = local_54;
        pppppppppuStack_1f4 = (undefined *********)0x44df1d;
        ppppppppppuVar9 = (undefined **********)(*(code *)(*local_54)[0x1b])();
        if ((int)ppppppppppuVar9 < 0) {
          pppppppppuStack_1f4 = (undefined *********)0x6c;
          pppppppppuStack_1f8 = (undefined *********)&LAB_004133e8;
          pppppppppuStack_1fc = pppppppppuVar8;
          pppppppppuStack_204 = (undefined *********)0x44df2e;
          pppppppppuStack_200 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        pppppppppuVar8 = local_58;
        pppppppppuStack_1f4 = (undefined *********)&local_4c;
        pppppppppuStack_1f8 = local_108[0];
        pppppppppuStack_1fc = (undefined *********)0x44df41;
        ppppppppppuVar9 = (undefined **********)(*(code *)(*local_108[0])[9])();
        if ((int)ppppppppppuVar9 < 0) {
          pppppppppuStack_1fc = (undefined *********)0x24;
          pppppppppuStack_200 = (undefined *********)&LAB_0041470c;
          pppppppppuStack_204 = local_108[0];
          pppppppppuStack_20c = (undefined *********)0x44df58;
          pppppppppuStack_208 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        local_4c = (undefined *********)0x0;
        pppppppppuStack_1fc = (undefined *********)0x44df6b;
        __vbaStrMove();
        pppppppppuStack_1fc = &local_5c;
        pppppppppuStack_200 = &local_50;
        pppppppppuStack_204 = pppppppppuVar8;
        pppppppppuStack_208 = (undefined *********)0x44df79;
        ppppppppppuVar9 = (undefined **********)(*(code *)(*pppppppppuVar8)[10])();
        if ((int)ppppppppppuVar9 < 0) {
          pppppppppuStack_1e4 = (undefined *********)0x28;
          pppppppppuStack_1e8 = (undefined *********)&DAT_004146fc;
          pppppppppuStack_1ec = pppppppppuVar8;
          pppppppppuStack_1f4 = (undefined *********)0x44df8a;
          pppppppppuStack_1f0 = (undefined *********)ppppppppppuVar9;
          (*(code *)pppppppuVar18)();
        }
        pppppppppuStack_1e4 = (undefined *********)local_5c;
        local_5c = (undefined ********)0x0;
        pppppppppuStack_1e8 = (undefined *********)&local_18;
        pppppppppuStack_1ec = (undefined *********)0x44df9f;
        __vbaObjSet();
        pppppppppuStack_1e4 = (undefined *********)0x44dfa8;
        __vbaFreeStr();
        pppppppppuStack_1e4 = (undefined *********)&local_58;
        pppppppppuStack_1e8 = (undefined *********)&local_54;
        pppppppppuStack_1ec = (undefined *********)0x2;
        pppppppppuStack_1f0 = (undefined *********)0x44dfb8;
        __vbaFreeObjList();
        pppppppppuStack_1e4 = (undefined *********)0x0;
        pppppppppuStack_1e8 = (undefined *********)local_18;
        pppppppppuStack_1ec = (undefined *********)0x44dfc7;
        sVar3 = __vbaObjIs();
        if (sVar3 == 0) {
          pppppppppuStack_1e4 = (undefined *********)local_e4;
          pppppppppuStack_1e8 = (undefined *********)&local_18;
          pppppppppuStack_1ec = (undefined *********)param_2;
          pppppppppuStack_1f0 = local_48;
          pppppppppuStack_1f4 = (undefined *********)0x44dfe8;
          ppppppppppuVar9 = (undefined **********)(*(code *)(*local_48)[0x1f])();
          if ((int)ppppppppppuVar9 < 0) {
            pppppppppuStack_1e4 = (undefined *********)0x7c;
            pppppppppuStack_1e8 = (undefined *********)&DAT_00414268;
            pppppppppuStack_1ec = local_48;
            pppppppppuStack_1f4 = (undefined *********)0x44dffc;
            pppppppppuStack_1f0 = (undefined *********)ppppppppppuVar9;
            (*(code *)pppppppuVar18)();
          }
          if ((short)local_e4[0] == 0) {
            pppppppppuStack_1e4 = (undefined *********)&local_54;
            local_a8 = (undefined *********)0xffffffff;
            local_b0 = (undefined *********)0xb;
            pppppppppuStack_1e8 = local_48;
            pppppppppuStack_1ec = (undefined *********)0x44e02b;
            pppppppppuStack_1f4 = (undefined *********)(*(code *)(*local_48)[0x1c])();
            if ((int)pppppppppuStack_1f4 < 0) {
              pppppppppuStack_1e8 = (undefined *********)0x70;
              pppppppppuStack_1ec = (undefined *********)&DAT_00414268;
              pppppppppuStack_1f0 = local_48;
              pppppppppuStack_1f8 = (undefined *********)0x44e03f;
              (*(code *)pppppppuVar18)();
            }
            pppppppppuStack_1f8 = (undefined *********)0x418408;
            pppppppppuStack_1fc = (undefined *********)0x0;
            pppppppppuStack_1f4 = local_b0;
            pppppppppuStack_200 = (undefined *********)0x4183fc;
            pppppppppuStack_1f0 = local_ac;
            pppppppppuStack_1ec = local_a8;
            pppppppppuStack_208 = (undefined *********)&local_70;
            pppppppppuStack_1e8 = local_a4;
            pppppppppuStack_204 = local_54;
            pppppppppuStack_20c = (undefined *********)0x44e07d;
            pppppppppuStack_1fc = (undefined *********)__vbaLateMemCallLd();
            pppppppppuStack_200 = (undefined *********)0x44e087;
            __vbaVarLateMemSt();
            pppppppppuStack_1e8 = (undefined *********)0x44e090;
            __vbaFreeObj();
            pppppppppuStack_1e8 = (undefined *********)0x44e099;
            __vbaFreeVar();
          }
        }
      }
    }
    pppppppppuStack_1e4 = (undefined *********)&local_48;
    pppppppppuStack_1e8 = (undefined *********)&local_110;
    pppppppppuStack_1ec = (undefined *********)&DAT_00414268;
    pppppppppuStack_1f0 = (undefined *********)0x44e0af;
    iVar10 = __vbaNextEachCollObj();
  } while( true );
}

/* ---- 0x44e1d0 (FUN_0044e1d0) [estimated] strings:  ---- */
void __cdecl FUN_0044e1d0(int *param_1,undefined4 param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  undefined4 in_stack_fffffd84;
  undefined4 in_stack_fffffd88;
  undefined4 in_stack_fffffd8c;
  undefined4 in_stack_fffffd90;
  undefined4 in_stack_fffffd94;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int *local_114 [2];
  int *local_10c;
  short local_100;
  short local_fc;
  int *local_f8;
  int *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8 [13];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  undefined2 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffe94;
  local_8 = &DAT_004024d8;
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = (int *)0x0;
  local_40 = 0;
  local_44 = (int *)0x0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_b4 = 0;
  local_e8[0] = 0;
  local_ec = 0;
  local_f0 = 0;
  local_114[0] = (int *)0x0;
  local_118 = 0;
  local_11c = 0;
  local_120 = 0;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_130 = 0;
  local_134 = 0;
  ExceptionList = &pvStack_14;
  __vbaObjSetAddref(&local_1c,param_2);
  local_18 = (undefined2)param_1[0x23];
  *(undefined2 *)(param_1 + 0x23) = 0xffff;
  uVar4 = (**(code **)(*param_1 + 0x318))(param_1);
  local_f4 = (int *)__vbaObjSet(&local_38,uVar4);
  iVar5 = (**(code **)(*local_f4 + 0x9c))(local_f4,0);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,local_f4,&DAT_0041804c,0x9c);
  }
  __vbaFreeObj();
  sVar1 = __vbaObjIs(local_1c,0);
  if (sVar1 == 0) {
    puVar15 = &DAT_00417d44;
    uVar14 = 0;
    piVar6 = local_1c;
    uVar4 = (**(code **)(*param_1 + 0x358))(param_1,0xd,0,&DAT_00417d44,local_1c);
    uVar4 = __vbaObjSet(&local_38,uVar4);
    uVar4 = __vbaLateIdCallLd(local_54,uVar4);
    uVar4 = __vbaCastObjVar(uVar4,uVar14);
    uVar4 = __vbaObjSet(&local_3c,uVar4);
    uVar2 = __vbaObjIs(uVar4,puVar15);
    uVar14 = 0;
    uVar4 = (**(code **)(*param_1 + 0x358))(param_1,0xd,0,&DAT_00417d44,0);
    uVar4 = __vbaObjSet(&local_40,uVar4);
    uVar4 = __vbaLateIdCallLd(local_64,uVar4);
    uVar4 = __vbaCastObjVar(uVar4,uVar14);
    uVar4 = __vbaObjSet(&local_44,uVar4);
    uVar3 = __vbaObjIs(uVar4,piVar6);
    __vbaFreeObjList(4,&local_38,&local_3c,&local_40,&local_44);
    __vbaFreeVarList(2,local_54,local_64);
    if ((uVar2 | uVar3) == 0xffff) goto LAB_0044e36e;
    uVar4 = __vbaCastObj(0,&LAB_0041470c);
    uVar4 = __vbaObjSet(&local_38,uVar4);
    __vbaObjSetAddref(param_1 + 0x1b,uVar4);
    __vbaFreeObj();
  }
  else {
    puVar16 = &DAT_00417d44;
    puVar15 = &DAT_00417d44;
    uVar14 = 0;
    uVar4 = (**(code **)(*param_1 + 0x358))(param_1,0xd,0,&DAT_00417d44,&DAT_00417d44);
    uVar4 = __vbaObjSet(&local_38,uVar4);
    uVar4 = __vbaLateIdCallLd(local_54,uVar4);
    uVar4 = __vbaCastObjVar(uVar4,uVar14);
    uVar4 = __vbaObjSet(&local_3c,uVar4);
    uVar4 = __vbaCastObj(uVar4,puVar15);
    __vbaObjSet(&local_1c,uVar4);
    __vbaFreeObjList(2,&local_38,&local_3c);
    __vbaFreeVar(puVar16);
LAB_0044e36e:
    sVar1 = __vbaObjIs(local_1c,0);
    if (sVar1 != 0) {
      uVar4 = __vbaCastObj(0,&LAB_0041470c);
      uVar4 = __vbaObjSet(&local_38,uVar4);
      __vbaObjSetAddref(param_1 + 0x1b,uVar4);
      __vbaFreeObj();
      *(undefined2 *)(param_1 + 0x23) = local_18;
      goto LAB_0044f4e7;
    }
    iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],&local_38);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x6c);
    }
    piVar6 = local_38;
    iVar5 = (**(code **)(*local_1c + 0x4c))(local_1c,&local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_1c,&DAT_00417d44,0x4c);
    }
    local_4c = local_2c;
    local_2c = 0;
    local_54[0] = 8;
    piVar7 = piVar6;
    iVar5 = (**(code **)(*piVar6 + 0x24))(piVar6,local_54,&local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_004146fc,0x24);
    }
    piVar6 = param_1 + 0x1b;
    __vbaObjSetAddref(piVar6,local_3c);
    __vbaFreeObjList(2,&local_38,&local_3c);
    __vbaFreeVar(piVar7);
    iVar5 = (**(code **)(*local_1c + 0x24))(local_1c,&local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_1c,&DAT_00417d44,0x24);
    }
    iVar5 = (**(code **)(*(int *)*piVar6 + 0x24))((int *)*piVar6,&local_30);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,*piVar6,&LAB_0041470c,0x24);
    }
    iVar5 = __vbaStrCmp(local_30,local_2c);
    local_fc = -(ushort)(iVar5 != 0);
    __vbaFreeStrList(2,&local_2c,&local_30);
    if (local_fc != 0) {
      iVar5 = (**(code **)(*(int *)*piVar6 + 0x24))((int *)*piVar6,&local_2c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,*piVar6,&LAB_0041470c,0x24);
      }
      iVar5 = (**(code **)(*local_1c + 0x28))(local_1c,local_2c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_1c,&DAT_00417d44,0x28);
      }
      __vbaFreeStr();
    }
    __vbaObjSetAddref(local_114,*piVar6);
    uVar4 = (**(code **)(*param_1 + 0x33c))(param_1);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar4);
    iVar5 = (**(code **)(*local_114[0] + 0x24))(local_114[0],&local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_114[0],&LAB_0041470c,0x24);
    }
    iVar5 = (**(code **)(*piVar6 + 0xa4))(piVar6,local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417a98,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    uVar4 = (**(code **)(*param_1 + 0x324))(param_1);
    local_f8 = (int *)__vbaObjSet(&local_38,uVar4);
    iVar5 = (**(code **)(*local_114[0] + 0x2c))(local_114[0],&local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_114[0],&LAB_0041470c,0x2c);
    }
    iVar5 = (**(code **)(*local_f8 + 0xa4))(local_f8,local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_f8,&DAT_00417a98,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    uVar4 = (**(code **)(*param_1 + 800))(param_1);
    local_f8 = (int *)__vbaObjSet(&local_38,uVar4);
    iVar5 = (**(code **)(*local_114[0] + 0x34))(local_114[0],&local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_114[0],&LAB_0041470c,0x34);
    }
    iVar5 = (**(code **)(*local_f8 + 0xa4))(local_f8,local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_f8,&DAT_00417a98,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    uVar4 = (**(code **)(*param_1 + 0x33c))(param_1);
    local_f8 = (int *)__vbaObjSet(&local_38,uVar4);
    iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x4c);
    }
    iVar5 = (**(code **)(*local_f8 + 0x1b4))(local_f8,~local_e8[0]);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_f8,&DAT_00417a98,0x1b4);
    }
    __vbaFreeObj();
    uVar4 = (**(code **)(*param_1 + 0x324))(param_1);
    local_f8 = (int *)__vbaObjSet(&local_38,uVar4);
    iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x4c);
    }
    iVar5 = (**(code **)(*local_f8 + 0x1b4))(local_f8,~local_e8[0]);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_f8,&DAT_00417a98,0x1b4);
    }
    __vbaFreeObj();
    uVar4 = (**(code **)(*param_1 + 800))(param_1);
    local_f8 = (int *)__vbaObjSet(&local_38,uVar4);
    iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x4c))((int *)param_1[0x1a],local_e8);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x4c);
    }
    iVar5 = (**(code **)(*local_f8 + 0x1b4))(local_f8,~local_e8[0]);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_f8,&DAT_00417a98,0x1b4);
    }
    __vbaFreeObj();
    iVar5 = (**(code **)(*local_114[0] + 0x44))(local_114[0],&local_38);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_114[0],&LAB_0041470c,0x44);
    }
    local_f8 = local_38;
    iVar5 = (**(code **)(*local_38 + 0x24))(local_38,local_e8);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_f8,&LAB_004133f8,0x24);
    }
    local_100 = (short)local_e8[0];
    __vbaFreeObj();
    if (local_100 == 0) {
      uVar4 = (**(code **)(*param_1 + 0x344))(param_1);
      local_f4 = (int *)__vbaObjSet(&local_38,uVar4);
      iVar5 = (**(code **)(*local_f4 + 0x9c))(local_f4,0);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_f4,&DAT_004182f8,0x9c);
      }
      __vbaFreeObj();
      uVar4 = (**(code **)(*param_1 + 0x340))(param_1);
      local_f4 = (int *)__vbaObjSet(&local_38,uVar4);
      iVar5 = (**(code **)(*local_f4 + 0x9c))(local_f4,0);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_f4,&DAT_004182f8,0x9c);
      }
      __vbaFreeObj();
      uVar11 = 0x80010007;
      uVar12 = 0xb;
      uVar13 = 0;
      piVar6 = param_1;
      uVar4 = local_b0;
      uVar14 = (**(code **)(*param_1 + 0x354))(param_1,0x80010007,0xb,local_b0,0,local_a8);
      uVar14 = __vbaObjSet(&local_38,uVar14);
      __vbaLateIdSt(uVar14,piVar6,uVar11,uVar12,uVar4,uVar13);
      __vbaFreeObj();
      uVar4 = (**(code **)(*param_1 + 0x350))(param_1,0x80010007,0xb,local_b0,0,local_a8);
      uVar4 = __vbaObjSet(&local_38,uVar4);
      __vbaLateIdSt(uVar4,in_stack_fffffd84,in_stack_fffffd88,in_stack_fffffd8c,in_stack_fffffd90,
                    in_stack_fffffd94);
      __vbaFreeObj();
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x344))(param_1);
      local_f4 = (int *)__vbaObjSet(&local_38,uVar4);
      iVar5 = (**(code **)(*local_f4 + 0x9c))(local_f4,0xffffffff);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_f4,&DAT_004182f8,0x9c);
      }
      __vbaFreeObj();
      uVar4 = (**(code **)(*param_1 + 0x340))(param_1);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar4);
      iVar5 = (**(code **)(*piVar6 + 0x9c))(piVar6,0xffffffff);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&DAT_004182f8,0x9c);
      }
      __vbaFreeObj();
      uVar11 = 0x80010007;
      uVar12 = 0xb;
      uVar13 = 0xffffffff;
      piVar6 = param_1;
      uVar4 = local_b0;
      uVar14 = (**(code **)(*param_1 + 0x354))(param_1,0x80010007,0xb,local_b0,0xffffffff,local_a8);
      uVar14 = __vbaObjSet(&local_38,uVar14);
      __vbaLateIdSt(uVar14,piVar6,uVar11,uVar12,uVar4,uVar13);
      __vbaFreeObj();
      uVar14 = 0x80010007;
      uVar11 = 0xb;
      uVar12 = 0xffffffff;
      piVar6 = param_1;
      uVar4 = (**(code **)(*param_1 + 0x350))(param_1,0x80010007,0xb,local_b0,0xffffffff,local_a8);
      uVar4 = __vbaObjSet(&local_38,uVar4);
      __vbaLateIdSt(uVar4,piVar6,uVar14,uVar11,local_b0,uVar12);
      __vbaFreeObj();
      uVar14 = 0;
      uVar4 = (**(code **)(*param_1 + 0x354))(param_1,7,0,&DAT_00417d34);
      uVar4 = __vbaObjSet(&local_38,uVar4);
      uVar4 = __vbaLateIdCallLd(local_54,uVar4);
      uVar4 = __vbaCastObjVar(uVar4,uVar14);
      piVar7 = (int *)__vbaObjSet(&local_3c,uVar4);
      piVar6 = piVar7;
      iVar5 = (**(code **)(*piVar7 + 0x2c))(piVar7);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_00417d34,0x2c);
      }
      __vbaFreeObjList(2,&local_38,&local_3c);
      __vbaFreeVar(piVar6);
      iVar5 = (**(code **)(*local_114[0] + 0x3c))(local_114[0],&local_38);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_114[0],&LAB_0041470c,0x3c);
      }
      piVar6 = local_38;
      local_38 = (int *)0x0;
      uVar4 = __vbaObjSet(&local_118,piVar6);
      iVar5 = __vbaForEachCollObj(&DAT_00414bb4,&local_11c,&local_20,uVar4);
      while (iVar5 != 0) {
        iVar5 = (**(code **)(*local_114[0] + 0x44))(local_114[0],&local_3c);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,local_114[0],&LAB_0041470c,0x44);
        }
        piVar6 = local_3c;
        iVar5 = (**(code **)(*local_3c + 100))(local_3c,&local_40);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar6,&LAB_004133f8,100);
        }
        iVar5 = (**(code **)(*local_20 + 0x28))(local_20,&local_38);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,local_20,&DAT_00414bb4,0x28);
        }
        sVar1 = __vbaObjIs(local_38,local_40);
        __vbaFreeObjList(3,&local_3c,&local_40,&local_38);
        if (sVar1 != 0) {
          iVar5 = (**(code **)(*local_20 + 0x2c))(local_20,&local_30);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,local_20,&DAT_00414bb4,0x2c);
          }
          uVar14 = 0;
          uVar4 = (**(code **)(*param_1 + 0x354))(param_1,7,0,&DAT_00417d34);
          uVar4 = __vbaObjSet(&local_3c,uVar4);
          uVar4 = __vbaLateIdCallLd(local_54,uVar4);
          uVar4 = __vbaCastObjVar(uVar4,uVar14);
          piVar6 = (int *)__vbaObjSet(&local_40,uVar4);
          local_7c = local_30;
          local_9c = 0x80020004;
          local_8c = 0x80020004;
          local_6c = 0x80020004;
          local_5c = 0x80020004;
          local_a4[0] = 10;
          local_94[0] = 10;
          local_74[0] = 10;
          local_64[0] = 10;
          local_30 = 0;
          local_84[0] = 8;
          iVar5 = (**(code **)(*piVar6 + 0x28))
                            (piVar6,local_64,local_74,local_84,local_94,local_a4,&local_44);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417d34,0x28);
          }
          local_10c = local_44;
          iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x60))((int *)param_1[0x1a],&local_38);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x60);
          }
          piVar6 = local_38;
          local_f0 = 1;
          iVar5 = (**(code **)(*local_38 + 0x28))
                            (local_38,&local_f0,param_1 + 0x1b,&local_20,&local_2c);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar6,&DAT_00414c50,0x28);
          }
          piVar6 = local_10c;
          iVar5 = (**(code **)(*local_10c + 0xb4))(local_10c,local_2c);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417d44,0xb4);
          }
          __vbaFreeStr();
          __vbaFreeObjList(4,&local_38,&local_3c,&local_40,&local_44);
          __vbaFreeVarList(6,local_54,local_64,local_74,local_84,local_94,local_a4);
        }
        iVar5 = __vbaNextEachCollObj(&DAT_00414bb4,&local_11c,&local_20);
      }
      uVar14 = 0;
      uVar4 = (**(code **)(*param_1 + 0x350))(param_1,7,0,&DAT_00417d34);
      uVar4 = __vbaObjSet(&local_38,uVar4);
      uVar4 = __vbaLateIdCallLd(local_54,uVar4);
      uVar4 = __vbaCastObjVar(uVar4,uVar14);
      piVar7 = (int *)__vbaObjSet(&local_3c,uVar4);
      piVar6 = piVar7;
      iVar5 = (**(code **)(*piVar7 + 0x2c))(piVar7);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_00417d34,0x2c);
      }
      __vbaFreeObjList(2,&local_38,&local_3c);
      __vbaFreeVar(piVar6);
      iVar5 = (**(code **)(*local_114[0] + 0x44))(local_114[0],&local_38);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_114[0],&LAB_0041470c,0x44);
      }
      piVar6 = local_38;
      iVar5 = (**(code **)(*local_38 + 0x68))(local_38,&local_3c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&LAB_004133f8,0x68);
      }
      piVar6 = local_3c;
      local_3c = (int *)0x0;
      uVar4 = __vbaObjSet(&local_120,piVar6);
      iVar5 = __vbaForEachCollObj(&DAT_00413cf8,&local_124,&local_24,uVar4);
      __vbaFreeObj();
      while (iVar5 != 0) {
        iVar5 = (**(code **)(*local_24 + 0x24))(local_24,&local_38);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,local_24,&DAT_00413cf8,0x24);
        }
        piVar6 = local_38;
        iVar5 = (**(code **)(*local_38 + 0x6c))(local_38,&local_3c);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar6,&LAB_004133e8,0x6c);
        }
        piVar6 = local_3c;
        local_3c = (int *)0x0;
        uVar4 = __vbaObjSet(&local_128,piVar6);
        iVar5 = __vbaForEachCollObj(&LAB_0041470c,&local_12c,&local_28,uVar4);
        __vbaFreeObj();
        while (iVar5 != 0) {
          iVar5 = (**(code **)(*local_28 + 0x3c))(local_28,&local_38);
          pcVar8 = __vbaHresultCheckObj_exref;
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,local_28,&LAB_0041470c,0x3c);
          }
          piVar6 = local_38;
          local_38 = (int *)0x0;
          uVar4 = __vbaObjSet(&local_130,piVar6);
          iVar5 = __vbaForEachCollObj(&DAT_00414bb4,&local_134,&local_20,uVar4);
          while (iVar5 != 0) {
            iVar5 = (**(code **)(*local_24 + 0x28))(local_24,&local_3c);
            if (iVar5 < 0) {
              (*pcVar8)(iVar5,local_24,&DAT_00413cf8,0x28);
            }
            iVar5 = (**(code **)(*local_20 + 0x28))(local_20,&local_38);
            if (iVar5 < 0) {
              (*pcVar8)(iVar5,local_20,&DAT_00414bb4,0x28);
            }
            sVar1 = __vbaObjIs(local_38,local_3c);
            __vbaFreeObjList(2,&local_3c,&local_38);
            if (sVar1 != 0) {
              puVar9 = local_e8;
              local_e8[0] = 0;
              iVar5 = (**(code **)(*local_20 + 0x38))(local_20,puVar9);
              if (iVar5 < 0) {
                __vbaHresultCheckObj(iVar5,local_20,&DAT_00414bb4,0x38);
              }
              iVar5 = (**(code **)(*local_20 + 0x30))(local_20,local_54);
              if (iVar5 < 0) {
                __vbaHresultCheckObj(iVar5,local_20,&DAT_00414bb4,0x30);
              }
              sVar1 = rtcIsObject(local_54);
              __vbaFreeVar(puVar9);
              if (sVar1 != 0) {
                puVar10 = local_54;
                iVar5 = (**(code **)(*local_20 + 0x30))(local_20,puVar10);
                if (iVar5 < 0) {
                  __vbaHresultCheckObj(iVar5,local_20,&DAT_00414bb4,0x30);
                }
                iVar5 = param_1[0x1b];
                uVar4 = __vbaUnkVar(local_54);
                sVar1 = __vbaObjIs(uVar4,iVar5);
                __vbaFreeVar(puVar10);
                if (sVar1 != 0) {
                  iVar5 = (**(code **)(*local_28 + 0x24))(local_28,&local_2c);
                  if (iVar5 < 0) {
                    __vbaHresultCheckObj(iVar5,local_28,&LAB_0041470c,0x24);
                  }
                  iVar5 = (**(code **)(*local_24 + 0x2c))(local_24,&local_30);
                  if (iVar5 < 0) {
                    __vbaHresultCheckObj(iVar5,local_24,&DAT_00413cf8,0x2c);
                  }
                  uVar14 = 0;
                  uVar4 = (**(code **)(*param_1 + 0x350))(param_1,7,0,&DAT_00417d34);
                  uVar4 = __vbaObjSet(&local_38,uVar4);
                  uVar4 = __vbaLateIdCallLd(local_54,uVar4);
                  uVar4 = __vbaCastObjVar(uVar4,uVar14);
                  piVar6 = (int *)__vbaObjSet(&local_3c,uVar4);
                  local_9c = 0x80020004;
                  local_8c = 0x80020004;
                  local_a4[0] = 10;
                  local_94[0] = 10;
                  __vbaStrCat(&DAT_004179c4 /* bstr: ' ' */,local_2c);
                  uVar4 = __vbaStrMove();
                  local_7c = __vbaStrCat(local_30,uVar4);
                  local_6c = 0x80020004;
                  local_5c = 0x80020004;
                  local_84[0] = 8;
                  local_74[0] = 10;
                  local_64[0] = 10;
                  iVar5 = (**(code **)(*piVar6 + 0x28))
                                    (piVar6,local_64,local_74,local_84,local_94,local_a4,&local_40);
                  if (iVar5 < 0) {
                    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417d34,0x28);
                  }
                  __vbaFreeStrList(3,&local_2c,&local_34,&local_30);
                  __vbaFreeObjList(3,&local_38,&local_3c,&local_40);
                  __vbaFreeVarList(6,local_54,local_64,local_74,local_84,local_94,local_a4);
                }
              }
            }
            iVar5 = __vbaNextEachCollObj(&DAT_00414bb4,&local_134,&local_20);
            pcVar8 = __vbaHresultCheckObj_exref;
          }
          iVar5 = __vbaNextEachCollObj(&LAB_0041470c,&local_12c,&local_28);
        }
        iVar5 = __vbaNextEachCollObj(&DAT_00413cf8,&local_124,&local_24);
      }
    }
    local_ec = 0xffffffff;
    uVar4 = __vbaCastObj(0,&LAB_004133f8);
    __vbaObjSet(&local_38,uVar4);
    local_e8[0] = 0;
    (**(code **)(*param_1 + 0x784))(param_1,param_1 + 0x1b,local_e8,&local_38,&local_ec);
    __vbaFreeObj();
    (**(code **)(*param_1 + 0x75c))(param_1);
    __vbaObjSetAddref(local_114,0);
    uVar4 = (**(code **)(*param_1 + 0x318))(param_1);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar4);
    iVar5 = (**(code **)(*piVar6 + 0x9c))(piVar6,0xffffffff);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_0041804c,0x9c);
    }
    __vbaFreeObj();
  }
  *(undefined2 *)(param_1 + 0x23) = local_18;
LAB_0044f4e7:
  __vbaFreeObjList(9,local_114,&local_118,&local_11c,&local_120,&local_124,&local_128,&local_12c,
                   &local_130,&local_134,&LAB_0044f54c);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x44f570 (FUN_0044f570) [estimated] strings: CTP Editor; Invalid ArgumentTypeType in SaveCurrentEntry ---- */
void FUN_0044f570(undefined *******param_1,undefined *******param_2,short *param_3,
                 undefined *******param_4,undefined *******param_5)

{
  undefined **********ppppppppppuVar1;
  undefined ********ppppppppuVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  undefined ***********pppppppppppuVar7;
  undefined ***********pppppppppppuVar8;
  undefined ***********pppppppppppuVar9;
  undefined **********ppppppppppuVar10;
  undefined *******pppppppuVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined ******ppppppuVar12;
  int iVar13;
  undefined4 uVar14;
  code *pcVar15;
  int *unaff_ESI;
  code *pcVar16;
  bool bVar17;
  int *piVar18;
  undefined **********ppppppppppuStack_2b4;
  undefined **********ppppppppppuStack_2b0;
  code *pcStack_2ac;
  int iStack_2a8;
  undefined *********pppppppppuStack_27c;
  undefined4 auStack_274 [9];
  undefined4 uStack_250;
  wchar_t *pwStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined **********ppppppppppuStack_238;
  undefined **********ppppppppppuStack_234;
  undefined **********ppppppppppuStack_230;
  undefined **********ppppppppppuStack_22c;
  undefined **********ppppppppppuStack_228;
  undefined **********ppppppppppuStack_224;
  undefined **********ppppppppppuStack_220;
  undefined **********ppppppppppuStack_21c;
  undefined **********ppppppppppuStack_218;
  undefined **********ppppppppppuStack_214;
  undefined **********ppppppppppuStack_210;
  undefined *******pppppppuStack_20c;
  undefined **********ppppppppppuStack_208;
  undefined **********ppppppppppuStack_204;
  undefined **********ppppppppppuStack_200;
  undefined **********ppppppppppuStack_1fc;
  undefined **********ppppppppppuStack_1f8;
  undefined **********ppppppppppuStack_1f4;
  undefined **********ppppppppppuStack_1f0;
  undefined **********ppppppppppuStack_1ec;
  undefined **********ppppppppppuStack_1e8;
  undefined **********ppppppppppuStack_1e4;
  undefined **********ppppppppppuStack_1e0;
  undefined **********ppppppppppuStack_1dc;
  undefined **********ppppppppppuStack_1d8;
  undefined **********ppppppppppuStack_1d4;
  undefined **********ppppppppppuStack_1d0;
  undefined **********ppppppppppuStack_1cc;
  undefined **********ppppppppppuStack_1c8;
  undefined **********ppppppppppuStack_1c4;
  undefined **********ppppppppppuStack_1c0;
  undefined **********ppppppppppuStack_1bc;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined ********local_128;
  undefined **********local_124 [7];
  undefined *********local_108;
  undefined *********local_104 [9];
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined **********local_d0;
  undefined4 local_cc;
  undefined *********local_c8;
  undefined4 local_c4;
  undefined ********local_c0 [2];
  undefined4 local_b8;
  undefined *********local_b0 [2];
  undefined4 local_a8;
  undefined *********local_a0 [4];
  undefined *********local_90 [2];
  undefined **********local_88;
  undefined *********local_80;
  undefined **********local_7c;
  undefined **********local_78;
  undefined ********local_74;
  undefined *********local_70;
  undefined *********local_6c;
  undefined **********local_68;
  undefined ********local_64;
  undefined **********local_60;
  undefined **********local_5c;
  undefined *******local_58;
  undefined ********local_54 [4];
  undefined *********local_44;
  undefined **********local_40 [2];
  undefined ********local_38;
  undefined **********local_34;
  undefined **********local_30 [2];
  undefined *********local_28 [2];
  undefined *********local_20;
  undefined *********local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffe48;
  local_c = &DAT_004024e8;
  local_8 = 0;
  ppppppppppuStack_1bc = (undefined **********)param_1;
  ppppppppppuStack_1c0 = (undefined **********)0x44f5aa;
  ExceptionList = &pvStack_18;
  (*(code *)(*param_1)[1])();
  ppppppppppuStack_1c0 = (undefined **********)0x0;
  local_1c = (undefined *********)0x0;
  local_20 = (undefined *********)0x0;
  ppppppppppuStack_1c4 = (undefined **********)*param_2;
  local_28[0] = (undefined *********)0x0;
  local_30[0] = (undefined **********)0x0;
  local_34 = (undefined **********)0x0;
  local_38 = (undefined ********)0x0;
  local_40[0] = (undefined **********)0x0;
  local_44 = (undefined *********)0x0;
  local_54[0] = (undefined ********)0x0;
  local_5c = (undefined **********)0x0;
  local_60 = (undefined **********)0x0;
  local_64 = (undefined ********)0x0;
  local_68 = (undefined **********)0x0;
  local_6c = (undefined *********)0x0;
  local_70 = (undefined *********)0x0;
  local_74 = (undefined ********)0x0;
  local_78 = (undefined **********)0x0;
  local_7c = (undefined **********)0x0;
  local_80 = (undefined *********)0x0;
  local_90[0] = (undefined *********)0x0;
  local_a0[0] = (undefined *********)0x0;
  local_b0[0] = (undefined *********)0x0;
  local_c0[0] = (undefined ********)0x0;
  local_d0 = (undefined **********)0x0;
  local_e0 = 0;
  local_104[0] = (undefined *********)0x0;
  local_108 = (undefined *********)0x0;
  local_124[0] = (undefined **********)0x0;
  local_128 = (undefined ********)0x0;
  local_12c = 0;
  local_130 = 0;
  local_134 = 0;
  ppppppppppuStack_1c8 = (undefined **********)0x44f63e;
  sVar3 = __vbaObjIs();
  if (sVar3 != 0) {
    ppppppppppuStack_1c0 = (undefined **********)param_1[0x1b];
    ppppppppppuStack_1c4 = (undefined **********)param_2;
    ppppppppppuStack_1c8 = (undefined **********)0x44f64e;
    __vbaObjSetAddref();
  }
  ppppppppppuStack_1c4 = (undefined **********)*param_2;
  ppppppppppuStack_1c0 = (undefined **********)0x0;
  ppppppppppuStack_1c8 = (undefined **********)0x44f658;
  sVar3 = __vbaObjIs();
  if (sVar3 == 0) {
    ppppppppppuStack_1c0 = (undefined **********)0x0;
    ppppppppppuStack_1c4 = (undefined **********)*param_5;
    ppppppppppuStack_1c8 = (undefined **********)0x44f66e;
    sVar3 = __vbaObjIs();
    if (sVar3 != 0) {
      ppppppppppuStack_1c0 = (undefined **********)*param_2;
      ppppppppppuStack_1c4 = (undefined **********)param_5;
      ppppppppppuStack_1c8 = (undefined **********)0x44f680;
      __vbaObjSetAddref();
    }
    ppppppppppuStack_1c0 = (undefined **********)*param_2;
    ppppppppppuStack_1c4 = (undefined **********)local_124;
    ppppppppppuStack_1c8 = (undefined **********)0x44f690;
    __vbaObjSetAddref();
    pcVar15 = __vbaHresultCheckObj_exref;
    if (*param_3 != 0) {
      ppppppppppuStack_1c0 = (undefined **********)param_1;
      ppppppppppuStack_1c4 = (undefined **********)0x44f6a5;
      ppppppppppuStack_1c4 = (undefined **********)(*(code *)(*param_1)[0xcf])();
      ppppppppppuStack_1c8 = (undefined **********)&local_78;
      ppppppppppuStack_1cc = (undefined **********)0x44f6b0;
      pppppppppppuVar7 = (undefined ***********)__vbaObjSet();
      ppppppppppuStack_1c4 = (undefined **********)&local_68;
      ppppppppppuStack_1cc = (undefined **********)0x44f6bf;
      ppppppppppuStack_1c8 = (undefined **********)pppppppppppuVar7;
      pppppppppppuVar8 = (undefined ***********)(*(code *)(*pppppppppppuVar7)[0x28])();
      pcVar15 = __vbaHresultCheckObj_exref;
      if ((int)pppppppppppuVar8 < 0) {
        ppppppppppuStack_1cc = (undefined **********)0xa0;
        ppppppppppuStack_1d0 = (undefined **********)&DAT_00417a98;
        ppppppppppuStack_1dc = (undefined **********)0x44f6d9;
        ppppppppppuStack_1d8 = (undefined **********)pppppppppppuVar8;
        ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
        __vbaHresultCheckObj();
      }
      ppppppppppuStack_1cc = local_68;
      ppppppppppuStack_1d0 = local_124[0];
      ppppppppppuStack_1d4 = (undefined **********)0x44f6f1;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[10])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1d4 = (undefined **********)0x28;
        ppppppppppuStack_1d8 = (undefined **********)&LAB_0041470c;
        ppppppppppuStack_1dc = local_124[0];
        ppppppppppuStack_1e4 = (undefined **********)0x44f708;
        ppppppppppuStack_1e0 = (undefined **********)pppppppppppuVar7;
        __vbaHresultCheckObj();
      }
      ppppppppppuStack_1d4 = (undefined **********)0x44f711;
      __vbaFreeStr();
      ppppppppppuStack_1d4 = (undefined **********)0x44f71a;
      __vbaFreeObj();
      ppppppppppuStack_1d4 = (undefined **********)param_1;
      ppppppppppuStack_1d8 = (undefined **********)0x44f726;
      ppppppppppuStack_1d8 = (undefined **********)(*(code *)(*param_1)[0xc9])();
      ppppppppppuStack_1dc = (undefined **********)&local_78;
      ppppppppppuStack_1e0 = (undefined **********)0x44f731;
      pppppppppppuVar7 = (undefined ***********)__vbaObjSet();
      ppppppppppuStack_1d8 = (undefined **********)&local_68;
      ppppppppppuStack_1e0 = (undefined **********)0x44f740;
      ppppppppppuStack_1dc = (undefined **********)pppppppppppuVar7;
      pppppppppppuVar8 = (undefined ***********)(*(code *)(*pppppppppppuVar7)[0x28])();
      if ((int)pppppppppppuVar8 < 0) {
        ppppppppppuStack_1e0 = (undefined **********)0xa0;
        ppppppppppuStack_1e4 = (undefined **********)&DAT_00417a98;
        ppppppppppuStack_1f0 = (undefined **********)0x44f754;
        ppppppppppuStack_1ec = (undefined **********)pppppppppppuVar8;
        ppppppppppuStack_1e8 = (undefined **********)pppppppppppuVar7;
        __vbaHresultCheckObj();
      }
      ppppppppppuStack_1e0 = local_68;
      ppppppppppuStack_1e4 = local_124[0];
      ppppppppppuStack_1e8 = (undefined **********)0x44f764;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0xc])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1e8 = (undefined **********)0x30;
        ppppppppppuStack_1ec = (undefined **********)&LAB_0041470c;
        ppppppppppuStack_1f0 = local_124[0];
        ppppppppppuStack_1f8 = (undefined **********)0x44f77b;
        ppppppppppuStack_1f4 = (undefined **********)pppppppppppuVar7;
        __vbaHresultCheckObj();
      }
      ppppppppppuStack_1e8 = (undefined **********)0x44f784;
      __vbaFreeStr();
      ppppppppppuStack_1e8 = (undefined **********)0x44f78d;
      __vbaFreeObj();
      ppppppppppuStack_1e8 = (undefined **********)param_1;
      ppppppppppuStack_1ec = (undefined **********)0x44f799;
      ppppppppppuStack_1ec = (undefined **********)(*(code *)(*param_1)[200])();
      ppppppppppuStack_1f0 = (undefined **********)&local_78;
      ppppppppppuStack_1f4 = (undefined **********)0x44f7a4;
      pppppppppppuVar7 = (undefined ***********)__vbaObjSet();
      ppppppppppuStack_1ec = (undefined **********)&local_68;
      ppppppppppuStack_1f4 = (undefined **********)0x44f7b3;
      ppppppppppuStack_1f0 = (undefined **********)pppppppppppuVar7;
      pppppppppppuVar8 = (undefined ***********)(*(code *)(*pppppppppppuVar7)[0x28])();
      if ((int)pppppppppppuVar8 < 0) {
        ppppppppppuStack_1f4 = (undefined **********)0xa0;
        ppppppppppuStack_1f8 = (undefined **********)&DAT_00417a98;
        ppppppppppuStack_204 = (undefined **********)0x44f7c7;
        ppppppppppuStack_200 = (undefined **********)pppppppppppuVar8;
        ppppppppppuStack_1fc = (undefined **********)pppppppppppuVar7;
        __vbaHresultCheckObj();
      }
      ppppppppppuStack_1f4 = local_68;
      ppppppppppuStack_1f8 = local_124[0];
      ppppppppppuStack_1fc = (undefined **********)0x44f7d7;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0xe])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1c0 = (undefined **********)0x38;
        ppppppppppuStack_1c4 = (undefined **********)&LAB_0041470c;
        ppppppppppuStack_1c8 = local_124[0];
        ppppppppppuStack_1d0 = (undefined **********)0x44f7ee;
        ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
        __vbaHresultCheckObj();
      }
      ppppppppppuStack_1c0 = (undefined **********)0x44f7f7;
      __vbaFreeStr();
      ppppppppppuStack_1c0 = (undefined **********)0x44f800;
      __vbaFreeObj();
    }
    ppppppppppuStack_1c0 = (undefined **********)&local_78;
    ppppppppppuStack_1c4 = (undefined **********)param_1[0x1a];
    ppppppppppuStack_1c8 = (undefined **********)0x44f818;
    ppppppppppuStack_1d4 = (undefined **********)(*(code *)(*ppppppppppuStack_1c4)[0x18])();
    if ((int)ppppppppppuStack_1d4 < 0) {
      ppppppppppuStack_1d0 = (undefined **********)param_1[0x1a];
      ppppppppppuStack_1c8 = (undefined **********)0x60;
      ppppppppppuStack_1cc = (undefined **********)&LAB_004133e8;
      ppppppppppuStack_1d8 = (undefined **********)0x44f82c;
      (*pcVar15)();
    }
    ppppppppppuVar10 = local_78;
    ppppppppppuStack_1c8 = (undefined **********)param_2;
    ppppppppppuStack_1cc = (undefined **********)param_5;
    ppppppppppuStack_1d0 = local_78;
    ppppppppppuStack_1d4 = (undefined **********)0x44f83f;
    pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0xf])();
    if ((int)pppppppppppuVar7 < 0) {
      ppppppppppuStack_1d4 = (undefined **********)0x3c;
      ppppppppppuStack_1d8 = (undefined **********)&DAT_00414c50;
      ppppppppppuStack_1dc = ppppppppppuVar10;
      ppppppppppuStack_1e4 = (undefined **********)0x44f850;
      ppppppppppuStack_1e0 = (undefined **********)pppppppppppuVar7;
      (*pcVar15)();
    }
    ppppppppppuStack_1d4 = (undefined **********)0x44f859;
    __vbaFreeObj();
    ppppppppppuStack_1d4 = (undefined **********)&local_78;
    ppppppppppuStack_1d8 = local_124[0];
    ppppppppppuStack_1dc = (undefined **********)0x44f869;
    pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0x11])();
    if ((int)pppppppppppuVar7 < 0) {
      ppppppppppuStack_1dc = (undefined **********)0x44;
      ppppppppppuStack_1e0 = (undefined **********)&LAB_0041470c;
      ppppppppppuStack_1e4 = local_124[0];
      ppppppppppuStack_1ec = (undefined **********)0x44f880;
      ppppppppppuStack_1e8 = (undefined **********)pppppppppppuVar7;
      (*pcVar15)();
    }
    ppppppppppuVar10 = local_78;
    ppppppppppuStack_1dc = local_104;
    ppppppppppuStack_1e0 = local_78;
    ppppppppppuStack_1e4 = (undefined **********)0x44f892;
    pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[9])();
    if ((int)pppppppppppuVar7 < 0) {
      ppppppppppuStack_1c0 = (undefined **********)0x24;
      ppppppppppuStack_1c4 = (undefined **********)&LAB_004133f8;
      ppppppppppuStack_1c8 = ppppppppppuVar10;
      ppppppppppuStack_1d0 = (undefined **********)0x44f8a3;
      ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
      (*pcVar15)();
    }
    sVar3 = (short)local_104[0];
    ppppppppppuStack_1c0 = (undefined **********)0x44f8b3;
    __vbaFreeObj();
    if (sVar3 != 0) {
      ppppppppppuStack_1c0 = (undefined **********)&local_78;
      ppppppppppuStack_1c4 = local_124[0];
      ppppppppppuStack_1c8 = (undefined **********)0x44f8cc;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0x11])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1c8 = (undefined **********)0x44;
        ppppppppppuStack_1cc = (undefined **********)&LAB_0041470c;
        ppppppppppuStack_1d0 = local_124[0];
        ppppppppppuStack_1d8 = (undefined **********)0x44f8e3;
        ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
        (*pcVar15)();
      }
      ppppppppppuVar10 = local_78;
      ppppppppppuStack_1c8 = (undefined **********)&local_7c;
      ppppppppppuStack_1cc = local_78;
      ppppppppppuStack_1d0 = (undefined **********)0x44f8f2;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0x19])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1d0 = (undefined **********)0x64;
        ppppppppppuStack_1d4 = (undefined **********)&LAB_004133f8;
        ppppppppppuStack_1d8 = ppppppppppuVar10;
        ppppppppppuStack_1e0 = (undefined **********)0x44f903;
        ppppppppppuStack_1dc = (undefined **********)pppppppppppuVar7;
        (*pcVar15)();
      }
      ppppppppppuStack_1d0 = local_7c;
      local_7c = (undefined **********)0x0;
      ppppppppppuStack_1d4 = (undefined **********)&local_60;
      ppppppppppuStack_1d8 = (undefined **********)0x44f914;
      __vbaObjSet();
      ppppppppppuStack_1d0 = (undefined **********)0x44f91d;
      __vbaFreeObj();
      ppppppppppuStack_1d0 = (undefined **********)&local_78;
      pppppppppppuVar7 = (undefined ***********)*param_5;
      ppppppppppuStack_1d8 = (undefined **********)0x44f92c;
      ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
      pppppppppppuVar8 = (undefined ***********)(*(code *)(*pppppppppppuVar7)[0xf])();
      if ((int)pppppppppppuVar8 < 0) {
        ppppppppppuStack_1d8 = (undefined **********)0x3c;
        ppppppppppuStack_1dc = (undefined **********)&LAB_0041470c;
        ppppppppppuStack_1e8 = (undefined **********)0x44f93d;
        ppppppppppuStack_1e4 = (undefined **********)pppppppppppuVar8;
        ppppppppppuStack_1e0 = (undefined **********)pppppppppppuVar7;
        (*pcVar15)();
      }
      ppppppppppuVar10 = local_78;
      ppppppppppuStack_1d8 = (undefined **********)&local_60;
      ppppppppppuStack_1dc = local_78;
      ppppppppppuStack_1e0 = (undefined **********)0x44f94c;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0x10])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1e0 = (undefined **********)0x40;
        ppppppppppuStack_1e4 = (undefined **********)&DAT_00414ba4;
        ppppppppppuStack_1e8 = ppppppppppuVar10;
        ppppppppppuStack_1f0 = (undefined **********)0x44f95d;
        ppppppppppuStack_1ec = (undefined **********)pppppppppppuVar7;
        (*pcVar15)();
      }
      ppppppppppuStack_1e0 = (undefined **********)0x44f966;
      __vbaFreeObj();
      ppppppppppuStack_1e0 = (undefined **********)&local_78;
      ppppppppppuStack_1e4 = (undefined **********)param_1[0x1a];
      ppppppppppuStack_1e8 = (undefined **********)0x44f976;
      ppppppppppuStack_1f4 = (undefined **********)(*(code *)(*ppppppppppuStack_1e4)[0x18])();
      if ((int)ppppppppppuStack_1f4 < 0) {
        ppppppppppuStack_1f0 = (undefined **********)param_1[0x1a];
        ppppppppppuStack_1e8 = (undefined **********)0x60;
        ppppppppppuStack_1ec = (undefined **********)&LAB_004133e8;
        ppppppppppuStack_1f8 = (undefined **********)0x44f98a;
        (*pcVar15)();
      }
      ppppppppppuVar10 = local_78;
      ppppppppppuStack_1e8 = (undefined **********)&local_60;
      ppppppppppuStack_1ec = (undefined **********)param_5;
      ppppppppppuStack_1f0 = local_78;
      ppppppppppuStack_1f4 = (undefined **********)0x44f99d;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0xe])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1f4 = (undefined **********)0x38;
        ppppppppppuStack_1f8 = (undefined **********)&DAT_00414c50;
        ppppppppppuStack_1fc = ppppppppppuVar10;
        ppppppppppuStack_204 = (undefined **********)0x44f9ae;
        ppppppppppuStack_200 = (undefined **********)pppppppppppuVar7;
        (*pcVar15)();
      }
      ppppppppppuStack_1f4 = (undefined **********)0x44f9b7;
      __vbaFreeObj();
      ppppppppppuStack_1f4 = (undefined **********)&DAT_00417d34;
      ppppppppppuStack_1f8 = (undefined **********)0x0;
      ppppppppppuStack_1fc = (undefined **********)0x7;
      ppppppppppuStack_200 = (undefined **********)param_1;
      ppppppppppuStack_204 = (undefined **********)0x44f9cc;
      ppppppppppuStack_204 = (undefined **********)(*(code *)(*param_1)[0xd5])();
      ppppppppppuStack_208 = (undefined **********)&local_78;
      pppppppuStack_20c = (undefined *******)0x44f9d9;
      ppppppppppuStack_204 = (undefined **********)__vbaObjSet();
      pppppppppppuVar7 = (undefined ***********)__vbaLateIdCallLd_exref;
      ppppppppppuStack_208 = local_90;
      pppppppuStack_20c = (undefined *******)0x44f9e9;
      ppppppppppuStack_1fc = (undefined **********)__vbaLateIdCallLd();
      ppppppppppuStack_200 = (undefined **********)0x44f9f3;
      ppppppppppuStack_1f8 = (undefined **********)__vbaCastObjVar();
      ppppppppppuStack_1fc = (undefined **********)&local_7c;
      ppppppppppuStack_200 = (undefined **********)0x44f9fa;
      pppppppppppuVar8 = (undefined ***********)__vbaObjSet();
      ppppppppppuStack_1f8 = &local_108;
      ppppppppppuStack_200 = (undefined **********)0x44fa09;
      ppppppppppuStack_1fc = (undefined **********)pppppppppppuVar8;
      pppppppppppuVar9 = (undefined ***********)(*(code *)(*pppppppppppuVar8)[7])();
      if ((int)pppppppppppuVar9 < 0) {
        ppppppppppuStack_1c8 = (undefined **********)0x1c;
        ppppppppppuStack_1cc = (undefined **********)&DAT_00417d34;
        ppppppppppuStack_1d8 = (undefined **********)0x44fa1a;
        ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar9;
        ppppppppppuStack_1d0 = (undefined **********)pppppppppppuVar8;
        (*pcVar15)();
      }
      ppppppppppuStack_1c8 = (undefined **********)0x44fa26;
      sVar3 = __vbaI2I4();
      ppppppppppuStack_1c4 = (undefined **********)&local_7c;
      ppppppppppuStack_1c8 = (undefined **********)&local_78;
      ppppppppppuStack_1cc = (undefined **********)0x2;
      local_38 = (undefined ********)0x1;
      ppppppppppuStack_1d0 = (undefined **********)0x44fa43;
      __vbaFreeObjList();
      ppppppppppuStack_1c4 = (undefined **********)0x44fa52;
      __vbaFreeVar();
      ppppppppuVar2 = local_38;
      while (local_38 = ppppppppuVar2, (short)local_38 <= sVar3) {
        ppppppppppuStack_1c0 = (undefined **********)&DAT_00417d34;
        ppppppppppuStack_1c4 = (undefined **********)0x0;
        ppppppppppuStack_1c8 = (undefined **********)0x7;
        ppppppppppuStack_1cc = (undefined **********)param_1;
        ppppppppppuStack_1d0 = (undefined **********)0x44fa77;
        ppppppppppuStack_1d0 = (undefined **********)(*(code *)(*param_1)[0xd5])();
        ppppppppppuStack_1d4 = (undefined **********)&local_78;
        ppppppppppuStack_1d8 = (undefined **********)0x44fa84;
        ppppppppppuStack_1d0 = (undefined **********)__vbaObjSet();
        ppppppppppuStack_1d4 = local_90;
        ppppppppppuStack_1d8 = (undefined **********)0x44fa8e;
        ppppppppppuStack_1c8 = (undefined **********)__vbaLateIdCallLd();
        ppppppppppuStack_1cc = (undefined **********)0x44fa98;
        ppppppppppuStack_1c4 = (undefined **********)__vbaCastObjVar();
        ppppppppppuStack_1c8 = (undefined **********)&local_7c;
        ppppppppppuStack_1cc = (undefined **********)0x44fa9f;
        ppppppppppuVar10 = (undefined **********)__vbaObjSet();
        local_c8 = &local_38;
        ppppppppppuStack_1c4 = &local_80;
        ppppppppppuStack_1c8 = (undefined **********)&local_d0;
        local_d0 = (undefined **********)0x4002;
        ppppppppppuStack_1d0 = (undefined **********)0x44fac5;
        ppppppppppuStack_1cc = ppppppppppuVar10;
        pppppppppppuVar8 = (undefined ***********)(*(code *)(*ppppppppppuVar10)[9])();
        if ((int)pppppppppppuVar8 < 0) {
          ppppppppppuStack_1d0 = (undefined **********)0x24;
          ppppppppppuStack_1d4 = (undefined **********)&DAT_00417d34;
          ppppppppppuStack_1e0 = (undefined **********)0x44fad6;
          ppppppppppuStack_1dc = (undefined **********)pppppppppppuVar8;
          ppppppppppuStack_1d8 = ppppppppppuVar10;
          (*pcVar15)();
        }
        ppppppppppuStack_1d0 = (undefined **********)&DAT_00417d44;
        ppppppppppuStack_1d4 = (undefined **********)local_80;
        ppppppppppuStack_1d8 = (undefined **********)0x44fae5;
        ppppppppppuStack_1d0 = (undefined **********)__vbaCastObj();
        ppppppppppuStack_1d4 = (undefined **********)local_40;
        ppppppppppuStack_1d8 = (undefined **********)0x44faf0;
        __vbaObjSet();
        ppppppppppuStack_1d0 = &local_80;
        ppppppppppuStack_1d4 = (undefined **********)&local_7c;
        ppppppppppuStack_1d8 = (undefined **********)&local_78;
        ppppppppppuStack_1dc = (undefined **********)0x3;
        ppppppppppuStack_1e0 = (undefined **********)0x44fb04;
        __vbaFreeObjList();
        ppppppppppuStack_1d0 = (undefined **********)0x44fb13;
        __vbaFreeVar();
        ppppppppppuStack_1cc = (undefined **********)&local_78;
        ppppppppppuStack_1d0 = (undefined **********)param_1[0x1a];
        ppppppppppuStack_1d4 = (undefined **********)0x44fb23;
        ppppppppppuVar10 = (undefined **********)(*(code *)(*ppppppppppuStack_1d0)[0x1b])();
        if ((int)ppppppppppuVar10 < 0) {
          ppppppppppuStack_1dc = (undefined **********)param_1[0x1a];
          ppppppppppuStack_1d4 = (undefined **********)0x6c;
          ppppppppppuStack_1d8 = (undefined **********)&LAB_004133e8;
          ppppppppppuStack_1e4 = (undefined **********)0x44fb37;
          ppppppppppuStack_1e0 = ppppppppppuVar10;
          (*pcVar15)();
        }
        ppppppppppuVar10 = local_78;
        ppppppppppuStack_1d4 = (undefined **********)&local_68;
        ppppppppppuStack_1d8 = local_40[0];
        ppppppppppuStack_1dc = (undefined **********)0x44fb47;
        pppppppppppuVar8 = (undefined ***********)(*(code *)(*local_40[0])[9])();
        if ((int)pppppppppppuVar8 < 0) {
          ppppppppppuStack_1dc = (undefined **********)0x24;
          ppppppppppuStack_1e0 = (undefined **********)&DAT_00417d44;
          ppppppppppuStack_1e4 = local_40[0];
          ppppppppppuStack_1ec = (undefined **********)0x44fb5b;
          ppppppppppuStack_1e8 = (undefined **********)pppppppppppuVar8;
          (*pcVar15)();
        }
        local_68 = (undefined **********)0x0;
        ppppppppppuStack_1dc = (undefined **********)0x44fb6e;
        __vbaStrMove();
        ppppppppppuStack_1dc = (undefined **********)&local_7c;
        ppppppppppuStack_1e0 = &local_6c;
        ppppppppppuStack_1e4 = ppppppppppuVar10;
        ppppppppppuStack_1e8 = (undefined **********)0x44fb7c;
        pppppppppppuVar8 = (undefined ***********)(*(code *)(*ppppppppppuVar10)[10])();
        if ((int)pppppppppppuVar8 < 0) {
          ppppppppppuStack_1e8 = (undefined **********)0x28;
          ppppppppppuStack_1ec = (undefined **********)&DAT_004146fc;
          ppppppppppuStack_1f0 = ppppppppppuVar10;
          ppppppppppuStack_1f8 = (undefined **********)0x44fb8d;
          ppppppppppuStack_1f4 = (undefined **********)pppppppppppuVar8;
          (*pcVar15)();
        }
        ppppppppppuStack_1ec = (undefined **********)local_54;
        ppppppppppuStack_1e8 = local_7c;
        local_7c = (undefined **********)0x0;
        ppppppppppuStack_1f0 = (undefined **********)0x44fba0;
        __vbaVarSetObj();
        ppppppppppuStack_1e8 = (undefined **********)0x44fba9;
        __vbaFreeStr();
        ppppppppppuStack_1e8 = (undefined **********)0x44fbb2;
        __vbaFreeObj();
        ppppppppppuStack_1ec = (undefined **********)local_54;
        ppppppppppuStack_1e8 = (undefined **********)0x0;
        ppppppppppuStack_1f0 = (undefined **********)0x44fbbd;
        ppppppppppuStack_1ec = (undefined **********)__vbaUnkVar();
        ppppppppppuStack_1f0 = (undefined **********)0x44fbc4;
        sVar4 = __vbaObjIs();
        if (sVar4 != 0) {
          ppppppppppuStack_1e8 = (undefined **********)&local_68;
          ppppppppppuStack_1ec = local_40[0];
          ppppppppppuStack_1f0 = (undefined **********)0x44fbd6;
          pppppppppppuVar8 = (undefined ***********)(*(code *)(*local_40[0])[9])();
          if ((int)pppppppppppuVar8 < 0) {
            ppppppppppuStack_1e8 = (undefined **********)0x24;
            ppppppppppuStack_1ec = (undefined **********)&DAT_00417d44;
            ppppppppppuStack_1f0 = local_40[0];
            ppppppppppuStack_1f8 = (undefined **********)0x44fbea;
            ppppppppppuStack_1f4 = (undefined **********)pppppppppppuVar8;
            (*pcVar15)();
          }
          local_88 = local_68;
          local_68 = (undefined **********)0x0;
          local_90[0] = (undefined *********)0x8;
          ppppppppppuStack_1e8 = (undefined **********)0x44fc0f;
          __vbaVarMove();
        }
        ppppppppppuStack_1e8 = (undefined **********)&local_78;
        ppppppppppuStack_1ec = local_124[0];
        ppppppppppuStack_1f0 = (undefined **********)0x44fc1f;
        pppppppppppuVar8 = (undefined ***********)(*(code *)(*local_124[0])[0xf])();
        if ((int)pppppppppppuVar8 < 0) {
          ppppppppppuStack_1f0 = (undefined **********)0x3c;
          ppppppppppuStack_1f4 = (undefined **********)&LAB_0041470c;
          ppppppppppuStack_1f8 = local_124[0];
          ppppppppppuStack_200 = (undefined **********)0x44fc36;
          ppppppppppuStack_1fc = (undefined **********)pppppppppppuVar8;
          (*pcVar15)();
        }
        ppppppppppuVar10 = local_78;
        ppppppppppuStack_1f0 = (undefined **********)0x44fc44;
        __vbaStrCopy();
        ppppppppppuStack_1e8 = (undefined **********)&local_7c;
        ppppppppppuStack_1ec = (undefined **********)&local_68;
        ppppppppppuStack_1f0 = (undefined **********)&local_60;
        ppppppppppuStack_1f4 = ppppppppppuVar10;
        ppppppppppuStack_1f8 = (undefined **********)0x44fc56;
        pppppppppppuVar8 = (undefined ***********)(*(code *)(*ppppppppppuVar10)[7])();
        if ((int)pppppppppppuVar8 < 0) {
          ppppppppppuStack_1f8 = (undefined **********)0x1c;
          ppppppppppuStack_1fc = (undefined **********)&DAT_00414ba4;
          ppppppppppuStack_200 = ppppppppppuVar10;
          ppppppppppuStack_208 = (undefined **********)0x44fc67;
          ppppppppppuStack_204 = (undefined **********)pppppppppppuVar8;
          (*pcVar15)();
        }
        ppppppppppuStack_1fc = (undefined **********)&local_34;
        ppppppppppuStack_1f8 = local_7c;
        local_7c = (undefined **********)0x0;
        ppppppppppuStack_200 = (undefined **********)0x44fc7c;
        __vbaObjSet();
        ppppppppppuStack_1f8 = (undefined **********)0x44fc85;
        __vbaFreeStr();
        ppppppppppuStack_1f8 = (undefined **********)0x44fc8e;
        __vbaFreeObj();
        ppppppppppuStack_1f8 = (undefined **********)&local_68;
        ppppppppppuStack_1fc = local_40[0];
        ppppppppppuStack_200 = (undefined **********)0x44fc9e;
        pppppppuVar11 = (undefined *******)(*(code *)(*local_40[0])[0x2c])();
        if ((int)pppppppuVar11 < 0) {
          ppppppppppuStack_200 = (undefined **********)0xb0;
          ppppppppppuStack_204 = (undefined **********)&DAT_00417d44;
          ppppppppppuStack_208 = local_40[0];
          ppppppppppuStack_210 = (undefined **********)0x44fcb5;
          pppppppuStack_20c = pppppppuVar11;
          (*pcVar15)();
        }
        ppppppppppuStack_200 = (undefined **********)&local_78;
        ppppppppppuStack_204 = (undefined **********)param_1[0x1a];
        ppppppppppuStack_208 = (undefined **********)0x44fcc5;
        pppppppppppuVar8 = (undefined ***********)(*(code *)(*ppppppppppuStack_204)[0x18])();
        if ((int)pppppppppppuVar8 < 0) {
          ppppppppppuStack_210 = (undefined **********)param_1[0x1a];
          ppppppppppuStack_208 = (undefined **********)0x60;
          pppppppuStack_20c = (undefined *******)&LAB_004133e8;
          ppppppppppuStack_218 = (undefined **********)0x44fcd9;
          ppppppppppuStack_214 = (undefined **********)pppppppppppuVar8;
          (*pcVar15)();
        }
        pppppppppppuVar8 = (undefined ***********)local_78;
        ppppppppppuStack_208 = (undefined **********)0x44fce7;
        __vbaStrCopy();
        local_108 = (undefined *********)0x1;
        local_68 = (undefined **********)0x0;
        ppppppppppuStack_200 = (undefined **********)0x44fd04;
        __vbaStrMove();
        ppppppppppuStack_200 = (undefined **********)&local_7c;
        ppppppppppuStack_204 = &local_70;
        ppppppppppuStack_208 = (undefined **********)&local_34;
        pppppppuStack_20c = param_2;
        ppppppppppuStack_210 = &local_108;
        ppppppppppuStack_214 = &local_6c;
        ppppppppppuStack_218 = (undefined **********)pppppppppppuVar8;
        ppppppppppuStack_21c = (undefined **********)0x44fd25;
        ppppppppppuStack_228 = (undefined **********)(*(code *)(*pppppppppppuVar8)[7])();
        if ((int)ppppppppppuStack_228 < 0) {
          ppppppppppuStack_21c = (undefined **********)0x1c;
          ppppppppppuStack_220 = (undefined **********)&DAT_00414c50;
          ppppppppppuStack_224 = (undefined **********)pppppppppppuVar8;
          ppppppppppuStack_22c = (undefined **********)0x44fd36;
          (*pcVar15)();
        }
        ppppppppppuStack_21c = &local_70;
        ppppppppppuStack_220 = &local_6c;
        ppppppppppuStack_224 = (undefined **********)0x2;
        ppppppppppuStack_228 = (undefined **********)0x44fd46;
        __vbaFreeStrList();
        ppppppppppuStack_228 = (undefined **********)&local_7c;
        ppppppppppuStack_22c = (undefined **********)&local_78;
        ppppppppppuStack_230 = (undefined **********)0x2;
        ppppppppppuStack_234 = (undefined **********)0x44fd56;
        __vbaFreeObjList();
        ppppppppppuStack_21c = local_104;
        ppppppppppuStack_220 = local_60;
        ppppppppppuStack_224 = (undefined **********)0x44fd69;
        pppppppppppuVar9 = (undefined ***********)(*(code *)(*local_60)[0x11])();
        if ((int)pppppppppppuVar9 < 0) {
          ppppppppppuStack_1c0 = (undefined **********)0x44;
          ppppppppppuStack_1c4 = (undefined **********)&DAT_00414268;
          ppppppppppuStack_1c8 = local_60;
          ppppppppppuStack_1d0 = (undefined **********)0x44fd7d;
          ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar9;
          (*pcVar15)();
        }
        if ((short)local_104[0] != 0) {
          ppppppppppuStack_1c0 = (undefined **********)local_54;
          ppppppppppuStack_1c4 = local_34;
          ppppppppppuStack_1c8 = (undefined **********)0x44fd94;
          pppppppppppuVar9 = (undefined ***********)(*(code *)(*local_34)[0xd])();
          if ((int)pppppppppppuVar9 < 0) {
            ppppppppppuStack_1c0 = (undefined **********)0x34;
            ppppppppppuStack_1c4 = (undefined **********)&DAT_00414bb4;
            ppppppppppuStack_1c8 = local_34;
            ppppppppppuStack_1d0 = (undefined **********)0x44fda8;
            ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar9;
            (*pcVar15)();
          }
        }
        ppppppppuVar2 = (undefined ********)(uint)(ushort)((short)local_38 + 1);
        if (SCARRY2((short)local_38,1)) {
LAB_004518a0:
          ppppppppppuStack_1c0 = (undefined **********)0x4518a6;
          __vbaErrorOverflow();
          ppppppppppuStack_1cc = (undefined **********)&LAB_004032d6;
          ppppppppppuStack_1d0 = ExceptionList;
          ppppppppppuStack_1c8 = (undefined **********)&ppppppppppuStack_2b4;
          ppppppppppuStack_1c4 = (undefined **********)&DAT_004024f8;
          ppppppppppuStack_1c0 = (undefined **********)0x0;
          ExceptionList = &ppppppppppuStack_1d0;
          ppppppppppuStack_2b4 = (undefined **********)pppppppppppuVar7;
          ppppppppppuStack_2b0 = (undefined **********)pppppppppppuVar8;
          pcStack_2ac = pcVar15;
          ppppppppppuStack_1bc = (undefined **********)&stack0xfffffffc;
          (**(code **)(*unaff_ESI + 4))(unaff_ESI);
          ppppppppppuStack_1d4 = (undefined **********)0x0;
          ppppppppppuStack_1d8 = (undefined **********)0x0;
          ppppppppppuStack_1dc = (undefined **********)0x0;
          ppppppppppuStack_1e0 = (undefined **********)0x0;
          ppppppppppuStack_1e4 = (undefined **********)0x0;
          ppppppppppuStack_1e8 = (undefined **********)0x0;
          ppppppppppuStack_1ec = (undefined **********)0x0;
          ppppppppppuStack_1f0 = (undefined **********)0x0;
          ppppppppppuStack_200 = (undefined **********)0x0;
          ppppppppppuStack_210 = (undefined **********)0x0;
          ppppppppppuStack_220 = (undefined **********)0x0;
          ppppppppppuStack_230 = (undefined **********)0x0;
          uStack_240 = 0;
          uStack_250 = 0;
          auStack_274[0] = 0;
          iVar13 = (**(code **)(*(int *)unaff_ESI[0x1a] + 0x70))
                             ((int *)unaff_ESI[0x1a],&ppppppppppuStack_1dc);
          if (iVar13 < 0) {
            __vbaHresultCheckObj(iVar13,unaff_ESI[0x1a],&LAB_004133e8,0x70);
          }
          ppppppppppuVar10 = ppppppppppuStack_1dc;
          iVar13 = (*(code *)(*ppppppppppuStack_1dc)[9])(ppppppppppuStack_1dc,auStack_274);
          if (iVar13 < 0) {
            __vbaHresultCheckObj(iVar13,ppppppppppuVar10,&LAB_004133f8,0x24);
          }
          sVar4 = __vbaObjIs(unaff_ESI[0x21],0);
          sVar6 = __vbaObjIs(unaff_ESI[0x22],0);
          sVar3 = (short)auStack_274[0];
          __vbaFreeObj();
          if ((sVar4 == 0 && sVar6 == 0) && sVar3 == -1) {
            iVar13 = (**(code **)(*(int *)unaff_ESI[0x22] + 0x24))
                               ((int *)unaff_ESI[0x22],&ppppppppppuStack_1d4);
            if (iVar13 < 0) {
              __vbaHresultCheckObj(iVar13,unaff_ESI[0x22],&LAB_0041470c,0x24);
            }
            ppppppppppuStack_1d4 = (undefined **********)0x0;
            __vbaStrMove();
            (**(code **)(*unaff_ESI + 0x780))(unaff_ESI,&ppppppppppuStack_1d8,auStack_274);
            __vbaFreeStr();
            sVar3 = __vbaObjIs(unaff_ESI[0x1b],unaff_ESI[0x22]);
            if (sVar3 == 0) {
              ppppppppppuStack_228 = (undefined **********)0x80020004;
              ppppppppppuStack_218 = (undefined **********)0x80020004;
              ppppppppppuStack_230 = (undefined **********)0xa;
              ppppppppppuStack_220 = (undefined **********)0xa;
              pwStack_248 = L"CTP Editor";
              uStack_250 = 8;
              __vbaVarDup();
              ppppppppppuStack_238 = (undefined **********)0x4184f8;
              uStack_240 = 8;
              __vbaVarDup();
              rtcMsgBox(&ppppppppppuStack_200,0x10,&ppppppppppuStack_210,&ppppppppppuStack_220,
                        &ppppppppppuStack_230);
              __vbaFreeVarList(4,&ppppppppppuStack_200,&ppppppppppuStack_210,&ppppppppppuStack_220,
                               &ppppppppppuStack_230);
            }
            else {
              piVar18 = (int *)unaff_ESI[0x21];
              pppppppppppuVar7 = &ppppppppppuStack_1e4;
              iVar13 = (**(code **)(*piVar18 + 0x3c))(piVar18,pppppppppppuVar7);
              if (iVar13 < 0) {
                __vbaHresultCheckObj(iVar13,unaff_ESI[0x21],&LAB_0041470c,0x3c);
              }
              ppppppppppuVar10 = ppppppppppuStack_1e4;
              __vbaStrCopy(piVar18,pppppppppppuVar7);
              iVar13 = (**(code **)(*(int *)unaff_ESI[0x1a] + 0x70))
                                 ((int *)unaff_ESI[0x1a],&ppppppppppuStack_1dc);
              if (iVar13 < 0) {
                __vbaHresultCheckObj(iVar13,unaff_ESI[0x1a],&LAB_004133e8,0x70);
              }
              pppppppppuStack_27c = (undefined *********)ppppppppppuStack_1dc;
              iVar13 = (*(code *)(*ppppppppppuStack_1dc)[0x19])
                                 (ppppppppppuStack_1dc,&ppppppppppuStack_1e0);
              if (iVar13 < 0) {
                __vbaHresultCheckObj(iVar13,pppppppppuStack_27c,&LAB_004133f8,100);
              }
              ppppppppppuVar1 = ppppppppppuStack_1e0;
              ppppppppppuStack_1e0 = (undefined **********)0x0;
              __vbaObjSet(&ppppppppppuStack_1e8,ppppppppppuVar1);
              iVar13 = (*(code *)(*ppppppppppuVar10)[7])
                                 (ppppppppppuVar10,&ppppppppppuStack_1e8,&ppppppppppuStack_1d4,
                                  &ppppppppppuStack_1ec);
              if (iVar13 < 0) {
                __vbaHresultCheckObj(iVar13,ppppppppppuVar10,&DAT_00414ba4,0x1c);
              }
              ppppppppppuVar10 = ppppppppppuStack_1ec;
              __vbaObjSetAddref(&ppppppppppuStack_1f0,unaff_ESI[0x1b]);
              ppppppppppuStack_238 = (undefined **********)&ppppppppppuStack_1f0;
              uStack_240 = 0x4009;
              iVar13 = (*(code *)(*ppppppppppuVar10)[0xd])(ppppppppppuVar10,&uStack_240);
              if (iVar13 < 0) {
                __vbaHresultCheckObj(iVar13,ppppppppppuVar10,&DAT_00414bb4,0x34);
              }
              uVar14 = __vbaCastObj(ppppppppppuStack_1f0,&LAB_0041470c);
              __vbaObjSet(unaff_ESI + 0x1b,uVar14);
              __vbaFreeStr();
              __vbaFreeObjList(5,&ppppppppppuStack_1dc,&ppppppppppuStack_1e8,&ppppppppppuStack_1e4,
                               &ppppppppppuStack_1f0,&ppppppppppuStack_1ec);
              iStack_2a8 = *unaff_ESI;
              uVar14 = __vbaCastObj(0,&DAT_00417d44);
              uVar14 = __vbaObjSet(&ppppppppppuStack_1dc,uVar14);
              (**(code **)(iStack_2a8 + 0x788))(unaff_ESI,uVar14);
              __vbaFreeObj();
            }
          }
          return;
        }
      }
    }
    ppppppppppuStack_1c0 = (undefined **********)&local_78;
    ppppppppppuStack_1c4 = local_124[0];
    ppppppppppuStack_1c8 = (undefined **********)0x44fdd1;
    pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0x11])();
    if ((int)pppppppppppuVar7 < 0) {
      ppppppppppuStack_1c8 = (undefined **********)0x44;
      ppppppppppuStack_1cc = (undefined **********)&LAB_0041470c;
      ppppppppppuStack_1d0 = local_124[0];
      ppppppppppuStack_1d8 = (undefined **********)0x44fde8;
      ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
      (*pcVar15)();
    }
    ppppppppppuVar10 = local_78;
    ppppppppppuStack_1c8 = (undefined **********)&local_7c;
    ppppppppppuStack_1cc = local_78;
    ppppppppppuStack_1d0 = (undefined **********)0x44fdf7;
    pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0x1b])();
    if ((int)pppppppppppuVar7 < 0) {
      ppppppppppuStack_1c0 = (undefined **********)0x6c;
      ppppppppppuStack_1c4 = (undefined **********)&LAB_004133f8;
      ppppppppppuStack_1c8 = ppppppppppuVar10;
      ppppppppppuStack_1d0 = (undefined **********)0x44fe08;
      ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
      (*pcVar15)();
    }
    ppppppppppuStack_1c4 = (undefined **********)&local_128;
    ppppppppppuStack_1c0 = local_7c;
    local_7c = (undefined **********)0x0;
    ppppppppppuStack_1c8 = (undefined **********)0x44fe1c;
    ppppppppppuStack_1c0 = (undefined **********)__vbaObjSet();
    ppppppppppuStack_1c4 = (undefined **********)&local_60;
    ppppppppppuStack_1c8 = (undefined **********)&local_12c;
    ppppppppppuStack_1cc = (undefined **********)&DAT_00414268;
    ppppppppppuStack_1d0 = (undefined **********)0x44fe33;
    iVar13 = __vbaForEachCollObj();
    ppppppppppuStack_1c0 = (undefined **********)0x44fe3e;
    __vbaFreeObj();
    while (iVar13 != 0) {
      ppppppppppuStack_1c0 = (undefined **********)&local_78;
      ppppppppppuStack_1c4 = local_124[0];
      ppppppppppuStack_1c8 = (undefined **********)0x44fe56;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0x11])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1c8 = (undefined **********)0x44;
        ppppppppppuStack_1cc = (undefined **********)&LAB_0041470c;
        ppppppppppuStack_1d0 = local_124[0];
        ppppppppppuStack_1d8 = (undefined **********)0x44fe6d;
        ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
        (*pcVar15)();
      }
      ppppppppppuVar10 = local_78;
      ppppppppppuStack_1c8 = (undefined **********)&local_7c;
      ppppppppppuStack_1cc = local_78;
      ppppppppppuStack_1d0 = (undefined **********)0x44fe7c;
      pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0x19])();
      if ((int)pppppppppppuVar7 < 0) {
        ppppppppppuStack_1c0 = (undefined **********)0x64;
        ppppppppppuStack_1c4 = (undefined **********)&LAB_004133f8;
        ppppppppppuStack_1c8 = ppppppppppuVar10;
        ppppppppppuStack_1d0 = (undefined **********)0x44fe8d;
        ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
        (*pcVar15)();
      }
      ppppppppppuStack_1c0 = local_7c;
      ppppppppppuStack_1c4 = local_60;
      ppppppppppuStack_1c8 = (undefined **********)0x44fe9b;
      uVar5 = __vbaObjIs();
      ppppppppppuStack_1c0 = (undefined **********)&local_7c;
      ppppppppppuStack_1c4 = (undefined **********)&local_78;
      ppppppppppuStack_1c8 = (undefined **********)0x2;
      pppppppppppuVar8 =
           (undefined ***********)~CONCAT22((short)((uint)ppppppppppuVar10 >> 0x10),uVar5);
      ppppppppppuStack_1cc = (undefined **********)0x44feb0;
      __vbaFreeObjList();
      if ((short)pppppppppppuVar8 != 0) {
        ppppppppppuStack_1c0 = local_104;
        ppppppppppuStack_1c4 = local_60;
        ppppppppppuStack_1c8 = (undefined **********)0x44fecc;
        pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0xf])();
        if ((int)pppppppppppuVar7 < 0) {
          ppppppppppuStack_1c8 = (undefined **********)0x3c;
          ppppppppppuStack_1cc = (undefined **********)&DAT_00414268;
          ppppppppppuStack_1d0 = local_60;
          ppppppppppuStack_1d8 = (undefined **********)0x44fee0;
          ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
          (*pcVar15)();
        }
        if ((short)local_104[0] == 0) {
          ppppppppppuStack_1c8 = (undefined **********)&local_78;
          ppppppppppuStack_1cc = local_124[0];
          ppppppppppuStack_1d0 = (undefined **********)0x450ed0;
          pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0xf])();
          if ((int)pppppppppppuVar7 < 0) {
            ppppppppppuStack_1d0 = (undefined **********)0x3c;
            ppppppppppuStack_1d4 = (undefined **********)&LAB_0041470c;
            ppppppppppuStack_1d8 = local_124[0];
            ppppppppppuStack_1e0 = (undefined **********)0x450ee7;
            ppppppppppuStack_1dc = (undefined **********)pppppppppppuVar7;
            (*pcVar15)();
          }
          ppppppppppuVar10 = local_78;
          ppppppppppuStack_1d0 = (undefined **********)&local_60;
          ppppppppppuStack_1d4 = local_78;
          ppppppppppuStack_1d8 = (undefined **********)0x450ef6;
          pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0x10])();
          if ((int)pppppppppppuVar7 < 0) {
            ppppppppppuStack_1d8 = (undefined **********)0x40;
            ppppppppppuStack_1dc = (undefined **********)&DAT_00414ba4;
            ppppppppppuStack_1e0 = ppppppppppuVar10;
            ppppppppppuStack_1e8 = (undefined **********)0x450f07;
            ppppppppppuStack_1e4 = (undefined **********)pppppppppppuVar7;
            (*pcVar15)();
          }
          ppppppppppuStack_1d8 = (undefined **********)0x450f10;
          __vbaFreeObj();
          ppppppppppuStack_1d8 = (undefined **********)&local_78;
          ppppppppppuStack_1dc = (undefined **********)param_1[0x1a];
          ppppppppppuStack_1e0 = (undefined **********)0x450f20;
          ppppppppppuStack_1ec = (undefined **********)(*(code *)(*ppppppppppuStack_1dc)[0x18])();
          if ((int)ppppppppppuStack_1ec < 0) {
            ppppppppppuStack_1e8 = (undefined **********)param_1[0x1a];
            ppppppppppuStack_1e0 = (undefined **********)0x60;
            ppppppppppuStack_1e4 = (undefined **********)&LAB_004133e8;
            ppppppppppuStack_1f0 = (undefined **********)0x450f34;
            (*pcVar15)();
          }
          ppppppppppuVar10 = local_78;
          ppppppppppuStack_1e0 = (undefined **********)&local_60;
          ppppppppppuStack_1e4 = (undefined **********)param_5;
          ppppppppppuStack_1e8 = local_78;
          ppppppppppuStack_1ec = (undefined **********)0x450f47;
          pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0xe])();
          if ((int)pppppppppppuVar7 < 0) {
            ppppppppppuStack_1ec = (undefined **********)0x38;
            ppppppppppuStack_1f0 = (undefined **********)&DAT_00414c50;
            ppppppppppuStack_1f4 = ppppppppppuVar10;
            ppppppppppuStack_1fc = (undefined **********)0x450f58;
            ppppppppppuStack_1f8 = (undefined **********)pppppppppppuVar7;
            (*pcVar15)();
          }
          ppppppppppuStack_1ec = (undefined **********)0x450f61;
          __vbaFreeObj();
          ppppppppppuStack_1ec = (undefined **********)&local_78;
          ppppppppppuStack_1f0 = local_124[0];
          ppppppppppuStack_1f4 = (undefined **********)0x450f71;
          pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0x11])();
          if ((int)pppppppppppuVar7 < 0) {
            ppppppppppuStack_1f4 = (undefined **********)0x44;
            ppppppppppuStack_1f8 = (undefined **********)&LAB_0041470c;
            ppppppppppuStack_1fc = local_124[0];
            ppppppppppuStack_204 = (undefined **********)0x450f88;
            ppppppppppuStack_200 = (undefined **********)pppppppppppuVar7;
            (*pcVar15)();
          }
          ppppppppppuVar10 = local_78;
          ppppppppppuStack_1f4 = (undefined **********)&local_7c;
          ppppppppppuStack_1f8 = local_78;
          ppppppppppuStack_1fc = (undefined **********)0x450f97;
          pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0x19])();
          if ((int)pppppppppppuVar7 < 0) {
            ppppppppppuStack_1c0 = (undefined **********)0x64;
            ppppppppppuStack_1c4 = (undefined **********)&LAB_004133f8;
            ppppppppppuStack_1c8 = ppppppppppuVar10;
            ppppppppppuStack_1d0 = (undefined **********)0x450fa8;
            ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
            (*pcVar15)();
          }
          ppppppppppuStack_1c0 = local_7c;
          ppppppppppuStack_1c4 = local_60;
          ppppppppppuStack_1c8 = (undefined **********)0x450fb6;
          sVar3 = __vbaObjIs();
          ppppppppppuStack_1c0 = (undefined **********)&local_7c;
          ppppppppppuStack_1c4 = (undefined **********)&local_78;
          ppppppppppuStack_1c8 = (undefined **********)0x2;
          ppppppppppuStack_1cc = (undefined **********)0x450fc9;
          __vbaFreeObjList();
          if (sVar3 == 0) {
            ppppppppppuStack_1c0 = local_104;
            ppppppppppuStack_1c4 = local_60;
            ppppppppppuStack_1c8 = (undefined **********)0x450fe8;
            ppppppppppuVar10 = (undefined **********)(*(code *)(*local_60)[9])();
            if ((int)ppppppppppuVar10 < 0) {
              ppppppppppuStack_1c0 = (undefined **********)0x24;
              ppppppppppuStack_1c4 = (undefined **********)&DAT_00414268;
              ppppppppppuStack_1c8 = local_60;
              ppppppppppuStack_1d0 = (undefined **********)0x450ffc;
              ppppppppppuStack_1cc = ppppppppppuVar10;
              (*pcVar15)();
            }
            if ((short)local_104[0] == 0) {
              ppppppppppuStack_1c0 = (undefined **********)&local_78;
              ppppppppppuStack_1c4 = local_60;
              ppppppppppuStack_1c8 = (undefined **********)0x45101a;
              ppppppppppuStack_1d0 = (undefined **********)(*(code *)(*local_60)[0x1c])();
              if ((int)ppppppppppuStack_1d0 < 0) {
                ppppppppppuStack_1c4 = (undefined **********)0x70;
                ppppppppppuStack_1c8 = (undefined **********)&DAT_00414268;
                ppppppppppuStack_1cc = local_60;
                ppppppppppuStack_1d4 = (undefined **********)0x45102e;
                (*pcVar15)();
              }
              ppppppppppuStack_1c4 = (undefined **********)0x0;
              ppppppppppuStack_1c8 = (undefined **********)0x418118;
              ppppppppppuStack_1d0 = local_90;
              ppppppppppuStack_1cc = local_78;
              local_c8 = (undefined *********)0x1;
              local_d0 = (undefined **********)0x8002;
              ppppppppppuStack_1d4 = (undefined **********)0x451059;
              ppppppppppuStack_1c4 = (undefined **********)__vbaLateMemCallLd();
              ppppppppppuStack_1c8 = (undefined **********)&local_d0;
              ppppppppppuStack_1cc = local_a0;
              ppppppppppuStack_1d0 = (undefined **********)0x451071;
              ppppppppppuStack_1c4 = (undefined **********)__vbaVarCmpEq();
              ppppppppppuStack_1c8 = (undefined **********)0x451078;
              sVar3 = __vbaBoolVar();
              ppppppppppuStack_1c4 = (undefined **********)0x451083;
              __vbaFreeObj();
              ppppppppppuStack_1c4 = (undefined **********)0x45108f;
              __vbaFreeVar();
            }
            else {
              sVar3 = -1;
            }
          }
          else {
            sVar3 = 0;
          }
          if (sVar3 != 0) {
            ppppppppppuStack_1c0 = (undefined **********)&local_68;
            ppppppppppuStack_1c4 = local_60;
            ppppppppppuStack_1c8 = (undefined **********)0x4510a5;
            pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[7])();
            if ((int)pppppppppppuVar7 < 0) {
              ppppppppppuStack_1c8 = (undefined **********)0x1c;
              ppppppppppuStack_1cc = (undefined **********)&DAT_00414268;
              ppppppppppuStack_1d0 = local_60;
              ppppppppppuStack_1d8 = (undefined **********)0x4510b9;
              ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
              (*pcVar15)();
            }
            ppppppppppuStack_1c8 = (undefined **********)&local_78;
            ppppppppppuStack_1cc = local_124[0];
            ppppppppppuStack_1d0 = (undefined **********)0x4510c9;
            pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0xf])();
            if ((int)pppppppppppuVar7 < 0) {
              ppppppppppuStack_1d0 = (undefined **********)0x3c;
              ppppppppppuStack_1d4 = (undefined **********)&LAB_0041470c;
              ppppppppppuStack_1d8 = local_124[0];
              ppppppppppuStack_1e0 = (undefined **********)0x4510e0;
              ppppppppppuStack_1dc = (undefined **********)pppppppppppuVar7;
              (*pcVar15)();
            }
            ppppppppppuVar10 = local_78;
            local_68 = (undefined **********)0x0;
            ppppppppppuStack_1d0 = (undefined **********)0x4510f2;
            __vbaStrMove();
            ppppppppppuStack_1d0 = (undefined **********)&local_7c;
            ppppppppppuStack_1d4 = &local_6c;
            ppppppppppuStack_1d8 = (undefined **********)&local_60;
            ppppppppppuStack_1dc = ppppppppppuVar10;
            ppppppppppuStack_1e0 = (undefined **********)0x451104;
            pppppppppppuVar7 = (undefined ***********)(*(code *)(*ppppppppppuVar10)[7])();
            if ((int)pppppppppppuVar7 < 0) {
              ppppppppppuStack_1e0 = (undefined **********)0x1c;
              ppppppppppuStack_1e4 = (undefined **********)&DAT_00414ba4;
              ppppppppppuStack_1e8 = ppppppppppuVar10;
              ppppppppppuStack_1f0 = (undefined **********)0x451115;
              ppppppppppuStack_1ec = (undefined **********)pppppppppppuVar7;
              (*pcVar15)();
            }
            ppppppppppuStack_1e4 = (undefined **********)&local_34;
            ppppppppppuStack_1e0 = local_7c;
            local_7c = (undefined **********)0x0;
            ppppppppppuStack_1e8 = (undefined **********)0x451126;
            __vbaObjSet();
            ppppppppppuStack_1e0 = (undefined **********)0x45112f;
            __vbaFreeStr();
            ppppppppppuStack_1e0 = (undefined **********)0x451138;
            __vbaFreeObj();
            ppppppppppuStack_1e0 = local_104;
            ppppppppppuStack_1e4 = local_60;
            ppppppppppuStack_1e8 = (undefined **********)0x451148;
            pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x11])();
            if ((int)pppppppppppuVar7 < 0) {
              ppppppppppuStack_1e8 = (undefined **********)0x44;
              ppppppppppuStack_1ec = (undefined **********)&DAT_00414268;
              ppppppppppuStack_1f0 = local_60;
              ppppppppppuStack_1f8 = (undefined **********)0x45115c;
              ppppppppppuStack_1f4 = (undefined **********)pppppppppppuVar7;
              (*pcVar15)();
            }
            if ((short)local_104[0] != 0) {
              ppppppppppuStack_1e8 = &local_108;
              ppppppppppuStack_1ec = local_60;
              ppppppppppuStack_1f0 = (undefined **********)0x451179;
              pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x15])();
              if ((int)pppppppppppuVar7 < 0) {
                ppppppppppuStack_1f0 = (undefined **********)0x54;
                ppppppppppuStack_1f4 = (undefined **********)&DAT_00414268;
                ppppppppppuStack_1f8 = local_60;
                ppppppppppuStack_200 = (undefined **********)0x45118d;
                ppppppppppuStack_1fc = (undefined **********)pppppppppppuVar7;
                (*pcVar15)();
              }
              if ((undefined **********)local_108 == (undefined **********)0x2) {
                ppppppppppuStack_1f0 = (undefined **********)&DAT_0040888c;
                ppppppppppuStack_1f4 = (undefined **********)0x4511a5;
                ppppppppppuStack_1f0 = (undefined **********)__vbaNew();
                ppppppppppuStack_1f4 = (undefined **********)&local_5c;
                ppppppppppuStack_1f8 = (undefined **********)0x4511b2;
                __vbaObjSet();
                ppppppppppuStack_1f0 = local_90;
                ppppppppppuStack_1f4 = local_60;
                ppppppppppuStack_1f8 = (undefined **********)0x4511c2;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x16])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1f8 = (undefined **********)0x58;
                  ppppppppppuStack_1fc = (undefined **********)&DAT_00414268;
                  ppppppppppuStack_200 = local_60;
                  ppppppppppuStack_208 = (undefined **********)0x4511d6;
                  ppppppppppuStack_204 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_1fc = local_90;
                ppppppppppuStack_1f8 = (undefined **********)&LAB_004133f8;
                ppppppppppuStack_200 = (undefined **********)0x4511e8;
                ppppppppppuStack_1f8 = (undefined **********)__vbaCastObjVar();
                ppppppppppuStack_1fc = (undefined **********)&local_78;
                ppppppppppuStack_200 = (undefined **********)0x4511ef;
                __vbaObjSet();
                ppppppppppuStack_1f8 = (undefined **********)&local_78;
                ppppppppppuStack_1fc = local_5c;
                ppppppppppuStack_200 = (undefined **********)0x4511fc;
                pppppppuVar11 = (undefined *******)(*(code *)(*local_5c)[0x12])();
                if ((int)pppppppuVar11 < 0) {
                  ppppppppppuStack_200 = (undefined **********)0x48;
                  ppppppppppuStack_204 = (undefined **********)&LAB_0041470c;
                  ppppppppppuStack_208 = local_5c;
                  ppppppppppuStack_210 = (undefined **********)0x451210;
                  pppppppuStack_20c = pppppppuVar11;
                  (*pcVar15)();
                }
                ppppppppppuStack_200 = (undefined **********)0x451219;
                __vbaFreeObj();
                ppppppppppuStack_200 = (undefined **********)0x451225;
                __vbaFreeVar();
                ppppppppppuStack_1fc = (undefined **********)&LAB_0041470c;
                ppppppppppuStack_200 = (undefined **********)0x0;
                ppppppppppuStack_204 = (undefined **********)0x451231;
                ppppppppppuStack_1fc = (undefined **********)__vbaCastObj();
                ppppppppppuStack_200 = (undefined **********)&local_78;
                ppppppppppuStack_204 = (undefined **********)0x451238;
                __vbaObjSet();
                ppppppppppuStack_1fc = (undefined **********)&local_78;
                local_104[0] = (undefined *********)0x0;
                ppppppppppuStack_200 = (undefined **********)param_4;
                ppppppppppuStack_204 = local_104;
                ppppppppppuStack_208 = (undefined **********)&local_5c;
                pppppppuStack_20c = param_1;
                ppppppppppuStack_210 = (undefined **********)0x45125d;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*param_1)[0x1cc])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_210 = (undefined **********)0x730;
                  ppppppppppuStack_214 = (undefined **********)&DAT_00413728;
                  ppppppppppuStack_218 = (undefined **********)param_1;
                  ppppppppppuStack_220 = (undefined **********)0x45126f;
                  ppppppppppuStack_21c = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_210 = (undefined **********)0x451278;
                __vbaFreeObj();
                ppppppppppuStack_214 = (undefined **********)local_54;
                ppppppppppuStack_210 = local_5c;
                ppppppppppuStack_218 = (undefined **********)0x451286;
                __vbaVarSetObjAddref();
              }
              else {
                ppppppppppuStack_1f0 = (undefined **********)&local_78;
                ppppppppppuStack_1f4 = local_60;
                ppppppppppuStack_1f8 = (undefined **********)0x451298;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x1a])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_210 = (undefined **********)0x68;
                  ppppppppppuStack_214 = (undefined **********)&DAT_00414268;
                  ppppppppppuStack_218 = local_60;
                  ppppppppppuStack_220 = (undefined **********)0x4512ac;
                  ppppppppppuStack_21c = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_210 = local_78;
                local_78 = (undefined **********)0x0;
                ppppppppppuStack_214 = &local_20;
                ppppppppppuStack_218 = (undefined **********)0x4512bd;
                __vbaObjSet();
                ppppppppppuStack_210 = (undefined **********)&DAT_00417a98;
                ppppppppppuStack_214 = (undefined **********)local_20;
                ppppppppppuStack_218 = (undefined **********)0x4512ce;
                sVar3 = __vbaCheckType();
                if (sVar3 != 0) {
                  ppppppppppuStack_210 = (undefined **********)0x0;
                  ppppppppppuStack_214 = (undefined **********)0x4183f0;
                  ppppppppppuStack_21c = local_90;
                  ppppppppppuStack_218 = (undefined **********)local_20;
                  ppppppppppuStack_220 = (undefined **********)0x4512ea;
                  __vbaLateMemCallLd();
                  ppppppppppuStack_210 = (undefined **********)0x4512f8;
                  __vbaVarMove();
                }
                ppppppppppuStack_210 = (undefined **********)&DAT_0041807c;
                ppppppppppuStack_214 = (undefined **********)local_20;
                ppppppppppuStack_218 = (undefined **********)0x451303;
                sVar3 = __vbaCheckType();
                if (sVar3 != 0) {
                  ppppppppppuStack_210 = (undefined **********)&local_78;
                  ppppppppppuStack_214 = (undefined **********)param_1[0x18];
                  ppppppppppuStack_218 = (undefined **********)0x45131c;
                  ppppppppppuVar10 =
                       (undefined **********)(*(code *)(*ppppppppppuStack_214)[0x11])();
                  if ((int)ppppppppppuVar10 < 0) {
                    ppppppppppuStack_220 = (undefined **********)param_1[0x18];
                    ppppppppppuStack_218 = (undefined **********)0x44;
                    ppppppppppuStack_21c = (undefined **********)&LAB_00414228;
                    ppppppppppuStack_228 = (undefined **********)0x451330;
                    ppppppppppuStack_224 = ppppppppppuVar10;
                    (*pcVar15)();
                  }
                  ppppppppppuVar10 = local_78;
                  ppppppppppuStack_218 = local_90;
                  ppppppppppuStack_21c = local_60;
                  ppppppppppuStack_220 = (undefined **********)0x451343;
                  ppppppppppuStack_22c = (undefined **********)(*(code *)(*local_60)[0x16])();
                  if ((int)ppppppppppuStack_22c < 0) {
                    ppppppppppuStack_220 = (undefined **********)0x58;
                    ppppppppppuStack_224 = (undefined **********)&DAT_00414268;
                    ppppppppppuStack_228 = local_60;
                    ppppppppppuStack_230 = (undefined **********)0x451357;
                    (*pcVar15)();
                  }
                  ppppppppppuStack_220 = (undefined **********)&local_7c;
                  ppppppppppuStack_224 = local_90;
                  ppppppppppuStack_228 = ppppppppppuVar10;
                  ppppppppppuStack_22c = (undefined **********)0x451368;
                  iVar13 = (*(code *)(*ppppppppppuVar10)[9])();
                  if (iVar13 < 0) {
                    ppppppppppuStack_22c = (undefined **********)0x24;
                    ppppppppppuStack_230 = (undefined **********)&DAT_00414238;
                    ppppppppppuStack_234 = ppppppppppuVar10;
                    uStack_23c = 0x451379;
                    ppppppppppuStack_238 = (undefined **********)iVar13;
                    (*pcVar15)();
                  }
                  ppppppppppuStack_230 = (undefined **********)local_30;
                  ppppppppppuStack_22c = local_7c;
                  local_7c = (undefined **********)0x0;
                  ppppppppppuStack_234 = (undefined **********)0x45138a;
                  __vbaObjSet();
                  ppppppppppuStack_22c = (undefined **********)0x451393;
                  __vbaFreeObj();
                  ppppppppppuStack_22c = (undefined **********)0x45139f;
                  __vbaFreeVar();
                  ppppppppppuStack_228 = local_104;
                  ppppppppppuStack_22c = local_30[0];
                  ppppppppppuStack_230 = (undefined **********)0x4513af;
                  pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_30[0])[0xb])();
                  if ((int)pppppppppppuVar7 < 0) {
                    ppppppppppuStack_210 = (undefined **********)0x2c;
                    ppppppppppuStack_214 = (undefined **********)&LAB_004133e8;
                    ppppppppppuStack_218 = local_30[0];
                    ppppppppppuStack_220 = (undefined **********)0x4513c3;
                    ppppppppppuStack_21c = (undefined **********)pppppppppppuVar7;
                    (*pcVar15)();
                  }
                  if ((short)local_104[0] != 0) {
                    ppppppppppuStack_210 = (undefined **********)&local_78;
                    ppppppppppuStack_214 = local_30[0];
                    ppppppppppuStack_218 = (undefined **********)0x4513dd;
                    ppppppppppuStack_224 = (undefined **********)(*(code *)(*local_30[0])[0x1b])();
                    if ((int)ppppppppppuStack_224 < 0) {
                      ppppppppppuStack_218 = (undefined **********)0x6c;
                      ppppppppppuStack_21c = (undefined **********)&LAB_004133e8;
                      ppppppppppuStack_220 = local_30[0];
                      ppppppppppuStack_228 = (undefined **********)0x4513f1;
                      (*pcVar15)();
                    }
                    ppppppppppuVar10 = local_78;
                    ppppppppppuStack_218 = (undefined **********)0x0;
                    ppppppppppuStack_21c = (undefined **********)0x4183f0;
                    ppppppppppuStack_224 = local_90;
                    ppppppppppuStack_220 = (undefined **********)local_20;
                    ppppppppppuStack_228 = (undefined **********)0x45140b;
                    ppppppppppuStack_218 = (undefined **********)__vbaLateMemCallLd();
                    ppppppppppuStack_21c = (undefined **********)0x451415;
                    __vbaStrVarMove();
                    ppppppppppuStack_218 = (undefined **********)0x451420;
                    __vbaStrMove();
                    ppppppppppuStack_218 = (undefined **********)&local_7c;
                    ppppppppppuStack_21c = (undefined **********)&local_68;
                    ppppppppppuStack_220 = ppppppppppuVar10;
                    ppppppppppuStack_224 = (undefined **********)0x45142e;
                    pppppppppppuVar7 = (undefined ***********)(*(code *)(*ppppppppppuVar10)[10])();
                    if ((int)pppppppppppuVar7 < 0) {
                      ppppppppppuStack_214 = (undefined **********)0x28;
                      ppppppppppuStack_218 = (undefined **********)&DAT_004146fc;
                      ppppppppppuStack_21c = ppppppppppuVar10;
                      ppppppppppuStack_224 = (undefined **********)0x45143f;
                      ppppppppppuStack_220 = (undefined **********)pppppppppppuVar7;
                      (*pcVar15)();
                    }
                    ppppppppppuStack_218 = (undefined **********)local_54;
                    ppppppppppuStack_214 = local_7c;
                    local_7c = (undefined **********)0x0;
                    ppppppppppuStack_21c = (undefined **********)0x451450;
                    __vbaVarSetObj();
                    ppppppppppuStack_214 = (undefined **********)0x451459;
                    __vbaFreeStr();
                    ppppppppppuStack_214 = (undefined **********)0x451462;
                    __vbaFreeObj();
                    ppppppppppuStack_214 = (undefined **********)0x45146e;
                    __vbaFreeVar();
                    ppppppppppuStack_214 = (undefined **********)local_54;
                    ppppppppppuStack_210 = (undefined **********)0x0;
                    ppppppppppuStack_218 = (undefined **********)0x451479;
                    ppppppppppuStack_214 = (undefined **********)__vbaUnkVar();
                    ppppppppppuStack_218 = (undefined **********)0x451480;
                    sVar3 = __vbaObjIs();
                    if (sVar3 == 0) goto LAB_004514bd;
                  }
                  ppppppppppuStack_21c = local_90;
                  ppppppppppuStack_210 = (undefined **********)0x0;
                  ppppppppppuStack_214 = (undefined **********)0x4183f0;
                  ppppppppppuStack_220 = (undefined **********)0x4514af;
                  ppppppppppuStack_218 = (undefined **********)local_20;
                  __vbaLateMemCallLd();
                  ppppppppppuStack_210 = (undefined **********)0x4514bd;
                  __vbaVarMove();
                }
              }
LAB_004514bd:
              ppppppppppuStack_210 = (undefined **********)local_54;
              ppppppppppuStack_214 = (undefined **********)0x4514c7;
              iVar13 = rtcVarType();
              if (iVar13 == 8 && *(short *)param_4 != 0) {
                ppppppppppuStack_210 = (undefined **********)local_54;
                ppppppppppuStack_214 = (undefined **********)&local_d0;
                local_c8 = (undefined *********)&DAT_00412f74;
                local_d0 = (undefined **********)0x8008;
                ppppppppppuStack_218 = (undefined **********)0x451507;
                sVar3 = __vbaVarTstEq();
                if (sVar3 != 0) {
                  ppppppppppuStack_210 = (undefined **********)&local_68;
                  ppppppppppuStack_214 = local_60;
                  ppppppppppuStack_218 = (undefined **********)0x45151d;
                  pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0xd])();
                  if ((int)pppppppppppuVar7 < 0) {
                    ppppppppppuStack_210 = (undefined **********)0x34;
                    ppppppppppuStack_214 = (undefined **********)&DAT_00414268;
                    ppppppppppuStack_218 = local_60;
                    ppppppppppuStack_220 = (undefined **********)0x451531;
                    ppppppppppuStack_21c = (undefined **********)pppppppppppuVar7;
                    (*pcVar15)();
                  }
                  local_c0[0] = (undefined ********)0xa;
                  local_b0[0] = (undefined *********)0xa;
                  local_b8 = 0x80020004;
                  local_a8 = 0x80020004;
                  local_c8 = (undefined *********)0x4130a4;
                  local_d0 = (undefined **********)0x8;
                  ppppppppppuStack_210 = (undefined **********)0x451579;
                  __vbaVarDup();
                  ppppppppppuStack_210 = (undefined **********)0x41849c;
                  ppppppppppuStack_214 = local_68;
                  ppppppppppuStack_218 = (undefined **********)0x45158a;
                  __vbaStrCat();
                  ppppppppppuStack_210 = (undefined **********)0x451595;
                  ppppppppppuStack_210 = (undefined **********)__vbaStrMove();
                  ppppppppppuStack_214 = (undefined **********)0x4184b8;
                  ppppppppppuStack_218 = (undefined **********)0x45159d;
                  __vbaStrCat();
                  ppppppppppuStack_210 = (undefined **********)0x4515a8;
                  ppppppppppuStack_210 = (undefined **********)__vbaStrMove();
                  ppppppppppuStack_214 = (undefined **********)&LAB_004143c4;
                  ppppppppppuStack_218 = (undefined **********)0x4515b0;
                  __vbaStrCat();
                  ppppppppppuStack_210 = (undefined **********)0x4515bb;
                  ppppppppppuStack_210 = (undefined **********)__vbaStrMove();
                  ppppppppppuStack_214 = (undefined **********)0x4184d4;
                  ppppppppppuStack_218 = (undefined **********)0x4515c3;
                  local_88 = (undefined **********)__vbaStrCat();
                  ppppppppppuStack_210 = (undefined **********)local_c0;
                  ppppppppppuStack_214 = local_b0;
                  ppppppppppuStack_218 = local_a0;
                  ppppppppppuStack_220 = local_90;
                  ppppppppppuStack_21c = (undefined **********)0x34;
                  local_90[0] = (undefined *********)0x8;
                  ppppppppppuStack_224 = (undefined **********)0x4515f7;
                  iVar13 = rtcMsgBox();
                  ppppppppppuStack_210 = (undefined **********)&local_74;
                  ppppppppppuStack_214 = &local_70;
                  ppppppppppuStack_218 = &local_6c;
                  ppppppppppuStack_21c = (undefined **********)&local_68;
                  ppppppppppuStack_220 = (undefined **********)0x4;
                  ppppppppppuStack_224 = (undefined **********)0x451611;
                  __vbaFreeStrList();
                  ppppppppppuStack_224 = (undefined **********)local_c0;
                  ppppppppppuStack_228 = local_b0;
                  ppppppppppuStack_22c = local_a0;
                  ppppppppppuStack_230 = local_90;
                  ppppppppppuStack_234 = (undefined **********)0x4;
                  ppppppppppuStack_238 = (undefined **********)0x451635;
                  __vbaFreeVarList();
                  if (iVar13 == 6) {
                    ppppppppppuStack_210 = (undefined **********)param_2;
                    ppppppppppuStack_214 = local_60;
                    ppppppppppuStack_218 = (undefined **********)0x45164d;
                    pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x20])();
                    if ((int)pppppppppppuVar7 < 0) {
                      ppppppppppuStack_210 = (undefined **********)0x80;
                      ppppppppppuStack_214 = (undefined **********)&DAT_00414268;
                      ppppppppppuStack_218 = local_60;
                      ppppppppppuStack_220 = (undefined **********)0x451664;
                      ppppppppppuStack_21c = (undefined **********)pppppppppppuVar7;
                      (*pcVar15)();
                    }
                  }
                }
              }
              ppppppppppuStack_210 = (undefined **********)local_54;
              ppppppppppuStack_214 = local_34;
              ppppppppppuStack_218 = (undefined **********)0x451671;
              pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_34)[0xd])();
              if ((int)pppppppppppuVar7 < 0) {
                ppppppppppuStack_1e8 = (undefined **********)0x34;
                ppppppppppuStack_1ec = (undefined **********)&DAT_00414bb4;
                ppppppppppuStack_1f0 = local_34;
                ppppppppppuStack_1f8 = (undefined **********)0x451685;
                ppppppppppuStack_1f4 = (undefined **********)pppppppppppuVar7;
                (*pcVar15)();
              }
            }
            ppppppppppuStack_1e8 = (undefined **********)&local_78;
            ppppppppppuStack_1ec = local_60;
            ppppppppppuStack_1f0 = (undefined **********)0x451692;
            ppppppppppuStack_1fc = (undefined **********)(*(code *)(*local_60)[0x1c])();
            if ((int)ppppppppppuStack_1fc < 0) {
              ppppppppppuStack_1f0 = (undefined **********)0x70;
              ppppppppppuStack_1f4 = (undefined **********)&DAT_00414268;
              ppppppppppuStack_1f8 = local_60;
              ppppppppppuStack_200 = (undefined **********)0x4516a6;
              (*pcVar15)();
            }
            ppppppppppuStack_1f0 = (undefined **********)0x0;
            ppppppppppuStack_1f4 = (undefined **********)0x41837c;
            ppppppppppuStack_1fc = local_90;
            ppppppppppuStack_1f8 = local_78;
            ppppppppppuStack_200 = (undefined **********)0x4516bd;
            __vbaLateMemCallLd();
            ppppppppppuStack_1f0 = (undefined **********)&local_7c;
            ppppppppppuStack_1f4 = (undefined **********)param_1[0x1a];
            ppppppppppuStack_1f8 = (undefined **********)0x4516d0;
            pppppppppppuVar7 = (undefined ***********)(*(code *)(*ppppppppppuStack_1f4)[0x18])();
            if ((int)pppppppppppuVar7 < 0) {
              ppppppppppuStack_200 = (undefined **********)param_1[0x1a];
              ppppppppppuStack_1f8 = (undefined **********)0x60;
              ppppppppppuStack_1fc = (undefined **********)&LAB_004133e8;
              ppppppppppuStack_208 = (undefined **********)0x4516e4;
              ppppppppppuStack_204 = (undefined **********)pppppppppppuVar7;
              (*pcVar15)();
            }
            ppppppppppuVar10 = local_7c;
            ppppppppppuStack_1f8 = (undefined **********)0x4516f2;
            __vbaStrCopy();
            ppppppppppuStack_1f0 = local_90;
            local_108 = (undefined *********)0x1;
            ppppppppppuStack_1f4 = (undefined **********)0x451709;
            __vbaStrVarMove();
            ppppppppppuStack_1f0 = (undefined **********)0x451714;
            __vbaStrMove();
            ppppppppppuStack_1f0 = &local_80;
            ppppppppppuStack_1f4 = &local_6c;
            ppppppppppuStack_1f8 = (undefined **********)&local_34;
            ppppppppppuStack_1fc = (undefined **********)param_2;
            ppppppppppuStack_200 = &local_108;
            ppppppppppuStack_204 = (undefined **********)&local_68;
            ppppppppppuStack_208 = ppppppppppuVar10;
            pppppppuStack_20c = (undefined *******)0x451735;
            ppppppppppuStack_1d0 = (undefined **********)(*(code *)(*ppppppppppuVar10)[7])();
            if ((int)ppppppppppuStack_1d0 < 0) {
              ppppppppppuStack_1c4 = (undefined **********)0x1c;
              ppppppppppuStack_1c8 = (undefined **********)&DAT_00414c50;
              ppppppppppuStack_1cc = ppppppppppuVar10;
              ppppppppppuStack_1d4 = (undefined **********)0x451746;
              (*pcVar15)();
            }
            ppppppppppuStack_1c4 = &local_6c;
            ppppppppppuStack_1c8 = (undefined **********)&local_68;
            ppppppppppuStack_1cc = (undefined **********)0x2;
            ppppppppppuStack_1d0 = (undefined **********)0x451756;
            __vbaFreeStrList();
            ppppppppppuStack_1d0 = &local_80;
            ppppppppppuStack_1d4 = (undefined **********)&local_7c;
            ppppppppppuStack_1d8 = (undefined **********)&local_78;
            ppppppppppuStack_1dc = (undefined **********)0x3;
            ppppppppppuStack_1e0 = (undefined **********)0x45176a;
            __vbaFreeObjList();
            ppppppppppuStack_1c4 = (undefined **********)0x451779;
            __vbaFreeVar();
          }
        }
        else {
          ppppppppppuStack_1c8 = (undefined **********)&local_78;
          ppppppppppuStack_1cc = local_60;
          local_58 = (undefined *******)0x0;
          ppppppppppuStack_1d0 = (undefined **********)0x44fefd;
          ppppppppppuStack_1dc = (undefined **********)(*(code *)(*local_60)[0x1c])();
          if ((int)ppppppppppuStack_1dc < 0) {
            ppppppppppuStack_1d0 = (undefined **********)0x70;
            ppppppppppuStack_1d4 = (undefined **********)&DAT_00414268;
            ppppppppppuStack_1d8 = local_60;
            ppppppppppuStack_1e0 = (undefined **********)0x44ff11;
            (*pcVar15)();
          }
          ppppppppppuStack_1d0 = (undefined **********)0x0;
          ppppppppppuStack_1d4 = (undefined **********)0x418418;
          ppppppppppuStack_1dc = local_90;
          ppppppppppuStack_1d8 = local_78;
          local_c8 = (undefined *********)0x1;
          local_d0 = (undefined **********)0x2;
          ppppppppppuStack_1e0 = (undefined **********)0x44ff3e;
          ppppppppppuStack_1d0 = (undefined **********)__vbaLateMemCallLd();
          ppppppppppuStack_1d4 = (undefined **********)&local_d0;
          ppppppppppuStack_1d8 = local_a0;
          ppppppppppuStack_1dc = (undefined **********)0x44ff56;
          ppppppppppuStack_1d0 = (undefined **********)__vbaVarSub();
          ppppppppppuStack_1d4 = (undefined **********)0x44ff5d;
          sVar3 = __vbaI2Var();
          local_38 = (undefined ********)0x1;
          ppppppppppuStack_1c4 = (undefined **********)0x44ff6f;
          __vbaFreeObj();
          ppppppppppuStack_1c4 = (undefined **********)0x44ff7b;
          __vbaFreeVar();
          ppppppppuVar2 = local_38;
          while (local_38 = ppppppppuVar2, (short)local_38 <= sVar3) {
            local_c8 = &local_38;
            ppppppppppuStack_1c0 = (undefined **********)&local_78;
            local_d0 = (undefined **********)0x4002;
            ppppppppppuStack_1c4 = local_60;
            ppppppppppuStack_1c8 = (undefined **********)0x44ffab;
            pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x1c])();
            if ((int)pppppppppppuVar7 < 0) {
              ppppppppppuStack_1c8 = (undefined **********)0x70;
              ppppppppppuStack_1cc = (undefined **********)&DAT_00414268;
              ppppppppppuStack_1d0 = local_60;
              ppppppppppuStack_1d8 = (undefined **********)0x44ffbf;
              ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
              (*pcVar15)();
            }
            ppppppppppuStack_1c8 = (undefined **********)&local_68;
            ppppppppppuStack_1cc = local_60;
            ppppppppppuStack_1d0 = (undefined **********)0x44ffcc;
            ppppppppppuStack_1cc = (undefined **********)(*(code *)(*local_60)[0xd])();
            if ((int)ppppppppppuStack_1cc < 0) {
              ppppppppppuStack_1c0 = (undefined **********)0x34;
              ppppppppppuStack_1c4 = (undefined **********)&DAT_00414268;
              ppppppppppuStack_1c8 = local_60;
              ppppppppppuStack_1d0 = (undefined **********)0x44ffe0;
              (*pcVar15)();
            }
            local_88 = local_68;
            ppppppppppuStack_1d0 = (undefined **********)0x1;
            ppppppppppuStack_1d4 = (undefined **********)0x41842c;
            ppppppppppuStack_1cc = local_d0;
            local_68 = (undefined **********)0x0;
            local_90[0] = (undefined *********)0x8008;
            ppppppppppuStack_1c8 = (undefined **********)local_cc;
            ppppppppppuStack_1c4 = (undefined **********)local_c8;
            ppppppppppuStack_1dc = local_a0;
            ppppppppppuStack_1c0 = (undefined **********)local_c4;
            ppppppppppuStack_1d8 = local_78;
            ppppppppppuStack_1e0 = (undefined **********)0x45003a;
            ppppppppppuStack_1c0 = (undefined **********)__vbaLateMemCallLd();
            ppppppppppuStack_1c4 = local_90;
            ppppppppppuStack_1c8 = (undefined **********)0x45004b;
            sVar4 = __vbaVarTstEq();
            pppppppppppuVar8 =
                 (undefined ***********)CONCAT22((short)((uint)pppppppppppuVar8 >> 0x10),sVar4);
            ppppppppppuStack_1c0 = (undefined **********)0x450057;
            __vbaFreeObj();
            ppppppppppuStack_1c0 = local_90;
            ppppppppppuStack_1c4 = local_a0;
            ppppppppppuStack_1c8 = (undefined **********)0x2;
            ppppppppppuStack_1cc = (undefined **********)0x45006d;
            __vbaFreeVarList();
            if (sVar4 != 0) {
              local_58 = (undefined *******)local_38;
            }
            pppppppppppuVar7 = (undefined ***********)0x1;
            ppppppppuVar2 = (undefined ********)CONCAT22(extraout_var,(short)local_38 + 1);
            if (SCARRY2((short)local_38,1)) goto LAB_004518a0;
          }
          ppppppppppuStack_1c0 = (undefined **********)0x1;
          ppppppppppuStack_1c4 = (undefined **********)0x1;
          ppppppppppuStack_1c8 = (undefined **********)0x1;
          ppppppppppuStack_1d0 = local_28;
          ppppppppppuStack_1cc = (undefined **********)0x8;
          ppppppppppuStack_1d4 = (undefined **********)0x4;
          ppppppppppuStack_1d8 = (undefined **********)0x180;
          local_38 = (undefined ********)0x0;
          ppppppppppuStack_1dc = (undefined **********)0x4500ae;
          __vbaRedim();
          ppppppppppuStack_1c0 = (undefined **********)&local_78;
          pppppppppppuVar8 = (undefined ***********)*param_5;
          ppppppppppuStack_1c8 = (undefined **********)0x4500c0;
          ppppppppppuStack_1c4 = (undefined **********)pppppppppppuVar8;
          iVar13 = (*(code *)(*pppppppppppuVar8)[0xf])();
          if (iVar13 < 0) {
            ppppppppppuStack_1bc = (undefined **********)0x3c;
            ppppppppppuStack_1c0 = (undefined **********)&LAB_0041470c;
            ppppppppppuStack_1cc = (undefined **********)0x4500d1;
            ppppppppppuStack_1c8 = (undefined **********)iVar13;
            ppppppppppuStack_1c4 = (undefined **********)pppppppppppuVar8;
            (*pcVar15)();
          }
          ppppppppppuStack_1bc = local_78;
          local_78 = (undefined **********)0x0;
          ppppppppppuStack_1c0 = (undefined **********)&local_130;
          ppppppppppuStack_1c4 = (undefined **********)0x4500e5;
          ppppppppppuStack_1bc = (undefined **********)__vbaObjSet();
          ppppppppppuStack_1c0 = (undefined **********)&local_34;
          ppppppppppuStack_1c4 = (undefined **********)&local_134;
          ppppppppppuStack_1c8 = (undefined **********)&DAT_00414bb4;
          ppppppppppuStack_1cc = (undefined **********)0x4500fc;
          iVar13 = __vbaForEachCollObj();
          while (iVar13 != 0) {
            ppppppppppuStack_1bc = (undefined **********)&local_78;
            ppppppppppuStack_1c0 = local_34;
            ppppppppppuStack_1c4 = (undefined **********)0x450114;
            pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_34)[10])();
            if ((int)pppppppppppuVar7 < 0) {
              ppppppppppuStack_1bc = (undefined **********)0x28;
              ppppppppppuStack_1c0 = (undefined **********)&DAT_00414bb4;
              ppppppppppuStack_1c4 = local_34;
              ppppppppppuStack_1cc = (undefined **********)0x450128;
              ppppppppppuStack_1c8 = (undefined **********)pppppppppppuVar7;
              (*pcVar15)();
            }
            ppppppppppuStack_1bc = local_60;
            ppppppppppuStack_1c0 = local_78;
            ppppppppppuStack_1c4 = (undefined **********)0x450136;
            sVar3 = __vbaObjIs();
            pppppppppppuVar8 =
                 (undefined ***********)CONCAT22((short)((uint)pppppppppppuVar8 >> 0x10),sVar3);
            ppppppppppuStack_1bc = (undefined **********)0x450142;
            __vbaFreeObj();
            if (sVar3 != 0) {
              ppppppppppuStack_1bc = (undefined **********)0x1;
              pppppppppppuVar7 = (undefined ***********)param_1;
              if (SCARRY2((short)local_38,1)) goto LAB_004518a0;
              ppppppppppuStack_1c0 = (undefined **********)(int)(short)((short)local_38 + 1);
              ppppppppppuStack_1c4 = (undefined **********)0x1;
              ppppppppppuStack_1c8 = (undefined **********)0x8;
              ppppppppppuStack_1d0 = (undefined **********)0x4;
              ppppppppppuStack_1d4 = (undefined **********)0x180;
              ppppppppppuStack_1d8 = (undefined **********)0x450177;
              ppppppppppuStack_1cc = local_28;
              local_38 = (undefined ********)CONCAT22(extraout_var_00,(short)local_38 + 1);
              __vbaRedimPreserve();
              ppppppppppuStack_1c0 = (undefined **********)param_1[0x1a];
              ppppppppppuStack_1bc = (undefined **********)&local_78;
              ppppppppppuStack_1c4 = (undefined **********)0x450187;
              ppppppppppuStack_1d0 =
                   (undefined **********)(*(code *)(*ppppppppppuStack_1c0)[0x18])();
              if ((int)ppppppppppuStack_1d0 < 0) {
                ppppppppppuStack_1cc = (undefined **********)param_1[0x1a];
                ppppppppppuStack_1c4 = (undefined **********)0x60;
                ppppppppppuStack_1c8 = (undefined **********)&LAB_004133e8;
                ppppppppppuStack_1d4 = (undefined **********)0x45019b;
                (*pcVar15)();
              }
              pppppppppppuVar8 = (undefined ***********)local_78;
              ppppppppppuStack_1c4 = (undefined **********)&local_68;
              ppppppppppuStack_1c8 = (undefined **********)&local_34;
              ppppppppppuStack_1cc = (undefined **********)param_5;
              ppppppppppuStack_1d0 = &local_108;
              local_108 = (undefined *********)0x1;
              ppppppppppuStack_1d4 = local_78;
              ppppppppppuStack_1d8 = (undefined **********)0x4501c3;
              pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[10])();
              if ((int)pppppppppppuVar7 < 0) {
                ppppppppppuStack_1c4 = (undefined **********)0x28;
                ppppppppppuStack_1c8 = (undefined **********)&DAT_00414c50;
                ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar8;
                ppppppppppuStack_1d4 = (undefined **********)0x4501d4;
                ppppppppppuStack_1d0 = (undefined **********)pppppppppppuVar7;
                (*pcVar15)();
              }
              if (((undefined **********)local_28[0] == (undefined **********)0x0) ||
                 (*(short *)local_28[0] != 1)) {
                ppppppppppuStack_1c4 = (undefined **********)0x450209;
                __vbaGenerateBoundsError();
              }
              else {
                pppppppppppuVar8 =
                     (undefined ***********)((int)(short)local_38 - (int)local_28[0][5]);
                if (local_28[0][4] <= pppppppppppuVar8) {
                  ppppppppppuStack_1c4 = (undefined **********)0x4501f7;
                  __vbaGenerateBoundsError();
                }
              }
              ppppppppppuStack_1c4 = (undefined **********)0x45021a;
              __vbaStrCopy();
              ppppppppppuStack_1bc = (undefined **********)0x450223;
              __vbaFreeStr();
              ppppppppppuStack_1bc = (undefined **********)0x45022c;
              __vbaFreeObj();
              if ((short)local_38 == (short)local_58) {
                ppppppppppuStack_1bc = &local_108;
                ppppppppppuStack_1c0 = local_60;
                ppppppppppuStack_1c4 = (undefined **********)0x450246;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x15])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1bc = (undefined **********)0x54;
                  ppppppppppuStack_1c0 = (undefined **********)&DAT_00414268;
                  ppppppppppuStack_1c4 = local_60;
                  ppppppppppuStack_1cc = (undefined **********)0x45025a;
                  ppppppppppuStack_1c8 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                if ((undefined **********)local_108 == (undefined **********)0x2) {
                  ppppppppppuStack_1bc = local_90;
                  ppppppppppuStack_1c0 = local_34;
                  ppppppppppuStack_1c4 = (undefined **********)0x450273;
                  pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_34)[0xc])();
                  if ((int)pppppppppppuVar7 < 0) {
                    ppppppppppuStack_1c0 = (undefined **********)0x30;
                    ppppppppppuStack_1c4 = (undefined **********)&DAT_00414bb4;
                    ppppppppppuStack_1c8 = local_34;
                    ppppppppppuStack_1d0 = (undefined **********)0x450287;
                    ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
                    (*pcVar15)();
                  }
                  ppppppppppuStack_1c4 = local_90;
                  ppppppppppuStack_1c0 = (undefined **********)&LAB_0041470c;
                  ppppppppppuStack_1c8 = (undefined **********)0x450299;
                  ppppppppppuStack_1c0 = (undefined **********)__vbaCastObjVar();
                  ppppppppppuStack_1c4 = &local_1c;
                  ppppppppppuStack_1c8 = (undefined **********)0x4502a4;
                  __vbaObjSet();
                  ppppppppppuStack_1c0 = (undefined **********)0x4502b0;
                  __vbaFreeVar();
                }
              }
            }
            ppppppppppuStack_1bc = (undefined **********)&local_34;
            ppppppppppuStack_1c0 = (undefined **********)&local_134;
            ppppppppppuStack_1c4 = (undefined **********)&DAT_00414bb4;
            ppppppppppuStack_1c8 = (undefined **********)0x4502c6;
            iVar13 = __vbaNextEachCollObj();
          }
          ppppppppppuStack_1bc = (undefined **********)&local_78;
          ppppppppppuStack_1c0 = local_124[0];
          ppppppppppuStack_1c4 = (undefined **********)0x4502db;
          pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0xf])();
          if ((int)pppppppppppuVar7 < 0) {
            ppppppppppuStack_1c4 = (undefined **********)0x3c;
            ppppppppppuStack_1c8 = (undefined **********)&LAB_0041470c;
            ppppppppppuStack_1cc = local_124[0];
            ppppppppppuStack_1d4 = (undefined **********)0x4502f2;
            ppppppppppuStack_1d0 = (undefined **********)pppppppppppuVar7;
            (*pcVar15)();
          }
          ppppppppppuVar10 = local_78;
          ppppppppppuStack_1c4 = (undefined **********)&local_60;
          ppppppppppuStack_1c8 = local_78;
          ppppppppppuStack_1cc = (undefined **********)0x450301;
          pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0x10])();
          if ((int)pppppppppppuVar7 < 0) {
            ppppppppppuStack_1cc = (undefined **********)0x40;
            ppppppppppuStack_1d0 = (undefined **********)&DAT_00414ba4;
            ppppppppppuStack_1d4 = ppppppppppuVar10;
            ppppppppppuStack_1dc = (undefined **********)0x450312;
            ppppppppppuStack_1d8 = (undefined **********)pppppppppppuVar7;
            (*pcVar15)();
          }
          ppppppppppuStack_1cc = (undefined **********)0x45031b;
          __vbaFreeObj();
          ppppppppppuStack_1d0 = (undefined **********)param_1[0x1a];
          ppppppppppuStack_1cc = (undefined **********)&local_78;
          ppppppppppuStack_1d4 = (undefined **********)0x450328;
          ppppppppppuStack_1e0 = (undefined **********)(*(code *)(*ppppppppppuStack_1d0)[0x18])();
          if ((int)ppppppppppuStack_1e0 < 0) {
            ppppppppppuStack_1dc = (undefined **********)param_1[0x1a];
            ppppppppppuStack_1d4 = (undefined **********)0x60;
            ppppppppppuStack_1d8 = (undefined **********)&LAB_004133e8;
            ppppppppppuStack_1e4 = (undefined **********)0x45033c;
            (*pcVar15)();
          }
          ppppppppppuVar10 = local_78;
          ppppppppppuStack_1d4 = (undefined **********)&local_60;
          ppppppppppuStack_1d8 = (undefined **********)param_5;
          ppppppppppuStack_1dc = local_78;
          ppppppppppuStack_1e0 = (undefined **********)0x45034f;
          pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0xe])();
          if ((int)pppppppppppuVar7 < 0) {
            ppppppppppuStack_1e0 = (undefined **********)0x38;
            ppppppppppuStack_1e4 = (undefined **********)&DAT_00414c50;
            ppppppppppuStack_1e8 = ppppppppppuVar10;
            ppppppppppuStack_1f0 = (undefined **********)0x450360;
            ppppppppppuStack_1ec = (undefined **********)pppppppppppuVar7;
            (*pcVar15)();
          }
          ppppppppppuStack_1e0 = (undefined **********)0x45036b;
          __vbaFreeObj();
          ppppppppppuStack_1e0 = (undefined **********)&local_78;
          ppppppppppuStack_1e4 = local_60;
          ppppppppppuStack_1e8 = (undefined **********)0x450378;
          ppppppppppuStack_1f4 = (undefined **********)(*(code *)(*local_60)[0x1c])();
          if ((int)ppppppppppuStack_1f4 < 0) {
            ppppppppppuStack_1e8 = (undefined **********)0x70;
            ppppppppppuStack_1ec = (undefined **********)&DAT_00414268;
            ppppppppppuStack_1f0 = local_60;
            ppppppppppuStack_1f8 = (undefined **********)0x45038c;
            (*pcVar15)();
          }
          ppppppppppuStack_1e8 = (undefined **********)0x0;
          ppppppppppuStack_1ec = (undefined **********)0x418418;
          ppppppppppuStack_1f4 = local_90;
          ppppppppppuStack_1f0 = local_78;
          local_c8 = (undefined *********)0x1;
          local_d0 = (undefined **********)0x2;
          ppppppppppuStack_1f8 = (undefined **********)0x4503b9;
          ppppppppppuStack_1e8 = (undefined **********)__vbaLateMemCallLd();
          ppppppppppuStack_1ec = (undefined **********)&local_d0;
          ppppppppppuStack_1f0 = local_a0;
          ppppppppppuStack_1f4 = (undefined **********)0x4503d1;
          ppppppppppuStack_1e8 = (undefined **********)__vbaVarSub();
          ppppppppppuStack_1ec = (undefined **********)0x4503d8;
          sVar3 = __vbaI2Var();
          local_38 = (undefined ********)0x1;
          ppppppppppuStack_1c4 = (undefined **********)0x4503e6;
          __vbaFreeObj();
          ppppppppppuStack_1c4 = (undefined **********)0x4503f2;
          __vbaFreeVar();
          ppppppppuVar2 = local_38;
          while (local_38 = ppppppppuVar2, (short)local_38 <= sVar3) {
            ppppppppppuStack_1c0 = (undefined **********)&DAT_00414bb4;
            ppppppppppuStack_1c4 = (undefined **********)0x0;
            ppppppppppuStack_1c8 = (undefined **********)0x45040f;
            ppppppppppuStack_1c0 = (undefined **********)__vbaCastObj();
            ppppppppppuStack_1c4 = (undefined **********)&local_34;
            ppppppppppuStack_1c8 = (undefined **********)0x45041a;
            __vbaObjSet();
            if ((short)local_38 == (short)local_58) {
              local_c8 = (undefined *********)&DAT_00412f74;
              local_d0 = (undefined **********)0x8;
              ppppppppppuStack_1c0 = (undefined **********)0x450447;
              __vbaVarCopy();
              pppppppppppuVar8 = (undefined ***********)__vbaFreeObj_exref;
              pcVar16 = __vbaVarMove_exref;
            }
            else {
              local_c8 = &local_38;
              ppppppppppuStack_1c0 = (undefined **********)&local_78;
              local_d0 = (undefined **********)0x4002;
              ppppppppppuStack_1c4 = local_60;
              ppppppppppuStack_1c8 = (undefined **********)0x450478;
              ppppppppppuStack_1cc = (undefined **********)(*(code *)(*local_60)[0x1c])();
              if ((int)ppppppppppuStack_1cc < 0) {
                ppppppppppuStack_1c0 = (undefined **********)0x70;
                ppppppppppuStack_1c4 = (undefined **********)&DAT_00414268;
                ppppppppppuStack_1c8 = local_60;
                ppppppppppuStack_1d0 = (undefined **********)0x45048c;
                (*pcVar15)();
              }
              ppppppppppuStack_1d0 = (undefined **********)0x1;
              ppppppppppuStack_1d4 = (undefined **********)0x41842c;
              ppppppppppuStack_1cc = local_d0;
              ppppppppppuStack_1c8 = (undefined **********)local_cc;
              ppppppppppuStack_1c4 = (undefined **********)local_c8;
              ppppppppppuStack_1dc = local_90;
              ppppppppppuStack_1c0 = (undefined **********)local_c4;
              ppppppppppuStack_1d8 = local_78;
              ppppppppppuStack_1e0 = (undefined **********)0x4504cc;
              __vbaLateMemCallLd();
              pcVar16 = __vbaVarMove_exref;
              ppppppppppuStack_1c0 = (undefined **********)0x4504dc;
              __vbaVarMove();
              pppppppppppuVar8 = (undefined ***********)__vbaFreeObj_exref;
              ppppppppppuStack_1c0 = (undefined **********)0x4504e7;
              __vbaFreeObj();
            }
            ppppppppppuStack_1c0 = &local_108;
            ppppppppppuStack_1c4 = local_60;
            ppppppppppuStack_1c8 = (undefined **********)0x4504f7;
            pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x15])();
            if ((int)pppppppppppuVar7 < 0) {
              ppppppppppuStack_1c0 = (undefined **********)0x54;
              ppppppppppuStack_1c4 = (undefined **********)&DAT_00414268;
              ppppppppppuStack_1c8 = local_60;
              ppppppppppuStack_1d0 = (undefined **********)0x45050b;
              ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
              (*pcVar15)();
            }
            if ((undefined **********)local_108 == (undefined **********)0x0) {
              ppppppppppuStack_1c0 = (undefined **********)local_54;
              ppppppppppuStack_1c4 = (undefined **********)&local_d0;
              local_c8 = (undefined *********)&DAT_00412f74;
              local_d0 = (undefined **********)0x8008;
              ppppppppppuStack_1c8 = (undefined **********)0x450afa;
              sVar4 = __vbaVarTstEq();
              if (sVar4 != 0) {
                ppppppppppuStack_1c0 = (undefined **********)&local_78;
                ppppppppppuStack_1c4 = local_60;
                ppppppppppuStack_1c8 = (undefined **********)0x450b0c;
                ppppppppppuStack_1d4 = (undefined **********)(*(code *)(*local_60)[0x1a])();
                if ((int)ppppppppppuStack_1d4 < 0) {
                  ppppppppppuStack_1c8 = (undefined **********)0x68;
                  ppppppppppuStack_1cc = (undefined **********)&DAT_00414268;
                  ppppppppppuStack_1d0 = local_60;
                  ppppppppppuStack_1d8 = (undefined **********)0x450b20;
                  (*pcVar15)();
                }
                ppppppppppuStack_1c8 = (undefined **********)0x0;
                ppppppppppuStack_1cc = (undefined **********)0x4183f0;
                ppppppppppuStack_1d4 = local_90;
                ppppppppppuStack_1d0 = local_78;
                ppppppppppuStack_1d8 = (undefined **********)0x450b38;
                __vbaLateMemCallLd();
                ppppppppppuStack_1c8 = (undefined **********)0x450b42;
                (*pcVar16)();
                ppppppppppuStack_1c8 = (undefined **********)0x450b47;
                (*(code *)pppppppppppuVar8)();
              }
            }
            else if ((undefined **********)local_108 == (undefined **********)0x1) {
              ppppppppppuStack_1c0 = (undefined **********)&local_78;
              ppppppppppuStack_1c4 = (undefined **********)param_1[0x18];
              ppppppppppuStack_1c8 = (undefined **********)0x450906;
              pppppppppppuVar7 = (undefined ***********)(*(code *)(*ppppppppppuStack_1c4)[0x11])();
              if ((int)pppppppppppuVar7 < 0) {
                ppppppppppuStack_1d0 = (undefined **********)param_1[0x18];
                ppppppppppuStack_1c8 = (undefined **********)0x44;
                ppppppppppuStack_1cc = (undefined **********)&LAB_00414228;
                ppppppppppuStack_1d8 = (undefined **********)0x45091a;
                ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
                (*pcVar15)();
              }
              ppppppppppuVar10 = local_78;
              ppppppppppuStack_1c8 = local_90;
              ppppppppppuStack_1cc = local_60;
              ppppppppppuStack_1d0 = (undefined **********)0x45092d;
              ppppppppppuStack_1dc = (undefined **********)(*(code *)(*local_60)[0x16])();
              if ((int)ppppppppppuStack_1dc < 0) {
                ppppppppppuStack_1d0 = (undefined **********)0x58;
                ppppppppppuStack_1d4 = (undefined **********)&DAT_00414268;
                ppppppppppuStack_1d8 = local_60;
                ppppppppppuStack_1e0 = (undefined **********)0x450941;
                (*pcVar15)();
              }
              ppppppppppuStack_1d0 = (undefined **********)&local_7c;
              ppppppppppuStack_1d4 = local_90;
              ppppppppppuStack_1d8 = ppppppppppuVar10;
              ppppppppppuStack_1dc = (undefined **********)0x450952;
              pppppppppppuVar7 = (undefined ***********)(*(code *)(*ppppppppppuVar10)[9])();
              if ((int)pppppppppppuVar7 < 0) {
                ppppppppppuStack_1dc = (undefined **********)0x24;
                ppppppppppuStack_1e0 = (undefined **********)&DAT_00414238;
                ppppppppppuStack_1e4 = ppppppppppuVar10;
                ppppppppppuStack_1ec = (undefined **********)0x450963;
                ppppppppppuStack_1e8 = (undefined **********)pppppppppppuVar7;
                (*pcVar15)();
              }
              ppppppppppuStack_1e0 = (undefined **********)local_30;
              ppppppppppuStack_1dc = local_7c;
              local_7c = (undefined **********)0x0;
              ppppppppppuStack_1e4 = (undefined **********)0x450978;
              __vbaObjSet();
              pppppppppppuVar8 = (undefined ***********)__vbaFreeObj_exref;
              ppppppppppuStack_1dc = (undefined **********)0x450983;
              __vbaFreeObj();
              ppppppppppuStack_1dc = (undefined **********)0x45098f;
              __vbaFreeVar();
              ppppppppppuStack_1d8 = (undefined **********)local_54;
              ppppppppppuStack_1dc = (undefined **********)&local_d0;
              local_c8 = (undefined *********)&DAT_00412f74;
              local_d0 = (undefined **********)0x8008;
              ppppppppppuStack_1e0 = (undefined **********)0x4509b4;
              sVar4 = __vbaVarTstEq();
              if (sVar4 != 0) {
                ppppppppppuStack_1d8 = (undefined **********)&local_78;
                ppppppppppuStack_1dc = local_60;
                ppppppppppuStack_1e0 = (undefined **********)0x4509c6;
                ppppppppppuStack_1ec = (undefined **********)(*(code *)(*local_60)[0x1a])();
                if ((int)ppppppppppuStack_1ec < 0) {
                  ppppppppppuStack_1e0 = (undefined **********)0x68;
                  ppppppppppuStack_1e4 = (undefined **********)&DAT_00414268;
                  ppppppppppuStack_1e8 = local_60;
                  ppppppppppuStack_1f0 = (undefined **********)0x4509da;
                  (*pcVar15)();
                }
                ppppppppppuStack_1e0 = (undefined **********)0x0;
                ppppppppppuStack_1e4 = (undefined **********)0x4183f0;
                ppppppppppuStack_1ec = local_90;
                ppppppppppuStack_1e8 = local_78;
                ppppppppppuStack_1f0 = (undefined **********)0x4509f2;
                __vbaLateMemCallLd();
                ppppppppppuStack_1e0 = (undefined **********)0x4509fc;
                (*pcVar16)();
                ppppppppppuStack_1d8 = (undefined **********)0x450a01;
                __vbaFreeObj();
              }
              ppppppppppuStack_1d8 = local_104;
              ppppppppppuStack_1dc = local_30[0];
              ppppppppppuStack_1e0 = (undefined **********)0x450a11;
              pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_30[0])[0xb])();
              if ((int)pppppppppppuVar7 < 0) {
                ppppppppppuStack_1c0 = (undefined **********)0x2c;
                ppppppppppuStack_1c4 = (undefined **********)&LAB_004133e8;
                ppppppppppuStack_1c8 = local_30[0];
                ppppppppppuStack_1d0 = (undefined **********)0x450a25;
                ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
                (*pcVar15)();
              }
              if ((short)local_104[0] != 0) {
                ppppppppppuStack_1c0 = (undefined **********)local_54;
                ppppppppppuStack_1c4 = (undefined **********)0x450a3d;
                __vbaStrVarCopy();
                ppppppppppuStack_1c0 = (undefined **********)0x450a48;
                __vbaStrMove();
                ppppppppppuStack_1c0 = (undefined **********)&local_78;
                ppppppppppuStack_1c4 = local_30[0];
                ppppppppppuStack_1c8 = (undefined **********)0x450a55;
                ppppppppppuStack_1d4 = (undefined **********)(*(code *)(*local_30[0])[0x1b])();
                if ((int)ppppppppppuStack_1d4 < 0) {
                  ppppppppppuStack_1c8 = (undefined **********)0x6c;
                  ppppppppppuStack_1cc = (undefined **********)&LAB_004133e8;
                  ppppppppppuStack_1d0 = local_30[0];
                  ppppppppppuStack_1d8 = (undefined **********)0x450a69;
                  (*pcVar15)();
                }
                pppppppppppuVar8 = (undefined ***********)local_78;
                ppppppppppuStack_1c8 = (undefined **********)&local_7c;
                ppppppppppuStack_1cc = &local_44;
                ppppppppppuStack_1d0 = local_78;
                ppppppppppuStack_1d4 = (undefined **********)0x450a7c;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[10])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1c0 = (undefined **********)0x28;
                  ppppppppppuStack_1c4 = (undefined **********)&DAT_004146fc;
                  ppppppppppuStack_1c8 = (undefined **********)pppppppppppuVar8;
                  ppppppppppuStack_1d0 = (undefined **********)0x450a8d;
                  ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_1c4 = (undefined **********)local_54;
                ppppppppppuStack_1c0 = local_7c;
                local_7c = (undefined **********)0x0;
                ppppppppppuStack_1c8 = (undefined **********)0x450aa2;
                __vbaVarSetObj();
                ppppppppppuStack_1c0 = (undefined **********)0x450aab;
                __vbaFreeObj();
                ppppppppppuStack_1c4 = (undefined **********)local_54;
                ppppppppppuStack_1c0 = (undefined **********)0x0;
                ppppppppppuStack_1c8 = (undefined **********)0x450ab7;
                ppppppppppuStack_1c4 = (undefined **********)__vbaUnkVar();
                ppppppppppuStack_1c8 = (undefined **********)0x450abe;
                sVar4 = __vbaObjIs();
                if (sVar4 != 0) {
                  local_c8 = local_44;
LAB_00450752:
                  local_d0 = (undefined **********)0x8;
                  ppppppppppuStack_1c0 = (undefined **********)0x45076b;
                  __vbaVarCopy();
                }
              }
            }
            else if ((undefined **********)local_108 == (undefined **********)0x2) {
              if ((short)local_38 == (short)local_58) {
                ppppppppppuStack_1c0 = (undefined **********)&DAT_0040888c;
                ppppppppppuStack_1c4 = (undefined **********)0x45062d;
                ppppppppppuStack_1c0 = (undefined **********)__vbaNew();
                ppppppppppuStack_1c4 = (undefined **********)&local_5c;
                ppppppppppuStack_1c8 = (undefined **********)0x45063a;
                __vbaObjSet();
                ppppppppppuStack_1c0 = local_90;
                ppppppppppuStack_1c4 = local_60;
                ppppppppppuStack_1c8 = (undefined **********)0x45064a;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_60)[0x16])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1c8 = (undefined **********)0x58;
                  ppppppppppuStack_1cc = (undefined **********)&DAT_00414268;
                  ppppppppppuStack_1d0 = local_60;
                  ppppppppppuStack_1d8 = (undefined **********)0x45065e;
                  ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_1cc = local_90;
                ppppppppppuStack_1c8 = (undefined **********)&LAB_004133f8;
                ppppppppppuStack_1d0 = (undefined **********)0x450670;
                ppppppppppuStack_1c8 = (undefined **********)__vbaCastObjVar();
                ppppppppppuStack_1cc = (undefined **********)&local_78;
                ppppppppppuStack_1d0 = (undefined **********)0x450677;
                __vbaObjSet();
                ppppppppppuStack_1c8 = (undefined **********)&local_78;
                ppppppppppuStack_1cc = local_5c;
                ppppppppppuStack_1d0 = (undefined **********)0x450684;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_5c)[0x12])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1d0 = (undefined **********)0x48;
                  ppppppppppuStack_1d4 = (undefined **********)&LAB_0041470c;
                  ppppppppppuStack_1d8 = local_5c;
                  ppppppppppuStack_1e0 = (undefined **********)0x450698;
                  ppppppppppuStack_1dc = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_1d0 = (undefined **********)0x45069d;
                (*(code *)pppppppppppuVar8)();
                ppppppppppuStack_1d0 = (undefined **********)0x4506a9;
                __vbaFreeVar();
                ppppppppppuStack_1cc = &local_1c;
                local_104[0] = (undefined *********)0x0;
                ppppppppppuStack_1d0 = (undefined **********)param_4;
                ppppppppppuStack_1d4 = local_104;
                ppppppppppuStack_1d8 = (undefined **********)&local_5c;
                ppppppppppuStack_1dc = (undefined **********)param_1;
                ppppppppppuStack_1e0 = (undefined **********)0x4506d2;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*param_1)[0x1cc])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1e0 = (undefined **********)0x730;
                  ppppppppppuStack_1e4 = (undefined **********)&DAT_00413728;
                  ppppppppppuStack_1e8 = (undefined **********)param_1;
                  ppppppppppuStack_1f0 = (undefined **********)0x4506e4;
                  ppppppppppuStack_1ec = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_1e0 = (undefined **********)&local_78;
                ppppppppppuStack_1e4 = local_5c;
                ppppppppppuStack_1e8 = (undefined **********)0x4506f1;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_5c)[0xf])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1e8 = (undefined **********)0x3c;
                  ppppppppppuStack_1ec = (undefined **********)&LAB_0041470c;
                  ppppppppppuStack_1f0 = local_5c;
                  ppppppppppuStack_1f8 = (undefined **********)0x450705;
                  ppppppppppuStack_1f4 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuVar10 = local_78;
                ppppppppppuStack_1e8 = &local_108;
                ppppppppppuStack_1ec = local_78;
                ppppppppppuStack_1f0 = (undefined **********)0x450717;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[0xc])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1c0 = (undefined **********)0x30;
                  ppppppppppuStack_1c4 = (undefined **********)&DAT_00414ba4;
                  ppppppppppuStack_1c8 = ppppppppppuVar10;
                  ppppppppppuStack_1d0 = (undefined **********)0x450728;
                  ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                bVar17 = (undefined **********)local_108 == (undefined **********)0x0;
                pppppppppppuVar8 =
                     (undefined ***********)
                     CONCAT22((short)((uint)ppppppppppuVar10 >> 0x10),-(ushort)bVar17);
                ppppppppppuStack_1c0 = (undefined **********)0x450743;
                __vbaFreeObj();
                if ((ushort)-(ushort)bVar17 != 0) {
                  local_c8 = (undefined *********)&DAT_00412f74;
                  goto LAB_00450752;
                }
                ppppppppppuStack_1c0 = (undefined **********)&local_78;
                ppppppppppuStack_1c4 = local_5c;
                ppppppppppuStack_1c8 = (undefined **********)0x45077d;
                ppppppppppuStack_1d4 = (undefined **********)(*(code *)(*local_5c)[0xf])();
                if ((int)ppppppppppuStack_1d4 < 0) {
                  ppppppppppuStack_1c8 = (undefined **********)0x3c;
                  ppppppppppuStack_1cc = (undefined **********)&LAB_0041470c;
                  ppppppppppuStack_1d0 = local_5c;
                  ppppppppppuStack_1d8 = (undefined **********)0x450791;
                  (*pcVar15)();
                }
                ppppppppppuVar10 = local_78;
                ppppppppppuStack_1c8 = (undefined **********)&local_7c;
                ppppppppppuStack_1cc = local_90;
                local_88 = (undefined **********)0x1;
                local_90[0] = (undefined *********)0x2;
                ppppppppppuStack_1d0 = local_78;
                ppppppppppuStack_1d4 = (undefined **********)0x4507bb;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_78)[9])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1d4 = (undefined **********)0x24;
                  ppppppppppuStack_1d8 = (undefined **********)&DAT_00414ba4;
                  ppppppppppuStack_1dc = ppppppppppuVar10;
                  ppppppppppuStack_1e4 = (undefined **********)0x4507cc;
                  ppppppppppuStack_1e0 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuVar10 = local_7c;
                ppppppppppuStack_1d4 = (undefined **********)&local_68;
                ppppppppppuStack_1d8 = local_7c;
                ppppppppppuStack_1dc = (undefined **********)0x4507db;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_7c)[0xb])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1c4 = (undefined **********)0x2c;
                  ppppppppppuStack_1c8 = (undefined **********)&DAT_00414bb4;
                  ppppppppppuStack_1cc = ppppppppppuVar10;
                  ppppppppppuStack_1d4 = (undefined **********)0x4507ec;
                  ppppppppppuStack_1d0 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_1c4 = local_68;
                ppppppppppuStack_1c8 = (undefined **********)&DAT_00412f74;
                ppppppppppuStack_1cc = (undefined **********)0x4507fb;
                iVar13 = __vbaStrCmp();
                pppppppppppuVar8 = (undefined ***********)-(uint)(iVar13 == 0);
                ppppppppppuStack_1c4 = (undefined **********)0x45080d;
                __vbaFreeStr();
                ppppppppppuStack_1c4 = (undefined **********)&local_7c;
                ppppppppppuStack_1c8 = (undefined **********)&local_78;
                ppppppppppuStack_1cc = (undefined **********)0x2;
                ppppppppppuStack_1d0 = (undefined **********)0x45081d;
                __vbaFreeObjList();
                ppppppppppuStack_1c4 = (undefined **********)0x45082c;
                __vbaFreeVar();
                if ((short)pppppppppppuVar8 == 0) {
                  ppppppppppuStack_1c4 = (undefined **********)local_54;
                  ppppppppppuStack_1c0 = local_5c;
                  ppppppppppuStack_1c8 = (undefined **********)0x450867;
                  __vbaVarSetObjAddref();
                }
                else {
                  local_c8 = (undefined *********)&DAT_00412f74;
                  local_d0 = (undefined **********)0x8;
                  ppppppppppuStack_1c0 = (undefined **********)0x450854;
                  __vbaVarCopy();
                }
              }
              else {
                ppppppppppuStack_1c0 = (undefined **********)&local_78;
                ppppppppppuStack_1c4 = (undefined **********)local_54;
                ppppppppppuStack_1c8 = (undefined **********)param_1[0x1d];
                ppppppppppuStack_1cc = (undefined **********)0x450880;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*ppppppppppuStack_1c8)[9])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1d4 = (undefined **********)param_1[0x1d];
                  ppppppppppuStack_1cc = (undefined **********)0x24;
                  ppppppppppuStack_1d0 = (undefined **********)&DAT_004146fc;
                  ppppppppppuStack_1dc = (undefined **********)0x450894;
                  ppppppppppuStack_1d8 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_1d0 = (undefined **********)local_54;
                ppppppppppuStack_1cc = local_78;
                local_78 = (undefined **********)0x0;
                ppppppppppuStack_1d4 = (undefined **********)0x4508a9;
                __vbaVarSetObj();
                ppppppppppuStack_1cc = (undefined **********)0x0;
                ppppppppppuStack_1d4 = (undefined **********)local_54;
                ppppppppppuStack_1d0 = (undefined **********)&DAT_00416fd8;
                pppppppppppuVar8 = (undefined ***********)*param_1[0x1d];
                ppppppppppuStack_1d8 = local_90;
                ppppppppppuStack_1dc = (undefined **********)0x4508c6;
                ppppppppppuStack_1cc = (undefined **********)__vbaVarLateMemCallLdRf();
                ppppppppppuStack_1d0 = (undefined **********)param_1[0x1d];
                ppppppppppuStack_1d4 = (undefined **********)0x4508d1;
                pppppppppppuVar7 = (undefined ***********)(*(code *)pppppppppppuVar8[0xe])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1cc = (undefined **********)param_1[0x1d];
                  ppppppppppuStack_1c4 = (undefined **********)0x38;
                  ppppppppppuStack_1c8 = (undefined **********)&DAT_004146fc;
                  ppppppppppuStack_1d4 = (undefined **********)0x4508e5;
                  ppppppppppuStack_1d0 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                ppppppppppuStack_1c4 = (undefined **********)0x4508f1;
                __vbaFreeVar();
              }
            }
            else {
              ppppppppppuStack_1c0 = (undefined **********)0x45052e;
              ppppppppppuStack_1c0 = (undefined **********)rtcErrObj();
              ppppppppppuStack_1c4 = (undefined **********)&local_78;
              ppppppppppuStack_1c8 = (undefined **********)0x450539;
              pppppppppppuVar8 = (undefined ***********)__vbaObjSet();
              local_b8 = 0x80020004;
              local_a8 = 0x80020004;
              local_c0[0] = (undefined ********)0xa;
              local_b0[0] = (undefined *********)0xa;
              local_d8 = L"Invalid ArgumentTypeType in SaveCurrentEntry";
              local_e0 = 8;
              ppppppppppuStack_1c0 = (undefined **********)0x450585;
              __vbaVarDup();
              local_c8 = (undefined *********)0x41316c;
              local_d0 = (undefined **********)0x8;
              ppppppppppuStack_1c0 = (undefined **********)0x4505a7;
              __vbaVarDup();
              ppppppppppuStack_1c0 = (undefined **********)local_c0;
              ppppppppppuStack_1c4 = local_b0;
              ppppppppppuStack_1c8 = local_a0;
              ppppppppppuStack_1cc = local_90;
              ppppppppppuStack_1d0 = (undefined **********)0x42e;
              ppppppppppuStack_1d8 = (undefined **********)0x4505ce;
              ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar8;
              ppppppppppuVar10 = (undefined **********)(*(code *)(*pppppppppppuVar8)[0x11])();
              if ((int)ppppppppppuVar10 < 0) {
                ppppppppppuStack_1c0 = (undefined **********)0x44;
                ppppppppppuStack_1c4 = (undefined **********)&DAT_00413af4;
                ppppppppppuStack_1d0 = (undefined **********)0x4505df;
                ppppppppppuStack_1cc = ppppppppppuVar10;
                ppppppppppuStack_1c8 = (undefined **********)pppppppppppuVar8;
                (*pcVar15)();
              }
              ppppppppppuStack_1c0 = (undefined **********)0x4505e8;
              __vbaFreeObj();
              ppppppppppuStack_1c0 = (undefined **********)local_c0;
              ppppppppppuStack_1c4 = local_b0;
              ppppppppppuStack_1c8 = local_a0;
              ppppppppppuStack_1cc = local_90;
              ppppppppppuStack_1d0 = (undefined **********)0x4;
              ppppppppppuStack_1d4 = (undefined **********)0x45060c;
              __vbaFreeVarList();
            }
            ppppppppppuStack_1c0 = (undefined **********)local_54;
            ppppppppppuStack_1c4 = (undefined **********)0x450b51;
            sVar4 = rtcIsObject();
            if (sVar4 == 0) {
              ppppppppppuStack_1c0 = (undefined **********)local_54;
              ppppppppppuStack_1c4 = (undefined **********)&local_d0;
              ppppppppppuStack_1c8 = local_90;
              local_c8 = (undefined *********)&DAT_00412f74;
              local_d0 = (undefined **********)0x8008;
              ppppppppppuStack_1cc = (undefined **********)0x450bf0;
              ppppppppppuStack_1c0 = (undefined **********)__vbaVarCmpEq();
              ppppppppppuStack_1c4 = local_a0;
              ppppppppppuStack_1c8 = (undefined **********)0x450bfe;
              ppppppppppuStack_1c0 = (undefined **********)__vbaVarNot();
              ppppppppppuStack_1c4 = (undefined **********)0x450c05;
              sVar4 = __vbaBoolVarNull();
              pppppppppppuVar7 = (undefined ***********)__vbaStrCopy_exref;
              if (sVar4 != 0) {
                ppppppppppuStack_1c0 = (undefined **********)&local_78;
                ppppppppppuStack_1c4 = local_124[0];
                ppppppppppuStack_1c8 = (undefined **********)0x450c1e;
                pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0xf])();
                if ((int)pppppppppppuVar7 < 0) {
                  ppppppppppuStack_1c8 = (undefined **********)0x3c;
                  ppppppppppuStack_1cc = (undefined **********)&LAB_0041470c;
                  ppppppppppuStack_1d0 = local_124[0];
                  ppppppppppuStack_1d8 = (undefined **********)0x450c35;
                  ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
                  (*pcVar15)();
                }
                pppppppppppuVar8 = (undefined ***********)local_78;
                pppppppppppuVar7 = (undefined ***********)__vbaStrCopy_exref;
                ppppppppppuStack_1c8 = (undefined **********)0x450c45;
                __vbaStrCopy();
                ppppppppppuStack_1c0 = (undefined **********)&local_7c;
                ppppppppppuStack_1c4 = (undefined **********)&local_68;
                ppppppppppuStack_1c8 = (undefined **********)&local_60;
                ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar8;
                ppppppppppuStack_1d0 = (undefined **********)0x450c57;
                pppppppppppuVar9 = (undefined ***********)(*(code *)(*pppppppppppuVar8)[7])();
                if ((int)pppppppppppuVar9 < 0) {
                  ppppppppppuStack_1c0 = (undefined **********)0x1c;
                  ppppppppppuStack_1c4 = (undefined **********)&DAT_00414ba4;
                  ppppppppppuStack_1c8 = (undefined **********)pppppppppppuVar8;
                  ppppppppppuStack_1d0 = (undefined **********)0x450c68;
                  ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar9;
                  (*pcVar15)();
                }
                ppppppppppuStack_1c0 = local_7c;
                goto LAB_00450c77;
              }
            }
            else {
              ppppppppppuStack_1c0 = (undefined **********)&local_78;
              ppppppppppuStack_1c4 = local_124[0];
              ppppppppppuStack_1c8 = (undefined **********)0x450b66;
              pppppppppppuVar7 = (undefined ***********)(*(code *)(*local_124[0])[0xf])();
              if ((int)pppppppppppuVar7 < 0) {
                ppppppppppuStack_1c8 = (undefined **********)0x3c;
                ppppppppppuStack_1cc = (undefined **********)&LAB_0041470c;
                ppppppppppuStack_1d0 = local_124[0];
                ppppppppppuStack_1d8 = (undefined **********)0x450b7d;
                ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar7;
                (*pcVar15)();
              }
              pppppppppppuVar8 = (undefined ***********)local_78;
              pppppppppppuVar7 = (undefined ***********)__vbaStrCopy_exref;
              ppppppppppuStack_1c8 = (undefined **********)0x450b8d;
              __vbaStrCopy();
              ppppppppppuStack_1c0 = (undefined **********)&local_7c;
              ppppppppppuStack_1c4 = (undefined **********)&local_68;
              ppppppppppuStack_1c8 = (undefined **********)&local_60;
              ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar8;
              ppppppppppuStack_1d0 = (undefined **********)0x450b9f;
              pppppppppppuVar9 = (undefined ***********)(*(code *)(*pppppppppppuVar8)[7])();
              if ((int)pppppppppppuVar9 < 0) {
                ppppppppppuStack_1c0 = (undefined **********)0x1c;
                ppppppppppuStack_1c4 = (undefined **********)&DAT_00414ba4;
                ppppppppppuStack_1c8 = (undefined **********)pppppppppppuVar8;
                ppppppppppuStack_1d0 = (undefined **********)0x450bb0;
                ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar9;
                (*pcVar15)();
              }
              ppppppppppuStack_1c0 = local_7c;
LAB_00450c77:
              ppppppppppuStack_1c4 = (undefined **********)&local_34;
              local_7c = (undefined **********)0x0;
              ppppppppppuStack_1c8 = (undefined **********)0x450c7d;
              __vbaObjSet();
              ppppppppppuStack_1c0 = (undefined **********)0x450c86;
              __vbaFreeStr();
              ppppppppppuStack_1c0 = (undefined **********)0x450c8f;
              __vbaFreeObj();
            }
            ppppppppppuStack_1c0 = (undefined **********)0x0;
            ppppppppppuStack_1c4 = local_34;
            ppppppppppuStack_1c8 = (undefined **********)0x450ca3;
            sVar4 = __vbaObjIs();
            if (sVar4 == 0) {
              ppppppppppuStack_1c0 = (undefined **********)local_54;
              ppppppppppuStack_1c4 = local_34;
              ppppppppppuStack_1c8 = (undefined **********)0x450cb9;
              pppppppppppuVar8 = (undefined ***********)(*(code *)(*local_34)[0xd])();
              if ((int)pppppppppppuVar8 < 0) {
                ppppppppppuStack_1c8 = (undefined **********)0x34;
                ppppppppppuStack_1cc = (undefined **********)&DAT_00414bb4;
                ppppppppppuStack_1d0 = local_34;
                ppppppppppuStack_1d8 = (undefined **********)0x450ccd;
                ppppppppppuStack_1d4 = (undefined **********)pppppppppppuVar8;
                (*pcVar15)();
              }
              if ((short)local_38 == (short)local_58) {
                ppppppppppuStack_1c8 = (undefined **********)&local_78;
                ppppppppppuStack_1cc = local_60;
                ppppppppppuStack_1d0 = (undefined **********)0x450ce8;
                ppppppppppuStack_1dc = (undefined **********)(*(code *)(*local_60)[0x1c])();
                if ((int)ppppppppppuStack_1dc < 0) {
                  ppppppppppuStack_1d0 = (undefined **********)0x70;
                  ppppppppppuStack_1d4 = (undefined **********)&DAT_00414268;
                  ppppppppppuStack_1d8 = local_60;
                  ppppppppppuStack_1e0 = (undefined **********)0x450cfc;
                  (*pcVar15)();
                }
                ppppppppppuStack_1d0 = (undefined **********)0x0;
                ppppppppppuStack_1d4 = (undefined **********)0x41837c;
                ppppppppppuStack_1dc = local_90;
                ppppppppppuStack_1d8 = local_78;
                ppppppppppuStack_1e0 = (undefined **********)0x450d14;
                __vbaLateMemCallLd();
                ppppppppppuStack_1d0 = (undefined **********)&local_7c;
                ppppppppppuStack_1d4 = (undefined **********)param_1[0x1a];
                ppppppppppuStack_1d8 = (undefined **********)0x450d27;
                pppppppppppuVar8 = (undefined ***********)(*(code *)(*ppppppppppuStack_1d4)[0x18])()
                ;
                if ((int)pppppppppppuVar8 < 0) {
                  ppppppppppuStack_1e0 = (undefined **********)param_1[0x1a];
                  ppppppppppuStack_1d8 = (undefined **********)0x60;
                  ppppppppppuStack_1dc = (undefined **********)&LAB_004133e8;
                  ppppppppppuStack_1e8 = (undefined **********)0x450d3b;
                  ppppppppppuStack_1e4 = (undefined **********)pppppppppppuVar8;
                  (*pcVar15)();
                }
                pppppppppppuVar8 = (undefined ***********)local_7c;
                ppppppppppuStack_1d8 = (undefined **********)0x450d45;
                (*(code *)pppppppppppuVar7)();
                ppppppppppuStack_1d8 = local_90;
                local_108 = (undefined *********)0x1;
                ppppppppppuStack_1dc = (undefined **********)0x450d5c;
                __vbaStrVarMove();
                ppppppppppuStack_1d8 = (undefined **********)0x450d67;
                __vbaStrMove();
                ppppppppppuStack_1d8 = &local_80;
                ppppppppppuStack_1dc = &local_6c;
                ppppppppppuStack_1e0 = (undefined **********)&local_34;
                ppppppppppuStack_1e4 = (undefined **********)param_2;
                ppppppppppuStack_1e8 = &local_108;
                ppppppppppuStack_1ec = (undefined **********)&local_68;
                ppppppppppuStack_1f0 = (undefined **********)pppppppppppuVar8;
                ppppppppppuStack_1f4 = (undefined **********)0x450d88;
                ppppppppppuStack_1d0 = (undefined **********)(*(code *)(*pppppppppppuVar8)[7])();
                if ((int)ppppppppppuStack_1d0 < 0) {
                  ppppppppppuStack_1c4 = (undefined **********)0x1c;
                  ppppppppppuStack_1c8 = (undefined **********)&DAT_00414c50;
                  ppppppppppuStack_1cc = (undefined **********)pppppppppppuVar8;
                  ppppppppppuStack_1d4 = (undefined **********)0x450d99;
                  (*pcVar15)();
                }
                ppppppppppuStack_1c4 = &local_6c;
                ppppppppppuStack_1c8 = (undefined **********)&local_68;
                ppppppppppuStack_1cc = (undefined **********)0x2;
                ppppppppppuStack_1d0 = (undefined **********)0x450da9;
                __vbaFreeStrList();
                ppppppppppuStack_1d0 = &local_80;
                ppppppppppuStack_1d4 = (undefined **********)&local_7c;
                ppppppppppuStack_1d8 = (undefined **********)&local_78;
                ppppppppppuStack_1dc = (undefined **********)0x3;
                ppppppppppuStack_1e0 = (undefined **********)0x450dbd;
                __vbaFreeObjList();
                ppppppppppuStack_1c4 = (undefined **********)0x450dcc;
                __vbaFreeVar();
              }
              else {
                ppppppppppuStack_1c8 = (undefined **********)&local_78;
                ppppppppppuStack_1cc = (undefined **********)param_1[0x1a];
                ppppppppppuStack_1d0 = (undefined **********)0x450de1;
                pppppppppppuVar8 = (undefined ***********)(*(code *)(*ppppppppppuStack_1cc)[0x18])()
                ;
                if ((int)pppppppppppuVar8 < 0) {
                  ppppppppppuStack_1d8 = (undefined **********)param_1[0x1a];
                  ppppppppppuStack_1d0 = (undefined **********)0x60;
                  ppppppppppuStack_1d4 = (undefined **********)&LAB_004133e8;
                  ppppppppppuStack_1e0 = (undefined **********)0x450df5;
                  ppppppppppuStack_1dc = (undefined **********)pppppppppppuVar8;
                  (*pcVar15)();
                }
                pppppppppppuVar8 = (undefined ***********)local_78;
                ppppppppppuStack_1d0 = (undefined **********)0x450dff;
                (*(code *)pppppppppppuVar7)();
                ppppppppppuStack_1d4 = (undefined **********)&local_64;
                ppppppppppuStack_1d0 = (undefined **********)local_28[0];
                local_108 = (undefined *********)0x1;
                ppppppppppuStack_1d8 = (undefined **********)0x450e17;
                __vbaAryLock();
                if ((local_64 == (undefined ********)0x0) || (*(short *)local_64 != 1)) {
                  ppppppppppuStack_1d0 = (undefined **********)0x450e4c;
                  iVar13 = __vbaGenerateBoundsError();
                }
                else {
                  iVar13 = (int)(short)local_38;
                  pppppppuVar11 = local_64[5];
                  if (local_64[4] <= (undefined *******)(iVar13 - (int)pppppppuVar11)) {
                    ppppppppppuStack_1d0 = (undefined **********)0x450e3a;
                    __vbaGenerateBoundsError();
                  }
                  iVar13 = (iVar13 - (int)pppppppuVar11) * 4;
                }
                ppppppppppuStack_1d0 = (undefined **********)&local_7c;
                ppppppppppuStack_1d4 = (undefined **********)&local_68;
                ppppppppppuStack_1d8 = (undefined **********)&local_34;
                ppppppppppuStack_1e4 = (undefined **********)((int)local_64[3] + iVar13);
                ppppppppppuStack_1dc = (undefined **********)param_2;
                pppppppppppuVar7 = (undefined ***********)&local_108;
                ppppppppppuStack_1e8 = (undefined **********)pppppppppppuVar8;
                ppppppppppuStack_1ec = (undefined **********)0x450e72;
                ppppppppppuStack_1e0 = (undefined **********)pppppppppppuVar7;
                ppppppuVar12 = (undefined ******)(*(code *)(*pppppppppppuVar8)[7])();
                if ((int)ppppppuVar12 < 0) {
                  ppppppppppuStack_1c0 = (undefined **********)0x1c;
                  ppppppppppuStack_1c4 = (undefined **********)&DAT_00414c50;
                  ppppppppppuStack_1c8 = (undefined **********)pppppppppppuVar8;
                  ppppppppppuStack_1d0 = (undefined **********)0x450e83;
                  ppppppppppuStack_1cc = (undefined **********)ppppppuVar12;
                  (*pcVar15)();
                }
                ppppppppppuStack_1c0 = (undefined **********)&local_64;
                ppppppppppuStack_1c4 = (undefined **********)0x450e8d;
                __vbaAryUnlock();
                ppppppppppuStack_1c0 = (undefined **********)0x450e96;
                __vbaFreeStr();
                ppppppppppuStack_1c0 = (undefined **********)&local_7c;
                ppppppppppuStack_1c4 = (undefined **********)&local_78;
                ppppppppppuStack_1c8 = (undefined **********)0x2;
                ppppppppppuStack_1cc = (undefined **********)0x450ea6;
                __vbaFreeObjList();
              }
            }
            ppppppppuVar2 = (undefined ********)(uint)(ushort)((short)local_38 + 1);
            if (SCARRY2((short)local_38,1)) goto LAB_004518a0;
          }
        }
      }
      ppppppppppuStack_1c0 = (undefined **********)&local_60;
      ppppppppppuStack_1c4 = (undefined **********)&local_12c;
      ppppppppppuStack_1c8 = (undefined **********)&DAT_00414268;
      ppppppppppuStack_1cc = (undefined **********)0x45178f;
      iVar13 = __vbaNextEachCollObj();
    }
    ppppppppppuStack_1c4 = (undefined **********)local_124;
    ppppppppppuStack_1c0 = (undefined **********)0x0;
    ppppppppppuStack_1c8 = (undefined **********)0x4517a6;
    __vbaObjSetAddref();
  }
  ppppppppppuStack_1c0 = (undefined **********)&LAB_00451881;
  ppppppppppuStack_1c4 = (undefined **********)&local_134;
  ppppppppppuStack_1c8 = (undefined **********)&local_130;
  ppppppppppuStack_1cc = (undefined **********)&local_12c;
  ppppppppppuStack_1d0 = (undefined **********)&local_128;
  ppppppppppuStack_1d4 = (undefined **********)local_124;
  ppppppppppuStack_1d8 = (undefined **********)0x5;
  ppppppppppuStack_1dc = (undefined **********)0x451836;
  __vbaFreeObjList();
  ppppppppppuStack_1c4 = (undefined **********)0x451844;
  __vbaFreeObj();
  ppppppppppuStack_1c4 = (undefined **********)0x451849;
  __vbaFreeObj();
  ppppppppppuStack_1c4 = local_28;
  ppppppppppuStack_1c8 = (undefined **********)0x0;
  ppppppppppuStack_1cc = (undefined **********)0x451855;
  __vbaAryDestruct();
  ppppppppppuStack_1c4 = (undefined **********)0x45185a;
  __vbaFreeObj();
  ppppppppppuStack_1c4 = (undefined **********)0x45185f;
  __vbaFreeObj();
  ppppppppppuStack_1c4 = (undefined **********)0x451864;
  __vbaFreeObj();
  ppppppppppuStack_1c4 = (undefined **********)0x45186d;
  __vbaFreeStr();
  ppppppppppuStack_1c4 = (undefined **********)0x451876;
  __vbaFreeVar();
  ppppppppppuStack_1c0 = (undefined **********)0x45187b;
  __vbaFreeObj();
  ppppppppppuStack_1c0 = (undefined **********)0x451880;
  __vbaFreeObj();
  return;
}

/* ---- 0x4518b0 (FUN_004518b0) [estimated] strings: CTP Editor; Automation error ---- */
void __cdecl FUN_004518b0(int *param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 local_bc [9];
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88 [2];
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff04;
  local_c = &DAT_004024f8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98 = 0;
  local_bc[0] = 0;
  iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x70))((int *)param_1[0x1a],&local_24);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x70);
  }
  piVar7 = local_24;
  iVar5 = (**(code **)(*local_24 + 0x24))(local_24,local_bc);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar7,&LAB_004133f8,0x24);
  }
  sVar2 = __vbaObjIs(param_1[0x21],0);
  sVar3 = __vbaObjIs(param_1[0x22],0);
  sVar4 = (short)local_bc[0];
  __vbaFreeObj();
  if ((sVar2 == 0 && sVar3 == 0) && sVar4 == -1) {
    iVar5 = (**(code **)(*(int *)param_1[0x22] + 0x24))((int *)param_1[0x22],&local_1c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1[0x22],&LAB_0041470c,0x24);
    }
    local_1c = 0;
    __vbaStrMove();
    (**(code **)(*param_1 + 0x780))(param_1,&local_20,local_bc);
    __vbaFreeStr();
    sVar4 = __vbaObjIs(param_1[0x1b],param_1[0x22]);
    if (sVar4 == 0) {
      local_70 = 0x80020004;
      local_60 = 0x80020004;
      local_78[0] = 10;
      local_68[0] = 10;
      local_90 = L"CTP Editor";
      local_98 = 8;
      __vbaVarDup();
      local_80 = L"Automation error";
      local_88[0] = 8;
      __vbaVarDup();
      rtcMsgBox(local_48,0x10,local_58,local_68,local_78);
      __vbaFreeVarList(4,local_48,local_58,local_68,local_78);
    }
    else {
      piVar7 = (int *)param_1[0x21];
      ppiVar8 = &local_2c;
      iVar5 = (**(code **)(*piVar7 + 0x3c))(piVar7,ppiVar8);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,param_1[0x21],&LAB_0041470c,0x3c);
      }
      piVar1 = local_2c;
      __vbaStrCopy(piVar7,ppiVar8);
      iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x70))((int *)param_1[0x1a],&local_24);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x70);
      }
      piVar7 = local_24;
      iVar5 = (**(code **)(*local_24 + 100))(local_24,&local_28);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&LAB_004133f8,100);
      }
      uVar6 = local_28;
      local_28 = 0;
      __vbaObjSet(&local_30,uVar6);
      iVar5 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_30,&local_1c,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar1,&DAT_00414ba4,0x1c);
      }
      piVar7 = local_34;
      __vbaObjSetAddref(&local_38,param_1[0x1b]);
      local_80 = (wchar_t *)&local_38;
      local_88[0] = 0x4009;
      iVar5 = (**(code **)(*piVar7 + 0x34))(piVar7,local_88);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_00414bb4,0x34);
      }
      uVar6 = __vbaCastObj(local_38,&LAB_0041470c);
      __vbaObjSet(param_1 + 0x1b,uVar6);
      __vbaFreeStr();
      __vbaFreeObjList(5,&local_24,&local_30,&local_2c,&local_38,&local_34);
      iVar5 = *param_1;
      uVar6 = __vbaCastObj(0,&DAT_00417d44);
      uVar6 = __vbaObjSet(&local_24,uVar6);
      (**(code **)(iVar5 + 0x788))(param_1,uVar6);
      __vbaFreeObj();
    }
  }
  return;
}

/* ---- 0x451ca0 (FUN_00451ca0) [estimated] strings: CTP Editor; Automation error ---- */
void __cdecl FUN_00451ca0(int *param_1)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 local_bc [9];
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88 [2];
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff04;
  local_c = &DAT_00402508;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98 = 0;
  local_bc[0] = 0;
  iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x70))((int *)param_1[0x1a],&local_24);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x70);
  }
  piVar7 = local_24;
  iVar5 = (**(code **)(*local_24 + 0x24))(local_24,local_bc);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar7,&LAB_004133f8,0x24);
  }
  sVar2 = __vbaObjIs(param_1[0x21],0);
  sVar3 = __vbaObjIs(param_1[0x22],0);
  sVar4 = (short)local_bc[0];
  __vbaFreeObj();
  if ((sVar2 == 0 && sVar3 == 0) && sVar4 == -1) {
    iVar5 = (**(code **)(*(int *)param_1[0x22] + 0x24))((int *)param_1[0x22],&local_1c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,param_1[0x22],&LAB_0041470c,0x24);
    }
    local_1c = 0;
    __vbaStrMove();
    (**(code **)(*param_1 + 0x780))(param_1,&local_20,local_bc);
    __vbaFreeStr();
    sVar4 = __vbaObjIs(param_1[0x1b],param_1[0x22]);
    if (sVar4 == 0) {
      local_70 = 0x80020004;
      local_60 = 0x80020004;
      local_78[0] = 10;
      local_68[0] = 10;
      local_90 = L"CTP Editor";
      local_98 = 8;
      __vbaVarDup();
      local_80 = L"Automation error";
      local_88[0] = 8;
      __vbaVarDup();
      rtcMsgBox(local_48,0x10,local_58,local_68,local_78);
      __vbaFreeVarList(4,local_48,local_58,local_68,local_78);
    }
    else {
      piVar7 = (int *)param_1[0x1b];
      ppiVar8 = &local_2c;
      iVar5 = (**(code **)(*piVar7 + 0x3c))(piVar7,ppiVar8);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,param_1[0x1b],&LAB_0041470c,0x3c);
      }
      piVar1 = local_2c;
      __vbaStrCopy(piVar7,ppiVar8);
      iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x70))((int *)param_1[0x1a],&local_24);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,param_1[0x1a],&LAB_004133e8,0x70);
      }
      piVar7 = local_24;
      iVar5 = (**(code **)(*local_24 + 100))(local_24,&local_28);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&LAB_004133f8,100);
      }
      uVar6 = local_28;
      local_28 = 0;
      __vbaObjSet(&local_30,uVar6);
      iVar5 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_30,&local_1c,&local_34);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar1,&DAT_00414ba4,0x1c);
      }
      piVar7 = local_34;
      __vbaObjSetAddref(&local_38,param_1[0x21]);
      local_80 = (wchar_t *)&local_38;
      local_88[0] = 0x4009;
      iVar5 = (**(code **)(*piVar7 + 0x34))(piVar7,local_88);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar7,&DAT_00414bb4,0x34);
      }
      uVar6 = __vbaCastObj(local_38,&LAB_0041470c);
      __vbaObjSet(param_1 + 0x21,uVar6);
      __vbaFreeStr();
      __vbaFreeObjList(5,&local_24,&local_30,&local_2c,&local_38,&local_34);
      iVar5 = *param_1;
      uVar6 = __vbaCastObj(0,&DAT_00417d44);
      uVar6 = __vbaObjSet(&local_24,uVar6);
      (**(code **)(iVar5 + 0x788))(param_1,uVar6);
      __vbaFreeObj();
    }
  }
  return;
}

/* ---- 0x452090 (FUN_00452090) [estimated] strings: Name ---- */
void __cdecl FUN_00452090(int *param_1)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  undefined4 local_2c;
  int *local_28;
  int *local_24;
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
  local_c = &DAT_00402518;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_50 = 0;
  local_54 = 0;
  uVar3 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_28,uVar3);
  local_54 = 0xffffffff;
  local_50 = 0xffffffff;
  piVar5 = param_1 + 0x1b;
  iVar4 = (**(code **)(*param_1 + 0x730))(param_1,piVar5,&local_50,&local_54,&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,param_1,&DAT_00413728,0x730);
  }
  __vbaFreeObj();
  iVar4 = (**(code **)(*(int *)param_1[0x18] + 0x44))((int *)param_1[0x18],&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,param_1[0x18],&LAB_00414228,0x44);
  }
  piVar1 = local_28;
  iVar4 = (**(code **)(*(int *)param_1[0x20] + 0x58))((int *)param_1[0x20],local_3c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,param_1[0x20],&DAT_00414268,0x58);
  }
  piVar6 = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0x24))(piVar1,local_3c,&local_2c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_00414238,0x24);
  }
  uVar3 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_20,uVar3);
  __vbaFreeObj();
  __vbaFreeVar(piVar6);
  iVar4 = (**(code **)(*(int *)*piVar5 + 0x3c))((int *)*piVar5,&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,*piVar5,&LAB_0041470c,0x3c);
  }
  piVar5 = local_28;
  iVar4 = (**(code **)(*local_28 + 0x2c))(local_28,param_1 + 0x20,&local_2c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00414ba4,0x2c);
  }
  uVar3 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_24,uVar3);
  __vbaFreeObj();
  piVar5 = local_24;
  iVar4 = (**(code **)(*local_24 + 0x30))(local_24,local_3c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_24,&DAT_00414bb4,0x30);
  }
  sVar2 = rtcIsObject(local_3c);
  __vbaFreeVar(piVar5);
  if (sVar2 == 0) {
    uVar3 = 0x4522e8;
    iVar4 = (**(code **)(*local_24 + 0x30))(local_24,local_3c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_00414bb4,0x30);
    }
    __vbaStrVarMove(local_3c);
    __vbaStrMove();
    __vbaFreeVar(uVar3);
  }
  else {
    iVar4 = (**(code **)(*local_24 + 0x30))();
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_24,&DAT_00414bb4,0x30);
    }
    uVar3 = __vbaVarLateMemCallLd(local_4c,local_3c,L"Name",0);
    __vbaStrVarMove(uVar3);
    __vbaStrMove();
    __vbaFreeVarList(2,local_3c,local_4c);
  }
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar5 = DAT_0047f074;
  uVar3 = __vbaCastObj(0,&DAT_0041462c);
  __vbaObjSet(&local_28,uVar3);
  iVar4 = (**(code **)(*piVar5 + 0x714))(piVar5,&local_20,&local_1c,&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00413d78,0x714);
  }
  __vbaFreeObj();
  __vbaFreeStr(&LAB_004523ca);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x4523f0 (FUN_004523f0) [estimated] strings:  ---- */
void __cdecl FUN_004523f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_30;
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
  local_10 = &stack0xffffffa8;
  local_c = &DAT_00402528;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  if (DAT_0047f270 == (int *)0x0) {
    __vbaNew2(&DAT_0040cb68,&DAT_0047f270);
  }
  piVar1 = DAT_0047f270;
  __vbaObjSetAddref(&local_1c,param_1);
  iVar2 = (**(code **)(*piVar1 + 0x6f8))(piVar1,&local_1c,param_1 + 0x20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041748c,0x6f8);
  }
  __vbaFreeObj();
  if (DAT_0047f270 == (int *)0x0) {
    __vbaNew2(&DAT_0040cb68,&DAT_0047f270);
  }
  piVar1 = DAT_0047f270;
  iVar2 = (**(code **)(*DAT_0047f270 + 0x2b0))
                    (DAT_0047f270,10,local_28,0x80020004,local_20,10,local_38,0x80020004,local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_0041745c,0x2b0);
  }
  return;
}

/* ---- 0x452540 (FUN_00452540) [estimated] strings:  ---- */
void __cdecl FUN_00452540(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int **ppiVar6;
  int *local_70 [7];
  int *local_54;
  short local_50;
  undefined4 local_4c [2];
  undefined4 *local_44;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
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
  local_c = &DAT_00402538;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = 0;
  local_4c[0] = 0;
  local_70[0] = (int *)0x0;
  __vbaObjSetAddref(&local_20,param_1[0x1b]);
  (**(code **)(*param_1 + 0x768))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x354))(param_1);
  uVar2 = __vbaObjSet(&local_28,uVar2);
  local_50 = __vbaObjIs(param_1[0x1f],uVar2);
  __vbaFreeObj();
  if (local_50 == 0) {
    iVar3 = param_1[0x1b];
    puVar4 = &local_1c;
  }
  else {
    __vbaObjSetAddref(&local_1c,local_20);
    iVar3 = param_1[0x1b];
    puVar4 = &local_20;
  }
  __vbaObjSetAddref(puVar4,iVar3);
  __vbaObjSetAddref(local_70,local_1c);
  ppiVar6 = &local_30;
  piVar5 = local_70[0];
  iVar3 = (**(code **)(*local_70[0] + 0x3c))(local_70[0],ppiVar6);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_70[0],&LAB_0041470c,0x3c);
  }
  piVar1 = local_30;
  __vbaStrCopy(piVar5,ppiVar6);
  iVar3 = (**(code **)(*local_70[0] + 0x44))(local_70[0],&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_70[0],&LAB_0041470c,0x44);
  }
  local_54 = local_28;
  iVar3 = (**(code **)(*local_28 + 100))(local_28,&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_54,&LAB_004133f8,100);
  }
  uVar2 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_34,uVar2);
  iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_34,&local_24,&local_38);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00414ba4,0x1c);
  }
  piVar5 = local_38;
  __vbaObjSetAddref(&local_3c,local_20);
  local_44 = &local_3c;
  local_4c[0] = 0x4009;
  iVar3 = (**(code **)(*piVar5 + 0x34))(piVar5,local_4c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5,&DAT_00414bb4,0x34);
  }
  uVar2 = __vbaCastObj(local_3c,&LAB_0041470c);
  __vbaObjSet(&local_20,uVar2);
  __vbaFreeStr();
  __vbaFreeObjList(5,&local_28,&local_34,&local_30,&local_3c,&local_38);
  __vbaObjSetAddref(local_70,0);
  iVar3 = *param_1;
  uVar2 = __vbaCastObj(0,&DAT_00417d44);
  uVar2 = __vbaObjSet(&local_28,uVar2);
  (**(code **)(iVar3 + 0x788))(param_1,uVar2);
  __vbaFreeObj();
  __vbaFreeObj(&LAB_004527c5);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x4527f0 (FUN_004527f0) [estimated] strings: CTP Editor; Enter name of entry to connect to; CTP Editor; No such entry ---- */
void __cdecl FUN_004527f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int **ppiVar7;
  undefined4 local_148;
  undefined4 local_144 [21];
  undefined4 local_f0;
  wchar_t *local_e8;
  undefined4 local_e0 [2];
  wchar_t *local_d8;
  undefined4 local_d0 [4];
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffe74;
  local_c = &DAT_00402548;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_b0[0] = 10;
  local_a0[0] = 10;
  local_90[0] = 10;
  local_80[0] = 10;
  local_70[0] = 10;
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = 0;
  local_3c = (int *)0x0;
  local_40 = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_c0[0] = 0;
  local_d0[0] = 0;
  local_e0[0] = 0;
  local_144[0] = 0;
  local_148 = 0;
  local_a8 = 0x80020004;
  local_98 = 0x80020004;
  local_88 = 0x80020004;
  local_78 = 0x80020004;
  local_68 = 0x80020004;
  local_e8 = L"CTP Editor";
  local_f0 = 8;
  __vbaVarDup();
  local_d8 = L"Enter name of entry to connect to";
  local_e0[0] = 8;
  __vbaVarDup();
  local_b8 = rtcInputBox(local_50,local_60,local_70,local_80,local_90,local_a0,local_b0);
  local_c0[0] = 8;
  rtcUpperCaseVar(local_d0,local_c0);
  __vbaStrVarMove(local_d0);
  __vbaStrMove();
  __vbaFreeVarList(9,local_50,local_60,local_70,local_80,local_90,local_a0,local_b0,local_c0,
                   local_d0);
  iVar4 = __vbaStrCmp(&DAT_00412f74,local_24);
  if (iVar4 != 0) {
    uVar5 = __vbaCastObj(0,&LAB_0041470c);
    __vbaObjSet(&local_30,uVar5);
    local_148 = 0;
    local_144[0] = 0xffffffff;
    uVar5 = __vbaCastObj(0,&LAB_0041470c);
    __vbaObjSet(&local_2c,uVar5);
    iVar4 = (**(code **)(*param_1 + 0x730))(param_1,&local_2c,local_144,&local_148,&local_30);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1,&DAT_00413728,0x730);
    }
    __vbaFreeObjList(2,&local_2c,&local_30);
    uVar5 = (**(code **)(*param_1 + 0x354))(param_1);
    uVar5 = __vbaObjSet(&local_2c,uVar5);
    sVar3 = __vbaObjIs(param_1[0x1f],uVar5);
    __vbaFreeObj();
    if (sVar3 == 0) {
      iVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],&local_2c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,param_1[0x1a],&LAB_004133e8,0x6c);
      }
      piVar6 = local_2c;
      iVar4 = (**(code **)(*local_2c + 0x28))(local_2c,&local_24,&local_30);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_004146fc,0x28);
      }
      uVar5 = local_30;
      local_30 = 0;
      __vbaObjSet(&local_20,uVar5);
      __vbaFreeObj();
      sVar3 = __vbaObjIs(local_20,0);
      if (sVar3 != 0) {
        local_78 = 0x80020004;
        local_68 = 0x80020004;
        local_80[0] = 10;
        local_70[0] = 10;
        local_e8 = L"CTP Editor";
        local_f0 = 8;
        __vbaVarDup();
        local_d8 = L"No such entry";
        local_e0[0] = 8;
        __vbaVarDup();
        rtcMsgBox(local_50,0x30,local_60,local_70,local_80);
        __vbaFreeVarList(4,local_50,local_60,local_70,local_80);
        goto LAB_00452e77;
      }
      ppiVar7 = &local_34;
      piVar6 = local_20;
      iVar4 = (**(code **)(*local_20 + 0x3c))(local_20,ppiVar7);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_20,&LAB_0041470c,0x3c);
      }
      piVar1 = local_34;
      __vbaStrCopy(piVar6,ppiVar7);
      piVar6 = param_1 + 0x1b;
      iVar4 = (**(code **)(*(int *)param_1[0x1b] + 0x44))((int *)param_1[0x1b],&local_2c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,*piVar6,&LAB_0041470c,0x44);
      }
      piVar2 = local_2c;
      iVar4 = (**(code **)(*local_2c + 100))(local_2c,&local_30);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar2,&LAB_004133f8,100);
      }
      uVar5 = local_30;
      local_30 = 0;
      __vbaObjSet(&local_38,uVar5);
      iVar4 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_38,&local_28,&local_3c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00414ba4,0x1c);
      }
      piVar1 = local_3c;
      __vbaObjSetAddref(&local_40,*piVar6);
      local_d8 = (wchar_t *)&local_40;
      local_e0[0] = 0x4009;
      iVar4 = (**(code **)(*piVar1 + 0x34))(piVar1,local_e0);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00414bb4,0x34);
      }
      uVar5 = __vbaCastObj(local_40,&LAB_0041470c);
      __vbaObjSet(piVar6,uVar5);
      __vbaFreeStr();
      __vbaFreeObjList(5,&local_2c,&local_38,&local_34,&local_40,&local_3c);
    }
    else {
      piVar6 = (int *)param_1[0x1b];
      ppiVar7 = &local_34;
      iVar4 = (**(code **)(*piVar6 + 0x3c))(piVar6,ppiVar7);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,param_1[0x1b],&LAB_0041470c,0x3c);
      }
      piVar1 = local_34;
      __vbaStrCopy(piVar6,ppiVar7);
      iVar4 = (**(code **)(*(int *)param_1[0x1b] + 0x44))((int *)param_1[0x1b],&local_2c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,param_1[0x1b],&LAB_0041470c,0x44);
      }
      piVar6 = local_2c;
      iVar4 = (**(code **)(*local_2c + 100))(local_2c,&local_30);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&LAB_004133f8,100);
      }
      uVar5 = local_30;
      local_30 = 0;
      __vbaObjSet(&local_38,uVar5);
      iVar4 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_38,&local_28,&local_3c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00414ba4,0x1c);
      }
      piVar6 = local_3c;
      local_3c = (int *)0x0;
      __vbaObjSet(&local_1c,piVar6);
      __vbaFreeStr();
      __vbaFreeObjList(3,&local_2c,&local_38,&local_34);
      local_d8 = (wchar_t *)&local_24;
      local_e0[0] = 0x4008;
      iVar4 = (**(code **)(*local_1c + 0x34))(local_1c,local_e0);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_1c,&DAT_00414bb4,0x34);
      }
      local_144[0] = 0;
      iVar4 = (**(code **)(*local_1c + 0x38))(local_1c,local_144);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_1c,&DAT_00414bb4,0x38);
      }
    }
    iVar4 = *param_1;
    uVar5 = __vbaCastObj(0,&DAT_00417d44);
    uVar5 = __vbaObjSet(&local_2c,uVar5);
    (**(code **)(iVar4 + 0x788))(param_1,uVar5);
    __vbaFreeObj();
  }
LAB_00452e77:
  __vbaFreeObj(&LAB_00452f00);
  __vbaFreeObj();
  __vbaFreeStr();
  return;
}

/* ---- 0x452f20 (FUN_00452f20) [estimated] strings: CTP Editor ---- */
void __cdecl FUN_00452f20(int *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  undefined4 uVar10;
  undefined4 local_118;
  undefined4 local_114;
  int *local_110;
  int *local_10c;
  undefined4 local_108;
  undefined4 local_104 [8];
  short local_e4;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined4 local_b0 [2];
  int **local_a8;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [4];
  int *local_60;
  int *local_5c;
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffe98;
  local_c = &DAT_00402558;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_34 = (int *)0x0;
  local_38 = 0;
  local_3c = (int *)0x0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = (int *)0x0;
  local_50 = 0;
  local_54 = (int *)0x0;
  local_58 = 0;
  local_5c = (int *)0x0;
  local_60 = (int *)0x0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0[0] = 0;
  local_c0 = 0;
  local_104[0] = 0;
  local_108 = 0;
  local_10c = (int *)0x0;
  local_110 = (int *)0x0;
  local_114 = 0;
  local_118 = 0;
  uVar3 = (**(code **)(*param_1 + 0x354))(param_1);
  uVar3 = __vbaObjSet(&local_4c,uVar3);
  local_e4 = __vbaObjIs(param_1[0x1f],uVar3);
  __vbaFreeObj();
  if (local_e4 == 0) {
    uVar10 = 0;
    uVar3 = (**(code **)(*param_1 + 0x350))(param_1,0xd,0,&DAT_00417d44);
    uVar3 = __vbaObjSet(&local_4c,uVar3);
    uVar3 = __vbaLateIdCallLd(local_70,uVar3);
    uVar3 = __vbaCastObjVar(uVar3,uVar10);
    piVar5 = (int *)__vbaObjSet(&local_50,uVar3);
    puVar8 = &local_40;
    piVar7 = piVar5;
    iVar4 = (**(code **)(*piVar5 + 0x24))(piVar5,puVar8);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00417d44,0x24);
    }
    __vbaStrCopy(piVar7,puVar8);
    local_40 = 0;
    __vbaStrMove();
    puVar8 = &local_44;
    FUN_00441680(puVar8,&local_48);
    __vbaStrMove();
    __vbaFreeStrList(2,&local_44,&local_48);
    __vbaFreeObjList(2,&local_4c,&local_50);
    __vbaFreeVar(puVar8);
    uVar10 = 0;
    uVar3 = (**(code **)(*param_1 + 0x350))(param_1,0xd,0,&DAT_00417d44);
    uVar3 = __vbaObjSet(&local_4c,uVar3);
    uVar3 = __vbaLateIdCallLd(local_70,uVar3);
    uVar3 = __vbaCastObjVar(uVar3,uVar10);
    piVar5 = (int *)__vbaObjSet(&local_50,uVar3);
    puVar8 = &local_40;
    piVar7 = piVar5;
    iVar4 = (**(code **)(*piVar5 + 0x24))(piVar5,puVar8);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00417d44,0x24);
    }
    __vbaStrCopy(piVar7,puVar8);
    local_40 = 0;
    __vbaStrMove();
    puVar8 = &local_44;
    FUN_00441760((undefined *)puVar8,&local_48);
    __vbaStrMove();
    __vbaFreeStrList(2,&local_44,&local_48);
    __vbaFreeObjList(2,&local_4c,&local_50);
    __vbaFreeVar(puVar8);
    iVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x70))((int *)param_1[0x1a],&local_4c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1[0x1a],&LAB_004133e8,0x70);
    }
    piVar7 = local_4c;
    iVar4 = (**(code **)(*local_4c + 0x68))(local_4c,&local_50);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&LAB_004133f8,0x68);
    }
    uVar3 = local_50;
    local_50 = 0;
    uVar3 = __vbaObjSet(local_104,uVar3);
    iVar4 = __vbaForEachCollObj(&DAT_00413cf8,&local_108,&local_3c,uVar3);
    __vbaFreeObj();
    while (iVar4 != 0) {
      iVar4 = (**(code **)(*local_3c + 0x2c))(local_3c,&local_40);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_3c,&DAT_00413cf8,0x2c);
      }
      iVar4 = __vbaStrCmp(local_38,local_40);
      __vbaFreeStr();
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*local_3c + 0x24))(local_3c,&local_4c);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,local_3c,&DAT_00413cf8,0x24);
        }
        piVar7 = local_4c;
        local_4c = (int *)0x0;
        __vbaObjSet(&local_34,piVar7);
        iVar4 = (**(code **)(*local_3c + 0x28))(local_3c,&local_4c);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,local_3c,&DAT_00413cf8,0x28);
        }
        piVar7 = local_4c;
        local_4c = (int *)0x0;
        __vbaObjSet(&local_1c,piVar7);
        __vbaExitEachColl(&local_108);
        break;
      }
      iVar4 = __vbaNextEachCollObj(&DAT_00413cf8,&local_108,&local_3c);
    }
    pcVar6 = __vbaObjSetAddref_exref;
    __vbaObjSetAddref(&local_24,param_1[0x1b]);
    iVar4 = (**(code **)(*local_34 + 0x6c))(local_34,&local_4c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_34,&LAB_004133e8,0x6c);
    }
    piVar7 = local_4c;
    iVar4 = (**(code **)(*local_4c + 0x28))(local_4c,&local_28,&local_50);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_004146fc,0x28);
    }
    uVar3 = local_50;
    local_50 = 0;
    __vbaObjSet(&local_30,uVar3);
    __vbaFreeObj();
  }
  else {
    __vbaObjSetAddref(&local_30,param_1[0x1b]);
    iVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x6c))((int *)param_1[0x1a],&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1[0x1a],&LAB_004133e8,0x6c);
    }
    piVar7 = local_54;
    uVar10 = 0;
    uVar3 = (**(code **)(*param_1 + 0x354))(param_1,0xd,0,&DAT_00417d44);
    uVar3 = __vbaObjSet(&local_4c,uVar3);
    uVar3 = __vbaLateIdCallLd(local_70,uVar3);
    uVar3 = __vbaCastObjVar(uVar3,uVar10);
    piVar5 = (int *)__vbaObjSet(&local_50,uVar3);
    iVar4 = (**(code **)(*piVar5 + 0x24))(piVar5,&local_40);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00417d44,0x24);
    }
    local_40 = 0;
    __vbaStrMove();
    piVar5 = piVar7;
    iVar4 = (**(code **)(*piVar7 + 0x28))(piVar7,&local_44,&local_58);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_004146fc,0x28);
    }
    uVar3 = local_58;
    local_58 = 0;
    __vbaObjSet(&local_24,uVar3);
    __vbaFreeStr();
    __vbaFreeObjList(3,&local_4c,&local_50,&local_54);
    __vbaFreeVar(piVar5);
    iVar4 = (**(code **)(*local_30 + 0x44))(local_30,&local_4c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_30,&LAB_0041470c,0x44);
    }
    piVar7 = local_4c;
    iVar4 = (**(code **)(*local_4c + 100))(local_4c,&local_50);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&LAB_004133f8,100);
    }
    uVar3 = local_50;
    local_50 = 0;
    __vbaObjSet(&local_1c,uVar3);
    __vbaFreeObj();
    pcVar6 = __vbaObjSetAddref_exref;
  }
  sVar1 = __vbaObjIs(local_30,0);
  sVar2 = __vbaObjIs(local_24,0);
  if (sVar2 == 0 && sVar1 == 0) {
    (**(code **)(*param_1 + 0x768))(param_1);
    (*pcVar6)(&local_20,param_1[0x1b]);
    (*pcVar6)(&local_10c,local_20);
    ppiVar9 = &local_54;
    piVar7 = local_10c;
    iVar4 = (**(code **)(*local_10c + 0x3c))(local_10c,ppiVar9);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_10c,&LAB_0041470c,0x3c);
    }
    piVar5 = local_54;
    __vbaStrCopy(piVar7,ppiVar9);
    iVar4 = (**(code **)(*local_10c + 0x44))(local_10c,&local_4c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_10c,&LAB_0041470c,0x44);
    }
    piVar7 = local_4c;
    iVar4 = (**(code **)(*local_4c + 100))(local_4c,&local_50);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&LAB_004133f8,100);
    }
    uVar3 = local_50;
    local_50 = 0;
    __vbaObjSet(&local_58,uVar3);
    iVar4 = (**(code **)(*piVar5 + 0x1c))(piVar5,&local_58,&local_40,&local_5c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00414ba4,0x1c);
    }
    piVar7 = local_5c;
    __vbaObjSetAddref(&local_60,local_24);
    local_a8 = &local_60;
    local_b0[0] = 0x4009;
    iVar4 = (**(code **)(*piVar7 + 0x34))(piVar7,local_b0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00414bb4,0x34);
    }
    uVar3 = __vbaCastObj(local_60,&LAB_0041470c);
    __vbaObjSet(&local_24,uVar3);
    __vbaFreeStr();
    __vbaFreeObjList(5,&local_4c,&local_58,&local_54,&local_60,&local_5c);
    __vbaObjSetAddref(&local_10c,0);
    __vbaObjSetAddref(&local_110,local_30);
    iVar4 = (**(code **)(*local_110 + 0x3c))(local_110,&local_4c);
    pcVar6 = __vbaHresultCheckObj_exref;
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,local_110,&LAB_0041470c,0x3c);
    }
    piVar7 = local_4c;
    local_4c = (int *)0x0;
    uVar3 = __vbaObjSet(&local_114,piVar7);
    iVar4 = __vbaForEachCollObj(&DAT_00414bb4,&local_118,&local_2c,uVar3);
    while (iVar4 != 0) {
      iVar4 = (**(code **)(*local_2c + 0x28))(local_2c,&local_4c);
      if (iVar4 < 0) {
        (*pcVar6)(iVar4,local_2c,&DAT_00414bb4,0x28);
      }
      sVar1 = __vbaObjIs(local_4c,local_1c);
      __vbaFreeObj();
      if (sVar1 != 0) {
        puVar8 = local_70;
        piVar7 = local_2c;
        iVar4 = (**(code **)(*local_2c + 0x30))(local_2c,puVar8);
        if (iVar4 < 0) {
          (*pcVar6)(iVar4,local_2c,&DAT_00414bb4,0x30);
        }
        sVar1 = rtcIsObject(local_70);
        __vbaFreeVar(piVar7);
        if (sVar1 == 0) {
          iVar4 = (**(code **)(*local_2c + 0x30))(local_2c,local_70);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,local_2c,&DAT_00414bb4,0x30);
          }
          iVar4 = (**(code **)(*local_24 + 0x24))(local_24,&local_40);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,local_24,&LAB_0041470c,0x24);
          }
          local_78 = local_40;
          local_40 = 0;
          local_80[0] = 0x8008;
          sVar1 = __vbaVarTstEq(local_80,local_70);
          __vbaFreeVarList(2,local_70,local_80);
          if (sVar1 != 0) {
            __vbaObjSetAddref(&local_4c,local_20);
            local_a8 = &local_4c;
            local_b0[0] = 0x4009;
            iVar4 = (**(code **)(*local_2c + 0x34))(local_2c,local_b0);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,local_2c,&DAT_00414bb4,0x34);
            }
            uVar3 = __vbaCastObj(local_4c,&LAB_0041470c);
            __vbaObjSet(&local_20,uVar3);
            __vbaFreeObj();
            goto LAB_004539dd;
          }
        }
        else {
          iVar4 = (**(code **)(*local_2c + 0x30))();
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,local_2c,&DAT_00414bb4,0x30);
          }
          piVar7 = local_24;
          uVar3 = __vbaUnkVar(local_70);
          sVar1 = __vbaObjIs(uVar3,piVar7);
          __vbaFreeVar(puVar8);
          if (sVar1 != 0) {
            __vbaObjSetAddref(&local_4c,local_20);
            local_a8 = &local_4c;
            local_b0[0] = 0x4009;
            iVar4 = (**(code **)(*local_2c + 0x34))(local_2c,local_b0);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,local_2c,&DAT_00414bb4,0x34);
            }
            uVar3 = __vbaCastObj(local_4c,&LAB_0041470c);
            __vbaObjSet(&local_20,uVar3);
            __vbaFreeObj();
LAB_004539dd:
            __vbaExitEachColl(&local_118);
            break;
          }
        }
      }
      iVar4 = __vbaNextEachCollObj(&DAT_00414bb4,&local_118,&local_2c);
      pcVar6 = __vbaHresultCheckObj_exref;
    }
    __vbaObjSetAddref(&local_110,0);
    iVar4 = *param_1;
    uVar3 = __vbaCastObj(0,&DAT_00417d44);
    uVar3 = __vbaObjSet(&local_4c,uVar3);
    (**(code **)(iVar4 + 0x788))(param_1,uVar3);
    __vbaFreeObj();
  }
  else {
    local_98 = 0x80020004;
    local_88 = 0x80020004;
    local_a0[0] = 10;
    local_90[0] = 10;
    local_b8 = L"CTP Editor";
    local_c0 = 8;
    __vbaVarDup();
    local_a8 = (int **)0x418588;
    local_b0[0] = 8;
    __vbaVarDup();
    rtcMsgBox(local_70,0,local_80,local_90,local_a0);
    __vbaFreeVarList(4,local_70,local_80,local_90,local_a0);
  }
  __vbaFreeObjList(6,local_104,&local_108,&local_10c,&local_110,&local_114,&local_118,&LAB_00453aea)
  ;
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}

/* ---- 0x453b10 (FUN_00453b10) [estimated] strings:  ---- */
void __cdecl FUN_00453b10(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_00402568;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  uVar2 = (**(code **)(*param_1 + 0x354))(param_1);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  sVar1 = __vbaObjIs(param_1[0x1f],uVar2);
  __vbaFreeObj();
  if (sVar1 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x824))(param_1);
    if (-1 < iVar3) {
      return;
    }
    uVar2 = 0x824;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x81c))(param_1);
    if (-1 < iVar3) {
      return;
    }
    uVar2 = 0x81c;
  }
  __vbaHresultCheckObj(iVar3,param_1,&DAT_00413728,uVar2);
  return;
}

/* ---- 0x453be0 (FUN_00453be0) [estimated] strings:  ---- */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_00453be0(int ****param_1)

{
  int ***pppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  short sVar4;
  int iVar5;
  int *****pppppiVar6;
  int *****pppppiVar7;
  undefined4 *puVar8;
  uint uVar9;
  int ******ppppppiVar10;
  undefined4 uVar11;
  int *piVar12;
  code *pcVar13;
  int *piVar14;
  code *pcVar15;
  bool bVar16;
  code *pcStack_15c;
  uint uStack_158;
  code *pcStack_154;
  int ****ppppiStack_13c;
  undefined4 uStack_128;
  int iStack_124;
  int ****ppppiStack_120;
  int ****ppppiStack_11c;
  int *****pppppiStack_118;
  int ****ppppiStack_114;
  int *****pppppiStack_110;
  int *****pppppiStack_10c;
  int *****pppppiStack_108;
  int *****pppppiStack_104;
  int *****pppppiStack_100;
  int *****pppppiStack_fc;
  int ***pppiStack_e8;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int ***local_88 [6];
  int ****local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  int *local_60;
  int ***local_58 [4];
  int ***local_48;
  int ****local_44;
  int *****local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int ****local_34;
  undefined4 local_30;
  int ****local_2c;
  int ****local_28;
  int *****local_24;
  int local_20;
  int ****local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff28;
  local_c = &DAT_00402578;
  pcVar13 = (code *)0x0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (*(code *)(*param_1)[1])();
  local_1c = (int ****)0x0;
  local_20 = 0;
  local_24 = (int *****)0x0;
  local_28 = (int ****)0x0;
  local_2c = (int ****)0x0;
  local_30 = 0;
  local_34 = (int ****)0x0;
  local_38 = 0;
  local_3c = 0;
  local_40 = (int *****)0x0;
  local_44 = (int ****)0x0;
  local_48 = (int ***)0x0;
  local_58[0] = (int ***)0x0;
  local_68[0] = 0;
  local_6c = 0;
  local_70 = (int ****)0x0;
  local_88[0] = (int ***)0x0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0;
  (*(code *)(*param_1)[0xd5])();
  __vbaObjSet();
  sVar4 = __vbaObjIs();
  __vbaFreeObj();
  if (sVar4 == 0) {
    pppiStack_e8 = param_1[0x1a];
    iVar5 = (*(code *)(*pppiStack_e8)[0x1c])();
    pcVar15 = __vbaHresultCheckObj_exref;
    if (iVar5 < 0) {
      pppppiStack_fc = (int *****)0x453f9e;
      __vbaHresultCheckObj();
    }
    pppppiVar7 = local_40;
    pppppiVar6 = (int *****)(*(code *)(*local_40)[0x1a])();
    if ((int)pppppiVar6 < 0) {
      pppppiStack_fc = pppppiVar7;
      pppppiStack_104 = (int *****)0x453fc6;
      pppppiStack_100 = pppppiVar6;
      __vbaHresultCheckObj();
    }
    local_44 = (int ****)0x0;
    pppppiStack_fc = (int *****)0x453fda;
    __vbaObjSet();
    pppppiStack_fc = (int *****)&local_8c;
    pppppiStack_100 = (int *****)&DAT_00413cf8;
    pppppiStack_104 = (int *****)0x453ff1;
    iVar5 = __vbaForEachCollObj();
    __vbaFreeObj();
    while (iVar5 != 0) {
      pppppiStack_fc = (int *****)0x454011;
      ppppppiVar10 = (int ******)(*(code *)(*local_24)[9])();
      if ((int)ppppppiVar10 < 0) {
        pppppiStack_fc = (int *****)0x24;
        pppppiStack_100 = (int *****)&DAT_00413cf8;
        pppppiStack_104 = local_24;
        pppppiStack_10c = (int *****)0x454025;
        pppppiStack_108 = (int *****)ppppppiVar10;
        __vbaHresultCheckObj();
      }
      pppppiVar7 = local_40;
      pppppiStack_fc = &local_44;
      pppppiStack_100 = local_40;
      pppppiStack_104 = (int *****)0x454034;
      pppppiVar6 = (int *****)(*(code *)(*local_40)[0x1b])();
      if ((int)pppppiVar6 < 0) {
        pppppiStack_fc = pppppiVar7;
        pppppiStack_104 = (int *****)0x454045;
        pppppiStack_100 = pppppiVar6;
        __vbaHresultCheckObj();
      }
      local_44 = (int ****)0x0;
      pppppiStack_fc = (int *****)0x454059;
      __vbaObjSet();
      pppppiStack_fc = (int *****)&local_94;
      pppppiStack_100 = (int *****)&LAB_0041470c;
      pppppiStack_104 = (int *****)0x454070;
      iVar5 = __vbaForEachCollObj();
      __vbaFreeObj();
      while (iVar5 != 0) {
        pppppiStack_fc = (int *****)0xd;
        pppppiStack_100 = (int *****)param_1;
        pppppiStack_104 = (int *****)0x454097;
        pppppiStack_104 = (int *****)(*(code *)(*param_1)[0xd4])();
        pppppiStack_108 = (int *****)&local_40;
        pppppiStack_10c = (int *****)0x4540a4;
        pppppiStack_104 = (int *****)__vbaObjSet();
        pppppiStack_108 = (int *****)local_58;
        pppppiStack_10c = (int *****)0x4540af;
        pppppiStack_fc = (int *****)__vbaLateIdCallLd();
        pppppiStack_100 = (int *****)0x4540b9;
        __vbaCastObjVar();
        pppppiStack_fc = &local_44;
        pppppiStack_100 = (int *****)0x4540c0;
        pppppiVar7 = (int *****)__vbaObjSet();
        pppppiStack_100 = (int *****)0x4540cc;
        pppppiStack_fc = pppppiVar7;
        pppppiVar6 = (int *****)(*(code *)(*pppppiVar7)[9])();
        if ((int)pppppiVar6 < 0) {
          pppppiStack_100 = (int *****)0x24;
          pppppiStack_104 = (int *****)&DAT_00417d44;
          pppppiStack_110 = (int *****)0x4540dd;
          pppppiStack_10c = pppppiVar6;
          pppppiStack_108 = pppppiVar7;
          __vbaHresultCheckObj();
        }
        pppppiStack_100 = &local_2c;
        pppppiStack_104 = (int *****)local_28;
        pppppiStack_108 = (int *****)0x4540ea;
        pppppiVar7 = (int *****)(*(code *)(*local_28)[9])();
        if ((int)pppppiVar7 < 0) {
          pppppiStack_fc = (int *****)&LAB_0041470c;
          pppppiStack_100 = (int *****)local_28;
          pppppiStack_108 = (int *****)0x4540fe;
          pppppiStack_104 = pppppiVar7;
          __vbaHresultCheckObj();
        }
        __vbaStrCopy();
        local_30 = 0;
        __vbaStrMove();
        pppppiStack_fc = (int *****)0x45412e;
        FUN_00441680(&local_34,&local_38);
        pppppiStack_fc = (int *****)0x454135;
        pppppiStack_fc = (int *****)__vbaStrMove();
        pppppiStack_100 = (int *****)0x45413c;
        iVar5 = __vbaStrCmp();
        pppppiStack_fc = &local_2c;
        pppppiStack_100 = (int *****)&local_38;
        pppppiStack_104 = &local_34;
        pppppiStack_108 = (int *****)0x4;
        pppppiStack_10c = (int *****)0x45415d;
        __vbaFreeStrList();
        pppppiStack_10c = &local_44;
        pppppiStack_110 = (int *****)&local_40;
        ppppiStack_114 = (int ****)0x2;
        pppppiStack_118 = (int *****)0x45416d;
        __vbaFreeObjList();
        __vbaFreeVar();
        if (iVar5 == 0) {
          pppppiStack_fc = (int *****)0x45418f;
          ppppppiVar10 = (int ******)(*(code *)(*local_28)[0xf])();
          if ((int)ppppppiVar10 < 0) {
            pppppiStack_fc = (int *****)0x3c;
            pppppiStack_100 = (int *****)&LAB_0041470c;
            pppppiStack_104 = (int *****)local_28;
            pppppiStack_10c = (int *****)0x4541a3;
            pppppiStack_108 = (int *****)ppppppiVar10;
            __vbaHresultCheckObj();
          }
          pppppiVar7 = local_40;
          pppppiStack_fc = &local_70;
          pppppiStack_100 = local_40;
          pppppiStack_104 = (int *****)0x4541b2;
          pppppiVar6 = (int *****)(*(code *)(*local_40)[0xc])();
          if ((int)pppppiVar6 < 0) {
            pppppiStack_fc = pppppiVar7;
            pppppiStack_104 = (int *****)0x4541c3;
            pppppiStack_100 = pppppiVar6;
            __vbaHresultCheckObj();
          }
          ppppiVar2 = local_70;
          local_20 = 1;
          __vbaFreeObj();
          iVar5 = local_20;
          while (local_20 = iVar5, local_20 <= (int)ppppiVar2) {
            pppppiStack_fc = (int *****)0x4541f8;
            pppppiStack_108 = (int *****)(*(code *)(*local_28)[0xf])();
            if ((int)pppppiStack_108 < 0) {
              pppppiStack_fc = (int *****)0x3c;
              pppppiStack_100 = (int *****)&LAB_0041470c;
              pppppiStack_104 = (int *****)local_28;
              pppppiStack_10c = (int *****)0x45420c;
              __vbaHresultCheckObj();
            }
            pppppiVar7 = local_40;
            local_60 = &local_20;
            pppppiStack_fc = &local_44;
            pppppiStack_100 = (int *****)local_68;
            local_68[0] = 0x4003;
            pppppiStack_104 = local_40;
            pppppiStack_108 = (int *****)0x45422c;
            pppppiVar6 = (int *****)(*(code *)(*local_40)[9])();
            if ((int)pppppiVar6 < 0) {
              pppppiStack_108 = (int *****)0x24;
              pppppiStack_10c = (int *****)&DAT_00414ba4;
              pppppiStack_110 = pppppiVar7;
              pppppiStack_118 = (int *****)0x45423d;
              ppppiStack_114 = (int ****)pppppiVar6;
              __vbaHresultCheckObj();
            }
            pppppiStack_108 = (int *****)local_44;
            local_44 = (int ****)0x0;
            pppppiStack_10c = &local_1c;
            pppppiStack_110 = (int *****)0x45424e;
            __vbaObjSet();
            pppppiStack_108 = (int *****)0x454257;
            __vbaFreeObj();
            pppppiStack_108 = &local_44;
            pppppiStack_10c = local_24;
            pppppiStack_110 = (int *****)0x454264;
            pppppiVar6 = (int *****)(*(code *)(*local_24)[10])();
            if ((int)pppppiVar6 < 0) {
              pppppiStack_110 = (int *****)0x28;
              ppppiStack_114 = (int ****)&DAT_00413cf8;
              pppppiStack_118 = local_24;
              ppppiStack_120 = (int ****)0x454278;
              ppppiStack_11c = (int ****)pppppiVar6;
              __vbaHresultCheckObj();
            }
            pppppiStack_110 = (int *****)&local_40;
            ppppiStack_114 = local_1c;
            pppppiStack_118 = (int *****)0x454285;
            puVar8 = (undefined4 *)(*(code *)(*local_1c)[10])();
            if ((int)puVar8 < 0) {
              pppppiStack_fc = (int *****)local_1c;
              pppppiStack_104 = (int *****)0x454299;
              pppppiStack_100 = (int *****)puVar8;
              __vbaHresultCheckObj();
            }
            pppppiStack_fc = (int *****)0x4542a7;
            sVar4 = __vbaObjIs();
            pppppiStack_fc = (int *****)0x2;
            pppppiStack_100 = (int *****)0x4542ba;
            __vbaFreeObjList();
            if (sVar4 != 0) {
              local_6c = 0;
              pppppiStack_fc = (int *****)0x4542d2;
              ppppppiVar10 = (int ******)(*(code *)(*local_1c)[0xe])();
              if ((int)ppppppiVar10 < 0) {
                pppppiStack_fc = (int *****)0x38;
                pppppiStack_100 = (int *****)&DAT_00414bb4;
                pppppiStack_104 = (int *****)local_1c;
                pppppiStack_10c = (int *****)0x4542e6;
                pppppiStack_108 = (int *****)ppppppiVar10;
                __vbaHresultCheckObj();
              }
              pppppiStack_fc = (int *****)local_58;
              pppppiStack_100 = (int *****)local_1c;
              pppppiStack_104 = (int *****)0x4542f3;
              pppppiVar6 = (int *****)(*(code *)(*local_1c)[0xc])();
              if ((int)pppppiVar6 < 0) {
                pppppiStack_fc = (int *****)&DAT_00414bb4;
                pppppiStack_100 = (int *****)local_1c;
                pppppiStack_108 = (int *****)0x454307;
                pppppiStack_104 = pppppiVar6;
                __vbaHresultCheckObj();
              }
              pppppiStack_fc = (int *****)local_58;
              pppppiStack_100 = (int *****)0x454318;
              pppppiStack_fc = (int *****)__vbaUnkVar();
              pppppiStack_100 = (int *****)0x45431f;
              sVar4 = __vbaObjIs();
              __vbaFreeVar();
              if (sVar4 != 0) {
                pppppiStack_fc = (int *****)0x45438f;
                ppppppiVar10 = (int ******)(*(code *)(*local_28)[0xf])();
                if ((int)ppppppiVar10 < 0) {
                  pppppiStack_fc = (int *****)0x3c;
                  pppppiStack_100 = (int *****)&LAB_0041470c;
                  pppppiStack_104 = (int *****)local_28;
                  pppppiStack_10c = (int *****)0x4543a3;
                  pppppiStack_108 = (int *****)ppppppiVar10;
                  __vbaHresultCheckObj();
                }
                pppppiVar7 = local_40;
                local_60 = &local_20;
                pppppiStack_fc = (int *****)local_68;
                local_68[0] = 0x4003;
                pppppiStack_100 = local_40;
                pppppiStack_104 = (int *****)0x4543bf;
                ppppppiVar10 = (int ******)(*(code *)(*local_40)[0xd])();
                if ((int)ppppppiVar10 < 0) {
                  pppppiStack_104 = (int *****)0x34;
                  pppppiStack_108 = (int *****)&DAT_00414ba4;
                  pppppiStack_10c = pppppiVar7;
                  ppppiStack_114 = (int ****)0x4543d0;
                  pppppiStack_110 = (int *****)ppppppiVar10;
                  __vbaHresultCheckObj();
                }
                pppppiStack_104 = (int *****)0x4543db;
                __vbaFreeObj();
                pppppiStack_104 = (int *****)&DAT_00417d44;
                pppppiStack_108 = (int *****)0x0;
                pppiVar1 = *param_1;
                pppppiStack_10c = (int *****)0x4543f2;
                pppppiStack_104 = (int *****)__vbaCastObj();
                pppppiStack_108 = (int *****)&local_40;
                pppppiStack_10c = (int *****)0x4543fd;
                pppppiStack_104 = (int *****)__vbaObjSet();
                pppppiStack_108 = (int *****)param_1;
                pppppiStack_10c = (int *****)0x45440b;
                (*(code *)pppiVar1[0x1e2])();
                __vbaFreeObj();
                goto LAB_00454410;
              }
            }
            uVar9 = (uint)pppppiVar7 & 0xffff0000;
            iVar5 = local_20 + 1;
            if (SCARRY4(local_20,1)) goto LAB_004544b0;
          }
        }
        pppppiStack_fc = (int *****)&LAB_0041470c;
        pppppiStack_100 = (int *****)0x45435e;
        iVar5 = __vbaNextEachCollObj();
      }
      pppppiStack_fc = (int *****)&DAT_00413cf8;
      pppppiStack_100 = (int *****)0x45437b;
      iVar5 = __vbaNextEachCollObj();
    }
  }
  else {
    pppiStack_e8 = param_1[0x1b];
    iVar5 = (*(code *)(*pppiStack_e8)[0xf])();
    pcVar15 = __vbaHresultCheckObj_exref;
    if (iVar5 < 0) {
      pppppiStack_fc = (int *****)0x453cbd;
      __vbaHresultCheckObj();
    }
    pppppiVar7 = local_40;
    pppppiVar6 = (int *****)(*(code *)(*local_40)[0xc])();
    if ((int)pppppiVar6 < 0) {
      pppppiStack_fc = pppppiVar7;
      pppppiStack_104 = (int *****)0x453ce5;
      pppppiStack_100 = pppppiVar6;
      __vbaHresultCheckObj();
    }
    ppppiVar2 = local_70;
    local_20 = 1;
    __vbaFreeObj();
    pcVar13 = __vbaFreeObjList_exref;
    iVar5 = local_20;
    while (local_20 = iVar5, local_20 <= (int)ppppiVar2) {
      pppppiStack_fc = (int *****)0x453d23;
      pppppiStack_108 = (int *****)(*(code *)(*param_1[0x1b])[0xf])();
      if ((int)pppppiStack_108 < 0) {
        pppppiStack_104 = (int *****)param_1[0x1b];
        pppppiStack_fc = (int *****)0x3c;
        pppppiStack_100 = (int *****)&LAB_0041470c;
        pppppiStack_10c = (int *****)0x453d37;
        __vbaHresultCheckObj();
      }
      pppppiVar7 = local_40;
      local_60 = &local_20;
      pppppiStack_fc = &local_44;
      pppppiStack_100 = (int *****)local_68;
      local_68[0] = 0x4003;
      pppppiStack_104 = local_40;
      pppppiStack_108 = (int *****)0x453d57;
      pppppiVar6 = (int *****)(*(code *)(*local_40)[9])();
      if ((int)pppppiVar6 < 0) {
        pppppiStack_108 = (int *****)0x24;
        pppppiStack_10c = (int *****)&DAT_00414ba4;
        pppppiStack_110 = pppppiVar7;
        pppppiStack_118 = (int *****)0x453d68;
        ppppiStack_114 = (int ****)pppppiVar6;
        __vbaHresultCheckObj();
      }
      pppppiStack_108 = (int *****)local_44;
      local_44 = (int ****)0x0;
      pppppiStack_10c = &local_1c;
      pppppiStack_110 = (int *****)0x453d7d;
      __vbaObjSet();
      pppppiStack_108 = (int *****)0x453d86;
      __vbaFreeObj();
      pppppiStack_108 = &local_44;
      pppppiStack_10c = (int *****)param_1[0x1a];
      pppppiStack_110 = (int *****)0x453d96;
      pppppiVar7 = (int *****)(*(code *)(*pppppiStack_10c)[0x1c])();
      if ((int)pppppiVar7 < 0) {
        pppppiStack_118 = (int *****)param_1[0x1a];
        pppppiStack_110 = (int *****)0x70;
        ppppiStack_114 = (int ****)&LAB_004133e8;
        ppppiStack_120 = (int ****)0x453daa;
        ppppiStack_11c = (int ****)pppppiVar7;
        __vbaHresultCheckObj();
      }
      ppppiVar3 = local_44;
      pppppiStack_110 = (int *****)&local_48;
      ppppiStack_114 = local_44;
      pppppiStack_118 = (int *****)0x453db9;
      iVar5 = (*(code *)(*local_44)[0x19])();
      if (iVar5 < 0) {
        pppppiStack_118 = (int *****)0x64;
        ppppiStack_11c = (int ****)&LAB_004133f8;
        ppppiStack_120 = ppppiVar3;
        uStack_128 = 0x453dca;
        iStack_124 = iVar5;
        __vbaHresultCheckObj();
      }
      pppppiStack_118 = (int *****)&local_40;
      ppppiStack_11c = local_1c;
      ppppiStack_120 = (int ****)0x453dd7;
      puVar8 = (undefined4 *)(*(code *)(*local_1c)[10])();
      if ((int)puVar8 < 0) {
        pppppiStack_fc = (int *****)local_1c;
        pppppiStack_104 = (int *****)0x453deb;
        pppppiStack_100 = (int *****)puVar8;
        __vbaHresultCheckObj();
      }
      pppppiStack_fc = (int *****)0x453df9;
      uVar9 = __vbaObjIs();
      pppppiStack_fc = &local_44;
      pppppiStack_100 = (int *****)0x3;
      pppppiStack_104 = (int *****)0x453e0b;
      __vbaFreeObjList();
      if ((short)uVar9 != 0) {
        pppppiStack_fc = (int *****)0x453e24;
        pppppiStack_108 = (int *****)(*(code *)(*local_1c)[0xb])();
        if ((int)pppppiStack_108 < 0) {
          pppppiStack_fc = (int *****)0x2c;
          pppppiStack_100 = (int *****)&DAT_00414bb4;
          pppppiStack_104 = (int *****)local_1c;
          pppppiStack_10c = (int *****)0x453e38;
          __vbaHresultCheckObj();
        }
        pppppiStack_fc = (int *****)&DAT_00417d44;
        pppppiStack_100 = (int *****)0x0;
        pppppiStack_104 = (int *****)0xd;
        pppppiStack_108 = (int *****)param_1;
        pppppiStack_10c = (int *****)0x453e4d;
        pppppiStack_10c = (int *****)(*(code *)(*param_1)[0xd5])();
        pppppiStack_110 = (int *****)&local_40;
        ppppiStack_114 = (int ****)0x453e5a;
        pppppiStack_10c = (int *****)__vbaObjSet();
        pppppiStack_110 = (int *****)local_58;
        ppppiStack_114 = (int ****)0x453e65;
        pppppiStack_104 = (int *****)__vbaLateIdCallLd();
        pppppiStack_108 = (int *****)0x453e6f;
        pppppiStack_100 = (int *****)__vbaCastObjVar();
        pppppiStack_104 = &local_44;
        pppppiStack_108 = (int *****)0x453e76;
        pppppiVar7 = (int *****)__vbaObjSet();
        pppppiStack_100 = (int *****)&local_30;
        pppppiStack_108 = (int *****)0x453e82;
        pppppiStack_104 = pppppiVar7;
        pppppiVar6 = (int *****)(*(code *)(*pppppiVar7)[9])();
        if ((int)pppppiVar6 < 0) {
          pppppiStack_fc = (int *****)&DAT_00417d44;
          pppppiStack_108 = (int *****)0x453e93;
          pppppiStack_104 = pppppiVar6;
          pppppiStack_100 = pppppiVar7;
          __vbaHresultCheckObj();
        }
        pppppiStack_fc = (int *****)local_30;
        pppppiStack_100 = (int *****)0x453ea1;
        iVar5 = __vbaStrCmp();
        pppppiStack_fc = &local_2c;
        pppppiStack_100 = (int *****)0x2;
        uVar9 = -(uint)(iVar5 == 0);
        pppppiStack_104 = (int *****)0x453eba;
        __vbaFreeStrList();
        pppppiStack_104 = &local_44;
        pppppiStack_108 = (int *****)&local_40;
        pppppiStack_10c = (int *****)0x2;
        pppppiStack_110 = (int *****)0x453ec6;
        __vbaFreeObjList();
        __vbaFreeVar();
        if ((short)uVar9 != 0) {
          pppppiStack_fc = (int *****)0x453eff;
          ppppppiVar10 = (int ******)(*(code *)(*param_1[0x1b])[0xf])();
          if ((int)ppppppiVar10 < 0) {
            pppppiStack_104 = (int *****)param_1[0x1b];
            pppppiStack_fc = (int *****)0x3c;
            pppppiStack_100 = (int *****)&LAB_0041470c;
            pppppiStack_10c = (int *****)0x453f13;
            pppppiStack_108 = (int *****)ppppppiVar10;
            __vbaHresultCheckObj();
          }
          pppppiVar7 = local_40;
          local_60 = &local_20;
          pppppiStack_fc = (int *****)local_68;
          local_68[0] = 0x4003;
          pppppiStack_100 = local_40;
          pppppiStack_104 = (int *****)0x453f2f;
          ppppppiVar10 = (int ******)(*(code *)(*local_40)[0xd])();
          if ((int)ppppppiVar10 < 0) {
            pppppiStack_104 = (int *****)0x34;
            pppppiStack_108 = (int *****)&DAT_00414ba4;
            pppppiStack_10c = pppppiVar7;
            ppppiStack_114 = (int ****)0x453f40;
            pppppiStack_110 = (int *****)ppppppiVar10;
            __vbaHresultCheckObj();
          }
          pppppiStack_104 = (int *****)0x453f4b;
          __vbaFreeObj();
          pppiVar1 = *param_1;
          pppppiStack_104 = (int *****)&DAT_00417d44;
          pppppiStack_108 = (int *****)0x0;
          pppppiStack_10c = (int *****)0x453f5a;
          pppppiStack_104 = (int *****)__vbaCastObj();
          pppppiStack_108 = (int *****)&local_40;
          pppppiStack_10c = (int *****)0x453f65;
          pppppiStack_104 = (int *****)__vbaObjSet();
          pppppiStack_108 = (int *****)param_1;
          pppppiStack_10c = (int *****)0x453f6d;
          (*(code *)pppiVar1[0x1e2])();
          __vbaFreeObj();
          break;
        }
      }
      iVar5 = local_20 + 1;
      if (SCARRY4(local_20,1)) {
LAB_004544b0:
        __vbaErrorOverflow();
        pppppiStack_100 = (int *****)&LAB_004032d6;
        pppppiStack_104 = ExceptionList;
        pppppiStack_fc = (int *****)&pcStack_15c;
        piVar14 = (int *)((uint)pppiStack_e8 & 0xfffffffe);
        ExceptionList = &pppppiStack_104;
        pcStack_15c = pcVar15;
        uStack_158 = uVar9;
        pcStack_154 = pcVar13;
        (**(code **)(*piVar14 + 4))(piVar14);
        pppppiStack_108 = (int *****)0x0;
        pppppiStack_10c = (int *****)0x0;
        pppppiStack_110 = (int *****)0x0;
        ppppiStack_114 = (int ****)0x0;
        pppppiStack_118 = (int *****)0x0;
        ppppiStack_11c = (int ****)0x0;
        ppppiStack_120 = (int ****)0x0;
        iStack_124 = 0;
        if ((short)piVar14[0x23] == 0) {
          uVar11 = __vbaCastObj(0,&LAB_0041470c);
          __vbaObjSet(&pppppiStack_108,uVar11);
          iStack_124 = 0;
          ppppiStack_120 = (int ****)0xffffffff;
          iVar5 = (**(code **)(*piVar14 + 0x730))
                            (piVar14,piVar14 + 0x1b,&ppppiStack_120,&iStack_124,&pppppiStack_108);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar14,&DAT_00413728,0x730);
          }
          __vbaFreeObj();
          uVar11 = (**(code **)(*piVar14 + 0x338))(piVar14);
          piVar12 = (int *)__vbaObjSet(&pppppiStack_108,uVar11);
          iVar5 = (**(code **)(*piVar12 + 0x40))
                            (piVar12,CONCAT22((short)((uint)&pppppiStack_10c >> 0x10),local_40._0_2_
                                             ),&pppppiStack_10c);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar12,&DAT_004182e4,0x40);
          }
          pppppiVar7 = pppppiStack_10c;
          iVar5 = (*(code *)(*pppppiStack_10c)[0x38])(pppppiStack_10c,&ppppiStack_120);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,pppppiVar7,&DAT_00417e48,0xe0);
          }
          bVar16 = (short)ppppiStack_120 == 1;
          __vbaFreeObjList(2,&pppppiStack_108,&pppppiStack_10c);
          if (bVar16) {
            iVar5 = (**(code **)(*(int *)piVar14[0x1a] + 0x70))
                              ((int *)piVar14[0x1a],&pppppiStack_110);
            if (iVar5 < 0) {
              __vbaHresultCheckObj(iVar5,piVar14[0x1a],&LAB_004133e8,0x70);
            }
            pppppiVar7 = pppppiStack_110;
            iVar5 = (*(code *)(*pppppiStack_110)[0x1b])(pppppiStack_110,&ppppiStack_114);
            if (iVar5 < 0) {
              __vbaHresultCheckObj(iVar5,pppppiVar7,&LAB_004133f8,0x6c);
            }
            ppppiStack_13c = ppppiStack_114;
            uVar11 = (**(code **)(*piVar14 + 0x338))(piVar14);
            piVar12 = (int *)__vbaObjSet(&pppppiStack_108,uVar11);
            iVar5 = (**(code **)(*piVar12 + 0x40))
                              (piVar12,CONCAT22((short)((uint)&pppppiStack_10c >> 0x10),
                                                local_40._0_2_),&pppppiStack_10c);
            if (iVar5 < 0) {
              __vbaHresultCheckObj(iVar5,piVar12,&DAT_004182e4,0x40);
            }
            uVar11 = __vbaCastObj(pppppiStack_10c,&DAT_0041352c);
            __vbaObjSet(&pppppiStack_118,uVar11);
            ppppiVar2 = ppppiStack_13c;
            iVar5 = (*(code *)(*ppppiStack_13c)[10])
                              (ppppiStack_13c,&pppppiStack_118,&ppppiStack_11c);
            if (iVar5 < 0) {
              __vbaHresultCheckObj(iVar5,ppppiVar2,&LAB_00414248,0x28);
            }
            ppppiVar2 = ppppiStack_11c;
            iVar5 = (*(code *)(*ppppiStack_11c)[0x20])(ppppiStack_11c,piVar14 + 0x1b);
            if (iVar5 < 0) {
              __vbaHresultCheckObj(iVar5,ppppiVar2,&DAT_00414268,0x80);
            }
            __vbaFreeObjList(6,&pppppiStack_108,&pppppiStack_110,&pppppiStack_10c,&pppppiStack_118,
                             &ppppiStack_114,&ppppiStack_11c);
          }
          iStack_124 = -1;
          uVar11 = __vbaCastObj(0,&LAB_004133f8);
          __vbaObjSet(&pppppiStack_108,uVar11);
          ppppiStack_120 = (int ****)0x0;
          (**(code **)(*piVar14 + 0x784))
                    (piVar14,piVar14 + 0x1b,&ppppiStack_120,&pppppiStack_108,&iStack_124);
          __vbaFreeObj();
          uVar11 = (**(code **)(*piVar14 + 0x338))(piVar14);
          piVar12 = (int *)__vbaObjSet(&pppppiStack_108,uVar11);
          iVar5 = (**(code **)(*piVar12 + 0x40))
                            (piVar12,CONCAT22((short)((uint)&pppppiStack_10c >> 0x10),local_40._0_2_
                                             ),&pppppiStack_10c);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar12,&DAT_004182e4,0x40);
          }
          pppppiVar7 = pppppiStack_10c;
          iVar5 = (*(code *)(*pppppiStack_10c)[0x6f])(pppppiStack_10c);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,pppppiVar7,&DAT_00417e48,0x1bc);
          }
          __vbaFreeObjList(2,&pppppiStack_108,&pppppiStack_10c);
          iVar5 = (**(code **)(*(int *)piVar14[0x19] + 0x1c))((int *)piVar14[0x19],&ppppiStack_120);
          if (iVar5 < 0) {
            __vbaHresultCheckObj(iVar5,piVar14[0x19],&DAT_00415000,0x1c);
          }
          if ((short)ppppiStack_120 != 0) {
            (**(code **)(*piVar14 + 0x75c))(piVar14);
          }
        }
        return;
      }
    }
  }
LAB_00454410:
  pppppiStack_fc = (int *****)&local_90;
  pppppiStack_100 = (int *****)&local_8c;
  pppppiStack_104 = (int *****)local_88;
  pppppiStack_108 = (int *****)0x4;
  pppppiStack_10c = (int *****)0x454478;
  __vbaFreeObjList();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x4544c0 (FUN_004544c0) [estimated] strings:  ---- */
void __cdecl FUN_004544c0(uint param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
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
  local_10 = &stack0xffffff90;
  local_c = &DAT_00402588;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = 0;
  if ((short)piVar5[0x23] == 0) {
    uVar1 = __vbaCastObj(0,&LAB_0041470c);
    __vbaObjSet(&local_1c,uVar1);
    local_38 = 0;
    local_34 = 0xffffffff;
    iVar2 = (**(code **)(*piVar5 + 0x730))(piVar5,piVar5 + 0x1b,&local_34,&local_38,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5,&DAT_00413728,0x730);
    }
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar5 + 0x338))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar2 = (**(code **)(*piVar3 + 0x40))
                      (piVar3,CONCAT22((short)((uint)&local_20 >> 0x10),*param_2),&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_004182e4,0x40);
    }
    piVar3 = local_20;
    iVar2 = (**(code **)(*local_20 + 0xe0))(local_20,&local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417e48,0xe0);
    }
    bVar6 = (short)local_34 == 1;
    __vbaFreeObjList(2,&local_1c,&local_20);
    if (bVar6) {
      iVar2 = (**(code **)(*(int *)piVar5[0x1a] + 0x70))((int *)piVar5[0x1a],&local_24);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5[0x1a],&LAB_004133e8,0x70);
      }
      piVar3 = local_24;
      iVar2 = (**(code **)(*local_24 + 0x6c))(local_24,&local_28);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&LAB_004133f8,0x6c);
      }
      piVar3 = local_28;
      uVar1 = (**(code **)(*piVar5 + 0x338))(piVar5);
      piVar4 = (int *)__vbaObjSet(&local_1c,uVar1);
      iVar2 = (**(code **)(*piVar4 + 0x40))
                        (piVar4,CONCAT22((short)((uint)&local_20 >> 0x10),*param_2),&local_20);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_004182e4,0x40);
      }
      uVar1 = __vbaCastObj(local_20,&DAT_0041352c);
      __vbaObjSet(&local_2c,uVar1);
      iVar2 = (**(code **)(*piVar3 + 0x28))(piVar3,&local_2c,&local_30);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&LAB_00414248,0x28);
      }
      piVar3 = local_30;
      iVar2 = (**(code **)(*local_30 + 0x80))(local_30,piVar5 + 0x1b);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414268,0x80);
      }
      __vbaFreeObjList(6,&local_1c,&local_24,&local_20,&local_2c,&local_28,&local_30);
    }
    local_38 = 0xffffffff;
    uVar1 = __vbaCastObj(0,&LAB_004133f8);
    __vbaObjSet(&local_1c,uVar1);
    local_34 = 0;
    (**(code **)(*piVar5 + 0x784))(piVar5,piVar5 + 0x1b,&local_34,&local_1c,&local_38);
    __vbaFreeObj();
    uVar1 = (**(code **)(*piVar5 + 0x338))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
    iVar2 = (**(code **)(*piVar3 + 0x40))
                      (piVar3,CONCAT22((short)((uint)&local_20 >> 0x10),*param_2),&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_004182e4,0x40);
    }
    piVar3 = local_20;
    iVar2 = (**(code **)(*local_20 + 0x1bc))(local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417e48,0x1bc);
    }
    __vbaFreeObjList(2,&local_1c,&local_20);
    iVar2 = (**(code **)(*(int *)piVar5[0x19] + 0x1c))((int *)piVar5[0x19],&local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5[0x19],&DAT_00415000,0x1c);
    }
    if ((short)local_34 != 0) {
      (**(code **)(*piVar5 + 0x75c))(piVar5);
    }
  }
  return;
}

/* ---- 0x454860 (FUN_00454860) [estimated] strings:  ---- */
void __cdecl FUN_00454860(uint param_1,undefined2 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
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
  local_10 = &stack0xffffff9c;
  local_c = &DAT_00402598;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  iVar3 = (**(code **)(*(int *)piVar5[0x1a] + 0x70))((int *)piVar5[0x1a],&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5[0x1a],&LAB_004133e8,0x70);
  }
  piVar2 = local_2c;
  uVar4 = (**(code **)(*piVar5 + 0x338))(piVar5);
  piVar5 = (int *)__vbaObjSet(&local_24,uVar4);
  iVar3 = (**(code **)(*piVar5 + 0x40))
                    (piVar5,CONCAT22((short)((uint)&local_28 >> 0x10),*param_2),&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5,&DAT_004182e4,0x40);
  }
  uVar4 = __vbaCastObj(local_28,&DAT_0041352c);
  __vbaObjSet(&local_30,uVar4);
  iVar3 = (**(code **)(*piVar2 + 0x74))(piVar2,&local_30,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&LAB_004133f8,0x74);
  }
  local_1c = 0;
  __vbaStrMove();
  iVar3 = (**(code **)(*piVar1 + 0x724))(piVar1,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413d78,0x724);
  }
  __vbaFreeStr();
  __vbaFreeObjList(4,&local_24,&local_28,&local_30,&local_2c);
  return;
}

/* ---- 0x454a30 (FUN_00454a30) [estimated] strings:  ---- */
void __cdecl FUN_00454a30(uint param_1,undefined2 *param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
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
  local_10 = &stack0xffffff98;
  local_c = &DAT_004025a8;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  if ((*param_3 & 2) != 0) {
    iVar2 = (**(code **)(*(int *)piVar5[0x1a] + 0x70))((int *)piVar5[0x1a],&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5[0x1a],&LAB_004133e8,0x70);
    }
    piVar1 = local_24;
    iVar2 = (**(code **)(*local_24 + 0x6c))(local_24,&local_28);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&LAB_004133f8,0x6c);
    }
    piVar1 = local_28;
    uVar3 = (**(code **)(*piVar5 + 0x338))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_1c,uVar3);
    iVar2 = (**(code **)(*piVar4 + 0x40))
                      (piVar4,CONCAT22((short)((uint)&local_20 >> 0x10),*param_2),&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_004182e4,0x40);
    }
    uVar3 = __vbaCastObj(local_20,&DAT_0041352c);
    __vbaObjSet(&local_2c,uVar3);
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,&local_2c,&local_30);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&LAB_00414248,0x28);
    }
    uVar3 = local_30;
    local_30 = 0;
    __vbaObjSet(&local_34,uVar3);
    (**(code **)(*piVar5 + 0x774))(piVar5,&local_34);
    __vbaFreeObjList(6,&local_1c,&local_24,&local_20,&local_2c,&local_28,&local_34);
  }
  return;
}

/* ---- 0x454bf0 (FUN_00454bf0) [estimated] strings:  ---- */
undefined4 FUN_00454bf0(uint param_1)

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
  local_c = &DAT_004025b8;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x454c60 (FUN_00454c60) [estimated] strings: SetFocus ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00454c60(uint param_1,undefined2 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  int **ppiVar7;
  int local_44 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  int *local_24 [2];
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff8c;
  local_c = &DAT_004025c0;
  local_8 = param_1 & 1;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar6 + 4))(piVar6);
  local_1c = (int *)0x0;
  local_24[0] = (int *)0x0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_44[1] = 0;
  local_44[0] = 0;
  if ((short)piVar6[0x23] == 0) {
    uVar2 = __vbaCastObj(0,&LAB_0041470c);
    __vbaObjSet(&local_2c,uVar2);
    local_44[1] = 0;
    local_3c = 0xffffffff;
    iVar3 = (**(code **)(*piVar6 + 0x730))(piVar6,piVar6 + 0x1b,&local_3c,local_44 + 1,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar6,&DAT_00413728,0x730);
    }
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar6 + 0x32c))(piVar6);
    piVar4 = (int *)__vbaObjSet(&local_2c,uVar2);
    iVar3 = (**(code **)(*piVar4 + 0x40))
                      (piVar4,CONCAT22((short)((uint)&local_30 >> 0x10),*param_2),&local_30);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_004182e4,0x40);
    }
    piVar4 = local_30;
    local_30 = (int *)0x0;
    __vbaObjSet(&local_1c,piVar4);
    __vbaFreeObj();
    iVar3 = (**(code **)(*(int *)piVar6[0x1b] + 0x44))((int *)piVar6[0x1b],&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar6[0x1b],&LAB_0041470c,0x44);
    }
    piVar4 = local_2c;
    iVar3 = (**(code **)(*local_2c + 0x6c))(local_2c,&local_30);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&LAB_004133f8,0x6c);
    }
    piVar4 = local_30;
    uVar2 = __vbaCastObj(local_1c,&DAT_0041352c);
    __vbaObjSet(&local_34,uVar2);
    iVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,&local_34,&local_38);
    pcVar5 = __vbaHresultCheckObj_exref;
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&LAB_00414248,0x2c);
    }
    uVar2 = __vbaCastObj(local_34,&DAT_0041807c);
    __vbaObjSet(&local_1c,uVar2);
    uVar2 = local_38;
    local_38 = 0;
    __vbaObjSet(local_24,uVar2);
    __vbaFreeObjList(3,&local_2c,&local_34,&local_30);
    iVar3 = (**(code **)(*local_1c + 0xf0))(local_1c,&local_3c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&DAT_0041807c,0xf0);
    }
    if ((short)local_3c == 0) {
      piVar4 = (int *)piVar6[0x1b];
      ppiVar7 = &local_2c;
      iVar3 = (**(code **)(*piVar4 + 0x3c))(piVar4,ppiVar7);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar6[0x1b],&LAB_0041470c,0x3c);
      }
      piVar1 = local_2c;
      __vbaStrCopy(piVar4,ppiVar7);
      iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,local_24,&local_28,&local_30);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_00414ba4,0x1c);
      }
      __vbaFreeStr();
      __vbaFreeObjList(2,&local_2c,&local_30);
      pcVar5 = __vbaHresultCheckObj_exref;
    }
    if ((short)piVar6[0x23] == 0) {
      iVar3 = *piVar6;
      uVar2 = __vbaCastObj(0,&DAT_00417d44);
      uVar2 = __vbaObjSet(&local_2c,uVar2);
      (**(code **)(iVar3 + 0x788))(piVar6,uVar2);
      __vbaFreeObj();
      pcVar5 = __vbaHresultCheckObj_exref;
    }
    iVar3 = (**(code **)(*local_24[0] + 0x54))(local_24[0],local_44);
    if (iVar3 < 0) {
      (*pcVar5)(iVar3,local_24[0],&DAT_00414268,0x54);
    }
    if (local_44[0] != 2) {
      iVar3 = (**(code **)(*local_24[0] + 0x68))(local_24[0],&local_2c);
      if (iVar3 < 0) {
        (*pcVar5)(iVar3,local_24[0],&DAT_00414268,0x68);
      }
      __vbaLateMemCall(local_2c,L"SetFocus",0);
      __vbaFreeObj();
    }
  }
  local_8 = 0;
  __vbaFreeObj(&LAB_00454fcb);
  __vbaFreeObj();
  return;
}

/* ---- 0x454ff0 (FUN_00454ff0) [estimated] strings:  ---- */
undefined4 FUN_00454ff0(uint param_1)

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
  local_c = &DAT_004025d0;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar1 + 0x768))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x455060 (FUN_00455060) [estimated] strings:  ---- */
undefined4 FUN_00455060(uint param_1)

{
  short sVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_004025d8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  sVar1 = __vbaObjIs(piVar2[0x1b],0);
  if (sVar1 == 0) {
    (**(code **)(*piVar2 + 0x76c))(piVar2);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4550e0 (FUN_004550e0) [estimated] strings:  ---- */
undefined4 FUN_004550e0(uint param_1)

{
  short sVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_004025e0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  sVar1 = __vbaObjIs(piVar2[0x1b],0);
  if (sVar1 == 0) {
    (**(code **)(*piVar2 + 0x76c))(piVar2);
    (**(code **)(*piVar2 + 0x770))(piVar2);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x455170 (FUN_00455170) [estimated] strings:  ---- */
undefined4 FUN_00455170(uint param_1)

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
  local_c = &DAT_004025e8;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  sVar1 = __vbaObjIs(piVar3[0x1b],0);
  if (sVar1 == 0) {
    iVar2 = (**(code **)(*(int *)piVar3[0x1b] + 0x58))((int *)piVar3[0x1b]);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3[0x1b],&LAB_0041470c,0x58);
    }
    (**(code **)(*piVar3 + 0x770))(piVar3);
  }
  local_8 = 0;
  (**(code **)(*piVar3 + 8))(piVar3);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x455220 (FUN_00455220) [estimated] strings:  ---- */
void __cdecl FUN_00455220(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [4];
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
  local_10 = &stack0xffffffa8;
  local_c = &DAT_004025f0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  piVar6 = piVar5 + 0x1b;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_38 = 0;
  local_3c = 0;
  sVar1 = __vbaObjIs(piVar5[0x1b],0);
  if (sVar1 == 0) {
    uVar2 = __vbaCastObj(0,&LAB_0041470c);
    __vbaObjSet(&local_20,uVar2);
    local_3c = 0xffffffff;
    local_38 = 0xffffffff;
    piVar4 = piVar5;
    piVar9 = piVar6;
    iVar3 = (**(code **)(*piVar5 + 0x730))(piVar5,piVar6,&local_38,&local_3c,&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_00413728,0x730);
    }
    __vbaFreeObj();
    __vbaStrCopy(piVar4,piVar9);
    iVar3 = (**(code **)(*(int *)piVar5[0x1a] + 0x74))
                      ((int *)piVar5[0x1a],&local_1c,piVar6,&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5[0x1a],&LAB_004133e8,0x74);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    uVar7 = 0;
    uVar2 = (**(code **)(*piVar5 + 0x358))(piVar5,7,0,&DAT_00417d34);
    uVar2 = __vbaObjSet(&local_20,uVar2);
    uVar2 = __vbaLateIdCallLd(local_34,uVar2);
    uVar2 = __vbaCastObjVar(uVar2,uVar7);
    piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
    piVar6 = piVar4;
    iVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00417d34,0x2c);
    }
    __vbaFreeObjList(2,&local_20,&local_24);
    __vbaFreeVar(piVar6);
    puVar8 = &local_38;
    local_38 = 0;
    piVar6 = piVar5;
    iVar3 = (**(code **)(*piVar5 + 0x72c))(piVar5,puVar8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_00413728,0x72c);
    }
    __vbaStrCopy(piVar6,puVar8);
    (**(code **)(*piVar5 + 0x77c))(piVar5,&local_1c);
    __vbaFreeStr();
  }
  return;
}

/* ---- 0x455440 (FUN_00455440) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00455440(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uVar7;
  int local_40 [5];
  undefined4 local_2c;
  int *local_28;
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
  local_10 = &stack0xffffff98;
  local_c = &DAT_00402600;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  uVar7 = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_40[1] = 0;
  local_40[0] = 0;
  uVar1 = (**(code **)(*piVar5 + 0x358))(piVar5,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_28,uVar1);
  uVar1 = __vbaLateIdCallLd(local_40 + 1,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar7);
  piVar2 = (int *)__vbaObjSet(&local_2c,uVar1);
  piVar4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,local_40);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x1c);
  }
  bVar6 = local_40[0] != 0;
  __vbaFreeObjList(2,&local_28,&local_2c);
  __vbaFreeVar(piVar4);
  if (bVar6) {
    iVar3 = (**(code **)(*(int *)piVar5[0x1a] + 0x6c))((int *)piVar5[0x1a],&local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5[0x1a],&LAB_004133e8,0x6c);
    }
    piVar4 = local_28;
    iVar3 = (**(code **)(*(int *)piVar5[0x1c] + 0x24))((int *)piVar5[0x1c],&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5[0x1c],&LAB_0041470c,0x24);
    }
    local_20 = 0;
    __vbaStrMove();
    iVar3 = (**(code **)(*piVar4 + 0x28))(piVar4,&local_24,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_004146fc,0x28);
    }
    local_1c = __vbaObjIs(0,local_2c);
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_28,&local_2c);
    iVar3 = (**(code **)(*(int *)piVar5[0x1a] + 0x6c))((int *)piVar5[0x1a],&local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5[0x1a],&LAB_004133e8,0x6c);
    }
    piVar4 = local_28;
    iVar3 = (**(code **)(*local_28 + 0x48))(local_28,piVar5 + 0x1b,piVar5 + 0x1c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_004146fc,0x48);
    }
    __vbaFreeObj();
    iVar3 = *piVar5;
    uVar1 = __vbaCastObj(0,&DAT_00417d44);
    uVar1 = __vbaObjSet(&local_28,uVar1);
    (**(code **)(iVar3 + 0x788))(piVar5,uVar1);
    __vbaFreeObj();
    (**(code **)(*piVar5 + 0x76c))(piVar5);
    if ((short)local_1c == 0) {
      uVar1 = (**(code **)(*piVar5 + 0x33c))(piVar5);
      piVar4 = (int *)__vbaObjSet(&local_28,uVar1);
      iVar3 = (**(code **)(*piVar4 + 0xa4))(piVar4,&DAT_00412f74);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar4,&DAT_00417a98,0xa4);
      }
      __vbaFreeObj();
    }
    uVar1 = (**(code **)(*piVar5 + 0x33c))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_28,uVar1);
    iVar3 = (**(code **)(*piVar4 + 0x204))(piVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00417a98,0x204);
    }
    __vbaFreeObj();
  }
  return;
}

/* ---- 0x455740 (FUN_00455740) [estimated] strings:  ---- */
void __cdecl FUN_00455740(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_38;
  undefined4 local_34 [4];
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
  local_10 = &stack0xffffffac;
  local_c = &DAT_00402610;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_34[0] = 0;
  local_38 = 0;
  iVar2 = (**(code **)(*(int *)piVar4[0x1a] + 0x70))((int *)piVar4[0x1a],&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4[0x1a],&LAB_004133e8,0x70);
  }
  piVar1 = local_20;
  iVar2 = (**(code **)(*local_20 + 0x6c))(local_20,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&LAB_004133f8,0x6c);
  }
  uVar3 = local_24;
  local_24 = 0;
  uVar3 = __vbaObjSet(local_34,uVar3);
  iVar2 = __vbaForEachCollObj(&DAT_00414268,&local_38,&local_1c,uVar3);
  __vbaFreeObj();
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*local_1c + 0x84))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414268,0x84);
    }
    iVar2 = __vbaNextEachCollObj(&DAT_00414268,&local_38,&local_1c);
  }
  uVar3 = __vbaCastObj(0,&LAB_00414228);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  __vbaObjSetAddref(piVar4 + 0x18,uVar3);
  __vbaFreeObj();
  uVar3 = __vbaCastObj(0,&LAB_004133e8);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  __vbaObjSetAddref(piVar4 + 0x1a,uVar3);
  __vbaFreeObj();
  uVar3 = __vbaCastObj(0,&LAB_0041470c);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  __vbaObjSetAddref(piVar4 + 0x1b,uVar3);
  __vbaFreeObj();
  uVar3 = __vbaCastObj(0,&LAB_0041470c);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  __vbaObjSetAddref(piVar4 + 0x1c,uVar3);
  __vbaFreeObj();
  uVar3 = __vbaCastObj(0,&LAB_0041470c);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  __vbaObjSetAddref(piVar4 + 0x22,uVar3);
  __vbaFreeObj();
  local_8 = 0;
  __vbaFreeObjList(2,local_34,&local_38,&LAB_0045594d);
  __vbaFreeObj();
  return;
}

/* ---- 0x455970 (FUN_00455970) [estimated] strings:  ---- */
void __cdecl FUN_00455970(uint param_1,undefined4 *param_2)

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
  local_c = &DAT_00402620;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  sVar1 = __vbaObjIs(piVar5[0x1a],0);
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
  __vbaObjSetAddref(piVar5 + 0x1a,*param_2);
  return;
}

/* ---- 0x455b00 (FUN_00455b00) [estimated] strings:  ---- */
void __cdecl FUN_00455b00(uint param_1,undefined4 *param_2)

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
  local_c = &DAT_00402630;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,piVar1[0x1a]);
  return;
}

/* ---- 0x455ba0 (FUN_00455ba0) [estimated] strings:  ---- */
undefined4 FUN_00455ba0(uint param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402640;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_1c = 0;
  (**(code **)(*piVar1 + 0x780))(piVar1,param_2,&local_1c);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x455c20 (FUN_00455c20) [estimated] strings:  ---- */
undefined4 FUN_00455c20(uint param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402648;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  piVar2 = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaStrCopy(piVar2);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))();
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x455ca0 (FUN_00455ca0) [estimated] strings:  ---- */
void __cdecl FUN_00455ca0(uint param_1,undefined4 *param_2)

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
  local_c = &DAT_00402650;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  *param_2 = 0;
  __vbaStrCopy(piVar1);
  return;
}

/* ---- 0x455d40 (FUN_00455d40) [estimated] strings:  ---- */
void __cdecl FUN_00455d40(uint param_1,undefined4 *param_2)

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
  local_c = &DAT_00402660;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  sVar1 = __vbaObjIs(piVar5[0x19],0);
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
  __vbaObjSetAddref(piVar5 + 0x19,*param_2);
  return;
}

/* ---- 0x455ed0 (FUN_00455ed0) [estimated] strings:  ---- */
void __cdecl FUN_00455ed0(uint param_1,undefined4 *param_2)

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
  local_c = &DAT_00402670;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  sVar1 = __vbaObjIs(piVar5[0x18],0);
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
  __vbaObjSetAddref(piVar5 + 0x18,*param_2);
  return;
}

/* ---- 0x456060 (FUN_00456060) [estimated] strings:  ---- */
void __cdecl FUN_00456060(uint param_1,undefined4 *param_2)

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
  local_c = &DAT_00402680;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,piVar1[0x18]);
  return;
}

/* ---- 0x456100 (FUN_00456100) [estimated] strings:  ---- */
void __cdecl FUN_00456100(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &LAB_00402690;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  uVar1 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_20,uVar1);
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  uVar1 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x730))(piVar3,&local_1c,&local_24,&local_28,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00413728,0x730);
  }
  __vbaFreeObjList(2,&local_1c,&local_20);
  return;
}

/* ---- 0x456210 (FUN_00456210) [estimated] strings:  ---- */
undefined4 FUN_00456210(uint param_1)

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
  local_c = &DAT_004026a0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x2a8))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_004136f8,0x2a8);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4562a0 (FUN_004562a0) [estimated] strings:  ---- */
undefined4 FUN_004562a0(uint param_1)

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
  local_c = &DAT_004026a8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x2b0))
                    (piVar2,10,local_24,0x80020004,local_1c,10,local_34,0x80020004,local_2c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_004136f8,0x2b0);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x456370 (FUN_00456370) [estimated] strings:  ---- */
undefined4 FUN_00456370(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_1c;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_004026b0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  iVar1 = (**(code **)(*piVar2 + 0x72c))(piVar2,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_00413728,0x72c);
  }
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x456400 (FUN_00456400) [estimated] strings:  ---- */
void __cdecl FUN_00456400(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_004026b8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  iVar3 = *piVar4;
  local_1c = 0;
  local_20 = 0;
  uVar1 = __vbaCastObj(0,&DAT_00417d44);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  (**(code **)(iVar3 + 0x788))(piVar4,uVar1);
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  uVar1 = (**(code **)(*DAT_0047f074 + 0x32c))(DAT_0047f074);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*(int *)piVar4[0x1a] + 0x4c))((int *)piVar4[0x1a],&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0x1a],&LAB_004133e8,0x4c);
  }
  iVar3 = (**(code **)(*piVar2 + 0x74))(piVar2,local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00415a1c,0x74);
  }
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  uVar1 = (**(code **)(*DAT_0047f074 + 0x330))(DAT_0047f074);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x74))(piVar2,0xffffffff);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00415a1c,0x74);
  }
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  uVar1 = (**(code **)(*DAT_0047f074 + 0x334))(DAT_0047f074);
  piVar2 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar3 = (**(code **)(*(int *)piVar4[0x1a] + 0x4c))((int *)piVar4[0x1a],&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0x1a],&LAB_004133e8,0x4c);
  }
  iVar3 = (**(code **)(*piVar2 + 0x74))(piVar2,local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00415a1c,0x74);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x456600 (FUN_00456600) [estimated] strings:  ---- */
void __cdecl FUN_00456600(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
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
  local_10 = &stack0xffffffc0;
  local_c = &DAT_004026c8;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  uVar1 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_1c,uVar1);
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  iVar2 = (**(code **)(*piVar3 + 0x730))(piVar3,piVar3 + 0x1b,&local_20,&local_24,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00413728,0x730);
  }
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  uVar1 = (**(code **)(*DAT_0047f074 + 0x32c))(DAT_0047f074);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x74))(piVar3,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x74);
  }
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  uVar1 = (**(code **)(*DAT_0047f074 + 0x330))(DAT_0047f074);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x74))(piVar3,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x74);
  }
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  uVar1 = (**(code **)(*DAT_0047f074 + 0x334))(DAT_0047f074);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x74))(piVar3,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00415a1c,0x74);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x4567f0 (FUN_004567f0) [estimated] strings:  ---- */
/* WARNING: Removing unreachable block (ram,0x00456dfe) */
/* WARNING: Removing unreachable block (ram,0x00456ef8) */
/* WARNING: Removing unreachable block (ram,0x00456f0a) */
/* WARNING: Removing unreachable block (ram,0x00456f2a) */
/* WARNING: Removing unreachable block (ram,0x00456f3c) */
/* WARNING: Removing unreachable block (ram,0x00456f58) */
/* WARNING: Removing unreachable block (ram,0x00456f6a) */
/* WARNING: Removing unreachable block (ram,0x00456fe6) */
/* WARNING: Removing unreachable block (ram,0x00456fef) */
/* WARNING: Removing unreachable block (ram,0x00457001) */
/* WARNING: Removing unreachable block (ram,0x00457017) */
/* WARNING: Removing unreachable block (ram,0x00457029) */
/* WARNING: Removing unreachable block (ram,0x00456f7a) */
/* WARNING: Removing unreachable block (ram,0x00456f83) */
/* WARNING: Removing unreachable block (ram,0x00456f95) */
/* WARNING: Removing unreachable block (ram,0x00456fab) */
/* WARNING: Removing unreachable block (ram,0x00456fbd) */
/* WARNING: Removing unreachable block (ram,0x00456fe4) */
/* WARNING: Removing unreachable block (ram,0x00457050) */
/* WARNING: Removing unreachable block (ram,0x0045705f) */
/* WARNING: Removing unreachable block (ram,0x004570e6) */
/* WARNING: Removing unreachable block (ram,0x004570fb) */
/* WARNING: Removing unreachable block (ram,0x00457132) */
/* WARNING: Removing unreachable block (ram,0x00457147) */
/* WARNING: Removing unreachable block (ram,0x0045717b) */
/* WARNING: Removing unreachable block (ram,0x0045718d) */
/* WARNING: Removing unreachable block (ram,0x004571b2) */
/* WARNING: Removing unreachable block (ram,0x004571c4) */
/* WARNING: Removing unreachable block (ram,0x004571d8) */
/* WARNING: Removing unreachable block (ram,0x004571ea) */
/* WARNING: Removing unreachable block (ram,0x00457261) */
/* WARNING: Removing unreachable block (ram,0x00457276) */
/* WARNING: Removing unreachable block (ram,0x004572ad) */
/* WARNING: Removing unreachable block (ram,0x004572c2) */
/* WARNING: Removing unreachable block (ram,0x004572f6) */
/* WARNING: Removing unreachable block (ram,0x00457308) */
/* WARNING: Removing unreachable block (ram,0x00457345) */
/* WARNING: Removing unreachable block (ram,0x00457357) */
/* WARNING: Removing unreachable block (ram,0x0045736e) */
/* WARNING: Removing unreachable block (ram,0x004573ab) */
/* WARNING: Removing unreachable block (ram,0x004573c0) */
/* WARNING: Removing unreachable block (ram,0x004573d3) */
/* WARNING: Removing unreachable block (ram,0x004573e5) */
/* WARNING: Removing unreachable block (ram,0x004573f5) */
/* WARNING: Removing unreachable block (ram,0x0045744d) */
/* WARNING: Removing unreachable block (ram,0x0045745f) */
/* WARNING: Removing unreachable block (ram,0x00457472) */
/* WARNING: Removing unreachable block (ram,0x00457484) */
/* WARNING: Removing unreachable block (ram,0x004574a4) */
/* WARNING: Removing unreachable block (ram,0x0045751f) */
/* WARNING: Removing unreachable block (ram,0x0045750c) */
/* WARNING: Removing unreachable block (ram,0x00457525) */
/* WARNING: Removing unreachable block (ram,0x00457538) */
/* WARNING: Removing unreachable block (ram,0x00457546) */
/* WARNING: Removing unreachable block (ram,0x00457560) */
/* WARNING: Removing unreachable block (ram,0x00457597) */
/* WARNING: Removing unreachable block (ram,0x004575a5) */
/* WARNING: Removing unreachable block (ram,0x004575fd) */

void __cdecl FUN_004567f0(uint param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_98 [4];
  undefined4 local_88 [4];
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48;
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
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffec8;
  local_c = &DAT_004026d8;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))();
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_48 = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98[0] = 0;
  if (*param_3 == 2) {
    sVar1 = *param_2;
    sVar2 = __vbaI2I4();
    if (sVar1 == sVar2) {
      (**(code **)(*piVar5 + 0x358))();
      __vbaObjSet();
      __vbaLateIdCallLd();
      __vbaCastObjVar();
      piVar3 = (int *)__vbaObjSet();
      iVar4 = (**(code **)(*piVar3 + 0x60))();
      if (iVar4 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaFreeObjList();
      __vbaFreeVar();
      (**(code **)(*piVar5 + 0x358))();
      __vbaObjSet();
      __vbaLateIdCallLd();
      __vbaCastObjVar();
      piVar3 = (int *)__vbaObjSet();
      iVar4 = (**(code **)(*piVar3 + 0x44))();
      if (iVar4 < 0) {
        __vbaHresultCheckObj();
      }
      local_60 = 0xffffffff;
      local_78[0] = 1;
      local_50 = 1;
      local_68[0] = 3;
      local_58[0] = 2;
      FUN_00441030(local_88,local_58,local_68,local_78);
      (**(code **)(*piVar5 + 0x358))();
      __vbaObjSet();
      __vbaLateIdCallLd();
      __vbaCastObjVar();
      piVar3 = (int *)__vbaObjSet();
      iVar4 = (**(code **)(*piVar3 + 0x24))();
      if (iVar4 < 0) {
        __vbaHresultCheckObj();
      }
      local_2c = 0;
      __vbaVerifyVarObj();
      (**(code **)(*piVar5 + 0x358))();
      __vbaObjSet();
      __vbaLateIdStAd();
      __vbaFreeObjList();
      __vbaFreeVarList();
    }
    else {
      sVar2 = __vbaI2I4();
      if (sVar1 == sVar2) {
        (**(code **)(*piVar5 + 0x358))();
        __vbaObjSet();
        __vbaLateIdCallLd();
        __vbaCastObjVar();
        piVar3 = (int *)__vbaObjSet();
        iVar4 = (**(code **)(*piVar3 + 0x60))();
        if (iVar4 < 0) {
          __vbaHresultCheckObj();
        }
        __vbaFreeObjList();
        __vbaFreeVar();
        (**(code **)(*piVar5 + 0x358))();
        __vbaObjSet();
        __vbaLateIdCallLd();
        __vbaCastObjVar();
        piVar3 = (int *)__vbaObjSet();
        iVar4 = (**(code **)(*piVar3 + 0x1c))();
        if (iVar4 < 0) {
          __vbaHresultCheckObj();
        }
        (**(code **)(*piVar5 + 0x358))();
        __vbaObjSet();
        __vbaLateIdCallLd();
        __vbaCastObjVar();
        piVar3 = (int *)__vbaObjSet();
        iVar4 = (**(code **)(*piVar3 + 0x44))();
        if (iVar4 < 0) {
          __vbaHresultCheckObj();
        }
        local_70 = 1;
        local_78[0] = 3;
        local_68[0] = 3;
        local_60 = 0;
        local_88[0] = 1;
        FUN_00440ed0(local_98,local_68,local_78,local_88);
        (**(code **)(*piVar5 + 0x358))();
        __vbaObjSet();
        __vbaLateIdCallLd();
        __vbaCastObjVar();
        piVar3 = (int *)__vbaObjSet();
        iVar4 = (**(code **)(*piVar3 + 0x24))();
        if (iVar4 < 0) {
          __vbaHresultCheckObj();
        }
        local_34 = 0;
        __vbaVerifyVarObj();
        (**(code **)(*piVar5 + 0x358))();
        __vbaObjSet();
        __vbaLateIdStAd();
        __vbaFreeObjList();
        __vbaFreeVarList();
      }
    }
  }
  return;
}

/* ---- 0x456e10 (FUN_00456e10) [estimated] strings: Viewing ; Editing  ---- */
void __cdecl FUN_00456e10(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c [6];
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff58;
  local_c = &DAT_004026e8;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_2c = 0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = 0;
  local_48[0] = 0;
  local_6c[0] = 0;
  local_70 = 0;
  local_74 = 0;
  uVar1 = __vbaNew(&DAT_004063a4);
  uVar1 = __vbaObjSet(&local_34,uVar1);
  __vbaObjSetAddref(piVar5 + 0x1e,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaNew(&DAT_004077b8);
  uVar1 = __vbaObjSet(&local_34,uVar1);
  __vbaObjSetAddref(piVar5 + 0x1d,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaNew(&DAT_0040888c);
  uVar1 = __vbaObjSet(&local_34,uVar1);
  __vbaObjSetAddref(piVar5 + 0x1c,uVar1);
  __vbaFreeObj();
  iVar2 = (**(code **)(*(int *)piVar5[0x1a] + 0x70))((int *)piVar5[0x1a],&local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5[0x1a],&LAB_004133e8,0x70);
  }
  piVar3 = local_34;
  local_34 = (int *)0x0;
  __vbaObjSet(&local_38,piVar3);
  iVar2 = (**(code **)(*(int *)piVar5[0x1c] + 0x48))((int *)piVar5[0x1c],&local_38);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5[0x1c],&LAB_0041470c,0x48);
  }
  __vbaFreeObj();
  iVar2 = (**(code **)(*(int *)piVar5[0x1a] + 0x4c))((int *)piVar5[0x1a],local_6c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5[0x1a],&LAB_004133e8,0x4c);
  }
  iVar2 = *(int *)piVar5[0x1a];
  if ((short)local_6c[0] == 0) {
    iVar2 = (**(code **)(iVar2 + 0x58))((int *)piVar5[0x1a],&local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5[0x1a],&LAB_004133e8,0x58);
    }
    piVar3 = local_34;
    iVar2 = (**(code **)(*local_34 + 0x30))(local_34,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x30);
    }
    iVar2 = *piVar5;
    __vbaStrCat(local_2c,L"Viewing ");
    uVar1 = __vbaStrMove();
    iVar2 = (**(code **)(iVar2 + 0x54))(piVar5,uVar1);
  }
  else {
    iVar2 = (**(code **)(iVar2 + 0x58))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5[0x1a],&LAB_004133e8,0x58);
    }
    piVar3 = local_34;
    iVar2 = (**(code **)(*local_34 + 0x30))(local_34,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x30);
    }
    iVar2 = *piVar5;
    __vbaStrCat(local_2c,L"Editing ");
    uVar1 = __vbaStrMove();
    iVar2 = (**(code **)(iVar2 + 0x54))(piVar5,uVar1);
  }
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_004136f8,0x54);
  }
  __vbaFreeStrList(2,&local_2c,&local_30);
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x358))(piVar5,0x80010006,0);
  uVar1 = __vbaObjSet(&local_34,uVar1);
  uVar1 = __vbaLateIdCallLd(local_48,uVar1);
  __vbaR4Var(uVar1);
  local_1c = __vbaFpI4();
  __vbaFreeObj();
  __vbaFreeVar(uVar1);
  uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x88))(piVar3,&local_70);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_0041804c,0x88);
  }
  local_20 = __vbaFpI4();
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x80))(piVar3,&local_70);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_0041804c,0x80);
  }
  local_24 = __vbaFpI4();
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x33c))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x78))(piVar3,&local_70);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417a98,0x78);
  }
  local_28 = __vbaFpI4();
  __vbaFreeObj();
  iVar2 = (**(code **)(*piVar5 + 0x8c))(piVar5,0x45a6e000);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_004136f8,0x8c);
  }
  iVar2 = (**(code **)(*piVar5 + 0x84))(piVar5,0x45d63800);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_004136f8,0x84);
  }
  fVar10 = (float)local_1c;
  uVar9 = 4;
  uVar8 = 0x80010006;
  piVar3 = piVar5;
  local_50 = fVar10;
  uVar1 = (**(code **)(*piVar5 + 0x358))(piVar5,0x80010006,4,local_54,fVar10,local_4c);
  uVar1 = __vbaObjSet(&local_34,uVar1);
  __vbaLateIdSt(uVar1,piVar3,uVar8,uVar9,local_54,fVar10);
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x8c))(piVar3,(float)local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_0041804c,0x8c);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x84))(piVar3,(float)local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_0041804c,0x84);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x33c))(piVar5);
  piVar3 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x7c))(piVar3,(float)local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417a98,0x7c);
  }
  __vbaFreeObj();
  uVar1 = (**(code **)(*piVar5 + 0x358))(piVar5,0x80010006,0);
  uVar1 = __vbaObjSet(&local_34,uVar1);
  __vbaLateIdCallLd(local_48,uVar1);
  iVar2 = (**(code **)(*piVar5 + 0x88))(piVar5,&local_70);
  uVar6 = 0;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_004136f8,0x88);
  }
  puVar7 = local_48;
  __vbaR4Var(puVar7);
  if ((uVar6 & 0xd) == 0) {
    iVar2 = __vbaFpI4();
    piVar5[0xf] = iVar2;
    __vbaFreeObj();
    __vbaFreeVar(puVar7);
    piVar3 = piVar5;
    uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_34,uVar1);
    iVar2 = (**(code **)(*piVar4 + 0x88))(piVar4,&local_74);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_0041804c,0x88);
    }
    iVar2 = (**(code **)(*piVar5 + 0x88))(piVar5,&local_70);
    uVar6 = 0;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5,&DAT_004136f8,0x88);
    }
    if ((uVar6 & 0xd) == 0) {
      iVar2 = __vbaFpI4();
      piVar5[0x10] = iVar2;
      __vbaFreeObj();
      uVar1 = (**(code **)(*piVar5 + 0x358))(piVar5,0x80010005,0);
      uVar1 = __vbaObjSet(&local_34,uVar1);
      __vbaLateIdCallLd(local_48,uVar1);
      uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
      piVar4 = (int *)__vbaObjSet(&local_38,uVar1);
      iVar2 = (**(code **)(*piVar4 + 0x80))(piVar4,&local_74);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_0041804c,0x80);
      }
      iVar2 = (**(code **)(*piVar5 + 0x80))(piVar5,&local_70);
      uVar6 = 0;
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_004136f8,0x80);
      }
      __vbaR4Var(local_48);
      if ((uVar6 & 0xd) == 0) {
        iVar2 = __vbaFpI4();
        piVar5[0x11] = iVar2;
        __vbaFreeObjList(2,&local_34,&local_38);
        __vbaFreeVar(piVar3);
        uVar8 = 0;
        uVar1 = (**(code **)(*piVar5 + 0x358))(piVar5,0x80010005,0);
        uVar1 = __vbaObjSet(&local_34,uVar1);
        __vbaLateIdCallLd(local_48,uVar1);
        uVar1 = (**(code **)(*piVar5 + 0x33c))(piVar5);
        piVar3 = (int *)__vbaObjSet(&local_38,uVar1);
        iVar2 = (**(code **)(*piVar3 + 0x78))(piVar3,&local_74);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417a98,0x78);
        }
        iVar2 = (**(code **)(*piVar5 + 0x80))(piVar5,&local_70);
        uVar6 = 0;
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar5,&DAT_004136f8,0x80);
        }
        __vbaR4Var(local_48);
        if ((uVar6 & 0xd) == 0) {
          iVar2 = __vbaFpI4();
          piVar5[0x12] = iVar2;
          __vbaFreeObjList(2,&local_34,&local_38);
          __vbaFreeVar(uVar8);
          local_6c[0] = 0;
          iVar2 = (**(code **)(*piVar5 + 0x72c))(piVar5,local_6c);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,piVar5,&DAT_00413728,0x72c);
          }
          return;
        }
      }
    }
  }
  __vbaFPException();
  return;
}

/* ---- 0x457610 (FUN_00457610) [estimated] strings:  ---- */
void __cdecl FUN_00457610(uint param_1,undefined2 *param_2,short *param_3)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_004026f8;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  piVar1 = piVar5 + 0x24;
  local_1c = 0;
  sVar2 = __vbaObjIs(piVar5[0x24],0);
  if (sVar2 == 0) {
    iVar3 = (**(code **)(*(int *)*piVar1 + 0x724))((int *)*piVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,*piVar1,&DAT_00413728,0x724);
    }
    uVar4 = __vbaCastObj(0,&DAT_00413728);
    uVar4 = __vbaObjSet(&local_1c,uVar4);
    __vbaObjSetAddref(piVar1,uVar4);
    __vbaFreeObj();
  }
  if (*param_3 != 1 && *param_3 != 4) {
    iVar3 = (**(code **)(*piVar5 + 0x2b4))(piVar5);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_004136f8,0x2b4);
    }
    *param_2 = 0xffff;
  }
  return;
}

/* ---- 0x457740 (FUN_00457740) [estimated] strings:  ---- */
void __cdecl FUN_00457740(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *extraout_EDX;
  undefined4 *puVar5;
  code *pcVar6;
  int *piVar7;
  ushort uVar8;
  float10 fVar9;
  undefined4 uVar10;
  int *piVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *local_f0 [2];
  int *local_e8;
  short local_e4;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc [6];
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  double local_40;
  undefined4 local_38 [2];
  double local_30;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffeb0;
  local_c = &DAT_00402718;
  local_8 = param_1 & 1;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar7 + 4))(piVar7);
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_cc[0] = 0;
  local_d0 = 0.0;
  local_d4 = 0.0;
  local_f0[0] = (int *)0x0;
  iVar1 = (**(code **)(*piVar7 + 0x88))(piVar7,&local_d0);
  uVar8 = 0;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar7,&DAT_004136f8,0x88);
  }
  local_58[0] = 1;
  local_40 = (double)CONCAT44(local_40._4_4_,1);
  local_48[0] = 2;
  local_30 = (double)(local_d0 - (float)piVar7[0xf]);
  if ((uVar8 & 0xd) == 0) {
    local_38[0] = 5;
    FUN_00441030(local_68,local_38,local_48,local_58);
    fVar9 = (float10)__vbaR4Var(local_68);
    fVar12 = (float)fVar9;
    uVar13 = 0x80010006;
    uVar14 = 4;
    piVar4 = piVar7;
    uVar3 = local_b4;
    local_b0 = fVar12;
    uVar2 = (**(code **)(*piVar7 + 0x358))(piVar7,0x80010006,4,local_b4,fVar12,local_ac);
    uVar2 = __vbaObjSet(&local_20,uVar2);
    __vbaLateIdSt(uVar2,piVar4,uVar13,uVar14,uVar3,fVar12);
    __vbaFreeObj();
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    uVar3 = (**(code **)(*piVar7 + 0x314))(piVar7);
    local_d8 = (int *)__vbaObjSet(&local_24,uVar3);
    iVar1 = *local_d8;
    uVar3 = (**(code **)(*piVar7 + 0x358))(piVar7,0x80010006,0);
    uVar3 = __vbaObjSet(&local_20,uVar3);
    uVar3 = __vbaLateIdCallLd(local_38,uVar3);
    fVar9 = (float10)__vbaR4Var(uVar3);
    piVar4 = local_d8;
    piVar11 = local_d8;
    iVar1 = (**(code **)(iVar1 + 0x8c))(local_d8,(float)fVar9);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00418668,0x8c);
    }
    __vbaFreeObjList(2,&local_20,&local_24);
    __vbaFreeVar(piVar11);
    iVar1 = (**(code **)(*piVar7 + 0x88))(piVar7,&local_d0);
    uVar8 = 0;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar7,&DAT_004136f8,0x88);
    }
    uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
    piVar4 = (int *)__vbaObjSet(&local_20,uVar3);
    local_58[0] = 1;
    local_40 = (double)CONCAT44(local_40._4_4_,1);
    local_30 = (double)(local_d0 - (float)piVar7[0x10]);
    if ((uVar8 & 0xd) == 0) {
      local_48[0] = 2;
      local_38[0] = 5;
      local_dc = piVar4;
      FUN_00441030(local_68,local_38,local_48,local_58);
      iVar1 = *piVar4;
      fVar9 = (float10)__vbaR4Var(local_68);
      piVar4 = local_dc;
      iVar1 = (**(code **)(iVar1 + 0x8c))(local_dc,(float)fVar9);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar4,&DAT_0041804c,0x8c);
      }
      __vbaFreeObj();
      __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
      iVar1 = (**(code **)(*piVar7 + 0x80))(piVar7,&local_d0);
      uVar8 = 0;
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,piVar7,&DAT_004136f8,0x80);
      }
      uVar3 = (**(code **)(*piVar7 + 0x358))(piVar7,0x80010005,0);
      uVar3 = __vbaObjSet(&local_20,uVar3);
      __vbaLateIdCallLd(local_38,uVar3);
      uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
      piVar4 = (int *)__vbaObjSet(&local_24,uVar3);
      local_68[0] = 1;
      local_50 = 1;
      local_58[0] = 2;
      local_dc = piVar4;
      fVar9 = (float10)__vbaR4Var(local_38);
      if ((uVar8 & 0xd) == 0) {
        local_48[0] = 5;
        local_40 = (double)(((float10)local_d0 - fVar9) - (float10)piVar7[0x11]);
        if ((uVar8 & 0xd) == 0) {
          FUN_00441030(local_78,local_48,local_58,local_68);
          iVar1 = *piVar4;
          fVar9 = (float10)__vbaR4Var(local_78);
          piVar4 = local_dc;
          iVar1 = (**(code **)(iVar1 + 0x84))(local_dc,(float)fVar9);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar4,&DAT_0041804c,0x84);
          }
          __vbaFreeObjList(2,&local_20,&local_24);
          __vbaFreeVarList(5,local_38,local_48,local_58,local_68,local_78);
          uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
          piVar4 = (int *)__vbaObjSet(&local_20,uVar3);
          iVar1 = (**(code **)(*piVar4 + 0x98))(piVar4,local_cc);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar4,&DAT_0041804c,0x98);
          }
          local_1c = local_cc[0];
          __vbaFreeObj();
          uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
          piVar4 = (int *)__vbaObjSet(&local_20,uVar3);
          iVar1 = (**(code **)(*piVar4 + 0x9c))(piVar4,0);
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar4,&DAT_0041804c,0x9c);
          }
          __vbaFreeObj();
          iVar1 = (**(code **)(*piVar7 + 0x80))(piVar7,&local_d0);
          uVar8 = 0;
          if (iVar1 < 0) {
            __vbaHresultCheckObj(iVar1,piVar7,&DAT_004136f8,0x80);
          }
          uVar3 = (**(code **)(*piVar7 + 0x358))(piVar7,0x80010005,0);
          uVar3 = __vbaObjSet(&local_20,uVar3);
          __vbaLateIdCallLd(local_38,uVar3);
          uVar3 = (**(code **)(*piVar7 + 0x33c))(piVar7);
          piVar4 = (int *)__vbaObjSet(&local_24,uVar3);
          local_68[0] = 1;
          local_50 = 1;
          local_58[0] = 2;
          local_dc = piVar4;
          fVar9 = (float10)__vbaR4Var(local_38);
          local_48[0] = 5;
          if (((uVar8 & 0xd) == 0) &&
             (local_40 = (double)(((float10)local_d0 - fVar9) - (float10)piVar7[0x12]),
             (uVar8 & 0xd) == 0)) {
            FUN_00441030(local_78,local_48,local_58,local_68);
            iVar1 = *piVar4;
            fVar9 = (float10)__vbaR4Var(local_78);
            piVar4 = local_dc;
            iVar1 = (**(code **)(iVar1 + 0x7c))(local_dc,(float)fVar9);
            pcVar6 = __vbaHresultCheckObj_exref;
            if (iVar1 < 0) {
              __vbaHresultCheckObj(iVar1,piVar4,&DAT_00417a98,0x7c);
            }
            __vbaFreeObjList(2,&local_20,&local_24);
            __vbaFreeVarList(5,local_38,local_48,local_58,local_68,local_78);
            uVar3 = (**(code **)(*piVar7 + 800))(piVar7);
            local_d8 = (int *)__vbaObjSet(&local_20,uVar3);
            iVar1 = (**(code **)(*local_d8 + 0x94))(local_d8,0);
            if (iVar1 < 0) {
              __vbaHresultCheckObj(iVar1,local_d8,&DAT_00417a98,0x94);
            }
            __vbaFreeObj();
            uVar3 = (**(code **)(*piVar7 + 0x324))(piVar7);
            __vbaObjSet(local_f0,uVar3);
            iVar1 = (**(code **)(*(int *)piVar7[0x1a] + 0x70))((int *)piVar7[0x1a],&local_20);
            if (iVar1 < 0) {
              __vbaHresultCheckObj(iVar1,piVar7[0x1a],&LAB_004133e8,0x70);
            }
            local_dc = local_20;
            iVar1 = (**(code **)(*local_20 + 0x34))(local_20,local_cc);
            if (iVar1 < 0) {
              __vbaHresultCheckObj(iVar1,local_dc,&LAB_004133f8,0x34);
            }
            local_e4 = (short)local_cc[0];
            __vbaFreeObj();
            if (local_e4 == 0) {
              iVar1 = (**(code **)(*local_f0[0] + 0x94))(local_f0[0],0);
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x94);
              }
            }
            else {
              iVar1 = (**(code **)(*local_f0[0] + 0x94))(local_f0[0],0xffffffff);
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x94);
              }
              uVar3 = (**(code **)(*piVar7 + 0x33c))(piVar7);
              local_d8 = (int *)__vbaObjSet(&local_20,uVar3);
              iVar1 = (**(code **)(*local_d8 + 0x78))(local_d8,&local_d0);
              uVar8 = 0;
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_d8,&DAT_00417a98,0x78);
              }
              if (DAT_0047f000 == 0) {
                fVar9 = (float10)local_d0 / (float10)2.0;
              }
              else {
                fVar9 = (float10)adj_fdiv_m32(0x40000000);
              }
              if ((uVar8 & 0xd) != 0) goto LAB_00458a0c;
              iVar1 = (**(code **)(*local_f0[0] + 0x7c))(local_f0[0],(float)fVar9);
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x7c);
              }
              __vbaFreeObj();
              iVar1 = (**(code **)(*local_f0[0] + 0x78))(local_f0[0],&local_d0);
              uVar8 = 0;
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x78);
              }
              if ((uVar8 & 0xd) != 0) goto LAB_00458a0c;
              iVar1 = (**(code **)(*local_f0[0] + 0x6c))(local_f0[0],local_d0 + 120.0);
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x6c);
              }
              uVar3 = (**(code **)(*piVar7 + 0x33c))(piVar7);
              local_dc = (int *)__vbaObjSet(&local_20,uVar3);
              iVar1 = (**(code **)(*local_f0[0] + 0x78))(local_f0[0],&local_d0);
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x78);
              }
              iVar1 = (**(code **)(*local_dc + 0x7c))(local_dc,local_d0);
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_dc,&DAT_00417a98,0x7c);
              }
              __vbaFreeObj();
              iVar1 = (**(code **)(*(int *)piVar7[0x1a] + 0x70))((int *)piVar7[0x1a],&local_20);
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,piVar7[0x1a],&LAB_004133e8,0x70);
              }
              local_dc = local_20;
              iVar1 = (**(code **)(*local_20 + 0x3c))(local_20,local_cc);
              if (iVar1 < 0) {
                __vbaHresultCheckObj(iVar1,local_dc,&LAB_004133f8,0x3c);
              }
              local_e4 = (short)local_cc[0];
              __vbaFreeObj();
              if (local_e4 != 0) {
                uVar3 = (**(code **)(*piVar7 + 800))(piVar7);
                local_d8 = (int *)__vbaObjSet(&local_20,uVar3);
                iVar1 = (**(code **)(*local_d8 + 0x94))(local_d8,0xffffffff);
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_d8,&DAT_00417a98,0x94);
                }
                __vbaFreeObj();
                uVar3 = (**(code **)(*piVar7 + 800))(piVar7);
                local_dc = (int *)__vbaObjSet(&local_20,uVar3);
                iVar1 = (**(code **)(*local_f0[0] + 0x68))(local_f0[0],&local_d0);
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x68);
                }
                iVar1 = (**(code **)(*local_dc + 0x6c))(local_dc,local_d0);
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_dc,&DAT_00417a98,0x6c);
                }
                __vbaFreeObj();
                iVar1 = (**(code **)(*local_f0[0] + 0x78))(local_f0[0],&local_d0);
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x78);
                }
                uVar3 = (**(code **)(*piVar7 + 800))(piVar7);
                local_dc = (int *)__vbaObjSet(&local_20,uVar3);
                iVar1 = (**(code **)(*local_dc + 0x78))(local_dc,&local_d4);
                uVar8 = 0;
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_dc,&DAT_00417a98,0x78);
                }
                local_58[0] = 1;
                local_40 = (double)CONCAT44(local_40._4_4_,1);
                local_30 = (double)CONCAT44(local_30._4_4_,local_d0 - local_d4);
                if ((uVar8 & 0xd) != 0) goto LAB_00458a0c;
                local_48[0] = 2;
                local_38[0] = 4;
                FUN_00441030(local_68,local_38,local_48,local_58);
                iVar1 = *local_f0[0];
                fVar9 = (float10)__vbaR4Var(local_68);
                iVar1 = (**(code **)(iVar1 + 0x7c))(local_f0[0],(float)fVar9);
                pcVar6 = __vbaHresultCheckObj_exref;
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x7c);
                }
                __vbaFreeObj();
                __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
                uVar3 = (**(code **)(*piVar7 + 800))(piVar7);
                local_d8 = (int *)__vbaObjSet(&local_20,uVar3);
                iVar1 = (**(code **)(*local_d8 + 0x78))(local_d8,&local_d4);
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_d8,&DAT_00417a98,0x78);
                }
                iVar1 = (**(code **)(*local_f0[0] + 0x68))(local_f0[0],&local_d0);
                uVar8 = 0;
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x68);
                }
                if ((uVar8 & 0xd) != 0) goto LAB_00458a0c;
                iVar1 = (**(code **)(*local_f0[0] + 0x6c))(local_f0[0],local_d4 + local_d0);
                if (iVar1 < 0) {
                  __vbaHresultCheckObj(iVar1,local_f0[0],&DAT_00417a98,0x6c);
                }
                __vbaFreeObj();
              }
            }
            __vbaObjSetAddref(local_f0,0);
            uVar3 = (**(code **)(*piVar7 + 0x328))(piVar7);
            local_e0 = (int *)__vbaObjSet(&local_24,uVar3);
            uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
            local_d8 = (int *)__vbaObjSet(&local_20,uVar3);
            iVar1 = (**(code **)(*local_d8 + 0x80))(local_d8,&local_d0);
            if (iVar1 < 0) {
              (*pcVar6)(iVar1,local_d8,&DAT_0041804c,0x80);
            }
            iVar1 = (**(code **)(*local_e0 + 0x6c))(local_e0,local_d0);
            if (iVar1 < 0) {
              (*pcVar6)(iVar1,local_e0,&DAT_0041805c,0x6c);
            }
            __vbaFreeObjList(2,&local_20,&local_24);
            uVar3 = (**(code **)(*piVar7 + 0x328))(piVar7);
            local_d8 = (int *)__vbaObjSet(&local_24,uVar3);
            iVar1 = (**(code **)(*local_d8 + 0x70))(local_d8,&local_d4);
            if (iVar1 < 0) {
              (*pcVar6)(iVar1,local_d8,&DAT_0041805c,0x70);
            }
            uVar3 = (**(code **)(*piVar7 + 0x328))(piVar7);
            local_e8 = (int *)__vbaObjSet(&local_28,uVar3);
            uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
            local_e0 = (int *)__vbaObjSet(&local_20,uVar3);
            iVar1 = (**(code **)(*local_e0 + 0x88))(local_e0,&local_d0);
            uVar8 = 0;
            if (iVar1 < 0) {
              (*pcVar6)(iVar1,local_e0,&DAT_0041804c,0x88);
            }
            if ((uVar8 & 0xd) == 0) {
              iVar1 = (**(code **)(*local_e8 + 100))(local_e8,local_d0 - local_d4);
              if (iVar1 < 0) {
                (*pcVar6)(iVar1,local_e8,&DAT_0041805c,100);
              }
              __vbaFreeObjList(3,&local_20,&local_24,&local_28);
              uVar3 = (**(code **)(*piVar7 + 0x31c))(piVar7);
              local_d8 = (int *)__vbaObjSet(&local_20,uVar3);
              (**(code **)(*piVar7 + 0x758))(piVar7,local_cc);
              iVar1 = (**(code **)(*local_d8 + 100))(local_d8,(float)(int)(short)local_cc[0]);
              if (iVar1 < 0) {
                (*pcVar6)(iVar1,local_d8,&DAT_0041806c,100);
              }
              __vbaFreeObj();
              uVar3 = (**(code **)(*piVar7 + 0x31c))(piVar7);
              local_d8 = (int *)__vbaObjSet(&local_24,uVar3);
              iVar1 = (**(code **)(*local_d8 + 0x68))(local_d8,&local_d4);
              if (iVar1 < 0) {
                (*pcVar6)(iVar1,local_d8,&DAT_0041806c,0x68);
              }
              uVar3 = (**(code **)(*piVar7 + 0x31c))(piVar7);
              local_e8 = (int *)__vbaObjSet(&local_28,uVar3);
              uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
              local_e0 = (int *)__vbaObjSet(&local_20,uVar3);
              iVar1 = (**(code **)(*local_e0 + 0x80))(local_e0,&local_d0);
              uVar8 = 0;
              if (iVar1 < 0) {
                (*pcVar6)(iVar1,local_e0,&DAT_0041804c,0x80);
              }
              if ((uVar8 & 0xd) == 0) {
                iVar1 = (**(code **)(*local_e8 + 0x5c))(local_e8,local_d0 - local_d4);
                if (iVar1 < 0) {
                  (*pcVar6)(iVar1,local_e8,&DAT_0041806c,0x5c);
                }
                __vbaFreeObjList(3,&local_20,&local_24,&local_28);
                uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
                local_d8 = (int *)__vbaObjSet(&local_20,uVar3);
                iVar1 = (**(code **)(*local_d8 + 0x88))(local_d8,&local_d0);
                uVar8 = 0;
                if (iVar1 < 0) {
                  (*pcVar6)(iVar1,local_d8,&DAT_0041804c,0x88);
                }
                (**(code **)(*piVar7 + 0x758))(piVar7,local_cc);
                uVar3 = (**(code **)(*piVar7 + 0x31c))(piVar7);
                piVar4 = (int *)__vbaObjSet(&local_24,uVar3);
                local_58[0] = 1;
                local_30 = (double)CONCAT44(local_30._4_4_,1);
                local_48[0] = 4;
                local_40 = (double)CONCAT44(local_40._4_4_,local_d0 - (float)(int)(short)local_cc[0]
                                           );
                local_e0 = piVar4;
                if ((uVar8 & 0xd) == 0) {
                  local_38[0] = 2;
                  FUN_00441030(local_68,local_38,local_48,local_58);
                  iVar1 = *piVar4;
                  fVar9 = (float10)__vbaR4Var(local_68);
                  piVar4 = local_e0;
                  iVar1 = (**(code **)(iVar1 + 0x74))(local_e0,(float)fVar9);
                  if (iVar1 < 0) {
                    __vbaHresultCheckObj(iVar1,piVar4,&DAT_0041806c,0x74);
                  }
                  __vbaFreeObjList(2,&local_20,&local_24);
                  __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
                  uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
                  local_d8 = (int *)__vbaObjSet(&local_20,uVar3);
                  iVar1 = (**(code **)(*local_d8 + 0x80))(local_d8,&local_d0);
                  uVar8 = 0;
                  if (iVar1 < 0) {
                    __vbaHresultCheckObj(iVar1,local_d8,&DAT_0041804c,0x80);
                  }
                  puVar5 = local_58;
                  local_58[0] = 1;
                  local_30 = (double)CONCAT44(local_30._4_4_,1);
                  if (DAT_0047f000 == 0) {
                    fVar9 = ((float10)local_d0 - (float10)360.0) / (float10)2.0;
                  }
                  else {
                    fVar9 = (float10)adj_fdiv_m64(0,0x40000000);
                    puVar5 = extraout_EDX;
                  }
                  local_48[0] = 5;
                  local_38[0] = 2;
                  local_40 = (double)fVar9;
                  if ((uVar8 & 0xd) == 0) {
                    FUN_00441030(local_68,local_38,local_48,puVar5);
                    fVar9 = (float10)__vbaR4Var(local_68);
                    fVar12 = (float)fVar9;
                    uVar2 = 0x80010005;
                    uVar13 = 4;
                    piVar4 = piVar7;
                    local_b0 = fVar12;
                    uVar3 = (**(code **)(*piVar7 + 0x354))
                                      (piVar7,0x80010005,4,local_b4,fVar12,local_ac);
                    uVar3 = __vbaObjSet(&local_24,uVar3);
                    __vbaLateIdSt(uVar3,piVar4,uVar2,uVar13,local_b4,fVar12);
                    __vbaFreeObjList(2,&local_20,&local_24);
                    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
                    uVar3 = (**(code **)(*piVar7 + 0x354))(piVar7,0x80010005,0);
                    uVar3 = __vbaObjSet(&local_20,uVar3);
                    uVar3 = __vbaLateIdCallLd(local_38,uVar3);
                    fVar9 = (float10)__vbaR4Var(uVar3);
                    fVar12 = (float)fVar9;
                    uVar14 = 0x80010005;
                    uVar10 = 4;
                    piVar4 = piVar7;
                    uVar3 = local_84;
                    uVar2 = local_7c;
                    local_80 = fVar12;
                    uVar13 = (**(code **)(*piVar7 + 0x350))
                                       (piVar7,0x80010005,4,local_84,fVar12,local_7c);
                    uVar13 = __vbaObjSet(&local_24,uVar13);
                    __vbaLateIdSt(uVar13,piVar4,uVar14,uVar10,uVar3,fVar12);
                    __vbaFreeObjList(2,&local_20,&local_24);
                    __vbaFreeVar(uVar2);
                    uVar3 = (**(code **)(*piVar7 + 0x354))(piVar7,0x80010005,0);
                    uVar3 = __vbaObjSet(&local_20,uVar3);
                    uVar3 = __vbaLateIdCallLd(local_38,uVar3);
                    fVar9 = (float10)__vbaR4Var(uVar3);
                    fVar12 = (float)(fVar9 + (float10)240.0);
                    local_80 = fVar12;
                    if ((uVar8 & 0xd) == 0) {
                      uVar2 = 0x80010003;
                      uVar13 = 4;
                      piVar4 = piVar7;
                      uVar3 = (**(code **)(*piVar7 + 0x350))
                                        (piVar7,0x80010003,4,local_84,fVar12,local_7c);
                      uVar3 = __vbaObjSet(&local_24,uVar3);
                      __vbaLateIdSt(uVar3,piVar4,uVar2,uVar13,local_84,fVar12);
                      __vbaFreeObjList(2,&local_20,&local_24);
                      __vbaFreeVar(local_7c);
                      uVar3 = (**(code **)(*piVar7 + 0x340))(piVar7);
                      local_d8 = (int *)__vbaObjSet(&local_24,uVar3);
                      iVar1 = *local_d8;
                      uVar3 = (**(code **)(*piVar7 + 0x350))(piVar7,0x80010003,0);
                      uVar3 = __vbaObjSet(&local_20,uVar3);
                      uVar3 = __vbaLateIdCallLd(local_38,uVar3);
                      fVar9 = (float10)__vbaR4Var(uVar3);
                      piVar4 = local_d8;
                      piVar11 = local_d8;
                      iVar1 = (**(code **)(iVar1 + 0x74))(local_d8,(float)fVar9);
                      if (iVar1 < 0) {
                        __vbaHresultCheckObj(iVar1,piVar4,&DAT_004182f8,0x74);
                      }
                      __vbaFreeObjList(2,&local_20,&local_24);
                      __vbaFreeVar(piVar11);
                      (**(code **)(*piVar7 + 0x75c))(piVar7);
                      uVar3 = (**(code **)(*piVar7 + 0x318))(piVar7);
                      piVar7 = (int *)__vbaObjSet(&local_20,uVar3);
                      iVar1 = (**(code **)(*piVar7 + 0x9c))(piVar7,local_1c);
                      if (iVar1 < 0) {
                        __vbaHresultCheckObj(iVar1,piVar7,&DAT_0041804c,0x9c);
                      }
                      __vbaFreeObj();
                      local_8 = 0;
                      __vbaFreeObj(&LAB_004589ed);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00458a0c:
  __vbaFPException();
  return;
}

/* ---- 0x458a20 (FUN_00458a20) [estimated] strings:  ---- */
void __cdecl FUN_00458a20(uint param_1,undefined2 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
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
  local_10 = &stack0xffffff9c;
  local_c = &DAT_00402728;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  iVar3 = (**(code **)(*(int *)piVar5[0x1a] + 0x70))((int *)piVar5[0x1a],&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5[0x1a],&LAB_004133e8,0x70);
  }
  piVar2 = local_2c;
  uVar4 = (**(code **)(*piVar5 + 0x348))(piVar5);
  piVar5 = (int *)__vbaObjSet(&local_24,uVar4);
  iVar3 = (**(code **)(*piVar5 + 0x40))
                    (piVar5,CONCAT22((short)((uint)&local_28 >> 0x10),*param_2),&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5,&DAT_004182e4,0x40);
  }
  uVar4 = __vbaCastObj(local_28,&DAT_0041352c);
  __vbaObjSet(&local_30,uVar4);
  iVar3 = (**(code **)(*piVar2 + 0x74))(piVar2,&local_30,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&LAB_004133f8,0x74);
  }
  local_1c = 0;
  __vbaStrMove();
  iVar3 = (**(code **)(*piVar1 + 0x724))(piVar1,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413d78,0x724);
  }
  __vbaFreeStr();
  __vbaFreeObjList(4,&local_24,&local_28,&local_30,&local_2c);
  return;
}

/* ---- 0x458bf0 (FUN_00458bf0) [estimated] strings:  ---- */
void __cdecl FUN_00458bf0(uint param_1,undefined2 *param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
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
  local_10 = &stack0xffffff98;
  local_c = &DAT_00402738;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  if ((*param_3 & 2) != 0) {
    iVar2 = (**(code **)(*(int *)piVar5[0x1a] + 0x70))((int *)piVar5[0x1a],&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5[0x1a],&LAB_004133e8,0x70);
    }
    piVar1 = local_24;
    iVar2 = (**(code **)(*local_24 + 0x6c))(local_24,&local_28);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&LAB_004133f8,0x6c);
    }
    piVar1 = local_28;
    uVar3 = (**(code **)(*piVar5 + 0x348))(piVar5);
    piVar4 = (int *)__vbaObjSet(&local_1c,uVar3);
    iVar2 = (**(code **)(*piVar4 + 0x40))
                      (piVar4,CONCAT22((short)((uint)&local_20 >> 0x10),*param_2),&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_004182e4,0x40);
    }
    uVar3 = __vbaCastObj(local_20,&DAT_0041352c);
    __vbaObjSet(&local_2c,uVar3);
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,&local_2c,&local_30);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&LAB_00414248,0x28);
    }
    uVar3 = local_30;
    local_30 = 0;
    __vbaObjSet(&local_34,uVar3);
    (**(code **)(*piVar5 + 0x774))(piVar5,&local_34);
    __vbaFreeObjList(6,&local_1c,&local_24,&local_20,&local_2c,&local_28,&local_34);
  }
  return;
}

/* ---- 0x458db0 (FUN_00458db0) [estimated] strings:  ---- */
void __cdecl FUN_00458db0(uint param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_58;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [4];
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
  local_10 = &stack0xffffff78;
  local_c = &DAT_00402748;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  uVar5 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_58 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x358))(piVar4,0xd,0,&DAT_00417d44);
  uVar1 = __vbaObjSet(&local_24,uVar1);
  uVar1 = __vbaLateIdCallLd(local_44,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar5);
  piVar2 = (int *)__vbaObjSet(&local_28,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2,&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d44,0x4c);
  }
  iVar3 = (**(code **)(*(int *)piVar4[0x1a] + 0x6c))((int *)piVar4[0x1a],&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0x1a],&LAB_004133e8,0x6c);
  }
  local_4c = local_20;
  piVar2 = local_2c;
  local_20 = 0;
  local_54[0] = 8;
  iVar3 = (**(code **)(*local_2c + 0x24))(local_2c,local_54,&local_30);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_004146fc,0x24);
  }
  uVar1 = local_30;
  local_30 = 0;
  __vbaObjSet(&local_34,uVar1);
  (**(code **)(*piVar4 + 0x764))(piVar4,&local_34,param_3,&local_58);
  *param_2 = (undefined2)local_58;
  __vbaFreeObjList(4,&local_24,&local_28,&local_2c,&local_34);
  __vbaFreeVarList(2,local_44,local_54);
  local_8 = 0;
  __vbaFreeObj(&LAB_00458f70);
  return;
}

/* ---- 0x458f90 (FUN_00458f90) [estimated] strings:  ---- */
void __cdecl FUN_00458f90(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
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
  local_10 = &stack0xffffffbc;
  local_c = &DAT_00402758;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  __vbaObjSetAddref(&local_1c,param_2);
  uVar1 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_20,uVar1);
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  iVar2 = (**(code **)(*piVar3 + 0x730))(piVar3,piVar3 + 0x1b,&local_24,&local_28,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00413728,0x730);
  }
  __vbaFreeObj();
  if ((short)piVar3[0x23] == 0) {
    iVar2 = *piVar3;
    uVar1 = __vbaObjSetAddref(&local_20,local_1c);
    (**(code **)(iVar2 + 0x788))(piVar3,uVar1);
    __vbaFreeObj();
  }
  local_8 = 0;
  __vbaFreeObj(&LAB_00459090);
  return;
}

/* ---- 0x4590b0 (FUN_004590b0) [estimated] strings:  ---- */
undefined4 FUN_004590b0(uint param_1)

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
  local_c = &DAT_00402768;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  __vbaObjSetAddref(piVar1 + 0x22,piVar1[0x1b]);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x459130 (FUN_00459130) [estimated] strings:  ---- */
void __cdecl FUN_00459130(uint param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [4];
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff40;
  local_c = &DAT_00402770;
  local_8 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar8 + 4))(piVar8);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_90[0] = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c = 0;
  local_90[1] = 0;
  iVar3 = (**(code **)(*(int *)piVar8[0x1a] + 0x70))((int *)piVar8[0x1a],&local_20);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar8[0x1a],&LAB_004133e8,0x70);
  }
  piVar2 = local_20;
  iVar3 = (**(code **)(*local_20 + 0x24))(local_20,local_90);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&LAB_004133f8,0x24);
  }
  uVar11 = 0;
  puVar10 = &DAT_00417d44;
  uVar9 = 0;
  uVar4 = (**(code **)(*piVar8 + 0x358))(piVar8,0xd,0,&DAT_00417d44,0);
  uVar4 = __vbaObjSet(&local_24,uVar4);
  uVar4 = __vbaLateIdCallLd(local_3c,uVar4);
  uVar4 = __vbaCastObjVar(uVar4,uVar9);
  uVar4 = __vbaObjSet(&local_28,uVar4);
  uVar5 = __vbaObjIs(uVar4,puVar10);
  bVar1 = *param_2;
  uVar7 = local_90[0] >> 1;
  __vbaFreeObjList(3,&local_20,&local_24,&local_28);
  __vbaFreeVar(uVar11);
  if (((byte)(~uVar5 >> 1) & bVar1 >> 1 & (byte)uVar7 & 1) != 0) {
    iVar3 = (**(code **)(*(int *)piVar8[0x1a] + 0x6c))((int *)piVar8[0x1a],&local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar8[0x1a],&LAB_004133e8,0x6c);
    }
    piVar2 = local_28;
    uVar9 = 0;
    uVar4 = (**(code **)(*piVar8 + 0x358))(piVar8,0xd,0,&DAT_00417d44);
    uVar4 = __vbaObjSet(&local_20,uVar4);
    uVar4 = __vbaLateIdCallLd(local_3c,uVar4);
    uVar4 = __vbaCastObjVar(uVar4,uVar9);
    piVar6 = (int *)__vbaObjSet(&local_24,uVar4);
    iVar3 = (**(code **)(*piVar6 + 0x4c))(piVar6,&local_1c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar6,&DAT_00417d44,0x4c);
    }
    local_44 = local_1c;
    local_1c = 0;
    local_4c[0] = 8;
    iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,local_4c,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004146fc,0x24);
    }
    __vbaObjSetAddref(piVar8 + 0x21,local_2c);
    __vbaFreeObjList(4,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeVarList(2,local_3c,local_4c);
    iVar3 = (**(code **)(*piVar8 + 0x2a8))(piVar8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar8,&DAT_004136f8,0x2a8);
    }
    local_54 = 0x80020004;
    local_5c = 10;
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    iVar3 = *piVar8;
    uVar4 = (**(code **)(*DAT_0047f074 + 0x388))
                      (DAT_0047f074,local_5c,local_58,local_54,local_50,10,local_68,0x80020004,
                       local_60,10,local_78,0x80020004,local_70,10,local_90[2],0x80020004,local_80);
    uVar4 = __vbaObjSet(&local_20,uVar4);
    iVar3 = (**(code **)(iVar3 + 700))(piVar8,uVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar8,&DAT_004136f8,700);
    }
    __vbaFreeObj();
  }
  return;
}

/* ---- 0x4594f0 (FUN_004594f0) [estimated] strings:  ---- */
void __cdecl FUN_004594f0(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 local_3c;
  undefined4 local_38 [4];
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
  local_10 = &stack0xffffffa4;
  local_c = &DAT_00402780;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  uVar8 = 0;
  puVar7 = &DAT_00417d44;
  uVar6 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_3c = 0;
  uVar2 = (**(code **)(*piVar5 + 0x354))(piVar5,0xd,0,&DAT_00417d44,0);
  uVar2 = __vbaObjSet(&local_24,uVar2);
  uVar2 = __vbaLateIdCallLd(local_38,uVar2);
  uVar2 = __vbaCastObjVar(uVar2,uVar6);
  uVar2 = __vbaObjSet(&local_28,uVar2);
  sVar1 = __vbaObjIs(uVar2,puVar7);
  __vbaFreeObjList(2,&local_24,&local_28);
  __vbaFreeVar(uVar8);
  if (sVar1 != -1) {
    puVar7 = &DAT_00417d44;
    uVar6 = 0;
    uVar2 = (**(code **)(*piVar5 + 0x354))(piVar5,0xd,0,&DAT_00417d44);
    uVar2 = __vbaObjSet(&local_24,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    uVar2 = __vbaCastObjVar(uVar2,uVar6);
    piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x24))(piVar3,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00417d44,0x24);
    }
    local_1c = 0;
    __vbaStrMove();
    (**(code **)(*piVar5 + 0x780))(piVar5,&local_20,&local_3c);
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_24,&local_28);
    __vbaFreeVar(puVar7);
  }
  return;
}

/* ---- 0x4596b0 (FUN_004596b0) [estimated] strings:  ---- */
void __cdecl FUN_004596b0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00402790;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar2 + 0x354))(piVar2);
  __vbaObjSet(&local_20,uVar1);
  uVar1 = local_20;
  local_20 = 0;
  __vbaObjSet(&local_1c,uVar1);
  (**(code **)(*piVar2 + 0x778))(piVar2,&local_1c,param_2);
  __vbaFreeObjList(2,&local_1c,&local_20);
  return;
}

/* ---- 0x459780 (FUN_00459780) [anchored] strings: Invalid CrossRef tag; CTPEditor.frmEditingEntriesAndFields ---- */
void __cdecl FUN_00459780(uint param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 local_d0;
  undefined4 local_cc [3];
  int *local_c0;
  undefined4 local_9c;
  wchar_t *local_94;
  undefined4 local_8c;
  wchar_t *local_84;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
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
  local_10 = &stack0xffffff08;
  local_c = &DAT_004027a0;
  local_8 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar8 + 4))(piVar8);
  uVar12 = 0;
  puVar11 = &DAT_00417d44;
  uVar10 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_8c = 0;
  local_9c = 0;
  local_cc[0] = 0;
  local_d0 = 0;
  uVar3 = (**(code **)(*piVar8 + 0x350))(piVar8,0xd,0,&DAT_00417d44,0);
  uVar3 = __vbaObjSet(&local_38,uVar3);
  uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar10);
  uVar3 = __vbaObjSet(&local_3c,uVar3);
  uVar1 = __vbaObjIs(uVar3,puVar11);
  local_c0 = (int *)CONCAT22(local_c0._2_2_,uVar1);
  __vbaFreeObjList(2,&local_38,&local_3c);
  __vbaFreeVar(uVar12);
  if ((short)local_c0 == 0) {
    uVar10 = 0;
    uVar3 = (**(code **)(*piVar8 + 0x350))(piVar8,0xd,0,&DAT_00417d44);
    uVar3 = __vbaObjSet(&local_38,uVar3);
    uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
    uVar3 = __vbaCastObjVar(uVar3,uVar10);
    piVar4 = (int *)__vbaObjSet(&local_3c,uVar3);
    puVar9 = &local_2c;
    local_c0 = piVar4;
    iVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,puVar9);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_c0,&DAT_00417d44,0x24);
    }
    __vbaStrCopy(piVar4,puVar9);
    local_2c = 0;
    __vbaStrMove();
    puVar9 = &local_30;
    FUN_00441680(puVar9,&local_34);
    __vbaStrMove();
    __vbaFreeStrList(2,&local_30,&local_34);
    __vbaFreeObjList(2,&local_38,&local_3c);
    __vbaFreeVar(puVar9);
    uVar10 = 0;
    uVar3 = (**(code **)(*piVar8 + 0x350))(piVar8,0xd,0,&DAT_00417d44);
    uVar3 = __vbaObjSet(&local_38,uVar3);
    uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
    uVar3 = __vbaCastObjVar(uVar3,uVar10);
    piVar6 = (int *)__vbaObjSet(&local_3c,uVar3);
    puVar9 = &local_2c;
    piVar4 = piVar6;
    iVar5 = (**(code **)(*piVar6 + 0x24))(piVar6,puVar9);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417d44,0x24);
    }
    __vbaStrCopy(piVar4,puVar9);
    local_2c = 0;
    __vbaStrMove();
    puVar9 = &local_30;
    FUN_00441760((undefined *)puVar9,&local_34);
    __vbaStrMove();
    __vbaFreeStrList(2,&local_30,&local_34);
    __vbaFreeObjList(2,&local_38,&local_3c);
    __vbaFreeVar(puVar9);
    iVar5 = (**(code **)(*(int *)piVar8[0x1a] + 0x70))((int *)piVar8[0x1a],&local_38);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8[0x1a],&LAB_004133e8,0x70);
    }
    piVar8 = local_38;
    iVar5 = (**(code **)(*local_38 + 0x68))(local_38,&local_3c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8,&LAB_004133f8,0x68);
    }
    uVar3 = local_3c;
    pcVar7 = __vbaObjSet_exref;
    local_3c = 0;
    uVar3 = __vbaObjSet(local_cc,uVar3);
    iVar5 = __vbaForEachCollObj(&DAT_00413cf8,&local_d0,&local_28,uVar3);
    __vbaFreeObj();
    while (iVar5 != 0) {
      iVar5 = (**(code **)(*local_28 + 0x2c))(local_28,&local_2c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_28,&DAT_00413cf8,0x2c);
      }
      iVar5 = __vbaStrCmp(local_24,local_2c);
      __vbaFreeStr();
      if (iVar5 == 0) {
        iVar5 = (**(code **)(*local_28 + 0x24))(local_28,&local_38);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,local_28,&DAT_00413cf8,0x24);
        }
        piVar8 = local_38;
        local_38 = (int *)0x0;
        __vbaObjSet(&local_20,piVar8);
      }
      iVar5 = __vbaNextEachCollObj(&DAT_00413cf8,&local_d0,&local_28);
    }
    sVar2 = __vbaObjIs(local_20,0);
    if (sVar2 != 0) {
      uVar3 = rtcErrObj();
      piVar8 = (int *)__vbaObjSet(&local_38,uVar3);
      local_74 = 0x80020004;
      local_64 = 0x80020004;
      local_7c[0] = 10;
      local_6c[0] = 10;
      local_94 = L"Invalid CrossRef tag";
      local_9c = 8;
      __vbaVarDup();
      local_84 = L"CTPEditor.frmEditingEntriesAndFields";
      local_8c = 8;
      __vbaVarDup();
      iVar5 = (**(code **)(*piVar8 + 0x44))(piVar8,0x413,local_4c,local_5c,local_6c,local_7c);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar8,&DAT_00413af4,0x44);
      }
      __vbaFreeObj();
      __vbaFreeVarList(4,local_4c,local_5c,local_6c,local_7c);
      pcVar7 = __vbaObjSet_exref;
    }
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar8 = DAT_0047f074;
    uVar3 = __vbaCastObj(0,&DAT_0041462c);
    (*pcVar7)(&local_38,uVar3);
    iVar5 = (**(code **)(*piVar8 + 0x714))(piVar8,&local_20,&local_1c,&local_38);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8,&DAT_00413d78,0x714);
    }
    __vbaFreeObj();
  }
  local_8 = 0;
  __vbaFreeObjList(2,local_cc,&local_d0,&LAB_00459ccb);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}

/* ---- 0x459cf0 (FUN_00459cf0) [estimated] strings:  ---- */
void __cdecl FUN_00459cf0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_004027b0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar2 + 0x350))(piVar2);
  __vbaObjSet(&local_20,uVar1);
  uVar1 = local_20;
  local_20 = 0;
  __vbaObjSet(&local_1c,uVar1);
  (**(code **)(*piVar2 + 0x778))(piVar2,&local_1c,param_2);
  __vbaFreeObjList(2,&local_1c,&local_20);
  return;
}

/* ---- 0x459dc0 (FUN_00459dc0) [estimated] strings:  ---- */
undefined4 FUN_00459dc0(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_004027c0;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  *(undefined2 *)(piVar1 + 0x13) = 0xffff;
  __vbaVarMove();
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x459e50 (FUN_00459e50) [estimated] strings:  ---- */
void __cdecl FUN_00459e50(uint param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ushort uVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 *puVar13;
  undefined4 local_5c;
  float local_58 [5];
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff08;
  local_c = &DAT_004027c8;
  local_8 = param_1 & 1;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar6 + 4))(piVar6);
  *(undefined2 *)(piVar6 + 0x13) = 0;
  local_3c = *param_4;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_58[0] = 0.0;
  local_5c = 0;
  local_44 = 4;
  uVar2 = __vbaVarSub(local_34,piVar6 + 0x14,&local_44);
  local_1c = __vbaI4Var(uVar2);
  uVar2 = (**(code **)(*piVar6 + 0x358))(piVar6,0x80010005,0);
  uVar2 = __vbaObjSet(&local_20,uVar2);
  __vbaLateIdCallLd(local_34,uVar2);
  iVar3 = (**(code **)(*piVar6 + 0x80))(piVar6,local_58);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar6,&DAT_004136f8,0x80);
  }
  uVar2 = (**(code **)(*piVar6 + 0x318))(piVar6);
  piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
  iVar3 = (**(code **)(*piVar4 + 0x70))(piVar4,&local_5c);
  uVar7 = 0;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041804c,0x70);
  }
  iVar3 = local_1c;
  puVar13 = local_34;
  __vbaR4Var(puVar13);
  if ((uVar7 & 0xd) == 0) {
    fVar8 = (float10)__vbaFpR8();
    iVar1 = local_1c;
    fVar9 = (float10)__vbaFpR8();
    uVar7 = 0;
    __vbaFreeObjList(2,&local_20,&local_24);
    __vbaFreeVar(puVar13);
    if (fVar9 <= (float10)iVar1 || (float10)iVar3 <= fVar8) {
      return;
    }
    uVar2 = (**(code **)(*piVar6 + 0x358))(piVar6,0x80010005,0);
    uVar2 = __vbaObjSet(&local_20,uVar2);
    uVar2 = __vbaLateIdCallLd(local_34,uVar2);
    fVar8 = (float10)__vbaR4Var(uVar2);
    fVar12 = (float)(fVar8 + (float10)local_1c);
    local_3c = fVar12;
    if ((uVar7 & 0xd) == 0) {
      local_44 = 4;
      uVar10 = 0x80010005;
      uVar11 = 4;
      piVar4 = piVar6;
      uVar2 = (**(code **)(*piVar6 + 0x358))(piVar6,0x80010005,4,local_40,fVar12,local_38);
      uVar2 = __vbaObjSet(&local_24,uVar2);
      __vbaLateIdSt(uVar2,piVar4,uVar10,uVar11,local_40,fVar12);
      __vbaFreeObjList(2,&local_20,&local_24);
      __vbaFreeVar(local_38);
      uVar2 = (**(code **)(*piVar6 + 0x314))(piVar6);
      piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
      uVar2 = (**(code **)(*piVar6 + 0x314))(piVar6);
      piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
      iVar3 = (**(code **)(*piVar5 + 0x70))(piVar5,local_58);
      uVar7 = 0;
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar5,&DAT_00418668,0x70);
      }
      if ((uVar7 & 0xd) == 0) {
        iVar3 = (**(code **)(*piVar4 + 0x74))(piVar4,local_58[0] + (float)local_1c);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418668,0x74);
        }
        __vbaFreeObjList(2,&local_20,&local_24);
        uVar2 = (**(code **)(*piVar6 + 0x318))(piVar6);
        piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
        uVar2 = (**(code **)(*piVar6 + 0x318))(piVar6);
        piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
        iVar3 = (**(code **)(*piVar5 + 0x70))(piVar5,local_58);
        uVar7 = 0;
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar5,&DAT_0041804c,0x70);
        }
        if ((uVar7 & 0xd) == 0) {
          iVar3 = (**(code **)(*piVar4 + 0x74))(piVar4,local_58[0] + (float)local_1c);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar4,&DAT_0041804c,0x74);
          }
          __vbaFreeObjList(2,&local_20,&local_24);
          uVar2 = (**(code **)(*piVar6 + 0x30c))(piVar6);
          piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
          uVar2 = (**(code **)(*piVar6 + 0x30c))(piVar6);
          piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
          iVar3 = (**(code **)(*piVar5 + 0x68))(piVar5,local_58);
          uVar7 = 0;
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar5,&DAT_00418260,0x68);
          }
          if ((uVar7 & 0xd) == 0) {
            iVar3 = (**(code **)(*piVar4 + 0x6c))(piVar4,local_58[0] + (float)local_1c);
            if (iVar3 < 0) {
              __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418260,0x6c);
            }
            __vbaFreeObjList(2,&local_20,&local_24);
            uVar2 = (**(code **)(*piVar6 + 0x310))(piVar6);
            piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
            uVar2 = (**(code **)(*piVar6 + 0x310))(piVar6);
            piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
            iVar3 = (**(code **)(*piVar5 + 0x68))(piVar5,local_58);
            uVar7 = 0;
            if (iVar3 < 0) {
              __vbaHresultCheckObj(iVar3,piVar5,&DAT_00418260,0x68);
            }
            if ((uVar7 & 0xd) == 0) {
              iVar3 = (**(code **)(*piVar4 + 0x6c))(piVar4,local_58[0] + (float)local_1c);
              if (iVar3 < 0) {
                __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418260,0x6c);
              }
              __vbaFreeObjList(2,&local_20,&local_24);
              uVar2 = (**(code **)(*piVar6 + 0x308))(piVar6);
              piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
              uVar2 = (**(code **)(*piVar6 + 0x308))(piVar6);
              piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
              iVar3 = (**(code **)(*piVar5 + 0x68))(piVar5,local_58);
              uVar7 = 0;
              if (iVar3 < 0) {
                __vbaHresultCheckObj(iVar3,piVar5,&DAT_00418260,0x68);
              }
              if ((uVar7 & 0xd) == 0) {
                iVar3 = (**(code **)(*piVar4 + 0x6c))(piVar4,local_58[0] + (float)local_1c);
                if (iVar3 < 0) {
                  __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418260,0x6c);
                }
                __vbaFreeObjList(2,&local_20,&local_24);
                uVar2 = (**(code **)(*piVar6 + 0x300))(piVar6);
                piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
                uVar2 = (**(code **)(*piVar6 + 0x300))(piVar6);
                piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
                iVar3 = (**(code **)(*piVar5 + 0x68))(piVar5,local_58);
                uVar7 = 0;
                if (iVar3 < 0) {
                  __vbaHresultCheckObj(iVar3,piVar5,&DAT_00418260,0x68);
                }
                if ((uVar7 & 0xd) == 0) {
                  iVar3 = (**(code **)(*piVar4 + 0x6c))(piVar4,local_58[0] + (float)local_1c);
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418260,0x6c);
                  }
                  __vbaFreeObjList(2,&local_20,&local_24);
                  uVar2 = (**(code **)(*piVar6 + 0x304))(piVar6);
                  piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
                  uVar2 = (**(code **)(*piVar6 + 0x304))(piVar6);
                  piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
                  iVar3 = (**(code **)(*piVar5 + 0x68))(piVar5,local_58);
                  uVar7 = 0;
                  if (iVar3 < 0) {
                    __vbaHresultCheckObj(iVar3,piVar5,&DAT_00418260,0x68);
                  }
                  if ((uVar7 & 0xd) == 0) {
                    iVar3 = (**(code **)(*piVar4 + 0x6c))(piVar4,local_58[0] + (float)local_1c);
                    if (iVar3 < 0) {
                      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418260,0x6c);
                    }
                    __vbaFreeObjList(2,&local_20,&local_24);
                    uVar2 = (**(code **)(*piVar6 + 0x2fc))(piVar6);
                    piVar4 = (int *)__vbaObjSet(&local_24,uVar2);
                    uVar2 = (**(code **)(*piVar6 + 0x2fc))(piVar6);
                    piVar5 = (int *)__vbaObjSet(&local_20,uVar2);
                    iVar3 = (**(code **)(*piVar5 + 0x68))(piVar5,local_58);
                    uVar7 = 0;
                    if (iVar3 < 0) {
                      __vbaHresultCheckObj(iVar3,piVar5,&DAT_00418260,0x68);
                    }
                    if ((uVar7 & 0xd) == 0) {
                      iVar3 = (**(code **)(*piVar4 + 0x6c))(piVar4,local_58[0] + (float)local_1c);
                      if (iVar3 < 0) {
                        __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418260,0x6c);
                      }
                      __vbaFreeObjList(2,&local_20,&local_24);
                      iVar3 = (**(code **)(*piVar6 + 0x800))(piVar6);
                      if (-1 < iVar3) {
                        return;
                      }
                      __vbaHresultCheckObj(iVar3,piVar6,&DAT_00413728,0x800);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __vbaFPException();
  return;
}

/* ---- 0x45a600 (FUN_0045a600) [estimated] strings:  ---- */
undefined4 FUN_0045a600(uint param_1)

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
  local_c = &DAT_004027d8;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar1 + 0x75c))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45a670 (FUN_0045a670) [estimated] strings:  ---- */
undefined4 FUN_0045a670(uint param_1)

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
  local_c = &DAT_004027e0;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar1 + 0x75c))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45a6e0 (FUN_0045a6e0) [estimated] strings:  ---- */
undefined4 FUN_0045a6e0(uint param_1)

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
  local_c = &DAT_004027e8;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar1 + 0x75c))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45a750 (FUN_0045a750) [estimated] strings:  ---- */
undefined4 FUN_0045a750(uint param_1)

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
  local_c = &DAT_004027f0;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar1 + 0x75c))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45a7c0 (FUN_0045a7c0) [estimated] strings:  ---- */
undefined4 FUN_0045a7c0(uint param_1)

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
  local_c = &DAT_004027f8;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45a830 (FUN_0045a830) [estimated] strings:  ---- */
void __cdecl FUN_0045a830(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
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
  local_10 = &stack0xffffffb4;
  local_c = &DAT_00402800;
  local_8 = param_1 & 1;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar6 + 4))(piVar6);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  uVar2 = (**(code **)(*piVar6 + 0x33c))(piVar6);
  piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_1c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00417a98,0xa0);
  }
  local_1c = 0;
  __vbaStrMove();
  piVar3 = piVar6 + 0x1b;
  (**(code **)(*piVar6 + 0x764))(piVar6,piVar3,&local_20,&local_28);
  sVar1 = (short)local_28;
  __vbaFreeStr();
  __vbaFreeObj();
  if (sVar1 != 0) {
    uVar2 = (**(code **)(*piVar6 + 0x33c))(piVar6);
    piVar5 = (int *)__vbaObjSet(&local_24,uVar2);
    iVar4 = (**(code **)(*(int *)*piVar3 + 0x24))((int *)*piVar3,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,*piVar3,&LAB_0041470c,0x24);
    }
    iVar4 = (**(code **)(*piVar5 + 0xa4))(piVar5,local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00417a98,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar6 + 0x33c))(piVar6);
    piVar3 = (int *)__vbaObjSet(&local_24,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x204))(piVar3);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00417a98,0x204);
    }
    __vbaFreeObj();
  }
  return;
}

/* ---- 0x45aa00 (FUN_0045aa00) [estimated] strings:  ---- */
void __cdecl FUN_0045aa00(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
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
  local_10 = &stack0xffffff58;
  local_c = &DAT_00402810;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  *param_4 = 0;
  iVar1 = __vbaLenBstr(*param_3);
  if (iVar1 == 0) {
    local_48 = 0x80020004;
    local_50[0] = 10;
    local_40[0] = 10;
    local_30[0] = 10;
    local_38 = 0x80020004;
    local_28 = 0x80020004;
    __vbaObjSetAddref(&local_20,*param_2);
    local_58 = &local_20;
    local_60[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_60,local_30,local_40,local_50);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_20,&DAT_0041352c);
    __vbaObjSet(param_2,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_30,local_40,local_50);
  }
  else {
    local_68 = param_3;
    local_40[0] = 10;
    local_30[0] = 10;
    local_38 = 0x80020004;
    local_28 = 0x80020004;
    local_70[0] = 0x4008;
    __vbaObjSetAddref(&local_20,*param_2);
    local_58 = &local_20;
    local_60[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_60,local_70,local_30,local_40);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_20,&DAT_0041352c);
    __vbaObjSet(param_2,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_30,local_40);
  }
  __vbaObjSetAddref(&local_1c,*param_2);
  return;
}

/* ---- 0x45ac20 (FUN_0045ac20) [estimated] strings:  ---- */
void __cdecl FUN_0045ac20(int *param_1,undefined4 param_2,undefined4 *param_3)

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
  local_c = &DAT_00402820;
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
  uVar2 = __vbaCastObjVar(local_2c,&DAT_0041352c);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeVar(piVar3);
  return;
}

/* ---- 0x45ad00 (FUN_0045ad00) [estimated] strings:  ---- */
undefined4 FUN_0045ad00(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00402830;
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

/* ---- 0x45ad90 (FUN_0045ad90) [estimated] strings:  ---- */
undefined4 FUN_0045ad90(int *param_1,undefined4 param_2)

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
  local_c = &DAT_00402838;
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

/* ---- 0x45ae10 (FUN_0045ae10) [estimated] strings:  ---- */
void __cdecl FUN_0045ae10(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00402840;
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

/* ---- 0x45aef0 (FUN_0045aef0) [estimated] strings:  ---- */
void __cdecl FUN_0045aef0(uint param_1)

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
  local_c = &DAT_00402850;
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

/* ---- 0x45afa0 (FUN_0045afa0) [estimated] strings:  ---- */
void __cdecl FUN_0045afa0(uint param_1)

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
  local_c = &DAT_00402860;
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

/* ---- 0x45b050 (FUN_0045b050) [estimated] strings:  ---- */
void __cdecl FUN_0045b050(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_00402870;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x20))(*(int **)(param_1 + 0x3c),0xffffffff);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*(undefined4 *)(param_1 + 0x3c),&DAT_00415640,0x20);
  }
  if (DAT_00480244 == (int *)0x0) {
    __vbaNew2(&DAT_00413b34,&DAT_00480244);
  }
  piVar1 = DAT_00480244;
  iVar2 = *DAT_00480244;
  uVar3 = __vbaObjSetAddref(&local_18,param_1);
  iVar2 = (**(code **)(iVar2 + 0x10))(piVar1,uVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413b24,0x10);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x45b120 (FUN_0045b120) [estimated] strings:  ---- */
undefined4 FUN_0045b120(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402880;
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

/* ---- 0x45b1b0 (FUN_0045b1b0) [estimated] strings: Locate default version of  ---- */
void __cdecl FUN_0045b1b0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  int *local_30;
  undefined4 local_2c;
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
  local_c = &stack0xffffff94;
  local_8 = &DAT_00402888;
  local_18 = 0;
  piVar1 = (int *)*param_2;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_38[0] = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,local_38);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x30);
  }
  iVar2 = __vbaInStr(0,&DAT_0041439c /* bstr: '_' */,local_38[0],1);
  __vbaFreeStr();
  if (iVar2 == 0) {
    sVar4 = -1;
    pcVar5 = __vbaStrMove_exref;
  }
  else {
    piVar1 = (int *)*param_2;
    puVar7 = local_38;
    piVar6 = piVar1;
    iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,puVar7);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x30);
    }
    __vbaStrCopy(piVar6,puVar7);
    pcVar5 = __vbaStrMove_exref;
    local_38[0] = 0;
    __vbaStrMove();
    FUN_00441760((undefined *)&local_3c,&local_40);
    __vbaStrMove();
    __vbaFreeStrList(2,&local_3c,&local_40);
    piVar1 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,local_38);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x34);
    }
    local_38[0] = 0;
    __vbaStrMove();
    iVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x24))
                      (*(int **)(param_1 + 0x38),&local_24,&local_18,&local_44);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,*(undefined4 *)(param_1 + 0x38),&DAT_004146ac,0x24);
    }
    sVar4 = (short)local_44;
  }
  uVar3 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&local_20,uVar3);
  if (sVar4 == 0) {
    iVar2 = (**(code **)(*local_20 + 0x50))(local_20,local_24,&local_18,param_1 + 0x38);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_0041462c,0x50);
    }
  }
  else {
    puVar7 = local_38;
    piVar1 = (int *)*param_2;
    piVar6 = piVar1;
    iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,puVar7);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x30);
    }
    __vbaStrCopy(piVar6,puVar7);
    __vbaStrCat(local_38[0],L"Locate default version of ");
    (*pcVar5)();
    iVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x2c))
                      (*(int **)(param_1 + 0x38),&local_20,&local_3c,&local_40,&local_24,&local_44);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,*(undefined4 *)(param_1 + 0x38),&DAT_004146ac,0x2c);
    }
    uVar3 = local_44;
    __vbaFreeStrList(3,local_38,&local_3c,&local_40);
    if ((short)uVar3 != 0) {
      local_1c = 0xffffffff;
      goto LAB_0045b4a5;
    }
  }
  uVar3 = __vbaNew(&DAT_00408318);
  __vbaObjSet(&local_30,uVar3);
  iVar2 = (**(code **)(*local_30 + 0x5c))(local_30,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_30,&DAT_00414258,0x5c);
  }
  local_44 = 0;
  iVar2 = (**(code **)(*local_30 + 100))(local_30,param_2,&local_44);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_30,&DAT_00414258,100);
  }
LAB_0045b4a5:
  __vbaFreeStr(&LAB_0045b4cb);
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}
