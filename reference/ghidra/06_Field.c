/* Object #6 Field -- ESTIMATED function range; public methods per VB header: ArgumentTypeType, ArgumentType, DefaultValue, LinesBetweenInstances, LinesAfterInstances, ArgControl */
#include "ghidra_types.h"

/* ---- 0x42cf90 (FUN_0042cf90) [estimated] strings:  ---- */
undefined4 FUN_0042cf90(int *param_1,int *param_2)

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
  local_c = &DAT_004016f0;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x12];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = iVar1;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x42d000 (FUN_0042d000) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0042d000(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int local_2c [5];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffbc;
  local_c = &DAT_004016f8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  piVar1 = param_1 + 0x13;
  local_2c[1] = 0;
  local_2c[0] = 0;
  *param_2 = 0;
  sVar2 = rtcIsObject(piVar1);
  if (sVar2 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x54))(param_1,local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,param_1,&DAT_00414268,0x54);
    }
    if (local_2c[0] == 2) {
      (**(code **)(*param_1 + 0x8c))(param_1);
      __vbaVarSetVarAddref(local_2c + 1,piVar1);
    }
    else {
      __vbaVarCopy();
    }
  }
  else {
    __vbaVarSetVarAddref(local_2c + 1,piVar1);
  }
  return;
}

/* ---- 0x42d0f0 (FUN_0042d0f0) [estimated] strings: DefaultEntry ---- */
void __cdecl FUN_0042d0f0(int *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa0;
  local_c = &DAT_00401708;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_28[0] = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  *param_2 = 0;
  if (param_1[0x12] == 2) {
    puVar4 = local_38;
    iVar2 = (**(code **)(*param_1 + 0x58))(param_1,puVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414268,0x58);
    }
    uVar3 = __vbaVarLateMemCallLd(local_48,local_38,L"DefaultEntry",0);
    __vbaVarSetVar(local_28,uVar3);
    __vbaFreeVar(puVar4);
  }
  else {
    sVar1 = rtcIsObject(param_1 + 0x17);
    if (sVar1 == 0) {
      __vbaVarCopy();
    }
    else {
      __vbaVarSetVarAddref(local_28,param_1 + 0x17);
    }
  }
  return;
}

/* ---- 0x42d220 (FUN_0042d220) [estimated] strings:  ---- */
undefined4 FUN_0042d220(int *param_1,undefined2 *param_2)

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
  local_c = &DAT_00401718;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x1b];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (short)iVar1;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x42d290 (FUN_0042d290) [estimated] strings:  ---- */
undefined4 FUN_0042d290(int *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401720;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  uVar1 = *(undefined2 *)((int)param_1 + 0x6e);
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = uVar1;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x42d300 (FUN_0042d300) [estimated] strings:  ---- */
void __cdecl FUN_0042d300(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401728;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x1d]);
  return;
}

/* ---- 0x42d390 (FUN_0042d390) [estimated] strings:  ---- */
undefined4 FUN_0042d390(int *param_1,undefined4 *param_2)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00401738;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaObjSetAddref(param_1 + 0x1d,*param_2);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x42d400 (FUN_0042d400) [estimated] strings:  ---- */
void __cdecl FUN_0042d400(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401740;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x1c]);
  return;
}

/* ---- 0x42d490 (FUN_0042d490) [estimated] strings:  ---- */
undefined4 FUN_0042d490(int *param_1,undefined4 *param_2)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00401750;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaObjSetAddref(param_1 + 0x1c,*param_2);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x42d500 (FUN_0042d500) [estimated] strings: LoadFromFile ---- */
void __cdecl FUN_0042d500(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
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
  local_c = &stack0xffffff50;
  local_8 = &DAT_00401758;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_14;
  uVar2 = __vbaNew(&DAT_00408318);
  __vbaObjSet(&local_18,uVar2);
  __vbaStrCopy();
  __vbaStrCopy();
  __vbaStrCopy();
  iVar3 = (**(code **)(*local_18 + 0x84))();
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_18,&DAT_00414258,0x84);
  }
  __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  iVar3 = (**(code **)(*DAT_0047f074 + 0x70c))(DAT_0047f074,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413d78,0x70c);
  }
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  iVar3 = (**(code **)(*DAT_0047f074 + 0x710))(DAT_0047f074,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413d78,0x710);
  }
  uVar2 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_2c,uVar2);
  local_1c = 0;
  __vbaStrMove();
  iVar3 = param_1 + 0x4c;
  __vbaStrErrVarCopy(iVar3);
  __vbaStrMove();
  iVar4 = (**(code **)(*local_18 + 0x58))(local_18,&local_20,&local_24,&local_2c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_18,&DAT_00414258,0x58);
  }
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaFreeObj();
  uVar2 = __vbaNew(&DAT_004085d0);
  uVar2 = __vbaObjSet(&local_28,uVar2);
  __vbaVarSetObjAddref(iVar3,uVar2);
  __vbaFreeObj();
  __vbaObjSetAddref(&local_2c,local_18);
  local_34 = 0;
  local_3c = 9;
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  iVar4 = (**(code **)(*DAT_0047f074 + 0x710))(DAT_0047f074,&local_28);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar1,&DAT_00413d78,0x710);
  }
  uVar2 = local_28;
  local_28 = 0;
  uVar11 = 0x4009;
  local_44 = uVar2;
  puVar12 = &local_2c;
  local_4c = 9;
  uVar7 = 3;
  pwVar6 = L"LoadFromFile";
  uVar8 = 9;
  uVar9 = local_3c;
  uVar10 = local_34;
  uVar5 = __vbaObjVar(iVar3);
  __vbaLateMemCall(uVar5,pwVar6,uVar7,uVar8,local_48,uVar2,local_40,uVar9,local_38,uVar10,local_30,
                   uVar11,local_58,puVar12,local_50);
  uVar2 = __vbaCastObj(local_2c,&DAT_00414258);
  __vbaObjSet(&local_18,uVar2);
  __vbaFreeObj();
  __vbaFreeVarList(2,&local_3c,&local_4c);
  __vbaFreeObj(&LAB_0042d855);
  return;
}

/* ---- 0x42d870 (FUN_0042d870) [estimated] strings: Field ;  in file ;  allows multiple but has no arguments ---- */
void __cdecl FUN_0042d870(int *param_1,undefined4 *param_2,short *param_3)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 in_stack_fffffed8;
  undefined4 in_stack_fffffedc;
  undefined4 in_stack_fffffee0;
  undefined4 in_stack_fffffee4;
  int in_stack_fffffee8;
  int *in_stack_fffffeec;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 local_c8 [4];
  int *local_b8 [5];
  undefined4 local_a4 [9];
  undefined4 local_80 [2];
  undefined4 ***local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 ***local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff1c;
  local_c = &DAT_00401768;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar16 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (undefined4 ****)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_a4[0] = 0;
  local_b8[0] = (int *)0x0;
  local_c8[0] = 0;
  __vbaObjSetAddref(local_b8,*param_2);
  puVar8 = local_a4;
  piVar5 = local_b8[0];
  iVar3 = (**(code **)(*local_b8[0] + 0x74))(local_b8[0],puVar8);
  pcVar6 = __vbaHresultCheckObj_exref;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_b8[0],&DAT_00414258,0x74);
  }
  *(undefined2 *)(param_1 + 0xe) = (undefined2)local_a4[0];
  puVar15 = local_a4;
  piVar14 = local_b8[0];
  iVar3 = (**(code **)(*local_b8[0] + 0x74))(local_b8[0],puVar15);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_b8[0],&DAT_00414258,0x74);
  }
  *(undefined2 *)((int)param_1 + 0x3a) = (undefined2)local_a4[0];
  puVar13 = local_a4;
  piVar12 = local_b8[0];
  iVar3 = (**(code **)(*local_b8[0] + 0x74))(local_b8[0],puVar13);
  if (iVar3 < 0) {
    in_stack_fffffeec = (int *)0x42d992;
    __vbaHresultCheckObj(iVar3,local_b8[0],&DAT_00414258,0x74);
  }
  *(undefined2 *)(param_1 + 0x10) = (undefined2)local_a4[0];
  if (*param_3 == 0) {
    *(undefined2 *)(param_1 + 0x1b) = 1;
    *(undefined2 *)((int)param_1 + 0x6e) = 1;
  }
  else {
    puVar11 = &local_20;
    piVar10 = local_b8[0];
    iVar3 = (**(code **)(*local_b8[0] + 0x70))(local_b8[0],puVar11);
    if (iVar3 < 0) {
      in_stack_fffffee4 = 0x42d9cc;
      in_stack_fffffeec = local_b8[0];
      __vbaHresultCheckObj(iVar3,local_b8[0],&DAT_00414258,0x70);
      in_stack_fffffee8 = iVar3;
    }
    uVar7 = 0x42d9d6;
    uVar4 = local_20;
    uVar1 = __vbaI2Str(local_20,piVar10,puVar11,piVar12,puVar13,piVar14,puVar15,piVar5,puVar8,
                       piVar16);
    *(undefined2 *)(param_1 + 0x1b) = uVar1;
    __vbaFreeStr();
    iVar3 = (**(code **)(*local_b8[0] + 0x70))(local_b8[0]);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_b8[0],&DAT_00414258,0x70);
    }
    uVar1 = __vbaI2Str(local_20,in_stack_fffffed8,in_stack_fffffedc,in_stack_fffffee0,
                       in_stack_fffffee4,in_stack_fffffee8,in_stack_fffffeec,uVar7,uVar4,piVar10,
                       puVar11);
    *(undefined2 *)((int)param_1 + 0x6e) = uVar1;
    __vbaFreeStr();
  }
  iVar3 = (**(code **)(*local_b8[0] + 0x74))(local_b8[0],local_a4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_b8[0],&DAT_00414258,0x74);
  }
  *(short *)((int)param_1 + 0x42) = (short)local_a4[0];
  if (((short)local_a4[0] == 0) && ((short)param_1[0x10] != 0)) {
    piVar5 = (int *)*param_2;
    iVar3 = (**(code **)(*piVar5 + 0x30))(piVar5,&local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_00414258,0x30);
    }
    uVar4 = rtcErrObj();
    piVar5 = (int *)__vbaObjSet(&local_30,uVar4);
    local_70[0] = 10;
    local_60[0] = 10;
    local_68 = 0x80020004;
    local_58 = 0x80020004;
    __vbaStrCat(param_1[0xf],L"Field ");
    uVar4 = __vbaStrMove();
    __vbaStrCat(L" in file ",uVar4);
    uVar4 = __vbaStrMove();
    __vbaStrCat(local_24,uVar4);
    uVar4 = __vbaStrMove();
    local_48 = __vbaStrCat(L" allows multiple but has no arguments",uVar4);
    local_50[0] = 8;
    local_78 = (undefined4 ***)0x412fb0;
    local_80[0] = 8;
    __vbaVarDup();
    iVar3 = (**(code **)(*piVar5 + 0x44))(piVar5,0x40b,local_40,local_50,local_60,local_70);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar5,&DAT_00413af4,0x44);
    }
    __vbaFreeStrList(4,&local_20,&local_28,&local_24,&local_2c);
    __vbaFreeObj();
    __vbaFreeVarList(4,local_40,local_50,local_60,local_70);
    pcVar6 = __vbaHresultCheckObj_exref;
  }
  if (*(short *)((int)param_1 + 0x42) != 0) {
    puVar8 = &local_20;
    iVar3 = (**(code **)(*local_b8[0] + 0x70))(local_b8[0],puVar8);
    if (iVar3 < 0) {
      (*pcVar6)(iVar3,local_b8[0],&DAT_00414258,0x70);
    }
    local_20 = 0;
    __vbaStrMove();
    local_78 = &local_1c;
    local_80[0] = 0x4008;
    rtcLeftCharVar(local_40,local_80,1);
    __vbaVarMove();
    local_78 = (undefined4 ***)&DAT_00414ef8 /* bstr: '0' */;
    local_80[0] = 0x8008;
    sVar2 = __vbaVarTstEq(local_80,local_c8);
    if (sVar2 == 0) {
      local_78 = (undefined4 ***)&DAT_004148f8 /* bstr: '*' */;
      local_80[0] = 0x8008;
      sVar2 = __vbaVarTstEq(local_80,local_c8);
      if (sVar2 == 0) {
        param_1[0x12] = 1;
        local_78 = local_1c;
        local_80[0] = 8;
        __vbaVarCopy();
      }
      else {
        local_78 = &local_1c;
        param_1[0x12] = 2;
        local_38 = 0x80020004;
        local_40[0] = 10;
        local_80[0] = 0x4008;
        rtcMidCharVar(local_50,local_80,2,local_40);
        __vbaVarMove();
        __vbaFreeVarList(2,local_40,local_50);
      }
    }
    else {
      param_1[0x12] = 0;
    }
    iVar3 = (**(code **)(*local_b8[0] + 0x70))(local_b8[0],&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_b8[0],&DAT_00414258,0x70);
    }
    local_38 = local_20;
    local_20 = 0;
    local_40[0] = 8;
    __vbaVarMove();
    __vbaFreeVar(puVar8);
    pcVar6 = __vbaHresultCheckObj_exref;
  }
  puVar8 = &local_20;
  piVar5 = local_b8[0];
  iVar3 = (**(code **)(*local_b8[0] + 0x70))(local_b8[0],puVar8);
  if (iVar3 < 0) {
    (*pcVar6)(iVar3,local_b8[0],&DAT_00414258,0x70);
  }
  __vbaStrCopy(piVar5,puVar8);
  __vbaFreeStr();
  __vbaObjSetAddref(local_b8,0);
  puVar9 = &LAB_0042dddb;
  __vbaFreeObj(&LAB_0042dddb);
  __vbaFreeVar(puVar9);
  __vbaFreeStr();
  return;
}

/* ---- 0x42de00 (FUN_0042de00) [estimated] strings: Fields ---- */
void __cdecl FUN_0042de00(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  int *******pppppppiVar7;
  int *****pppppiVar8;
  undefined4 uVar9;
  uint uVar10;
  int ******ppppppiVar11;
  int *piVar12;
  int ******ppppppiVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uStack_23c;
  code *pcStack_238;
  undefined4 uStack_234;
  undefined4 uStack_224;
  int iStack_220;
  int *****pppppiStack_21c;
  undefined *puStack_218;
  int *****pppppiStack_214;
  int *****pppppiStack_210;
  int *****pppppiStack_20c;
  int ******ppppppiStack_208;
  int ******ppppppiStack_204;
  int ******ppppppiStack_200;
  int *****pppppiStack_1fc;
  int *****pppppiStack_1f8;
  int *****pppppiStack_1f4;
  int ******ppppppiStack_1f0;
  int *****pppppiStack_1ec;
  int *****pppppiStack_1e8;
  int *****pppppiStack_1e4;
  int ******ppppppiStack_1e0;
  int *****pppppiStack_1dc;
  code *pcStack_1d8;
  int *piStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1a4;
  int ****appppiStack_1a0 [2];
  int *****pppppiStack_198;
  undefined4 auStack_190 [4];
  int *****pppppiStack_180;
  int ****ppppiStack_17c;
  int ******ppppppiStack_178;
  int ****ppppiStack_174;
  int *****pppppiStack_170;
  int ******ppppppiStack_16c;
  int *****pppppiStack_168;
  int ******ppppppiStack_164;
  int ******ppppppiStack_160;
  int ******ppppppiStack_15c;
  int ******ppppppiStack_158;
  int ******ppppppiStack_154;
  int ******ppppppiStack_150;
  int ******ppppppiStack_14c;
  int ******ppppppiStack_148;
  int ******ppppppiStack_144;
  int *****pppppiStack_140;
  int ******ppppppiStack_13c;
  int ******ppppppiStack_138;
  int *****pppppiStack_134;
  int ******ppppppiStack_130;
  int ******ppppppiStack_12c;
  int ****ppppiStack_128;
  int *****pppppiStack_124;
  int ***pppiStack_120;
  int *****pppppiStack_11c;
  int *****pppppiStack_118;
  int ******ppppppiStack_114;
  int *****pppppiStack_110;
  int *****pppppiStack_10c;
  int *piStack_108;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int *****local_b4 [7];
  int ****local_98;
  int ****local_94;
  undefined4 local_90 [5];
  int ***local_7c [2];
  uint *local_74;
  int *****local_6c [4];
  int ****local_5c [2];
  int ****local_54;
  int ***local_4c;
  int ******local_48;
  int *****local_44;
  int ****local_40;
  int *****local_3c;
  int ******local_38;
  int ******local_34;
  int *****local_30;
  int ****local_2c;
  uint local_28;
  undefined4 local_24;
  int ****local_20;
  int *****local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffefc;
  local_c = &DAT_00401778;
  local_8 = 0;
  piStack_108 = param_1;
  pppppiStack_10c = (int *****)0x42de3a;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  pppppiStack_110 = (int *****)local_b4;
  local_1c = (int *****)0x0;
  pppppiStack_10c = (int *****)*param_3;
  local_20 = (int ****)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int ****)0x0;
  local_30 = (int *****)0x0;
  local_34 = (int ******)0x0;
  local_38 = (int ******)0x0;
  local_3c = (int *****)0x0;
  local_40 = (int ****)0x0;
  local_44 = (int *****)0x0;
  local_48 = (int ******)0x0;
  local_4c = (int ***)0x0;
  local_5c[0] = (int ****)0x0;
  local_6c[0] = (int *****)0x0;
  local_7c[0] = (int ***)0x0;
  local_90[0] = 0;
  local_94 = (int ****)0x0;
  local_98 = (int ****)0x0;
  local_b4[0] = (int *****)0x0;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 0;
  ppppppiStack_114 = (int ******)0x42deaf;
  __vbaObjSetAddref();
  pppppiStack_110 = &local_2c;
  pppppiStack_10c = (int *****)param_1;
  ppppppiStack_114 = (int ******)0x42deb6;
  __vbaObjSetAddref();
  pppppiStack_10c = (int *****)&local_44;
  pppppiStack_110 = local_b4[0];
  ppppppiStack_114 = (int ******)0x42dec6;
  iVar5 = (*(code *)(*local_b4[0])[0x11])();
  pcVar2 = __vbaHresultCheckObj_exref;
  if (iVar5 < 0) {
    ppppppiStack_114 = (int ******)0x44;
    pppppiStack_118 = (int *****)&LAB_0041470c;
    pppppiStack_11c = local_b4[0];
    pppppiStack_124 = (int *****)0x42dee3;
    pppiStack_120 = (int ***)iVar5;
    __vbaHresultCheckObj();
  }
  pppppiVar8 = local_44;
  ppppppiStack_114 = (int ******)&local_48;
  pppppiStack_118 = local_44;
  pppppiStack_11c = (int *****)0x42defa;
  iVar5 = (*(code *)(*local_44)[0x1b])();
  if (iVar5 < 0) {
    pppppiStack_11c = (int *****)0x6c;
    pppiStack_120 = (int ***)&LAB_004133f8;
    pppppiStack_124 = pppppiVar8;
    ppppppiStack_12c = (int ******)0x42df0b;
    ppppiStack_128 = (int ****)iVar5;
    __vbaHresultCheckObj();
  }
  ppppppiVar13 = local_48;
  pppppiStack_11c = (int *****)&local_3c;
  pppiStack_120 = (int ***)local_2c;
  pppppiStack_124 = (int *****)0x42df1b;
  ppppppiStack_130 = (int ******)(*(code *)(*local_2c)[7])();
  if ((int)ppppppiStack_130 < 0) {
    pppppiStack_124 = (int *****)0x1c;
    ppppiStack_128 = (int ****)&DAT_00414268;
    ppppppiStack_12c = (int ******)local_2c;
    pppppiStack_134 = (int *****)0x42df2f;
    __vbaHresultCheckObj();
  }
  ppppiStack_128 = (int ****)local_5c;
  local_54 = (int ****)local_3c;
  pppppiStack_124 = (int *****)&local_4c;
  local_3c = (int *****)0x0;
  local_5c[0] = (int ****)0x8;
  ppppppiStack_12c = ppppppiVar13;
  ppppppiStack_130 = (int ******)0x42df4d;
  iVar5 = (*(code *)(*ppppppiVar13)[8])();
  if (iVar5 < 0) {
    ppppppiStack_130 = (int ******)0x20;
    pppppiStack_134 = (int *****)&LAB_00414248;
    ppppppiStack_138 = ppppppiVar13;
    pppppiStack_140 = (int *****)0x42df5e;
    ppppppiStack_13c = (int ******)iVar5;
    __vbaHresultCheckObj();
  }
  pppppiStack_134 = &local_20;
  ppppppiStack_130 = (int ******)local_4c;
  local_4c = (int ***)0x0;
  ppppppiStack_138 = (int ******)0x42df6f;
  __vbaObjSet();
  ppppppiStack_130 = (int ******)&local_48;
  pppppiStack_134 = (int *****)&local_44;
  ppppppiStack_138 = (int ******)0x2;
  ppppppiStack_13c = (int ******)0x42df7f;
  __vbaFreeObjList();
  ppppppiStack_130 = (int ******)0x42df8b;
  __vbaFreeVar();
  ppppppiStack_12c = (int ******)&DAT_00407270;
  ppppppiStack_130 = (int ******)0x42df98;
  ppppppiStack_12c = (int ******)__vbaNew();
  ppppppiStack_130 = (int ******)&local_38;
  pppppiStack_134 = (int *****)0x42dfa3;
  __vbaObjSet();
  ppppppiStack_12c = (int ******)&DAT_00407270;
  ppppppiStack_130 = (int ******)0x42dfaa;
  ppppppiStack_12c = (int ******)__vbaNew();
  ppppppiStack_130 = (int ******)&local_34;
  pppppiStack_134 = (int *****)0x42dfb5;
  __vbaObjSet();
  ppppppiStack_12c = (int ******)local_90;
  ppppppiStack_130 = (int ******)local_2c;
  pppppiStack_134 = (int *****)0x42dfc5;
  iVar5 = (*(code *)(*local_2c)[0xf])();
  if (iVar5 < 0) {
    pppppiStack_134 = (int *****)0x3c;
    ppppppiStack_138 = (int ******)&DAT_00414268;
    ppppppiStack_13c = (int ******)local_2c;
    ppppppiStack_144 = (int ******)0x42dfd9;
    pppppiStack_140 = (int *****)iVar5;
    __vbaHresultCheckObj();
  }
  pppppiStack_134 = (int *****)&local_44;
  piVar12 = (int *)*param_2;
  ppppppiStack_138 = (int ******)piVar12;
  if ((short)local_90[0] != 0) {
    ppppppiStack_13c = (int ******)0x42dff5;
    iVar5 = (**(code **)(*piVar12 + 0x3c))();
    if (iVar5 < 0) {
      ppppppiStack_13c = (int ******)0x3c;
      pppppiStack_140 = (int *****)&LAB_0041470c;
      ppppppiStack_14c = (int ******)0x42e006;
      ppppppiStack_148 = (int ******)iVar5;
      ppppppiStack_144 = (int ******)piVar12;
      __vbaHresultCheckObj();
    }
    pppppiStack_140 = (int *****)&local_b8;
    ppppppiStack_13c = (int ******)local_44;
    local_44 = (int *****)0x0;
    ppppppiStack_144 = (int ******)0x42e01a;
    ppppppiStack_13c = (int ******)__vbaObjSet();
    pppppiStack_140 = (int *****)&local_1c;
    ppppppiStack_144 = (int ******)&local_bc;
    ppppppiStack_148 = (int ******)&DAT_00414bb4;
    ppppppiStack_14c = (int ******)0x42e033;
    iVar5 = __vbaForEachCollObj();
    while (iVar5 != 0) {
      ppppppiStack_13c = &local_44;
      pppppiStack_140 = local_1c;
      ppppppiStack_144 = (int ******)0x42e048;
      puVar6 = (undefined *)(*(code *)(*local_1c)[10])();
      if ((int)puVar6 < 0) {
        ppppppiStack_13c = (int ******)0x28;
        pppppiStack_140 = (int *****)&DAT_00414bb4;
        ppppppiStack_144 = (int ******)local_1c;
        ppppppiStack_14c = (int ******)0x42e05c;
        ppppppiStack_148 = (int ******)puVar6;
        __vbaHresultCheckObj();
      }
      ppppppiStack_13c = (int ******)local_2c;
      pppppiStack_140 = local_44;
      ppppppiStack_144 = (int ******)0x42e06a;
      sVar3 = __vbaObjIs();
      ppppppiStack_13c = (int ******)0x42e076;
      __vbaFreeObj();
      if (sVar3 != 0) {
        ppppppiStack_13c = &local_44;
        ppppppiStack_144 = &local_1c;
        pppppiStack_140 = (int *****)0x0;
        ppppppiStack_148 = local_38;
        ppppppiStack_14c = (int ******)0x42e08e;
        pppppppiVar7 = (int *******)(*(code *)(*local_38)[8])();
        if ((int)pppppppiVar7 < 0) {
          ppppppiStack_13c = (int ******)0x20;
          pppppiStack_140 = (int *****)&DAT_00414ba4;
          ppppppiStack_144 = local_38;
          ppppppiStack_14c = (int ******)0x42e0a2;
          ppppppiStack_148 = (int ******)pppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppiStack_13c = (int ******)0x42e0ab;
        __vbaFreeObj();
      }
      ppppppiStack_13c = &local_1c;
      pppppiStack_140 = (int *****)&local_bc;
      ppppppiStack_144 = (int ******)&DAT_00414bb4;
      ppppppiStack_148 = (int ******)0x42e0c1;
      iVar5 = __vbaNextEachCollObj();
    }
    ppppppiStack_13c = &local_44;
    pppppiStack_140 = local_b4[0];
    ppppppiStack_144 = (int ******)0x42e0d6;
    iVar5 = (*(code *)(*local_b4[0])[0xf])();
    if (iVar5 < 0) {
      ppppppiStack_144 = (int ******)0x3c;
      ppppppiStack_148 = (int ******)&LAB_0041470c;
      ppppppiStack_14c = (int ******)local_b4[0];
      ppppppiStack_154 = (int ******)0x42e0ed;
      ppppppiStack_150 = (int ******)iVar5;
      __vbaHresultCheckObj();
    }
    ppppppiStack_144 = (int ******)local_44;
    local_44 = (int *****)0x0;
    ppppppiStack_148 = (int ******)&local_c0;
    ppppppiStack_14c = (int ******)0x42e105;
    ppppppiStack_144 = (int ******)__vbaObjSet();
    ppppppiStack_148 = &local_30;
    ppppppiStack_14c = (int ******)&local_c4;
    ppppppiStack_150 = (int ******)&DAT_00414bb4;
    ppppppiStack_154 = (int ******)0x42e118;
    iVar5 = __vbaForEachCollObj();
    while (iVar5 != 0) {
      ppppppiStack_144 = &local_44;
      ppppppiStack_148 = (int ******)local_30;
      ppppppiStack_14c = (int ******)0x42e12d;
      puVar6 = (undefined *)(*(code *)(*local_30)[10])();
      if ((int)puVar6 < 0) {
        ppppppiStack_144 = (int ******)0x28;
        ppppppiStack_148 = (int ******)&DAT_00414bb4;
        ppppppiStack_14c = (int ******)local_30;
        ppppppiStack_154 = (int ******)0x42e141;
        ppppppiStack_150 = (int ******)puVar6;
        __vbaHresultCheckObj();
      }
      ppppppiStack_144 = (int ******)local_20;
      ppppppiStack_148 = (int ******)local_44;
      ppppppiStack_14c = (int ******)0x42e14f;
      sVar3 = __vbaObjIs();
      ppppppiStack_144 = (int ******)0x42e15d;
      __vbaFreeObj();
      if (sVar3 != 0) {
        ppppppiStack_144 = &local_44;
        ppppppiStack_14c = &local_30;
        ppppppiStack_148 = (int ******)0x0;
        ppppppiStack_150 = local_34;
        ppppppiStack_154 = (int ******)0x42e175;
        pppppppiVar7 = (int *******)(*(code *)(*local_34)[8])();
        if ((int)pppppppiVar7 < 0) {
          ppppppiStack_144 = (int ******)0x20;
          ppppppiStack_148 = (int ******)&DAT_00414ba4;
          ppppppiStack_14c = local_34;
          ppppppiStack_154 = (int ******)0x42e189;
          ppppppiStack_150 = (int ******)pppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppiStack_144 = (int ******)0x42e18e;
        __vbaFreeObj();
      }
      ppppppiStack_144 = &local_30;
      ppppppiStack_148 = (int ******)&local_c4;
      ppppppiStack_14c = (int ******)&DAT_00414bb4;
      ppppppiStack_150 = (int ******)0x42e1a4;
      iVar5 = __vbaNextEachCollObj();
    }
    ppppppiStack_144 = (int ******)&local_94;
    ppppppiStack_148 = local_38;
    ppppppiStack_14c = (int ******)0x42e1b9;
    iVar5 = (*(code *)(*local_38)[0xc])();
    if (iVar5 < 0) {
      ppppppiStack_14c = (int ******)0x30;
      ppppppiStack_150 = (int ******)&DAT_00414ba4;
      ppppppiStack_154 = local_38;
      ppppppiStack_15c = (int ******)0x42e1cd;
      ppppppiStack_158 = (int ******)iVar5;
      __vbaHresultCheckObj();
    }
    ppppppiStack_14c = (int ******)&local_98;
    ppppppiStack_150 = local_34;
    ppppppiStack_154 = (int ******)0x42e1dd;
    puVar6 = (undefined *)(*(code *)(*local_34)[0xc])();
    if ((int)puVar6 < 0) {
      ppppppiStack_154 = (int ******)0x30;
      ppppppiStack_158 = (int ******)&DAT_00414ba4;
      ppppppiStack_15c = local_34;
      ppppppiStack_164 = (int ******)0x42e1f1;
      ppppppiStack_160 = (int ******)puVar6;
      __vbaHresultCheckObj();
    }
    if (local_94 == local_98) {
LAB_0042e205:
      ppppppiStack_154 = (int ******)&local_94;
      ppppppiStack_158 = local_38;
      ppppppiStack_15c = (int ******)0x42e215;
      puVar6 = (undefined *)(*(code *)(*local_38)[0xc])();
      if ((int)puVar6 < 0) {
        ppppppiStack_154 = (int ******)0x30;
        ppppppiStack_158 = (int ******)&DAT_00414ba4;
        ppppppiStack_15c = local_38;
        ppppppiStack_164 = (int ******)0x42e229;
        ppppppiStack_160 = (int ******)puVar6;
        __vbaHresultCheckObj();
      }
      if ((int)local_94 < 1) goto LAB_0042e580;
      ppppppiStack_154 = (int ******)&local_94;
      ppppppiStack_158 = local_34;
      ppppppiStack_15c = (int ******)0x42e247;
      pppppiVar8 = (int *****)(*(code *)(*local_34)[0xc])();
      if ((int)pppppiVar8 < 0) {
        ppppppiStack_15c = (int ******)0x30;
        ppppppiStack_160 = (int ******)&DAT_00414ba4;
        ppppppiStack_164 = local_34;
        ppppppiStack_16c = (int ******)0x42e25b;
        pppppiStack_168 = pppppiVar8;
        __vbaHresultCheckObj();
      }
      ppppppiStack_15c = (int ******)0x42e267;
      uVar9 = __vbaI2I4();
      uVar10 = 1;
      while (local_28 = uVar10, (short)uVar10 <= (short)uVar9) {
        ppppppiStack_158 = (int ******)&local_48;
        ppppppiStack_15c = (int ******)local_5c;
        local_54 = (int ****)0x1;
        local_5c[0] = (int ****)0x2;
        ppppppiStack_160 = local_38;
        ppppppiStack_164 = (int ******)0x42e299;
        pppppiStack_170 = (int *****)(*(code *)(*local_38)[9])();
        if ((int)pppppiStack_170 < 0) {
          ppppppiStack_164 = (int ******)0x24;
          pppppiStack_168 = (int *****)&DAT_00414ba4;
          ppppppiStack_16c = local_38;
          ppppiStack_174 = (int ****)0x42e2ad;
          __vbaHresultCheckObj();
        }
        ppppppiVar13 = local_48;
        local_74 = &local_28;
        ppppppiStack_164 = &local_44;
        local_7c[0] = (int ***)0x4002;
        pppppiStack_168 = (int *****)local_7c;
        ppppppiStack_16c = local_34;
        pppppiStack_170 = (int *****)0x42e2ce;
        pppppiVar8 = (int *****)(*(code *)(*local_34)[9])();
        if ((int)pppppiVar8 < 0) {
          pppppiStack_170 = (int *****)0x24;
          ppppiStack_174 = (int ****)&DAT_00414ba4;
          ppppppiStack_178 = local_34;
          pppppiStack_180 = (int *****)0x42e2e2;
          ppppiStack_17c = (int ****)pppppiVar8;
          __vbaHresultCheckObj();
        }
        ppppiStack_174 = &local_4c;
        pppppiStack_170 = local_44;
        local_44 = (int *****)0x0;
        ppppppiStack_178 = (int ******)0x42e2f7;
        __vbaObjSet();
        pppppiStack_170 = (int *****)local_6c;
        ppppiStack_174 = &local_4c;
        ppppppiStack_178 = ppppppiVar13;
        ppppiStack_17c = (int ****)0x42e305;
        ppppppiVar11 = (int ******)(*(code *)(*ppppppiVar13)[0xf])();
        if ((int)ppppppiVar11 < 0) {
          ppppppiStack_158 = (int ******)0x3c;
          ppppppiStack_15c = (int ******)&DAT_00414bb4;
          ppppppiStack_160 = ppppppiVar13;
          pppppiStack_168 = (int *****)0x42e316;
          ppppppiStack_164 = ppppppiVar11;
          __vbaHresultCheckObj();
        }
        ppppppiStack_158 = local_6c;
        ppppppiStack_15c = (int ******)0x42e320;
        piVar12 = (int *)__vbaBoolVarNull();
        ppppppiStack_158 = (int ******)&local_48;
        ppppppiStack_15c = (int ******)&local_4c;
        ppppppiStack_160 = (int ******)0x2;
        ppppppiStack_164 = (int ******)0x42e332;
        __vbaFreeObjList();
        ppppppiStack_164 = local_6c;
        pppppiStack_168 = local_5c;
        ppppppiStack_16c = (int ******)0x2;
        pppppiStack_170 = (int *****)0x42e342;
        __vbaFreeVarList();
        if ((short)piVar12 != 0) break;
        uVar10 = (uint)(ushort)((short)local_28 + 1);
        if (SCARRY2((short)local_28,1)) {
          ppppppiStack_158 = (int ******)0x42e657;
          __vbaErrorOverflow();
          ppppppiStack_164 = (int ******)&LAB_004032d6;
          pppppiStack_168 = ExceptionList;
          ppppppiStack_160 = (int ******)&pcStack_1d8;
          pcStack_1d8 = pcVar2;
          ppppppiStack_15c = (int ******)&DAT_00401788;
          ppppppiStack_158 = (int ******)0x0;
          pppppiStack_1dc = (int *****)ppppppiStack_14c;
          ppppppiStack_1e0 = (int ******)0x42e697;
          ExceptionList = &pppppiStack_168;
          piStack_1d4 = piVar12;
          uStack_1d0 = uVar9;
          ppppppiStack_154 = (int ******)&stack0xfffffffc;
          (*(code *)(*ppppppiStack_14c)[1])();
          pcVar2 = __vbaHresultCheckObj_exref;
          ppppppiStack_16c = (int ******)0x0;
          ppppiStack_174 = (int ****)0x0;
          ppppppiStack_178 = (int ******)0x0;
          ppppiStack_17c = (int ****)0x0;
          pppppiStack_180 = (int *****)0x0;
          auStack_190[0] = 0;
          appppiStack_1a0[0] = (int ****)0x0;
          iStack_1a4 = 0;
          pppppiStack_170 = (int *****)0x1;
          pppppiVar8 = pppppiStack_170;
          while( true ) {
            pppppiStack_170 = pppppiVar8;
            ppppppiStack_1e0 = (int ******)&ppppppiStack_178;
            ppppppiVar13 = (int ******)*ppppppiStack_148;
            pppppiStack_1e8 = (int *****)0x42e6ce;
            pppppiStack_1e4 = (int *****)ppppppiVar13;
            ppppppiVar11 = (int ******)(*(code *)(*ppppppiVar13)[0xf])();
            if ((int)ppppppiVar11 < 0) {
              pppppiStack_1e8 = (int *****)0x3c;
              pppppiStack_1ec = (int *****)&LAB_0041470c;
              pppppiStack_1f8 = (int *****)0x42e6df;
              pppppiStack_1f4 = (int *****)ppppppiVar11;
              ppppppiStack_1f0 = ppppppiVar13;
              __vbaHresultCheckObj();
            }
            ppppppiVar13 = ppppppiStack_178;
            pppppiStack_1e8 = (int *****)&iStack_1a4;
            pppppiStack_1ec = (int *****)ppppppiStack_178;
            ppppppiStack_1f0 = (int ******)0x42e6ee;
            pppppiVar8 = (int *****)(*(code *)(*ppppppiStack_178)[0xc])();
            if ((int)pppppiVar8 < 0) {
              ppppppiStack_1f0 = (int ******)0x30;
              pppppiStack_1f4 = (int *****)&DAT_00414ba4;
              pppppiStack_1f8 = (int *****)ppppppiVar13;
              ppppppiStack_200 = (int ******)0x42e6ff;
              pppppiStack_1fc = pppppiVar8;
              __vbaHresultCheckObj();
            }
            bVar1 = iStack_1a4 < (int)pppppiStack_170;
            ppppppiStack_1f0 = (int ******)0x42e719;
            __vbaFreeObj();
            if (bVar1) break;
            ppppppiStack_1f0 = (int ******)&ppppppiStack_178;
            ppppppiVar13 = (int ******)*ppppppiStack_148;
            pppppiStack_1f8 = (int *****)0x42e731;
            pppppiStack_1f4 = (int *****)ppppppiVar13;
            ppppppiStack_204 = (int ******)(*(code *)(*ppppppiVar13)[0xf])();
            if ((int)ppppppiStack_204 < 0) {
              pppppiStack_1f8 = (int *****)0x3c;
              pppppiStack_1fc = (int *****)&LAB_0041470c;
              ppppppiStack_208 = (int ******)0x42e742;
              ppppppiStack_200 = ppppppiVar13;
              __vbaHresultCheckObj();
            }
            ppppppiVar13 = ppppppiStack_178;
            pppppiStack_198 = (int *****)&pppppiStack_170;
            pppppiStack_1f8 = &ppppiStack_17c;
            pppppiStack_1fc = appppiStack_1a0;
            appppiStack_1a0[0] = (int ****)0x4003;
            ppppppiStack_200 = ppppppiStack_178;
            ppppppiStack_204 = (int ******)0x42e762;
            ppppppiVar11 = (int ******)(*(code *)(*ppppppiStack_178)[9])();
            if ((int)ppppppiVar11 < 0) {
              ppppppiStack_204 = (int ******)0x24;
              ppppppiStack_208 = (int ******)&DAT_00414ba4;
              pppppiStack_20c = (int *****)ppppppiVar13;
              pppppiStack_214 = (int *****)0x42e773;
              pppppiStack_210 = (int *****)ppppppiVar11;
              __vbaHresultCheckObj();
            }
            ppppppiStack_208 = (int ******)&ppppppiStack_16c;
            ppppppiStack_204 = (int ******)ppppiStack_17c;
            ppppiStack_17c = (int ****)0x0;
            pppppiStack_20c = (int *****)0x42e784;
            __vbaObjSet();
            ppppppiStack_204 = (int ******)0x42e78d;
            __vbaFreeObj();
            ppppppiStack_204 = (int ******)&ppppppiStack_178;
            ppppppiStack_208 = ppppppiStack_16c;
            pppppiStack_20c = (int *****)0x42e79a;
            ppppppiVar11 = (int ******)(*(code *)(*ppppppiStack_16c)[10])();
            if ((int)ppppppiVar11 < 0) {
              ppppppiStack_1e0 = (int ******)0x28;
              pppppiStack_1e4 = (int *****)&DAT_00414bb4;
              pppppiStack_1e8 = (int *****)ppppppiStack_16c;
              ppppppiStack_1f0 = (int ******)0x42e7ae;
              pppppiStack_1ec = (int *****)ppppppiVar11;
              __vbaHresultCheckObj();
            }
            ppppppiStack_1e0 = ppppppiStack_14c;
            pppppiStack_1e4 = (int *****)ppppppiStack_178;
            pppppiStack_1e8 = (int *****)0x42e7bc;
            sVar3 = __vbaObjIs();
            ppppppiStack_1e0 = (int ******)0x42e7c8;
            __vbaFreeObj();
            if (sVar3 == 0) {
              pppppiVar8 = (int *****)((int)pppppiStack_170 + 1);
              if (SCARRY4((int)pppppiStack_170,1)) {
                ppppppiStack_1e0 = (int ******)0x42ea49;
                __vbaErrorOverflow();
                piVar12 = piStack_1d4;
                pppppiStack_1ec = (int *****)&LAB_004032d6;
                ppppppiStack_1f0 = ExceptionList;
                uStack_234 = 0;
                pcStack_238 = pcVar2;
                pppppiStack_1e8 = (int *****)&uStack_23c;
                pppppiStack_1e4 = (int *****)&DAT_00401798;
                ppppppiStack_1e0 = (int ******)0x0;
                ExceptionList = &ppppppiStack_1f0;
                uStack_23c = CONCAT22((short)((uint)ppppppiVar13 >> 0x10),sVar3);
                pppppiStack_1dc = (int *****)&ppppppiStack_154;
                (**(code **)(*piStack_1d4 + 4))(piStack_1d4);
                pppppiStack_1f4 = (int *****)0x0;
                pppppiStack_1f8 = (int *****)0x0;
                ppppppiStack_208 = (int ******)0x0;
                puStack_218 = (undefined *)0x0;
                iStack_220 = 0;
                uStack_224 = 0;
                uVar9 = __vbaCastObj(0,&DAT_0041352c);
                uVar9 = __vbaObjSet(&pppppiStack_1f8,uVar9);
                __vbaObjSetAddref(piVar12 + 0x1c,uVar9);
                __vbaFreeObj();
                uVar9 = __vbaCastObj(0,&DAT_0041352c);
                uVar9 = __vbaObjSet(&pppppiStack_1f8,uVar9);
                __vbaObjSetAddref(piVar12 + 0x1d,uVar9);
                __vbaFreeObj();
                if (piVar12[0x12] == 2) {
                  uVar15 = 0;
                  uVar9 = __vbaVarLateMemCallLd(&puStack_218,piVar12 + 0x13,L"Fields",0);
                  uVar9 = __vbaObjVar(uVar9);
                  uVar9 = __vbaObjSetAddref(&iStack_220,uVar9);
                  iVar5 = __vbaForEachCollObj(&DAT_00414268,&uStack_224,&pppppiStack_1f4,uVar9);
                  __vbaFreeVar(uVar15);
                  while (iVar5 != 0) {
                    iVar5 = (*(code *)(*pppppiStack_1f4)[0x21])(pppppiStack_1f4);
                    if (iVar5 < 0) {
                      __vbaHresultCheckObj(iVar5,pppppiStack_1f4,&DAT_00414268,0x84);
                    }
                    iVar5 = __vbaNextEachCollObj(&DAT_00414268,&uStack_224,&pppppiStack_1f4);
                  }
                }
                __vbaFreeObjList(2,&iStack_220,&uStack_224,&LAB_0042ebc2);
                __vbaFreeObj();
                return;
              }
            }
            else {
              ppppppiStack_1e0 = (int ******)&ppppppiStack_178;
              ppppppiVar13 = (int ******)*ppppppiStack_148;
              pppppiStack_1e8 = (int *****)0x42e7dc;
              pppppiStack_1e4 = (int *****)ppppppiVar13;
              ppppppiVar11 = (int ******)(*(code *)(*ppppppiVar13)[0xf])();
              if ((int)ppppppiVar11 < 0) {
                pppppiStack_1e8 = (int *****)0x3c;
                pppppiStack_1ec = (int *****)&LAB_0041470c;
                pppppiStack_1f8 = (int *****)0x42e7ed;
                pppppiStack_1f4 = (int *****)ppppppiVar11;
                ppppppiStack_1f0 = ppppppiVar13;
                __vbaHresultCheckObj();
              }
              ppppppiVar13 = ppppppiStack_178;
              pppppiStack_198 = (int *****)&pppppiStack_170;
              pppppiStack_1e8 = appppiStack_1a0;
              appppiStack_1a0[0] = (int ****)0x4003;
              pppppiStack_1ec = (int *****)ppppppiStack_178;
              ppppppiStack_1f0 = (int ******)0x42e809;
              ppppppiVar11 = (int ******)(*(code *)(*ppppppiStack_178)[0xd])();
              if ((int)ppppppiVar11 < 0) {
                ppppppiStack_1e0 = (int ******)0x34;
                pppppiStack_1e4 = (int *****)&DAT_00414ba4;
                pppppiStack_1e8 = (int *****)ppppppiVar13;
                ppppppiStack_1f0 = (int ******)0x42e81a;
                pppppiStack_1ec = (int *****)ppppppiVar11;
                __vbaHresultCheckObj();
              }
              ppppppiStack_1e0 = (int ******)0x42e823;
              __vbaFreeObj();
              pppppiVar8 = pppppiStack_170;
            }
          }
          if (*(short *)(ppppppiStack_14c + 0x10) == 0) {
            ppppppiStack_1f0 = (int ******)&ppppppiStack_178;
            ppppppiVar13 = (int ******)*ppppppiStack_148;
            pppppiStack_1f8 = (int *****)0x42e8db;
            pppppiStack_1f4 = (int *****)ppppppiVar13;
            pppppppiVar7 = (int *******)(*(code *)(*ppppppiVar13)[0xf])();
            if ((int)pppppppiVar7 < 0) {
              pppppiStack_1f8 = (int *****)0x3c;
              pppppiStack_1fc = (int *****)&LAB_0041470c;
              ppppppiStack_208 = (int ******)0x42e8ec;
              ppppppiStack_204 = (int ******)pppppppiVar7;
              ppppppiStack_200 = ppppppiVar13;
              __vbaHresultCheckObj();
            }
            ppppppiVar13 = ppppppiStack_178;
            pppppiStack_1fc = &ppppiStack_17c;
            pppppiStack_1f8 = (int *****)ppppppiStack_14c;
            ppppppiStack_200 = (int ******)0x42e8fd;
            __vbaObjSetAddref();
            pppppiStack_1f8 = (int *****)&pppppiStack_180;
            pppppiStack_1fc = (int *****)(ppppppiStack_14c + 0xd);
            ppppppiStack_200 = (int ******)&ppppiStack_17c;
            ppppppiStack_204 = ppppppiVar13;
            ppppppiStack_208 = (int ******)0x42e912;
            iVar5 = (*(code *)(*ppppppiVar13)[7])();
            if (iVar5 < 0) {
              ppppppiStack_200 = (int ******)0x1c;
              ppppppiStack_204 = (int ******)&DAT_00414ba4;
              ppppppiStack_208 = ppppppiVar13;
              pppppiStack_210 = (int *****)0x42e923;
              pppppiStack_20c = (int *****)iVar5;
              __vbaHresultCheckObj();
            }
            ppppppiStack_200 = (int ******)pppppiStack_180;
            pppppiStack_180 = (int *****)0x0;
            ppppppiStack_204 = (int ******)&ppppppiStack_16c;
            ppppppiStack_208 = (int ******)0x42e934;
            __vbaObjSet();
          }
          else {
            ppppppiStack_1f0 = (int ******)&ppppppiStack_178;
            ppppppiVar13 = (int ******)*ppppppiStack_148;
            pppppiStack_1f8 = (int *****)0x42e858;
            pppppiStack_1f4 = (int *****)ppppppiVar13;
            pppppppiVar7 = (int *******)(*(code *)(*ppppppiVar13)[0xf])();
            if ((int)pppppppiVar7 < 0) {
              pppppiStack_1f8 = (int *****)0x3c;
              pppppiStack_1fc = (int *****)&LAB_0041470c;
              ppppppiStack_208 = (int ******)0x42e869;
              ppppppiStack_204 = (int ******)pppppppiVar7;
              ppppppiStack_200 = ppppppiVar13;
              __vbaHresultCheckObj();
            }
            ppppppiVar13 = ppppppiStack_178;
            pppppiStack_1f8 = (int *****)0x42e877;
            __vbaStrCopy();
            pppppiStack_1f4 = &ppppiStack_17c;
            ppppppiStack_1f0 = ppppppiStack_14c;
            pppppiStack_1f8 = (int *****)0x42e885;
            __vbaObjSetAddref();
            ppppppiStack_1f0 = &pppppiStack_180;
            pppppiStack_1f4 = &ppppiStack_174;
            pppppiStack_1f8 = &ppppiStack_17c;
            pppppiStack_1fc = (int *****)ppppppiVar13;
            ppppppiStack_200 = (int ******)0x42e897;
            iVar5 = (*(code *)(*ppppppiVar13)[7])();
            if (iVar5 < 0) {
              ppppppiStack_200 = (int ******)0x1c;
              ppppppiStack_204 = (int ******)&DAT_00414ba4;
              ppppppiStack_208 = ppppppiVar13;
              pppppiStack_210 = (int *****)0x42e8a8;
              pppppiStack_20c = (int *****)iVar5;
              __vbaHresultCheckObj();
            }
            ppppppiStack_204 = (int ******)&ppppppiStack_16c;
            ppppppiStack_200 = (int ******)pppppiStack_180;
            pppppiStack_180 = (int *****)0x0;
            ppppppiStack_208 = (int ******)0x42e8b9;
            __vbaObjSet();
            ppppppiStack_200 = (int ******)0x42e8c2;
            __vbaFreeStr();
          }
          ppppppiStack_200 = (int ******)&ppppppiStack_178;
          ppppppiStack_204 = (int ******)&ppppiStack_17c;
          ppppppiStack_208 = (int ******)0x2;
          pppppiStack_20c = (int *****)0x42e944;
          __vbaFreeObjList();
          ppppppiVar13 = ppppppiStack_14c;
          ppppppiStack_200 = (int ******)auStack_190;
          ppppppiStack_204 = ppppppiStack_14c;
          ppppppiStack_208 = (int ******)0x42e954;
          iVar5 = (*(code *)(*ppppppiStack_14c)[0x17])();
          if (iVar5 < 0) {
            ppppppiStack_208 = (int ******)0x5c;
            pppppiStack_20c = (int *****)&DAT_00414268;
            pppppiStack_210 = (int *****)ppppppiVar13;
            puStack_218 = (undefined *)0x42e963;
            pppppiStack_214 = (int *****)iVar5;
            __vbaHresultCheckObj();
          }
          ppppppiStack_208 = (int ******)auStack_190;
          pppppiStack_20c = (int *****)0x42e96d;
          sVar3 = rtcIsObject();
          ppppppiStack_208 = (int ******)0x42e97b;
          __vbaFreeVar();
          ppppppiVar13 = ppppppiStack_14c;
          ppppppiStack_204 = (int ******)auStack_190;
          ppppppiStack_208 = ppppppiStack_14c;
          if (sVar3 == 0) {
            pppppiStack_20c = (int *****)0x42e9b4;
            puVar6 = (undefined *)(*(code *)(*ppppppiStack_14c)[0x17])();
            if ((int)puVar6 < 0) {
              pppppiStack_20c = (int *****)0x5c;
              pppppiStack_210 = (int *****)&DAT_00414268;
              pppppiStack_214 = (int *****)ppppppiVar13;
              pppppiStack_21c = (int *****)0x42e9c3;
              puStack_218 = puVar6;
              __vbaHresultCheckObj();
            }
            pppppiStack_20c = (int *****)auStack_190;
            pppppiStack_210 = (int *****)ppppppiStack_16c;
            pppppiStack_214 = (int *****)0x42e9d0;
            iVar14 = (*(code *)(*ppppppiStack_16c)[0xd])();
            iVar5 = iStack_220;
            ppppppiVar13 = (int ******)pppppiStack_21c;
            pppppiStack_21c = (int *****)ppppppiStack_16c;
          }
          else {
            pppppiStack_20c = (int *****)0x42e98d;
            puVar6 = (undefined *)(*(code *)(*ppppppiStack_14c)[0x17])();
            if ((int)puVar6 < 0) {
              pppppiStack_20c = (int *****)0x5c;
              pppppiStack_210 = (int *****)&DAT_00414268;
              pppppiStack_214 = (int *****)ppppppiVar13;
              pppppiStack_21c = (int *****)0x42e99c;
              puStack_218 = puVar6;
              __vbaHresultCheckObj();
            }
            pppppiStack_20c = (int *****)auStack_190;
            pppppiStack_210 = (int *****)ppppppiStack_16c;
            pppppiStack_214 = (int *****)0x42e9a9;
            iVar14 = (*(code *)(*ppppppiStack_16c)[0xd])();
            iVar5 = iStack_220;
            ppppppiVar13 = (int ******)pppppiStack_21c;
            pppppiStack_21c = (int *****)ppppppiStack_16c;
          }
          iStack_220 = iVar14;
          ppppppiStack_16c = (int ******)pppppiStack_21c;
          if (iStack_220 < 0) {
            pppppiStack_214 = (int *****)0x34;
            puStack_218 = &DAT_00414bb4;
            uStack_224 = 0x42e9e4;
            __vbaHresultCheckObj();
            iVar5 = iStack_220;
            ppppppiVar13 = (int ******)pppppiStack_21c;
          }
          pppppiStack_21c = (int *****)ppppppiVar13;
          iStack_220 = iVar5;
          pppppiStack_214 = (int *****)0x42e9e9;
          __vbaFreeVar();
          pppppiStack_210 = (int *****)&LAB_0042ea24;
          pppppiStack_214 = (int *****)0x42ea23;
          __vbaFreeObj();
          return;
        }
      }
      ppppppiStack_158 = (int ******)&local_94;
      ppppppiStack_15c = local_34;
      ppppppiStack_160 = (int ******)0x42e36e;
      puVar6 = (undefined *)(*(code *)(*local_34)[0xc])();
      if ((int)puVar6 < 0) {
        ppppppiStack_154 = (int ******)0x30;
        ppppppiStack_158 = (int ******)&DAT_00414ba4;
        ppppppiStack_15c = local_34;
        ppppppiStack_164 = (int ******)0x42e382;
        ppppppiStack_160 = (int ******)puVar6;
        __vbaHresultCheckObj();
      }
      if ((int)(short)local_28 <= (int)local_94) {
        ppppppiStack_154 = (int ******)local_5c;
        local_54 = (int ****)0x1;
        local_5c[0] = (int ****)0x2;
        ppppppiStack_158 = local_38;
        ppppppiStack_15c = (int ******)0x42e3ad;
        pppppiVar8 = (int *****)(*(code *)(*local_38)[0xd])();
        if ((int)pppppiVar8 < 0) {
          ppppppiStack_15c = (int ******)0x34;
          ppppppiStack_160 = (int ******)&DAT_00414ba4;
          ppppppiStack_164 = local_38;
          ppppppiStack_16c = (int ******)0x42e3c1;
          pppppiStack_168 = pppppiVar8;
          __vbaHresultCheckObj();
        }
        ppppppiStack_15c = (int ******)0x42e3ca;
        __vbaFreeVar();
        local_74 = &local_28;
        ppppppiStack_158 = (int ******)local_7c;
        local_7c[0] = (int ***)0x4002;
        ppppppiStack_15c = local_34;
        ppppppiStack_160 = (int ******)0x42e3e4;
        puVar6 = (undefined *)(*(code *)(*local_34)[0xd])();
        if ((int)puVar6 < 0) {
          ppppppiStack_154 = (int ******)0x34;
          ppppppiStack_158 = (int ******)&DAT_00414ba4;
          ppppppiStack_15c = local_34;
          ppppppiStack_164 = (int ******)0x42e3fc;
          ppppppiStack_160 = (int ******)puVar6;
          __vbaHresultCheckObj();
        }
        goto LAB_0042e205;
      }
    }
    goto LAB_0042e596;
  }
  ppppppiStack_13c = (int ******)0x42e404;
  ppppppiStack_148 = (int ******)(**(code **)(*piVar12 + 0x3c))();
  if ((int)ppppppiStack_148 < 0) {
    ppppppiStack_13c = (int ******)0x3c;
    pppppiStack_140 = (int *****)&LAB_0041470c;
    ppppppiStack_14c = (int ******)0x42e415;
    ppppppiStack_144 = (int ******)piVar12;
    __vbaHresultCheckObj();
  }
  pppppiVar8 = local_44;
  ppppppiStack_13c = (int ******)&local_48;
  pppppiStack_140 = &local_2c;
  ppppppiStack_144 = (int ******)local_44;
  ppppppiStack_148 = (int ******)0x42e428;
  ppppppiVar13 = (int ******)(*(code *)(*local_44)[0xb])();
  if ((int)ppppppiVar13 < 0) {
    ppppppiStack_148 = (int ******)0x2c;
    ppppppiStack_14c = (int ******)&DAT_00414ba4;
    ppppppiStack_150 = (int ******)pppppiVar8;
    ppppppiStack_158 = (int ******)0x42e439;
    ppppppiStack_154 = ppppppiVar13;
    __vbaHresultCheckObj();
  }
  ppppppiStack_14c = &local_1c;
  ppppppiStack_148 = local_48;
  local_48 = (int ******)0x0;
  ppppppiStack_150 = (int ******)0x42e44a;
  __vbaObjSet();
  ppppppiStack_148 = (int ******)0x42e455;
  __vbaFreeObj();
  ppppppiStack_148 = &local_44;
  ppppppiStack_14c = (int ******)local_b4[0];
  ppppppiStack_150 = (int ******)0x42e465;
  ppppppiStack_15c = (int ******)(*(code *)(*local_b4[0])[0xf])();
  if ((int)ppppppiStack_15c < 0) {
    ppppppiStack_150 = (int ******)0x3c;
    ppppppiStack_154 = (int ******)&LAB_0041470c;
    ppppppiStack_158 = (int ******)local_b4[0];
    ppppppiStack_160 = (int ******)0x42e47c;
    __vbaHresultCheckObj();
  }
  pppppiVar8 = local_44;
  ppppppiStack_150 = (int ******)&local_48;
  ppppppiStack_154 = (int ******)&local_20;
  ppppppiStack_158 = (int ******)local_44;
  ppppppiStack_15c = (int ******)0x42e48f;
  puVar6 = (undefined *)(*(code *)(*local_44)[0xb])();
  if ((int)puVar6 < 0) {
    ppppppiStack_154 = (int ******)0x2c;
    ppppppiStack_158 = (int ******)&DAT_00414ba4;
    ppppppiStack_15c = (int ******)pppppiVar8;
    ppppppiStack_164 = (int ******)0x42e4a0;
    ppppppiStack_160 = (int ******)puVar6;
    __vbaHresultCheckObj();
  }
  ppppppiStack_158 = &local_30;
  ppppppiStack_154 = local_48;
  local_48 = (int ******)0x0;
  ppppppiStack_15c = (int ******)0x42e4b5;
  __vbaObjSet();
  ppppppiStack_154 = (int ******)0x42e4ba;
  __vbaFreeObj();
  ppppppiStack_154 = (int ******)0x0;
  ppppppiStack_158 = (int ******)local_30;
  ppppppiStack_15c = (int ******)0x42e4c8;
  sVar3 = __vbaObjIs();
  ppppppiStack_154 = (int ******)0x0;
  ppppppiStack_158 = (int ******)local_1c;
  ppppppiStack_15c = (int ******)0x42e4d9;
  sVar4 = __vbaObjIs();
  if (sVar3 == 0 || sVar4 == 0) {
    ppppppiStack_154 = (int ******)0x0;
    ppppppiStack_158 = (int ******)local_30;
    ppppppiStack_15c = (int ******)0x42e4ef;
    sVar3 = __vbaObjIs();
    ppppppiStack_154 = (int ******)0x0;
    ppppppiStack_158 = (int ******)local_1c;
    ppppppiStack_15c = (int ******)0x42e500;
    sVar4 = __vbaObjIs();
    if (sVar4 != 0 || sVar3 != 0) goto LAB_0042e596;
    ppppppiStack_154 = &local_3c;
    ppppppiStack_158 = (int ******)local_1c;
    ppppppiStack_15c = (int ******)0x42e51b;
    pppppiVar8 = (int *****)(*(code *)(*local_1c)[0xb])();
    if ((int)pppppiVar8 < 0) {
      ppppppiStack_15c = (int ******)0x2c;
      ppppppiStack_160 = (int ******)&DAT_00414bb4;
      ppppppiStack_164 = (int ******)local_1c;
      ppppppiStack_16c = (int ******)0x42e52f;
      pppppiStack_168 = pppppiVar8;
      __vbaHresultCheckObj();
    }
    ppppppiStack_15c = (int ******)&local_40;
    ppppppiStack_160 = (int ******)local_30;
    ppppppiStack_164 = (int ******)0x42e53c;
    ppppppiVar13 = (int ******)(*(code *)(*local_30)[0xb])();
    if ((int)ppppppiVar13 < 0) {
      ppppppiStack_154 = (int ******)0x2c;
      ppppppiStack_158 = (int ******)&DAT_00414bb4;
      ppppppiStack_15c = (int ******)local_30;
      ppppppiStack_164 = (int ******)0x42e550;
      ppppppiStack_160 = ppppppiVar13;
      __vbaHresultCheckObj();
    }
    ppppppiStack_154 = (int ******)local_3c;
    ppppppiStack_158 = (int ******)local_40;
    ppppppiStack_15c = (int ******)0x42e55e;
    iVar5 = __vbaStrCmp();
    ppppppiStack_154 = (int ******)&local_40;
    ppppppiStack_158 = &local_3c;
    ppppppiStack_15c = (int ******)0x2;
    ppppppiStack_160 = (int ******)0x42e578;
    __vbaFreeStrList();
    if (iVar5 != 0) goto LAB_0042e596;
  }
LAB_0042e580:
  ppppppiStack_158 = local_b4;
  ppppppiStack_154 = (int ******)0x0;
  ppppppiStack_15c = (int ******)0x42e58f;
  __vbaObjSetAddref();
  local_24 = 0xffffffff;
LAB_0042e596:
  ppppppiStack_154 = (int ******)&LAB_0042e628;
  ppppppiStack_158 = (int ******)&local_c4;
  ppppppiStack_15c = (int ******)&local_c0;
  ppppppiStack_160 = (int ******)&local_bc;
  ppppppiStack_164 = (int ******)&local_b8;
  pppppiStack_168 = (int *****)local_b4;
  ppppppiStack_16c = (int ******)0x5;
  pppppiStack_170 = (int *****)0x42e600;
  __vbaFreeObjList();
  ppppppiStack_158 = (int ******)0x42e60e;
  __vbaFreeObj();
  ppppppiStack_158 = (int ******)0x42e613;
  __vbaFreeObj();
  ppppppiStack_158 = (int ******)0x42e618;
  __vbaFreeObj();
  ppppppiStack_158 = (int ******)0x42e61d;
  __vbaFreeObj();
  ppppppiStack_158 = (int ******)0x42e622;
  __vbaFreeObj();
  ppppppiStack_158 = (int ******)0x42e627;
  __vbaFreeObj();
  return;
}

/* ---- 0x42e660 (FUN_0042e660) [estimated] strings: Fields ---- */
void __cdecl FUN_0042e660(int ***param_1,int *param_2)

{
  int ****ppppiVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  short sVar5;
  int ****ppppiVar6;
  int ***pppiVar7;
  int *****pppppiVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *unaff_ESI;
  undefined4 uVar13;
  undefined4 uStack_ec;
  code *pcStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_d4;
  int iStack_d0;
  int *piStack_cc;
  undefined *puStack_c8;
  int ***pppiStack_c4;
  int ***pppiStack_c0;
  int ****ppppiStack_bc;
  int ****ppppiStack_b8;
  int ****ppppiStack_b4;
  int ****ppppiStack_b0;
  int ****ppppiStack_ac;
  int ****ppppiStack_a8;
  int ****ppppiStack_a4;
  int ****ppppiStack_a0;
  int ****ppppiStack_9c;
  int ****ppppiStack_98;
  int ****ppppiStack_94;
  int ****ppppiStack_90;
  int ***pppiStack_8c;
  int local_54;
  int ***local_50 [2];
  int *local_48;
  undefined4 local_40 [4];
  int ***local_30;
  int ***local_2c;
  int ****local_28;
  int **local_24;
  int local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff78;
  local_c = &DAT_00401788;
  local_8 = 0;
  pppiStack_8c = param_1;
  ppppiStack_90 = (int ****)0x42e697;
  ExceptionList = &pvStack_18;
  (*(code *)(*param_1)[1])();
  pcVar3 = __vbaHresultCheckObj_exref;
  local_1c = (int *)0x0;
  local_24 = (int **)0x0;
  local_28 = (int ****)0x0;
  local_2c = (int ***)0x0;
  local_30 = (int ***)0x0;
  local_40[0] = 0;
  local_50[0] = (int ***)0x0;
  local_54 = 0;
  local_20 = 1;
  iVar12 = local_20;
  while( true ) {
    local_20 = iVar12;
    ppppiStack_90 = (int ****)&local_28;
    ppppiVar1 = (int ****)*param_2;
    ppppiStack_98 = (int ****)0x42e6ce;
    ppppiStack_94 = ppppiVar1;
    ppppiVar6 = (int ****)(*(code *)(*ppppiVar1)[0xf])();
    if ((int)ppppiVar6 < 0) {
      ppppiStack_98 = (int ****)0x3c;
      ppppiStack_9c = (int ****)&LAB_0041470c;
      ppppiStack_a8 = (int ****)0x42e6df;
      ppppiStack_a4 = ppppiVar6;
      ppppiStack_a0 = ppppiVar1;
      __vbaHresultCheckObj();
    }
    ppppiVar1 = local_28;
    ppppiStack_98 = (int ****)&local_54;
    ppppiStack_9c = local_28;
    ppppiStack_a0 = (int ****)0x42e6ee;
    ppppiVar6 = (int ****)(*(code *)(*local_28)[0xc])();
    if ((int)ppppiVar6 < 0) {
      ppppiStack_a0 = (int ****)0x30;
      ppppiStack_a4 = (int ****)&DAT_00414ba4;
      ppppiStack_a8 = ppppiVar1;
      ppppiStack_b0 = (int ****)0x42e6ff;
      ppppiStack_ac = ppppiVar6;
      __vbaHresultCheckObj();
    }
    bVar2 = local_54 < local_20;
    ppppiStack_a0 = (int ****)0x42e719;
    __vbaFreeObj();
    if (bVar2) break;
    ppppiStack_a0 = (int ****)&local_28;
    ppppiVar1 = (int ****)*param_2;
    ppppiStack_a8 = (int ****)0x42e731;
    ppppiStack_a4 = ppppiVar1;
    ppppiStack_b4 = (int ****)(*(code *)(*ppppiVar1)[0xf])();
    if ((int)ppppiStack_b4 < 0) {
      ppppiStack_a8 = (int ****)0x3c;
      ppppiStack_ac = (int ****)&LAB_0041470c;
      ppppiStack_b8 = (int ****)0x42e742;
      ppppiStack_b0 = ppppiVar1;
      __vbaHresultCheckObj();
    }
    ppppiVar1 = local_28;
    local_48 = &local_20;
    ppppiStack_a8 = &local_2c;
    ppppiStack_ac = local_50;
    local_50[0] = (int ***)0x4003;
    ppppiStack_b0 = local_28;
    ppppiStack_b4 = (int ****)0x42e762;
    pppiVar7 = (int ***)(*(code *)(*local_28)[9])();
    if ((int)pppiVar7 < 0) {
      ppppiStack_b4 = (int ****)0x24;
      ppppiStack_b8 = (int ****)&DAT_00414ba4;
      ppppiStack_bc = ppppiVar1;
      pppiStack_c4 = (int ***)0x42e773;
      pppiStack_c0 = pppiVar7;
      __vbaHresultCheckObj();
    }
    ppppiStack_b8 = (int ****)&local_1c;
    ppppiStack_b4 = (int ****)local_2c;
    local_2c = (int ***)0x0;
    ppppiStack_bc = (int ****)0x42e784;
    __vbaObjSet();
    ppppiStack_b4 = (int ****)0x42e78d;
    __vbaFreeObj();
    ppppiStack_b4 = (int ****)&local_28;
    ppppiStack_b8 = (int ****)local_1c;
    ppppiStack_bc = (int ****)0x42e79a;
    ppppiVar6 = (int ****)(**(code **)(*local_1c + 0x28))();
    if ((int)ppppiVar6 < 0) {
      ppppiStack_90 = (int ****)0x28;
      ppppiStack_94 = (int ****)&DAT_00414bb4;
      ppppiStack_98 = (int ****)local_1c;
      ppppiStack_a0 = (int ****)0x42e7ae;
      ppppiStack_9c = ppppiVar6;
      __vbaHresultCheckObj();
    }
    ppppiStack_90 = (int ****)param_1;
    ppppiStack_94 = local_28;
    ppppiStack_98 = (int ****)0x42e7bc;
    sVar5 = __vbaObjIs();
    ppppiStack_90 = (int ****)0x42e7c8;
    __vbaFreeObj();
    if (sVar5 == 0) {
      iVar12 = local_20 + 1;
      if (SCARRY4(local_20,1)) {
        ppppiStack_90 = (int ****)0x42ea49;
        __vbaErrorOverflow();
        ppppiStack_9c = (int ****)&LAB_004032d6;
        ppppiStack_a0 = ExceptionList;
        uStack_e4 = 0;
        pcStack_e8 = pcVar3;
        ppppiStack_98 = (int ****)&uStack_ec;
        ppppiStack_94 = (int ****)&DAT_00401798;
        ppppiStack_90 = (int ****)0x0;
        ExceptionList = &ppppiStack_a0;
        uStack_ec = CONCAT22((short)((uint)ppppiVar1 >> 0x10),sVar5);
        pppiStack_8c = (int ***)&stack0xfffffffc;
        (**(code **)(*unaff_ESI + 4))(unaff_ESI);
        ppppiStack_a4 = (int ****)0x0;
        ppppiStack_a8 = (int ****)0x0;
        ppppiStack_b8 = (int ****)0x0;
        puStack_c8 = (undefined *)0x0;
        iStack_d0 = 0;
        uStack_d4 = 0;
        uVar11 = __vbaCastObj(0,&DAT_0041352c);
        uVar11 = __vbaObjSet(&ppppiStack_a8,uVar11);
        __vbaObjSetAddref(unaff_ESI + 0x1c,uVar11);
        __vbaFreeObj();
        uVar11 = __vbaCastObj(0,&DAT_0041352c);
        uVar11 = __vbaObjSet(&ppppiStack_a8,uVar11);
        __vbaObjSetAddref(unaff_ESI + 0x1d,uVar11);
        __vbaFreeObj();
        if (unaff_ESI[0x12] == 2) {
          uVar13 = 0;
          uVar11 = __vbaVarLateMemCallLd(&puStack_c8,unaff_ESI + 0x13,L"Fields",0);
          uVar11 = __vbaObjVar(uVar11);
          uVar11 = __vbaObjSetAddref(&iStack_d0,uVar11);
          iVar12 = __vbaForEachCollObj(&DAT_00414268,&uStack_d4,&ppppiStack_a4,uVar11);
          __vbaFreeVar(uVar13);
          while (iVar12 != 0) {
            iVar12 = (*(code *)(*ppppiStack_a4)[0x21])(ppppiStack_a4);
            if (iVar12 < 0) {
              __vbaHresultCheckObj(iVar12,ppppiStack_a4,&DAT_00414268,0x84);
            }
            iVar12 = __vbaNextEachCollObj(&DAT_00414268,&uStack_d4,&ppppiStack_a4);
          }
        }
        __vbaFreeObjList(2,&iStack_d0,&uStack_d4,&LAB_0042ebc2);
        __vbaFreeObj();
        return;
      }
    }
    else {
      ppppiStack_90 = (int ****)&local_28;
      ppppiVar1 = (int ****)*param_2;
      ppppiStack_98 = (int ****)0x42e7dc;
      ppppiStack_94 = ppppiVar1;
      ppppiVar6 = (int ****)(*(code *)(*ppppiVar1)[0xf])();
      if ((int)ppppiVar6 < 0) {
        ppppiStack_98 = (int ****)0x3c;
        ppppiStack_9c = (int ****)&LAB_0041470c;
        ppppiStack_a8 = (int ****)0x42e7ed;
        ppppiStack_a4 = ppppiVar6;
        ppppiStack_a0 = ppppiVar1;
        __vbaHresultCheckObj();
      }
      ppppiVar1 = local_28;
      local_48 = &local_20;
      ppppiStack_98 = local_50;
      local_50[0] = (int ***)0x4003;
      ppppiStack_9c = local_28;
      ppppiStack_a0 = (int ****)0x42e809;
      ppppiVar6 = (int ****)(*(code *)(*local_28)[0xd])();
      if ((int)ppppiVar6 < 0) {
        ppppiStack_90 = (int ****)0x34;
        ppppiStack_94 = (int ****)&DAT_00414ba4;
        ppppiStack_98 = ppppiVar1;
        ppppiStack_a0 = (int ****)0x42e81a;
        ppppiStack_9c = ppppiVar6;
        __vbaHresultCheckObj();
      }
      ppppiStack_90 = (int ****)0x42e823;
      __vbaFreeObj();
      iVar12 = local_20;
    }
  }
  if (*(short *)(param_1 + 0x10) == 0) {
    ppppiStack_a0 = (int ****)&local_28;
    ppppiVar1 = (int ****)*param_2;
    ppppiStack_a8 = (int ****)0x42e8db;
    ppppiStack_a4 = ppppiVar1;
    pppppiVar8 = (int *****)(*(code *)(*ppppiVar1)[0xf])();
    if ((int)pppppiVar8 < 0) {
      ppppiStack_a8 = (int ****)0x3c;
      ppppiStack_ac = (int ****)&LAB_0041470c;
      ppppiStack_b8 = (int ****)0x42e8ec;
      ppppiStack_b4 = (int ****)pppppiVar8;
      ppppiStack_b0 = ppppiVar1;
      __vbaHresultCheckObj();
    }
    ppppiVar1 = local_28;
    ppppiStack_ac = &local_2c;
    ppppiStack_a8 = (int ****)param_1;
    ppppiStack_b0 = (int ****)0x42e8fd;
    __vbaObjSetAddref();
    ppppiStack_a8 = &local_30;
    ppppiStack_ac = (int ****)(param_1 + 0xd);
    ppppiStack_b0 = &local_2c;
    ppppiStack_b4 = ppppiVar1;
    ppppiStack_b8 = (int ****)0x42e912;
    iVar12 = (*(code *)(*ppppiVar1)[7])();
    if (iVar12 < 0) {
      ppppiStack_b0 = (int ****)0x1c;
      ppppiStack_b4 = (int ****)&DAT_00414ba4;
      ppppiStack_b8 = ppppiVar1;
      pppiStack_c0 = (int ***)0x42e923;
      ppppiStack_bc = (int ****)iVar12;
      __vbaHresultCheckObj();
    }
    ppppiStack_b0 = (int ****)local_30;
    local_30 = (int ***)0x0;
    ppppiStack_b4 = (int ****)&local_1c;
    ppppiStack_b8 = (int ****)0x42e934;
    __vbaObjSet();
  }
  else {
    ppppiStack_a0 = (int ****)&local_28;
    ppppiVar1 = (int ****)*param_2;
    ppppiStack_a8 = (int ****)0x42e858;
    ppppiStack_a4 = ppppiVar1;
    pppppiVar8 = (int *****)(*(code *)(*ppppiVar1)[0xf])();
    if ((int)pppppiVar8 < 0) {
      ppppiStack_a8 = (int ****)0x3c;
      ppppiStack_ac = (int ****)&LAB_0041470c;
      ppppiStack_b8 = (int ****)0x42e869;
      ppppiStack_b4 = (int ****)pppppiVar8;
      ppppiStack_b0 = ppppiVar1;
      __vbaHresultCheckObj();
    }
    ppppiVar1 = local_28;
    ppppiStack_a8 = (int ****)0x42e877;
    __vbaStrCopy();
    ppppiStack_a4 = &local_2c;
    ppppiStack_a0 = (int ****)param_1;
    ppppiStack_a8 = (int ****)0x42e885;
    __vbaObjSetAddref();
    ppppiStack_a0 = &local_30;
    ppppiStack_a4 = (int ****)&local_24;
    ppppiStack_a8 = &local_2c;
    ppppiStack_ac = ppppiVar1;
    ppppiStack_b0 = (int ****)0x42e897;
    iVar12 = (*(code *)(*ppppiVar1)[7])();
    if (iVar12 < 0) {
      ppppiStack_b0 = (int ****)0x1c;
      ppppiStack_b4 = (int ****)&DAT_00414ba4;
      ppppiStack_b8 = ppppiVar1;
      pppiStack_c0 = (int ***)0x42e8a8;
      ppppiStack_bc = (int ****)iVar12;
      __vbaHresultCheckObj();
    }
    ppppiStack_b4 = (int ****)&local_1c;
    ppppiStack_b0 = (int ****)local_30;
    local_30 = (int ***)0x0;
    ppppiStack_b8 = (int ****)0x42e8b9;
    __vbaObjSet();
    ppppiStack_b0 = (int ****)0x42e8c2;
    __vbaFreeStr();
  }
  ppppiStack_b0 = (int ****)&local_28;
  ppppiStack_b4 = &local_2c;
  ppppiStack_b8 = (int ****)0x2;
  ppppiStack_bc = (int ****)0x42e944;
  __vbaFreeObjList();
  ppppiStack_b0 = (int ****)local_40;
  ppppiStack_b4 = (int ****)param_1;
  ppppiStack_b8 = (int ****)0x42e954;
  iVar12 = (*(code *)(*param_1)[0x17])();
  if (iVar12 < 0) {
    ppppiStack_b8 = (int ****)0x5c;
    ppppiStack_bc = (int ****)&DAT_00414268;
    pppiStack_c0 = param_1;
    puStack_c8 = (undefined *)0x42e963;
    pppiStack_c4 = (int ***)iVar12;
    __vbaHresultCheckObj();
  }
  ppppiStack_b8 = (int ****)local_40;
  ppppiStack_bc = (int ****)0x42e96d;
  sVar5 = rtcIsObject();
  ppppiStack_b8 = (int ****)0x42e97b;
  __vbaFreeVar();
  ppppiStack_b4 = (int ****)local_40;
  ppppiStack_b8 = (int ****)param_1;
  if (sVar5 == 0) {
    ppppiStack_bc = (int ****)0x42e9b4;
    puVar9 = (undefined *)(*(code *)(*param_1)[0x17])();
    if ((int)puVar9 < 0) {
      ppppiStack_bc = (int ****)0x5c;
      pppiStack_c0 = (int ***)&DAT_00414268;
      pppiStack_c4 = param_1;
      piStack_cc = (int *)0x42e9c3;
      puStack_c8 = puVar9;
      __vbaHresultCheckObj();
    }
    ppppiStack_bc = (int ****)local_40;
    pppiStack_c0 = (int ***)local_1c;
    pppiStack_c4 = (int ***)0x42e9d0;
    iVar10 = (**(code **)(*local_1c + 0x34))();
    iVar12 = iStack_d0;
    piVar4 = piStack_cc;
    piStack_cc = local_1c;
  }
  else {
    ppppiStack_bc = (int ****)0x42e98d;
    puVar9 = (undefined *)(*(code *)(*param_1)[0x17])();
    if ((int)puVar9 < 0) {
      ppppiStack_bc = (int ****)0x5c;
      pppiStack_c0 = (int ***)&DAT_00414268;
      pppiStack_c4 = param_1;
      piStack_cc = (int *)0x42e99c;
      puStack_c8 = puVar9;
      __vbaHresultCheckObj();
    }
    ppppiStack_bc = (int ****)local_40;
    pppiStack_c0 = (int ***)local_1c;
    pppiStack_c4 = (int ***)0x42e9a9;
    iVar10 = (**(code **)(*local_1c + 0x34))();
    iVar12 = iStack_d0;
    piVar4 = piStack_cc;
    piStack_cc = local_1c;
  }
  iStack_d0 = iVar10;
  local_1c = piStack_cc;
  if (iStack_d0 < 0) {
    pppiStack_c4 = (int ***)0x34;
    puStack_c8 = &DAT_00414bb4;
    uStack_d4 = 0x42e9e4;
    __vbaHresultCheckObj();
    iVar12 = iStack_d0;
    piVar4 = piStack_cc;
  }
  piStack_cc = piVar4;
  iStack_d0 = iVar12;
  pppiStack_c4 = (int ***)0x42e9e9;
  __vbaFreeVar();
  pppiStack_c0 = (int ***)&LAB_0042ea24;
  pppiStack_c4 = (int ***)0x42ea23;
  __vbaFreeObj();
  return;
}

/* ---- 0x42ea50 (FUN_0042ea50) [estimated] strings: Fields ---- */
void __cdecl FUN_0042ea50(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 local_40 [4];
  undefined4 local_30;
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
  local_c = &DAT_00401798;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_30 = 0;
  local_40[0] = 0;
  local_48[0] = 0;
  local_4c = 0;
  uVar1 = __vbaCastObj(0,&DAT_0041352c);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  __vbaObjSetAddref(param_1 + 0x1c,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_0041352c);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  __vbaObjSetAddref(param_1 + 0x1d,uVar1);
  __vbaFreeObj();
  if (param_1[0x12] == 2) {
    uVar3 = 0;
    uVar1 = __vbaVarLateMemCallLd(local_40,param_1 + 0x13,L"Fields",0);
    uVar1 = __vbaObjVar(uVar1);
    uVar1 = __vbaObjSetAddref(local_48,uVar1);
    iVar2 = __vbaForEachCollObj(&DAT_00414268,&local_4c,&local_1c,uVar1);
    __vbaFreeVar(uVar3);
    while (iVar2 != 0) {
      iVar2 = (**(code **)(*local_1c + 0x84))(local_1c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414268,0x84);
      }
      iVar2 = __vbaNextEachCollObj(&DAT_00414268,&local_4c,&local_1c);
    }
  }
  __vbaFreeObjList(2,local_48,&local_4c,&LAB_0042ebc2);
  __vbaFreeObj();
  return;
}

/* ---- 0x42ebf0 (FUN_0042ebf0) [estimated] strings:  ---- */
void __cdecl FUN_0042ebf0(int *param_1)

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
  local_c = &DAT_004017a8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  __vbaVarMove();
  __vbaVarMove();
  uVar1 = __vbaCastObj(0,&DAT_0041352c);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(param_1 + 0x1c,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_0041352c);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(param_1 + 0x1d,uVar1);
  __vbaFreeObj();
  return;
}
