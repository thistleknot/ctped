/* Object #7 FieldInstance -- ESTIMATED function range; public methods per VB header: Field, Field, ValueAsString, Value, SetValue, ValueToObject */
#include "ghidra_types.h"

/* ---- 0x42ece0 (FUN_0042ece0) [estimated] strings:  ---- */
void __cdecl FUN_0042ece0(int *param_1,undefined4 param_2)

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
  local_c = &DAT_004017b8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  __vbaObjSetAddref(&local_1c,param_2);
  __vbaObjSetAddref(param_1 + 0x14,local_1c);
  __vbaFreeObj(&LAB_0042ed43);
  return;
}

/* ---- 0x42ed70 (FUN_0042ed70) [estimated] strings:  ---- */
void __cdecl FUN_0042ed70(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_004017c8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x14]);
  return;
}

/* ---- 0x42ee00 (FUN_0042ee00) [estimated] strings: Name ---- */
void __cdecl FUN_0042ee00(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_2c [4];
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_004017d8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  piVar3 = param_1 + 0x10;
  local_1c = 0;
  local_2c[0] = 0;
  *param_2 = 0;
  sVar1 = rtcIsObject(piVar3);
  if (sVar1 == 0) {
    __vbaStrVarCopy(piVar3);
    __vbaStrMove();
  }
  else {
    uVar4 = 0;
    uVar2 = __vbaVarLateMemCallLd(local_2c,piVar3,L"Name",0);
    __vbaStrVarMove(uVar2);
    __vbaStrMove();
    __vbaFreeVar(uVar4);
  }
  return;
}

/* ---- 0x42eee0 (FUN_0042eee0) [estimated] strings:  ---- */
void __cdecl FUN_0042eee0(int *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_004017e8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_28[0] = 0;
  *param_2 = 0;
  sVar1 = rtcIsObject(param_1 + 0x10);
  if (sVar1 == 0) {
    __vbaVarCopy();
  }
  else {
    __vbaVarSetVarAddref(local_28,param_1 + 0x10);
  }
  return;
}

/* ---- 0x42efa0 (FUN_0042efa0) [estimated] strings:  ---- */
undefined4 FUN_0042efa0(int *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_004017f8;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  sVar1 = rtcIsObject(param_2);
  if (sVar1 == 0) {
    __vbaVarVargNofree();
    __vbaVarCopy();
  }
  else {
    uVar2 = __vbaVarVargNofree();
    __vbaVarSetVarAddref(param_1 + 0x10,uVar2);
  }
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x42f040 (FUN_0042f040) [estimated] strings:  ---- */
void __cdecl FUN_0042f040(int *param_1,short *param_2)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [4];
  undefined4 local_34;
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
  local_10 = &stack0xffffff6c;
  local_c = &DAT_00401800;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  piVar1 = param_1 + 0x10;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  sVar3 = rtcIsObject(piVar1);
  if (sVar3 == 0) {
    iVar4 = (**(code **)(*(int *)param_1[0x14] + 0x54))((int *)param_1[0x14],&local_50);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1[0x14],&DAT_00414268,0x54);
    }
    iVar4 = (**(code **)(*(int *)param_1[0x14] + 0x54))((int *)param_1[0x14],&local_54);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,param_1[0x14],&DAT_00414268,0x54);
    }
    if (local_50 != 0 && local_54 != 2) {
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      piVar2 = DAT_0047f074;
      iVar4 = (**(code **)(*DAT_0047f074 + 0x6f8))(DAT_0047f074,&local_28);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar2,&DAT_00413d78,0x6f8);
      }
      piVar2 = local_28;
      iVar4 = (**(code **)(*local_28 + 0x44))(local_28,&local_2c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar2,&LAB_00414228,0x44);
      }
      piVar2 = local_2c;
      iVar4 = (**(code **)(*(int *)param_1[0x14] + 0x58))((int *)param_1[0x14],local_44);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,param_1[0x14],&DAT_00414268,0x58);
      }
      piVar6 = piVar2;
      iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2,local_44,&local_30);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar2,&DAT_00414238,0x24);
      }
      uVar5 = local_30;
      local_30 = 0;
      __vbaObjSet(&local_1c,uVar5);
      __vbaFreeObjList(2,&local_28,&local_2c);
      __vbaFreeVar(piVar6);
      iVar4 = (**(code **)(*local_1c + 0x2c))(local_1c,&local_48);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_1c,&LAB_004133e8,0x2c);
      }
      iVar4 = (**(code **)(*local_1c + 0x24))(local_1c,&local_4c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_1c,&LAB_004133e8,0x24);
      }
      if (((short)local_4c == 0 && (short)local_48 == 0) && *param_2 != 0) {
        if (DAT_0047f074 == (int *)0x0) {
          __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
        }
        piVar2 = DAT_0047f074;
        iVar4 = (**(code **)(*DAT_0047f074 + 0x6f8))(DAT_0047f074,&local_28);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar2,&DAT_00413d78,0x6f8);
        }
        if (DAT_0047f074 == (int *)0x0) {
          __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
        }
        piVar2 = DAT_0047f074;
        iVar4 = (**(code **)(*DAT_0047f074 + 0x6fc))(DAT_0047f074,&local_2c);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar2,&DAT_00413d78,0x6fc);
        }
        piVar2 = local_2c;
        iVar4 = (**(code **)(*local_2c + 0x34))(local_2c,&local_48);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar2,&DAT_00415000,0x34);
        }
        uVar5 = __vbaCastObj(0,&DAT_0041462c);
        __vbaObjSet(&local_34,uVar5);
        piVar2 = local_28;
        local_4c = local_48;
        local_28 = (int *)0x0;
        __vbaObjSet(&local_30,piVar2);
        iVar4 = (**(code **)(*local_1c + 0x88))(local_1c,&local_30,&local_4c,&local_34);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,local_1c,&LAB_004133e8,0x88);
        }
        __vbaFreeObjList(3,&local_2c,&local_30,&local_34);
      }
      iVar4 = (**(code **)(*local_1c + 0x6c))(local_1c,&local_28);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_1c,&LAB_004133e8,0x6c);
      }
      piVar2 = local_28;
      __vbaStrErrVarCopy(piVar1);
      __vbaStrMove();
      iVar4 = (**(code **)(*piVar2 + 0x28))(piVar2,&local_24,&local_2c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar2,&DAT_004146fc,0x28);
      }
      piVar2 = local_2c;
      local_2c = (int *)0x0;
      __vbaObjSet(&local_20,piVar2);
      __vbaFreeStr();
      __vbaFreeObj();
      sVar3 = __vbaObjIs(local_20,0);
      if (sVar3 == 0) {
        __vbaVarSetObjAddref(piVar1,local_20);
      }
    }
  }
  __vbaFreeObj(&LAB_0042f459);
  __vbaFreeObj();
  return;
}

/* ---- 0x42f480 (FUN_0042f480) [anchored] strings: SameAs; Invalid ArgumentTypeType in function SameAs; CTPEditor.FieldInstance ---- */
void __cdecl FUN_0042f480(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_c4 [3];
  int local_b8 [9];
  undefined4 local_94;
  wchar_t *local_8c;
  undefined4 local_84;
  wchar_t *local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
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
  local_10 = &stack0xffffff24;
  local_c = &DAT_00401810;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_28 = 0;
  local_2c = 0;
  *param_3 = 0;
  local_30 = 0;
  local_34 = 0;
  local_44 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84 = 0;
  local_94 = 0;
  local_b8[0] = 0;
  local_c4[0] = (int *)0x0;
  __vbaObjSetAddref(local_c4,*param_2);
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x54))((int *)param_1[0x14],local_b8);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_00414268,0x54);
  }
  if (-1 < local_b8[0]) {
    if (local_b8[0] < 2) {
      iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,&local_2c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,param_1,&DAT_00414bb4,0x2c);
      }
      iVar1 = (**(code **)(*local_c4[0] + 0x2c))(local_c4[0],&local_30);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_c4[0],&DAT_00414bb4,0x2c);
      }
      iVar1 = __vbaStrCmp(local_30,local_2c);
      local_7c = (wchar_t *)CONCAT22(local_7c._2_2_,-(ushort)(iVar1 == 0));
      local_84 = 0xb;
      __vbaVarMove();
      __vbaFreeStrList(2,&local_2c,&local_30);
      goto LAB_0042f6fd;
    }
    if (local_b8[0] == 2) {
      piVar3 = local_c4[0];
      iVar1 = (**(code **)(*local_c4[0] + 0x30))(local_c4[0],&local_44);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_c4[0],&DAT_00414bb4,0x30);
      }
      __vbaVarLateMemCallLd(local_54,param_1 + 0x10,L"SameAs",1,local_44,local_40,local_3c,local_38)
      ;
      __vbaVarMove();
      __vbaFreeVar(piVar3);
      goto LAB_0042f6fd;
    }
  }
  uVar2 = rtcErrObj();
  piVar3 = (int *)__vbaObjSet(&local_34,uVar2);
  local_6c = 0x80020004;
  local_5c = 0x80020004;
  local_74[0] = 10;
  local_64[0] = 10;
  local_8c = L"Invalid ArgumentTypeType in function SameAs";
  local_94 = 8;
  __vbaVarDup();
  local_7c = L"CTPEditor.FieldInstance";
  local_84 = 8;
  __vbaVarDup();
  iVar1 = (**(code **)(*piVar3 + 0x44))(piVar3,0x434,&local_44,local_54,local_64,local_74);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_00413af4,0x44);
  }
  __vbaFreeObj();
  __vbaFreeVarList(4,&local_44,local_54,local_64,local_74);
LAB_0042f6fd:
  __vbaObjSetAddref(local_c4,0);
  __vbaFreeObj(&LAB_0042f766);
  return;
}

/* ---- 0x42f7a0 (FUN_0042f7a0) [estimated] strings:  ---- */
void __cdecl FUN_0042f7a0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_60 [3];
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff88;
  local_c = &DAT_00401820;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (undefined4 *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_60[0] = (int *)0x0;
  __vbaObjSetAddref(local_60,*param_2);
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x44))((int *)param_1[0x14],&local_50);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_00414268,0x44);
  }
  if ((short)local_50 != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x54))((int *)param_1[0x14],&local_54);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_00414268,0x54);
    }
    if (local_54 == 2) {
      uVar2 = __vbaNew(&DAT_0040888c);
      __vbaObjSet(&local_20,uVar2);
      iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x58))((int *)param_1[0x14],local_3c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_00414268,0x58);
      }
      uVar2 = __vbaCastObjVar(local_3c,&LAB_004133f8);
      __vbaObjSet(&local_2c,uVar2);
      piVar3 = local_20;
      iVar1 = (**(code **)(*local_20 + 0x48))(local_20,&local_2c);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_20,&LAB_0041470c,0x48);
      }
      __vbaFreeObj();
      __vbaFreeVar(piVar3);
      iVar1 = (**(code **)(*local_20 + 0x50))(local_20,param_2,param_3,param_4,&local_50);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_20,&LAB_0041470c,0x50);
      }
      __vbaVarSetObjAddref(param_1 + 0x10,local_20);
    }
    else {
      iVar1 = (**(code **)(*local_60[0] + 0x70))(local_60[0],&local_28);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_60[0],&DAT_00414258,0x70);
      }
      local_28 = 0;
      __vbaStrMove();
      iVar1 = (**(code **)(*local_60[0] + 0x1c))(local_60[0],&local_28);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,local_60[0],&DAT_00414258,0x1c);
      }
      iVar1 = __vbaStrCmp(local_28,local_1c);
      __vbaFreeStr();
      if (iVar1 == 0) {
        local_4c = 0x4009;
        local_44 = param_2;
        __vbaRaiseEvent(param_1,1,1,0x4009,local_48,param_2,local_40);
        local_24 = 0xffffffff;
        goto LAB_0042fa02;
      }
      local_44 = local_1c;
      local_4c = 8;
      __vbaVarCopy();
    }
  }
  __vbaObjSetAddref(local_60,0);
LAB_0042fa02:
  __vbaFreeObj(&LAB_0042fa3f);
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}

/* ---- 0x42fa70 (FUN_0042fa70) [estimated] strings: WriteToFile ---- */
void __cdecl
FUN_0042fa70(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,short *param_5,
            undefined4 *param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int *local_c0 [3];
  int local_b4;
  undefined4 local_b0 [5];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff2c;
  local_c = &DAT_00401830;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  local_5c = 0;
  local_6c = 0;
  local_7c = 0;
  local_8c = 0;
  local_9c = 0;
  local_b0[0] = 0;
  local_b4 = 0;
  local_c0[0] = (int *)0x0;
  __vbaObjSetAddref(local_c0,*param_2);
  pcVar3 = __vbaHresultCheckObj_exref;
  if (*param_5 != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x34))((int *)param_1[0x14],&local_20);
    pcVar3 = __vbaHresultCheckObj_exref;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0x14],&DAT_00414268,0x34);
    }
    __vbaStrCat(local_20,*param_6);
    __vbaStrMove();
    iVar1 = (**(code **)(*local_c0[0] + 0x80))(local_c0[0],&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_c0[0],&DAT_00414258,0x80);
    }
    __vbaFreeStrList(2,&local_20,&local_24);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x44))((int *)param_1[0x14],local_b0);
  if (iVar1 < 0) {
    (*pcVar3)(iVar1,param_1[0x14],&DAT_00414268,0x44);
  }
  if ((short)local_b0[0] != 0) {
    iVar1 = (**(code **)(*(int *)param_1[0x14] + 0x54))((int *)param_1[0x14],&local_b4);
    if (iVar1 < 0) {
      (*pcVar3)(iVar1,param_1[0x14],&DAT_00414268,0x54);
    }
    if (local_b4 == 2) {
      __vbaObjSetAddref(&local_28,*param_2);
      puVar15 = &local_28;
      __vbaObjSetAddref(&local_2c,*param_4);
      puVar12 = &local_2c;
      uVar14 = 0x4009;
      uVar13 = 0x400b;
      uVar11 = 0x4009;
      uVar10 = 0x4008;
      uVar9 = 0x4008;
      uVar8 = 0x4008;
      uVar6 = 2;
      uVar7 = 0xffffffff;
      uVar5 = 7;
      pwVar4 = L"WriteToFile";
      uVar2 = __vbaObjVar(param_1 + 0x10);
      __vbaLateMemCall(uVar2,pwVar4,uVar5,uVar6,local_98,uVar7,local_90,uVar8,local_88,param_8,
                       local_80,uVar9,local_78,param_7,local_70,uVar10,local_68,param_6,local_60,
                       uVar11,local_58,puVar12,local_50,uVar13,local_48,param_3,local_40,uVar14,
                       local_38,puVar15,local_30);
      uVar2 = __vbaCastObj(local_28,&DAT_00414258);
      __vbaObjSet(param_2,uVar2);
      uVar2 = __vbaCastObj(local_2c,&DAT_00414c50);
      __vbaObjSet(param_4,uVar2);
      __vbaFreeObjList(2,&local_28,&local_2c);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,&local_20);
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,param_1,&DAT_00414bb4,0x2c);
      }
      __vbaStrCat(local_20,*param_8);
      __vbaStrMove();
      iVar1 = (**(code **)(*local_c0[0] + 0x80))(local_c0[0],&local_24);
      if (iVar1 < 0) {
        (*pcVar3)(iVar1,local_c0[0],&DAT_00414258,0x80);
      }
      __vbaFreeStrList(2,&local_20,&local_24);
    }
  }
  __vbaObjSetAddref(local_c0,0);
  __vbaFreeObj(&LAB_0042fe16);
  __vbaFreeStr();
  return;
}

/* ---- 0x42fe40 (FUN_0042fe40) [estimated] strings:  ---- */
void __cdecl FUN_0042fe40(int *param_1)

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
  local_10 = &stack0xffffffc0;
  local_c = &DAT_00401840;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  __vbaVarMove();
  uVar1 = __vbaCastObj(0,&DAT_00414268);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(param_1 + 0x14,uVar1);
  __vbaFreeObj();
  return;
}
