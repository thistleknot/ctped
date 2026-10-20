/* Object #20 frmCheckFilesExist -- ESTIMATED function range; public methods per VB header: Initialize */
#include "ghidra_types.h"

/* ---- 0x45b4f0 (FUN_0045b4f0) [anchored] strings: No line containing ;  in ; CTPEditor.frmCheckFilesExist ---- */
void __cdecl FUN_0045b4f0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int **ppiVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_b4 [9];
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [4];
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff00;
  local_8 = &DAT_00402898;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = (int *)0x0;
  local_40 = (int *)0x0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90 = 0;
  local_b4[0] = 0;
  ExceptionList = &pvStack_14;
  uVar1 = __vbaNew(&DAT_00408318);
  __vbaObjSet(&local_1c,uVar1);
  iVar2 = (**(code **)(*local_1c + 0x60))(local_1c,param_1 + 0xe);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x60);
  }
  iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))((int *)param_1[0xd],0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xd],&LAB_00414228,0x20);
  }
  iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x50))((int *)param_1[0xd],&local_3c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xd],&LAB_00414228,0x50);
  }
  piVar3 = local_3c;
  puVar7 = &local_2c;
  piVar6 = local_3c;
  iVar2 = (**(code **)(*local_3c + 0x30))(local_3c,puVar7);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x30);
  }
  local_2c = 0;
  __vbaStrMove();
  __vbaFreeObj();
  __vbaStrCopy(piVar6,puVar7);
  iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x24))((int *)param_1[0xd],&local_34);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0xd],&LAB_00414228,0x24);
  }
  FUN_00441680(&local_24,&local_2c);
  uVar1 = __vbaStrMove();
  __vbaStrCat(&DAT_0041439c /* bstr: '_' */,uVar1);
  uVar1 = __vbaStrMove();
  iVar2 = __vbaStrCmp(local_34,uVar1);
  __vbaFreeStrList(4,&local_2c,&local_30,&local_38,&local_34);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x24))((int *)param_1[0xd],&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&LAB_00414228,0x24);
    }
    __vbaStrCat(local_24,local_2c);
    __vbaStrMove();
    __vbaFreeStr();
    piVar3 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar3 + 0x4c))(piVar3);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x4c);
    }
    iVar2 = (**(code **)(*local_1c + 0x50))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x50);
    }
    piVar3 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar3 + 0x78))(piVar3,&local_2c);
    while( true ) {
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x78);
      }
      local_2c = 0;
      __vbaStrMove();
      piVar3 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar3 + 0x40))(piVar3,local_b4);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x40);
      }
      pcVar4 = __vbaInStr_exref;
      iVar2 = __vbaInStr(0,local_24,local_20,1);
      if ((short)local_b4[0] != 0 || iVar2 != 0) break;
      iVar2 = (**(code **)(*local_1c + 0x7c))(local_1c,&local_20);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x7c);
      }
      piVar3 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar3 + 0x78))(piVar3,&local_2c);
    }
    iVar2 = __vbaInStr(0,local_24,local_20,1);
    if (iVar2 == 0) {
      piVar3 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar3 + 0x30))(piVar3,&local_30);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x30);
      }
      uVar1 = rtcErrObj();
      piVar3 = (int *)__vbaObjSet(&local_3c,uVar1);
      local_78 = 0x80020004;
      local_80[0] = 10;
      local_68 = 0x80020004;
      local_70[0] = 10;
      __vbaStrCat(local_24,L"No line containing ");
      uVar1 = __vbaStrMove();
      __vbaStrCat(L" in ",uVar1);
      uVar1 = __vbaStrMove();
      local_58 = __vbaStrCat(local_30,uVar1);
      local_60[0] = 8;
      local_88 = L"CTPEditor.frmCheckFilesExist";
      local_90 = 8;
      __vbaVarDup();
      iVar2 = (**(code **)(*piVar3 + 0x44))(piVar3,0x421,local_50,local_60,local_70,local_80);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00413af4,0x44);
      }
      __vbaFreeStrList(3,&local_2c,&local_34,&local_30);
      __vbaFreeObj();
      __vbaFreeVarList(4,local_50,local_60,local_70,local_80);
      pcVar4 = __vbaInStr_exref;
    }
    iVar2 = (*pcVar4)(0,local_18,local_20,1);
    if (iVar2 == 0) {
      FUN_004419b0(local_20,&local_24,&local_18);
      __vbaStrMove();
    }
    iVar2 = (**(code **)(*local_1c + 0x7c))(local_1c,&local_20);
    while( true ) {
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x7c);
      }
      piVar3 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar3 + 0x40))(piVar3,local_b4);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x40);
      }
      if ((short)local_b4[0] != 0) break;
      piVar3 = (int *)*param_2;
      iVar2 = (**(code **)(*piVar3 + 0x78))(piVar3,&local_2c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x78);
      }
      local_2c = 0;
      __vbaStrMove();
      iVar2 = (**(code **)(*local_1c + 0x7c))(local_1c,&local_20);
    }
    piVar3 = (int *)*param_2;
    iVar2 = (**(code **)(*piVar3 + 0x48))(piVar3);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x48);
    }
    iVar2 = (**(code **)(*local_1c + 0x48))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x48);
    }
    local_b4[0] = 0;
    iVar2 = (**(code **)(*local_1c + 100))(local_1c,param_2,local_b4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,100);
    }
    ppiVar5 = &local_3c;
    piVar3 = (int *)param_1[0xd];
    iVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,ppiVar5);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&LAB_00414228,0x50);
    }
    piVar6 = local_3c;
    uVar1 = __vbaCastObj(0,&DAT_004146ac);
    __vbaObjSet(&local_40,uVar1);
    __vbaStrCopy(piVar3,ppiVar5);
    iVar2 = (**(code **)(*piVar6 + 0x58))(piVar6,&local_18,&local_2c,&local_40);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar6,&DAT_00414258,0x58);
    }
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_40,&local_3c);
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x50))((int *)param_1[0xd],&local_3c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&LAB_00414228,0x50);
    }
    piVar3 = local_3c;
    iVar2 = (**(code **)(*local_3c + 0x34))(local_3c,&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x34);
    }
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x50))((int *)param_1[0xd],&local_40);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&LAB_00414228,0x50);
    }
    piVar3 = local_40;
    iVar2 = (**(code **)(*local_40 + 0x30))(local_40,&local_30);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00414258,0x30);
    }
    local_30 = 0;
    __vbaStrMove();
    local_2c = 0;
    __vbaStrMove();
    iVar2 = (**(code **)(*(int *)param_1[0xe] + 0x24))
                      ((int *)param_1[0xe],&local_34,&local_38,local_b4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xe],&DAT_004146ac,0x24);
    }
    uVar1 = local_b4[0];
    __vbaFreeStrList(2,&local_34,&local_38);
    __vbaFreeObjList(2,&local_3c,&local_40);
    if ((short)uVar1 != 0) {
      iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x50))((int *)param_1[0xd],&local_3c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1[0xd],&LAB_00414228,0x50);
      }
      piVar3 = local_3c;
      local_3c = (int *)0x0;
      __vbaObjSet(&local_40,piVar3);
      (**(code **)(*param_1 + 0x700))(param_1,&local_40,local_b4);
      uVar1 = local_b4[0];
      __vbaFreeObj();
      if ((short)uVar1 != 0) {
        local_28 = 0xffffffff;
      }
    }
  }
  __vbaFreeStr(&LAB_0045bca6);
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}

/* ---- 0x45bcd0 (FUN_0045bcd0) [estimated] strings: ***GL ---- */
void __cdecl FUN_0045bcd0(uint param_1)

{
  int *piVar1;
  short sVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int **ppiVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined *puVar22;
  undefined4 local_bc;
  undefined4 local_b8 [6];
  int local_a0;
  undefined4 local_9c [5];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58;
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
  int *local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff0c;
  local_c = &LAB_004028a8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = (int *)0x0;
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
  local_58 = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88 = 0;
  local_9c[0] = 0;
  local_a0 = 0;
  local_b8[0] = 0;
  local_bc = 0;
  do {
    uVar5 = __vbaCastObj(0,&DAT_00417d44);
    __vbaObjSet(&local_20,uVar5);
    puVar22 = &DAT_00417d34;
    uVar21 = 0;
    uVar5 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
    uVar5 = __vbaObjSet(&local_54,uVar5);
    uVar5 = __vbaLateIdCallLd(local_68,uVar5);
    uVar5 = __vbaCastObjVar(uVar5,uVar21);
    uVar5 = __vbaObjSet(local_b8,uVar5);
    iVar6 = __vbaForEachCollObj(&DAT_00417d44,&local_bc,&local_28,uVar5);
    __vbaFreeObj();
    __vbaFreeVar(puVar22);
    while (iVar6 != 0) {
      iVar6 = (**(code **)(*local_28 + 0x5c))(local_28,local_9c);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,local_28,&DAT_00417d44,0x5c);
      }
      if ((short)local_9c[0] != 0) {
        __vbaObjSetAddref(&local_20,local_28);
        __vbaExitEachColl(&local_bc);
        break;
      }
      iVar6 = __vbaNextEachCollObj(&DAT_00417d44,&local_bc,&local_28);
    }
    sVar2 = __vbaObjIs(local_20,0);
    if (sVar2 != 0) {
      uVar21 = 0;
      uVar5 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
      uVar5 = __vbaObjSet(&local_54,uVar5);
      uVar5 = __vbaLateIdCallLd(local_68,uVar5);
      uVar5 = __vbaCastObjVar(uVar5,uVar21);
      piVar9 = (int *)__vbaObjSet(&local_58,uVar5);
      piVar8 = piVar9;
      iVar6 = (**(code **)(*piVar9 + 0x1c))(piVar9,&local_a0);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar9,&DAT_00417d34,0x1c);
      }
      bVar10 = local_a0 == 0;
      __vbaFreeObjList(2,&local_54,&local_58);
      __vbaFreeVar(piVar8);
      if (bVar10) {
        if (DAT_00480244 == (int *)0x0) {
          __vbaNew2(&DAT_00413b34,&DAT_00480244);
        }
        piVar8 = DAT_00480244;
        iVar6 = *DAT_00480244;
        uVar5 = __vbaObjSetAddref(&local_54,piVar4);
        iVar6 = (**(code **)(iVar6 + 0x10))(piVar8,uVar5);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar8,&DAT_00413b24,0x10);
        }
        __vbaFreeObj();
      }
      local_8 = 0;
      __vbaFreeObjList(2,local_b8,&local_bc,&LAB_0045c41e);
      __vbaFreeObj();
      __vbaFreeObj();
      __vbaFreeObj();
      __vbaFreeObj();
      return;
    }
    iVar6 = (**(code **)(*local_20 + 0x5c))(local_20,local_9c);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,local_20,&DAT_00417d44,0x5c);
    }
    if ((short)local_9c[0] != 0) {
      iVar6 = (**(code **)(*local_20 + 0x4c))(local_20,&local_2c);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,local_20,&DAT_00417d44,0x4c);
      }
      iVar7 = __vbaStrCmp(L"***GL",local_2c);
      __vbaFreeStr();
      iVar6 = *(int *)piVar4[0xd];
      if (iVar7 == 0) {
        iVar6 = (**(code **)(iVar6 + 0x40))();
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar4[0xd],&LAB_00414228,0x40);
        }
        piVar8 = local_54;
        local_54 = (int *)0x0;
        __vbaObjSet(&local_24,piVar8);
      }
      else {
        iVar6 = (**(code **)(iVar6 + 0x44))((int *)piVar4[0xd],&local_54);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar4[0xd],&LAB_00414228,0x44);
        }
        piVar8 = local_54;
        puVar20 = &local_2c;
        iVar6 = (**(code **)(*local_20 + 0x4c))(local_20,puVar20);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,local_20,&DAT_00417d44,0x4c);
        }
        local_60 = local_2c;
        local_2c = 0;
        local_68[0] = 8;
        piVar9 = piVar8;
        iVar6 = (**(code **)(*piVar8 + 0x24))(piVar8,local_68,&local_58);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar8,&DAT_00414238,0x24);
        }
        uVar5 = local_58;
        local_58 = 0;
        __vbaObjSet(&local_1c,uVar5);
        __vbaFreeObj();
        __vbaFreeVar(piVar9);
        puVar19 = local_9c;
        piVar8 = local_1c;
        iVar6 = (**(code **)(*local_1c + 0x3c))(local_1c,puVar19);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,local_1c,&LAB_004133e8,0x3c);
        }
        if ((short)local_9c[0] == 0) {
          iVar6 = (**(code **)(*local_1c + 0x58))(local_1c,&local_54);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,local_1c,&LAB_004133e8,0x58);
          }
          piVar8 = local_54;
          local_54 = (int *)0x0;
          __vbaObjSet(&local_24,piVar8);
        }
        else {
          puVar18 = &local_2c;
          piVar9 = local_20;
          iVar6 = (**(code **)(*local_20 + 0x24))(local_20,puVar18);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,local_20,&DAT_00417d44,0x24);
          }
          __vbaStrCopy(piVar9,puVar18);
          local_2c = 0;
          __vbaStrMove();
          puVar18 = &local_34;
          puVar17 = &local_30;
          FUN_00441680(puVar17,puVar18);
          __vbaStrMove();
          ppiVar16 = &local_54;
          piVar9 = local_1c;
          iVar6 = (**(code **)(*local_1c + 0x58))(local_1c,ppiVar16);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,local_1c,&LAB_004133e8,0x58);
          }
          piVar1 = local_54;
          puVar15 = &local_38;
          piVar13 = local_54;
          iVar6 = (**(code **)(*local_54 + 0x30))(local_54,puVar15);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,piVar1,&DAT_00414258,0x30);
          }
          __vbaStrCopy(piVar13,puVar15);
          local_38 = 0;
          __vbaStrMove();
          puVar15 = &local_40;
          puVar14 = &local_3c;
          FUN_00441680(puVar14,puVar15);
          __vbaStrMove();
          local_50 = 0;
          __vbaStrMove();
          puVar12 = &local_48;
          puVar11 = &local_44;
          FUN_00441760((undefined *)puVar11,puVar12);
          uVar5 = __vbaStrMove();
          uVar3 = __vbaI2Str(uVar5,puVar11,puVar12,puVar14,puVar15,piVar9,ppiVar16,puVar17,puVar18,
                             piVar8,puVar19);
          local_80 = CONCAT22(local_80._2_2_,uVar3);
          iVar6 = (**(code **)(*local_1c + 0x58))(local_1c,&local_58);
          if (iVar6 < 0) {
            __vbaHresultCheckObj(iVar6,local_1c,&LAB_004133e8,0x58);
          }
          puVar22 = &DAT_00414258;
          uVar5 = __vbaLateIdCallLd(local_68,local_58,0,1,2,local_84,local_80,local_7c,&DAT_00414258
                                   );
          uVar5 = __vbaCastObjVar(uVar5,puVar22);
          __vbaObjSet(&local_24,uVar5);
          __vbaFreeStrList(8,&local_30,&local_34,&local_3c,&local_40,&local_44,&local_48,&local_4c,
                           &local_50);
          __vbaFreeObjList(2,&local_54,&local_58);
          __vbaFreeVar(puVar20);
        }
      }
      (**(code **)(*piVar4 + 0x700))(piVar4,&local_24,local_9c);
      if ((short)local_9c[0] == 0) {
        uVar21 = 0;
        uVar5 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
        uVar5 = __vbaObjSet(&local_54,uVar5);
        uVar5 = __vbaLateIdCallLd(local_68,uVar5);
        uVar5 = __vbaCastObjVar(uVar5,uVar21);
        piVar8 = (int *)__vbaObjSet(&local_58,uVar5);
        iVar6 = (**(code **)(*local_20 + 0x4c))(local_20,&local_2c);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,local_20,&DAT_00417d44,0x4c);
        }
        local_70 = local_2c;
        local_2c = 0;
        local_78[0] = 8;
        iVar6 = (**(code **)(*piVar8 + 0x34))(piVar8,local_78);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,piVar8,&DAT_00417d34,0x34);
        }
        __vbaFreeObjList(2,&local_54,&local_58);
        __vbaFreeVarList(2,local_68,local_78);
      }
      else {
        iVar6 = (**(code **)(*local_20 + 0x60))(local_20,0);
        if (iVar6 < 0) {
          __vbaHresultCheckObj(iVar6,local_20,&DAT_00417d44,0x60);
        }
      }
    }
  } while( true );
}

/* ---- 0x45c440 (FUN_0045c440) [estimated] strings: ***GL; CTP Editor; Project creation cannot proceed without this file, aborting ---- */
void __cdecl FUN_0045c440(uint param_1)

{
  int *piVar1;
  int *****pppppiVar2;
  int *****pppppiVar3;
  int iVar4;
  int **ppiVar5;
  undefined1 *puVar6;
  int ****ppppiVar7;
  int ****ppppiVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar11;
  short sVar12;
  int ****ppppiVar13;
  uint unaff_ESI;
  int *piVar14;
  code *pcVar15;
  bool bVar16;
  undefined4 uVar17;
  int ****ppppiStack_210;
  code *pcStack_20c;
  int ***pppiStack_208;
  int ***pppiStack_204;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int ***pppiStack_1b0;
  int ***pppiStack_1ac;
  int *piStack_1a8;
  int ***pppiStack_1a4;
  int ***pppiStack_1a0;
  int ****ppppiStack_19c;
  int iStack_198;
  undefined4 auStack_194 [9];
  undefined4 uStack_170;
  wchar_t *pwStack_168;
  undefined4 uStack_160;
  wchar_t *pwStack_158;
  undefined4 auStack_150 [2];
  undefined4 uStack_148;
  undefined4 auStack_140 [2];
  undefined4 uStack_138;
  undefined4 auStack_130 [2];
  int ***pppiStack_128;
  undefined4 auStack_120 [2];
  int ***pppiStack_118;
  undefined4 uStack_110;
  int iStack_10c;
  int ****ppppiStack_108;
  undefined1 *puStack_104;
  int ****ppppiStack_100;
  int ****ppppiStack_fc;
  int ****ppppiStack_f8;
  int ****ppppiStack_f4;
  int ****ppppiStack_f0;
  int ****ppppiStack_ec;
  int ****ppppiStack_e8;
  int ****ppppiStack_e4;
  int ****ppppiStack_e0;
  int ****ppppiStack_dc;
  int ****ppppiStack_d8;
  int ****ppppiStack_d4;
  int ****ppppiStack_d0;
  int ****ppppiStack_cc;
  int ****ppppiStack_c8;
  int ****ppppiStack_c4;
  int ****ppppiStack_c0;
  int ****ppppiStack_bc;
  int ****ppppiStack_b8;
  int ****ppppiStack_b4;
  int ***pppiStack_b0;
  int ***local_70;
  int ****local_6c;
  int ***local_68;
  int local_64;
  int ***local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  int ***local_50;
  int ***local_48 [2];
  int ***local_40;
  int ***local_38;
  int ***local_34;
  int ****local_30;
  int ***local_2c;
  int **local_28;
  int ****local_24;
  int ****local_20;
  int ****local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff54;
  local_c = &LAB_004028b8;
  local_8 = param_1 & 1;
  ppppiVar13 = (int ****)(param_1 & 0xfffffffe);
  ppppiStack_b4 = (int ****)0x45c483;
  ExceptionList = &pvStack_18;
  pppiStack_b0 = (int ***)ppppiVar13;
  (*(code *)(*ppppiVar13)[1])();
  pcVar15 = __vbaHresultCheckObj_exref;
  local_1c = (int ****)0x0;
  local_20 = (int ****)0x0;
  local_24 = (int ****)0x0;
  local_2c = (int ***)0x0;
  local_30 = (int ****)0x0;
  local_34 = (int ***)0x0;
  local_38 = (int ***)0x0;
  local_48[0] = (int ***)0x0;
  local_58[0] = 0;
  local_68 = (int ***)0x0;
  local_6c = (int ****)0x0;
  local_70 = (int ***)0x0;
  local_28 = (int **)0x1;
  ppiVar5 = local_28;
  do {
    while( true ) {
      local_28 = ppiVar5;
      ppppiStack_b4 = (int ****)&DAT_00417d34;
      ppppiStack_b8 = (int ****)0x0;
      ppppiStack_bc = (int ****)0x7;
      ppppiStack_c4 = (int ****)0x45c4ca;
      ppppiStack_c0 = ppppiVar13;
      ppppiStack_c4 = (int ****)(*(code *)(*ppppiVar13)[0xc2])();
      ppppiStack_c8 = (int ****)&local_30;
      ppppiStack_cc = (int ****)0x45c4d7;
      ppppiStack_c4 = (int ****)__vbaObjSet();
      ppppiStack_c8 = local_48;
      ppppiStack_cc = (int ****)0x45c4e2;
      ppppiStack_bc = (int ****)__vbaLateIdCallLd();
      ppppiStack_c0 = (int ****)0x45c4ec;
      ppppiStack_b8 = (int ****)__vbaCastObjVar();
      ppppiStack_bc = &local_34;
      ppppiStack_c0 = (int ****)0x45c4f3;
      piVar1 = (int *)__vbaObjSet();
      ppppiStack_b8 = &local_70;
      ppppiStack_c0 = (int ****)0x45c4ff;
      ppppiStack_bc = (int ****)piVar1;
      ppppiStack_cc = (int ****)(**(code **)(*piVar1 + 0x1c))();
      if ((int)ppppiStack_cc < 0) {
        ppppiStack_c0 = (int ****)0x1c;
        ppppiStack_c4 = (int ****)&DAT_00417d34;
        ppppiStack_d0 = (int ****)0x45c510;
        ppppiStack_c8 = (int ****)piVar1;
        __vbaHresultCheckObj();
      }
      ppppiStack_c0 = &local_34;
      bVar16 = (int)local_70 < (int)(short)local_28;
      ppppiStack_c4 = (int ****)&local_30;
      ppppiStack_c8 = (int ****)0x2;
      ppppiStack_cc = (int ****)0x45c532;
      __vbaFreeObjList();
      ppppiStack_c0 = (int ****)0x45c53e;
      __vbaFreeVar();
      ppppiStack_bc = (int ****)&DAT_00417d34;
      ppppiStack_c0 = (int ****)0x0;
      ppppiStack_c4 = (int ****)0x7;
      ppppiStack_c8 = ppppiVar13;
      if (bVar16) {
        ppppiStack_cc = (int ****)0x45cb62;
        ppppiStack_cc = (int ****)(*(code *)(*ppppiVar13)[0xc2])();
        ppppiStack_d0 = (int ****)&local_30;
        ppppiStack_d4 = (int ****)0x45cb6f;
        ppppiStack_cc = (int ****)__vbaObjSet();
        ppppiStack_d0 = local_48;
        ppppiStack_d4 = (int ****)0x45cb7a;
        ppppiStack_c4 = (int ****)__vbaLateIdCallLd();
        ppppiStack_c8 = (int ****)0x45cb84;
        ppppiStack_c0 = (int ****)__vbaCastObjVar();
        ppppiStack_c4 = &local_34;
        ppppiStack_c8 = (int ****)0x45cb8b;
        ppppiVar7 = (int ****)__vbaObjSet();
        ppppiStack_c0 = &local_70;
        ppppiStack_c8 = (int ****)0x45cb97;
        ppppiStack_c4 = ppppiVar7;
        ppppiStack_d4 = (int ****)(*(code *)(*ppppiVar7)[7])();
        if ((int)ppppiStack_d4 < 0) {
          ppppiStack_c8 = (int ****)0x1c;
          ppppiStack_cc = (int ****)&DAT_00417d34;
          ppppiStack_d8 = (int ****)0x45cba8;
          ppppiStack_d0 = ppppiVar7;
          __vbaHresultCheckObj();
        }
        bVar16 = (int ****)local_70 == (int ****)0x0;
        ppppiStack_c8 = &local_34;
        ppppiStack_cc = (int ****)&local_30;
        ppppiStack_d0 = (int ****)0x2;
        ppppiStack_d4 = (int ****)0x45cbc6;
        __vbaFreeObjList();
        ppppiStack_c8 = (int ****)0x45cbd2;
        __vbaFreeVar();
        if (bVar16) {
          if (DAT_00480244 == (int *****)0x0) {
            ppppiStack_c4 = (int ****)&DAT_00480244;
            ppppiStack_c8 = (int ****)&DAT_00413b34;
            ppppiStack_cc = (int ****)0x45cbf0;
            __vbaNew2();
          }
          pppppiVar2 = DAT_00480244;
          ppppiStack_c8 = (int ****)&local_30;
          ppppiVar7 = *DAT_00480244;
          ppppiStack_cc = (int ****)0x45cc09;
          ppppiStack_c4 = ppppiVar13;
          ppppiStack_c4 = (int ****)__vbaObjSetAddref();
          ppppiStack_c8 = (int ****)pppppiVar2;
          ppppiStack_cc = (int ****)0x45cc14;
          iVar4 = (*(code *)ppppiVar7[4])();
          if (iVar4 < 0) {
            ppppiStack_c4 = (int ****)0x10;
            ppppiStack_c8 = (int ****)&DAT_00413b24;
            ppppiStack_cc = (int ****)pppppiVar2;
            ppppiStack_d4 = (int ****)0x45cc25;
            ppppiStack_d0 = (int ****)iVar4;
            __vbaHresultCheckObj();
          }
          ppppiStack_c4 = (int ****)0x45cc2e;
          __vbaFreeObj();
        }
        local_8 = 0;
        ppppiStack_c4 = (int ****)&LAB_0045cc83;
        ppppiStack_c8 = (int ****)0x45cc78;
        __vbaFreeObj();
        ppppiStack_c8 = (int ****)0x45cc7d;
        __vbaFreeObj();
        ppppiStack_c8 = (int ****)0x45cc82;
        __vbaFreeObj();
        return;
      }
      ppppiStack_cc = (int ****)0x45c559;
      ppppiStack_cc = (int ****)(*(code *)(*ppppiVar13)[0xc2])();
      ppppiStack_d0 = (int ****)&local_30;
      ppppiStack_d4 = (int ****)0x45c566;
      ppppiStack_cc = (int ****)__vbaObjSet();
      ppppiStack_d0 = local_48;
      ppppiStack_d4 = (int ****)0x45c571;
      ppppiStack_c4 = (int ****)__vbaLateIdCallLd();
      ppppiStack_c8 = (int ****)0x45c57b;
      ppppiStack_c0 = (int ****)__vbaCastObjVar();
      ppppiStack_c4 = &local_34;
      ppppiStack_c8 = (int ****)0x45c582;
      pppppiVar2 = (int *****)__vbaObjSet();
      local_60 = &local_28;
      ppppiStack_c0 = &local_38;
      ppppiStack_c4 = &local_68;
      local_68 = (int ***)0x4002;
      ppppiStack_cc = (int ****)0x45c59f;
      ppppiStack_c8 = (int ****)pppppiVar2;
      pppppiVar3 = (int *****)(*(code *)(*pppppiVar2)[9])();
      if ((int)pppppiVar3 < 0) {
        ppppiStack_cc = (int ****)0x24;
        ppppiStack_d0 = (int ****)&DAT_00417d34;
        ppppiStack_dc = (int ****)0x45c5b0;
        ppppiStack_d8 = (int ****)pppppiVar3;
        ppppiStack_d4 = (int ****)pppppiVar2;
        __vbaHresultCheckObj();
      }
      ppppiStack_cc = (int ****)&DAT_00417d44;
      ppppiStack_d0 = (int ****)local_38;
      ppppiStack_d4 = (int ****)0x45c5bf;
      ppppiStack_cc = (int ****)__vbaCastObj();
      ppppiStack_d0 = (int ****)&local_24;
      ppppiStack_d4 = (int ****)0x45c5ca;
      __vbaObjSet();
      ppppiStack_cc = &local_38;
      ppppiStack_d0 = &local_34;
      ppppiStack_d4 = (int ****)&local_30;
      ppppiStack_d8 = (int ****)0x3;
      ppppiStack_dc = (int ****)0x45c5de;
      __vbaFreeObjList();
      ppppiStack_cc = (int ****)0x45c5ea;
      __vbaFreeVar();
      ppppiStack_c8 = (int ****)&local_6c;
      ppppiStack_cc = local_24;
      ppppiStack_d0 = (int ****)0x45c5f7;
      pppppiVar3 = (int *****)(*(code *)(*local_24)[0x17])();
      uVar11 = extraout_var;
      if ((int)pppppiVar3 < 0) {
        ppppiStack_b4 = (int ****)0x5c;
        ppppiStack_b8 = (int ****)&DAT_00417d44;
        ppppiStack_bc = local_24;
        ppppiStack_c4 = (int ****)0x45c60b;
        ppppiStack_c0 = (int ****)pppppiVar3;
        __vbaHresultCheckObj();
        uVar11 = extraout_var_00;
      }
      if ((short)local_6c == 0) break;
      ppppiStack_b4 = &local_2c;
      ppppiStack_b8 = local_24;
      ppppiStack_bc = (int ****)0x45c623;
      pppppiVar2 = (int *****)(*(code *)(*local_24)[0x13])();
      if ((int)pppppiVar2 < 0) {
        ppppiStack_bc = (int ****)0x4c;
        ppppiStack_c0 = (int ****)&DAT_00417d44;
        ppppiStack_c4 = local_24;
        ppppiStack_cc = (int ****)0x45c637;
        ppppiStack_c8 = (int ****)pppppiVar2;
        __vbaHresultCheckObj();
      }
      ppppiStack_bc = (int ****)local_2c;
      ppppiStack_c0 = (int ****)0x418840;
      ppppiStack_c4 = (int ****)0x45c646;
      iVar4 = __vbaStrCmp();
      ppppiStack_bc = (int ****)0x45c658;
      __vbaFreeStr();
      ppppiStack_c0 = (int ****)ppppiVar13[0xd];
      ppppiStack_bc = (int ****)&local_30;
      if (iVar4 == 0) {
        ppppiStack_c4 = (int ****)0x45c66e;
        pppppiVar2 = (int *****)(*(code *)(*ppppiStack_c0)[0x10])();
        if ((int)pppppiVar2 < 0) {
          ppppiStack_cc = (int ****)ppppiVar13[0xd];
          ppppiStack_c4 = (int ****)0x40;
          ppppiStack_c8 = (int ****)&LAB_00414228;
          ppppiStack_d4 = (int ****)0x45c682;
          ppppiStack_d0 = (int ****)pppppiVar2;
          __vbaHresultCheckObj();
        }
        ppppiVar7 = local_30;
        ppppiStack_c4 = local_30;
        ppppiStack_c8 = (int ****)0x45c68d;
        pppppiVar2 = (int *****)(*(code *)(*local_30)[0x14])();
        if ((int)pppppiVar2 < 0) {
          ppppiStack_c8 = (int ****)0x50;
          ppppiStack_cc = (int ****)&DAT_00414258;
          ppppiStack_d0 = ppppiVar7;
          ppppiStack_d8 = (int ****)0x45c69e;
          ppppiStack_d4 = (int ****)pppppiVar2;
          __vbaHresultCheckObj();
        }
        ppppiStack_c8 = (int ****)0x45c6a7;
        __vbaFreeObj();
        ppppiStack_cc = (int ****)ppppiVar13[0xd];
        ppppiStack_c8 = (int ****)&local_30;
        ppppiStack_d0 = (int ****)0x45c6b4;
        pppppiVar2 = (int *****)(*(code *)(*ppppiStack_cc)[0x10])();
        if ((int)pppppiVar2 < 0) {
          ppppiStack_d8 = (int ****)ppppiVar13[0xd];
          ppppiStack_d0 = (int ****)0x40;
          ppppiStack_d4 = (int ****)&LAB_00414228;
          ppppiStack_e0 = (int ****)0x45c6c8;
          ppppiStack_dc = (int ****)pppppiVar2;
          __vbaHresultCheckObj();
        }
        ppppiVar7 = local_30;
        ppppiStack_d0 = local_30;
        ppppiStack_d4 = (int ****)0x45c6d3;
        pppppiVar2 = (int *****)(*(code *)(*local_30)[0x12])();
        if ((int)pppppiVar2 < 0) {
          ppppiStack_b4 = (int ****)0x48;
          ppppiStack_b8 = (int ****)&DAT_00414258;
          ppppiStack_bc = ppppiVar7;
          ppppiStack_c4 = (int ****)0x45c6e4;
          ppppiStack_c0 = (int ****)pppppiVar2;
          __vbaHresultCheckObj();
        }
        ppppiStack_b4 = (int ****)0x45c6ed;
        __vbaFreeObj();
      }
      else {
        ppppiStack_c4 = (int ****)0x45c6f5;
        pppppiVar2 = (int *****)(*(code *)(*ppppiStack_c0)[0x11])();
        if ((int)pppppiVar2 < 0) {
          ppppiStack_cc = (int ****)ppppiVar13[0xd];
          ppppiStack_c4 = (int ****)0x44;
          ppppiStack_c8 = (int ****)&LAB_00414228;
          ppppiStack_d4 = (int ****)0x45c709;
          ppppiStack_d0 = (int ****)pppppiVar2;
          __vbaHresultCheckObj();
        }
        pppppiVar2 = (int *****)local_30;
        ppppiStack_c4 = &local_2c;
        ppppiStack_c8 = local_24;
        ppppiStack_cc = (int ****)0x45c719;
        ppppiStack_d8 = (int ****)(*(code *)(*local_24)[0x13])();
        if ((int)ppppiStack_d8 < 0) {
          ppppiStack_cc = (int ****)0x4c;
          ppppiStack_d0 = (int ****)&DAT_00417d44;
          ppppiStack_d4 = local_24;
          ppppiStack_dc = (int ****)0x45c72d;
          __vbaHresultCheckObj();
        }
        local_40 = local_2c;
        ppppiStack_cc = &local_34;
        ppppiStack_d0 = local_48;
        local_2c = (int ***)0x0;
        local_48[0] = (int ***)0x8;
        ppppiStack_d4 = (int ****)pppppiVar2;
        ppppiStack_d8 = (int ****)0x45c74f;
        pppppiVar3 = (int *****)(*(code *)(*pppppiVar2)[9])();
        if ((int)pppppiVar3 < 0) {
          ppppiStack_d8 = (int ****)0x24;
          ppppiStack_dc = (int ****)&DAT_00414238;
          ppppiStack_e0 = (int ****)pppppiVar2;
          ppppiStack_e8 = (int ****)0x45c760;
          ppppiStack_e4 = (int ****)pppppiVar3;
          __vbaHresultCheckObj();
        }
        ppppiStack_d8 = (int ****)local_34;
        local_34 = (int ***)0x0;
        ppppiStack_dc = (int ****)&local_20;
        ppppiStack_e0 = (int ****)0x45c775;
        __vbaObjSet();
        ppppiStack_d8 = (int ****)0x45c77e;
        __vbaFreeObj();
        ppppiStack_d8 = (int ****)0x45c787;
        __vbaFreeVar();
        ppppiStack_d4 = (int ****)&local_6c;
        ppppiStack_d8 = local_20;
        ppppiStack_dc = (int ****)0x45c794;
        pppppiVar3 = (int *****)(*(code *)(*local_20)[0xf])();
        if ((int)pppppiVar3 < 0) {
          ppppiStack_dc = (int ****)0x3c;
          ppppiStack_e0 = (int ****)&LAB_004133e8;
          ppppiStack_e4 = local_20;
          ppppiStack_ec = (int ****)0x45c7a8;
          ppppiStack_e8 = (int ****)pppppiVar3;
          __vbaHresultCheckObj();
        }
        if ((short)local_6c == 0) {
          ppppiStack_dc = (int ****)&local_30;
          ppppiStack_e0 = local_20;
          ppppiStack_e4 = (int ****)0x45c958;
          pppppiVar2 = (int *****)(*(code *)(*local_20)[0x16])();
          if ((int)pppppiVar2 < 0) {
            ppppiStack_e4 = (int ****)0x58;
            ppppiStack_e8 = (int ****)&LAB_004133e8;
            ppppiStack_ec = local_20;
            ppppiStack_f4 = (int ****)0x45c96c;
            ppppiStack_f0 = (int ****)pppppiVar2;
            __vbaHresultCheckObj();
          }
          ppppiVar7 = local_30;
          ppppiStack_e4 = local_30;
          ppppiStack_e8 = (int ****)0x45c977;
          pppppiVar2 = (int *****)(*(code *)(*local_30)[0x14])();
          if ((int)pppppiVar2 < 0) {
            ppppiStack_e8 = (int ****)0x50;
            ppppiStack_ec = (int ****)&DAT_00414258;
            ppppiStack_f0 = ppppiVar7;
            ppppiStack_f8 = (int ****)0x45c988;
            ppppiStack_f4 = (int ****)pppppiVar2;
            __vbaHresultCheckObj();
          }
          ppppiStack_e8 = (int ****)0x45c991;
          __vbaFreeObj();
          ppppiStack_e8 = (int ****)&local_30;
          ppppiStack_ec = local_20;
          ppppiStack_f0 = (int ****)0x45c99e;
          pppppiVar2 = (int *****)(*(code *)(*local_20)[0x1c])();
          if ((int)pppppiVar2 < 0) {
            ppppiStack_f0 = (int ****)0x70;
            ppppiStack_f4 = (int ****)&LAB_004133e8;
            ppppiStack_f8 = local_20;
            ppppiStack_100 = (int ****)0x45c9b2;
            ppppiStack_fc = (int ****)pppppiVar2;
            __vbaHresultCheckObj();
          }
          ppppiVar7 = local_30;
          ppppiStack_f0 = (int ****)&local_6c;
          ppppiStack_f4 = local_30;
          ppppiStack_f8 = (int ****)0x45c9c1;
          puVar6 = (undefined1 *)(*(code *)(*local_30)[7])();
          if ((int)puVar6 < 0) {
            ppppiStack_f8 = (int ****)0x1c;
            ppppiStack_fc = (int ****)&LAB_004133f8;
            ppppiStack_100 = ppppiVar7;
            ppppiStack_108 = (int ****)0x45c9d2;
            puStack_104 = puVar6;
            __vbaHresultCheckObj();
          }
          ppppiVar7 = local_6c;
          ppppiStack_f8 = (int ****)0x45c9de;
          __vbaFreeObj();
          if ((short)ppppiVar7 != 0) {
            ppppiStack_f8 = (int ****)&local_30;
            ppppiStack_fc = local_20;
            ppppiStack_100 = (int ****)0x45c9f0;
            iVar4 = (*(code *)(*local_20)[0x16])();
            if (iVar4 < 0) {
              ppppiStack_100 = (int ****)0x58;
              puStack_104 = &LAB_004133e8;
              ppppiStack_108 = local_20;
              uStack_110 = 0x45ca04;
              iStack_10c = iVar4;
              __vbaHresultCheckObj();
            }
            ppppiVar7 = local_30;
            ppppiStack_100 = (int ****)0x45ca15;
            __vbaStrCopy();
            ppppiStack_f8 = &local_2c;
            ppppiStack_fc = ppppiVar7;
            ppppiStack_100 = (int ****)0x45ca1f;
            puVar6 = (undefined1 *)(*(code *)(*ppppiVar7)[0x1f])();
            if ((int)puVar6 < 0) {
              ppppiStack_f8 = (int ****)0x7c;
              ppppiStack_fc = (int ****)&DAT_00414258;
              ppppiStack_100 = ppppiVar7;
              ppppiStack_108 = (int ****)0x45ca30;
              puStack_104 = puVar6;
              __vbaHresultCheckObj();
            }
            ppppiStack_f8 = (int ****)0x45ca39;
            __vbaFreeStr();
            ppppiStack_f8 = (int ****)0x45ca42;
            __vbaFreeObj();
          }
          ppppiStack_f8 = (int ****)&local_30;
          ppppiStack_fc = local_20;
          ppppiStack_100 = (int ****)0x45ca4f;
          iVar4 = (*(code *)(*local_20)[0x16])();
          if (iVar4 < 0) {
            ppppiStack_100 = (int ****)0x58;
            puStack_104 = &LAB_004133e8;
            ppppiStack_108 = local_20;
            uStack_110 = 0x45ca63;
            iStack_10c = iVar4;
            __vbaHresultCheckObj();
          }
          ppppiVar7 = local_30;
          ppppiStack_100 = local_30;
          puStack_104 = (undefined1 *)0x45ca6e;
          pppppiVar2 = (int *****)(*(code *)(*local_30)[0x12])();
          if ((int)pppppiVar2 < 0) {
            ppppiStack_b4 = (int ****)0x48;
            ppppiStack_b8 = (int ****)&DAT_00414258;
            ppppiStack_bc = ppppiVar7;
            ppppiStack_c4 = (int ****)0x45ca7f;
            ppppiStack_c0 = (int ****)pppppiVar2;
            __vbaHresultCheckObj();
          }
          ppppiStack_b4 = (int ****)0x45ca88;
          __vbaFreeObj();
        }
        else {
          ppppiStack_dc = (int ****)&local_6c;
          ppppiStack_e0 = local_20;
          ppppiStack_e4 = (int ****)0x45c7c0;
          pppppiVar3 = (int *****)(*(code *)(*local_20)[0xf])();
          if ((int)pppppiVar3 < 0) {
            ppppiStack_b4 = (int ****)0x3c;
            ppppiStack_b8 = (int ****)&LAB_004133e8;
            ppppiStack_bc = local_20;
            ppppiStack_c4 = (int ****)0x45c7d4;
            ppppiStack_c0 = (int ****)pppppiVar3;
            __vbaHresultCheckObj();
          }
          sVar12 = (short)local_6c + -1;
          ppppiVar7 = (int ****)CONCAT22((short)((uint)ppppiVar13 >> 0x10),sVar12);
          if (SBORROW2((short)local_6c,1)) goto LAB_0045cca2;
          ppiVar5 = (int **)0x0;
          while (local_28 = ppiVar5, (short)ppiVar5 <= sVar12) {
            local_60 = &local_28;
            ppppiStack_b4 = (int ****)&local_30;
            local_68 = (int ***)0x4002;
            ppppiStack_b8 = local_20;
            ppppiStack_bc = (int ****)0x45c80a;
            ppppiStack_c8 = (int ****)(*(code *)(*local_20)[0x16])();
            if ((int)ppppiStack_c8 < 0) {
              ppppiStack_bc = (int ****)0x58;
              ppppiStack_c0 = (int ****)&LAB_004133e8;
              ppppiStack_c4 = local_20;
              ppppiStack_cc = (int ****)0x45c81e;
              __vbaHresultCheckObj();
            }
            ppppiStack_bc = (int ****)&DAT_00414258;
            ppppiStack_d0 = (int ****)0x1;
            ppppiStack_d4 = (int ****)0x0;
            ppppiStack_cc = (int ****)local_68;
            ppppiStack_c8 = (int ****)local_64;
            ppppiStack_c4 = (int ****)local_60;
            ppppiStack_dc = local_48;
            ppppiStack_c0 = (int ****)local_5c;
            ppppiStack_d8 = local_30;
            ppppiStack_e0 = (int ****)0x45c851;
            ppppiStack_c0 = (int ****)__vbaLateIdCallLd();
            ppppiStack_c4 = (int ****)0x45c85b;
            ppppiStack_bc = (int ****)__vbaCastObjVar();
            ppppiStack_c0 = (int ****)&local_1c;
            ppppiStack_c4 = (int ****)0x45c866;
            __vbaObjSet();
            ppppiStack_bc = (int ****)0x45c86f;
            __vbaFreeObj();
            ppppiStack_bc = (int ****)0x45c878;
            __vbaFreeVar();
            ppppiStack_b8 = local_1c;
            ppppiStack_bc = (int ****)0x45c881;
            iVar4 = (*(code *)(*local_1c)[0x14])();
            if (iVar4 < 0) {
              ppppiStack_bc = (int ****)0x50;
              ppppiStack_c0 = (int ****)&DAT_00414258;
              ppppiStack_c4 = local_1c;
              ppppiStack_cc = (int ****)0x45c895;
              ppppiStack_c8 = (int ****)iVar4;
              __vbaHresultCheckObj();
            }
            ppppiStack_bc = (int ****)&local_30;
            ppppiStack_c0 = local_20;
            ppppiStack_c4 = (int ****)0x45c8a2;
            puVar6 = (undefined1 *)(*(code *)(*local_20)[0x1c])();
            if ((int)puVar6 < 0) {
              ppppiStack_c4 = (int ****)0x70;
              ppppiStack_c8 = (int ****)&LAB_004133e8;
              ppppiStack_cc = local_20;
              ppppiStack_d4 = (int ****)0x45c8b6;
              ppppiStack_d0 = (int ****)puVar6;
              __vbaHresultCheckObj();
            }
            ppppiVar8 = local_30;
            ppppiStack_c4 = (int ****)&local_6c;
            ppppiStack_c8 = local_30;
            ppppiStack_cc = (int ****)0x45c8c5;
            pppppiVar2 = (int *****)(*(code *)(*local_30)[7])();
            if ((int)pppppiVar2 < 0) {
              ppppiStack_cc = (int ****)0x1c;
              ppppiStack_d0 = (int ****)&LAB_004133f8;
              ppppiStack_d4 = ppppiVar8;
              ppppiStack_dc = (int ****)0x45c8d6;
              ppppiStack_d8 = (int ****)pppppiVar2;
              __vbaHresultCheckObj();
            }
            pppppiVar2 = (int *****)local_6c;
            ppppiStack_cc = (int ****)0x45c8e2;
            __vbaFreeObj();
            if ((short)pppppiVar2 != 0) {
              ppppiStack_cc = (int ****)0x45c8f5;
              __vbaStrCopy();
              ppppiStack_c4 = &local_2c;
              ppppiStack_c8 = local_1c;
              ppppiStack_cc = (int ****)0x45c902;
              pppppiVar3 = (int *****)(*(code *)(*local_1c)[0x1f])();
              if ((int)pppppiVar3 < 0) {
                ppppiStack_cc = (int ****)0x7c;
                ppppiStack_d0 = (int ****)&DAT_00414258;
                ppppiStack_d4 = local_1c;
                ppppiStack_dc = (int ****)0x45c916;
                ppppiStack_d8 = (int ****)pppppiVar3;
                __vbaHresultCheckObj();
              }
              ppppiStack_cc = (int ****)0x45c91f;
              __vbaFreeStr();
            }
            ppppiStack_cc = local_1c;
            ppppiStack_d0 = (int ****)0x45c928;
            pppppiVar3 = (int *****)(*(code *)(*local_1c)[0x12])();
            if ((int)pppppiVar3 < 0) {
              ppppiStack_b4 = (int ****)0x48;
              ppppiStack_b8 = (int ****)&DAT_00414258;
              ppppiStack_bc = local_1c;
              ppppiStack_c4 = (int ****)0x45c93c;
              ppppiStack_c0 = (int ****)pppppiVar3;
              __vbaHresultCheckObj();
            }
            ppiVar5 = (int **)(uint)(ushort)((short)local_28 + 1);
            if (SCARRY2((short)local_28,1)) goto LAB_0045cca2;
          }
        }
      }
      ppppiStack_b4 = (int ****)&DAT_00417d34;
      ppppiStack_b8 = (int ****)0x0;
      ppppiStack_bc = (int ****)0x7;
      ppppiStack_c4 = (int ****)0x45ca9f;
      ppppiStack_c0 = ppppiVar13;
      ppppiStack_c4 = (int ****)(*(code *)(*ppppiVar13)[0xc2])();
      ppppiStack_c8 = (int ****)&local_30;
      ppppiStack_cc = (int ****)0x45caac;
      ppppiStack_c4 = (int ****)__vbaObjSet();
      ppppiStack_c8 = local_48;
      ppppiStack_cc = (int ****)0x45cab7;
      ppppiStack_bc = (int ****)__vbaLateIdCallLd();
      ppppiStack_c0 = (int ****)0x45cac1;
      ppppiStack_b8 = (int ****)__vbaCastObjVar();
      ppppiStack_bc = &local_34;
      ppppiStack_c0 = (int ****)0x45cac8;
      ppppiVar7 = (int ****)__vbaObjSet();
      ppppiStack_b8 = &local_2c;
      ppppiStack_bc = local_24;
      ppppiStack_c0 = (int ****)0x45cad7;
      ppppiVar8 = (int ****)(*(code *)(*local_24)[0x13])();
      if ((int)ppppiVar8 < 0) {
        ppppiStack_c0 = (int ****)0x4c;
        ppppiStack_c4 = (int ****)&DAT_00417d44;
        ppppiStack_c8 = local_24;
        ppppiStack_d0 = (int ****)0x45caeb;
        ppppiStack_cc = ppppiVar8;
        __vbaHresultCheckObj();
      }
      local_50 = local_2c;
      local_2c = (int ***)0x0;
      ppppiStack_c0 = (int ****)local_58;
      local_58[0] = 8;
      ppppiStack_c8 = (int ****)0x45cb09;
      ppppiStack_c4 = ppppiVar7;
      ppppiStack_c0 = (int ****)(*(code *)(*ppppiVar7)[0xd])();
      if ((int)ppppiStack_c0 < 0) {
        ppppiStack_b4 = (int ****)0x34;
        ppppiStack_b8 = (int ****)&DAT_00417d34;
        ppppiStack_c4 = (int ****)0x45cb1a;
        ppppiStack_bc = ppppiVar7;
        __vbaHresultCheckObj();
      }
      ppppiStack_b4 = &local_34;
      ppppiStack_b8 = (int ****)&local_30;
      ppppiStack_bc = (int ****)0x2;
      ppppiStack_c0 = (int ****)0x45cb2a;
      __vbaFreeObjList();
      ppppiStack_c0 = (int ****)local_58;
      ppppiStack_c4 = local_48;
      ppppiStack_c8 = (int ****)0x2;
      ppppiStack_cc = (int ****)0x45cb3a;
      __vbaFreeVarList();
      ppiVar5 = local_28;
    }
    ppppiVar7 = ppppiVar13;
    ppiVar5 = (int **)CONCAT22(uVar11,(short)local_28 + 1);
  } while (!SCARRY2((short)local_28,1));
LAB_0045cca2:
  ppppiStack_b4 = (int ****)0x45cca8;
  __vbaErrorOverflow();
  ppppiStack_c0 = (int ****)&LAB_004032d6;
  ppppiStack_c4 = ExceptionList;
  pcStack_20c = pcVar15;
  ppppiStack_bc = (int ****)&ppppiStack_210;
  ppppiStack_b8 = (int ****)&DAT_004028c8;
  ppppiStack_b4 = (int ****)(unaff_ESI & 1);
  piVar14 = (int *)(unaff_ESI & 0xfffffffe);
  ExceptionList = &ppppiStack_c4;
  ppppiStack_210 = (int ****)pppppiVar2;
  pppiStack_208 = (int ***)ppppiVar7;
  pppiStack_b0 = (int ***)&stack0xfffffffc;
  (**(code **)(*piVar14 + 4))(piVar14);
  uVar17 = 0;
  ppppiStack_c8 = (int ****)0x0;
  ppppiStack_cc = (int ****)0x0;
  ppppiStack_d4 = (int ****)0x0;
  ppppiStack_d8 = (int ****)0x0;
  ppppiStack_dc = (int ****)0x0;
  ppppiStack_e0 = (int ****)0x0;
  ppppiStack_e4 = (int ****)0x0;
  ppppiStack_e8 = (int ****)0x0;
  ppppiStack_ec = (int ****)0x0;
  ppppiStack_f0 = (int ****)0x0;
  ppppiStack_100 = (int ****)0x0;
  uStack_110 = 0;
  auStack_120[0] = 0;
  auStack_130[0] = 0;
  auStack_140[0] = 0;
  auStack_150[0] = 0;
  uStack_160 = 0;
  uStack_170 = 0;
  auStack_194[0] = 0;
  iStack_198 = 0;
  uStack_1bc = 0;
  uStack_1c0 = 0;
  uVar9 = (**(code **)(*piVar14 + 0x308))(piVar14,7,0,&DAT_00417d34);
  uVar9 = __vbaObjSet(&ppppiStack_e4,uVar9);
  uVar9 = __vbaLateIdCallLd(&ppppiStack_100,uVar9);
  uVar9 = __vbaCastObjVar(uVar9,uVar17);
  piVar10 = (int *)__vbaObjSet(&ppppiStack_e8,uVar9);
  piVar1 = piVar10;
  iVar4 = (**(code **)(*piVar10 + 0x2c))(piVar10);
  pcVar15 = __vbaHresultCheckObj_exref;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar10,&DAT_00417d34,0x2c);
  }
  __vbaFreeObjList(2,&ppppiStack_e4,&ppppiStack_e8);
  __vbaFreeVar(piVar1);
  iVar4 = (**(code **)(*(int *)piVar14[0xd] + 0x48))((int *)piVar14[0xd],&ppppiStack_e4);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar14[0xd],&LAB_00414228,0x48);
  }
  ppppiVar13 = ppppiStack_e4;
  ppppiStack_e4 = (int ****)0x0;
  __vbaObjSet(&ppppiStack_cc,ppppiVar13);
  iVar4 = (*(code *)(*ppppiStack_cc)[0x16])(ppppiStack_cc,&ppppiStack_e4);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,ppppiStack_cc,&LAB_004133e8,0x58);
  }
  pppiStack_1a0 = (int ***)ppppiStack_e4;
  iVar4 = (*(code *)(*ppppiStack_e4)[0xd])(ppppiStack_e4,&ppppiStack_d4);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,pppiStack_1a0,&DAT_00414258,0x34);
  }
  iVar4 = (*(code *)(*ppppiStack_cc)[0x16])(ppppiStack_cc,&ppppiStack_e8);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,ppppiStack_cc,&LAB_004133e8,0x58);
  }
  pppiStack_1ac = (int ***)ppppiStack_e8;
  iVar4 = (*(code *)(*ppppiStack_e8)[0xc])(ppppiStack_e8,&ppppiStack_d8);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,pppiStack_1ac,&DAT_00414258,0x30);
  }
  ppppiStack_d8 = (int ****)0x0;
  __vbaStrMove();
  ppppiStack_d4 = (int ****)0x0;
  __vbaStrMove();
  iVar4 = (**(code **)(*(int *)piVar14[0xe] + 0x24))
                    ((int *)piVar14[0xe],&ppppiStack_dc,&ppppiStack_e0,auStack_194);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar14[0xe],&DAT_004146ac,0x24);
  }
  uStack_1b8 = auStack_194[0];
  __vbaFreeStrList(2,&ppppiStack_dc,&ppppiStack_e0);
  __vbaFreeObjList(2,&ppppiStack_e4,&ppppiStack_e8);
  if ((short)uStack_1b8 == 0) {
LAB_0045d01f:
    iVar4 = (*(code *)(*ppppiStack_cc)[0x16])(ppppiStack_cc,&ppppiStack_e4);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,ppppiStack_cc,&LAB_004133e8,0x58);
    }
    ppppiVar13 = ppppiStack_e4;
    ppppiStack_e4 = (int ****)0x0;
    __vbaObjSet(&ppppiStack_e8,ppppiVar13);
    (**(code **)(*piVar14 + 0x704))(piVar14,&ppppiStack_e8,auStack_194);
    pppiStack_1a0 = (int ***)CONCAT22(pppiStack_1a0._2_2_,(short)auStack_194[0]);
    __vbaFreeObj();
    if ((short)pppiStack_1a0 == 0) {
      piVar1 = (int *)piVar14[0xd];
      iVar4 = (**(code **)(*piVar1 + 0x44))(piVar1,&ppppiStack_e4);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar14[0xd],&LAB_00414228,0x44);
      }
      ppppiVar13 = ppppiStack_e4;
      ppppiStack_e4 = (int ****)0x0;
      uVar9 = __vbaObjSet(&uStack_1bc,ppppiVar13);
      iVar4 = __vbaForEachCollObj(&LAB_004133e8,&uStack_1c0,&ppppiStack_cc,uVar9);
      while (iVar4 != 0) {
        iVar4 = (*(code *)(*ppppiStack_cc)[0xf])(ppppiStack_cc,auStack_194);
        if (iVar4 < 0) {
          (*pcVar15)(iVar4,ppppiStack_cc,&LAB_004133e8,0x3c);
        }
        if ((short)auStack_194[0] == 0) {
          iVar4 = (*(code *)(*ppppiStack_cc)[0x16])(ppppiStack_cc,&ppppiStack_e4);
          if (iVar4 < 0) {
            (*pcVar15)(iVar4,ppppiStack_cc,&LAB_004133e8,0x58);
          }
          pppiStack_1a0 = (int ***)ppppiStack_e4;
          iVar4 = (*(code *)(*ppppiStack_e4)[0xd])(ppppiStack_e4,&ppppiStack_d4);
          if (iVar4 < 0) {
            (*pcVar15)(iVar4,pppiStack_1a0,&DAT_00414258,0x34);
          }
          iVar4 = (*(code *)(*ppppiStack_cc)[0x16])(ppppiStack_cc,&ppppiStack_e8);
          if (iVar4 < 0) {
            (*pcVar15)(iVar4,ppppiStack_cc,&LAB_004133e8,0x58);
          }
          pppiStack_1ac = (int ***)ppppiStack_e8;
          iVar4 = (*(code *)(*ppppiStack_e8)[0xc])(ppppiStack_e8,&ppppiStack_d8);
          if (iVar4 < 0) {
            (*pcVar15)(iVar4,pppiStack_1ac,&DAT_00414258,0x30);
          }
          ppppiStack_d8 = (int ****)0x0;
          __vbaStrMove();
          ppppiStack_d4 = (int ****)0x0;
          __vbaStrMove();
          iVar4 = (**(code **)(*(int *)piVar14[0xe] + 0x24))
                            ((int *)piVar14[0xe],&ppppiStack_dc,&ppppiStack_e0,auStack_194);
          if (iVar4 < 0) {
            (*pcVar15)(iVar4,piVar14[0xe],&DAT_004146ac,0x24);
          }
          uStack_1b8 = auStack_194[0];
          __vbaFreeStrList(2,&ppppiStack_dc,&ppppiStack_e0);
          __vbaFreeObjList(2,&ppppiStack_e4,&ppppiStack_e8);
          if ((short)uStack_1b8 != 0) {
            iVar4 = (*(code *)(*ppppiStack_cc)[7])(ppppiStack_cc,&ppppiStack_d4);
            if (iVar4 < 0) {
              (*pcVar15)(iVar4,ppppiStack_cc,&LAB_004133e8,0x1c);
            }
            iVar4 = (*(code *)(*ppppiStack_cc)[0x16])(ppppiStack_cc,&ppppiStack_e4);
            if (iVar4 < 0) {
              (*pcVar15)(iVar4,ppppiStack_cc,&LAB_004133e8,0x58);
            }
            pppiStack_1a4 = (int ***)ppppiStack_e4;
            iVar4 = (*(code *)(*ppppiStack_e4)[0xc])(ppppiStack_e4,&ppppiStack_d8);
            if (iVar4 < 0) {
              (*pcVar15)(iVar4,pppiStack_1a4,&DAT_00414258,0x30);
            }
            uVar17 = 0;
            uVar9 = (**(code **)(*piVar14 + 0x308))(piVar14,7,0,&DAT_00417d34);
            uVar9 = __vbaObjSet(&ppppiStack_e8,uVar9);
            uVar9 = __vbaLateIdCallLd(&ppppiStack_100,uVar9);
            uVar9 = __vbaCastObjVar(uVar9,uVar17);
            piVar10 = (int *)__vbaObjSet(&ppppiStack_ec,uVar9);
            pppiStack_118 = (int ***)ppppiStack_d4;
            auStack_150[0] = 10;
            auStack_140[0] = 10;
            uStack_110 = 10;
            uStack_148 = 0x80020004;
            uStack_138 = 0x80020004;
            ppppiStack_108 = (int ****)0x80020004;
            pppiStack_128 = (int ***)ppppiStack_d8;
            ppppiStack_d8 = (int ****)0x0;
            auStack_130[0] = 8;
            ppppiStack_d4 = (int ****)0x0;
            auStack_120[0] = 8;
            iVar4 = (**(code **)(*piVar10 + 0x28))
                              (piVar10,&uStack_110,auStack_120,auStack_130,auStack_140,auStack_150,
                               &ppppiStack_f0);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,piVar10,&DAT_00417d34,0x28);
            }
            ppppiVar13 = ppppiStack_f0;
            iVar4 = (*(code *)(*ppppiStack_f0)[0x18])(ppppiStack_f0,0xffffffff);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,ppppiVar13,&DAT_00417d44,0x60);
            }
            __vbaFreeObjList(4,&ppppiStack_e4,&ppppiStack_e8,&ppppiStack_ec,&ppppiStack_f0);
            __vbaFreeVarList(6,&ppppiStack_100,&uStack_110,auStack_120,auStack_130,auStack_140,
                             auStack_150);
            pcVar15 = __vbaHresultCheckObj_exref;
          }
        }
        iVar4 = __vbaNextEachCollObj(&LAB_004133e8,&uStack_1c0,&ppppiStack_cc);
      }
      iVar4 = (**(code **)(*(int *)piVar14[0xd] + 0x40))((int *)piVar14[0xd],&ppppiStack_e4);
      if (iVar4 < 0) {
        (*pcVar15)(iVar4,piVar14[0xd],&LAB_00414228,0x40);
      }
      pppiStack_1a0 = (int ***)ppppiStack_e4;
      iVar4 = (*(code *)(*ppppiStack_e4)[0xd])(ppppiStack_e4,&ppppiStack_d4);
      if (iVar4 < 0) {
        (*pcVar15)(iVar4,pppiStack_1a0,&DAT_00414258,0x34);
      }
      iVar4 = (**(code **)(*(int *)piVar14[0xd] + 0x40))((int *)piVar14[0xd],&ppppiStack_e8);
      if (iVar4 < 0) {
        (*pcVar15)(iVar4,piVar14[0xd],&LAB_00414228,0x40);
      }
      pppiStack_1ac = (int ***)ppppiStack_e8;
      iVar4 = (*(code *)(*ppppiStack_e8)[0xc])(ppppiStack_e8,&ppppiStack_d8);
      if (iVar4 < 0) {
        (*pcVar15)(iVar4,pppiStack_1ac,&DAT_00414258,0x30);
      }
      ppppiStack_d8 = (int ****)0x0;
      __vbaStrMove();
      ppppiStack_d4 = (int ****)0x0;
      __vbaStrMove();
      iVar4 = (**(code **)(*(int *)piVar14[0xe] + 0x24))
                        ((int *)piVar14[0xe],&ppppiStack_dc,&ppppiStack_e0,auStack_194);
      if (iVar4 < 0) {
        (*pcVar15)(iVar4,piVar14[0xe],&DAT_004146ac,0x24);
      }
      uStack_1b8 = auStack_194[0];
      __vbaFreeStrList(2,&ppppiStack_dc,&ppppiStack_e0);
      __vbaFreeObjList(2,&ppppiStack_e4,&ppppiStack_e8);
      if ((short)uStack_1b8 != 0) {
        iVar4 = (**(code **)(*(int *)piVar14[0xd] + 0x40))((int *)piVar14[0xd],&ppppiStack_e4);
        if (iVar4 < 0) {
          (*pcVar15)(iVar4,piVar14[0xd],&LAB_00414228,0x40);
        }
        pppiStack_1a0 = (int ***)ppppiStack_e4;
        iVar4 = (*(code *)(*ppppiStack_e4)[0xc])(ppppiStack_e4,&ppppiStack_d4);
        if (iVar4 < 0) {
          (*pcVar15)(iVar4,pppiStack_1a0,&DAT_00414258,0x30);
        }
        uVar17 = 0;
        uVar9 = (**(code **)(*piVar14 + 0x308))(piVar14,7,0,&DAT_00417d34);
        uVar9 = __vbaObjSet(&ppppiStack_e8,uVar9);
        uVar9 = __vbaLateIdCallLd(&ppppiStack_100,uVar9);
        uVar9 = __vbaCastObjVar(uVar9,uVar17);
        piStack_1a8 = (int *)__vbaObjSet(&ppppiStack_ec,uVar9);
        uStack_148 = 0x80020004;
        uStack_138 = 0x80020004;
        pppiStack_128 = (int ***)ppppiStack_d4;
        auStack_150[0] = 10;
        auStack_140[0] = 10;
        ppppiStack_d4 = (int ****)0x0;
        auStack_130[0] = 8;
        pwStack_168 = L"***GL";
        uStack_170 = 8;
        __vbaVarDup();
        ppppiStack_108 = (int ****)0x80020004;
        uStack_110 = 10;
        iVar4 = (**(code **)(*piStack_1a8 + 0x28))
                          (piStack_1a8,&uStack_110,auStack_120,auStack_130,auStack_140,auStack_150,
                           &ppppiStack_f0);
        if (iVar4 < 0) {
          (*pcVar15)(iVar4,piStack_1a8,&DAT_00417d34,0x28);
        }
        pppiStack_1b0 = (int ***)ppppiStack_f0;
        iVar4 = (*(code *)(*ppppiStack_f0)[0x18])(ppppiStack_f0,0xffffffff);
        if (iVar4 < 0) {
          (*pcVar15)(iVar4,pppiStack_1b0,&DAT_00417d44,0x60);
        }
        __vbaFreeObjList(4,&ppppiStack_e4,&ppppiStack_e8,&ppppiStack_ec,&ppppiStack_f0);
        __vbaFreeVarList(6,&ppppiStack_100,&uStack_110,auStack_120,auStack_130,auStack_140,
                         auStack_150);
      }
      uVar17 = 0;
      uVar9 = (**(code **)(*piVar14 + 0x308))(piVar14,7,0,&DAT_00417d34);
      uVar9 = __vbaObjSet(&ppppiStack_e4,uVar9);
      uVar9 = __vbaLateIdCallLd(&ppppiStack_100,uVar9);
      uVar9 = __vbaCastObjVar(uVar9,uVar17);
      ppppiStack_19c = (int ****)__vbaObjSet(&ppppiStack_e8,uVar9);
      iVar4 = (*(code *)(*ppppiStack_19c)[7])(ppppiStack_19c,&iStack_198);
      if (iVar4 < 0) {
        (*pcVar15)(iVar4,ppppiStack_19c,&DAT_00417d34,0x1c);
      }
      pppiStack_1a4 = (int ***)-(uint)(iStack_198 == 0);
      __vbaFreeObjList(2,&ppppiStack_e4,&ppppiStack_e8);
      __vbaFreeVar(piVar1);
      if ((short)pppiStack_1a4 != 0) {
        if (DAT_00480244 == (int *****)0x0) {
          __vbaNew2(&DAT_00413b34,&DAT_00480244);
        }
        ppppiStack_19c = (int ****)DAT_00480244;
        pppiStack_204 = (int ***)*DAT_00480244;
        uVar9 = __vbaObjSetAddref(&ppppiStack_e4,piVar14);
        iVar4 = (*(code *)pppiStack_204[4])(ppppiStack_19c,uVar9);
        if (iVar4 < 0) {
          (*pcVar15)(iVar4,ppppiStack_19c,&DAT_00413b24,0x10);
        }
        __vbaFreeObj();
      }
      goto LAB_0045d791;
    }
  }
  else {
    iVar4 = (*(code *)(*ppppiStack_cc)[0x16])(ppppiStack_cc,&ppppiStack_e4);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,ppppiStack_cc,&LAB_004133e8,0x58);
    }
    ppppiVar13 = ppppiStack_e4;
    ppppiStack_e4 = (int ****)0x0;
    __vbaObjSet(&ppppiStack_e8,ppppiVar13);
    (**(code **)(*piVar14 + 0x700))(piVar14,&ppppiStack_e8,auStack_194);
    pppiStack_1a0 = (int ***)CONCAT22(pppiStack_1a0._2_2_,(short)auStack_194[0]);
    __vbaFreeObj();
    if ((short)pppiStack_1a0 == 0) goto LAB_0045d01f;
  }
  pppiStack_128 = (int ***)0x80020004;
  pppiStack_118 = (int ***)0x80020004;
  auStack_130[0] = 10;
  auStack_120[0] = 10;
  pwStack_168 = L"CTP Editor";
  uStack_170 = 8;
  __vbaVarDup();
  pwStack_158 = L"Project creation cannot proceed without this file, aborting";
  uStack_160 = 8;
  __vbaVarDup();
  rtcMsgBox(&ppppiStack_100,0x30,&uStack_110,auStack_120,auStack_130);
  __vbaFreeVarList(4,&ppppiStack_100,&uStack_110,auStack_120,auStack_130);
  (**(code **)(*piVar14 + 0x6fc))(piVar14);
LAB_0045d791:
  ppppiStack_b4 = (int ****)0x0;
  __vbaFreeObjList(2,&uStack_1bc,&uStack_1c0,&LAB_0045d81f);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x45ccb0 (FUN_0045ccb0) [estimated] strings: ***GL; CTP Editor; Project creation cannot proceed without this file, aborting ---- */
void __cdecl FUN_0045ccb0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int *local_104;
  int *local_100;
  int *local_fc;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  int local_ec;
  undefined4 local_e8 [9];
  undefined4 local_c4;
  wchar_t *local_bc;
  undefined4 local_b4;
  wchar_t *local_ac;
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
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffe9c;
  local_c = &DAT_004028c8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  uVar7 = 0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_28[0] = 0;
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
  local_c4 = 0;
  local_e8[0] = 0;
  local_ec = 0;
  local_110 = 0;
  local_114 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_38,uVar1);
  uVar1 = __vbaLateIdCallLd(local_54,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar7);
  piVar2 = (int *)__vbaObjSet(&local_3c,uVar1);
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  pcVar5 = __vbaHresultCheckObj_exref;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x2c);
  }
  __vbaFreeObjList(2,&local_38,&local_3c);
  __vbaFreeVar(piVar6);
  iVar3 = (**(code **)(*(int *)piVar4[0xd] + 0x48))((int *)piVar4[0xd],&local_38);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0xd],&LAB_00414228,0x48);
  }
  piVar6 = local_38;
  local_38 = (int *)0x0;
  __vbaObjSet(&local_20,piVar6);
  iVar3 = (**(code **)(*local_20 + 0x58))(local_20,&local_38);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_20,&LAB_004133e8,0x58);
  }
  local_f4 = local_38;
  iVar3 = (**(code **)(*local_38 + 0x34))(local_38,local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_f4,&DAT_00414258,0x34);
  }
  iVar3 = (**(code **)(*local_20 + 0x58))(local_20,&local_3c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_20,&LAB_004133e8,0x58);
  }
  local_100 = local_3c;
  iVar3 = (**(code **)(*local_3c + 0x30))(local_3c,&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_100,&DAT_00414258,0x30);
  }
  local_2c = 0;
  __vbaStrMove();
  local_28[0] = 0;
  __vbaStrMove();
  iVar3 = (**(code **)(*(int *)piVar4[0xe] + 0x24))((int *)piVar4[0xe],&local_30,&local_34,local_e8)
  ;
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0xe],&DAT_004146ac,0x24);
  }
  local_10c = local_e8[0];
  __vbaFreeStrList(2,&local_30,&local_34);
  __vbaFreeObjList(2,&local_38,&local_3c);
  if ((short)local_10c == 0) {
LAB_0045d01f:
    iVar3 = (**(code **)(*local_20 + 0x58))(local_20,&local_38);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_20,&LAB_004133e8,0x58);
    }
    piVar6 = local_38;
    local_38 = (int *)0x0;
    __vbaObjSet(&local_3c,piVar6);
    (**(code **)(*piVar4 + 0x704))(piVar4,&local_3c,local_e8);
    local_f4 = (int *)CONCAT22(local_f4._2_2_,(short)local_e8[0]);
    __vbaFreeObj();
    if ((short)local_f4 == 0) {
      piVar6 = (int *)piVar4[0xd];
      iVar3 = (**(code **)(*piVar6 + 0x44))(piVar6,&local_38);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar4[0xd],&LAB_00414228,0x44);
      }
      piVar2 = local_38;
      local_38 = (int *)0x0;
      uVar1 = __vbaObjSet(&local_110,piVar2);
      iVar3 = __vbaForEachCollObj(&LAB_004133e8,&local_114,&local_20,uVar1);
      while (iVar3 != 0) {
        iVar3 = (**(code **)(*local_20 + 0x3c))(local_20,local_e8);
        if (iVar3 < 0) {
          (*pcVar5)(iVar3,local_20,&LAB_004133e8,0x3c);
        }
        if ((short)local_e8[0] == 0) {
          iVar3 = (**(code **)(*local_20 + 0x58))(local_20,&local_38);
          if (iVar3 < 0) {
            (*pcVar5)(iVar3,local_20,&LAB_004133e8,0x58);
          }
          local_f4 = local_38;
          iVar3 = (**(code **)(*local_38 + 0x34))(local_38,local_28);
          if (iVar3 < 0) {
            (*pcVar5)(iVar3,local_f4,&DAT_00414258,0x34);
          }
          iVar3 = (**(code **)(*local_20 + 0x58))(local_20,&local_3c);
          if (iVar3 < 0) {
            (*pcVar5)(iVar3,local_20,&LAB_004133e8,0x58);
          }
          local_100 = local_3c;
          iVar3 = (**(code **)(*local_3c + 0x30))(local_3c,&local_2c);
          if (iVar3 < 0) {
            (*pcVar5)(iVar3,local_100,&DAT_00414258,0x30);
          }
          local_2c = 0;
          __vbaStrMove();
          local_28[0] = 0;
          __vbaStrMove();
          iVar3 = (**(code **)(*(int *)piVar4[0xe] + 0x24))
                            ((int *)piVar4[0xe],&local_30,&local_34,local_e8);
          if (iVar3 < 0) {
            (*pcVar5)(iVar3,piVar4[0xe],&DAT_004146ac,0x24);
          }
          local_10c = local_e8[0];
          __vbaFreeStrList(2,&local_30,&local_34);
          __vbaFreeObjList(2,&local_38,&local_3c);
          if ((short)local_10c != 0) {
            iVar3 = (**(code **)(*local_20 + 0x1c))(local_20,local_28);
            if (iVar3 < 0) {
              (*pcVar5)(iVar3,local_20,&LAB_004133e8,0x1c);
            }
            iVar3 = (**(code **)(*local_20 + 0x58))(local_20,&local_38);
            if (iVar3 < 0) {
              (*pcVar5)(iVar3,local_20,&LAB_004133e8,0x58);
            }
            local_f8 = local_38;
            iVar3 = (**(code **)(*local_38 + 0x30))(local_38,&local_2c);
            if (iVar3 < 0) {
              (*pcVar5)(iVar3,local_f8,&DAT_00414258,0x30);
            }
            uVar7 = 0;
            uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
            uVar1 = __vbaObjSet(&local_3c,uVar1);
            uVar1 = __vbaLateIdCallLd(local_54,uVar1);
            uVar1 = __vbaCastObjVar(uVar1,uVar7);
            piVar2 = (int *)__vbaObjSet(&local_40,uVar1);
            local_6c = local_28[0];
            local_a4[0] = 10;
            local_94[0] = 10;
            local_64[0] = 10;
            local_9c = 0x80020004;
            local_8c = 0x80020004;
            local_5c = 0x80020004;
            local_7c = local_2c;
            local_2c = 0;
            local_84[0] = 8;
            local_28[0] = 0;
            local_74[0] = 8;
            iVar3 = (**(code **)(*piVar2 + 0x28))
                              (piVar2,local_64,local_74,local_84,local_94,local_a4,&local_44);
            if (iVar3 < 0) {
              __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x28);
            }
            piVar2 = local_44;
            iVar3 = (**(code **)(*local_44 + 0x60))(local_44,0xffffffff);
            if (iVar3 < 0) {
              __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d44,0x60);
            }
            __vbaFreeObjList(4,&local_38,&local_3c,&local_40,&local_44);
            __vbaFreeVarList(6,local_54,local_64,local_74,local_84,local_94,local_a4);
            pcVar5 = __vbaHresultCheckObj_exref;
          }
        }
        iVar3 = __vbaNextEachCollObj(&LAB_004133e8,&local_114,&local_20);
      }
      iVar3 = (**(code **)(*(int *)piVar4[0xd] + 0x40))((int *)piVar4[0xd],&local_38);
      if (iVar3 < 0) {
        (*pcVar5)(iVar3,piVar4[0xd],&LAB_00414228,0x40);
      }
      local_f4 = local_38;
      iVar3 = (**(code **)(*local_38 + 0x34))(local_38,local_28);
      if (iVar3 < 0) {
        (*pcVar5)(iVar3,local_f4,&DAT_00414258,0x34);
      }
      iVar3 = (**(code **)(*(int *)piVar4[0xd] + 0x40))((int *)piVar4[0xd],&local_3c);
      if (iVar3 < 0) {
        (*pcVar5)(iVar3,piVar4[0xd],&LAB_00414228,0x40);
      }
      local_100 = local_3c;
      iVar3 = (**(code **)(*local_3c + 0x30))(local_3c,&local_2c);
      if (iVar3 < 0) {
        (*pcVar5)(iVar3,local_100,&DAT_00414258,0x30);
      }
      local_2c = 0;
      __vbaStrMove();
      local_28[0] = 0;
      __vbaStrMove();
      iVar3 = (**(code **)(*(int *)piVar4[0xe] + 0x24))
                        ((int *)piVar4[0xe],&local_30,&local_34,local_e8);
      if (iVar3 < 0) {
        (*pcVar5)(iVar3,piVar4[0xe],&DAT_004146ac,0x24);
      }
      local_10c = local_e8[0];
      __vbaFreeStrList(2,&local_30,&local_34);
      __vbaFreeObjList(2,&local_38,&local_3c);
      if ((short)local_10c != 0) {
        iVar3 = (**(code **)(*(int *)piVar4[0xd] + 0x40))((int *)piVar4[0xd],&local_38);
        if (iVar3 < 0) {
          (*pcVar5)(iVar3,piVar4[0xd],&LAB_00414228,0x40);
        }
        local_f4 = local_38;
        iVar3 = (**(code **)(*local_38 + 0x30))(local_38,local_28);
        if (iVar3 < 0) {
          (*pcVar5)(iVar3,local_f4,&DAT_00414258,0x30);
        }
        uVar7 = 0;
        uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
        uVar1 = __vbaObjSet(&local_3c,uVar1);
        uVar1 = __vbaLateIdCallLd(local_54,uVar1);
        uVar1 = __vbaCastObjVar(uVar1,uVar7);
        local_fc = (int *)__vbaObjSet(&local_40,uVar1);
        local_9c = 0x80020004;
        local_8c = 0x80020004;
        local_7c = local_28[0];
        local_a4[0] = 10;
        local_94[0] = 10;
        local_28[0] = 0;
        local_84[0] = 8;
        local_bc = L"***GL";
        local_c4 = 8;
        __vbaVarDup();
        local_5c = 0x80020004;
        local_64[0] = 10;
        iVar3 = (**(code **)(*local_fc + 0x28))
                          (local_fc,local_64,local_74,local_84,local_94,local_a4,&local_44);
        if (iVar3 < 0) {
          (*pcVar5)(iVar3,local_fc,&DAT_00417d34,0x28);
        }
        local_104 = local_44;
        iVar3 = (**(code **)(*local_44 + 0x60))(local_44,0xffffffff);
        if (iVar3 < 0) {
          (*pcVar5)(iVar3,local_104,&DAT_00417d44,0x60);
        }
        __vbaFreeObjList(4,&local_38,&local_3c,&local_40,&local_44);
        __vbaFreeVarList(6,local_54,local_64,local_74,local_84,local_94,local_a4);
      }
      uVar7 = 0;
      uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
      uVar1 = __vbaObjSet(&local_38,uVar1);
      uVar1 = __vbaLateIdCallLd(local_54,uVar1);
      uVar1 = __vbaCastObjVar(uVar1,uVar7);
      local_f0 = (int *)__vbaObjSet(&local_3c,uVar1);
      iVar3 = (**(code **)(*local_f0 + 0x1c))(local_f0,&local_ec);
      if (iVar3 < 0) {
        (*pcVar5)(iVar3,local_f0,&DAT_00417d34,0x1c);
      }
      local_f8 = (int *)-(uint)(local_ec == 0);
      __vbaFreeObjList(2,&local_38,&local_3c);
      __vbaFreeVar(piVar6);
      if ((short)local_f8 != 0) {
        if (DAT_00480244 == (int *)0x0) {
          __vbaNew2(&DAT_00413b34,&DAT_00480244);
        }
        local_f0 = DAT_00480244;
        iVar3 = *DAT_00480244;
        uVar1 = __vbaObjSetAddref(&local_38,piVar4);
        iVar3 = (**(code **)(iVar3 + 0x10))(local_f0,uVar1);
        if (iVar3 < 0) {
          (*pcVar5)(iVar3,local_f0,&DAT_00413b24,0x10);
        }
        __vbaFreeObj();
      }
      goto LAB_0045d791;
    }
  }
  else {
    iVar3 = (**(code **)(*local_20 + 0x58))(local_20,&local_38);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_20,&LAB_004133e8,0x58);
    }
    piVar6 = local_38;
    local_38 = (int *)0x0;
    __vbaObjSet(&local_3c,piVar6);
    (**(code **)(*piVar4 + 0x700))(piVar4,&local_3c,local_e8);
    local_f4 = (int *)CONCAT22(local_f4._2_2_,(short)local_e8[0]);
    __vbaFreeObj();
    if ((short)local_f4 == 0) goto LAB_0045d01f;
  }
  local_7c = 0x80020004;
  local_6c = 0x80020004;
  local_84[0] = 10;
  local_74[0] = 10;
  local_bc = L"CTP Editor";
  local_c4 = 8;
  __vbaVarDup();
  local_ac = L"Project creation cannot proceed without this file, aborting";
  local_b4 = 8;
  __vbaVarDup();
  rtcMsgBox(local_54,0x30,local_64,local_74,local_84);
  __vbaFreeVarList(4,local_54,local_64,local_74,local_84);
  (**(code **)(*piVar4 + 0x6fc))(piVar4);
LAB_0045d791:
  local_8 = 0;
  __vbaFreeObjList(2,&local_110,&local_114,&LAB_0045d81f);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x45d840 (FUN_0045d840) [estimated] strings: CTP Editor; Really abort project creation? ---- */
void __cdecl FUN_0045d840(uint param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_a8;
  undefined4 local_a4 [9];
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
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
  local_10 = &stack0xffffff38;
  local_c = &DAT_004028d8;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  uVar7 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70 = 0;
  local_80 = 0;
  local_a4[0] = 0;
  local_a8 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar7);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,&local_a8);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x1c);
  }
  bVar5 = local_a8 != 0;
  __vbaFreeObjList(2,&local_1c,&local_20);
  __vbaFreeVar(piVar6);
  if (bVar5) {
    iVar3 = (**(code **)(*(int *)piVar4[0xf] + 0x1c))((int *)piVar4[0xf],local_a4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4[0xf],&DAT_00415640,0x1c);
    }
    if ((short)local_a4[0] == 0) {
      local_58 = 0x80020004;
      local_48 = 0x80020004;
      local_60[0] = 10;
      local_50[0] = 10;
      local_78 = L"CTP Editor";
      local_80 = 8;
      __vbaVarDup();
      local_68 = L"Really abort project creation?";
      local_70 = 8;
      __vbaVarDup();
      iVar3 = rtcMsgBox(local_30,0x24,local_40,local_50,local_60);
      __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
      if (iVar3 == 7) {
        *param_2 = 0xffff;
      }
      else {
        iVar3 = (**(code **)(*(int *)piVar4[0xf] + 0x20))((int *)piVar4[0xf],0xffffffff);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar4[0xf],&DAT_00415640,0x20);
        }
      }
    }
  }
  return;
}

/* ---- 0x45da80 (FUN_0045da80) [estimated] strings:  ---- */
void __cdecl FUN_0045da80(uint param_1)

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
  local_c = &DAT_004028e8;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaCastObj(0,&LAB_00414228);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0xd,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_004146ac);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0xe,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_00415640);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0xf,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x45db80 (FUN_0045db80) [estimated] strings:  ---- */
void __cdecl FUN_0045db80(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_004028f8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  return;
}

/* ---- 0x45dc00 (FUN_0045dc00) [estimated] strings:  ---- */
undefined4 FUN_0045dc00(int *param_1)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402908;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x45dc60 (FUN_0045dc60) [estimated] strings:  ---- */
void __cdecl FUN_0045dc60(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402910;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  return;
}
