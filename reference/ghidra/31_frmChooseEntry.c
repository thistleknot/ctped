/* Object #31 frmChooseEntry -- ESTIMATED function range; public methods per VB header: Setup */
#include "ghidra_types.h"

/* ---- 0x476b60 (FUN_00476b60) [estimated] strings:  ---- */
void __cdecl FUN_00476b60(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float local_40 [6];
  undefined4 local_28;
  float local_24;
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
  local_c = &DAT_00402eb0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_40[0] = 0.0;
  iVar1 = (**(code **)(*piVar4 + 0x88))(piVar4,local_40);
  uVar5 = 0;
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar4,&DAT_00418a08,0x88);
  }
  fVar9 = local_40[0] - (float)piVar4[0xf];
  local_24 = fVar9;
  if ((uVar5 & 0xd) == 0) {
    uVar7 = 0x80010006;
    uVar8 = 4;
    piVar6 = piVar4;
    uVar3 = local_28;
    uVar2 = (**(code **)(*piVar4 + 0x2fc))(piVar4,0x80010006,4,local_28,fVar9,local_20);
    uVar2 = __vbaObjSet(&local_1c,uVar2);
    __vbaLateIdSt(uVar2,piVar6,uVar7,uVar8,uVar3,fVar9);
    __vbaFreeObj();
    iVar1 = (**(code **)(*piVar4 + 0x80))(piVar4,local_40);
    uVar5 = 0;
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar4,&DAT_00418a08,0x80);
    }
    fVar9 = local_40[0] - (float)piVar4[0x10];
    local_24 = fVar9;
    if ((uVar5 & 0xd) == 0) {
      uVar2 = 0x80010005;
      uVar7 = 4;
      uVar3 = (**(code **)(*piVar4 + 0x2fc))(piVar4,0x80010005,4,local_28,fVar9,local_20);
      uVar3 = __vbaObjSet(&local_1c,uVar3);
      __vbaLateIdSt(uVar3,piVar4,uVar2,uVar7,local_28,fVar9);
      __vbaFreeObj();
      return;
    }
  }
  __vbaFPException();
  return;
}

/* ---- 0x476cf0 (FUN_00476cf0) [estimated] strings:  ---- */
void __cdecl FUN_00476cf0(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
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
  local_10 = &stack0xffffff94;
  local_c = &DAT_00402ec0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  uVar5 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4,0xd,0,&DAT_00417d44);
  uVar1 = __vbaObjSet(&local_20,uVar1);
  uVar1 = __vbaLateIdCallLd(local_38,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar5);
  piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d44,0x4c);
  }
  local_40 = local_1c;
  local_1c = 0;
  local_48[0] = 8;
  iVar3 = (**(code **)(*(int *)piVar4[0xe] + 0x24))((int *)piVar4[0xe],local_48,&local_28);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0xe],&DAT_004146fc,0x24);
  }
  __vbaObjSetAddref(piVar4 + 0xd,local_28);
  __vbaFreeObjList(3,&local_20,&local_24,&local_28);
  __vbaFreeVarList(2,local_38,local_48);
  iVar3 = (**(code **)(*piVar4 + 0x2b4))(piVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418a08,0x2b4);
  }
  return;
}

/* ---- 0x476e90 (FUN_00476e90) [estimated] strings:  ---- */
void __cdecl FUN_00476e90(uint param_1,short *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
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
  local_10 = &stack0xffffff94;
  local_c = &DAT_00402ed0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  if (*param_2 == 0xd) {
    uVar5 = 0;
    uVar1 = (**(code **)(*piVar4 + 0x2fc))(piVar4,0xd,0,&DAT_00417d44);
    uVar1 = __vbaObjSet(&local_20,uVar1);
    uVar1 = __vbaLateIdCallLd(local_38,uVar1);
    uVar1 = __vbaCastObjVar(uVar1,uVar5);
    piVar2 = (int *)__vbaObjSet(&local_24,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2,&local_1c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d44,0x4c);
    }
    local_40 = local_1c;
    local_1c = 0;
    local_48[0] = 8;
    iVar3 = (**(code **)(*(int *)piVar4[0xe] + 0x24))((int *)piVar4[0xe],local_48,&local_28);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4[0xe],&DAT_004146fc,0x24);
    }
    __vbaObjSetAddref(piVar4 + 0xd,local_28);
    __vbaFreeObjList(3,&local_20,&local_24,&local_28);
    __vbaFreeVarList(2,local_38,local_48);
    iVar3 = (**(code **)(*piVar4 + 0x2b4))(piVar4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar4,&DAT_00418a08,0x2b4);
    }
  }
  return;
}

/* ---- 0x477040 (FUN_00477040) [estimated] strings: .slc; Processing ;  into  ---- */
void __cdecl FUN_00477040(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_4c [2];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff88;
  local_8 = &DAT_00402ee0;
  local_18 = 0;
  local_1c = (int *)0x0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_4c[1] = 0;
  local_4c[0] = 0;
  ExceptionList = &pvStack_14;
  uVar1 = __vbaNew(&DAT_00408318);
  __vbaObjSet(&local_1c,uVar1);
  uVar1 = __vbaNew(&DAT_00408318);
  __vbaObjSet(&local_20,uVar1);
  uVar1 = __vbaCastObj(0,&DAT_004146ac);
  __vbaObjSet(&local_38,uVar1);
  piVar3 = local_1c;
  puVar4 = param_3;
  iVar2 = (**(code **)(*local_1c + 0x58))(local_1c,param_3,param_2,&local_38);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x58);
  }
  __vbaFreeObj();
  __vbaStrCopy(piVar3,puVar4);
  FUN_00441680(param_3,&local_24);
  __vbaStrMove();
  uVar1 = __vbaCastObj(0,&DAT_004146ac);
  __vbaObjSet(&local_38,uVar1);
  local_30 = 0;
  uVar1 = __vbaStrMove();
  __vbaStrCat(L".slc",uVar1);
  __vbaStrMove();
  iVar2 = (**(code **)(*local_20 + 0x58))(local_20,&local_2c,param_2,&local_38);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414258,0x58);
  }
  __vbaFreeStrList(4,&local_24,&local_28,&local_2c,&local_30);
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x318))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_38,uVar1);
  iVar2 = (**(code **)(*local_1c + 0x30))(local_1c,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x30);
  }
  iVar2 = (**(code **)(*local_20 + 0x30))(local_20,&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414258,0x30);
  }
  iVar2 = *piVar3;
  __vbaStrCat(local_24,L"Processing ");
  uVar1 = __vbaStrMove();
  __vbaStrCat(L" into ",uVar1);
  uVar1 = __vbaStrMove();
  __vbaStrCat(local_2c,uVar1);
  uVar1 = __vbaStrMove();
  iVar2 = (**(code **)(iVar2 + 0x54))(piVar3,uVar1);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_004182f8,0x54);
  }
  __vbaFreeStrList(5,&local_24,&local_28,&local_30,&local_2c,&local_34);
  __vbaFreeObj();
  iVar2 = (**(code **)(*local_1c + 0x4c))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x4c);
  }
  while( true ) {
    iVar2 = (**(code **)(*local_1c + 0x40))(local_1c,&local_40);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x40);
    }
    if ((short)local_40 != 0) break;
    iVar2 = (**(code **)(*local_1c + 0x78))(local_1c,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x78);
    }
    local_24 = 0;
    __vbaStrMove();
    FUN_004402a0(&local_18,&local_28);
    __vbaFreeStr();
  }
  iVar2 = (**(code **)(*local_1c + 0x48))(local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x48);
  }
  uVar1 = (**(code **)(*param_1 + 0x304))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_38,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0xe0))(piVar3,&local_40);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417e48,0xe0);
  }
  local_44 = -(uint)((short)local_40 == 1);
  local_4c[0] = 0;
  local_4c[1] = 0;
  uVar1 = __vbaCastObj(0,&LAB_0041470c);
  __vbaObjSet(&local_3c,uVar1);
  FUN_0046ea50(local_18,&local_3c,param_1 + 0xe,param_1 + 0xd,(ushort *)&local_44,local_4c + 1,
               local_4c);
  __vbaStrMove();
  __vbaFreeObjList(2,&local_38,&local_3c);
  iVar2 = (**(code **)(*local_20 + 0x50))(local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414258,0x50);
  }
  iVar2 = (**(code **)(*local_20 + 0x80))(local_20,&local_18);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414258,0x80);
  }
  iVar2 = (**(code **)(*local_20 + 0x48))(local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_20,&DAT_00414258,0x48);
  }
  uVar1 = (**(code **)(*param_1 + 0x318))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_38,uVar1);
  iVar2 = (**(code **)(*piVar3 + 0x54))(piVar3,&DAT_00412f74);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_004182f8,0x54);
  }
  __vbaFreeObj();
  __vbaFreeStr(&LAB_004774e1);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x477500 (FUN_00477500) [estimated] strings: .slc ---- */
void __cdecl FUN_00477500(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_44;
  undefined4 local_40 [6];
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa0;
  local_c = &DAT_00402ef0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_40[0] = 0;
  local_44 = 0;
  __vbaObjSetAddref(param_1 + 0xd,*param_2);
  piVar4 = param_1 + 0xe;
  __vbaObjSetAddref(piVar4,*param_3);
  iVar2 = (**(code **)(*(int *)*piVar4 + 0x44))((int *)*piVar4,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,*piVar4,&LAB_00414228,0x44);
  }
  piVar4 = local_24;
  local_24 = (int *)0x0;
  uVar3 = __vbaObjSet(local_40,piVar4);
  iVar2 = __vbaForEachCollObj(&LAB_004133e8,&local_44,&local_1c,uVar3);
  do {
    if (iVar2 == 0) {
LAB_004776f5:
      __vbaFreeObjList(2,local_40,&local_44,&LAB_00477736);
      __vbaFreeObj();
      return;
    }
    iVar2 = (**(code **)(*local_1c + 0x58))(local_1c,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x58);
    }
    piVar4 = local_24;
    iVar2 = (**(code **)(*local_24 + 0x30))(local_24,&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414258,0x30);
    }
    iVar2 = __vbaInStr(0,L".slc",local_20,1);
    __vbaFreeStr();
    __vbaFreeObj();
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x314))(param_1);
      piVar4 = (int *)__vbaObjSet(&local_28,uVar3);
      iVar2 = (**(code **)(*local_1c + 0x58))(local_1c,&local_24);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&LAB_004133e8,0x58);
      }
      piVar1 = local_24;
      iVar2 = (**(code **)(*local_24 + 0x34))(local_24,&local_20);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x34);
      }
      iVar2 = (**(code **)(*piVar4 + 0xac))(piVar4,local_20);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00416cc0,0xac);
      }
      __vbaFreeStr();
      __vbaFreeObjList(2,&local_24,&local_28);
      __vbaExitEachColl(&local_44);
      goto LAB_004776f5;
    }
    iVar2 = __vbaNextEachCollObj(&LAB_004133e8,&local_44,&local_1c);
  } while( true );
}

/* ---- 0x477760 (FUN_00477760) [estimated] strings:  ---- */
void __cdecl FUN_00477760(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc4;
  local_c = &DAT_00402f00;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  if (DAT_00480244 == (int *)0x0) {
    __vbaNew2(&DAT_00413b34,&DAT_00480244);
  }
  piVar1 = DAT_00480244;
  iVar3 = *DAT_00480244;
  uVar2 = __vbaObjSetAddref(&local_1c,piVar4);
  iVar3 = (**(code **)(iVar3 + 0x10))(piVar1,uVar2);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar1,&DAT_00413b24,0x10);
  }
  __vbaFreeObj();
  return;
}
