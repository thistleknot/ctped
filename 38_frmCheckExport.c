/* Object #38 frmCheckExport -- ESTIMATED function range; public methods per VB header: Initialize */
#include "ghidra_types.h"

/* ---- 0x47dde0 (FUN_0047dde0) [estimated] strings:  ---- */
void __cdecl FUN_0047dde0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_f0;
  undefined4 local_ec [4];
  int *local_dc;
  int *local_d4;
  undefined4 local_d0;
  undefined4 local_cc [13];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
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
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffeec;
  local_c = &DAT_004032b0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  uVar5 = 0;
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98[0] = 0;
  local_cc[0] = 0;
  local_d0 = 0;
  local_ec[0] = 0;
  local_f0 = 0;
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_2c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_48,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar5);
  piVar2 = (int *)__vbaObjSet(&local_30,uVar1);
  local_d4 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_d4,&DAT_00417d34,0x2c);
  }
  __vbaFreeObjList(2,&local_2c,&local_30);
  __vbaFreeVar(piVar2);
  iVar3 = (**(code **)(*(int *)piVar4[0xd] + 0x44))((int *)piVar4[0xd],&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0xd],&LAB_00414228,0x44);
  }
  piVar2 = local_2c;
  local_2c = (int *)0x0;
  uVar1 = __vbaObjSet(local_ec,piVar2);
  iVar3 = __vbaForEachCollObj(&LAB_004133e8,&local_f0,&local_1c,uVar1);
  while (iVar3 != 0) {
    iVar3 = (**(code **)(*local_1c + 0x2c))(local_1c,local_cc);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x2c);
    }
    iVar3 = (**(code **)(*local_1c + 0x4c))(local_1c,&local_d0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x4c);
    }
    if ((short)local_d0 != 0 && (short)local_cc[0] != 0) {
      iVar3 = (**(code **)(*local_1c + 0x1c))(local_1c,&local_24);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x1c);
      }
      iVar3 = (**(code **)(*local_1c + 0x58))(local_1c,&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_1c,&LAB_004133e8,0x58);
      }
      local_dc = local_2c;
      iVar3 = (**(code **)(*local_2c + 0x30))(local_2c,&local_28);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_dc,&DAT_00414258,0x30);
      }
      uVar5 = 0;
      uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
      uVar1 = __vbaObjSet(&local_30,uVar1);
      uVar1 = __vbaLateIdCallLd(local_48,uVar1);
      uVar1 = __vbaCastObjVar(uVar1,uVar5);
      piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
      local_70 = local_28;
      local_90 = 0x80020004;
      local_80 = 0x80020004;
      local_50 = 0x80020004;
      local_60 = local_24;
      local_98[0] = 10;
      local_88[0] = 10;
      local_28 = 0;
      local_78[0] = 8;
      local_24 = 0;
      local_68[0] = 8;
      local_58[0] = 10;
      iVar3 = (**(code **)(*piVar2 + 0x28))
                        (piVar2,local_58,local_68,local_78,local_88,local_98,&local_38);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x28);
      }
      uVar1 = __vbaCastObj(local_38,&DAT_00417d44);
      __vbaObjSet(&local_20,uVar1);
      __vbaFreeObjList(4,&local_2c,&local_30,&local_34,&local_38);
      __vbaFreeVarList(6,local_48,local_58,local_68,local_78,local_88,local_98);
      iVar3 = (**(code **)(*local_20 + 0x60))(local_20,0xffffffff);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,local_20,&DAT_00417d44,0x60);
      }
    }
    iVar3 = __vbaNextEachCollObj(&LAB_004133e8,&local_f0,&local_1c);
  }
  local_8 = 0;
  __vbaFreeObjList(2,local_ec,&local_f0,&LAB_0047e1f8);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x47e220 (FUN_0047e220) [estimated] strings:  ---- */
void __cdecl FUN_0047e220(uint param_1)

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
  local_c = &DAT_004032c0;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  local_1c = 0;
  uVar1 = __vbaCastObj(0,&LAB_00414228);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0xd,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_00415000);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0xe,uVar1);
  __vbaFreeObj();
  uVar1 = __vbaCastObj(0,&DAT_00415640);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  __vbaObjSetAddref(piVar2 + 0xf,uVar1);
  __vbaFreeObj();
  return;
}
