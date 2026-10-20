/* Object #5 Entry -- ESTIMATED function range; public methods per VB header: FieldInstances, GLEntry, Structure, Structure, SameAs, ReadFromFile */
#include "ghidra_types.h"

/* ---- 0x42aee0 (FUN_0042aee0) [estimated] strings:  ---- */
void __cdecl FUN_0042aee0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401658;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x13]);
  return;
}

/* ---- 0x42af70 (FUN_0042af70) [estimated] strings:  ---- */
void __cdecl FUN_0042af70(int *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 local_3c [4];
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
  local_10 = &stack0xffffff9c;
  local_c = &DAT_00401668;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  *param_2 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_40 = 0;
  iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x70))((int *)param_1[0x14],&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x14],&LAB_004133f8,0x70);
  }
  uVar3 = local_24;
  local_24 = 0;
  __vbaObjSet(&local_28,uVar3);
  iVar2 = (**(code **)(*(int *)param_1[0x13] + 0x2c))((int *)param_1[0x13],&local_28,&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x13],&DAT_00414ba4,0x2c);
  }
  uVar3 = local_2c;
  local_2c = 0;
  __vbaObjSet(&local_20,uVar3);
  __vbaFreeObj();
  local_40 = 0;
  iVar2 = (**(code **)(*local_20 + 0x38))(local_20,&local_40);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x38);
  }
  piVar4 = local_20;
  iVar2 = (**(code **)(*local_20 + 0x30))(local_20,local_3c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x30);
  }
  sVar1 = rtcIsObject(local_3c);
  __vbaFreeVar(piVar4);
  if (sVar1 != 0) {
    puVar5 = local_3c;
    iVar2 = (**(code **)(*local_20 + 0x30))(local_20,puVar5);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x30);
    }
    uVar3 = __vbaCastObjVar(local_3c,&LAB_0041470c);
    __vbaObjSet(&local_1c,uVar3);
    __vbaFreeVar(puVar5);
  }
  __vbaFreeObj(&LAB_0042b124);
  return;
}

/* ---- 0x42b150 (FUN_0042b150) [estimated] strings:  ---- */
void __cdecl FUN_0042b150(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401678;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x14]);
  return;
}

/* ---- 0x42b1e0 (FUN_0042b1e0) [estimated] strings:  ---- */
void __cdecl FUN_0042b1e0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401688;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  sVar1 = __vbaObjIs(param_1[0x14],0);
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
  __vbaObjSetAddref(param_1 + 0x14,*param_2);
  return;
}

/* ---- 0x42b360 (FUN_0042b360) [estimated] strings:  ---- */
void __cdecl FUN_0042b360(int *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38 [3];
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
  local_10 = &stack0xffffffa4;
  local_c = &DAT_00401698;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_38[0] = (int *)0x0;
  local_3c = 0;
  local_40 = 0;
  __vbaObjSetAddref(local_38,*param_2);
  iVar2 = (**(code **)(*local_38[0] + 0x24))(local_38[0],&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_38[0],&LAB_0041470c,0x24);
  }
  iVar2 = __vbaStrCmp(local_24,param_1[0x10]);
  __vbaFreeStr();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*local_38[0] + 0x2c))(local_38[0],&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_38[0],&LAB_0041470c,0x2c);
    }
    iVar2 = __vbaStrCmp(local_24,param_1[0x11]);
    __vbaFreeStr();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*local_38[0] + 0x34))(local_38[0],&local_24);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_38[0],&LAB_0041470c,0x34);
      }
      iVar2 = __vbaStrCmp(local_24,param_1[0x12]);
      __vbaFreeStr();
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x6c))((int *)param_1[0x14],&local_28);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,param_1[0x14],&LAB_004133f8,0x6c);
        }
        uVar3 = local_28;
        local_28 = 0;
        uVar3 = __vbaObjSet(&local_3c,uVar3);
        iVar2 = __vbaForEachCollObj(&DAT_00414268,&local_40,&local_1c,uVar3);
        while (iVar2 != 0) {
          __vbaObjSetAddref(&local_28,param_1);
          iVar2 = (**(code **)(*local_1c + 0x7c))(local_1c,&local_28,param_2,&local_2c);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414268,0x7c);
          }
          sVar1 = (short)local_2c;
          __vbaFreeObj();
          if (sVar1 != -1) goto LAB_0042b56c;
          iVar2 = __vbaNextEachCollObj(&DAT_00414268,&local_40,&local_1c);
        }
        __vbaObjSetAddref(local_38,0);
        local_20 = 0xffffffff;
      }
    }
  }
LAB_0042b56c:
  __vbaFreeObjList(3,local_38,&local_3c,&local_40,&LAB_0042b5a7);
  __vbaFreeObj();
  return;
}

/* ---- 0x42b5d0 (FUN_0042b5d0) [anchored] strings: Invalid file format in sub ReadFromFile; CTPEditor.Entry ---- */
void __cdecl FUN_0042b5d0(int *param_1,wchar_t *param_2,short *param_3,undefined4 *param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 in_stack_fffffe98;
  undefined4 in_stack_fffffe9c;
  int *local_d8 [2];
  int *local_d0;
  int local_c8;
  undefined4 local_c4 [5];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [4];
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 local_34;
  wchar_t local_30 [2];
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffed0;
  local_c = &LAB_004016a8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30[0] = L'\0';
  local_30[1] = L'\0';
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = 0;
  local_40 = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_c4[0] = 0;
  local_c8 = 0;
  local_d8[0] = (int *)0x0;
  iVar3 = (**(code **)(*param_1 + 0x3c))(param_1,&local_38);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1,&LAB_0041470c,0x3c);
  }
  local_d0 = local_38;
  iVar3 = (**(code **)(*local_38 + 0x3c))(local_38);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_d0,&DAT_00414ba4,0x3c);
  }
  __vbaFreeObj();
  __vbaObjSetAddref(local_d8,*(undefined4 *)param_2);
  iVar3 = (**(code **)(*(int *)param_1[0x14] + 0x58))((int *)param_1[0x14],&local_c8);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1[0x14],&LAB_004133f8,0x58);
  }
  if (local_c8 == 1) {
    iVar3 = (**(code **)(*local_d8[0] + 0x70))(local_d8[0],&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_d8[0],&DAT_00414258,0x70);
    }
    local_2c = 0;
    __vbaStrMove();
    iVar3 = __vbaStrCmp(&DAT_00414c10 /* bstr: '{' */,local_20);
    if (iVar3 != 0) {
      local_98 = (wchar_t *)&local_20;
      local_88 = param_2;
      local_90 = 0x4009;
      local_a0 = 0x4008;
      __vbaStrCopy(in_stack_fffffe98,in_stack_fffffe9c);
      __vbaRaiseEvent(param_1,3,3,0x4008,local_ac,&local_2c,local_a4,local_a0,local_9c,local_98,
                      local_94,local_90,local_8c,local_88,local_84);
      __vbaFreeStr();
LAB_0042bb0b:
      local_28 = 0xffffffff;
      goto LAB_0042c24e;
    }
    if (*param_3 != 0) {
      puVar6 = &local_2c;
      piVar5 = local_d8[0];
      iVar3 = (**(code **)(*local_d8[0] + 0x3c))(local_d8[0],puVar6);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_d8[0],&DAT_00414258,0x3c);
      }
      piVar1 = (int *)*param_4;
      __vbaStrCopy(piVar5,puVar6);
      uVar4 = __vbaCastObj(0,&DAT_00414bb4);
      __vbaObjSet(&local_3c,uVar4);
      __vbaObjSetAddref(&local_38,param_1);
      local_c8 = 0;
      local_2c = 0;
      __vbaStrMove();
      iVar3 = (**(code **)(*piVar1 + 0x1c))
                        (piVar1,local_30,&local_c8,&local_38,&local_3c,&local_34,&local_40);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_00414c50,0x1c);
      }
      __vbaFreeStrList(2,local_30,&local_34);
      __vbaFreeObjList(3,&local_38,&local_3c,&local_40);
    }
    iVar3 = (**(code **)(*local_d8[0] + 0x70))(local_d8[0],&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_d8[0],&DAT_00414258,0x70);
    }
    local_2c = 0;
    __vbaStrMove();
    while (iVar3 = __vbaStrCmp(&DAT_00414c64 /* bstr: '}' */,local_20), iVar3 != 0) {
      iVar3 = (**(code **)(*local_d8[0] + 0x1c))(local_d8[0],&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_d8[0],&DAT_00414258,0x1c);
      }
      iVar3 = __vbaStrCmp(local_2c,local_20);
      __vbaFreeStr();
      if (iVar3 == 0) {
        local_90 = 0x4009;
        local_88 = param_2;
        __vbaRaiseEvent(param_1,2,1,0x4009,local_8c,param_2,local_84);
        local_28 = 0xffffffff;
        goto LAB_0042c24e;
      }
      iVar3 = (**(code **)(*(int *)param_1[0x14] + 0x6c))((int *)param_1[0x14],&local_38);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,param_1[0x14],&LAB_004133f8,0x6c);
      }
      piVar5 = local_38;
      iVar3 = (**(code **)(*local_38 + 0x24))(local_38,&local_20,&local_3c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar5,&LAB_00414248,0x24);
      }
      uVar4 = local_3c;
      local_3c = 0;
      __vbaObjSet(&local_24,uVar4);
      __vbaFreeObj();
      sVar2 = __vbaObjIs(local_24,0);
      if (sVar2 != 0) {
        local_90 = 0x4009;
        local_88 = param_2;
        local_98 = (wchar_t *)&local_20;
        local_a0 = 0x4008;
        __vbaRaiseEvent(param_1,4,2,0x4008,local_9c,local_98,local_94,0x4009,local_8c,param_2,
                        local_84);
        local_28 = 0xffffffff;
        goto LAB_0042c24e;
      }
      puVar6 = local_c4;
      piVar5 = local_24;
      iVar3 = (**(code **)(*local_24 + 0x3c))(local_24,puVar6);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_24,&DAT_00414268,0x3c);
      }
      if ((short)local_c4[0] == 0) {
        iVar3 = (**(code **)(*local_24 + 0x1c))(local_24,&local_2c);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_24,&DAT_00414268,0x1c);
        }
        local_2c = 0;
        __vbaStrMove();
        iVar3 = (**(code **)(*(int *)param_1[0x13] + 0x28))((int *)param_1[0x13],local_30,&local_38)
        ;
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,param_1[0x13],&DAT_00414ba4,0x28);
        }
        sVar2 = __vbaObjIs(local_38,0);
        __vbaFreeStr();
        __vbaFreeObj();
        if (sVar2 == 0) {
          local_88 = param_2;
          local_90 = 0x4009;
          iVar3 = (**(code **)(*local_24 + 0x34))(local_24,&local_2c);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,local_24,&DAT_00414268,0x34);
          }
          local_2c = 0;
          __vbaStrMove();
          local_98 = local_30;
          local_a0 = 0x4008;
          __vbaRaiseEvent(param_1,1,2,0x4008,local_9c,local_98,local_94,local_90,local_8c,local_88,
                          local_84);
          __vbaFreeStr();
          local_28 = 0xffffffff;
          goto LAB_0042c24e;
        }
        iVar3 = (**(code **)(*local_24 + 0x1c))(local_24,&local_2c);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_24,&DAT_00414268,0x1c);
        }
        local_2c = 0;
        __vbaStrMove();
        iVar3 = (**(code **)(*(int *)param_1[0x13] + 0x1c))
                          ((int *)param_1[0x13],&local_24,local_30,&local_38);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,param_1[0x13],&DAT_00414ba4,0x1c);
        }
        piVar5 = local_38;
        local_38 = (int *)0x0;
        __vbaObjSet(&local_1c,piVar5);
      }
      else {
        __vbaStrCopy(piVar5,puVar6);
        iVar3 = (**(code **)(*(int *)param_1[0x13] + 0x1c))
                          ((int *)param_1[0x13],&local_24,&local_2c,&local_38);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,param_1[0x13],&DAT_00414ba4,0x1c);
        }
        piVar5 = local_38;
        local_38 = (int *)0x0;
        __vbaObjSet(&local_1c,piVar5);
      }
      __vbaFreeStr();
      iVar3 = *param_1;
      uVar4 = __vbaObjSetAddref(&local_38,local_1c);
      iVar3 = (**(code **)(iVar3 + 0x6c))(param_1,uVar4);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,param_1,&LAB_0041470c,0x6c);
      }
      __vbaFreeObj();
      iVar3 = (**(code **)(*local_1c + 0x40))(local_1c,param_2,param_3,param_4,local_c4);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&DAT_00414bb4,0x40);
      }
      if ((short)local_c4[0] != 0) goto LAB_0042bb0b;
      if (*param_3 != 0) {
        puVar6 = &local_2c;
        piVar5 = local_d8[0];
        iVar3 = (**(code **)(*local_d8[0] + 0x3c))(local_d8[0],puVar6);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_d8[0],&DAT_00414258,0x3c);
        }
        piVar1 = (int *)*param_4;
        __vbaStrCopy(piVar5,puVar6);
        __vbaObjSetAddref(&local_38,param_1);
        local_c8 = 1;
        local_2c = 0;
        __vbaStrMove();
        iVar3 = (**(code **)(*piVar1 + 0x1c))
                          (piVar1,local_30,&local_c8,&local_38,&local_1c,&local_34,&local_3c);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar1,&DAT_00414c50,0x1c);
        }
        __vbaFreeStrList(2,local_30,&local_34);
        __vbaFreeObjList(2,&local_38,&local_3c);
      }
      iVar3 = (**(code **)(*local_d8[0] + 0x70))(local_d8[0],&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_d8[0],&DAT_00414258,0x70);
      }
      local_2c = 0;
      __vbaStrMove();
    }
    if (*param_3 != 0) {
      puVar6 = &local_2c;
      piVar5 = local_d8[0];
      iVar3 = (**(code **)(*local_d8[0] + 0x3c))(local_d8[0],puVar6);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_d8[0],&DAT_00414258,0x3c);
      }
      piVar1 = (int *)*param_4;
      __vbaStrCopy(piVar5,puVar6);
      uVar4 = __vbaCastObj(0,&DAT_00414bb4);
      __vbaObjSet(&local_3c,uVar4);
      __vbaObjSetAddref(&local_38,param_1);
      local_c8 = 1;
      local_2c = 0;
      __vbaStrMove();
      iVar3 = (**(code **)(*piVar1 + 0x1c))
                        (piVar1,local_30,&local_c8,&local_38,&local_3c,&local_34,&local_40);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_00414c50,0x1c);
      }
      __vbaFreeStrList(2,local_30,&local_34);
      __vbaFreeObjList(3,&local_38,&local_3c,&local_40);
    }
  }
  else if (local_c8 == 3) {
    if (*param_3 != 0) {
      puVar6 = &local_2c;
      piVar5 = local_d8[0];
      iVar3 = (**(code **)(*local_d8[0] + 0x3c))(local_d8[0],puVar6);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_d8[0],&DAT_00414258,0x3c);
      }
      piVar1 = (int *)*param_4;
      __vbaStrCopy(piVar5,puVar6);
      uVar4 = __vbaCastObj(0,&DAT_00414bb4);
      __vbaObjSet(&local_3c,uVar4);
      __vbaObjSetAddref(&local_38,param_1);
      local_c8 = 0;
      local_2c = 0;
      __vbaStrMove();
      iVar3 = (**(code **)(*piVar1 + 0x1c))
                        (piVar1,local_30,&local_c8,&local_38,&local_3c,&local_34,&local_40);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_00414c50,0x1c);
      }
      __vbaFreeStrList(2,local_30,&local_34);
      __vbaFreeObjList(3,&local_38,&local_3c,&local_40);
    }
    iVar3 = (**(code **)(*(int *)param_1[0x14] + 0x6c))((int *)param_1[0x14],&local_38);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,param_1[0x14],&LAB_004133f8,0x6c);
    }
    local_48 = 1;
    local_50[0] = 2;
    local_d0 = local_38;
    piVar5 = local_38;
    iVar3 = (**(code **)(*local_38 + 0x20))(local_38,local_50,&local_3c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_d0,&LAB_00414248,0x20);
    }
    uVar4 = local_3c;
    local_3c = 0;
    __vbaObjSet(&local_24,uVar4);
    __vbaFreeObj();
    __vbaFreeVar(piVar5);
    iVar3 = (**(code **)(*local_24 + 0x1c))(local_24,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_24,&DAT_00414268,0x1c);
    }
    local_2c = 0;
    __vbaStrMove();
    iVar3 = (**(code **)(*(int *)param_1[0x13] + 0x1c))
                      ((int *)param_1[0x13],&local_24,local_30,&local_38);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,param_1[0x13],&DAT_00414ba4,0x1c);
    }
    piVar5 = local_38;
    local_38 = (int *)0x0;
    __vbaObjSet(&local_1c,piVar5);
    __vbaFreeStr();
    iVar3 = *param_1;
    uVar4 = __vbaObjSetAddref(&local_38,local_1c);
    iVar3 = (**(code **)(iVar3 + 0x6c))(param_1,uVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,param_1,&LAB_0041470c,0x6c);
    }
    __vbaFreeObj();
    iVar3 = (**(code **)(*local_1c + 0x40))(local_1c,param_2,param_3,param_4,local_c4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&DAT_00414bb4,0x40);
    }
    if ((short)local_c4[0] != 0) {
      local_28 = 0xffffffff;
      goto LAB_0042c24e;
    }
  }
  else {
    uVar4 = rtcErrObj();
    piVar5 = (int *)__vbaObjSet(&local_38,uVar4);
    local_78 = 0x80020004;
    local_68 = 0x80020004;
    local_80[0] = 10;
    local_70[0] = 10;
    local_98 = L"Invalid file format in sub ReadFromFile";
    local_a0 = 8;
    __vbaVarDup();
    local_88 = L"CTPEditor.Entry";
    local_90 = 8;
    __vbaVarDup();
    iVar3 = (**(code **)(*piVar5 + 0x44))(piVar5,0x424,local_50,local_60,local_70,local_80);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_50,local_60,local_70,local_80);
  }
  __vbaObjSetAddref(local_d8,0);
LAB_0042c24e:
  __vbaFreeObj(&LAB_0042c2bb);
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}

/* ---- 0x42c2f0 (FUN_0042c2f0) [anchored] strings: Invalid file format in sub WriteToFile; CTPEditor.Entry ---- */
void __cdecl
FUN_0042c2f0(int *param_1,undefined4 *param_2,short *param_3,undefined4 *param_4,undefined4 *param_5
            ,undefined4 *param_6,undefined4 *param_7,int *param_8)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  short *psVar6;
  undefined4 *puVar7;
  undefined4 local_e4;
  undefined4 local_e0;
  int *local_dc [5];
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [9];
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
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffefc;
  local_c = &LAB_004016b8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
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
  local_c0[0] = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_dc[0] = (int *)0x0;
  local_e0 = 0;
  local_e4 = 0;
  __vbaObjSetAddref(local_dc,*param_2);
  iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x58))((int *)param_1[0x14],&local_c8);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x14],&LAB_004133f8,0x58);
  }
  if (local_c8 == 1) {
    pcVar5 = __vbaStrMove_exref;
    if (0 < *param_8) {
      iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x60))((int *)param_1[0x14],local_c0);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1[0x14],&LAB_004133f8,0x60);
      }
      psVar6 = (short *)&local_c4;
      local_c4 = local_c0[0];
      puVar7 = param_7;
      FUN_00472140(psVar6);
      pcVar5 = __vbaStrMove_exref;
      __vbaStrMove(psVar6,puVar7);
      iVar2 = (**(code **)(*local_dc[0] + 0x80))(local_dc[0],&local_24);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_dc[0],&DAT_00414258,0x80);
      }
      __vbaFreeStr();
    }
    if (*param_3 != 0) {
      __vbaCastObj(0,&DAT_00414bb4);
      __vbaObjSet();
      __vbaObjSetAddref();
      local_c8 = 0;
      FUN_00472670(param_2,param_5,param_4,&local_c8,&local_38,&local_3c);
      __vbaFreeObjList(2,&local_38,&local_3c);
    }
    iVar2 = (**(code **)(*(int *)param_1[0x14] + 0x5c))((int *)param_1[0x14],local_c0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0x14],&LAB_004133f8,0x5c);
    }
    local_c4 = local_c0[0];
    __vbaStrCat(param_1[0x10],*param_5);
    uVar3 = (*pcVar5)();
    __vbaStrCat(*param_7,uVar3);
    uVar3 = (*pcVar5)();
    __vbaStrCat(&DAT_00414c10 /* bstr: '{' */,uVar3);
    uVar3 = (*pcVar5)();
    psVar6 = (short *)&local_c4;
    puVar7 = param_7;
    FUN_00472140(psVar6);
    uVar3 = (*pcVar5)(psVar6,puVar7,uVar3);
    __vbaStrCat(uVar3,psVar6);
    (*pcVar5)();
    iVar2 = (**(code **)(*local_dc[0] + 0x80))(local_dc[0],&local_34);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_dc[0],&DAT_00414258,0x80);
    }
    __vbaFreeStrList(5,&local_24,&local_28,&local_2c,&local_30,&local_34);
    iVar2 = __vbaForEachCollObj(&DAT_00414bb4,&local_e0,&local_1c,param_1[0x13]);
    while (iVar2 != 0) {
      sVar1 = __vbaObjIs(local_20,0);
      if (sVar1 == 0) {
        iVar2 = (**(code **)(*local_1c + 0x28))(local_1c,&local_3c);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414bb4,0x28);
        }
        iVar2 = (**(code **)(*local_20 + 0x28))(local_20,&local_38);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x28);
        }
        sVar1 = __vbaObjIs(local_38,local_3c);
        __vbaFreeObjList(2,&local_3c,&local_38);
        if (sVar1 == 0) {
          iVar2 = (**(code **)(*local_20 + 0x28))(local_20,&local_38);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x28);
          }
          piVar4 = local_38;
          iVar2 = (**(code **)(*local_38 + 100))(local_38,local_c0);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414268,100);
          }
          psVar6 = (short *)&local_c4;
          local_c4 = local_c0[0];
          puVar7 = param_7;
          FUN_00472140(psVar6);
          (*pcVar5)(psVar6,puVar7);
          iVar2 = (**(code **)(*local_dc[0] + 0x80))(local_dc[0],&local_24);
        }
        else {
          iVar2 = (**(code **)(*local_20 + 0x28))();
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x28);
          }
          piVar4 = local_38;
          iVar2 = (**(code **)(*local_38 + 0x60))(local_38,local_c0);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414268,0x60);
          }
          psVar6 = (short *)&local_c4;
          local_c4 = local_c0[0];
          puVar7 = param_7;
          FUN_00472140(psVar6);
          (*pcVar5)(psVar6,puVar7);
          iVar2 = (**(code **)(*local_dc[0] + 0x80))(local_dc[0],&local_24);
        }
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_dc[0],&DAT_00414258,0x80);
        }
        __vbaFreeStr();
        __vbaFreeObj();
      }
      if (*param_3 != 0) {
        __vbaObjSetAddref(&local_38,param_1);
        local_c8 = 1;
        __vbaStrCat(*param_6,*param_5);
        (*pcVar5)();
        FUN_00472670(param_2,&local_24,param_4,&local_c8,&local_38,&local_1c);
        __vbaFreeStr();
        __vbaFreeObj();
      }
      __vbaStrCat(*param_6,*param_5);
      (*pcVar5)();
      local_c0[0] = 0xffffffff;
      iVar2 = (**(code **)(*local_1c + 0x44))
                        (local_1c,param_2,param_3,param_4,local_c0,&local_24,param_6,param_7);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414bb4,0x44);
      }
      __vbaFreeStr();
      __vbaObjSetAddref(&local_20,local_1c);
      iVar2 = __vbaNextEachCollObj(&DAT_00414bb4,&local_e0,&local_1c);
    }
    iVar2 = (**(code **)(*local_20 + 0x28))(local_20,&local_38);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x28);
    }
    piVar4 = local_38;
    iVar2 = (**(code **)(*local_38 + 100))(local_38,local_c0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414268,100);
    }
    psVar6 = (short *)&local_c4;
    local_c4 = local_c0[0];
    FUN_00472140(psVar6);
    (*pcVar5)(psVar6,param_7);
    iVar2 = (**(code **)(*local_dc[0] + 0x80))(local_dc[0],&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_dc[0],&DAT_00414258,0x80);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    if (*param_3 != 0) {
      uVar3 = __vbaCastObj(0,&DAT_00414bb4);
      __vbaObjSet(&local_3c,uVar3);
      __vbaObjSetAddref(&local_38,param_1);
      local_c8 = 1;
      __vbaStrCat(*param_6,*param_5);
      (*pcVar5)();
      FUN_00472670(param_2,&local_24,param_4,&local_c8,&local_38,&local_3c);
      __vbaFreeStr();
      __vbaFreeObjList(2,&local_38,&local_3c);
    }
    __vbaStrCat(&DAT_00414c64 /* bstr: '}' */,*param_5);
    (*pcVar5)();
    iVar2 = (**(code **)(*local_dc[0] + 0x80))(local_dc[0],&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_dc[0],&DAT_00414258,0x80);
    }
    __vbaFreeStr();
  }
  else if (local_c8 == 3) {
    if (*param_3 != 0) {
      __vbaCastObj(0,&DAT_00414bb4);
      __vbaObjSet();
      __vbaObjSetAddref();
      local_c8 = 0;
      FUN_00472670(param_2,param_5,param_4,&local_c8,&local_38,&local_3c);
      __vbaFreeObjList(2,&local_38,&local_3c);
    }
    __vbaStrCat(param_1[0x10],*param_5);
    __vbaStrMove();
    iVar2 = (**(code **)(*local_dc[0] + 0x80))(local_dc[0],&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_dc[0],&DAT_00414258,0x80);
    }
    __vbaFreeStr();
    iVar2 = __vbaForEachCollObj(&DAT_00414bb4,&local_e4,&local_1c,param_1[0x13]);
    while (iVar2 != 0) {
      local_c0[0] = 0;
      iVar2 = (**(code **)(*local_1c + 0x44))
                        (local_1c,param_2,param_3,param_4,local_c0,param_5,param_6,param_7);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414bb4,0x44);
      }
      __vbaObjSetAddref(&local_20,local_1c);
      iVar2 = __vbaNextEachCollObj(&DAT_00414bb4,&local_e4,&local_1c);
    }
    iVar2 = (**(code **)(*local_20 + 0x28))(local_20,&local_38);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x28);
    }
    piVar4 = local_38;
    iVar2 = (**(code **)(*local_38 + 100))(local_38,local_c0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414268,100);
    }
    psVar6 = (short *)&local_c4;
    local_c4 = local_c0[0];
    FUN_00472140(psVar6);
    __vbaStrMove(psVar6,param_7);
    iVar2 = (**(code **)(*local_dc[0] + 0x80))(local_dc[0],&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_dc[0],&DAT_00414258,0x80);
    }
    __vbaFreeStr();
    __vbaFreeObj();
  }
  else {
    uVar3 = rtcErrObj();
    piVar4 = (int *)__vbaObjSet(&local_38,uVar3);
    local_74 = 0x80020004;
    local_64 = 0x80020004;
    local_7c[0] = 10;
    local_6c[0] = 10;
    local_94 = L"Invalid file format in sub WriteToFile";
    local_9c = 8;
    __vbaVarDup();
    local_84 = L"CTPEditor.Entry";
    local_8c = 8;
    __vbaVarDup();
    iVar2 = (**(code **)(*piVar4 + 0x44))(piVar4,0x425,local_4c,local_5c,local_6c,local_7c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_4c,local_5c,local_6c,local_7c);
  }
  __vbaObjSetAddref(local_dc,0);
  __vbaFreeObjList(3,local_dc,&local_e0,&local_e4,&LAB_0042cd60);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x42cd80 (FUN_0042cd80) [estimated] strings:  ---- */
void __cdecl FUN_0042cd80(int *param_1)

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
  local_10 = &stack0xffffffcc;
  local_c = &DAT_004016c8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  iVar1 = (**(code **)(*(int *)param_1[0x13] + 0x3c))((int *)param_1[0x13]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x13],&DAT_00414ba4,0x3c);
  }
  uVar2 = __vbaCastObj(0,&DAT_00414ba4);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  __vbaObjSetAddref(param_1 + 0x13,uVar2);
  __vbaFreeObj();
  return;
}

/* ---- 0x42ce40 (FUN_0042ce40) [estimated] strings:  ---- */
void __cdecl FUN_0042ce40(uint param_1)

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
  local_c = &DAT_004016d8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaNew(&DAT_00407270);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x13,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x42cef0 (FUN_0042cef0) [estimated] strings:  ---- */
undefined4 FUN_0042cef0(uint param_1,undefined4 param_2)

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
  local_c = &DAT_004016e8;
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
