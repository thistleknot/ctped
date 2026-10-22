/* Object #15 Useful -- ESTIMATED function range; public methods per VB header:  */
#include "ghidra_types.h"

/* ---- 0x440220 (FUN_00440220) [estimated] strings:  ---- */
void FUN_00440220(void)

{
  undefined4 local_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffcc;
  local_8 = &DAT_004020a0;
  local_24[0] = 0;
  ExceptionList = &pvStack_14;
  rtcVarBstrFromAnsi(local_24,9);
  __vbaStrVarMove(local_24);
  __vbaStrMove();
  __vbaFreeVar();
  return;
}

/* ---- 0x4402a0 (FUN_004402a0) [estimated] strings:  ---- */
void __cdecl FUN_004402a0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd8;
  local_8 = &DAT_004020b0;
  ExceptionList = &pvStack_14;
  iVar1 = __vbaStrCmp(&DAT_00412f74,*param_1);
  if (iVar1 == 0) {
    __vbaStrCopy();
  }
  else {
    __vbaStrCat(&LAB_004143c4,*param_1);
    uVar2 = __vbaStrMove();
    __vbaStrCat(*param_2,uVar2);
    __vbaStrMove();
    __vbaFreeStr();
  }
  return;
}

/* ---- 0x440360 (FUN_00440360) [estimated] strings:  ---- */
void FUN_00440360(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd8;
  local_8 = &DAT_004020c0;
  ExceptionList = &pvStack_14;
  __vbaStrCopy();
  return;
}

/* ---- 0x4403e0 (FUN_004403e0) [estimated] strings:  ---- */
void __cdecl FUN_004403e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  uint local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffa4;
  local_8 = &DAT_004020d0;
  local_18 = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_44 = param_1;
  local_4c[0] = 0x4008;
  ExceptionList = &pvStack_14;
  rtcLeftCharVar(local_2c,local_4c,1);
  rtcLowerCaseVar(local_3c,local_2c);
  __vbaStrVarMove(local_3c);
  __vbaStrMove();
  __vbaFreeVarList(2,local_2c,local_3c);
  iVar1 = __vbaStrCmp(&DAT_00417458 /* bstr: 'n' */,local_18);
  iVar2 = __vbaStrCmp(&DAT_00417844 /* bstr: 'f' */,local_18);
  iVar3 = __vbaStrCmp(&DAT_00414ef8 /* bstr: '0' */,local_18);
  local_1c = ~-(uint)((iVar1 == 0 || iVar2 == 0) || iVar3 == 0);
  __vbaFreeStr(&LAB_004404d3);
  return;
}

/* ---- 0x4404f0 (FUN_004404f0) [estimated] strings:  does not appear to be a valid ; or it is of the wrong version.; Found: ; Expected:  ---- */
void __cdecl
FUN_004404f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [4];
  undefined4 local_60 [2];
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
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff2c;
  local_c = &DAT_004020e0;
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
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  ExceptionList = &pvStack_18;
  iVar1 = __vbaStrCmp(*param_3,*param_2);
  if (iVar1 != 0) {
    local_90[0] = 10;
    local_80[0] = 10;
    local_88 = 0x80020004;
    local_78 = 0x80020004;
    __vbaVarDup();
    __vbaStrCat(L" does not appear to be a valid ",*param_4);
    uVar2 = __vbaStrMove();
    __vbaStrCat(*param_5,uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(&DAT_00417894 /* bstr: ',' */,uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(L"or it is of the wrong version.",uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(L"Found: ",uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(*param_2,uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(L"Expected: ",uVar2);
    uVar2 = __vbaStrMove();
    local_58 = __vbaStrCat(*param_3,uVar2);
    local_60[0] = 8;
    rtcMsgBox(local_60,0x30,local_70,local_80,local_90);
    __vbaFreeStrList(10,&local_2c,&local_30,&local_34,&local_38,&local_3c,&local_40,&local_44,
                     &local_48,&local_4c,&local_50);
    __vbaFreeVarList(4,local_60,local_70,local_80,local_90);
    __vbaVarMove();
  }
  return;
}

/* ---- 0x440790 (FUN_00440790) [estimated] strings:  ---- */
void FUN_00440790(void)

{
  undefined4 uVar1;
  undefined4 local_3c [4];
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa0;
  local_c = &DAT_004020f0;
  local_1c = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  ExceptionList = &pvStack_18;
  uVar1 = __vbaVarVargNofree();
  local_24 = __vbaStrErrVarCopy(uVar1);
  local_2c[0] = 8;
  rtcTrimVar(local_3c,local_2c);
  __vbaStrVarMove(local_3c);
  __vbaStrMove();
  __vbaFreeVarList(2,local_2c,local_3c);
  return;
}

/* ---- 0x440860 (FUN_00440860) [estimated] strings:  ---- */
void __cdecl FUN_00440860(short *param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  short sVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  code *pcVar7;
  undefined4 *puVar8;
  undefined4 *puStack_9c;
  undefined4 uStack_98;
  undefined4 *puStack_94;
  undefined4 uStack_88;
  undefined4 *puStack_80;
  undefined4 auStack_78 [2];
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined *puStack_40;
  undefined4 uStack_3c;
  int *piStack_2c;
  int *local_28;
  short *psStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  undefined4 uVar6;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffc8;
  local_8 = &DAT_00402100;
  sVar2 = *param_1;
  local_28 = (int *)CONCAT22(local_28._2_2_,sVar2);
  uVar3 = 1;
  ExceptionList = &pvStack_14;
  do {
    uVar6 = uVar3;
    uStack_3c = 0;
    sVar5 = (short)uVar6;
    if (sVar2 < sVar5) {
      uStack_3c = 0x4408d8;
      __vbaStrCopy();
      __vbaFreeStr();
      return;
    }
    puStack_40 = (undefined *)*param_2;
    puStack_44 = (undefined1 *)0x4408b5;
    __vbaStrCat();
    uStack_3c = 0x4408c0;
    __vbaStrMove();
    uVar3 = CONCAT22(extraout_var,sVar5 + 1);
  } while (!SCARRY2(sVar5,1));
  uStack_3c = 0x44090f;
  __vbaErrorOverflow();
  puStack_48 = &LAB_004032d6;
  pvStack_4c = ExceptionList;
  puStack_94 = param_2;
  puStack_44 = (undefined1 *)&puStack_9c;
  puStack_9c = (undefined4 *)0x1;
  puStack_40 = &DAT_00402110;
  uStack_5c = 0;
  puStack_64 = (undefined4 *)0x0;
  uStack_68 = 0;
  auStack_78[0] = 0;
  uStack_88 = 0;
  pcVar7 = __vbaStrMove_exref;
  ExceptionList = &pvStack_4c;
  uStack_98 = uVar6;
  ppuVar1 = &puStack_9c;
  if (*local_28 != 0) {
    ExceptionList = &pvStack_4c;
    uStack_70 = __vbaI4Abs();
    puVar8 = auStack_78;
    auStack_78[0] = 3;
    FUN_00440790();
    pcVar7 = __vbaStrMove_exref;
    uVar3 = __vbaStrMove(puVar8);
    __vbaLenBstr(uVar3);
    sVar2 = __vbaI2I4(puVar8);
    *psStack_24 = sVar2;
    __vbaFreeStr();
    __vbaFreeVar();
    ppuVar1 = (undefined4 **)puStack_44;
  }
  puStack_44 = (undefined1 *)ppuVar1;
  iStack_60 = -(uint)(*piStack_2c < 0);
  puStack_9c = (undefined4 *)0x4409c2;
  uStack_70 = __vbaI4Abs();
  puStack_9c = auStack_78;
  auStack_78[0] = 3;
  FUN_00440790();
  (*pcVar7)();
  __vbaFreeVar();
  while( true ) {
    puStack_9c = puStack_64;
    iVar4 = __vbaLenBstr();
    if (*psStack_24 <= iVar4) break;
    puStack_9c = (undefined4 *)&DAT_00414ef8 /* bstr: '0' */;
    __vbaStrCat(puStack_64);
    puStack_9c = (undefined4 *)0x440a0e;
    (*pcVar7)();
  }
  if ((short)iStack_60 != 0) {
    puStack_9c = (undefined4 *)&DAT_004178e0 /* bstr: '-' */;
    __vbaStrCat(puStack_64);
    puStack_9c = (undefined4 *)0x440a29;
    (*pcVar7)();
  }
  puStack_80 = puStack_64;
  uStack_88 = 8;
  puStack_9c = (undefined4 *)0x440a42;
  __vbaVarCopy();
  puStack_9c = (undefined4 *)&LAB_00440a75;
  __vbaFreeStr();
  return;
}

/* ---- 0x440910 (FUN_00440910) [estimated] strings:  ---- */
void __cdecl FUN_00440910(undefined4 param_1,int *param_2,int *param_3,short *param_4)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff98;
  local_c = &DAT_00402110;
  local_28 = 0;
  local_30 = 0;
  local_34 = 0;
  local_44[0] = 0;
  pcVar5 = __vbaStrMove_exref;
  ExceptionList = &pvStack_18;
  puVar1 = &stack0xffffff98;
  if (*param_3 != 0) {
    ExceptionList = &pvStack_18;
    local_3c = __vbaI4Abs();
    puVar6 = local_44;
    local_44[0] = 3;
    FUN_00440790();
    pcVar5 = __vbaStrMove_exref;
    uVar3 = __vbaStrMove(puVar6);
    __vbaLenBstr(uVar3);
    sVar2 = __vbaI2I4(puVar6);
    *param_4 = sVar2;
    __vbaFreeStr();
    __vbaFreeVar();
    puVar1 = local_10;
  }
  local_10 = puVar1;
  local_2c = -(uint)(*param_2 < 0);
  local_3c = __vbaI4Abs();
  local_44[0] = 3;
  FUN_00440790();
  (*pcVar5)();
  __vbaFreeVar();
  while (iVar4 = __vbaLenBstr(), iVar4 < *param_4) {
    __vbaStrCat(local_30);
    (*pcVar5)();
  }
  if ((short)local_2c != 0) {
    __vbaStrCat(local_30);
    (*pcVar5)();
  }
  __vbaVarCopy();
  __vbaFreeStr();
  return;
}

/* ---- 0x440ab0 (FUN_00440ab0) [estimated] strings:  ---- */
undefined4 __cdecl FUN_00440ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_ESI;
  undefined4 *puVar7;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c [2];
  undefined4 *local_54;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff7c;
  local_c = &DAT_00402120;
  local_54 = param_2;
  local_28 = 0;
  local_2c = 0;
  local_3c[0] = 0;
  local_4c = 0;
  local_6c[0] = 0;
  local_5c[0] = 0x4008;
  ExceptionList = &pvStack_18;
  uVar2 = __vbaLenBstr(*param_3);
  rtcLeftCharVar(local_3c,local_5c,uVar2);
  local_64 = *param_3;
  local_6c[0] = 0x8008;
  sVar1 = __vbaVarTstEq(local_6c,local_3c);
  __vbaFreeVar();
  if (sVar1 == 0) {
    local_5c[0] = 8;
    local_54 = (undefined4 *)*param_2;
    uVar2 = __vbaVarCopy();
  }
  else {
    puVar7 = local_3c;
    local_34 = 0x80020004;
    local_3c[0] = 10;
    iVar3 = __vbaLenBstr(*param_3);
    if (SCARRY4(iVar3,1)) {
      __vbaErrorOverflow(puVar7);
      iVar3 = __vbaStrCmp(DAT_0047f0b0,*unaff_ESI);
      iVar4 = __vbaStrCmp(&DAT_004179d4 /* bstr: '\n' */,*unaff_ESI);
      iVar5 = __vbaStrCmp(&DAT_004179cc /* bstr: '\r' */,*unaff_ESI);
      iVar6 = __vbaStrCmp(&DAT_004179c4 /* bstr: ' ' */,*unaff_ESI);
      return CONCAT22((short)(-(uint)(iVar6 == 0) >> 0x10),
                      -(ushort)((iVar3 == 0 || iVar4 == 0) || iVar5 == 0) |
                      (ushort)-(uint)(iVar6 == 0));
    }
    rtcMidCharBstr(*param_2,iVar3 + 1,puVar7);
    uVar2 = __vbaStrMove();
    local_44 = __vbaStrCat(uVar2);
    local_4c = 8;
    __vbaVarMove();
    __vbaFreeStr();
    uVar2 = __vbaFreeVar();
  }
  return uVar2;
}

/* ---- 0x440c40 (FUN_00440c40) [estimated] strings:  ---- */
undefined4 FUN_00440c40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = __vbaStrCmp(DAT_0047f0b0,*param_1);
  iVar2 = __vbaStrCmp(&DAT_004179d4 /* bstr: '\n' */,*param_1);
  iVar3 = __vbaStrCmp(&DAT_004179cc /* bstr: '\r' */,*param_1);
  iVar4 = __vbaStrCmp(&DAT_004179c4 /* bstr: ' ' */,*param_1);
  return CONCAT22((short)(-(uint)(iVar4 == 0) >> 0x10),
                  -(ushort)((iVar1 == 0 || iVar2 == 0) || iVar3 == 0) | (ushort)-(uint)(iVar4 == 0))
  ;
}

/* ---- 0x440cb0 (FUN_00440cb0) [estimated] strings:  ---- */
void FUN_00440cb0(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 auStack_d0 [4];
  undefined4 auStack_c0 [4];
  undefined4 auStack_b0 [4];
  undefined4 auStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_84;
  undefined4 *puStack_80;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_44 [4];
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff84;
  local_c = &DAT_00402130;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  puStack_80 = (undefined4 *)0x440cf9;
  ExceptionList = &pvStack_18;
  __vbaStrCopy();
  while( true ) {
    puStack_80 = local_34;
    uStack_84 = 0x440d22;
    rtcLeftCharVar();
    __vbaStrVarMove();
    __vbaStrMove();
    iVar2 = __vbaLenBstr();
    uVar3 = FUN_00440c40(&local_24);
    __vbaFreeStr();
    __vbaFreeVar();
    if ((ushort)(-(ushort)(0 < iVar2) & (ushort)uVar3) == 0) break;
    puStack_80 = local_44;
    local_2c = 0x80020004;
    local_34[0] = 10;
    uStack_84 = 0x440d93;
    rtcMidCharVar();
    __vbaStrVarMove();
    __vbaStrMove();
    puStack_80 = (undefined4 *)0x440db0;
    __vbaFreeVarList();
  }
  while( true ) {
    puStack_80 = (undefined4 *)0x440dd5;
    rtcRightCharVar();
    __vbaStrVarMove();
    __vbaStrMove();
    iVar2 = __vbaLenBstr();
    uVar3 = FUN_00440c40(&local_24);
    __vbaFreeStr();
    __vbaFreeVar();
    if ((ushort)(-(ushort)(0 < iVar2) & (ushort)uVar3) == 0) {
      __vbaStrCopy();
      __vbaFreeStr();
      return;
    }
    iVar2 = __vbaLenBstr();
    if (SBORROW4(iVar2,1)) break;
    rtcLeftCharVar();
    __vbaStrVarMove();
    __vbaStrMove();
    __vbaFreeVar();
  }
  __vbaErrorOverflow();
  puStack_80 = ExceptionList;
  uStack_90 = 0;
  auStack_a0[0] = 0;
  auStack_b0[0] = 0;
  auStack_c0[0] = 0;
  auStack_d0[0] = 0;
  ExceptionList = &puStack_80;
  sVar1 = rtcIsNull(uStack_58);
  if (sVar1 == 0) {
    auStack_a0[0] = 1;
    FUN_00440ed0(auStack_b0,uStack_60,uStack_5c,auStack_a0);
    auStack_c0[0] = 1;
    FUN_00440ed0(auStack_d0,auStack_b0,uStack_58,auStack_c0);
    __vbaVarMove();
    __vbaFreeVarList(3,auStack_a0,auStack_b0,auStack_c0);
  }
  else {
    uVar3 = __vbaVarVargNofree();
    uVar4 = __vbaVarVargNofree(uVar3);
    __vbaVarTstLt(uVar4,uVar3);
    __vbaVarVargNofree();
    __vbaVarCopy();
  }
  return;
}

/* ---- 0x440ed0 (FUN_00440ed0) [estimated] strings:  ---- */
void __cdecl
FUN_00440ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff64;
  local_c = &DAT_00402140;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  ExceptionList = &pvStack_18;
  sVar1 = rtcIsNull(param_4);
  if (sVar1 == 0) {
    local_38[0] = 1;
    FUN_00440ed0(local_48,param_2,param_3,local_38);
    local_58[0] = 1;
    FUN_00440ed0(local_68,local_48,param_4,local_58);
    __vbaVarMove();
    __vbaFreeVarList(3,local_38,local_48,local_58);
  }
  else {
    uVar2 = __vbaVarVargNofree();
    uVar3 = __vbaVarVargNofree(uVar2);
    __vbaVarTstLt(uVar3,uVar2);
    __vbaVarVargNofree();
    __vbaVarCopy();
  }
  return;
}

/* ---- 0x441030 (FUN_00441030) [estimated] strings:  ---- */
void __cdecl
FUN_00441030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff64;
  local_c = &DAT_00402150;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  ExceptionList = &pvStack_18;
  sVar1 = rtcIsNull(param_4);
  if (sVar1 == 0) {
    local_38[0] = 1;
    FUN_00441030(local_48,param_2,param_3,local_38);
    local_58[0] = 1;
    FUN_00441030(local_68,local_48,param_4,local_58);
    __vbaVarMove();
    __vbaFreeVarList(3,local_38,local_48,local_58);
  }
  else {
    uVar2 = __vbaVarVargNofree();
    uVar3 = __vbaVarVargNofree(uVar2);
    __vbaVarTstGt(uVar3,uVar2);
    __vbaVarVargNofree();
    __vbaVarCopy();
  }
  return;
}

/* ---- 0x441190 (FUN_00441190) [estimated] strings:  ---- */
void __cdecl FUN_00441190(undefined4 param_1,undefined4 param_2,int *param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 auStack_11c [2];
  undefined4 uStack_114;
  undefined4 auStack_10c [4];
  undefined4 auStack_fc [4];
  undefined4 auStack_ec [2];
  undefined4 uStack_e4;
  undefined4 *puStack_bc;
  short local_38;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff20;
  local_c = &DAT_00402160;
  uStack_e4 = 0x4411f6;
  ExceptionList = &pvStack_18;
  __vbaStrCopy();
  __vbaStrCopy();
  rtcLeftCharVar();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaFreeVar();
  rtcLeftCharVar();
  __vbaStrVarMove();
  __vbaStrMove();
  __vbaFreeVar();
  rtcMidCharVar();
  __vbaVarCmpEq();
  __vbaVarNot();
  sVar1 = __vbaBoolVarNull();
  __vbaFreeVarList();
  if (sVar1 != 0) {
    rtcErrObj();
    piVar2 = (int *)__vbaObjSet();
    __vbaVarDup();
    __vbaVarDup();
    uStack_e4 = 0x44139f;
    iVar3 = (**(code **)(*piVar2 + 0x44))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaFreeVarList();
  }
  local_38 = 0;
  if (SCARRY4(*param_3,1)) {
LAB_004414f5:
    __vbaErrorOverflow();
    ExceptionList = &stack0xffffff28;
    auStack_ec[0] = 0;
    auStack_fc[0] = 0;
    auStack_11c[0] = 0x8008;
    auStack_10c[0] = 0x4008;
    uStack_114 = *puStack_bc;
    uVar5 = __vbaLenBstr(uStack_114);
    rtcLeftCharVar(auStack_ec,auStack_10c,uVar5);
    uVar5 = __vbaVarCmpEq(auStack_fc,auStack_ec,auStack_11c);
    __vbaBoolVar(uVar5);
    __vbaFreeVar();
    return;
  }
LAB_004413e9:
  do {
    iVar3 = __vbaInStr();
    iVar4 = __vbaInStr();
    if (iVar4 == 0) {
LAB_0044147a:
      __vbaFreeStr();
      __vbaFreeStr();
      return;
    }
    if ((iVar3 == 0) || (iVar4 < iVar3)) {
      if (local_38 == 0) {
        __vbaVarMove();
        goto LAB_0044147a;
      }
      if ((SCARRY4(iVar4,1)) || (bVar6 = SBORROW2(local_38,1), local_38 = local_38 + -1, bVar6))
      goto LAB_004414f5;
      goto LAB_004413e9;
    }
    if ((SCARRY4(iVar3,1)) || (bVar6 = SCARRY2(local_38,1), local_38 = local_38 + 1, bVar6))
    goto LAB_004414f5;
  } while( true );
}

/* ---- 0x441500 (FUN_00441500) [estimated] strings:  ---- */
void __cdecl FUN_00441500(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff98;
  local_8 = &DAT_00402170;
  local_28[0] = 0;
  local_38[0] = 0;
  local_58[0] = 0x8008;
  local_40 = param_1;
  local_48[0] = 0x4008;
  local_50 = *param_2;
  ExceptionList = &pvStack_14;
  uVar1 = __vbaLenBstr(local_50);
  rtcLeftCharVar(local_28,local_48,uVar1);
  uVar1 = __vbaVarCmpEq(local_38,local_28,local_58);
  local_18 = __vbaBoolVar(uVar1);
  __vbaFreeVar();
  return;
}

/* ---- 0x4415c0 (FUN_004415c0) [estimated] strings:  ---- */
void __cdecl FUN_004415c0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff98;
  local_8 = &DAT_00402180;
  local_28[0] = 0;
  local_38[0] = 0;
  local_58[0] = 0x8008;
  local_40 = param_1;
  local_48[0] = 0x4008;
  local_50 = *param_2;
  ExceptionList = &pvStack_14;
  uVar1 = __vbaLenBstr(local_50);
  rtcRightCharVar(local_28,local_48,uVar1);
  uVar1 = __vbaVarCmpEq(local_38,local_28,local_58);
  local_18 = __vbaBoolVar(uVar1);
  __vbaFreeVar();
  return;
}

/* ---- 0x441680 (FUN_00441680) [estimated] strings:  ---- */
void __cdecl FUN_00441680(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_EBX;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  void *pvStack_15c;
  undefined1 *puStack_158;
  undefined4 *puStack_154;
  undefined4 *puStack_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
  undefined4 *puStack_13c;
  undefined4 *puStack_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 auStack_114 [2];
  undefined4 *puStack_10c;
  undefined4 auStack_104 [4];
  undefined4 auStack_f4 [2];
  undefined4 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  void *pvStack_dc;
  undefined1 *puStack_d8;
  undefined4 *puStack_d4;
  undefined4 *puStack_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  undefined4 uStack_c4;
  undefined4 *puStack_c0;
  undefined4 auStack_a0 [4];
  undefined4 auStack_90 [4];
  undefined4 auStack_80 [2];
  undefined4 uStack_78;
  undefined4 uStack_70;
  void *pvStack_68;
  undefined1 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_48;
  undefined4 local_40 [2];
  undefined4 *local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_00402190;
  puStack_58 = (undefined4 *)0x1;
  puStack_5c = (undefined4 *)*param_1;
  puStack_60 = (undefined4 *)*param_2;
  puStack_64 = (undefined1 *)0x0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  pvStack_68 = (void *)0x4416c9;
  ExceptionList = &pvStack_18;
  iVar2 = __vbaInStr();
  if (iVar2 == 0) {
    puStack_58 = (undefined4 *)0x44171b;
    __vbaStrCopy();
  }
  else {
    puStack_58 = (undefined4 *)(iVar2 + -1);
    if (SBORROW4(iVar2,1)) {
      puStack_58 = (undefined4 *)0x441758;
      __vbaErrorOverflow();
      puStack_64 = &LAB_004032d6;
      pvStack_68 = ExceptionList;
      puStack_c0 = param_1;
      puStack_60 = &uStack_c4;
      uStack_c4 = 0;
      puStack_5c = (undefined4 *)&DAT_004021a0;
      puStack_c8 = (undefined4 *)0x1;
      puStack_cc = (undefined4 *)*unaff_EBX;
      puStack_d0 = (undefined4 *)*puStack_48;
      puStack_d4 = (undefined4 *)0x0;
      uStack_70 = 0;
      auStack_80[0] = 0;
      auStack_90[0] = 0;
      auStack_a0[0] = 0;
      puStack_d8 = (undefined1 *)0x4417ac;
      ExceptionList = &pvStack_68;
      puVar3 = (undefined4 *)__vbaInStr();
      if (puVar3 == (undefined4 *)0x0) {
        puStack_c8 = (undefined4 *)0x44182b;
        __vbaStrCopy();
      }
      else {
        puStack_c8 = auStack_80;
        uStack_78 = 0x80020004;
        puStack_cc = (undefined4 *)*puStack_48;
        auStack_80[0] = 10;
        auStack_a0[0] = 0x4008;
        puStack_d0 = (undefined4 *)0x4417da;
        iVar2 = __vbaLenBstr();
        puStack_cc = (undefined4 *)(iVar2 + (int)puVar3);
        if (SCARRY4(iVar2,(int)puVar3)) {
          puStack_cc = (undefined4 *)0x441872;
          __vbaErrorOverflow();
          puVar1 = puStack_c0;
          puStack_d8 = &LAB_004032d6;
          pvStack_dc = ExceptionList;
          uStack_134 = 0;
          puStack_d4 = &puStack_13c;
          puStack_d0 = (undefined4 *)&DAT_004021b0;
          uStack_e0 = 0;
          uStack_e4 = 0;
          auStack_f4[0] = 0;
          auStack_104[0] = 0;
          auStack_114[0] = 0;
          puStack_148 = (undefined4 *)0x4418c7;
          ExceptionList = &pvStack_dc;
          puStack_13c = unaff_EBX;
          puStack_138 = puVar3;
          puStack_c8 = (undefined4 *)&stack0xffffffac;
          FUN_00441680(puStack_c0,unaff_EBX);
          puStack_148 = (undefined4 *)0x4418d4;
          __vbaStrMove();
          puStack_14c = (undefined4 *)*unaff_EBX;
          puStack_148 = auStack_f4;
          uStack_ec = 0x80020004;
          auStack_f4[0] = 10;
          puStack_10c = puVar1;
          auStack_114[0] = 0x4008;
          puStack_150 = (undefined4 *)0x4418fb;
          iStack_130 = __vbaLenBstr();
          puStack_14c = (undefined4 *)uStack_e4;
          puStack_150 = (undefined4 *)0x441906;
          iVar2 = __vbaLenBstr();
          puStack_154 = auStack_104;
          if ((!SCARRY4(iStack_130,iVar2)) &&
             (puStack_14c = (undefined4 *)(iStack_130 + iVar2 + 1), !SCARRY4(iStack_130 + iVar2,1)))
          {
            puStack_158 = (undefined1 *)0x441929;
            puStack_150 = auStack_114;
            rtcMidCharVar();
            puStack_148 = auStack_104;
            puStack_14c = (undefined4 *)0x441933;
            __vbaStrVarMove();
            puStack_148 = (undefined4 *)0x441939;
            __vbaStrMove();
            puStack_148 = auStack_104;
            puStack_14c = auStack_f4;
            puStack_150 = (undefined4 *)0x2;
            puStack_154 = (undefined4 *)0x441949;
            __vbaFreeVarList();
            puStack_148 = (undefined4 *)0x441958;
            __vbaStrCopy();
            __vbaFreeStr();
            return;
          }
          puStack_14c = (undefined4 *)0x4419a8;
          __vbaErrorOverflow();
          puStack_158 = &LAB_004032d6;
          pvStack_15c = ExceptionList;
          puStack_154 = (undefined4 *)&stack0xfffffe7c;
          puStack_150 = (undefined4 *)&DAT_004021c0;
          uStack_160 = 0;
          uStack_164 = 0;
          uStack_168 = 0;
          uStack_16c = 0;
          uStack_170 = 0;
          ExceptionList = &pvStack_15c;
          puStack_148 = &puStack_c8;
          __vbaStrCopy();
          while( true ) {
            iVar2 = __vbaInStr(0,*puStack_13c);
            if (iVar2 == 0) break;
            puVar3 = &uStack_160;
            FUN_00441880(puVar3,puStack_13c);
            uVar4 = __vbaStrMove();
            __vbaStrCat(uVar4,puVar3);
            uVar4 = __vbaStrMove();
            __vbaStrCat(*puStack_138,uVar4);
            __vbaStrMove();
            __vbaFreeStrList(2,&uStack_16c,&uStack_170);
          }
          __vbaStrCat();
          __vbaStrMove();
          __vbaFreeStr();
          __vbaFreeStr();
          return;
        }
        puStack_d0 = auStack_a0;
        puStack_d8 = (undefined1 *)0x4417f1;
        puStack_d4 = auStack_90;
        rtcMidCharVar();
        puStack_c8 = auStack_90;
        puStack_cc = (undefined4 *)0x4417fb;
        __vbaStrVarMove();
        puStack_c8 = (undefined4 *)0x441806;
        __vbaStrMove();
        puStack_c8 = auStack_90;
        puStack_cc = auStack_80;
        puStack_d0 = (undefined4 *)0x2;
        puStack_d4 = (undefined4 *)0x441816;
        __vbaFreeVarList();
      }
      return;
    }
    puStack_5c = local_40;
    local_38 = param_1;
    local_40[0] = 0x4008;
    puStack_64 = (undefined1 *)0x4416eb;
    puStack_60 = local_30;
    rtcLeftCharVar();
    puStack_58 = local_30;
    puStack_5c = (undefined4 *)0x4416f5;
    __vbaStrVarMove();
    puStack_58 = (undefined4 *)0x441700;
    __vbaStrMove();
    puStack_58 = (undefined4 *)0x441709;
    __vbaFreeVar();
  }
  return;
}

/* ---- 0x441760 (FUN_00441760) [estimated] strings:  ---- */
void __cdecl FUN_00441760(undefined *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *puVar4;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  void *pvStack_10c;
  undefined1 *puStack_108;
  undefined4 *puStack_104;
  undefined4 *puStack_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  undefined4 *puStack_ec;
  undefined4 *puStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 auStack_c4 [4];
  undefined4 auStack_b4 [4];
  undefined4 auStack_a4 [2];
  undefined4 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  void *pvStack_8c;
  undefined1 *puStack_88;
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  undefined4 local_50 [2];
  undefined *local_48;
  undefined4 local_40 [4];
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff8c;
  local_c = &DAT_004021a0;
  puStack_78 = (undefined4 *)0x1;
  puStack_7c = *(undefined4 **)param_1;
  puStack_80 = (undefined4 *)*param_2;
  puStack_84 = (undefined4 *)0x0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  puStack_88 = (undefined1 *)0x4417ac;
  ExceptionList = &pvStack_18;
  puVar1 = (undefined4 *)__vbaInStr();
  if (puVar1 == (undefined4 *)0x0) {
    puStack_78 = (undefined4 *)0x44182b;
    __vbaStrCopy();
  }
  else {
    puStack_78 = local_30;
    local_28 = 0x80020004;
    puStack_7c = (undefined4 *)*param_2;
    local_30[0] = 10;
    local_48 = param_1;
    local_50[0] = 0x4008;
    puStack_80 = (undefined4 *)0x4417da;
    iVar2 = __vbaLenBstr();
    puStack_7c = (undefined4 *)(iVar2 + (int)puVar1);
    if (SCARRY4(iVar2,(int)puVar1)) {
      puStack_7c = (undefined4 *)0x441872;
      __vbaErrorOverflow();
      puStack_88 = &LAB_004032d6;
      pvStack_8c = ExceptionList;
      uStack_e4 = 0;
      puStack_84 = &puStack_ec;
      puStack_ec = (undefined4 *)param_1;
      puStack_80 = (undefined4 *)&DAT_004021b0;
      uStack_90 = 0;
      uStack_94 = 0;
      auStack_a4[0] = 0;
      auStack_b4[0] = 0;
      auStack_c4[0] = 0;
      puStack_f8 = (undefined4 *)0x4418c7;
      ExceptionList = &pvStack_8c;
      puStack_e8 = puVar1;
      puStack_78 = (undefined4 *)&stack0xfffffffc;
      FUN_00441680(unaff_ESI,unaff_EBX);
      puStack_f8 = (undefined4 *)0x4418d4;
      __vbaStrMove();
      puStack_fc = (undefined4 *)*unaff_EBX;
      puStack_f8 = auStack_a4;
      uStack_9c = 0x80020004;
      auStack_a4[0] = 10;
      auStack_c4[0] = 0x4008;
      puStack_100 = (undefined4 *)0x4418fb;
      iStack_e0 = __vbaLenBstr();
      puStack_fc = (undefined4 *)uStack_94;
      puStack_100 = (undefined4 *)0x441906;
      iVar2 = __vbaLenBstr();
      puStack_104 = auStack_b4;
      if ((!SCARRY4(iStack_e0,iVar2)) &&
         (puStack_fc = (undefined4 *)(iStack_e0 + iVar2 + 1), !SCARRY4(iStack_e0 + iVar2,1))) {
        puStack_108 = (undefined1 *)0x441929;
        puStack_100 = auStack_c4;
        rtcMidCharVar();
        puStack_f8 = auStack_b4;
        puStack_fc = (undefined4 *)0x441933;
        __vbaStrVarMove();
        puStack_f8 = (undefined4 *)0x441939;
        __vbaStrMove();
        puStack_f8 = auStack_b4;
        puStack_fc = auStack_a4;
        puStack_100 = (undefined4 *)0x2;
        puStack_104 = (undefined4 *)0x441949;
        __vbaFreeVarList();
        puStack_f8 = (undefined4 *)0x441958;
        __vbaStrCopy();
        __vbaFreeStr();
        return;
      }
      puStack_fc = (undefined4 *)0x4419a8;
      __vbaErrorOverflow();
      puStack_108 = &LAB_004032d6;
      pvStack_10c = ExceptionList;
      puStack_104 = (undefined4 *)&stack0xfffffecc;
      puStack_100 = (undefined4 *)&DAT_004021c0;
      uStack_110 = 0;
      uStack_114 = 0;
      uStack_118 = 0;
      uStack_11c = 0;
      uStack_120 = 0;
      ExceptionList = &pvStack_10c;
      puStack_f8 = &puStack_78;
      __vbaStrCopy();
      puVar1 = puStack_ec;
      while( true ) {
        iVar2 = __vbaInStr(0,*puVar1);
        if (iVar2 == 0) break;
        puVar4 = &uStack_110;
        FUN_00441880(puVar4,puVar1);
        uVar3 = __vbaStrMove();
        __vbaStrCat(uVar3,puVar4);
        uVar3 = __vbaStrMove();
        __vbaStrCat(*puStack_e8,uVar3);
        __vbaStrMove();
        __vbaFreeStrList(2,&uStack_11c,&uStack_120);
      }
      __vbaStrCat();
      __vbaStrMove();
      __vbaFreeStr();
      __vbaFreeStr();
      return;
    }
    puStack_80 = local_50;
    puStack_88 = (undefined1 *)0x4417f1;
    puStack_84 = local_40;
    rtcMidCharVar();
    puStack_78 = local_40;
    puStack_7c = (undefined4 *)0x4417fb;
    __vbaStrVarMove();
    puStack_78 = (undefined4 *)0x441806;
    __vbaStrMove();
    puStack_78 = local_40;
    puStack_7c = local_30;
    puStack_80 = (undefined4 *)0x2;
    puStack_84 = (undefined4 *)0x441816;
    __vbaFreeVarList();
  }
  return;
}

/* ---- 0x441880 (FUN_00441880) [estimated] strings:  ---- */
void __cdecl FUN_00441880(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *puVar4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *pvStack_98;
  undefined1 *puStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  undefined4 local_50 [2];
  undefined4 *local_48;
  undefined4 local_40 [4];
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff88;
  local_c = &DAT_004021b0;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  puStack_84 = (undefined4 *)0x4418c7;
  ExceptionList = &pvStack_18;
  FUN_00441680(param_1,param_2);
  puStack_84 = (undefined4 *)0x4418d4;
  __vbaStrMove();
  puStack_88 = (undefined4 *)*param_2;
  puStack_84 = local_30;
  local_28 = 0x80020004;
  local_30[0] = 10;
  local_48 = param_1;
  local_50[0] = 0x4008;
  puStack_8c = (undefined4 *)0x4418fb;
  iVar1 = __vbaLenBstr();
  puStack_88 = (undefined4 *)local_20;
  puStack_8c = (undefined4 *)0x441906;
  iVar2 = __vbaLenBstr();
  puStack_90 = local_40;
  if ((!SCARRY4(iVar1,iVar2)) &&
     (puStack_88 = (undefined4 *)(iVar1 + iVar2 + 1), !SCARRY4(iVar1 + iVar2,1))) {
    puStack_94 = (undefined1 *)0x441929;
    puStack_8c = local_50;
    rtcMidCharVar();
    puStack_84 = local_40;
    puStack_88 = (undefined4 *)0x441933;
    __vbaStrVarMove();
    puStack_84 = (undefined4 *)0x441939;
    __vbaStrMove();
    puStack_84 = local_40;
    puStack_88 = local_30;
    puStack_8c = (undefined4 *)0x2;
    puStack_90 = (undefined4 *)0x441949;
    __vbaFreeVarList();
    puStack_84 = (undefined4 *)0x441958;
    __vbaStrCopy();
    __vbaFreeStr();
    return;
  }
  puStack_88 = (undefined4 *)0x4419a8;
  __vbaErrorOverflow();
  puStack_94 = &LAB_004032d6;
  pvStack_98 = ExceptionList;
  puStack_90 = (undefined4 *)&stack0xffffff40;
  puStack_8c = (undefined4 *)&DAT_004021c0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  ExceptionList = &pvStack_98;
  puStack_84 = (undefined4 *)&stack0xfffffffc;
  __vbaStrCopy();
  while( true ) {
    iVar1 = __vbaInStr(0,*unaff_EDI);
    if (iVar1 == 0) break;
    puVar4 = &uStack_9c;
    FUN_00441880(puVar4,unaff_EDI);
    uVar3 = __vbaStrMove();
    __vbaStrCat(uVar3,puVar4);
    uVar3 = __vbaStrMove();
    __vbaStrCat(*unaff_ESI,uVar3);
    __vbaStrMove();
    __vbaFreeStrList(2,&uStack_a8,&uStack_ac);
  }
  __vbaStrCat();
  __vbaStrMove();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}

/* ---- 0x4419b0 (FUN_004419b0) [estimated] strings:  ---- */
void __cdecl FUN_004419b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc0;
  local_c = &DAT_004021c0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  ExceptionList = &pvStack_18;
  __vbaStrCopy();
  while( true ) {
    iVar1 = __vbaInStr(0,*param_2);
    if (iVar1 == 0) break;
    puVar3 = &local_1c;
    FUN_00441880(puVar3,param_2);
    uVar2 = __vbaStrMove();
    __vbaStrCat(uVar2,puVar3);
    uVar2 = __vbaStrMove();
    __vbaStrCat(*param_3,uVar2);
    __vbaStrMove();
    __vbaFreeStrList(2,&local_28,&local_2c);
  }
  __vbaStrCat();
  __vbaStrMove();
  __vbaFreeStr();
  __vbaFreeStr();
  return;
}

/* ---- 0x441ac0 (FUN_00441ac0) [estimated] strings: CTP Editor; Processing of project files was aborted.; Do you wish to cancel the changes made to the project properties, also? (This is recommended); (If this wa ---- */
void __cdecl FUN_00441ac0(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int *local_c4 [2];
  int *local_bc;
  int *local_b0;
  undefined4 local_ac [6];
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  wchar_t *local_80;
  undefined4 local_7c;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
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
  local_c = &stack0xffffff20;
  local_8 = &DAT_004021d0;
  local_18 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88 = 0;
  local_ac[0] = 0;
  local_c4[0] = (int *)0x0;
  ExceptionList = &pvStack_14;
  __vbaObjSetAddref(local_c4,param_1[0xd]);
  uVar1 = (**(code **)(*param_1 + 0x30c))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_30,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0xa0);
  }
  iVar3 = *local_c4[0];
  __vbaStrCat(&DAT_0041439c /* bstr: '_' */,local_1c);
  uVar1 = __vbaStrMove();
  iVar3 = (**(code **)(iVar3 + 0x28))(local_c4[0],uVar1);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_c4[0],&LAB_00414228,0x28);
  }
  __vbaFreeStrList(2,&local_1c,&local_20);
  __vbaFreeObj();
  uVar1 = (**(code **)(*param_1 + 0x300))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_30,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0xa0);
  }
  iVar3 = (**(code **)(*local_c4[0] + 0x30))(local_c4[0],local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_c4[0],&LAB_00414228,0x30);
  }
  __vbaFreeStr();
  __vbaFreeObj();
  ppiVar4 = &local_30;
  piVar2 = local_c4[0];
  iVar3 = (**(code **)(*local_c4[0] + 0x38))(local_c4[0],ppiVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_c4[0],&LAB_00414228,0x38);
  }
  local_bc = local_30;
  uVar1 = __vbaCastObj(0,&DAT_004146ac);
  __vbaObjSet(&local_38,uVar1);
  __vbaStrCopy(piVar2,ppiVar4);
  uVar1 = (**(code **)(*param_1 + 0x304))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0xa0);
  }
  local_1c = 0;
  __vbaStrMove();
  piVar2 = local_bc;
  iVar3 = (**(code **)(*local_bc + 0x58))(local_bc,&local_20,&local_24,&local_38);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00414258,0x58);
  }
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaFreeObjList(3,&local_34,&local_38,&local_30);
  ppiVar4 = &local_30;
  piVar2 = local_c4[0];
  iVar3 = (**(code **)(*local_c4[0] + 0x40))(local_c4[0],ppiVar4);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_c4[0],&LAB_00414228,0x40);
  }
  local_bc = local_30;
  uVar1 = __vbaCastObj(0,&DAT_004146ac);
  __vbaObjSet(&local_38,uVar1);
  __vbaStrCopy(piVar2,ppiVar4);
  uVar1 = (**(code **)(*param_1 + 0x2fc))(param_1);
  piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_1c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417a98,0xa0);
  }
  local_1c = 0;
  __vbaStrMove();
  iVar3 = (**(code **)(*local_bc + 0x58))(local_bc,&local_20,&local_24,&local_38);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_bc,&DAT_00414258,0x58);
  }
  __vbaFreeStrList(2,&local_20,&local_24);
  __vbaFreeObjList(3,&local_34,&local_38,&local_30);
  uVar1 = __vbaNew(&DAT_004061b0);
  __vbaObjSet(&local_18,uVar1);
  if (DAT_0047f2ac == (int *)0x0) {
    __vbaNew2(&DAT_004098e8,&DAT_0047f2ac);
  }
  local_b0 = DAT_0047f2ac;
  iVar3 = (**(code **)(*DAT_0047f2ac + 0x6f8))(DAT_0047f2ac,param_1 + 0xd,param_1 + 0xe,&local_18);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_b0,&LAB_004179d8,0x6f8);
  }
  if (DAT_0047f2ac == (int *)0x0) {
    __vbaNew2(&DAT_004098e8,&DAT_0047f2ac);
  }
  piVar2 = DAT_0047f2ac;
  local_88 = 3;
  local_80 = (wchar_t *)0x1;
  iVar3 = (**(code **)(*DAT_0047f2ac + 0x2b0))
                    (DAT_0047f2ac,3,local_84,1,local_7c,10,local_94,0x80020004,local_8c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417aa8,0x2b0);
  }
  iVar3 = (**(code **)(*local_18 + 0x1c))(local_18,local_ac);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_18,&DAT_00415640,0x1c);
  }
  if ((short)local_ac[0] != 0) {
    local_78[0] = 10;
    local_68[0] = 10;
    local_70 = 0x80020004;
    local_60 = 0x80020004;
    local_80 = L"CTP Editor";
    local_88 = 8;
    __vbaVarDup();
    __vbaStrCat(&LAB_004143c4,L"Processing of project files was aborted.");
    uVar1 = __vbaStrMove();
    __vbaStrCat(L"Do you wish to cancel the changes made to the project properties, also? (This is recommended)"
                ,uVar1);
    uVar1 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar1);
    uVar1 = __vbaStrMove();
    __vbaStrCat(L"(If this was a new project, then I recommend that you start from scratch,",uVar1);
    uVar1 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar1);
    uVar1 = __vbaStrMove();
    local_40 = __vbaStrCat(L"but in any case restart CTPEd as instability is likely)",uVar1);
    local_48[0] = 8;
    iVar3 = rtcMsgBox(local_48,0x24,local_58,local_68,local_78);
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeVarList(4,local_48,local_58,local_68,local_78);
    if (iVar3 == 6) goto LAB_004420b4;
  }
  iVar3 = (**(code **)(*local_c4[0] + 0x6c))(local_c4[0]);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,local_c4[0],&LAB_00414228,0x6c);
  }
  __vbaObjSetAddref(local_c4,0);
LAB_004420b4:
  __vbaFreeObj(&LAB_0044211b);
  __vbaFreeObj();
  return;
}

/* ---- 0x442130 (FUN_00442130) [estimated] strings:  ---- */
void __cdecl FUN_00442130(int *param_1)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcStack_160;
  int **ppiStack_15c;
  int *piStack_158;
  int *piStack_154;
  int **ppiStack_150;
  int **ppiStack_14c;
  int **ppiStack_148;
  int *piStack_144;
  int iStack_140;
  int **ppiStack_13c;
  int *piStack_138;
  int **ppiStack_134;
  int **ppiStack_130;
  undefined4 *puStack_12c;
  int **ppiStack_128;
  undefined4 *puStack_124;
  int *piStack_120;
  int ***pppiStack_11c;
  int *piStack_118;
  undefined4 local_f0;
  undefined4 local_ec;
  int **local_e8 [5];
  int *local_d4;
  undefined4 local_cc [13];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  int local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffeec;
  local_8 = &DAT_004021e0;
  pppiStack_11c = local_e8;
  piStack_118 = (int *)param_1[0xd];
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  local_20 = 0;
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
  local_e8[0] = (int **)0x0;
  local_ec = 0;
  local_f0 = 0;
  piStack_120 = (int *)0x4421bd;
  ExceptionList = &pvStack_14;
  __vbaObjSetAddref();
  piStack_118 = &local_20;
  pppiStack_11c = (int ***)local_e8[0];
  piStack_120 = (int *)0x4421cd;
  iVar2 = (*(code *)(*local_e8[0])[9])();
  pcVar6 = __vbaHresultCheckObj_exref;
  if (iVar2 < 0) {
    piStack_120 = (int *)0x24;
    puStack_124 = (undefined4 *)&LAB_00414228;
    ppiStack_128 = local_e8[0];
    ppiStack_130 = (int **)0x4421ea;
    puStack_12c = (undefined4 *)iVar2;
    __vbaHresultCheckObj();
  }
  piStack_120 = param_1;
  puStack_124 = (undefined4 *)0x4421fb;
  puStack_124 = (undefined4 *)(**(code **)(*param_1 + 0x30c))();
  ppiStack_128 = &local_2c;
  puStack_12c = (undefined4 *)0x442206;
  ppiVar3 = (int **)__vbaObjSet();
  puStack_124 = &local_24;
  ppiStack_128 = local_e8[0];
  puStack_12c = (undefined4 *)0x442218;
  iVar2 = (*(code *)(*local_e8[0])[9])();
  if (iVar2 < 0) {
    puStack_12c = (undefined4 *)0x24;
    ppiStack_130 = (int **)&LAB_00414228;
    ppiStack_134 = local_e8[0];
    ppiStack_13c = (int **)0x44222f;
    piStack_138 = (int *)iVar2;
    __vbaHresultCheckObj();
  }
  local_40 = local_20;
  local_20 = 0;
  puStack_12c = (undefined4 *)local_24;
  local_48[0] = 8;
  ppiStack_130 = (int **)0x442249;
  iVar2 = __vbaLenBstr();
  puStack_12c = (undefined4 *)(iVar2 + -1);
  if (SBORROW4(iVar2,1)) {
    puStack_12c = (undefined4 *)0x442811;
    __vbaErrorOverflow();
    piStack_138 = (int *)&LAB_004032d6;
    ppiStack_13c = ExceptionList;
    piStack_158 = (int *)0x0;
    ppiStack_134 = (int **)&pcStack_160;
    pcStack_160 = pcVar6;
    ppiStack_130 = (int **)&DAT_004021f0;
    puStack_12c = (undefined4 *)((uint)piStack_120 & 1);
    piVar4 = (int *)((uint)piStack_120 & 0xfffffffe);
    ExceptionList = &ppiStack_13c;
    ppiStack_15c = ppiVar3;
    ppiStack_128 = (int **)&stack0xfffffffc;
    piStack_120 = piVar4;
    (**(code **)(*piVar4 + 4))(piVar4);
    iStack_140 = 0;
    if (DAT_00480244 == (int *)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    piVar1 = DAT_00480244;
    piStack_154 = (int *)*DAT_00480244;
    uVar8 = __vbaObjSetAddref(&iStack_140,piVar4);
    iVar2 = (**(code **)((int)piStack_154 + 0x10))(piVar1,uVar8);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413b24,0x10);
    }
    __vbaFreeObj();
    return;
  }
  ppiStack_134 = (int **)local_58;
  piStack_138 = (int *)0x442261;
  ppiStack_130 = (int **)local_48;
  rtcLeftCharVar();
  piVar4 = *ppiVar3;
  puStack_12c = local_58;
  ppiStack_130 = (int **)&local_28;
  ppiStack_134 = (int **)0x442271;
  puStack_12c = (undefined4 *)__vbaStrVarVal();
  ppiStack_134 = (int **)0x442279;
  ppiStack_130 = ppiVar3;
  iStack_140 = (*(code *)piVar4[0x29])();
  if (iStack_140 < 0) {
    ppiStack_134 = (int **)0xa4;
    piStack_138 = (int *)&DAT_00417a98;
    piStack_144 = (int *)0x44228d;
    ppiStack_13c = ppiVar3;
    __vbaHresultCheckObj();
  }
  ppiStack_134 = (int **)&local_28;
  piStack_138 = &local_24;
  ppiStack_13c = (int **)0x2;
  iStack_140 = 0x44229d;
  __vbaFreeStrList();
  ppiStack_134 = (int **)0x4422a9;
  __vbaFreeObj();
  ppiStack_134 = (int **)local_58;
  piStack_138 = local_48;
  ppiStack_13c = (int **)0x2;
  iStack_140 = 0x4422b9;
  __vbaFreeVarList();
  ppiStack_134 = (int **)param_1;
  piStack_138 = (int *)0x4422c8;
  piStack_138 = (int *)(**(code **)(*param_1 + 0x300))();
  ppiStack_13c = &local_2c;
  iStack_140 = 0x4422d3;
  piVar4 = (int *)__vbaObjSet();
  piStack_138 = &local_20;
  ppiStack_13c = local_e8[0];
  iStack_140 = 0x4422e5;
  puVar5 = (undefined *)(*(code *)(*local_e8[0])[0xb])();
  if ((int)puVar5 < 0) {
    iStack_140 = 0x2c;
    piStack_144 = (int *)&LAB_00414228;
    ppiStack_148 = local_e8[0];
    ppiStack_150 = (int **)0x4422fc;
    ppiStack_14c = (int **)puVar5;
    __vbaHresultCheckObj();
  }
  iStack_140 = local_20;
  ppiStack_148 = (int **)0x442309;
  piStack_144 = piVar4;
  iVar2 = (**(code **)(*piVar4 + 0xa4))();
  if (iVar2 < 0) {
    ppiStack_148 = (int **)0xa4;
    ppiStack_14c = (int **)&DAT_00417a98;
    piStack_158 = (int *)0x44231d;
    piStack_154 = (int *)iVar2;
    ppiStack_150 = (int **)piVar4;
    __vbaHresultCheckObj();
  }
  ppiStack_148 = (int **)0x442326;
  __vbaFreeStr();
  ppiStack_148 = (int **)0x44232f;
  __vbaFreeObj();
  ppiStack_148 = (int **)param_1;
  ppiStack_14c = (int **)0x442338;
  ppiStack_14c = (int **)(**(code **)(*param_1 + 0x304))();
  ppiStack_150 = (int **)&local_30;
  piStack_154 = (int *)0x442343;
  pcVar6 = (code *)__vbaObjSet();
  ppiStack_14c = &local_2c;
  ppiStack_150 = local_e8[0];
  piStack_154 = (int *)0x442355;
  pcVar7 = (code *)(*(code *)(*local_e8[0])[0xe])();
  if ((int)pcVar7 < 0) {
    piStack_154 = (int *)0x38;
    piStack_158 = (int *)&LAB_00414228;
    ppiStack_15c = local_e8[0];
    pcStack_160 = pcVar7;
    __vbaHresultCheckObj();
  }
  piStack_154 = &local_20;
  piStack_158 = local_2c;
  local_d4 = local_2c;
  ppiStack_15c = (int **)0x44237f;
  iVar2 = (**(code **)(*local_2c + 0x30))();
  if (iVar2 < 0) {
    ppiStack_15c = (int **)0x30;
    pcStack_160 = (code *)&DAT_00414258;
    __vbaHresultCheckObj(iVar2,local_d4);
  }
  ppiStack_15c = (int **)local_20;
  pcStack_160 = pcVar6;
  iVar2 = (**(code **)(*(int *)pcVar6 + 0xa4))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,pcVar6,&DAT_00417a98,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_2c,&local_30);
  uVar8 = (**(code **)(*param_1 + 0x2fc))(param_1);
  piVar4 = (int *)__vbaObjSet(&local_30,uVar8);
  iVar2 = (*(code *)(*local_e8[0])[0x10])(local_e8[0],&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_e8[0],&LAB_00414228,0x40);
  }
  piVar1 = local_2c;
  iVar2 = (**(code **)(*local_2c + 0x30))(local_2c,&local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414258,0x30);
  }
  iVar2 = (**(code **)(*piVar4 + 0xa4))(piVar4,local_20);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417a98,0xa4);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_2c,&local_30);
  iVar2 = (*(code *)(*local_e8[0])[0x11])(local_e8[0],&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,local_e8[0],&LAB_00414228,0x44);
  }
  piVar4 = local_2c;
  local_2c = (int *)0x0;
  uVar8 = __vbaObjSet(&local_ec,piVar4);
  iVar2 = __vbaForEachCollObj(&LAB_004133e8,&local_f0,&local_18,uVar8);
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*local_18 + 0x34))(local_18,local_cc);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_18,&LAB_004133e8,0x34);
    }
    if ((short)local_cc[0] == 0) {
      iVar2 = (**(code **)(*local_18 + 0x1c))(local_18,&local_20);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&LAB_004133e8,0x1c);
      }
      iVar2 = (**(code **)(*local_18 + 0x58))(local_18,&local_2c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&LAB_004133e8,0x58);
      }
      piVar4 = local_2c;
      iVar2 = (**(code **)(*local_2c + 0x30))(local_2c,&local_24);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414258,0x30);
      }
      uVar9 = 0;
      uVar8 = (**(code **)(*param_1 + 800))(param_1,7,0,&DAT_00417d34);
      uVar8 = __vbaObjSet(&local_30,uVar8);
      uVar8 = __vbaLateIdCallLd(local_48,uVar8);
      uVar8 = __vbaCastObjVar(uVar8,uVar9);
      piVar4 = (int *)__vbaObjSet(&local_34,uVar8);
      local_70 = local_24;
      local_60 = local_20;
      local_90 = 0x80020004;
      local_80 = 0x80020004;
      local_50 = 0x80020004;
      local_98[0] = 10;
      local_88[0] = 10;
      local_24 = 0;
      local_78[0] = 8;
      local_20 = 0;
      local_68[0] = 8;
      local_58[0] = 10;
      iVar2 = (**(code **)(*piVar4 + 0x28))
                        (piVar4,local_58,local_68,local_78,local_88,local_98,&local_38);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x28);
      }
      uVar8 = __vbaCastObj(local_38,&DAT_00417d44);
      __vbaObjSet(&local_1c,uVar8);
      __vbaFreeObjList(4,&local_2c,&local_30,&local_34,&local_38);
      __vbaFreeVarList(6,local_48,local_58,local_68,local_78,local_88,local_98);
      iVar2 = (**(code **)(*local_18 + 0x4c))(local_18,local_cc);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&LAB_004133e8,0x4c);
      }
      iVar2 = (**(code **)(*local_1c + 0xa4))(local_1c,local_cc[0]);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&DAT_00417d44,0xa4);
      }
      iVar2 = (**(code **)(*local_18 + 0x68))(local_18,&local_2c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_18,&LAB_004133e8,0x68);
      }
      piVar4 = local_2c;
      iVar2 = (**(code **)(*local_2c + 0x30))(local_2c,&local_20);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00414258,0x30);
      }
      iVar2 = (**(code **)(*local_1c + 0x88))(local_1c,1,local_20);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_1c,&DAT_00417d44,0x88);
      }
      __vbaFreeStr();
      __vbaFreeObj();
    }
    iVar2 = __vbaNextEachCollObj(&LAB_004133e8,&local_f0,&local_18);
  }
  __vbaObjSetAddref(local_e8,0);
  __vbaFreeObjList(3,local_e8,&local_ec,&local_f0,&LAB_004427f6);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x442820 (FUN_00442820) [estimated] strings:  ---- */
void __cdecl FUN_00442820(uint param_1)

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
  local_c = &DAT_004021f0;
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

/* ---- 0x4428f0 (FUN_004428f0) [estimated] strings:  ---- */
void __cdecl FUN_004428f0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffc8;
  local_c = &DAT_00402200;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  iVar2 = (**(code **)(*DAT_0047f074 + 0x6f8))(DAT_0047f074,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x6f8);
  }
  __vbaObjSetAddref(piVar3 + 0xd,local_1c);
  __vbaFreeObj();
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar1 = DAT_0047f074;
  iVar2 = (**(code **)(*DAT_0047f074 + 0x710))(DAT_0047f074,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00413d78,0x710);
  }
  __vbaObjSetAddref(piVar3 + 0xe,local_1c);
  __vbaFreeObj();
  (**(code **)(*piVar3 + 0x6fc))(piVar3);
  return;
}

/* ---- 0x442a30 (FUN_00442a30) [estimated] strings: CTP Editor; You have selected to use the default ; This is inadvisable.  Proceed?; CTP Editor ---- */
void __cdecl FUN_00442a30(uint param_1,undefined2 *param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  code *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 local_ac [9];
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  int *local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff14;
  local_c = &DAT_00402210;
  local_8 = param_1 & 1;
  piVar9 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar9 + 4))(piVar9);
  uVar10 = 0;
  local_20[0] = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88 = 0;
  local_ac[0] = 0;
  uVar3 = (**(code **)(*piVar9 + 800))(piVar9,7,0,&DAT_00417d34);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  uVar3 = __vbaLateIdCallLd(local_48,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar10);
  piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
  piVar6 = piVar9 + 0xd;
  iVar5 = (**(code **)(*(int *)*piVar6 + 0x48))((int *)*piVar6,&local_2c);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,*piVar6,&LAB_00414228,0x48);
  }
  piVar2 = local_2c;
  iVar5 = (**(code **)(*local_2c + 0x1c))(local_2c,local_20);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar2,&LAB_004133e8,0x1c);
  }
  local_50 = local_20[0];
  local_20[0] = 0;
  local_58[0] = 8;
  iVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,local_58,&local_38);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00417d34,0x24);
  }
  piVar4 = local_38;
  iVar5 = (**(code **)(*local_38 + 0xa0))(local_38,local_ac);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00417d44,0xa0);
  }
  sVar1 = (short)local_ac[0];
  __vbaFreeObjList(4,&local_2c,&local_30,&local_34,&local_38);
  __vbaFreeVarList(2,local_48,local_58);
  pcVar7 = __vbaStrMove_exref;
  pcVar8 = __vbaStrCat_exref;
  if (sVar1 != -1) {
    iVar5 = (**(code **)(*(int *)*piVar6 + 0x48))((int *)*piVar6,&local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,*piVar6,&LAB_00414228,0x48);
    }
    piVar6 = local_2c;
    iVar5 = (**(code **)(*local_2c + 0x58))(local_2c,&local_30);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&LAB_004133e8,0x58);
    }
    piVar6 = local_30;
    iVar5 = (**(code **)(*local_30 + 0x30))(local_30,local_20);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00414258,0x30);
    }
    local_70 = 0x80020004;
    local_60 = 0x80020004;
    local_78[0] = 10;
    local_68[0] = 10;
    local_80 = L"CTP Editor";
    local_88 = 8;
    __vbaVarDup();
    pcVar8 = __vbaStrCat_exref;
    __vbaStrCat(local_20[0],L"You have selected to use the default ");
    pcVar7 = __vbaStrMove_exref;
    uVar3 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar3);
    uVar3 = __vbaStrMove();
    local_40 = __vbaStrCat(L"This is inadvisable.  Proceed?",uVar3);
    local_48[0] = 8;
    iVar5 = rtcMsgBox(local_48,4,local_58,local_68,local_78);
    __vbaFreeStrList(3,local_20,&local_24,&local_28);
    __vbaFreeObjList(2,&local_2c,&local_30);
    __vbaFreeVarList(4,local_48,local_58,local_68,local_78);
    if (iVar5 == 7) {
      *param_2 = 0xffff;
      return;
    }
  }
  uVar10 = 0;
  uVar3 = (**(code **)(*piVar9 + 800))(piVar9,7,0,&DAT_00417d34);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  uVar3 = __vbaLateIdCallLd(local_48,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar10);
  piVar6 = (int *)__vbaObjSet(&local_34,uVar3);
  iVar5 = (**(code **)(*(int *)piVar9[0xd] + 0x4c))((int *)piVar9[0xd],&local_2c);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar9[0xd],&LAB_00414228,0x4c);
  }
  piVar4 = local_2c;
  iVar5 = (**(code **)(*local_2c + 0x1c))(local_2c,local_20);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&LAB_004133e8,0x1c);
  }
  local_50 = local_20[0];
  local_20[0] = 0;
  local_58[0] = 8;
  iVar5 = (**(code **)(*piVar6 + 0x24))(piVar6,local_58,&local_38);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417d34,0x24);
  }
  piVar6 = local_38;
  iVar5 = (**(code **)(*local_38 + 0xa0))(local_38,local_ac);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417d44,0xa0);
  }
  sVar1 = (short)local_ac[0];
  __vbaFreeObjList(4,&local_2c,&local_30,&local_34,&local_38);
  __vbaFreeVarList(2,local_48,local_58);
  if (sVar1 != -1) {
    iVar5 = (**(code **)(*(int *)piVar9[0xd] + 0x4c))((int *)piVar9[0xd],&local_2c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar9[0xd],&LAB_00414228,0x4c);
    }
    piVar6 = local_2c;
    iVar5 = (**(code **)(*local_2c + 0x58))(local_2c,&local_30);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&LAB_004133e8,0x58);
    }
    piVar6 = local_30;
    iVar5 = (**(code **)(*local_30 + 0x30))(local_30,local_20);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00414258,0x30);
    }
    local_70 = 0x80020004;
    local_60 = 0x80020004;
    local_78[0] = 10;
    local_68[0] = 10;
    local_80 = L"CTP Editor";
    local_88 = 8;
    __vbaVarDup();
    (*pcVar8)(local_20[0],L"You have selected to use the default ");
    uVar3 = (*pcVar7)();
    (*pcVar8)(&LAB_004143c4,uVar3);
    uVar3 = (*pcVar7)();
    local_40 = (*pcVar8)(L"This is inadvisable.  Proceed?",uVar3);
    local_48[0] = 8;
    iVar5 = rtcMsgBox(local_48,4,local_58,local_68,local_78);
    __vbaFreeStrList(3,local_20,&local_24,&local_28);
    __vbaFreeObjList(2,&local_2c,&local_30);
    __vbaFreeVarList(4,local_48,local_58,local_68,local_78);
    if (iVar5 == 7) {
      *param_2 = 0xffff;
      return;
    }
  }
  (**(code **)(*piVar9 + 0x6f8))(piVar9);
  uVar3 = __vbaCastObj(0,&LAB_00414228);
  uVar3 = __vbaObjSet(&local_2c,uVar3);
  __vbaObjSetAddref(piVar9 + 0xd,uVar3);
  __vbaFreeObj();
  uVar3 = __vbaCastObj(0,&DAT_004146ac);
  uVar3 = __vbaObjSet(&local_2c,uVar3);
  __vbaObjSetAddref(piVar9 + 0xe,uVar3);
  __vbaFreeObj();
  return;
}

/* ---- 0x4430c0 (FUN_004430c0) [estimated] strings:  ---- */
void __cdecl FUN_004430c0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_4c [2];
  undefined4 local_44;
  undefined4 local_3c [4];
  int *local_2c;
  int *local_28;
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
  local_10 = &stack0xffffff80;
  local_c = &DAT_00402220;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_3c[0] = 0;
  local_4c[0] = 0;
  iVar2 = (**(code **)(*(int *)piVar4[0xd] + 0x44))((int *)piVar4[0xd],&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4[0xd],&LAB_00414228,0x44);
  }
  piVar1 = local_28;
  uVar5 = 0;
  uVar3 = (**(code **)(*piVar4 + 800))(piVar4,0xd,0,&DAT_00417d44);
  uVar3 = __vbaObjSet(&local_20,uVar3);
  uVar3 = __vbaLateIdCallLd(local_3c,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar5);
  piVar4 = (int *)__vbaObjSet(&local_24,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x4c))(piVar4,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d44,0x4c);
  }
  local_44 = local_1c;
  local_1c = 0;
  local_4c[0] = 8;
  iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,local_4c,&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414238,0x24);
  }
  piVar4 = local_2c;
  iVar2 = (**(code **)(*local_2c + 0x7c))(local_2c,param_3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&LAB_004133e8,0x7c);
  }
  __vbaFreeObjList(4,&local_20,&local_24,&local_28,&local_2c);
  __vbaFreeVarList(2,local_3c,local_4c);
  return;
}

/* ---- 0x443280 (FUN_00443280) [estimated] strings: _; You may not put a \'_\' in your prefix ---- */
void __cdecl FUN_00443280(uint param_1,undefined4 param_2)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uStack_2c4;
  undefined4 in_stack_fffffd44;
  undefined4 uStack_2b4;
  undefined4 uStack_2ac;
  undefined4 uStack_2a4;
  undefined4 uStack_29c;
  undefined4 in_stack_fffffd6c;
  undefined4 uVar7;
  undefined4 in_stack_fffffd74;
  undefined4 uStack_258;
  code *pcStack_254;
  int *piStack_250;
  undefined4 uStack_214;
  undefined4 uStack_210;
  int *piStack_20c;
  int *piStack_1fc;
  int *piStack_1f8;
  int *piStack_1f4;
  undefined4 uStack_1b8;
  wchar_t *pwStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 auStack_178 [2];
  undefined4 uStack_170;
  int *piStack_168;
  int *piStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int *piStack_144;
  int *piStack_140;
  int *piStack_13c;
  int *piStack_138;
  int *piStack_134;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_128;
  int *piStack_124;
  int *piStack_120;
  int *piStack_11c;
  int *piStack_118;
  int *piStack_114;
  int *piStack_110;
  int *piStack_10c;
  int *piStack_108;
  int *piStack_104;
  int *piStack_100;
  int *piStack_fc;
  int **ppiStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  undefined4 *puStack_e8;
  int *piStack_e4;
  undefined4 *puStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int *piStack_d4;
  undefined4 local_90;
  undefined4 local_8c [5];
  undefined4 local_78;
  int local_68 [2];
  undefined4 local_60;
  int local_58 [2];
  undefined4 local_50;
  int local_48 [2];
  undefined4 local_40;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff30;
  local_c = &DAT_00402230;
  local_8 = param_1 & 1;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  ppiStack_d8 = (int **)0x4432c3;
  ExceptionList = &pvStack_18;
  piStack_d4 = piVar6;
  (**(code **)(*piVar6 + 4))();
  ppiStack_dc = &local_24;
  ppiStack_d8 = (int **)param_2;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = (int *)0x0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78 = 0;
  local_8c[0] = 0;
  local_90 = 0;
  puStack_e0 = (undefined4 *)0x443303;
  __vbaObjSetAddref();
  ppiStack_dc = (int **)piVar6[0xd];
  ppiStack_d8 = &local_34;
  puStack_e0 = (undefined4 *)0x443310;
  iVar3 = (**(code **)((int)*ppiStack_dc + 0x44))();
  pcVar1 = __vbaHresultCheckObj_exref;
  if (iVar3 < 0) {
    puStack_e8 = (undefined4 *)piVar6[0xd];
    puStack_e0 = (undefined4 *)0x44;
    piStack_e4 = (int *)&LAB_00414228;
    piStack_f0 = (int *)0x44332a;
    piStack_ec = (int *)iVar3;
    __vbaHresultCheckObj();
  }
  piVar4 = local_34;
  puStack_e0 = &local_28;
  piStack_e4 = local_24;
  puStack_e8 = (undefined4 *)0x443342;
  piStack_f4 = (int *)(**(code **)(*local_24 + 0x4c))();
  if ((int)piStack_f4 < 0) {
    puStack_e8 = (undefined4 *)0x4c;
    piStack_ec = (int *)&DAT_00417d44;
    piStack_f0 = local_24;
    ppiStack_f8 = (int **)0x443356;
    __vbaHresultCheckObj();
  }
  local_40 = local_28;
  puStack_e8 = &local_38;
  piStack_ec = local_48;
  local_28 = 0;
  local_48[0] = 8;
  piStack_f0 = piVar4;
  piStack_f4 = (int *)0x443378;
  iVar3 = (**(code **)(*piVar4 + 0x24))();
  if (iVar3 < 0) {
    piStack_f4 = (int *)0x24;
    ppiStack_f8 = (int **)&DAT_00414238;
    piStack_fc = piVar4;
    piStack_104 = (int *)0x443389;
    piStack_100 = (int *)iVar3;
    __vbaHresultCheckObj();
  }
  piStack_f4 = (int *)local_38;
  local_38 = 0;
  ppiStack_f8 = &local_20;
  piStack_fc = (int *)0x44339e;
  __vbaObjSet();
  piStack_f4 = (int *)0x4433a7;
  __vbaFreeObj();
  piStack_f4 = (int *)0x4433b0;
  __vbaFreeVar();
  piStack_f0 = local_8c;
  piStack_f4 = local_24;
  ppiStack_f8 = (int **)0x4433c3;
  iVar3 = (**(code **)(*local_24 + 0xa0))();
  if (iVar3 < 0) {
    ppiStack_f8 = (int **)0xa0;
    piStack_fc = (int *)&DAT_00417d44;
    piStack_100 = local_24;
    piStack_108 = (int *)0x4433dc;
    piStack_104 = (int *)iVar3;
    __vbaHresultCheckObj();
  }
  local_90 = local_8c[0];
  ppiStack_f8 = (int **)&local_90;
  piStack_fc = local_20;
  piStack_100 = (int *)0x4433f8;
  iVar3 = (**(code **)(*local_20 + 0x50))();
  if (iVar3 < 0) {
    piStack_100 = (int *)0x50;
    piStack_104 = (int *)&LAB_004133e8;
    piStack_108 = local_20;
    piStack_110 = (int *)0x44340c;
    piStack_10c = (int *)iVar3;
    __vbaHresultCheckObj();
  }
  piStack_100 = (int *)0x0;
  piStack_104 = local_20;
  piStack_108 = (int *)0x443416;
  iVar3 = (**(code **)(*local_20 + 0x30))();
  if (iVar3 < 0) {
    piStack_108 = (int *)0x30;
    piStack_10c = (int *)&LAB_004133e8;
    piStack_110 = local_20;
    piStack_118 = (int *)0x44342a;
    piStack_114 = (int *)iVar3;
    __vbaHresultCheckObj();
  }
  piStack_108 = local_8c;
  piStack_10c = local_24;
  piStack_110 = (int *)0x44343d;
  iVar3 = (**(code **)(*local_24 + 0xa0))();
  if (iVar3 < 0) {
    piStack_110 = (int *)0xa0;
    piStack_114 = (int *)&DAT_00417d44;
    piStack_118 = local_24;
    piStack_120 = (int *)0x443454;
    piStack_11c = (int *)iVar3;
    __vbaHresultCheckObj();
  }
  if ((short)local_8c[0] == 0) {
    piStack_110 = &local_28;
    piStack_114 = local_24;
    piStack_118 = (int *)0x4435a5;
    iVar3 = (**(code **)(*local_24 + 0x24))();
    if (iVar3 < 0) {
      piStack_118 = (int *)0x24;
      piStack_11c = (int *)&DAT_00417d44;
      piStack_120 = local_24;
      piStack_128 = (int *)0x4435b9;
      piStack_124 = (int *)iVar3;
      __vbaHresultCheckObj();
    }
    piStack_11c = (int *)piVar6[0xd];
    piStack_118 = &local_2c;
    piStack_120 = (int *)0x4435c6;
    piVar4 = (int *)(**(code **)(*piStack_11c + 0x24))();
    if ((int)piVar4 < 0) {
      piStack_128 = (int *)piVar6[0xd];
      piStack_120 = (int *)0x24;
      piStack_124 = (int *)&LAB_00414228;
      piStack_130 = (undefined4 *)0x4435da;
      piStack_12c = piVar4;
      __vbaHresultCheckObj();
    }
    local_40 = local_28;
    piStack_120 = (int *)local_2c;
    local_28 = 0;
    local_48[0] = 8;
    piStack_124 = (int *)0x4435f4;
    piStack_120 = (int *)__vbaLenBstr();
    piStack_124 = local_48;
    piStack_128 = local_58;
    piStack_12c = (int *)0x443603;
    rtcLeftCharVar();
    piStack_124 = (int *)piVar6[0xd];
    piStack_120 = &local_30;
    piStack_128 = (int *)0x443610;
    piVar4 = (int *)(**(code **)(*piStack_124 + 0x24))();
    if ((int)piVar4 < 0) {
      piStack_120 = (int *)piVar6[0xd];
      piStack_118 = (int *)0x24;
      piStack_11c = (int *)&LAB_00414228;
      piStack_128 = (int *)0x443624;
      piStack_124 = piVar4;
      __vbaHresultCheckObj();
    }
    piStack_11c = local_68;
    local_60 = local_30;
    piStack_118 = local_58;
    local_30 = 0;
    local_68[0] = 0x8008;
    piStack_120 = (int *)0x443642;
    sVar2 = __vbaVarTstEq();
    piStack_118 = (int *)0x44364d;
    __vbaFreeStr();
    piStack_118 = local_68;
    piStack_11c = local_58;
    piStack_120 = local_48;
    piStack_124 = (int *)0x3;
    piStack_128 = (int *)0x443661;
    __vbaFreeVarList();
    if (sVar2 == 0) goto LAB_004437a5;
    piStack_118 = &local_28;
    piStack_11c = local_24;
    piStack_120 = (int *)0x44367a;
    piVar4 = (int *)(**(code **)(*local_24 + 0x24))();
    if ((int)piVar4 < 0) {
      piStack_120 = (int *)0x24;
      piStack_124 = (int *)&DAT_00417d44;
      piStack_128 = local_24;
      piStack_130 = (undefined4 *)0x443690;
      piStack_12c = piVar4;
      __vbaHresultCheckObj();
    }
    piStack_124 = (int *)piVar6[0xd];
    piStack_120 = &local_2c;
    piStack_128 = (int *)0x44369d;
    piVar4 = (int *)(**(code **)(*piStack_124 + 0x24))();
    if ((int)piVar4 < 0) {
      piStack_130 = (int *)piVar6[0xd];
      piStack_128 = (int *)0x24;
      piStack_12c = (int *)&LAB_00414228;
      piStack_138 = (int *)0x4436b1;
      piStack_134 = piVar4;
      __vbaHresultCheckObj();
    }
    piStack_128 = local_58;
    local_40 = local_28;
    piStack_12c = (int *)local_2c;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_28 = 0;
    local_48[0] = 8;
    piStack_130 = (int *)0x4436dd;
    iVar3 = __vbaLenBstr();
    piStack_12c = (int *)(iVar3 + 1);
    if (SCARRY4(iVar3,1)) {
      piStack_12c = (int *)0x44382e;
      __vbaErrorOverflow();
      piStack_138 = (int *)&LAB_004032d6;
      piStack_13c = ExceptionList;
      pcStack_254 = pcVar1;
      piStack_134 = &uStack_258;
      uStack_258 = 0;
      piStack_130 = (int *)&DAT_00402240;
      piStack_12c = (int *)((uint)piStack_120 & 1);
      piVar4 = (int *)((uint)piStack_120 & 0xfffffffe);
      ExceptionList = &piStack_13c;
      piStack_250 = piVar6;
      piStack_128 = (int *)&stack0xfffffffc;
      piStack_120 = piVar4;
      (**(code **)(*piVar4 + 4))();
      piStack_140 = (int *)0x0;
      piStack_144 = (int *)0x0;
      uStack_148 = 0;
      uStack_14c = 0;
      uStack_150 = 0;
      uStack_154 = 0;
      uStack_158 = 0;
      uStack_15c = 0;
      uStack_160 = 0;
      piStack_164 = (int *)0x0;
      piStack_168 = (int *)0x0;
      auStack_178[0] = 0;
      uStack_188 = 0;
      uStack_198 = 0;
      uStack_1a8 = 0;
      uStack_1b8 = 0;
      piStack_20c = (int *)0x0;
      uStack_210 = 0;
      uStack_214 = 0;
      __vbaObjSetAddref();
      uStack_170 = (**(code **)(*piVar4 + 0x30c))();
      auStack_178[0] = 9;
      pwStack_1b0 = L"_";
      uStack_1b8 = 8;
      __vbaInStrVar();
      sVar2 = __vbaBoolVarNull();
      __vbaFreeVarList();
      if (sVar2 != 0) {
        uStack_1a0 = 0x80020004;
        uStack_190 = 0x80020004;
        uStack_180 = 0x80020004;
        uStack_1a8 = 10;
        uStack_198 = 10;
        uStack_188 = 10;
        pwStack_1b0 = L"You may not put a \'_\' in your prefix";
        uStack_1b8 = 8;
        __vbaVarDup();
        rtcMsgBox();
        __vbaFreeVarList();
        iVar3 = (**(code **)(*piStack_20c + 0x24))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        (**(code **)(*piVar4 + 0x30c))();
        piVar6 = (int *)__vbaObjSet();
        piStack_1f4 = piVar6;
        iVar3 = (**(code **)(*piStack_20c + 0x24))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        uStack_170 = uStack_148;
        uStack_148 = 0;
        auStack_178[0] = 8;
        iVar3 = __vbaLenBstr();
        if (SBORROW4(iVar3,1)) {
          __vbaErrorOverflow();
          ExceptionList = &stack0xfffffd7c;
          iVar3 = (**(code **)(*piVar4 + 0x2a8))(piVar4);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar4,&DAT_00415924,0x2a8);
          }
          uVar7 = 0x80020004;
          if (DAT_0047f074 == (int *)0x0) {
            __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
          }
          iVar3 = *piVar4;
          uVar7 = (**(code **)(*DAT_0047f074 + 0x394))
                            (DAT_0047f074,10,in_stack_fffffd6c,uVar7,in_stack_fffffd74,10,uStack_2a4
                             ,0x80020004,uStack_29c,10,uStack_2b4,0x80020004,uStack_2ac,10,
                             uStack_2c4,0x80020004,in_stack_fffffd44);
          uVar7 = __vbaObjSet(&stack0xfffffd78,uVar7);
          iVar3 = (**(code **)(iVar3 + 700))(piVar4,uVar7);
          if (iVar3 < 0) {
            __vbaHresultCheckObj(iVar3,piVar4,&DAT_00415924,700);
          }
          __vbaFreeObj();
          return;
        }
        rtcLeftCharVar();
        iVar3 = *piVar6;
        __vbaStrVarVal();
        iVar3 = (**(code **)(iVar3 + 0xa4))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        __vbaFreeStrList();
        __vbaFreeObj();
        __vbaFreeVarList();
      }
      (**(code **)(*piVar4 + 0x30c))();
      piVar6 = (int *)__vbaObjSet();
      iVar3 = (**(code **)(*piVar6 + 0xa0))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaStrCat();
      __vbaStrMove();
      __vbaFreeStr();
      __vbaFreeObj();
      (**(code **)(*piVar4 + 800))();
      __vbaObjSet();
      __vbaLateIdCallLd();
      __vbaCastObjVar();
      __vbaObjSet();
      iVar3 = __vbaForEachCollObj();
      __vbaFreeObj();
      __vbaFreeVar();
      while (iVar3 != 0) {
        iVar3 = (**(code **)(*piStack_140 + 0x24))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        iVar3 = (**(code **)(*piStack_20c + 0x24))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        uStack_14c = 0;
        __vbaStrMove();
        uStack_148 = 0;
        __vbaStrMove();
        FUN_00440ab0(auStack_178,&uStack_150,&uStack_154);
        iVar3 = *piStack_140;
        __vbaStrVarVal();
        iVar3 = (**(code **)(iVar3 + 0x28))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        __vbaFreeStrList();
        __vbaFreeVar();
        iVar3 = (**(code **)(*(int *)piVar4[0xd] + 0x44))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        piStack_1fc = piStack_164;
        (**(code **)(*piVar4 + 800))();
        __vbaObjSet();
        __vbaLateIdCallLd();
        __vbaCastObjVar();
        piVar6 = (int *)__vbaObjSet();
        iVar3 = (**(code **)(*piVar6 + 0x4c))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        uStack_180 = uStack_14c;
        uStack_14c = 0;
        uStack_188 = 8;
        iVar3 = (**(code **)(*piStack_1fc + 0x24))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        piVar6 = piStack_168;
        iVar3 = (**(code **)(*piStack_140 + 0x24))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        uStack_148 = 0;
        __vbaStrMove();
        iVar3 = (**(code **)(*piVar6 + 0x7c))();
        if (iVar3 < 0) {
          __vbaHresultCheckObj();
        }
        __vbaFreeStr();
        __vbaFreeObjList();
        __vbaFreeVarList();
        iVar3 = __vbaNextEachCollObj();
      }
      (**(code **)(*piVar4 + 0x304))();
      piVar6 = (int *)__vbaObjSet();
      iVar3 = (**(code **)(*piVar6 + 0xa0))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      iVar3 = (**(code **)(*piStack_20c + 0x24))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      (**(code **)(*piVar4 + 0x304))();
      piVar6 = (int *)__vbaObjSet();
      uStack_148 = 0;
      piStack_1f8 = piVar6;
      __vbaStrMove();
      uStack_14c = 0;
      __vbaStrMove();
      FUN_00440ab0(auStack_178,&uStack_150,&uStack_154);
      iVar3 = *piVar6;
      __vbaStrVarVal();
      iVar3 = (**(code **)(iVar3 + 0xa4))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaFreeStrList();
      __vbaFreeObjList();
      __vbaFreeVar();
      (**(code **)(*piVar4 + 0x2fc))();
      piVar6 = (int *)__vbaObjSet();
      iVar3 = (**(code **)(*piVar6 + 0xa0))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      iVar3 = (**(code **)(*piStack_20c + 0x24))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      (**(code **)(*piVar4 + 0x2fc))();
      piVar6 = (int *)__vbaObjSet();
      uStack_148 = 0;
      __vbaStrMove();
      uStack_14c = 0;
      __vbaStrMove();
      FUN_00440ab0(auStack_178,&uStack_150,&uStack_154);
      iVar3 = *piVar6;
      __vbaStrVarVal();
      iVar3 = (**(code **)(iVar3 + 0xa4))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaFreeStrList();
      __vbaFreeObjList(2);
      __vbaFreeVar();
      iVar3 = (**(code **)(*piStack_20c + 0x28))();
      if (iVar3 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaObjSetAddref();
      piStack_12c = (int *)0x0;
      __vbaFreeObjList();
      __vbaFreeObj();
      __vbaFreeStr();
      return;
    }
    piStack_134 = local_68;
    piStack_138 = (int *)0x4436f5;
    piStack_130 = local_48;
    rtcMidCharVar();
    piStack_128 = local_68;
    piStack_12c = &local_30;
    iVar3 = *local_24;
    piStack_130 = (int *)0x443708;
    piStack_128 = (int *)__vbaStrVarVal();
    piStack_12c = local_24;
    piStack_130 = (int *)0x443710;
    piStack_13c = (int *)(**(code **)(iVar3 + 0x28))();
    if ((int)piStack_13c < 0) {
      piStack_130 = (int *)0x28;
      piStack_134 = (int *)&DAT_00417d44;
      piStack_138 = local_24;
      piStack_140 = (int *)0x443724;
      __vbaHresultCheckObj();
    }
    piStack_130 = &local_30;
    piStack_134 = &local_2c;
    piStack_138 = (int *)0x2;
    piStack_13c = (int *)0x443734;
    __vbaFreeStrList();
    piStack_13c = local_68;
    piStack_140 = local_58;
    piStack_144 = local_48;
    uStack_148 = 3;
    uStack_14c = 0x443748;
    __vbaFreeVarList();
    piStack_130 = &local_28;
    piStack_134 = local_24;
    piStack_138 = (int *)0x443758;
    piVar6 = (int *)(**(code **)(*local_24 + 0x24))();
    if ((int)piVar6 < 0) {
      piStack_138 = (int *)0x24;
      piStack_13c = (int *)&DAT_00417d44;
      piStack_140 = local_24;
      uStack_148 = 0x44376c;
      piStack_144 = piVar6;
      __vbaHresultCheckObj();
    }
    local_28 = 0;
    piStack_138 = (int *)0x44377b;
    __vbaStrMove();
    piStack_138 = &local_2c;
    piStack_13c = local_20;
    piStack_140 = (int *)0x443788;
    piVar5 = (int *)(**(code **)(*local_20 + 0x7c))();
    piVar6 = piStack_124;
    piVar4 = piStack_120;
    piStack_120 = local_20;
  }
  else {
    piStack_110 = &local_28;
    piStack_114 = local_24;
    piStack_118 = (int *)0x44346e;
    piStack_124 = (int *)(**(code **)(*local_24 + 0x24))();
    if ((int)piStack_124 < 0) {
      piStack_118 = (int *)0x24;
      piStack_11c = (int *)&DAT_00417d44;
      piStack_120 = local_24;
      piStack_128 = (int *)0x443482;
      __vbaHresultCheckObj();
    }
    piStack_118 = (int *)0x1;
    piStack_11c = (int *)local_28;
    piStack_120 = (int *)&DAT_0041439c /* bstr: '_' */;
    piStack_124 = (int *)0x0;
    piStack_128 = (int *)0x443494;
    iVar3 = __vbaInStr();
    piStack_118 = (int *)0x4434a6;
    __vbaFreeStr();
    if (iVar3 != 0) goto LAB_004437a5;
    piStack_11c = (int *)piVar6[0xd];
    piStack_118 = &local_28;
    piStack_120 = (int *)0x4434bc;
    piVar4 = (int *)(**(code **)(*piStack_11c + 0x24))();
    if ((int)piVar4 < 0) {
      piStack_128 = (int *)piVar6[0xd];
      piStack_120 = (int *)0x24;
      piStack_124 = (int *)&LAB_00414228;
      piStack_130 = (undefined4 *)0x4434d0;
      piStack_12c = piVar4;
      __vbaHresultCheckObj();
    }
    piStack_120 = &local_2c;
    piStack_124 = local_24;
    piStack_128 = (int *)0x4434dd;
    piVar6 = (int *)(**(code **)(*local_24 + 0x24))();
    if ((int)piVar6 < 0) {
      piStack_128 = (int *)0x24;
      piStack_12c = (int *)&DAT_00417d44;
      piStack_130 = local_24;
      piStack_138 = (int *)0x4434f1;
      piStack_134 = piVar6;
      __vbaHresultCheckObj();
    }
    piStack_128 = (int *)local_28;
    iVar3 = *local_24;
    piStack_12c = (int *)local_2c;
    piStack_130 = (int *)0x443504;
    __vbaStrCat();
    piStack_128 = (int *)0x443511;
    piStack_128 = (int *)__vbaStrMove();
    piStack_12c = local_24;
    piStack_130 = (int *)0x443519;
    piStack_13c = (int *)(**(code **)(iVar3 + 0x28))();
    if ((int)piStack_13c < 0) {
      piStack_130 = (int *)0x28;
      piStack_134 = (int *)&DAT_00417d44;
      piStack_138 = local_24;
      piStack_140 = (int *)0x44352d;
      __vbaHresultCheckObj();
    }
    piStack_130 = &local_30;
    piStack_134 = &local_2c;
    piStack_138 = &local_28;
    piStack_13c = (int *)0x3;
    piStack_140 = (int *)0x443541;
    __vbaFreeStrList();
    piStack_130 = &local_28;
    piStack_134 = local_24;
    piStack_138 = (int *)0x443551;
    piVar6 = (int *)(**(code **)(*local_24 + 0x24))();
    if ((int)piVar6 < 0) {
      piStack_138 = (int *)0x24;
      piStack_13c = (int *)&DAT_00417d44;
      piStack_140 = local_24;
      uStack_148 = 0x443565;
      piStack_144 = piVar6;
      __vbaHresultCheckObj();
    }
    local_28 = 0;
    piStack_138 = (int *)0x443574;
    __vbaStrMove();
    piStack_138 = &local_2c;
    piStack_13c = local_20;
    piStack_140 = (int *)0x443581;
    piVar5 = (int *)(**(code **)(*local_20 + 0x7c))();
    piVar6 = piStack_124;
    piVar4 = piStack_120;
    piStack_120 = local_20;
  }
  piStack_124 = piVar5;
  local_20 = piStack_120;
  if ((int)piStack_124 < 0) {
    piStack_118 = (int *)0x7c;
    piStack_11c = (int *)&LAB_004133e8;
    piStack_128 = (int *)0x44379c;
    __vbaHresultCheckObj();
    piVar6 = piStack_124;
    piVar4 = piStack_120;
  }
  piStack_120 = piVar4;
  piStack_124 = piVar6;
  piStack_118 = (int *)0x4437a5;
  __vbaFreeStr();
LAB_004437a5:
  local_8 = 0;
  piStack_118 = (int *)&LAB_00443809;
  piStack_11c = (int *)0x4437fe;
  __vbaFreeObj();
  piStack_11c = (int *)0x443803;
  __vbaFreeObj();
  piStack_11c = (int *)0x443808;
  __vbaFreeObj();
  return;
}

/* ---- 0x443830 (FUN_00443830) [estimated] strings:  ---- */
void __cdecl FUN_00443830(uint param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_1a0;
  undefined4 in_stack_fffffe68;
  undefined4 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_178;
  undefined4 in_stack_fffffe90;
  undefined4 uVar6;
  undefined4 in_stack_fffffe98;
  undefined4 local_54 [2];
  undefined4 local_4c;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffecc;
  local_c = &DAT_00402240;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))();
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  local_54[0] = 0;
  __vbaObjSetAddref();
  local_4c = (**(code **)(*piVar5 + 0x30c))();
  local_54[0] = 9;
  __vbaInStrVar();
  sVar1 = __vbaBoolVarNull();
  __vbaFreeVarList();
  if (sVar1 != 0) {
    __vbaVarDup();
    rtcMsgBox();
    __vbaFreeVarList();
    iVar2 = (**(code **)(iRam00000000 + 0x24))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    (**(code **)(*piVar5 + 0x30c))();
    piVar3 = (int *)__vbaObjSet();
    iVar2 = (**(code **)(iRam00000000 + 0x24))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    local_4c = local_24;
    local_24 = 0;
    local_54[0] = 8;
    iVar2 = __vbaLenBstr();
    if (SBORROW4(iVar2,1)) {
      __vbaErrorOverflow();
      ExceptionList = &stack0xfffffea0;
      iVar2 = (**(code **)(*piVar5 + 0x2a8))(piVar5);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00415924,0x2a8);
      }
      uVar6 = 0x80020004;
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      iVar2 = *piVar5;
      uVar6 = (**(code **)(*DAT_0047f074 + 0x394))
                        (DAT_0047f074,10,in_stack_fffffe90,uVar6,in_stack_fffffe98,10,uStack_180,
                         0x80020004,uStack_178,10,uStack_190,0x80020004,uStack_188,10,uStack_1a0,
                         0x80020004,in_stack_fffffe68);
      uVar6 = __vbaObjSet(&stack0xfffffe9c,uVar6);
      iVar2 = (**(code **)(iVar2 + 700))(piVar5,uVar6);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00415924,700);
      }
      __vbaFreeObj();
      return;
    }
    rtcLeftCharVar();
    iVar2 = *piVar3;
    __vbaStrVarVal();
    iVar2 = (**(code **)(iVar2 + 0xa4))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeStrList();
    __vbaFreeObj();
    __vbaFreeVarList();
  }
  (**(code **)(*piVar5 + 0x30c))();
  piVar3 = (int *)__vbaObjSet();
  iVar2 = (**(code **)(*piVar3 + 0xa0))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaStrCat();
  __vbaStrMove();
  __vbaFreeStr();
  __vbaFreeObj();
  (**(code **)(*piVar5 + 800))();
  __vbaObjSet();
  __vbaLateIdCallLd();
  __vbaCastObjVar();
  __vbaObjSet();
  iVar2 = __vbaForEachCollObj();
  __vbaFreeObj();
  __vbaFreeVar();
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*local_1c + 0x24))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    iVar2 = (**(code **)(iRam00000000 + 0x24))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    local_28 = 0;
    __vbaStrMove();
    local_24 = 0;
    __vbaStrMove();
    FUN_00440ab0(local_54,&local_2c,&local_30);
    iVar2 = *local_1c;
    __vbaStrVarVal();
    iVar2 = (**(code **)(iVar2 + 0x28))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeStrList();
    __vbaFreeVar();
    iVar2 = (**(code **)(*(int *)piVar5[0xd] + 0x44))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    piVar3 = local_40;
    (**(code **)(*piVar5 + 800))();
    __vbaObjSet();
    __vbaLateIdCallLd();
    __vbaCastObjVar();
    piVar4 = (int *)__vbaObjSet();
    iVar2 = (**(code **)(*piVar4 + 0x4c))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    local_28 = 0;
    iVar2 = (**(code **)(*piVar3 + 0x24))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    piVar3 = local_44;
    iVar2 = (**(code **)(*local_1c + 0x24))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    local_24 = 0;
    __vbaStrMove();
    iVar2 = (**(code **)(*piVar3 + 0x7c))();
    if (iVar2 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeStr();
    __vbaFreeObjList();
    __vbaFreeVarList();
    iVar2 = __vbaNextEachCollObj();
  }
  (**(code **)(*piVar5 + 0x304))();
  piVar3 = (int *)__vbaObjSet();
  iVar2 = (**(code **)(*piVar3 + 0xa0))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  iVar2 = (**(code **)(iRam00000000 + 0x24))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  (**(code **)(*piVar5 + 0x304))();
  piVar3 = (int *)__vbaObjSet();
  local_24 = 0;
  __vbaStrMove();
  local_28 = 0;
  __vbaStrMove();
  FUN_00440ab0(local_54,&local_2c,&local_30);
  iVar2 = *piVar3;
  __vbaStrVarVal();
  iVar2 = (**(code **)(iVar2 + 0xa4))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaFreeStrList();
  __vbaFreeObjList();
  __vbaFreeVar();
  (**(code **)(*piVar5 + 0x2fc))();
  piVar3 = (int *)__vbaObjSet();
  iVar2 = (**(code **)(*piVar3 + 0xa0))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  iVar2 = (**(code **)(iRam00000000 + 0x24))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  (**(code **)(*piVar5 + 0x2fc))();
  piVar5 = (int *)__vbaObjSet();
  local_24 = 0;
  __vbaStrMove();
  local_28 = 0;
  __vbaStrMove();
  FUN_00440ab0(local_54,&local_2c,&local_30);
  iVar2 = *piVar5;
  __vbaStrVarVal();
  iVar2 = (**(code **)(iVar2 + 0xa4))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaFreeStrList();
  __vbaFreeObjList(2);
  __vbaFreeVar();
  iVar2 = (**(code **)(iRam00000000 + 0x28))();
  if (iVar2 < 0) {
    __vbaHresultCheckObj();
  }
  __vbaObjSetAddref();
  local_8 = 0;
  __vbaFreeObjList();
  __vbaFreeObj();
  __vbaFreeStr();
  return;
}

/* ---- 0x4440e0 (FUN_004440e0) [estimated] strings:  ---- */
void __cdecl FUN_004440e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff90;
  local_8 = &DAT_00402250;
  local_18 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*param_1 + 0x2a8))(param_1);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_00415924,0x2a8);
  }
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  iVar1 = *param_1;
  uVar2 = (**(code **)(*DAT_0047f074 + 0x394))
                    (DAT_0047f074,10,local_24,0x80020004,local_1c,10,local_34,0x80020004,local_2c,10
                     ,local_44,0x80020004,local_3c,10,local_54,0x80020004,local_4c);
  uVar2 = __vbaObjSet(&local_18,uVar2);
  iVar1 = (**(code **)(iVar1 + 700))(param_1,uVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1,&DAT_00415924,700);
  }
  __vbaFreeObj();
  return;
}

/* ---- 0x444240 (FUN_00444240) [estimated] strings:  ---- */
void __cdecl FUN_00444240(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 local_104;
  undefined4 local_100 [8];
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0 [13];
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_8c [2];
  undefined4 local_84;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffed4;
  local_c = &DAT_00402260;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_8c[0] = 0;
  local_9c[0] = 0;
  local_d0[0] = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_100[0] = 0;
  local_104 = 0;
  if (DAT_0047f074 == (int *)0x0) {
    __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
  }
  piVar5 = DAT_0047f074;
  iVar2 = (**(code **)(*DAT_0047f074 + 0x6f8))(DAT_0047f074,&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00413d78,0x6f8);
  }
  __vbaObjSetAddref(param_1 + 0x15,local_30);
  __vbaFreeObj();
  iVar2 = (**(code **)(*(int *)param_1[0x15] + 0x2c))((int *)param_1[0x15],&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x15],&LAB_00414228,0x2c);
  }
  iVar2 = (**(code **)(*param_1 + 0x54))(param_1,local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1,&DAT_00415924,0x54);
  }
  __vbaFreeStr();
  uVar10 = 0;
  uVar3 = (**(code **)(*param_1 + 0x314))(param_1,7,0,&DAT_00417d34);
  uVar3 = __vbaObjSet(&local_30,uVar3);
  uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
  uVar3 = __vbaCastObjVar(uVar3,uVar10);
  piVar4 = (int *)__vbaObjSet(&local_34,uVar3);
  piVar5 = piVar4;
  iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,&local_e0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00417d34,0x1c);
  }
  local_1c = -(uint)(local_e0 == 0);
  __vbaFreeObjList(2,&local_30,&local_34);
  __vbaFreeVar(piVar5);
  iVar2 = (**(code **)(*(int *)param_1[0x15] + 0x44))((int *)param_1[0x15],&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,param_1[0x15],&LAB_00414228,0x44);
  }
  piVar5 = local_30;
  local_30 = (int *)0x0;
  uVar3 = __vbaObjSet(local_100,piVar5);
  iVar2 = __vbaForEachCollObj(&LAB_004133e8,&local_104,&local_20,uVar3);
  while (iVar2 != 0) {
    iVar2 = (**(code **)(*local_20 + 0x3c))(local_20,local_d0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x3c);
    }
    if ((short)local_d0[0] == 0) {
      iVar2 = (**(code **)(*local_20 + 0x24))(local_20,local_d0);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x24);
      }
      uVar3 = (**(code **)(*param_1 + 0x304))(param_1);
      piVar5 = (int *)__vbaObjSet(&local_30,uVar3);
      iVar2 = (**(code **)(*piVar5 + 0xe0))(piVar5,&local_d4);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00417e48,0xe0);
      }
      iVar2 = (**(code **)(*local_20 + 0x4c))(local_20,&local_d8);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x4c);
      }
      uVar3 = (**(code **)(*param_1 + 0x300))(param_1);
      piVar5 = (int *)__vbaObjSet(&local_34,uVar3);
      iVar2 = (**(code **)(*piVar5 + 0xe0))(piVar5,&local_dc);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00417e48,0xe0);
      }
      bVar6 = (short)local_dc == 1;
      bVar7 = (short)local_d8 == 0;
      bVar8 = (short)local_d4 == 1;
      uVar1 = (ushort)local_d0[0];
      __vbaFreeObjList(2,&local_30,&local_34);
      if ((ushort)(~-(ushort)(bVar7 && bVar6) & ~(-(ushort)bVar8 & uVar1)) != 0) {
        if ((short)local_1c == 0) {
          uVar10 = 0;
          uVar3 = (**(code **)(*param_1 + 0x314))(param_1,7,0,&DAT_00417d34);
          uVar3 = __vbaObjSet(&local_30,uVar3);
          uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
          uVar3 = __vbaCastObjVar(uVar3,uVar10);
          piVar5 = (int *)__vbaObjSet(&local_34,uVar3);
          iVar2 = (**(code **)(*local_20 + 0x1c))(local_20,&local_28);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x1c);
          }
          local_54 = local_28;
          local_28 = 0;
          local_5c[0] = 8;
          iVar2 = (**(code **)(*piVar5 + 0x24))(piVar5,local_5c,&local_38);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,piVar5,&DAT_00417d34,0x24);
          }
          uVar3 = __vbaCastObj(local_38,&DAT_00417d44);
          __vbaObjSet(&local_24,uVar3);
          __vbaFreeObjList(3,&local_30,&local_34,&local_38);
          __vbaFreeVarList(2,local_4c,local_5c);
        }
        else {
          iVar2 = (**(code **)(*local_20 + 0x1c))(local_20,&local_28);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x1c);
          }
          iVar2 = (**(code **)(*local_20 + 0x58))(local_20,&local_30);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x58);
          }
          piVar5 = local_30;
          iVar2 = (**(code **)(*local_30 + 0x30))(local_30,&local_2c);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,piVar5,&DAT_00414258,0x30);
          }
          uVar10 = 0;
          uVar3 = (**(code **)(*param_1 + 0x314))(param_1,7,0,&DAT_00417d34);
          uVar3 = __vbaObjSet(&local_34,uVar3);
          uVar3 = __vbaLateIdCallLd(local_4c,uVar3);
          uVar3 = __vbaCastObjVar(uVar3,uVar10);
          piVar5 = (int *)__vbaObjSet(&local_38,uVar3);
          local_64 = local_28;
          local_9c[0] = 10;
          local_8c[0] = 10;
          local_5c[0] = 10;
          local_94 = 0x80020004;
          local_84 = 0x80020004;
          local_54 = 0x80020004;
          local_74 = local_2c;
          local_2c = 0;
          local_7c[0] = 8;
          local_28 = 0;
          local_6c[0] = 8;
          iVar2 = (**(code **)(*piVar5 + 0x28))
                            (piVar5,local_5c,local_6c,local_7c,local_8c,local_9c,&local_3c);
          if (iVar2 < 0) {
            __vbaHresultCheckObj(iVar2,piVar5,&DAT_00417d34,0x28);
          }
          uVar3 = __vbaCastObj(local_3c,&DAT_00417d44);
          __vbaObjSet(&local_24,uVar3);
          __vbaFreeObjList(4,&local_30,&local_34,&local_38,&local_3c);
          __vbaFreeVarList(6,local_4c,local_5c,local_6c,local_7c,local_8c,local_9c);
        }
        iVar2 = (**(code **)(*local_20 + 0x58))(local_20,&local_30);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x58);
        }
        piVar5 = local_30;
        iVar2 = (**(code **)(*local_30 + 0x30))(local_30,&local_28);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,piVar5,&DAT_00414258,0x30);
        }
        iVar2 = (**(code **)(*local_24 + 0x28))(local_24,local_28);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_24,&DAT_00417d44,0x28);
        }
        __vbaFreeStr();
        __vbaFreeObj();
        iVar2 = (**(code **)(*local_20 + 0x4c))(local_20,local_d0);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_20,&LAB_004133e8,0x4c);
        }
        puVar9 = &local_d4;
        local_d4 = local_d0[0];
        iVar2 = *local_24;
        FUN_00440360();
        uVar3 = __vbaStrMove(puVar9);
        iVar2 = (**(code **)(iVar2 + 0x88))(local_24,1,uVar3);
        if (iVar2 < 0) {
          __vbaHresultCheckObj(iVar2,local_24,&DAT_00417d44,0x88);
        }
        __vbaFreeStr();
      }
    }
    iVar2 = __vbaNextEachCollObj(&LAB_004133e8,&local_104,&local_20);
  }
  __vbaFreeObjList(2,local_100,&local_104,&LAB_00444983);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}
