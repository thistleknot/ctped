/* Object #28 Comments -- ESTIMATED function range; public methods per VB header: Add, Item, ItemByObject, CommentByObject, Count, Remove */
#include "ghidra_types.h"

/* ---- 0x473110 (FUN_00473110) [estimated] strings:  ---- */
void __cdecl
FUN_00473110(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

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
  local_c = &DAT_00402d70;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_5 = 0;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  iVar3 = (**(code **)(*param_1 + 0x24))(param_1,param_2,param_3,param_4,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1,&DAT_00414c50,0x24);
  }
  uVar1 = local_28;
  local_28 = 0;
  __vbaObjSet(&local_20,uVar1);
  sVar2 = __vbaObjIs(local_20,0);
  if (sVar2 == 0) {
    iVar3 = (**(code **)(*local_20 + 0x24))(local_20,&local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_20,&DAT_00414c24,0x24);
    }
    local_24 = 0;
    __vbaStrMove();
  }
  __vbaFreeObj(&LAB_00473209);
  return;
}

/* ---- 0x473230 (FUN_00473230) [estimated] strings:  ---- */
undefined4 FUN_00473230(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00402d80;
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

/* ---- 0x4732c0 (FUN_004732c0) [estimated] strings:  ---- */
undefined4 FUN_004732c0(int *param_1,undefined4 param_2)

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
  local_c = &DAT_00402d88;
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

/* ---- 0x473340 (FUN_00473340) [estimated] strings:  ---- */
void __cdecl FUN_00473340(int *param_1)

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
  local_c = &DAT_00402d90;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_2c[0] = 0;
  local_40[0] = 0;
  while( true ) {
    piVar4 = local_40;
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,piVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414c50,0x2c);
    }
    if (local_40[0] == 0) break;
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_2c,&local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414c50,0x20);
    }
    piVar1 = local_1c;
    piVar3 = local_1c;
    iVar2 = (**(code **)(*local_1c + 0x44))(local_1c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414c24,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
    local_24 = 1;
    local_2c[0] = 2;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_00414c50,0x30);
    }
    __vbaFreeVar(piVar4);
  }
  return;
}

/* ---- 0x473470 (FUN_00473470) [estimated] strings:  ---- */
void __cdecl FUN_00473470(int *****param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int *******pppppppiVar5;
  int iVar6;
  int ********ppppppppiVar7;
  int *****pppppiVar8;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  code *pcStack_b4;
  undefined4 uStack_b0;
  int *****pppppiStack_ac;
  undefined4 auStack_9c [2];
  undefined4 uStack_94;
  int iStack_90;
  int *****pppppiStack_8c;
  int *******pppppppiStack_88;
  int *******pppppppiStack_84;
  int *******pppppppiStack_80;
  int *******pppppppiStack_7c;
  int *******pppppppiStack_78;
  int *******pppppppiStack_74;
  int *******pppppppiStack_70;
  int *****pppppiStack_6c;
  undefined4 *puStack_5c;
  int *****local_40;
  int ******local_3c [2];
  int *local_34;
  undefined4 local_2c;
  int *******local_28;
  undefined4 local_24;
  int *******local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff98;
  local_c = &DAT_00402da0;
  local_8 = 0;
  pppppiStack_6c = param_1;
  pppppppiStack_70 = (int *******)0x4734a7;
  ExceptionList = &pvStack_18;
  (*(code *)(*param_1)[1])();
  pcVar1 = __vbaHresultCheckObj_exref;
  local_20 = (int *******)0x0;
  local_28 = (int *******)0x0;
  local_2c = 0;
  local_3c[0] = (int ******)0x0;
  local_40 = (int *****)0x0;
  local_1c = 1;
  iVar6 = local_1c;
  do {
    local_1c = iVar6;
    pppppppiStack_70 = (int *******)&local_40;
    pppppppiStack_74 = (int *******)param_1;
    pppppppiStack_78 = (int *******)0x4734d0;
    pppppppiVar5 = (int *******)(*(code *)(*param_1)[0xb])();
    if ((int)pppppppiVar5 < 0) {
      pppppppiStack_78 = (int *******)0x2c;
      pppppppiStack_7c = (int *******)&DAT_00414c50;
      pppppppiStack_80 = (int *******)param_1;
      pppppppiStack_88 = (int *******)0x4734df;
      pppppppiStack_84 = pppppppiVar5;
      __vbaHresultCheckObj();
    }
    if ((int)local_40 < local_1c) {
      pppppppiStack_78 = (int *******)&LAB_004736ff;
      pppppppiStack_7c = (int *******)0x4736fe;
      __vbaFreeObj();
      return;
    }
    local_34 = &local_1c;
    pppppppiStack_78 = (int *******)&local_28;
    pppppppiStack_7c = local_3c;
    pppppppiStack_80 = (int *******)param_1;
    local_3c[0] = (int ******)0x4003;
    pppppppiStack_84 = (int *******)0x473508;
    iVar6 = (*(code *)(*param_1)[8])();
    if (iVar6 < 0) {
      pppppppiStack_84 = (int *******)0x20;
      pppppppiStack_88 = (int *******)&DAT_00414c50;
      pppppiStack_8c = param_1;
      uStack_94 = 0x473517;
      iStack_90 = iVar6;
      __vbaHresultCheckObj();
    }
    pppppppiStack_88 = (int *******)&local_20;
    pppppppiStack_84 = local_28;
    local_28 = (int *******)0x0;
    pppppiStack_8c = (int *****)0x473528;
    __vbaObjSet();
    pppppppiStack_84 = (int *******)&local_40;
    pppppppiStack_88 = local_20;
    local_24 = 0;
    pppppiStack_8c = (int *****)0x473538;
    ppppppppiVar7 = (int ********)(*(code *)(*local_20)[0xb])();
    if ((int)ppppppppiVar7 < 0) {
      pppppppiStack_70 = (int *******)0x2c;
      pppppppiStack_74 = (int *******)&DAT_00414c24;
      pppppppiStack_78 = local_20;
      pppppppiStack_80 = (int *******)0x47354c;
      pppppppiStack_7c = (int *******)ppppppppiVar7;
      __vbaHresultCheckObj();
    }
    if (local_40 == (int *****)0x1) {
      pppppppiStack_70 = (int *******)&local_28;
      pppppppiStack_74 = local_20;
      pppppppiStack_78 = (int *******)0x473563;
      pppppppiVar5 = (int *******)(*(code *)(*local_20)[0xd])();
      if ((int)pppppppiVar5 < 0) {
        pppppppiStack_78 = (int *******)0x34;
        pppppppiStack_7c = (int *******)&DAT_00414c24;
        pppppppiStack_80 = local_20;
        pppppppiStack_88 = (int *******)0x473577;
        pppppppiStack_84 = pppppppiVar5;
        __vbaHresultCheckObj();
      }
      pppppppiStack_78 = (int *******)&local_2c;
      pppppppiStack_7c = local_20;
      pppppppiStack_80 = (int *******)0x473584;
      ppppppppiVar7 = (int ********)(*(code *)(*local_20)[0xf])();
      if ((int)ppppppppiVar7 < 0) {
        pppppppiStack_70 = (int *******)0x3c;
        pppppppiStack_74 = (int *******)&DAT_00414c24;
        pppppppiStack_78 = local_20;
        pppppppiStack_80 = (int *******)0x473598;
        pppppppiStack_7c = (int *******)ppppppppiVar7;
        __vbaHresultCheckObj();
      }
      pppppppiStack_70 = (int *******)*param_2;
      pppppppiStack_74 = local_28;
      pppppppiStack_78 = (int *******)0x4735a8;
      uVar2 = __vbaObjIs();
      pppppppiStack_70 = (int *******)0x0;
      pppppppiStack_74 = (int *******)local_2c;
      pppppppiStack_78 = (int *******)0x4735b7;
      uVar3 = __vbaObjIs();
      pppppppiStack_70 = (int *******)&local_2c;
      pppppppiStack_74 = (int *******)&local_28;
      pppppppiStack_78 = (int *******)0x2;
      pppppppiStack_7c = (int *******)0x4735cb;
      __vbaFreeObjList();
      if ((uVar2 & ~uVar3) != 0) {
        pppppppiStack_70 = (int *******)&local_28;
        pppppppiStack_74 = local_20;
        pppppppiStack_78 = (int *******)0x4735e4;
        pppppppiVar5 = (int *******)(*(code *)(*local_20)[0xf])();
        if ((int)pppppppiVar5 < 0) {
          pppppppiStack_78 = (int *******)0x3c;
          pppppppiStack_7c = (int *******)&DAT_00414c24;
          pppppppiStack_80 = local_20;
          pppppppiStack_88 = (int *******)0x4735f8;
          pppppppiStack_84 = pppppppiVar5;
          __vbaHresultCheckObj();
        }
        pppppppiVar5 = local_28;
        pppppppiStack_78 = (int *******)&local_2c;
        pppppppiStack_7c = local_28;
        pppppppiStack_80 = (int *******)0x473607;
        ppppppppiVar7 = (int ********)(*(code *)(*local_28)[10])();
        if ((int)ppppppppiVar7 < 0) {
          pppppppiStack_70 = (int *******)0x28;
          pppppppiStack_74 = (int *******)&DAT_00414bb4;
          pppppppiStack_78 = pppppppiVar5;
          pppppppiStack_80 = (int *******)0x473618;
          pppppppiStack_7c = (int *******)ppppppppiVar7;
          __vbaHresultCheckObj();
        }
        pppppppiStack_70 = (int *******)*param_3;
        pppppppiStack_74 = (int *******)local_2c;
        pppppppiStack_78 = (int *******)0x473628;
        sVar4 = __vbaObjIs();
        pppppppiStack_70 = (int *******)&local_2c;
        pppppppiStack_74 = (int *******)&local_28;
        pppppppiStack_78 = (int *******)0x2;
        pppppppiStack_7c = (int *******)0x47363a;
        __vbaFreeObjList();
        if (sVar4 != 0) {
          local_34 = &local_1c;
          pppppppiStack_70 = (int *******)&local_28;
          pppppppiStack_74 = local_3c;
          pppppppiStack_78 = (int *******)param_1;
          local_3c[0] = (int ******)0x4003;
          pppppppiStack_7c = (int *******)0x47365d;
          ppppppppiVar7 = (int ********)(*(code *)(*param_1)[8])();
          if ((int)ppppppppiVar7 < 0) {
            pppppppiStack_7c = (int *******)0x20;
            pppppppiStack_80 = (int *******)&DAT_00414c50;
            pppppppiStack_84 = (int *******)param_1;
            pppppiStack_8c = (int *****)0x47366c;
            pppppppiStack_88 = (int *******)ppppppppiVar7;
            __vbaHresultCheckObj();
          }
          pppppppiVar5 = local_28;
          pppppppiStack_7c = local_28;
          pppppppiStack_80 = (int *******)0x473677;
          pppppiVar8 = (int *****)(*(code *)(*local_28)[0x11])();
          if ((int)pppppiVar8 < 0) {
            pppppppiStack_80 = (int *******)0x44;
            pppppppiStack_84 = (int *******)&DAT_00414c24;
            pppppppiStack_88 = pppppppiVar5;
            iStack_90 = 0x473688;
            pppppiStack_8c = pppppiVar8;
            __vbaHresultCheckObj();
          }
          pppppppiStack_80 = (int *******)0x473691;
          __vbaFreeObj();
          pppppppiStack_80 = local_3c;
          local_34 = &local_1c;
          pppppppiStack_84 = (int *******)param_1;
          local_3c[0] = (int ******)0x4003;
          pppppppiStack_88 = (int *******)0x4736a8;
          ppppppppiVar7 = (int ********)(*(code *)(*param_1)[0xc])();
          if ((int)ppppppppiVar7 < 0) {
            pppppppiStack_70 = (int *******)0x30;
            pppppppiStack_74 = (int *******)&DAT_00414c50;
            pppppppiStack_78 = (int *******)param_1;
            pppppppiStack_80 = (int *******)0x4736b7;
            pppppppiStack_7c = (int *******)ppppppppiVar7;
            __vbaHresultCheckObj();
          }
          local_24 = 0xffffffff;
        }
      }
    }
    iVar6 = local_1c;
  } while (((short)local_24 != 0) || (iVar6 = local_1c + 1, !SCARRY4(local_1c,1)));
  pppppppiStack_70 = (int *******)0x473724;
  __vbaErrorOverflow();
  pppppppiStack_7c = (int *******)&LAB_004032d6;
  pppppppiStack_80 = ExceptionList;
  pppppiStack_ac = param_1;
  uStack_b0 = 0;
  pppppppiStack_78 = (int *******)&pcStack_b4;
  pcStack_b4 = pcVar1;
  pppppppiStack_74 = (int *******)&DAT_00402db0;
  pppppppiStack_70 = (int *******)0x0;
  ExceptionList = &pppppppiStack_80;
  pppppiStack_6c = (int *****)&stack0xfffffffc;
  (**(code **)(*unaff_ESI + 4))(unaff_ESI);
  pppppppiStack_84 = (int *******)0x0;
  pppppppiStack_88 = (int *******)0x0;
  pppppiStack_8c = (int *****)0x0;
  auStack_9c[0] = 0;
  iVar6 = __vbaForEachCollObj(&DAT_00414c24,auStack_9c,&pppppppiStack_84,unaff_ESI[0xd]);
  while (iVar6 != 0) {
    iVar6 = (*(code *)(*pppppppiStack_84)[0xd])(pppppppiStack_84,&pppppppiStack_88);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,pppppppiStack_84,&DAT_00414c24,0x34);
    }
    iVar6 = (*(code *)(*pppppppiStack_84)[0xf])(pppppppiStack_84,&pppppiStack_8c);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,pppppppiStack_84,&DAT_00414c24,0x3c);
    }
    uVar2 = __vbaObjIs(pppppppiStack_88,*unaff_EBX);
    uVar3 = __vbaObjIs(pppppiStack_8c,0);
    __vbaFreeObjList(2,&pppppppiStack_88,&pppppiStack_8c);
    if ((uVar2 & uVar3) != 0) {
      __vbaObjSetAddref(&pppppppiStack_88,*puStack_5c);
      iVar6 = (*(code *)(*pppppppiStack_84)[0xe])(pppppppiStack_84,&pppppppiStack_88);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,pppppppiStack_84,&DAT_00414c24,0x38);
      }
      __vbaFreeObj();
    }
    iVar6 = __vbaNextEachCollObj(&DAT_00414c24,auStack_9c,&pppppppiStack_84);
  }
  __vbaFreeObj(&LAB_0047388f);
  __vbaFreeObj();
  return;
}

/* ---- 0x473730 (FUN_00473730) [estimated] strings:  ---- */
void __cdecl FUN_00473730(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 local_34 [4];
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
  local_10 = &stack0xffffffb4;
  local_c = &DAT_00402db0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  iVar3 = __vbaForEachCollObj(&DAT_00414c24,local_34,&local_1c,param_1[0xd]);
  while (iVar3 != 0) {
    iVar3 = (**(code **)(*local_1c + 0x34))(local_1c,&local_20);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&DAT_00414c24,0x34);
    }
    iVar3 = (**(code **)(*local_1c + 0x3c))(local_1c,&local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&DAT_00414c24,0x3c);
    }
    uVar1 = __vbaObjIs(local_20,*param_2);
    uVar2 = __vbaObjIs(local_24,0);
    __vbaFreeObjList(2,&local_20,&local_24);
    if ((uVar1 & uVar2) != 0) {
      __vbaObjSetAddref(&local_20,*param_3);
      iVar3 = (**(code **)(*local_1c + 0x38))(local_1c,&local_20);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&DAT_00414c24,0x38);
      }
      __vbaFreeObj();
    }
    iVar3 = __vbaNextEachCollObj(&DAT_00414c24,local_34,&local_1c);
  }
  __vbaFreeObj(&LAB_0047388f);
  __vbaFreeObj();
  return;
}

/* ---- 0x4738b0 (FUN_004738b0) [estimated] strings:  ---- */
void __cdecl FUN_004738b0(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00402dc0;
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

/* ---- 0x473990 (FUN_00473990) [estimated] strings:  ---- */
void __cdecl FUN_00473990(uint param_1)

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
  local_c = &DAT_00402dd0;
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

/* ---- 0x473a40 (FUN_00473a40) [estimated] strings:  ---- */
void __cdecl FUN_00473a40(uint param_1)

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
  local_c = &DAT_00402de0;
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

/* ---- 0x473af0 (FUN_00473af0) [estimated] strings:  ---- */
undefined4 FUN_00473af0(int *param_1,undefined4 *param_2)

{
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402df0;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaObjSetAddref(param_1 + 0xd,*param_2);
  (**(code **)(*param_1 + 8))(param_1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x473b60 (FUN_00473b60) [estimated] strings:  ---- */
void __cdecl FUN_00473b60(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
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
  local_8 = &DAT_00402df8;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0x2fc))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0xa0);
  }
  local_18 = 0;
  __vbaStrMove();
  iVar3 = (**(code **)(*(int *)param_1[0xd] + 0x40))((int *)param_1[0xd],&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,param_1[0xd],&DAT_00415000,0x40);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  if (DAT_00480244 == (int *)0x0) {
    __vbaNew2(&DAT_00413b34,&DAT_00480244);
  }
  piVar2 = DAT_00480244;
  iVar3 = *DAT_00480244;
  uVar1 = __vbaObjSetAddref(&local_20,param_1);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar2,uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00413b24,0x10);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x473cb0 (FUN_00473cb0) [estimated] strings:  ---- */
void __cdecl FUN_00473cb0(uint param_1)

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
  local_c = &DAT_00402e08;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  iVar3 = (**(code **)(*(int *)piVar4[0xd] + 0x3c))((int *)piVar4[0xd],&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0xd],&DAT_00415000,0x3c);
  }
  iVar3 = (**(code **)(*piVar2 + 0xa4))(piVar2,local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  return;
}
