/* Object #12 Structure -- ESTIMATED function range; public methods per VB header: GLPrefix, GLDB, ArticleSuffix, Format, LinesAtStartOfEntry, LinesBetweenEntries */
#include "ghidra_types.h"

/* ---- 0x436660 (FUN_00436660) [estimated] strings:  ---- */
void __cdecl FUN_00436660(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401bd0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x4366f0 (FUN_004366f0) [estimated] strings:  ---- */
void __cdecl FUN_004366f0(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00401be0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x436780 (FUN_00436780) [estimated] strings:  ---- */
void __cdecl FUN_00436780(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &LAB_00401bf0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x436810 (FUN_00436810) [estimated] strings:  ---- */
undefined4 FUN_00436810(int *param_1,int *param_2)

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
  local_c = &DAT_00401c00;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x13];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = iVar1;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x436880 (FUN_00436880) [estimated] strings:  ---- */
undefined4 FUN_00436880(int *param_1,undefined2 *param_2)

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
  local_c = &DAT_00401c08;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = param_1[0x14];
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (short)iVar1;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4368f0 (FUN_004368f0) [estimated] strings:  ---- */
undefined4 FUN_004368f0(int *param_1,undefined2 *param_2)

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
  local_c = &DAT_00401c10;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  uVar1 = *(undefined2 *)((int)param_1 + 0x52);
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = uVar1;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x436960 (FUN_00436960) [estimated] strings:  ---- */
void __cdecl FUN_00436960(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401c18;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x17]);
  return;
}

/* ---- 0x4369f0 (FUN_004369f0) [estimated] strings:  ---- */
void __cdecl FUN_004369f0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401c28;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x16]);
  return;
}

/* ---- 0x436a80 (FUN_00436a80) [estimated] strings:  ---- */
void __cdecl FUN_00436a80(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401c38;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x15]);
  return;
}

/* ---- 0x436b10 (FUN_00436b10) [estimated] strings:  ---- */
void __cdecl FUN_00436b10(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00401c48;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x18]);
  return;
}

/* ---- 0x436ba0 (FUN_00436ba0) [estimated] strings:  ---- */
void __cdecl FUN_00436ba0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
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
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00401c58;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  *param_3 = 0;
  local_28 = 0;
  iVar3 = (**(code **)(*(int *)param_1[0x15] + 0x2c))((int *)param_1[0x15],param_2,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1[0x15],&LAB_00414248,0x2c);
  }
  uVar1 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_20,uVar1);
  sVar2 = __vbaObjIs(local_20,0);
  if (sVar2 == 0) {
    iVar3 = (**(code **)(*local_20 + 0x4c))(local_20,&local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_20,&DAT_00414268,0x4c);
    }
    local_24 = 0;
    __vbaStrMove();
  }
  __vbaFreeObj(&LAB_00436c99);
  return;
}

/* ---- 0x436cc0 (FUN_00436cc0) [estimated] strings:  ---- */
void __cdecl FUN_00436cc0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_34 [2];
  undefined4 local_2c;
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
  local_10 = &stack0xffffffb4;
  local_c = &DAT_00401c68;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_34[0] = 0;
  *param_2 = 0;
  uVar1 = __vbaNew(&DAT_0040888c);
  __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(&local_28,param_1);
  iVar2 = (**(code **)(*local_1c + 0x48))(local_1c,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&LAB_0041470c,0x48);
  }
  __vbaFreeObj();
  iVar2 = __vbaForEachCollObj(&DAT_00414268,local_34,&local_20,param_1[0x15]);
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*local_20 + 0x2c))(local_20,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_00414268,0x2c);
    }
    if (((short)local_2c != 0) &&
       (iVar2 = (**(code **)(*local_20 + 0x80))(local_20,&local_1c), iVar2 < 0)) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_00414268,0x80);
    }
    iVar2 = __vbaNextEachCollObj(&DAT_00414268,local_34,&local_20);
  }
  __vbaObjSetAddref(&local_24,local_1c);
  __vbaFreeObj(&LAB_00436e2b);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x436e60 (FUN_00436e60) [anchored] strings: Invalid file format in sub LoadFromFile; CTPEditor.Structure ---- */
void __cdecl FUN_00436e60(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *local_f4 [7];
  undefined4 local_d8 [9];
  undefined4 local_b4;
  wchar_t *local_ac;
  undefined4 local_a4;
  wchar_t *local_9c;
  undefined4 local_94 [2];
  undefined4 local_8c;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [4];
  undefined4 local_64 [2];
  undefined4 local_5c;
  int *local_54;
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
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffec0;
  local_c = &DAT_00401c78;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = (int *)0x0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4 = 0;
  local_b4 = 0;
  local_d8[0] = 0;
  local_f4[0] = (int *)0x0;
  __vbaObjSetAddref(local_f4,*param_2);
  iVar3 = (**(code **)(*local_f4[0] + 0x4c))(local_f4[0]);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x4c);
  }
  puVar15 = &local_24;
  piVar6 = local_f4[0];
  iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],puVar15);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
  }
  puVar14 = &local_28;
  piVar13 = (int *)*param_2;
  piVar11 = piVar13;
  iVar3 = (**(code **)(*piVar13 + 0x30))(piVar13,puVar14);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar13,&DAT_00414258,0x30);
  }
  __vbaStrCopy(piVar11,puVar14);
  local_28 = 0;
  __vbaStrMove();
  __vbaStrCopy(piVar6,puVar15);
  local_24 = 0;
  __vbaStrMove();
  puVar15 = &local_38;
  puVar14 = &local_34;
  puVar12 = &local_30;
  puVar10 = &local_2c;
  puVar8 = local_64;
  FUN_004404f0(puVar8,puVar10,puVar12,puVar14,puVar15);
  sVar1 = __vbaBoolVarNull(local_64);
  __vbaFreeStrList(4,&local_2c,&local_30,&local_34,&local_38);
  __vbaFreeVar(puVar8);
  if (sVar1 != 0) {
    __vbaEnd(puVar10,puVar12,puVar14,puVar15);
  }
  sVar1 = __vbaObjIs(*param_3,0);
  if (sVar1 == 0) {
    iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
    }
    uVar5 = local_24;
    FUN_00472200();
    __vbaStrMove(uVar5);
    iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
    }
    uVar5 = local_28;
    FUN_00472200();
    __vbaStrMove(uVar5);
    iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
    }
    uVar5 = local_2c;
    FUN_00472200();
    __vbaStrMove(uVar5);
    iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_30);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
    }
    uVar5 = local_30;
    FUN_00472200();
    __vbaStrMove(uVar5);
    local_d8[0] = 0;
    piVar6 = (int *)*param_3;
    local_50 = 0;
    __vbaStrMove();
    local_4c = 0;
    __vbaStrMove();
    local_48 = 0;
    __vbaStrMove();
    local_44 = 0;
    __vbaStrMove();
    iVar3 = (**(code **)(*piVar6 + 0x84))(piVar6,&local_34,&local_38,&local_3c,&local_40,local_d8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar6,&DAT_00414258,0x84);
    }
    __vbaFreeStrList(0xc,&local_24,&local_28,&local_2c,&local_30,&local_34,&local_38,&local_3c,
                     &local_40,&local_44,&local_48,&local_4c,&local_50);
  }
  iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
  }
  iVar3 = __vbaI4Str(local_24);
  param_1[0x13] = iVar3;
  __vbaFreeStr();
  switch(param_1[0x13]) {
  case 0:
  case 2:
    break;
  case 1:
    iVar3 = (**(code **)(*local_f4[0] + 0x74))(local_f4[0],local_d8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)(param_1 + 0xd) = (undefined2)local_d8[0];
    iVar3 = (**(code **)(*local_f4[0] + 0x74))(local_f4[0],local_d8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)((int)param_1 + 0x36) = (undefined2)local_d8[0];
    puVar15 = local_d8;
    piVar6 = local_f4[0];
    iVar3 = (**(code **)(*local_f4[0] + 0x74))(local_f4[0],puVar15);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)(param_1 + 0xe) = (undefined2)local_d8[0];
    puVar14 = local_d8;
    piVar13 = local_f4[0];
    iVar3 = (**(code **)(*local_f4[0] + 0x74))(local_f4[0],puVar14);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x74);
    }
    *(short *)((int)param_1 + 0x3a) = (short)local_d8[0];
    if ((short)local_d8[0] != 0) {
      iVar3 = (**(code **)(*local_f4[0] + 0x74))(local_f4[0],local_d8);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x74);
      }
      *(undefined2 *)(param_1 + 0xf) = (undefined2)local_d8[0];
    }
    puVar12 = local_d8;
    piVar11 = local_f4[0];
    iVar3 = (**(code **)(*local_f4[0] + 0x74))(local_f4[0],puVar12);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)((int)param_1 + 0x3e) = (undefined2)local_d8[0];
    puVar10 = local_d8;
    piVar9 = local_f4[0];
    iVar3 = (**(code **)(*local_f4[0] + 0x74))(local_f4[0],puVar10);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x74);
    }
    local_1c = local_d8[0];
    if ((short)local_d8[0] == 0) {
      *(undefined2 *)(param_1 + 0x14) = 1;
      *(undefined2 *)((int)param_1 + 0x52) = 1;
    }
    else {
      puVar8 = &local_24;
      piVar7 = local_f4[0];
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],puVar8);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
      }
      uVar2 = __vbaI2Str(local_24,piVar7,puVar8,piVar9,puVar10,piVar11,puVar12,piVar13,puVar14,
                         piVar6,puVar15);
      *(undefined2 *)(param_1 + 0x14) = uVar2;
      __vbaFreeStr();
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
      }
      uVar2 = __vbaI2Str(local_24);
      *(undefined2 *)((int)param_1 + 0x52) = uVar2;
      __vbaFreeStr();
    }
    iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
    while( true ) {
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
      }
      local_24 = 0;
      __vbaStrMove();
      iVar3 = (**(code **)(*local_f4[0] + 0x1c))(local_f4[0],&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x1c);
      }
      iVar3 = __vbaStrCmp(local_24,local_20);
      iVar4 = __vbaStrCmp(&DAT_00414618 /* bstr: '@' */,local_20);
      __vbaFreeStr();
      if (iVar3 == 0 || iVar4 == 0) break;
      iVar3 = (**(code **)(*(int *)param_1[0x15] + 0x1c))
                        ((int *)param_1[0x15],&local_20,&local_20,&local_54);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,param_1[0x15],&LAB_00414248,0x1c);
      }
      piVar6 = local_54;
      iVar3 = (**(code **)(*local_54 + 0x78))(local_54,param_2,&local_1c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar6,&DAT_00414268,0x78);
      }
      __vbaFreeObj();
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
    }
    if (*(short *)((int)param_1 + 0x36) != 0) {
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
      }
      local_5c = local_24;
      piVar6 = (int *)param_1[0x15];
      local_24 = 0;
      local_64[0] = 8;
      iVar3 = (**(code **)(*piVar6 + 0x20))(piVar6,local_64,&local_54);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,param_1[0x15],&LAB_00414248,0x20);
      }
      __vbaObjSetAddref(param_1 + 0x17,local_54);
      __vbaFreeObj();
      __vbaFreeVar(piVar6);
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
      while( true ) {
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
        }
        local_24 = 0;
        __vbaStrMove();
        iVar3 = (**(code **)(*local_f4[0] + 0x1c))(local_f4[0],&local_24);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x1c);
        }
        iVar3 = __vbaStrCmp(local_24,local_20);
        iVar4 = __vbaStrCmp(&DAT_00414618 /* bstr: '@' */,local_20);
        __vbaFreeStr();
        if (iVar3 == 0 || iVar4 == 0) break;
        iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x1c))
                          ((int *)param_1[0x16],&local_20,&local_20,&local_54);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,param_1[0x16],&DAT_00414294,0x1c);
        }
        piVar6 = local_54;
        iVar3 = (**(code **)(*local_54 + 0x34))(local_54,param_2);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar6,&DAT_00413cf8,0x34);
        }
        __vbaFreeObj();
        iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
      }
    }
    if ((short)param_1[0xe] != 0) {
      puVar15 = &local_24;
      piVar6 = local_f4[0];
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],puVar15);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
      }
      local_5c = local_24;
      piVar13 = (int *)param_1[0x15];
      local_24 = 0;
      local_64[0] = 8;
      iVar3 = (**(code **)(*piVar13 + 0x20))(piVar13,local_64,&local_54);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,param_1[0x15],&LAB_00414248,0x20);
      }
      __vbaObjSetAddref(param_1 + 0x18,local_54);
      __vbaFreeObj();
      __vbaFreeVar(piVar13);
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
      }
      __vbaStrCopy(piVar6,puVar15);
      __vbaFreeStr();
    }
    if (*(short *)((int)param_1 + 0x3a) != 0) {
      puVar15 = &local_24;
      piVar6 = local_f4[0];
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],puVar15);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
      }
      __vbaStrCopy(piVar6,puVar15);
      __vbaFreeStr();
    }
    if ((short)param_1[0xf] != 0) {
      puVar15 = &local_24;
      piVar6 = local_f4[0];
      iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],puVar15);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
      }
      __vbaStrCopy(piVar6,puVar15);
      __vbaFreeStr();
    }
    break;
  case 3:
    iVar3 = (**(code **)(*local_f4[0] + 0x74))(local_f4[0],local_d8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x74);
    }
    *(undefined2 *)(param_1 + 0xd) = (undefined2)local_d8[0];
    iVar3 = (**(code **)(*local_f4[0] + 0x70))(local_f4[0],&local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x70);
    }
    local_24 = 0;
    __vbaStrMove();
    iVar3 = (**(code **)(*(int *)param_1[0x15] + 0x1c))
                      ((int *)param_1[0x15],&local_20,&local_20,&local_54);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,param_1[0x15],&LAB_00414248,0x1c);
    }
    piVar6 = local_54;
    local_d8[0] = 0;
    iVar3 = (**(code **)(*local_54 + 0x78))(local_54,param_2,local_d8);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar6,&DAT_00414268,0x78);
    }
    __vbaFreeObj();
    break;
  default:
    uVar5 = rtcErrObj();
    piVar6 = (int *)__vbaObjSet(&local_54,uVar5);
    local_8c = 0x80020004;
    local_7c = 0x80020004;
    local_94[0] = 10;
    local_84[0] = 10;
    local_ac = L"Invalid file format in sub LoadFromFile";
    local_b4 = 8;
    __vbaVarDup();
    local_9c = L"CTPEditor.Structure";
    local_a4 = 8;
    __vbaVarDup();
    iVar3 = (**(code **)(*piVar6 + 0x44))(piVar6,0x410,local_64,local_74,local_84,local_94);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar6,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_64,local_74,local_84,local_94);
  }
  iVar3 = (**(code **)(*local_f4[0] + 0x48))(local_f4[0]);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_f4[0],&DAT_00414258,0x48);
  }
  __vbaObjSetAddref(local_f4,0);
  __vbaFreeObj(&LAB_00437a77);
  __vbaFreeStr();
  return;
}

/* ---- 0x437ab0 (FUN_00437ab0) [estimated] strings:  ---- */
void __cdecl FUN_00437ab0(int *param_1)

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
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00401c88;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x38))((int *)param_1[0x15]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x15],&LAB_00414248,0x38);
  }
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x2c))((int *)param_1[0x16]);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0x16],&DAT_00414294,0x2c);
  }
  uVar2 = __vbaCastObj(0,&LAB_00414248);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  __vbaObjSetAddref(param_1 + 0x15,uVar2);
  __vbaFreeObj();
  uVar2 = __vbaCastObj(0,&DAT_00414294);
  uVar2 = __vbaObjSet(&local_1c,uVar2);
  __vbaObjSetAddref(param_1 + 0x16,uVar2);
  __vbaFreeObj();
  return;
}

/* ---- 0x437bc0 (FUN_00437bc0) [estimated] strings:  ---- */
void __cdecl FUN_00437bc0(uint param_1)

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
  local_c = &DAT_00401c98;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaNew(&DAT_00406a84);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x15,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaNew(&DAT_004064e4);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x16,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x437c90 (FUN_00437c90) [estimated] strings:  ---- */
void __cdecl FUN_00437c90(uint param_1)

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
  local_c = &DAT_00401ca8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaCastObj(0,&LAB_00414248);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x15,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_00414294);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0x16,uVar1);
  __vbaFreeObj();
  return;
}
