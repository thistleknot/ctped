/* Object #8 FieldInstances -- ESTIMATED function range; public methods per VB header: Add, SneakyAdd, Item, ItemNoError, ItemByField, Count */
#include "ghidra_types.h"

/* ---- 0x42fef0 (FUN_0042fef0) [estimated] strings:  ---- */
void __cdecl FUN_0042fef0(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 local_74 [2];
  undefined4 *local_6c;
  undefined4 local_64 [2];
  undefined4 *local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34 [2];
  undefined4 local_2c;
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
  local_10 = &stack0xffffff54;
  local_c = &DAT_00401850;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  *param_4 = 0;
  uVar1 = __vbaNew(&DAT_00406f2c);
  __vbaObjSet(&local_20,uVar1);
  iVar2 = (**(code **)(*local_20 + 0x20))(local_20,*param_3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x20);
  }
  iVar2 = *local_20;
  uVar1 = __vbaObjSetAddref(&local_24,*param_2);
  iVar2 = (**(code **)(iVar2 + 0x24))(local_20,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x24);
  }
  __vbaFreeObj();
  iVar2 = __vbaLenBstr(*param_3);
  if (iVar2 == 0) {
    local_4c = 0x80020004;
    local_54[0] = 10;
    local_44[0] = 10;
    local_34[0] = 10;
    local_3c = 0x80020004;
    local_2c = 0x80020004;
    __vbaObjSetAddref(&local_24,local_20);
    local_5c = &local_24;
    local_64[0] = 0x4009;
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_64,local_34,local_44,local_54);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
    }
    pcVar4 = __vbaCastObj_exref;
    uVar1 = __vbaCastObj(local_24,&DAT_00414bb4);
    pcVar3 = __vbaObjSet_exref;
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_34,local_44,local_54);
  }
  else {
    local_3c = 0x80020004;
    local_2c = 0x80020004;
    local_44[0] = 10;
    local_34[0] = 10;
    local_6c = param_3;
    local_74[0] = 0x4008;
    __vbaObjSetAddref(&local_24,local_20);
    local_5c = &local_24;
    local_64[0] = 0x4009;
    iVar2 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_64,local_74,local_34,local_44);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1[0xd],&DAT_00413b04,0x20);
    }
    pcVar4 = __vbaCastObj_exref;
    uVar1 = __vbaCastObj(local_24,&DAT_00414bb4);
    pcVar3 = __vbaObjSet_exref;
    __vbaObjSet(&local_20,uVar1);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_34,local_44);
  }
  __vbaObjSetAddref(&local_1c,local_20);
  uVar1 = (*pcVar4)(0,&DAT_00414bb4);
  (*pcVar3)(&local_20,uVar1);
  __vbaFreeObj(&LAB_00430177);
  return;
}

/* ---- 0x4301a0 (FUN_004301a0) [estimated] strings:  ---- */
void __cdecl FUN_004301a0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68 [2];
  undefined4 *local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
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
  local_10 = &stack0xffffff48;
  local_c = &DAT_00401860;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  __vbaStrCopy(piVar3);
  *param_4 = 0;
  iVar1 = __vbaLenBstr();
  if (iVar1 == 0) {
    piVar3 = (int *)*param_2;
    iVar1 = (**(code **)(*piVar3 + 0x1c))(piVar3);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00414bb4);
    }
    local_24 = 0;
    __vbaStrMove();
  }
  piVar3 = (int *)*param_2;
  iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3,&DAT_00414bb4,0x20);
  }
  iVar1 = __vbaLenBstr(local_20);
  if (iVar1 == 0) {
    local_58[0] = 10;
    local_48[0] = 10;
    local_38[0] = 10;
    local_50 = 0x80020004;
    local_40 = 0x80020004;
    local_30 = 0x80020004;
    __vbaObjSetAddref(&local_28,*param_2);
    local_60 = &local_28;
    local_68[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_68,local_38,local_48,local_58);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_28,&DAT_00414bb4);
    __vbaObjSet(param_2,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(3,local_38,local_48,local_58);
  }
  else {
    local_40 = 0x80020004;
    local_48[0] = 10;
    local_38[0] = 10;
    local_30 = 0x80020004;
    local_70 = &local_20;
    local_78[0] = 0x4008;
    __vbaObjSetAddref(&local_28,*param_2);
    local_60 = &local_28;
    local_68[0] = 0x4009;
    iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                      ((int *)param_1[0xd],local_68,local_78,local_38,local_48);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
    }
    uVar2 = __vbaCastObj(local_28,&DAT_00414bb4);
    __vbaObjSet(param_2,uVar2);
    __vbaFreeObj();
    __vbaFreeVarList(2,local_38,local_48);
  }
  __vbaObjSetAddref(&local_1c,*param_2);
  __vbaFreeStr(&LAB_00430414);
  return;
}

/* ---- 0x430440 (FUN_00430440) [estimated] strings:  ---- */
void __cdecl FUN_00430440(int *param_1,undefined4 param_2,undefined4 *param_3)

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
  local_c = &DAT_00401870;
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
  uVar2 = __vbaCastObjVar(local_2c,&DAT_00414bb4);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeVar(piVar3);
  return;
}

/* ---- 0x430520 (FUN_00430520) [estimated] strings:  ---- */
void __cdecl FUN_00430520(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_30 [3];
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
  local_c = &DAT_00401880;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_3 = 0;
  local_24 = 0;
  local_30[0] = 0;
  iVar1 = __vbaForEachCollObj(&DAT_00414bb4,local_30,&local_20,param_1[0xd]);
  do {
    if (iVar1 == 0) {
LAB_004305f2:
      __vbaFreeObj(&LAB_00430623);
      __vbaFreeObj();
      return;
    }
    iVar1 = (**(code **)(*local_20 + 0x1c))(local_20,&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&DAT_00414bb4,0x1c);
    }
    iVar1 = __vbaStrCmp(*param_2,local_24);
    __vbaFreeStr();
    if (iVar1 == 0) {
      __vbaObjSetAddref(&local_1c,local_20);
      goto LAB_004305f2;
    }
    iVar1 = __vbaNextEachCollObj(&DAT_00414bb4,local_30,&local_20);
  } while( true );
}

/* ---- 0x430650 (FUN_00430650) [estimated] strings:  ---- */
void __cdecl FUN_00430650(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 local_30 [3];
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
  local_c = &DAT_00401890;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_3 = 0;
  local_24 = 0;
  local_30[0] = 0;
  iVar2 = __vbaForEachCollObj(&DAT_00414bb4,local_30,&local_20,param_1[0xd]);
  do {
    if (iVar2 == 0) {
LAB_0043071b:
      __vbaFreeObj(&LAB_0043074c);
      __vbaFreeObj();
      return;
    }
    iVar2 = (**(code **)(*local_20 + 0x28))(local_20,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&DAT_00414bb4,0x28);
    }
    sVar1 = __vbaObjIs(local_24,*param_2);
    __vbaFreeObj();
    if (sVar1 != 0) {
      __vbaObjSetAddref(&local_1c,local_20);
      goto LAB_0043071b;
    }
    iVar2 = __vbaNextEachCollObj(&DAT_00414bb4,local_30,&local_20);
  } while( true );
}

/* ---- 0x430780 (FUN_00430780) [estimated] strings:  ---- */
undefined4 FUN_00430780(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_004018a0;
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

/* ---- 0x430810 (FUN_00430810) [estimated] strings:  ---- */
undefined4 FUN_00430810(int *param_1,undefined4 param_2)

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
  local_c = &DAT_004018a8;
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

/* ---- 0x430890 (FUN_00430890) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00430890(int *param_1)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  int ****ppppiVar7;
  int iVar8;
  int ***pppiVar9;
  uint uVar10;
  code *pcVar11;
  ushort uVar12;
  int *piVar13;
  int *piVar14;
  code *pcStack_158;
  int *piStack_154;
  uint uStack_150;
  int aiStack_138 [5];
  undefined4 auStack_124 [2];
  undefined4 uStack_11c;
  int iStack_118;
  int *piStack_114;
  int ****ppppiStack_110;
  int ***pppiStack_10c;
  int ****ppppiStack_108;
  int ****ppppiStack_104;
  int ****ppppiStack_100;
  int *piStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  int local_b8 [3];
  uint *local_ac;
  int **local_84 [2];
  uint *local_7c;
  undefined4 local_74;
  int **local_64 [2];
  undefined4 local_5c;
  int **local_54 [2];
  undefined4 local_4c;
  int ***local_44 [2];
  undefined4 local_3c;
  uint local_34;
  undefined4 local_30 [2];
  uint local_28;
  int ****local_24;
  uint local_20;
  uint local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff10;
  local_c = &DAT_004018b8;
  local_8 = 0;
  piStack_f4 = param_1;
  piStack_f8 = (int *)0x4308ca;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  piStack_fc = (int *)param_1[0xd];
  piStack_f8 = local_b8;
  local_1c = 0;
  local_20 = 0;
  local_24 = (int ****)0x0;
  local_28 = 0;
  local_30[0] = 0;
  local_34 = 0;
  local_44[0] = (int ***)0x0;
  local_54[0] = (int **)0x0;
  local_64[0] = (int **)0x0;
  local_74 = 0;
  local_84[0] = (int **)0x0;
  local_b8[1] = 0;
  local_b8[0] = 0;
  ppppiStack_100 = (int ****)0x430907;
  piVar6 = (int *)(**(code **)(*piStack_fc + 0x24))();
  pcVar11 = __vbaHresultCheckObj_exref;
  if ((int)piVar6 < 0) {
    ppppiStack_108 = (int ****)param_1[0xd];
    ppppiStack_100 = (int ****)0x24;
    ppppiStack_104 = (int ****)&DAT_00413b04;
    ppppiStack_110 = (int ****)0x430921;
    pppiStack_10c = (int ***)piVar6;
    __vbaHresultCheckObj();
  }
  if (1 < local_b8[0]) {
    ppppiStack_104 = (int ****)param_1[0xd];
    ppppiStack_100 = (int ****)local_b8;
    ppppiStack_108 = (int ****)0x430946;
    ppppiVar7 = (int ****)(**(code **)((int)*ppppiStack_104 + 0x24))();
    if ((int)ppppiVar7 < 0) {
      pppiStack_10c = (int ***)param_1[0xd];
      ppppiStack_104 = (int ****)0x24;
      ppppiStack_108 = (int ****)&DAT_00413b04;
      piStack_114 = (int *)0x43095a;
      ppppiStack_110 = ppppiVar7;
      __vbaHresultCheckObj();
    }
    ppppiStack_104 = (int ****)0x430966;
    sVar3 = __vbaI2I4();
    local_28 = 1;
    uVar2 = local_28;
    while (local_28 = uVar2, (short)local_28 <= sVar3) {
      local_7c = &local_28;
      ppppiStack_100 = local_44;
      ppppiStack_108 = (int ****)param_1[0xd];
      ppppiStack_104 = (int ****)local_84;
      local_84[0] = (int **)0x4002;
      pppiStack_10c = (int ***)0x43099f;
      iVar8 = (**(code **)((int)*ppppiStack_108 + 0x1c))();
      if (iVar8 < 0) {
        piStack_114 = (int *)param_1[0xd];
        pppiStack_10c = (int ***)0x1c;
        ppppiStack_110 = (int ****)&DAT_00413b04;
        uStack_11c = 0x4309b3;
        iStack_118 = iVar8;
        (*pcVar11)();
      }
      ppppiStack_110 = local_44;
      pppiStack_10c = (int ***)&DAT_00414bb4;
      piStack_114 = (int *)0x4309c2;
      pppiStack_10c = (int ***)__vbaCastObjVar();
      ppppiStack_110 = (int ****)&local_24;
      piStack_114 = (int *)0x4309cd;
      __vbaObjSet();
      pppiStack_10c = (int ***)0x4309d6;
      __vbaFreeVar();
      pppiStack_10c = (int ***)param_1[0xd];
      local_7c = &local_28;
      ppppiStack_108 = (int ****)local_84;
      local_84[0] = (int **)0x4002;
      ppppiStack_110 = (int ****)0x4309f0;
      piVar6 = (int *)(**(code **)((int)*pppiStack_10c + 0x28))();
      uVar12 = 0;
      if ((int)piVar6 < 0) {
        ppppiStack_108 = (int ****)param_1[0xd];
        ppppiStack_100 = (int ****)0x28;
        ppppiStack_104 = (int ****)&DAT_00413b04;
        ppppiStack_110 = (int ****)0x430a04;
        pppiStack_10c = (int ***)piVar6;
        (*pcVar11)();
      }
      local_1c = 0;
      uVar2 = local_28;
      while( true ) {
        uVar10 = uVar2;
        sVar5 = (short)uVar10;
        sVar4 = (short)local_1c;
        if (SBORROW2(sVar5,sVar4)) goto LAB_00430d1f;
        if ((short)(sVar5 - sVar4) < 2) break;
        if (SCARRY2(sVar5,sVar4)) goto LAB_00430d1f;
        if (DAT_0047f000 != 0) {
          ppppiStack_100 = (int ****)0x40000000;
          ppppiStack_104 = (int ****)0x0;
          ppppiStack_108 = (int ****)0x430a6b;
          adj_fdiv_m64();
        }
        if ((uVar12 & 0xd) != 0) {
          __vbaFPException();
          return;
        }
        ppppiStack_100 = (int ****)0x430a7b;
        local_20 = __vbaFpI2();
        local_7c = &local_20;
        ppppiStack_108 = (int ****)param_1[0xd];
        ppppiStack_100 = local_44;
        local_84[0] = (int **)0x4002;
        ppppiStack_104 = (int ****)local_84;
        pppiStack_10c = (int ***)0x430a9c;
        iVar8 = (**(code **)((int)*ppppiStack_108 + 0x1c))();
        if (iVar8 < 0) {
          piStack_114 = (int *)param_1[0xd];
          pppiStack_10c = (int ***)0x1c;
          ppppiStack_110 = (int ****)&DAT_00413b04;
          uStack_11c = 0x430ab0;
          iStack_118 = iVar8;
          (*pcVar11)();
        }
        pppiStack_10c = (int ***)local_30;
        ppppiStack_110 = local_24;
        piStack_114 = (int *)0x430abd;
        pppiStack_10c = (int ***)(*(code *)(*local_24)[0xb])();
        uVar12 = 0;
        if ((int)pppiStack_10c < 0) {
          ppppiStack_100 = (int ****)0x2c;
          ppppiStack_104 = (int ****)&DAT_00414bb4;
          ppppiStack_108 = local_24;
          ppppiStack_110 = (int ****)0x430ad1;
          (*pcVar11)();
        }
        ppppiStack_100 = (int ****)0x0;
        local_4c = local_30[0];
        ppppiStack_108 = local_44;
        ppppiStack_104 = (int ****)0x4150b8;
        pppiStack_10c = local_64;
        local_30[0] = 0;
        local_54[0] = (int **)0x8008;
        ppppiStack_110 = (int ****)0x430afa;
        ppppiStack_100 = (int ****)__vbaVarLateMemCallLd();
        ppppiStack_104 = (int ****)local_54;
        ppppiStack_108 = (int ****)0x430b08;
        sVar5 = __vbaVarTstGt();
        ppppiStack_100 = (int ****)local_54;
        ppppiStack_104 = (int ****)local_64;
        ppppiStack_108 = local_44;
        pppiStack_10c = (int ***)0x3;
        ppppiStack_110 = (int ****)0x430b1e;
        __vbaFreeVarList();
        uVar2 = local_20;
        pcVar11 = __vbaHresultCheckObj_exref;
        if (sVar5 != 0) {
          local_1c = local_20;
          uVar2 = uVar10;
        }
      }
      if (sVar4 == 0) {
        local_64[0] = (int **)0xa;
        local_44[0] = (int ***)0xa;
        ppppiStack_104 = (int ****)&local_34;
        ppppiStack_100 = local_24;
        local_5c = 0x80020004;
        local_4c = 1;
        local_54[0] = (int **)0x2;
        local_3c = 0x80020004;
        ppppiStack_108 = (int ****)0x430b83;
        __vbaObjSetAddref();
        local_7c = &local_34;
        ppppiStack_110 = (int ****)param_1[0xd];
        ppppiStack_100 = (int ****)local_64;
        ppppiStack_104 = (int ****)local_54;
        ppppiStack_108 = local_44;
        pppiStack_10c = local_84;
        local_84[0] = (int **)0x4009;
        piStack_114 = (int *)0x430ba9;
        pppiVar9 = (int ***)(*(code *)(*ppppiStack_110)[8])();
        if ((int)pppiVar9 < 0) {
          ppppiStack_108 = (int ****)param_1[0xd];
          ppppiStack_100 = (int ****)0x20;
          ppppiStack_104 = (int ****)&DAT_00413b04;
          ppppiStack_110 = (int ****)0x430bbd;
          pppiStack_10c = pppiVar9;
          (*pcVar11)();
        }
        ppppiStack_100 = (int ****)&DAT_00414bb4;
        ppppiStack_104 = (int ****)local_34;
        ppppiStack_108 = (int ****)0x430bcc;
        ppppiStack_100 = (int ****)__vbaCastObj();
        ppppiStack_104 = (int ****)&local_24;
        ppppiStack_108 = (int ****)0x430bd7;
        __vbaObjSet();
        ppppiStack_100 = (int ****)0x430be0;
        __vbaFreeObj();
        ppppiStack_100 = (int ****)local_64;
        ppppiStack_104 = (int ****)local_54;
        ppppiStack_108 = local_44;
        pppiStack_10c = (int ***)0x3;
        ppppiStack_110 = (int ****)0x430bf4;
        __vbaFreeVarList();
      }
      else {
        local_54[0] = (int **)0xa;
        local_44[0] = (int ***)0xa;
        local_4c = 0x80020004;
        local_3c = 0x80020004;
        ppppiStack_104 = (int ****)&local_34;
        local_ac = &local_1c;
        ppppiStack_100 = local_24;
        local_b8[1] = 0x4002;
        ppppiStack_108 = (int ****)0x430c33;
        __vbaObjSetAddref();
        local_7c = &local_34;
        ppppiStack_110 = (int ****)param_1[0xd];
        ppppiStack_100 = (int ****)(local_b8 + 1);
        ppppiStack_104 = (int ****)local_54;
        ppppiStack_108 = local_44;
        pppiStack_10c = local_84;
        local_84[0] = (int **)0x4009;
        piStack_114 = (int *)0x430c5c;
        pppiVar9 = (int ***)(*(code *)(*ppppiStack_110)[8])();
        if ((int)pppiVar9 < 0) {
          ppppiStack_108 = (int ****)param_1[0xd];
          ppppiStack_100 = (int ****)0x20;
          ppppiStack_104 = (int ****)&DAT_00413b04;
          ppppiStack_110 = (int ****)0x430c70;
          pppiStack_10c = pppiVar9;
          (*pcVar11)();
        }
        ppppiStack_100 = (int ****)&DAT_00414bb4;
        ppppiStack_104 = (int ****)local_34;
        ppppiStack_108 = (int ****)0x430c7f;
        ppppiStack_100 = (int ****)__vbaCastObj();
        ppppiStack_104 = (int ****)&local_24;
        ppppiStack_108 = (int ****)0x430c8a;
        __vbaObjSet();
        ppppiStack_100 = (int ****)0x430c93;
        __vbaFreeObj();
        ppppiStack_100 = (int ****)local_54;
        ppppiStack_104 = local_44;
        ppppiStack_108 = (int ****)0x2;
        pppiStack_10c = (int ***)0x430ca3;
        __vbaFreeVarList();
      }
      uVar2 = (uint)(ushort)((short)local_28 + 1);
      if (SCARRY2((short)local_28,1)) {
LAB_00430d1f:
        ppppiStack_100 = (int ****)0x430d25;
        __vbaErrorOverflow();
        piVar6 = piStack_f4;
        pppiStack_10c = (int ***)&LAB_004032d6;
        ppppiStack_110 = ExceptionList;
        piStack_154 = param_1;
        ppppiStack_108 = (int ****)&pcStack_158;
        ppppiStack_104 = (int ****)&DAT_004018c8;
        ppppiStack_100 = (int ****)0x0;
        ExceptionList = &ppppiStack_110;
        pcStack_158 = pcVar11;
        uStack_150 = uVar10;
        piStack_fc = (int *)&stack0xfffffffc;
        (**(code **)(*piStack_f4 + 4))(piStack_f4);
        piStack_114 = (int *)0x0;
        auStack_124[0] = 0;
        aiStack_138[0] = 0;
        while( true ) {
          piVar14 = aiStack_138;
          iVar8 = (**(code **)(*piVar6 + 0x30))(piVar6,piVar14);
          if (iVar8 < 0) {
            __vbaHresultCheckObj(iVar8,piVar6,&DAT_00414ba4,0x30);
          }
          if (aiStack_138[0] == 0) break;
          uStack_11c = 1;
          auStack_124[0] = 2;
          iVar8 = (**(code **)(*piVar6 + 0x24))(piVar6,auStack_124,&piStack_114);
          if (iVar8 < 0) {
            __vbaHresultCheckObj(iVar8,piVar6,&DAT_00414ba4,0x24);
          }
          piVar1 = piStack_114;
          piVar13 = piStack_114;
          iVar8 = (**(code **)(*piStack_114 + 0x48))(piStack_114);
          if (iVar8 < 0) {
            __vbaHresultCheckObj(iVar8,piVar1,&DAT_00414bb4,0x48);
          }
          __vbaFreeObj();
          __vbaFreeVar(piVar13);
          uStack_11c = 1;
          auStack_124[0] = 2;
          iVar8 = (**(code **)(*piVar6 + 0x34))(piVar6,auStack_124);
          if (iVar8 < 0) {
            __vbaHresultCheckObj(iVar8,piVar6,&DAT_00414ba4,0x34);
          }
          __vbaFreeVar(piVar14);
        }
        return;
      }
    }
  }
  ppppiStack_100 = (int ****)&LAB_00430cfb;
  ppppiStack_104 = (int ****)0x430cfa;
  __vbaFreeObj();
  return;
}

/* ---- 0x430d30 (FUN_00430d30) [estimated] strings:  ---- */
void __cdecl FUN_00430d30(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_40 [5];
  undefined4 local_2c [2];
  undefined4 local_24;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa0;
  local_c = &DAT_004018c8;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_2c[0] = 0;
  local_40[0] = 0;
  while( true ) {
    piVar4 = local_40;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,piVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414ba4,0x30);
    }
    if (local_40[0] == 0) break;
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,local_2c,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414ba4,0x24);
    }
    piVar1 = local_1c;
    piVar3 = local_1c;
    iVar2 = (**(code **)(*local_1c + 0x48))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414bb4,0x48);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x34))(param_1,local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414ba4,0x34);
    }
    __vbaFreeVar(piVar4);
  }
  return;
}

/* ---- 0x430e60 (FUN_00430e60) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00430e60(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *unaff_EBX;
  int **unaff_ESI;
  code *apcStack_f0 [2];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int *piStack_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int *piStack_cc;
  int **ppiStack_c8;
  int **ppiStack_c4;
  int **ppiStack_c0;
  undefined1 *puStack_bc;
  code *pcStack_b8;
  int *piStack_b4;
  undefined4 *puStack_b0;
  int aiStack_94 [3];
  int **ppiStack_88;
  int iStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  int **ppiStack_64;
  int *piStack_60;
  int local_38 [3];
  int *local_2c;
  int local_24;
  int *local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa4;
  local_c = &DAT_004018d8;
  local_8 = 0;
  piStack_60 = param_1;
  ppiStack_64 = (int **)0x430e97;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  pcVar1 = __vbaHresultCheckObj_exref;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_38[1] = 0;
  local_38[0] = 0;
  local_1c = 1;
  iVar2 = local_1c;
  while( true ) {
    local_1c = iVar2;
    ppiStack_64 = (int **)local_38;
    ppiStack_68 = (int **)param_1;
    ppiStack_6c = (int **)0x430ebd;
    piStack_78 = (int *)(**(code **)(*param_1 + 0x30))();
    if ((int)piStack_78 < 0) {
      ppiStack_6c = (int **)0x30;
      piStack_70 = (int *)&DAT_00414ba4;
      piStack_74 = param_1;
      piStack_7c = (int *)0x430ecc;
      __vbaHresultCheckObj();
    }
    if (local_38[0] < local_1c) break;
    local_2c = &local_1c;
    ppiStack_6c = &local_20;
    piStack_70 = local_38 + 1;
    piStack_74 = param_1;
    local_38[1] = 0x4003;
    piStack_78 = (int *)0x430ef5;
    iVar2 = (**(code **)(*param_1 + 0x24))();
    if (iVar2 < 0) {
      piStack_78 = (int *)0x24;
      piStack_7c = (int *)&DAT_00414ba4;
      piStack_80 = param_1;
      ppiStack_88 = (int **)0x430f04;
      iStack_84 = iVar2;
      __vbaHresultCheckObj();
    }
    piVar5 = local_20;
    piStack_78 = &local_24;
    piStack_7c = local_20;
    piStack_80 = (int *)0x430f13;
    piVar3 = (int *)(**(code **)(*local_20 + 0x28))();
    if ((int)piVar3 < 0) {
      ppiStack_64 = (int **)0x28;
      ppiStack_68 = (int **)&DAT_00414bb4;
      ppiStack_6c = (int **)piVar5;
      piStack_74 = (int *)0x430f24;
      piStack_70 = piVar3;
      __vbaHresultCheckObj();
    }
    ppiStack_64 = (int **)*param_2;
    ppiStack_68 = (int **)local_24;
    ppiStack_6c = (int **)0x430f34;
    puVar4 = (undefined4 *)__vbaObjIs();
    ppiStack_64 = (int **)&local_24;
    ppiStack_68 = &local_20;
    ppiStack_6c = (int **)0x2;
    piStack_70 = (int *)0x430f46;
    __vbaFreeObjList();
    if ((short)puVar4 == 0) {
      iVar2 = local_1c + 1;
      if (SCARRY4(local_1c,1)) {
        ppiStack_64 = (int **)0x43101d;
        __vbaErrorOverflow();
        piStack_70 = (int *)&LAB_004032d6;
        piStack_74 = ExceptionList;
        piStack_b4 = param_1;
        ppiStack_6c = (int **)&pcStack_b8;
        pcStack_b8 = pcVar1;
        ppiStack_68 = (int **)&DAT_004018e8;
        ppiStack_64 = (int **)0x0;
        ppiStack_c0 = (int **)0x431057;
        ExceptionList = &piStack_74;
        puStack_b0 = puVar4;
        piStack_60 = (int *)&stack0xfffffffc;
        (*(code *)(*unaff_ESI)[1])();
        pcVar1 = __vbaHresultCheckObj_exref;
        piStack_7c = (int *)0x0;
        piStack_80 = (int *)0x0;
        aiStack_94[1] = 0;
        aiStack_94[0] = 0;
        piStack_78 = (int *)0x1;
        piVar5 = piStack_78;
        while( true ) {
          piStack_78 = piVar5;
          ppiStack_c0 = (int **)aiStack_94;
          ppiStack_c8 = (int **)0x43107d;
          ppiStack_d4 = (int **)(*(code *)(*unaff_ESI)[0xc])();
          if ((int)ppiStack_d4 < 0) {
            ppiStack_c8 = (int **)0x30;
            piStack_cc = (int *)&DAT_00414ba4;
            piStack_d8 = (int *)0x43108c;
            __vbaHresultCheckObj();
          }
          if (aiStack_94[0] < (int)piStack_78) break;
          ppiStack_88 = &piStack_78;
          ppiStack_c8 = &piStack_7c;
          piStack_cc = aiStack_94 + 1;
          aiStack_94[1] = 0x4003;
          ppiStack_d4 = (int **)0x4310b5;
          ppiStack_d0 = unaff_ESI;
          iVar2 = (*(code *)(*unaff_ESI)[9])();
          if (iVar2 < 0) {
            ppiStack_d4 = (int **)0x24;
            piStack_d8 = (int *)&DAT_00414ba4;
            uStack_e4 = 0x4310c4;
            iStack_e0 = iVar2;
            __vbaHresultCheckObj();
          }
          piVar5 = piStack_7c;
          ppiStack_d4 = &piStack_80;
          piStack_d8 = piStack_7c;
          iStack_dc = 0x4310d3;
          piVar3 = (int *)(**(code **)(*piStack_7c + 0x28))();
          if ((int)piVar3 < 0) {
            ppiStack_c0 = (int **)0x28;
            ppiStack_c4 = (int **)&DAT_00414bb4;
            ppiStack_c8 = (int **)piVar5;
            ppiStack_d0 = (int **)0x4310e4;
            piStack_cc = piVar3;
            __vbaHresultCheckObj();
          }
          ppiStack_c0 = (int **)*unaff_EBX;
          ppiStack_c4 = (int **)piStack_80;
          ppiStack_c8 = (int **)0x4310f4;
          uVar6 = __vbaObjIs();
          ppiStack_c0 = &piStack_80;
          ppiStack_c4 = &piStack_7c;
          ppiStack_c8 = (int **)0x2;
          piStack_cc = (int *)0x431106;
          __vbaFreeObjList();
          if ((short)uVar6 == 0) {
            ppiStack_88 = &piStack_78;
            ppiStack_c0 = &piStack_7c;
            ppiStack_c4 = (int **)(aiStack_94 + 1);
            aiStack_94[1] = 0x4003;
            piStack_cc = (int *)0x43113d;
            piVar5 = (int *)(*(code *)(*unaff_ESI)[9])();
            if ((int)piVar5 < 0) {
              piStack_cc = (int *)0x24;
              ppiStack_d0 = (int **)&DAT_00414ba4;
              iStack_dc = 0x43114c;
              piStack_d8 = piVar5;
              ppiStack_d4 = unaff_ESI;
              __vbaHresultCheckObj();
            }
            piVar5 = piStack_7c;
            piStack_cc = piStack_7c;
            ppiStack_d0 = (int **)0x431157;
            iVar2 = (**(code **)(*piStack_7c + 0x48))();
            if (iVar2 < 0) {
              ppiStack_d0 = (int **)0x48;
              ppiStack_d4 = (int **)&DAT_00414bb4;
              piStack_d8 = piVar5;
              iStack_e0 = 0x431168;
              iStack_dc = iVar2;
              __vbaHresultCheckObj();
            }
            ppiStack_d0 = (int **)0x431171;
            __vbaFreeObj();
            ppiStack_d0 = (int **)(aiStack_94 + 1);
            ppiStack_88 = &piStack_78;
            aiStack_94[1] = 0x4003;
            piStack_d8 = (int *)0x431188;
            ppiStack_d4 = unaff_ESI;
            piVar3 = (int *)(*(code *)(*unaff_ESI)[0xd])();
            piVar5 = piStack_78;
            if ((int)piVar3 < 0) {
              ppiStack_c0 = (int **)0x34;
              ppiStack_c4 = (int **)&DAT_00414ba4;
              ppiStack_d0 = (int **)0x43119b;
              piStack_cc = piVar3;
              __vbaHresultCheckObj();
              piVar5 = piStack_78;
            }
          }
          else {
            piVar5 = (int *)((int)piStack_78 + 1);
            if (SCARRY4((int)piStack_78,1)) {
              ppiStack_c0 = (int **)0x4311e1;
              __vbaErrorOverflow();
              piVar3 = piStack_b4;
              piStack_cc = (int *)&LAB_004032d6;
              ppiStack_d0 = ExceptionList;
              ppiStack_c8 = (int **)apcStack_f0;
              apcStack_f0[0] = pcVar1;
              ppiStack_c4 = (int **)&DAT_004018f8;
              ppiStack_c0 = (int **)0x0;
              ExceptionList = &ppiStack_d0;
              uStack_e8 = uVar6;
              puStack_bc = (undefined1 *)&piStack_60;
              (**(code **)(*piStack_b4 + 4))(piStack_b4);
              ppiStack_d4 = (int **)0x0;
              piStack_d8 = (int *)0x0;
              *puStack_b0 = 0;
              piVar5 = (int *)piVar3[0xd];
              iVar2 = (**(code **)(*piVar5 + 0x2c))(piVar5,&piStack_d8);
              if (iVar2 < 0) {
                __vbaHresultCheckObj(iVar2,piVar3[0xd],&DAT_00413b04,0x2c);
              }
              uVar6 = __vbaCastObj(piStack_d8,&DAT_004133c8);
              __vbaObjSet(&ppiStack_d4,uVar6);
              __vbaFreeObj();
              return;
            }
          }
        }
        return;
      }
    }
    else {
      local_2c = &local_1c;
      ppiStack_64 = &local_20;
      ppiStack_68 = (int **)(local_38 + 1);
      ppiStack_6c = (int **)param_1;
      local_38[1] = 0x4003;
      piStack_70 = (int *)0x430f69;
      piVar5 = (int *)(**(code **)(*param_1 + 0x24))();
      if ((int)piVar5 < 0) {
        piStack_70 = (int *)0x24;
        piStack_74 = (int *)&DAT_00414ba4;
        piStack_78 = param_1;
        piStack_80 = (int *)0x430f78;
        piStack_7c = piVar5;
        __vbaHresultCheckObj();
      }
      piVar5 = local_20;
      piStack_70 = local_20;
      piStack_74 = (int *)0x430f83;
      piVar3 = (int *)(**(code **)(*local_20 + 0x48))();
      if ((int)piVar3 < 0) {
        piStack_74 = (int *)0x48;
        piStack_78 = (int *)&DAT_00414bb4;
        piStack_7c = piVar5;
        iStack_84 = 0x430f94;
        piStack_80 = piVar3;
        __vbaHresultCheckObj();
      }
      piStack_74 = (int *)0x430f9d;
      __vbaFreeObj();
      piStack_74 = local_38 + 1;
      local_2c = &local_1c;
      piStack_78 = param_1;
      local_38[1] = 0x4003;
      piStack_7c = (int *)0x430fb4;
      piVar5 = (int *)(**(code **)(*param_1 + 0x34))();
      iVar2 = local_1c;
      if ((int)piVar5 < 0) {
        ppiStack_64 = (int **)0x34;
        ppiStack_68 = (int **)&DAT_00414ba4;
        ppiStack_6c = (int **)param_1;
        piStack_74 = (int *)0x430fc7;
        piStack_70 = piVar5;
        __vbaHresultCheckObj();
        iVar2 = local_1c;
      }
    }
  }
  return;
}

/* ---- 0x431020 (FUN_00431020) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00431020(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  code *pcStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  int **ppiStack_64;
  int *piStack_60;
  int local_38 [3];
  int *local_2c;
  int local_24;
  int *local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa4;
  local_c = &DAT_004018e8;
  local_8 = 0;
  piStack_60 = param_1;
  ppiStack_64 = (int **)0x431057;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  pcVar1 = __vbaHresultCheckObj_exref;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_38[1] = 0;
  local_38[0] = 0;
  local_1c = 1;
  iVar2 = local_1c;
  while( true ) {
    local_1c = iVar2;
    ppiStack_64 = (int **)local_38;
    ppiStack_68 = (int **)param_1;
    ppiStack_6c = (int **)0x43107d;
    piStack_78 = (int *)(**(code **)(*param_1 + 0x30))();
    if ((int)piStack_78 < 0) {
      ppiStack_6c = (int **)0x30;
      piStack_70 = (int *)&DAT_00414ba4;
      piStack_74 = param_1;
      piStack_7c = (int *)0x43108c;
      __vbaHresultCheckObj();
    }
    if (local_38[0] < local_1c) break;
    local_2c = &local_1c;
    ppiStack_6c = &local_20;
    piStack_70 = local_38 + 1;
    piStack_74 = param_1;
    local_38[1] = 0x4003;
    piStack_78 = (int *)0x4310b5;
    iVar2 = (**(code **)(*param_1 + 0x24))();
    if (iVar2 < 0) {
      piStack_78 = (int *)0x24;
      piStack_7c = (int *)&DAT_00414ba4;
      piStack_80 = param_1;
      uStack_88 = 0x4310c4;
      iStack_84 = iVar2;
      __vbaHresultCheckObj();
    }
    piVar5 = local_20;
    piStack_78 = &local_24;
    piStack_7c = local_20;
    piStack_80 = (int *)0x4310d3;
    piVar3 = (int *)(**(code **)(*local_20 + 0x28))();
    if ((int)piVar3 < 0) {
      ppiStack_64 = (int **)0x28;
      ppiStack_68 = (int **)&DAT_00414bb4;
      ppiStack_6c = (int **)piVar5;
      piStack_74 = (int *)0x4310e4;
      piStack_70 = piVar3;
      __vbaHresultCheckObj();
    }
    ppiStack_64 = (int **)*param_2;
    ppiStack_68 = (int **)local_24;
    ppiStack_6c = (int **)0x4310f4;
    uVar4 = __vbaObjIs();
    ppiStack_64 = (int **)&local_24;
    ppiStack_68 = &local_20;
    ppiStack_6c = (int **)0x2;
    piStack_70 = (int *)0x431106;
    __vbaFreeObjList();
    if ((short)uVar4 == 0) {
      local_2c = &local_1c;
      ppiStack_64 = &local_20;
      ppiStack_68 = (int **)(local_38 + 1);
      ppiStack_6c = (int **)param_1;
      local_38[1] = 0x4003;
      piStack_70 = (int *)0x43113d;
      piVar5 = (int *)(**(code **)(*param_1 + 0x24))();
      if ((int)piVar5 < 0) {
        piStack_70 = (int *)0x24;
        piStack_74 = (int *)&DAT_00414ba4;
        piStack_78 = param_1;
        piStack_80 = (int *)0x43114c;
        piStack_7c = piVar5;
        __vbaHresultCheckObj();
      }
      piVar5 = local_20;
      piStack_70 = local_20;
      piStack_74 = (int *)0x431157;
      iVar2 = (**(code **)(*local_20 + 0x48))();
      if (iVar2 < 0) {
        piStack_74 = (int *)0x48;
        piStack_78 = (int *)&DAT_00414bb4;
        piStack_7c = piVar5;
        iStack_84 = 0x431168;
        piStack_80 = (int *)iVar2;
        __vbaHresultCheckObj();
      }
      piStack_74 = (int *)0x431171;
      __vbaFreeObj();
      piStack_74 = local_38 + 1;
      local_2c = &local_1c;
      piStack_78 = param_1;
      local_38[1] = 0x4003;
      piStack_7c = (int *)0x431188;
      piVar5 = (int *)(**(code **)(*param_1 + 0x34))();
      iVar2 = local_1c;
      if ((int)piVar5 < 0) {
        ppiStack_64 = (int **)0x34;
        ppiStack_68 = (int **)&DAT_00414ba4;
        ppiStack_6c = (int **)param_1;
        piStack_74 = (int *)0x43119b;
        piStack_70 = piVar5;
        __vbaHresultCheckObj();
        iVar2 = local_1c;
      }
    }
    else {
      iVar2 = local_1c + 1;
      if (SCARRY4(local_1c,1)) {
        ppiStack_64 = (int **)0x4311e1;
        __vbaErrorOverflow();
        piStack_70 = (int *)&LAB_004032d6;
        piStack_74 = ExceptionList;
        piStack_90 = param_1;
        ppiStack_6c = (int **)&pcStack_94;
        pcStack_94 = pcVar1;
        ppiStack_68 = (int **)&DAT_004018f8;
        ppiStack_64 = (int **)0x0;
        ExceptionList = &piStack_74;
        uStack_8c = uVar4;
        piStack_60 = (int *)&stack0xfffffffc;
        (**(code **)(*unaff_ESI + 4))(unaff_ESI);
        piStack_78 = (int *)0x0;
        piStack_7c = (int *)0x0;
        *unaff_EBX = 0;
        iVar2 = (**(code **)(*(int *)unaff_ESI[0xd] + 0x2c))((int *)unaff_ESI[0xd],&piStack_7c);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,unaff_ESI[0xd],&DAT_00413b04,0x2c);
        }
        uVar4 = __vbaCastObj(piStack_7c,&DAT_004133c8);
        __vbaObjSet(&piStack_78,uVar4);
        __vbaFreeObj();
        return;
      }
    }
  }
  return;
}

/* ---- 0x4311f0 (FUN_004311f0) [estimated] strings:  ---- */
void __cdecl FUN_004311f0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_004018f8;
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

/* ---- 0x4312d0 (FUN_004312d0) [estimated] strings:  ---- */
void __cdecl FUN_004312d0(uint param_1)

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
  local_c = &DAT_00401908;
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

/* ---- 0x431380 (FUN_00431380) [estimated] strings:  ---- */
void __cdecl FUN_00431380(uint param_1)

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
  local_c = &DAT_00401918;
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
