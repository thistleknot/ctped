/* Object #27 Comment -- ESTIMATED function range; public methods per VB header: Entry, Entry, FieldInstance, FieldInstance, Destroy */
#include "ghidra_types.h"

/* ---- 0x472960 (FUN_00472960) [estimated] strings:  ---- */
undefined4 FUN_00472960(int *param_1,undefined4 *param_2)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402d28;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaObjSetAddref(param_1 + 0x11,*param_2);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4729d0 (FUN_004729d0) [estimated] strings:  ---- */
void __cdecl FUN_004729d0(int *param_1)

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
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402d30;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  uVar1 = __vbaCastObj(0,&LAB_0041470c);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(param_1 + 0x10,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_00414bb4);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(param_1 + 0x11,uVar1);
  __vbaFreeObj();
  return;
}

/* ---- 0x472a90 (FUN_00472a90) [estimated] strings:  ---- */
void __cdecl
FUN_00472a90(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
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
  local_c = &DAT_00402d40;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_7 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  iVar1 = __vbaStrCmp(&DAT_00412f74,*param_2);
  if (iVar1 != 0) {
    uVar2 = __vbaNew(&DAT_00406c08);
    __vbaObjSet(&local_20,uVar2);
    iVar1 = (**(code **)(*local_20 + 0x20))(local_20,*param_6);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&DAT_00414c24,0x20);
    }
    iVar1 = (**(code **)(*local_20 + 0x30))(local_20,*param_3);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&DAT_00414c24,0x30);
    }
    iVar1 = (**(code **)(*local_20 + 0x28))(local_20,*param_2);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&DAT_00414c24,0x28);
    }
    __vbaObjSetAddref(&local_24,*param_4);
    iVar1 = (**(code **)(*local_20 + 0x38))(local_20,&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&DAT_00414c24,0x38);
    }
    __vbaFreeObj();
    __vbaObjSetAddref(&local_24,*param_5);
    iVar1 = (**(code **)(*local_20 + 0x40))(local_20,&local_24);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,local_20,&DAT_00414c24,0x40);
    }
    __vbaFreeObj();
    iVar1 = __vbaLenBstr(*param_6);
    if (iVar1 == 0) {
      local_54[0] = 10;
      local_44[0] = 10;
      local_34[0] = 10;
      local_4c = 0x80020004;
      local_3c = 0x80020004;
      local_2c = 0x80020004;
      __vbaObjSetAddref(&local_24,local_20);
      local_5c = &local_24;
      local_64[0] = 0x4009;
      iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                        ((int *)param_1[0xd],local_64,local_34,local_44,local_54);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
      }
      pcVar3 = __vbaCastObj_exref;
      uVar2 = __vbaCastObj(local_24,&DAT_00414c24);
      __vbaObjSet(&local_20,uVar2);
      __vbaFreeObj();
      __vbaFreeVarList(3,local_34,local_44,local_54);
    }
    else {
      local_44[0] = 10;
      local_34[0] = 10;
      local_3c = 0x80020004;
      local_2c = 0x80020004;
      local_6c = param_6;
      local_74[0] = 0x4008;
      __vbaObjSetAddref(&local_24,local_20);
      local_5c = &local_24;
      local_64[0] = 0x4009;
      iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x20))
                        ((int *)param_1[0xd],local_64,local_74,local_34,local_44);
      if (iVar1 < 0) {
        __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_00413b04,0x20);
      }
      pcVar3 = __vbaCastObj_exref;
      uVar2 = __vbaCastObj(local_24,&DAT_00414c24);
      __vbaObjSet(&local_20,uVar2);
      __vbaFreeObj();
      __vbaFreeVarList(2,local_34,local_44);
    }
    __vbaObjSetAddref(&local_1c,local_20);
    uVar2 = (*pcVar3)(0,&DAT_00414c24);
    __vbaObjSet(&local_20,uVar2);
  }
  __vbaFreeObj(&LAB_00472dad);
  return;
}

/* ---- 0x472de0 (FUN_00472de0) [estimated] strings:  ---- */
void __cdecl FUN_00472de0(int *param_1,undefined4 param_2,undefined4 *param_3)

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
  local_c = &DAT_00402d50;
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
  uVar2 = __vbaCastObjVar(local_2c,&DAT_00414c24);
  __vbaObjSet(&local_1c,uVar2);
  __vbaFreeVar(piVar3);
  return;
}

/* ---- 0x472ec0 (FUN_00472ec0) [estimated] strings:  ---- */
void __cdecl
FUN_00472ec0(int ***param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5
            )

{
  code *pcVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int *****pppppiVar8;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  code *pcStack_b0;
  undefined4 uStack_ac;
  int ***pppiStack_a8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  int ***pppiStack_84;
  int *****pppppiStack_80;
  int ****ppppiStack_7c;
  int ****ppppiStack_78;
  int ****ppppiStack_74;
  int ****ppppiStack_70;
  int ***pppiStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  int local_40;
  undefined4 ***local_3c [2];
  int *local_34;
  undefined4 local_2c;
  undefined4 ****local_28;
  undefined4 local_24;
  int ****local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff98;
  local_c = &DAT_00402d60;
  local_8 = 0;
  pppiStack_6c = param_1;
  ppppiStack_70 = (int ****)0x472ef7;
  ExceptionList = &pvStack_18;
  (*(code *)(*param_1)[1])();
  pcVar1 = __vbaHresultCheckObj_exref;
  local_20 = (int ****)0x0;
  local_24 = 0;
  local_28 = (undefined4 *****)0x0;
  local_2c = 0;
  local_3c[0] = (undefined4 ****)0x0;
  local_40 = 0;
  *param_5 = 0;
  local_1c = 1;
  iVar7 = local_1c;
  do {
    local_1c = iVar7;
    ppppiStack_70 = (int ****)&local_40;
    ppppiStack_74 = (int ****)param_1;
    ppppiStack_78 = (int ****)0x472f28;
    piVar6 = (int *)(*(code *)(*param_1)[0xb])();
    if ((int)piVar6 < 0) {
      ppppiStack_70 = (int ****)0x2c;
      ppppiStack_74 = (int ****)&DAT_00414c50;
      ppppiStack_78 = (int ****)param_1;
      pppppiStack_80 = (int *****)0x472f37;
      ppppiStack_7c = (int ****)piVar6;
      __vbaHresultCheckObj();
    }
    if (local_40 < local_1c) goto LAB_004730ad;
    local_34 = &local_1c;
    ppppiStack_70 = (int ****)&local_28;
    ppppiStack_74 = local_3c;
    ppppiStack_78 = (int ****)param_1;
    local_3c[0] = (undefined4 ****)0x4003;
    ppppiStack_7c = (int ****)0x472f60;
    piVar6 = (int *)(*(code *)(*param_1)[8])();
    if ((int)piVar6 < 0) {
      ppppiStack_7c = (int ****)0x20;
      pppppiStack_80 = (int *****)&DAT_00414c50;
      pppiStack_84 = param_1;
      uStack_8c = 0x472f6f;
      piStack_88 = piVar6;
      __vbaHresultCheckObj();
    }
    ppppiStack_7c = local_28;
    local_28 = (undefined4 *****)0x0;
    pppppiStack_80 = &local_20;
    pppiStack_84 = (int ***)0x472f80;
    __vbaObjSet();
    ppppiStack_7c = (int ****)&local_40;
    pppppiStack_80 = (int *****)local_20;
    pppiStack_84 = (int ***)0x472f8d;
    piVar6 = (int *)(*(code *)(*local_20)[0xb])();
    if ((int)piVar6 < 0) {
      ppppiStack_70 = (int ****)0x2c;
      ppppiStack_74 = (int ****)&DAT_00414c24;
      ppppiStack_78 = local_20;
      pppppiStack_80 = (int *****)0x472fa1;
      ppppiStack_7c = (int ****)piVar6;
      __vbaHresultCheckObj();
    }
    iVar7 = *param_2;
    if (local_40 == iVar7) {
      if (iVar7 == 0) {
        ppppiStack_70 = (int ****)&local_28;
        ppppiStack_74 = local_20;
        ppppiStack_78 = (int ****)0x47304e;
        piVar6 = (int *)(*(code *)(*local_20)[0xd])();
        if ((int)piVar6 < 0) {
          ppppiStack_70 = (int ****)0x34;
          ppppiStack_74 = (int ****)&DAT_00414c24;
          ppppiStack_78 = local_20;
          pppppiStack_80 = (int *****)0x473062;
          ppppiStack_7c = (int ****)piVar6;
          __vbaHresultCheckObj();
        }
        ppppiStack_70 = (int ****)*param_3;
        ppppiStack_74 = local_28;
        ppppiStack_78 = (int ****)0x473072;
        uVar3 = __vbaObjIs();
        ppppiStack_70 = (int ****)0x47307e;
        __vbaFreeObj();
        ppppiStack_70 = local_20;
      }
      else {
        if (iVar7 != 1) goto LAB_00473085;
        ppppiStack_70 = (int ****)&local_28;
        ppppiStack_74 = local_20;
        ppppiStack_78 = (int ****)0x472fcd;
        iVar7 = (*(code *)(*local_20)[0xf])();
        if (iVar7 < 0) {
          ppppiStack_78 = (int ****)0x3c;
          ppppiStack_7c = (int ****)&DAT_00414c24;
          pppppiStack_80 = (int *****)local_20;
          piStack_88 = (int *)0x472fe1;
          pppiStack_84 = (int ***)iVar7;
          __vbaHresultCheckObj();
        }
        ppppiStack_78 = (int ****)&local_2c;
        ppppiStack_7c = local_20;
        pppppiStack_80 = (int *****)0x472fee;
        pppppiVar8 = (int *****)(*(code *)(*local_20)[0xd])();
        if ((int)pppppiVar8 < 0) {
          ppppiStack_70 = (int ****)0x34;
          ppppiStack_74 = (int ****)&DAT_00414c24;
          ppppiStack_78 = local_20;
          pppppiStack_80 = (int *****)0x473002;
          ppppiStack_7c = (int ****)pppppiVar8;
          __vbaHresultCheckObj();
        }
        ppppiStack_70 = (int ****)*param_4;
        ppppiStack_74 = local_28;
        ppppiStack_78 = (int ****)0x473012;
        uVar3 = __vbaObjIs();
        ppppiStack_70 = (int ****)*param_3;
        ppppiStack_74 = (int ****)local_2c;
        ppppiStack_78 = (int ****)0x473025;
        uVar4 = __vbaObjIs();
        uVar3 = uVar3 & uVar4;
        ppppiStack_70 = (int ****)&local_2c;
        ppppiStack_74 = (int ****)&local_28;
        ppppiStack_78 = (int ****)0x2;
        ppppiStack_7c = (int ****)0x473037;
        __vbaFreeObjList();
        ppppiStack_70 = local_20;
      }
      local_20 = ppppiStack_70;
      if (uVar3 != 0) {
        ppppiStack_74 = (int ****)&local_24;
        ppppiStack_78 = (int ****)0x4730ad;
        __vbaObjSetAddref();
LAB_004730ad:
        ppppiStack_70 = (int ****)&LAB_004730e1;
        ppppiStack_74 = (int ****)0x4730e0;
        __vbaFreeObj();
        return;
      }
    }
LAB_00473085:
    iVar7 = local_1c + 1;
    if (SCARRY4(local_1c,1)) {
      ppppiStack_70 = (int ****)0x47310e;
      __vbaErrorOverflow();
      ppppiStack_7c = (int ****)&LAB_004032d6;
      pppppiStack_80 = ExceptionList;
      pppiStack_a8 = param_1;
      uStack_ac = 0;
      ppppiStack_78 = (int ****)&pcStack_b0;
      pcStack_b0 = pcVar1;
      ppppiStack_74 = (int ****)&DAT_00402d70;
      ppppiStack_70 = (int ****)0x0;
      ExceptionList = &pppppiStack_80;
      pppiStack_6c = (int ***)&stack0xfffffffc;
      (**(code **)(*unaff_ESI + 4))(unaff_ESI);
      *puStack_54 = 0;
      pppiStack_84 = (int ***)0x0;
      piStack_88 = (int *)0x0;
      uStack_8c = 0;
      uStack_90 = 0;
      iVar7 = (**(code **)(*unaff_ESI + 0x24))(unaff_ESI,unaff_EBX,uStack_5c,uStack_58,&uStack_90);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,unaff_ESI,&DAT_00414c50,0x24);
      }
      uVar2 = uStack_90;
      uStack_90 = 0;
      __vbaObjSet(&piStack_88,uVar2);
      sVar5 = __vbaObjIs(piStack_88,0);
      if (sVar5 == 0) {
        iVar7 = (**(code **)(*piStack_88 + 0x24))(piStack_88,&uStack_8c);
        if (iVar7 < 0) {
          __vbaHresultCheckObj(iVar7,piStack_88,&DAT_00414c24,0x24);
        }
        uStack_8c = 0;
        __vbaStrMove();
      }
      __vbaFreeObj(&LAB_00473209);
      return;
    }
  } while( true );
}
