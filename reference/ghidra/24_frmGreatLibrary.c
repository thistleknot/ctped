/* Object #24 frmGreatLibrary -- ESTIMATED function range; public methods per VB header: Setup */
#include "ghidra_types.h"

/* ---- 0x463b80 (FUN_00463b80) [anchored] strings: No Great Library icon file specified; CTPEditor.frmGreatLibrary; CTP Editor; You cannot make major changes to the great library since  ---- */
void __cdecl
FUN_00463b80(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0 [6];
  undefined4 local_b8;
  undefined4 local_b4 [9];
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [4];
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
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
  local_10 = &stack0xffffff00;
  local_c = &DAT_00402b10;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = (int *)0x0;
  local_30 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80 = 0;
  local_90 = 0;
  local_b4[0] = 0;
  local_b8 = 0;
  local_d0[0] = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_dc = 0;
  __vbaObjSetAddref(param_1 + 0x11,*param_2);
  piVar5 = param_1 + 0xd;
  __vbaObjSetAddref(piVar5,*param_3);
  __vbaObjSetAddref(param_1 + 0x12,*param_4);
  uVar2 = (**(code **)(*param_1 + 0x374))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x1e8))(piVar3);
  pcVar6 = __vbaHresultCheckObj_exref;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_0041807c,0x1e8);
  }
  __vbaFreeObj();
  iVar4 = (**(code **)(*(int *)*piVar5 + 0x44))((int *)*piVar5,&local_2c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,*piVar5,&LAB_00414228,0x44);
  }
  piVar5 = local_2c;
  local_2c = (int *)0x0;
  uVar2 = __vbaObjSet(local_d0,piVar5);
  iVar4 = __vbaForEachCollObj(&LAB_004133e8,&local_d4,&local_1c,uVar2);
  while (iVar4 != 0) {
    iVar4 = (**(code **)(*local_1c + 0x70))(local_1c,&local_2c);
    if (iVar4 < 0) {
      (*pcVar6)(iVar4,local_1c,&LAB_004133e8,0x70);
    }
    piVar5 = local_2c;
    iVar4 = (**(code **)(*local_2c + 0x2c))(local_2c,local_b4);
    if (iVar4 < 0) {
      (*pcVar6)(iVar4,piVar5,&LAB_004133f8,0x2c);
    }
    sVar1 = (short)local_b4[0];
    __vbaFreeObj();
    if (sVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x374))(param_1);
      piVar5 = (int *)__vbaObjSet(&local_30,uVar2);
      local_78 = (wchar_t *)0x80020004;
      local_80 = 10;
      iVar4 = (**(code **)(*local_1c + 0x58))(local_1c,&local_2c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_1c,&LAB_004133e8,0x58);
      }
      piVar3 = local_2c;
      iVar4 = (**(code **)(*local_2c + 0x30))(local_2c,&local_20);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_00414258,0x30);
      }
      iVar4 = (**(code **)(*piVar5 + 0x1ec))(piVar5,local_20,local_80,local_7c,local_78,local_74);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&DAT_0041807c,0x1ec);
      }
      __vbaFreeStr();
      __vbaFreeObjList(2,&local_2c,&local_30);
      pcVar6 = __vbaHresultCheckObj_exref;
    }
    iVar4 = __vbaNextEachCollObj(&LAB_004133e8,&local_d4,&local_1c);
  }
  iVar4 = (**(code **)(*(int *)param_1[0xd] + 0x4c))((int *)param_1[0xd],&local_2c);
  if (iVar4 < 0) {
    (*pcVar6)(iVar4,param_1[0xd],&LAB_00414228,0x4c);
  }
  piVar5 = param_1 + 0xe;
  __vbaObjSetAddref(piVar5,local_2c);
  __vbaFreeObj();
  sVar1 = __vbaObjIs(*piVar5,0);
  pcVar6 = __vbaHresultCheckObj_exref;
  if (sVar1 != 0) {
    uVar2 = rtcErrObj();
    piVar3 = (int *)__vbaObjSet(&local_2c,uVar2);
    local_70[0] = 10;
    local_60[0] = 10;
    local_68 = 0x80020004;
    local_58 = 0x80020004;
    local_88 = L"No Great Library icon file specified";
    local_90 = 8;
    __vbaVarDup();
    local_78 = L"CTPEditor.frmGreatLibrary";
    local_80 = 8;
    __vbaVarDup();
    iVar4 = (**(code **)(*piVar3 + 0x44))(piVar3,0x41d,local_40,local_50,local_60,local_70);
    pcVar6 = __vbaHresultCheckObj_exref;
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00413af4,0x44);
    }
    __vbaFreeObj();
    __vbaFreeVarList(4,local_40,local_50,local_60,local_70);
  }
  iVar4 = (**(code **)(*(int *)*piVar5 + 0x4c))((int *)*piVar5,local_b4);
  if (iVar4 < 0) {
    (*pcVar6)(iVar4,*piVar5,&LAB_004133e8,0x4c);
  }
  if ((short)local_b4[0] == 0) {
    iVar4 = (**(code **)(*(int *)*piVar5 + 0x58))((int *)*piVar5,&local_2c);
    if (iVar4 < 0) {
      (*pcVar6)(iVar4,*piVar5,&LAB_004133e8,0x58);
    }
    piVar3 = local_2c;
    iVar4 = (**(code **)(*local_2c + 0x30))(local_2c,&local_20);
    if (iVar4 < 0) {
      (*pcVar6)(iVar4,piVar3,&DAT_00414258,0x30);
    }
    local_70[0] = 10;
    local_60[0] = 10;
    local_68 = 0x80020004;
    local_58 = 0x80020004;
    local_78 = L"CTP Editor";
    local_80 = 8;
    __vbaVarDup();
    __vbaStrCat(local_20,L"You cannot make major changes to the great library since ");
    uVar2 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar2);
    uVar2 = __vbaStrMove();
    local_38 = __vbaStrCat(L"is not editable.  Some changes may not take effect.",uVar2);
    local_40[0] = 8;
    rtcMsgBox(local_40,0,local_50,local_60,local_70);
    __vbaFreeStrList(3,&local_20,&local_24,&local_28);
    __vbaFreeObj();
    __vbaFreeVarList(4,local_40,local_50,local_60,local_70);
    pcVar6 = __vbaHresultCheckObj_exref;
  }
  piVar3 = (int *)*piVar5;
  iVar4 = (**(code **)(*piVar3 + 0x2c))(piVar3,local_b4);
  if (iVar4 < 0) {
    (*pcVar6)(iVar4,*piVar5,&LAB_004133e8,0x2c);
  }
  if ((short)local_b4[0] == 0) {
    iVar4 = (**(code **)(*(int *)param_1[0x11] + 0x34))((int *)param_1[0x11],local_b4);
    if (iVar4 < 0) {
      (*pcVar6)(iVar4,param_1[0x11],&DAT_00415000,0x34);
    }
    uVar2 = __vbaCastObj(0,&DAT_0041462c);
    __vbaObjSet(&local_2c,uVar2);
    local_b8 = local_b4[0];
    iVar4 = (**(code **)(*(int *)*piVar5 + 0x88))((int *)*piVar5,param_1 + 0xd,&local_b8,&local_2c);
    if (iVar4 < 0) {
      (*pcVar6)(iVar4,*piVar5,&LAB_004133e8,0x88);
    }
    __vbaFreeObj();
  }
  sVar1 = __vbaObjIs(*param_5,0);
  if (sVar1 == 0) {
    uVar2 = __vbaCastObj(*param_5,&DAT_00418c2c);
    uVar2 = __vbaObjSet(&local_2c,uVar2);
    __vbaObjSetAddref(param_1 + 0x10,uVar2);
    __vbaFreeObj();
    puVar7 = &LAB_004133e8;
    uVar2 = __vbaLateMemCallLd(local_40,param_1[0x10],L"File",0,&LAB_004133e8);
    uVar2 = __vbaCastObjVar(uVar2,puVar7);
    uVar2 = __vbaObjSet(&local_2c,uVar2);
    __vbaObjSetAddref(param_1 + 0xf,uVar2);
    __vbaFreeObj();
    __vbaFreeVar(piVar3);
  }
  else {
    sVar1 = __vbaObjIs(*param_6,0);
    if (sVar1 == 0) {
      __vbaObjSetAddref(param_1 + 0xf,*param_6);
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      piVar5 = DAT_0047f074;
      iVar4 = (**(code **)(*DAT_0047f074 + 0x728))(DAT_0047f074,param_1 + 0xf,&local_2c);
    }
    else {
      iVar4 = (**(code **)(*(int *)param_1[0xd] + 0x44))((int *)param_1[0xd],&local_2c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,param_1[0xd],&LAB_00414228,0x44);
      }
      piVar5 = local_2c;
      local_2c = (int *)0x0;
      uVar2 = __vbaObjSet(&local_d8,piVar5);
      iVar4 = __vbaForEachCollObj(&LAB_004133e8,&local_dc,&local_1c,uVar2);
      while (iVar4 != 0) {
        iVar4 = (**(code **)(*local_1c + 0x70))(local_1c,&local_2c);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,local_1c,&LAB_004133e8,0x70);
        }
        piVar5 = local_2c;
        iVar4 = (**(code **)(*local_2c + 0x2c))(local_2c,local_b4);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5,&LAB_004133f8,0x2c);
        }
        sVar1 = (short)local_b4[0];
        __vbaFreeObj();
        if (sVar1 != 0) {
          __vbaObjSetAddref(param_1 + 0xf,local_1c);
          __vbaExitEachColl(&local_dc);
          break;
        }
        iVar4 = __vbaNextEachCollObj(&LAB_004133e8,&local_dc,&local_1c);
      }
      if (DAT_0047f074 == (int *)0x0) {
        __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
      }
      piVar5 = DAT_0047f074;
      iVar4 = (**(code **)(*DAT_0047f074 + 0x728))(DAT_0047f074,param_1 + 0xf,&local_2c);
    }
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00413d78,0x728);
    }
    uVar2 = __vbaCastObj(local_2c,&DAT_00418c2c);
    uVar2 = __vbaObjSet(&local_30,uVar2);
    __vbaObjSetAddref(param_1 + 0x10,uVar2);
    __vbaFreeObjList(2,&local_2c,&local_30);
  }
  uVar2 = (**(code **)(*param_1 + 0x374))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_30,uVar2);
  piVar5 = (int *)param_1[0xf];
  iVar4 = (**(code **)(*piVar5 + 0x58))(piVar5,&local_2c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,param_1[0xf],&LAB_004133e8,0x58);
  }
  piVar5 = local_2c;
  iVar4 = (**(code **)(*local_2c + 0x30))(local_2c,&local_20);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00414258,0x30);
  }
  iVar4 = (**(code **)(*piVar3 + 0xac))(piVar3,local_20);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_0041807c,0xac);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_2c,&local_30);
  __vbaFreeObjList(4,local_d0,&local_d4,&local_d8,&local_dc,&LAB_00464490);
  __vbaFreeObj();
  return;
}

/* ---- 0x4644b0 (FUN_004644b0) [estimated] strings:  ---- */
void __cdecl FUN_004644b0(int *****param_1)

{
  int *******pppppppiVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int ********ppppppppiVar5;
  int ********ppppppppiVar6;
  int *********pppppppppiVar7;
  int ****ppppiVar8;
  int *******pppppppiVar9;
  int *piVar10;
  undefined4 uVar11;
  int *********unaff_EBX;
  code *pcVar12;
  int *********pppppppppiVar13;
  int *********pppppppppiVar14;
  int *piVar15;
  bool bVar16;
  undefined4 uVar17;
  int ********ppppppppiStack_260;
  int ********ppppppppiStack_25c;
  int ********ppppppppiStack_258;
  int ********ppppppppiStack_254;
  int ********ppppppppiStack_238;
  int ********ppppppppiStack_234;
  int ********ppppppppiStack_230;
  int ********ppppppppiStack_22c;
  int ********ppppppppiStack_228;
  int ********ppppppppiStack_224;
  int ********ppppppppiStack_220;
  int ********ppppppppiStack_21c;
  int *****pppppiStack_218;
  int *****pppppiStack_214;
  int *piStack_210;
  int *******pppppppiStack_20c;
  int ********ppppppppiStack_208;
  int *piStack_204;
  uint uStack_200;
  int *piStack_1fc;
  int ******ppppppiStack_1f8;
  int *******pppppppiStack_1f4;
  undefined1 *puStack_1f0;
  int *****pppppiStack_1ec;
  int ****ppppiStack_1e8;
  int *******pppppppiStack_1e4;
  int ********ppppppppiStack_1e0;
  int *******pppppppiStack_1dc;
  int ********ppppppppiStack_1d8;
  int ********ppppppppiStack_1d4;
  int *******pppppppiStack_1d0;
  int *******pppppppiStack_1cc;
  int ********ppppppppiStack_1c8;
  int ****ppppiStack_1c4;
  int ********ppppppppiStack_1c0;
  int ********ppppppppiStack_1bc;
  int ********ppppppppiStack_1b8;
  int ********ppppppppiStack_1b4;
  int ********ppppppppiStack_1b0;
  int ********ppppppppiStack_1ac;
  int ********ppppppppiStack_1a8;
  int ********ppppppppiStack_1a4;
  int ********ppppppppiStack_1a0;
  int ********ppppppppiStack_19c;
  int *******pppppppiStack_198;
  int *******pppppppiStack_194;
  int ********ppppppppiStack_190;
  int ********ppppppppiStack_18c;
  int *******pppppppiStack_188;
  int ********ppppppppiStack_184;
  int ********ppppppppiStack_180;
  int ********ppppppppiStack_17c;
  int *********pppppppppiVar18;
  int ********ppppppppiStack_168;
  int ********ppppppppiStack_164;
  int ********ppppppppiStack_160;
  int ********ppppppppiStack_15c;
  int ********ppppppppiStack_158;
  int ********ppppppppiStack_154;
  int ********ppppppppiStack_150;
  int ********ppppppppiStack_14c;
  undefined4 *puStack_13c;
  undefined4 local_108;
  undefined4 local_104;
  int ******local_100;
  int *******local_fc;
  int ******local_f8;
  int *******local_f4 [2];
  int ********local_ec;
  int *local_e8;
  int ********local_e4;
  int *local_e0;
  int ********local_dc;
  int ******local_d8;
  int *******local_d4 [9];
  undefined4 local_b0;
  int ******local_ac;
  int ********local_a4;
  int ******local_a0 [2];
  undefined4 local_98;
  int *******local_90 [2];
  undefined4 local_88;
  int ******local_80 [2];
  undefined4 local_78;
  int *******local_70 [2];
  int *******local_68;
  int ******local_60 [2];
  undefined4 local_58;
  int ******local_50 [2];
  undefined2 local_48;
  undefined4 local_40;
  int ********local_3c;
  int *******local_38;
  undefined4 local_34;
  int *******local_30;
  int ********local_2c;
  int ********local_28;
  int *******local_24;
  undefined4 local_20;
  int *******local_1c;
  int ********local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_004032d6;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffeb8;
  local_8 = &DAT_00402b20;
  ppppppppiStack_14c = (int ********)0x0;
  ppppppppiStack_150 = (int ********)0x0;
  ppppppppiStack_154 = (int ********)param_1;
  local_20 = 0;
  local_24 = (int *******)0x0;
  local_2c = (int ********)0x0;
  local_30 = (int *******)0x0;
  local_34 = 0;
  local_38 = (int *******)0x0;
  local_3c = (int ********)0x0;
  local_40 = 0;
  local_50[0] = (int ******)0x0;
  local_60[0] = (int ******)0x0;
  local_70[0] = (int *******)0x0;
  local_80[0] = (int ******)0x0;
  local_90[0] = (int *******)0x0;
  local_a0[0] = (int ******)0x0;
  local_b0 = 0;
  local_d4[0] = (int *******)0x0;
  local_d8 = (int ******)0x0;
  local_f4[0] = (int *******)0x0;
  local_f8 = (int ******)0x0;
  local_fc = (int *******)0x0;
  local_100 = (int ******)0x0;
  local_104 = 0;
  local_108 = 0;
  ppppppppiStack_158 = (int ********)0x464552;
  ExceptionList = &pvStack_14;
  ppppppppiStack_158 = (int ********)(*(code *)(*param_1)[0xe3])();
  pcVar12 = __vbaObjSet_exref;
  ppppppppiStack_15c = &local_38;
  ppppppppiStack_160 = (int ********)0x46455f;
  ppppppppiStack_158 = (int ********)__vbaObjSet();
  ppppppppiStack_15c = (int ********)local_50;
  ppppppppiStack_160 = (int ********)0x46456a;
  ppppppppiStack_150 = (int ********)__vbaLateIdCallLd();
  ppppppppiStack_154 = (int ********)0x464574;
  __vbaI4Var();
  ppppppppiStack_154 = (int ********)0x46457c;
  sVar2 = __vbaI2I4();
  local_1c = (int *******)0x1;
  ppppppppiStack_150 = (int ********)0x464592;
  __vbaFreeObj();
  ppppppppiStack_150 = (int ********)0x46459b;
  __vbaFreeVar();
  ppppppppiVar5 = (int ********)local_1c;
  while (local_1c = (int *******)ppppppppiVar5, (short)local_1c <= sVar2) {
    ppppppppiStack_14c = (int ********)param_1;
    ppppppppiStack_150 = (int ********)0x4645b5;
    ppppppppiStack_150 = (int ********)(*(code *)(*param_1)[0xc2])();
    ppppppppiStack_154 = &local_38;
    ppppppppiStack_158 = (int ********)0x4645bc;
    ppppppppiStack_160 = (int ********)(*pcVar12)();
    ppppppppiStack_158 = (int ********)&local_3c;
    ppppppppiStack_15c = (int ********)local_1c;
    ppppppppiStack_164 = (int ********)0x4645d0;
    local_dc = ppppppppiStack_160;
    iVar4 = (*(code *)(*ppppppppiStack_160)[0x10])();
    if (iVar4 < 0) {
      ppppppppiStack_164 = (int ********)0x40;
      ppppppppiStack_168 = (int ********)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_164 = local_d4;
    ppppppppiStack_168 = local_3c;
    local_e4 = local_3c;
    iVar4 = (*(code *)(*local_3c)[0x3c])();
    if (iVar4 < 0) {
      ppppppppiStack_17c = (int ********)0x464622;
      __vbaHresultCheckObj();
    }
    local_48 = (short)local_d4[0];
    local_70[0] = (int *******)0x1;
    local_58 = 0;
    local_60[0] = (int ******)0x2;
    local_50[0] = (int ******)0x2;
    ppppppppiStack_17c = (int ********)0x46465b;
    FUN_00441030(local_80,local_50,local_60,local_70);
    ppppppppiStack_17c = (int ********)local_80;
    ppppppppiStack_180 = (int ********)0x464665;
    local_18 = (int ********)__vbaI2Var();
    ppppppppiStack_180 = (int ********)&local_3c;
    ppppppppiStack_184 = &local_38;
    pppppppiStack_188 = (int *******)0x2;
    ppppppppiStack_18c = (int ********)0x464677;
    __vbaFreeObjList();
    ppppppppiStack_18c = (int ********)local_80;
    ppppppppiStack_190 = local_70;
    pppppppiStack_194 = local_60;
    pppppppiStack_198 = local_50;
    ppppppppiStack_19c = (int ********)0x4;
    ppppppppiStack_1a0 = (int ********)0x46468f;
    __vbaFreeVarList();
    ppppppppiStack_180 = (int ********)param_1;
    ppppppppiStack_184 = (int ********)0x46469b;
    ppppppppiStack_184 = (int ********)(*(code *)(*param_1)[0xc2])();
    pppppppiStack_188 = (int *******)&local_38;
    ppppppppiStack_18c = (int ********)0x4646a2;
    ppppppppiVar5 = (int ********)(*pcVar12)();
    ppppppppiStack_18c = (int ********)&local_3c;
    ppppppppiStack_190 = (int ********)local_1c;
    pppppppiStack_198 = (int *******)0x4646b2;
    pppppppiStack_194 = (int *******)ppppppppiVar5;
    ppppppppiVar6 = (int ********)(*(code *)(*ppppppppiVar5)[0x10])();
    if ((int)ppppppppiVar6 < 0) {
      pppppppiStack_198 = (int *******)0x40;
      ppppppppiStack_19c = (int ********)&DAT_004182e4;
      ppppppppiStack_1a8 = (int ********)0x4646c7;
      ppppppppiStack_1a4 = ppppppppiVar6;
      ppppppppiStack_1a0 = ppppppppiVar5;
      __vbaHresultCheckObj();
    }
    ppppppppiVar5 = local_3c;
    pppppppiStack_198 = (int *******)local_d4;
    ppppppppiStack_19c = local_3c;
    ppppppppiStack_1a0 = (int ********)0x4646dc;
    ppppppppiStack_1ac = (int ********)(*(code *)(*local_3c)[0x3a])();
    if ((int)ppppppppiStack_1ac < 0) {
      ppppppppiStack_1a0 = (int ********)0xe8;
      ppppppppiStack_1a4 = (int ********)&DAT_0041807c;
      ppppppppiStack_1a8 = ppppppppiVar5;
      ppppppppiStack_1b0 = (int ********)0x4646f4;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_1a0 = (int ********)&local_3c;
    bVar16 = (short)local_d4[0] == 0;
    ppppppppiStack_1a4 = &local_38;
    ppppppppiStack_1a8 = (int ********)0x2;
    ppppppppiStack_1ac = (int ********)0x464715;
    __vbaFreeObjList();
    if (bVar16) {
      ppppppppiStack_1a4 = (int ********)param_1[0xe];
      ppppppppiStack_1a0 = &local_38;
      ppppppppiStack_1a8 = (int ********)0x46472e;
      pppppppppiVar7 = (int *********)(*(code *)(*ppppppppiStack_1a4)[0x1c])();
      if ((int)pppppppppiVar7 < 0) {
        ppppppppiStack_1b0 = (int ********)param_1[0xe];
        ppppppppiStack_1a8 = (int ********)0x70;
        ppppppppiStack_1ac = (int ********)&LAB_004133e8;
        ppppppppiStack_1b8 = (int ********)0x464746;
        ppppppppiStack_1b4 = (int ********)pppppppppiVar7;
        __vbaHresultCheckObj();
      }
      pppppppiVar9 = local_38;
      ppppppppiStack_1a8 = (int ********)&local_3c;
      ppppppppiStack_1ac = (int ********)local_38;
      ppppppppiStack_1b0 = (int ********)0x464755;
      pppppppppiVar7 = (int *********)(*(code *)(*local_38)[0x1b])();
      if ((int)pppppppppiVar7 < 0) {
        ppppppppiStack_1b0 = (int ********)0x6c;
        ppppppppiStack_1b4 = (int ********)&LAB_004133f8;
        ppppppppiStack_1b8 = (int ********)pppppppiVar9;
        ppppppppiStack_1c0 = (int ********)0x46476a;
        ppppppppiStack_1bc = (int ********)pppppppppiVar7;
        __vbaHresultCheckObj();
      }
      ppppppppiStack_1b0 = local_3c;
      local_3c = (int ********)0x0;
      ppppppppiStack_1b4 = local_f4;
      ppppppppiStack_1b8 = (int ********)0x46477e;
      ppppppppiStack_1a0 = (int ********)(*pcVar12)();
      ppppppppiStack_1a4 = (int ********)&local_2c;
      ppppppppiStack_1a8 = (int ********)&local_f8;
      ppppppppiStack_1ac = (int ********)&DAT_00414268;
      ppppppppiStack_1b0 = (int ********)0x464795;
      iVar4 = __vbaForEachCollObj();
      ppppppppiStack_1a0 = (int ********)0x4647a0;
      __vbaFreeObj();
      while (iVar4 != 0) {
        ppppppppiStack_1a0 = (int ********)param_1;
        ppppppppiStack_1a4 = (int ********)0x4647b1;
        ppppppppiStack_1a4 = (int ********)(*(code *)(*param_1)[0xc2])();
        ppppppppiStack_1a8 = &local_38;
        ppppppppiStack_1ac = (int ********)0x4647b8;
        pppppppppiVar7 = (int *********)(*pcVar12)();
        ppppppppiStack_1ac = (int ********)&local_3c;
        ppppppppiStack_1b0 = (int ********)local_1c;
        ppppppppiStack_1b8 = (int ********)0x4647c8;
        ppppppppiStack_1b4 = (int ********)pppppppppiVar7;
        ppppiVar8 = (int ****)(*(code *)(*pppppppppiVar7)[0x10])();
        if ((int)ppppiVar8 < 0) {
          ppppppppiStack_1b8 = (int ********)0x40;
          ppppppppiStack_1bc = (int ********)&DAT_004182e4;
          ppppppppiStack_1c8 = (int ********)0x4647dd;
          ppppiStack_1c4 = ppppiVar8;
          ppppppppiStack_1c0 = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppppiVar5 = local_3c;
        ppppppppiStack_1b8 = &local_30;
        ppppppppiStack_1bc = local_2c;
        ppppppppiStack_1c0 = (int ********)0x4647f2;
        pppppppiStack_1cc = (int *******)(*(code *)(*local_2c)[7])();
        if ((int)pppppppiStack_1cc < 0) {
          ppppppppiStack_1c0 = (int ********)0x1c;
          ppppiStack_1c4 = (int ****)&DAT_00414268;
          ppppppppiStack_1c8 = local_2c;
          pppppppiStack_1d0 = (int *******)0x46480a;
          __vbaHresultCheckObj();
        }
        pppppppiStack_1cc = (int *******)0xa;
        ppppppppiStack_1c8 = (int ********)local_ac;
        ppppiStack_1c4 = (int ****)0x80020004;
        ppppppppiStack_1c0 = local_a4;
        pppppppiStack_1d0 = local_30;
        ppppppppiStack_1d4 = ppppppppiVar5;
        ppppppppiStack_1d8 = (int ********)0x464838;
        pppppppppiVar7 = (int *********)(*(code *)(*ppppppppiVar5)[0x7b])();
        if ((int)pppppppppiVar7 < 0) {
          ppppppppiStack_1a0 = (int ********)0x1ec;
          ppppppppiStack_1a4 = (int ********)&DAT_0041807c;
          ppppppppiStack_1a8 = ppppppppiVar5;
          ppppppppiStack_1b0 = (int ********)0x464850;
          ppppppppiStack_1ac = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_1a0 = (int ********)0x464859;
        __vbaFreeStr();
        ppppppppiStack_1a0 = (int ********)&local_3c;
        ppppppppiStack_1a4 = &local_38;
        ppppppppiStack_1a8 = (int ********)0x2;
        ppppppppiStack_1ac = (int ********)0x464869;
        __vbaFreeObjList();
        ppppppppiStack_1a0 = (int ********)&local_2c;
        ppppppppiStack_1a4 = (int ********)&local_f8;
        ppppppppiStack_1a8 = (int ********)&DAT_00414268;
        ppppppppiStack_1ac = (int ********)0x464882;
        iVar4 = __vbaNextEachCollObj();
        pcVar12 = __vbaObjSet_exref;
      }
    }
    ppppppppiStack_1a0 = (int ********)param_1;
    ppppppppiStack_1a4 = (int ********)0x464898;
    ppppppppiStack_1a4 = (int ********)(*(code *)(*param_1)[0xc2])();
    ppppppppiStack_1a8 = &local_38;
    ppppppppiStack_1ac = (int ********)0x46489f;
    pppppppppiVar7 = (int *********)(*pcVar12)();
    ppppppppiStack_1ac = (int ********)&local_3c;
    ppppppppiStack_1b0 = (int ********)local_1c;
    ppppppppiStack_1b8 = (int ********)0x4648af;
    ppppppppiStack_1b4 = (int ********)pppppppppiVar7;
    ppppiVar8 = (int ****)(*(code *)(*pppppppppiVar7)[0x10])();
    if ((int)ppppiVar8 < 0) {
      ppppppppiStack_1b8 = (int ********)0x40;
      ppppppppiStack_1bc = (int ********)&DAT_004182e4;
      ppppppppiStack_1c8 = (int ********)0x4648c4;
      ppppiStack_1c4 = ppppiVar8;
      ppppppppiStack_1c0 = (int ********)pppppppppiVar7;
      __vbaHresultCheckObj();
    }
    pppppppppiVar7 = (int *********)local_3c;
    ppppppppiStack_1b8 = local_18;
    ppppppppiStack_1bc = local_3c;
    ppppppppiStack_1c0 = (int ********)0x4648d6;
    ppppppppiStack_158 = (int ********)(*(code *)(*local_3c)[0x3d])();
    if ((int)ppppppppiStack_158 < 0) {
      ppppppppiStack_14c = (int ********)0xf4;
      ppppppppiStack_150 = (int ********)&DAT_0041807c;
      ppppppppiStack_154 = (int ********)pppppppppiVar7;
      ppppppppiStack_15c = (int ********)0x4648ee;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_14c = (int ********)&local_3c;
    ppppppppiStack_150 = &local_38;
    ppppppppiStack_154 = (int ********)0x2;
    ppppppppiStack_158 = (int ********)0x4648fe;
    __vbaFreeObjList();
    ppppppppiVar5 = (int ********)(uint)(ushort)((short)local_1c + 1);
    if (SCARRY2((short)local_1c,1)) goto LAB_0046551a;
  }
  ppppppppiStack_14c = (int ********)0x0;
  ppppppppiStack_150 = (int ********)0x0;
  ppppppppiStack_154 = (int ********)param_1;
  ppppppppiStack_158 = (int ********)0x464925;
  ppppppppiStack_158 = (int ********)(*(code *)(*param_1)[0xe4])();
  ppppppppiStack_15c = &local_38;
  ppppppppiStack_160 = (int ********)0x46492c;
  ppppppppiStack_160 = (int ********)(*pcVar12)();
  ppppppppiStack_164 = (int ********)local_50;
  ppppppppiStack_168 = (int ********)0x464937;
  ppppppppiStack_158 = (int ********)__vbaLateIdCallLd();
  ppppppppiStack_15c = (int ********)0x464941;
  __vbaI4Var();
  ppppppppiStack_154 = (int ********)0x464949;
  sVar2 = __vbaI2I4();
  local_1c = (int *******)0x1;
  ppppppppiStack_150 = (int ********)0x46495f;
  __vbaFreeObj();
  ppppppppiStack_150 = (int ********)0x464968;
  __vbaFreeVar();
  ppppppppiVar5 = (int ********)local_1c;
  do {
    local_1c = (int *******)ppppppppiVar5;
    if (sVar2 < (short)local_1c) {
      ppppppppiStack_150 = (int ********)param_1[0xf];
      ppppppppiStack_14c = (int ********)0x0;
      ppppppppiStack_154 = (int ********)0x464cf2;
      sVar2 = __vbaObjIs();
      if (sVar2 == 0) {
        if (DAT_0047f074 == (int *********)0x0) {
          ppppppppiStack_14c = (int ********)&DAT_0047f074;
          ppppppppiStack_150 = (int ********)&DAT_0040dbb8;
          ppppppppiStack_154 = (int ********)0x464d13;
          __vbaNew2();
        }
        ppppppppiStack_14c = &local_38;
        ppppppppiStack_150 = (int ********)(param_1 + 0xf);
        ppppppppiStack_154 = (int ********)DAT_0047f074;
        local_dc = (int ********)DAT_0047f074;
        ppppppppiStack_158 = (int ********)0x464d2f;
        ppppppppiVar5 = (int ********)(*(code *)(*DAT_0047f074)[0x1ca])();
        if ((int)ppppppppiVar5 < 0) {
          ppppppppiStack_158 = (int ********)0x728;
          ppppppppiStack_15c = (int ********)&DAT_00413d78;
          ppppppppiStack_160 = local_dc;
          ppppppppiStack_168 = (int ********)0x464d4d;
          ppppppppiStack_164 = ppppppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_158 = (int ********)&DAT_00418c2c;
        ppppppppiStack_15c = (int ********)local_38;
        ppppppppiStack_160 = (int ********)0x464d5c;
        ppppppppiStack_158 = (int ********)__vbaCastObj();
        ppppppppiStack_15c = (int ********)&local_3c;
        ppppppppiStack_160 = (int ********)0x464d63;
        ppppppppiStack_160 = (int ********)(*pcVar12)();
        ppppppppiStack_164 = (int ********)(param_1 + 0x10);
        ppppppppiStack_168 = (int ********)0x464d6e;
        __vbaObjSetAddref();
        ppppppppiStack_160 = (int ********)&local_3c;
        ppppppppiStack_164 = &local_38;
        ppppppppiStack_168 = (int ********)0x2;
        __vbaFreeObjList();
        ppppppppiStack_160 = (int ********)param_1;
        ppppppppiStack_164 = (int ********)0x464d8a;
        ppppppppiStack_164 = (int ********)(*(code *)(*param_1)[0xbf])();
        ppppppppiStack_168 = &local_38;
        local_e4 = (int ********)(*pcVar12)();
        pppppppppiVar7 = (int *********)(*(code *)(*param_1[0xf])[0xb])();
        if ((int)pppppppppiVar7 < 0) {
          ppppppppiStack_17c = (int ********)param_1[0xf];
          ppppppppiStack_184 = (int ********)0x464dbf;
          ppppppppiStack_180 = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_17c = (int ********)0x464dcf;
        ppppppppiVar5 = (int ********)(*(code *)(*param_1[0xf])[9])();
        if ((int)ppppppppiVar5 < 0) {
          ppppppppiStack_184 = (int ********)param_1[0xf];
          ppppppppiStack_17c = (int ********)0x24;
          ppppppppiStack_180 = (int ********)&LAB_004133e8;
          ppppppppiStack_18c = (int ********)0x464de7;
          pppppppiStack_188 = (int *******)ppppppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_17c = (int ********)~((uint)local_d8 | (uint)local_d4[0]);
        ppppppppiStack_180 = local_e4;
        ppppppppiStack_184 = (int ********)0x464e05;
        ppppppppiVar5 = (int ********)(*(code *)(*local_e4)[0x25])();
        if ((int)ppppppppiVar5 < 0) {
          ppppppppiStack_184 = (int ********)0x94;
          pppppppiStack_188 = (int *******)&DAT_00418260;
          ppppppppiStack_18c = local_e4;
          pppppppiStack_194 = (int *******)0x464e23;
          ppppppppiStack_190 = ppppppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_184 = (int ********)0x464e2c;
        __vbaFreeObj();
        ppppppppiStack_184 = (int ********)param_1;
        pppppppiStack_188 = (int *******)0x464e35;
        pppppppiStack_188 = (int *******)(*(code *)(*param_1)[0xdf])();
        ppppppppiStack_18c = (int ********)&local_3c;
        ppppppppiStack_190 = (int ********)0x464e3c;
        local_e4 = (int ********)(*pcVar12)();
        ppppppppiStack_190 = (int ********)param_1;
        pppppppiStack_194 = (int *******)0x464e4b;
        pppppppiStack_194 = (int *******)(*(code *)(*param_1)[0xbf])();
        pppppppiStack_198 = (int *******)&local_38;
        ppppppppiStack_19c = (int ********)0x464e52;
        ppppppppiStack_1a0 = (int ********)(*pcVar12)();
        ppppppppiStack_19c = local_d4;
        ppppppppiStack_1a4 = (int ********)0x464e68;
        local_dc = ppppppppiStack_1a0;
        ppppppppiVar5 = (int ********)(*(code *)(*ppppppppiStack_1a0)[0x24])();
        if ((int)ppppppppiVar5 < 0) {
          ppppppppiStack_1a4 = (int ********)0x90;
          ppppppppiStack_1a8 = (int ********)&DAT_00418260;
          ppppppppiStack_1ac = local_dc;
          ppppppppiStack_1b4 = (int ********)0x464e86;
          ppppppppiStack_1b0 = ppppppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_1a4 = (int ********)local_d4[0];
        ppppppppiStack_1a8 = local_e4;
        ppppppppiStack_1ac = (int ********)0x464e9c;
        ppppppppiStack_1b8 = (int ********)(*(code *)(*local_e4)[0x27])();
        if ((int)ppppppppiStack_1b8 < 0) {
          ppppppppiStack_1ac = (int ********)0x9c;
          ppppppppiStack_1b0 = (int ********)&DAT_004182f8;
          ppppppppiStack_1b4 = local_e4;
          ppppppppiStack_1bc = (int ********)0x464eba;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_1ac = (int ********)&local_3c;
        ppppppppiStack_1b0 = &local_38;
        ppppppppiStack_1b4 = (int ********)0x2;
        ppppppppiStack_1b8 = (int ********)0x464eca;
        __vbaFreeObjList();
        ppppppppiStack_1ac = (int ********)param_1;
        ppppppppiStack_1b0 = (int ********)0x464ed6;
        ppppppppiStack_1b0 = (int ********)(*(code *)(*param_1)[0xc0])();
        ppppppppiStack_1b4 = (int ********)&local_3c;
        ppppppppiStack_1b8 = (int ********)0x464edd;
        local_ec = (int ********)(*pcVar12)();
        ppppppppiStack_1bc = (int ********)param_1[0xf];
        ppppppppiStack_1b8 = local_d4;
        ppppppppiStack_1c0 = (int ********)0x464ef3;
        ppppppppiVar5 = (int ********)(*(code *)(*ppppppppiStack_1bc)[0xb])();
        if ((int)ppppppppiVar5 < 0) {
          ppppppppiStack_1c8 = (int ********)param_1[0xf];
          ppppppppiStack_1c0 = (int ********)0x2c;
          ppppiStack_1c4 = (int ****)&LAB_004133e8;
          pppppppiStack_1d0 = (int *******)0x464f0b;
          pppppppiStack_1cc = (int *******)ppppppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppiStack_1c4 = param_1[0xf];
        ppppppppiStack_1c0 = &local_38;
        ppppppppiStack_1c8 = (int ********)0x464f18;
        pppppppppiVar7 = (int *********)(*(code *)(*ppppiStack_1c4)[0x1c])();
        if ((int)pppppppppiVar7 < 0) {
          pppppppiStack_1d0 = (int *******)param_1[0xf];
          ppppppppiStack_1c8 = (int ********)0x70;
          pppppppiStack_1cc = (int *******)&LAB_004133e8;
          ppppppppiStack_1d8 = (int ********)0x464f30;
          ppppppppiStack_1d4 = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_1c8 = (int ********)&local_d8;
        pppppppiStack_1cc = local_38;
        local_e4 = (int ********)local_38;
        pppppppiStack_1d0 = (int *******)0x464f46;
        iVar4 = (*(code *)(*local_38)[0xb])();
        if (iVar4 < 0) {
          pppppppiStack_1d0 = (int *******)0x2c;
          ppppppppiStack_1d4 = (int ********)&LAB_004133f8;
          ppppppppiStack_1d8 = local_e4;
          ppppppppiStack_1e0 = (int ********)0x464f61;
          pppppppiStack_1dc = (int *******)iVar4;
          __vbaHresultCheckObj();
        }
        pppppppiStack_1d0 = (int *******)((uint)local_d8 & (uint)local_d4[0]);
        ppppppppiStack_1d4 = local_ec;
        ppppppppiStack_1d8 = (int ********)0x464f7d;
        pppppppiStack_1e4 = (int *******)(*(code *)(*local_ec)[0x27])();
        if ((int)pppppppiStack_1e4 < 0) {
          ppppppppiStack_1d8 = (int ********)0x9c;
          pppppppiStack_1dc = (int *******)&DAT_0041804c;
          ppppppppiStack_1e0 = local_ec;
          ppppiStack_1e8 = (int ****)0x464f9b;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_1d8 = (int ********)&local_3c;
        pppppppiStack_1dc = (int *******)&local_38;
        ppppppppiStack_1e0 = (int ********)0x2;
        pppppppiStack_1e4 = (int *******)0x464fab;
        __vbaFreeObjList();
        ppppppppiStack_1d8 = (int ********)param_1;
        pppppppiStack_1dc = (int *******)0x464fb7;
        pppppppiStack_1dc = (int *******)(*(code *)(*param_1)[0xde])();
        ppppppppiStack_1e0 = (int ********)&local_3c;
        pppppppiStack_1e4 = (int *******)0x464fbe;
        local_e8 = (int *)(*pcVar12)();
        ppppiStack_1e8 = param_1[0xf];
        pppppppiStack_1e4 = (int *******)local_d4;
        pppppiStack_1ec = (int *****)0x464fd4;
        pppppppiVar9 = (int *******)(*(code *)(*ppppiStack_1e8)[0x13])();
        if ((int)pppppppiVar9 < 0) {
          pppppppiStack_1f4 = (int *******)param_1[0xf];
          pppppiStack_1ec = (int *****)0x4c;
          puStack_1f0 = &LAB_004133e8;
          piStack_1fc = (int *)0x464fec;
          ppppppiStack_1f8 = (int ******)pppppppiVar9;
          __vbaHresultCheckObj();
        }
        pppppiStack_1ec = param_1;
        puStack_1f0 = (undefined1 *)0x464ff5;
        puStack_1f0 = (undefined1 *)(*(code *)(*param_1)[0xdf])();
        pppppppiStack_1f4 = (int *******)&local_38;
        ppppppiStack_1f8 = (int ******)0x464ffc;
        piStack_1fc = (int *)(*pcVar12)();
        ppppppiStack_1f8 = (int ******)&local_d8;
        uStack_200 = 0x465012;
        local_e0 = piStack_1fc;
        iVar4 = (**(code **)(*piStack_1fc + 0x98))();
        if (iVar4 < 0) {
          uStack_200 = 0x98;
          piStack_204 = (int *)&DAT_004182f8;
          ppppppppiStack_208 = (int ********)local_e0;
          piStack_210 = (undefined4 *)0x465030;
          pppppppiStack_20c = (int *******)iVar4;
          __vbaHresultCheckObj();
        }
        uStack_200 = ~((uint)local_d8 | (uint)local_d4[0]);
        piStack_204 = local_e8;
        ppppppppiStack_208 = (int ********)0x46504e;
        pppppiStack_214 = (int *****)(**(code **)(*local_e8 + 0x9c))();
        if ((int)pppppiStack_214 < 0) {
          ppppppppiStack_208 = (int ********)0x9c;
          pppppppiStack_20c = (int *******)&DAT_004182f8;
          piStack_210 = local_e8;
          pppppiStack_218 = (int *****)0x46506c;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_208 = (int ********)&local_3c;
        pppppppiStack_20c = (int *******)&local_38;
        piStack_210 = (int *)0x2;
        pppppiStack_214 = (int *****)0x46507c;
        __vbaFreeObjList();
        ppppppppiStack_208 = (int ********)param_1;
        pppppppiStack_20c = (int *******)0x465088;
        pppppppiStack_20c = (int *******)(*(code *)(*param_1)[0xe1])();
        piStack_210 = &local_40;
        pppppiStack_214 = (int *****)0x46508f;
        local_ec = (int ********)(*pcVar12)();
        pppppiStack_214 = param_1;
        pppppiStack_218 = (int *****)0x46509e;
        pppppiStack_218 = (int *****)(*(code *)(*param_1)[0xdf])();
        ppppppppiStack_21c = &local_38;
        ppppppppiStack_220 = (int ********)0x4650a5;
        ppppppppiStack_224 = (int ********)(*pcVar12)();
        ppppppppiStack_220 = local_d4;
        ppppppppiStack_228 = (int ********)0x4650bb;
        local_dc = ppppppppiStack_224;
        ppppppppiVar5 = (int ********)(*(code *)(*ppppppppiStack_224)[0x26])();
        if ((int)ppppppppiVar5 < 0) {
          ppppppppiStack_228 = (int ********)0x98;
          ppppppppiStack_22c = (int ********)&DAT_004182f8;
          ppppppppiStack_230 = local_dc;
          ppppppppiStack_238 = (int ********)0x4650d9;
          ppppppppiStack_234 = ppppppppiVar5;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_228 = (int ********)param_1;
        ppppppppiStack_22c = (int ********)0x4650e2;
        ppppppppiStack_22c = (int ********)(*(code *)(*param_1)[0xde])();
        ppppppppiStack_230 = (int ********)&local_3c;
        ppppppppiStack_234 = (int ********)0x4650e9;
        ppppppppiStack_238 = (int ********)(*pcVar12)();
        ppppppppiStack_234 = (int ********)&local_d8;
        local_e4 = ppppppppiStack_238;
        iVar4 = (*(code *)(*ppppppppiStack_238)[0x26])();
        if (iVar4 < 0) {
          __vbaHresultCheckObj();
        }
        iVar4 = (**(code **)((int)*local_ec + 0x9c))();
        if (iVar4 < 0) {
          ppppppppiStack_254 = (int ********)0x465159;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_254 = (int ********)0x46516d;
        __vbaFreeObjList();
        (*(code *)(*param_1)[0xc0])();
        ppppppppiStack_254 = (int ********)(*pcVar12)();
        ppppppppiStack_258 = (int ********)0x465196;
        local_dc = ppppppppiStack_254;
        ppppppppiVar5 = (int ********)(*(code *)(*ppppppppiStack_254)[0x26])();
        if ((int)ppppppppiVar5 < 0) {
          ppppppppiStack_14c = (int ********)0x98;
          ppppppppiStack_150 = (int ********)&DAT_0041804c;
          ppppppppiStack_154 = local_dc;
          ppppppppiStack_15c = (int ********)0x4651b4;
          ppppppppiStack_158 = ppppppppiVar5;
          __vbaHresultCheckObj();
        }
        local_e4 = (int ********)CONCAT22(local_e4._2_2_,~(ushort)local_d4[0]);
        ppppppppiStack_14c = (int ********)0x4651cc;
        __vbaFreeObj();
        if ((short)local_e4 == 0) {
          ppppppppiStack_14c = (int ********)&DAT_00417d34;
          ppppppppiStack_150 = (int ********)0x0;
          ppppppppiStack_154 = (int ********)0x7;
          ppppppppiStack_158 = (int ********)param_1;
          ppppppppiStack_15c = (int ********)0x4651ea;
          ppppppppiStack_15c = (int ********)(*(code *)(*param_1)[0xe5])();
          ppppppppiStack_160 = &local_38;
          ppppppppiStack_164 = (int ********)0x4651f1;
          ppppppppiStack_164 = (int ********)(*pcVar12)();
          ppppppppiStack_168 = (int ********)local_50;
          ppppppppiStack_15c = (int ********)__vbaLateIdCallLd();
          ppppppppiStack_160 = (int ********)0x465206;
          ppppppppiStack_158 = (int ********)__vbaCastObjVar();
          ppppppppiStack_15c = (int ********)&local_3c;
          ppppppppiStack_160 = (int ********)0x46520d;
          ppppppppiStack_160 = (int ********)(*pcVar12)();
          ppppppppiStack_164 = (int ********)0x465219;
          local_dc = ppppppppiStack_160;
          iVar4 = (*(code *)(*ppppppppiStack_160)[0xb])();
          if (iVar4 < 0) {
            ppppppppiStack_164 = (int ********)0x2c;
            ppppppppiStack_168 = (int ********)&DAT_00417d34;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_164 = (int ********)&local_3c;
          ppppppppiStack_168 = &local_38;
          __vbaFreeObjList();
          ppppppppiStack_164 = (int ********)0x465250;
          __vbaFreeVar();
          ppppppppiStack_164 = (int ********)param_1[0xf];
          ppppppppiStack_160 = &local_38;
          ppppppppiStack_168 = (int ********)0x46525d;
          iVar4 = (*(code *)(*ppppppppiStack_164)[0x1b])();
          if (iVar4 < 0) {
            ppppppppiStack_168 = (int ********)0x6c;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_168 = (int ********)local_38;
          local_38 = (int *******)0x0;
          (*pcVar12)();
          ppppppppiStack_17c = (int ********)&LAB_0041470c;
          ppppppppiStack_180 = (int ********)0x46529c;
          iVar4 = __vbaForEachCollObj();
          while (iVar4 != 0) {
            pppppppppiVar7 = (int *********)(*(code *)(*local_24)[7])();
            if ((int)pppppppppiVar7 < 0) {
              ppppppppiStack_17c = (int ********)&LAB_0041470c;
              ppppppppiStack_180 = (int ********)local_24;
              pppppppiStack_188 = (int *******)0x4652c9;
              ppppppppiStack_184 = (int ********)pppppppppiVar7;
              __vbaHresultCheckObj();
            }
            ppppppppiStack_17c = (int ********)local_24;
            ppppppppiStack_180 = (int ********)0x4652d6;
            ppppppppiStack_18c = (int ********)(*(code *)(*local_24)[9])();
            if ((int)ppppppppiStack_18c < 0) {
              ppppppppiStack_180 = (int ********)0x24;
              ppppppppiStack_184 = (int ********)&LAB_0041470c;
              pppppppiStack_188 = local_24;
              ppppppppiStack_190 = (int ********)0x4652ee;
              __vbaHresultCheckObj();
            }
            ppppppppiStack_180 = (int ********)&DAT_00417d34;
            ppppppppiStack_184 = (int ********)0x0;
            pppppppiStack_188 = (int *******)0x7;
            ppppppppiStack_18c = (int ********)param_1;
            ppppppppiStack_190 = (int ********)0x465300;
            ppppppppiStack_190 = (int ********)(*(code *)(*param_1)[0xe5])();
            pppppppiStack_194 = (int *******)&local_38;
            pppppppiStack_198 = (int *******)0x465307;
            pppppppiStack_198 = (int *******)(*pcVar12)();
            ppppppppiStack_19c = (int ********)local_50;
            ppppppppiStack_1a0 = (int ********)0x465312;
            ppppppppiStack_190 = (int ********)__vbaLateIdCallLd();
            pppppppiStack_194 = (int *******)0x46531c;
            ppppppppiStack_18c = (int ********)__vbaCastObjVar();
            ppppppppiStack_190 = (int ********)&local_3c;
            pppppppiStack_194 = (int *******)0x465323;
            ppppppppiStack_1ac = (int ********)(*pcVar12)();
            local_78 = local_34;
            local_98 = 0x80020004;
            local_88 = 0x80020004;
            local_58 = 0x80020004;
            local_68 = local_30;
            pppppppiStack_194 = (int *******)&local_40;
            pppppppiStack_198 = local_a0;
            ppppppppiStack_19c = local_90;
            ppppppppiStack_1a0 = (int ********)local_80;
            ppppppppiStack_1a4 = local_70;
            ppppppppiStack_1a8 = (int ********)local_60;
            local_a0[0] = (int ******)0xa;
            local_90[0] = (int *******)0xa;
            local_34 = 0;
            local_80[0] = (int ******)0x8;
            local_30 = (int *******)0x0;
            local_70[0] = (int *******)0x8;
            local_60[0] = (int ******)0xa;
            ppppppppiStack_1b0 = (int ********)0x465399;
            ppppppppiStack_17c = (int ********)(*(code *)(*ppppppppiStack_1ac)[10])();
            if ((int)ppppppppiStack_17c < 0) {
              ppppppppiStack_180 = (int ********)0x4653ae;
              __vbaHresultCheckObj();
            }
            ppppppppiStack_17c = (int ********)0x3;
            ppppppppiStack_180 = (int ********)0x4653c2;
            __vbaFreeObjList();
            ppppppppiStack_180 = (int ********)local_a0;
            ppppppppiStack_184 = local_90;
            pppppppiStack_188 = local_80;
            ppppppppiStack_18c = local_70;
            ppppppppiStack_190 = (int ********)local_60;
            pppppppiStack_194 = local_50;
            pppppppiStack_198 = (int *******)0x6;
            ppppppppiStack_19c = (int ********)0x4653e8;
            __vbaFreeVarList();
            ppppppppiStack_17c = (int ********)0x465401;
            iVar4 = __vbaNextEachCollObj();
          }
          ppppppppiStack_17c = (int ********)param_1;
          ppppppppiStack_180 = (int ********)0x465419;
          ppppppppiStack_180 = (int ********)(*(code *)(*param_1)[0xe5])();
          ppppppppiStack_184 = &local_38;
          pppppppiStack_188 = (int *******)0x465420;
          pppppppiStack_188 = (int *******)(*pcVar12)();
          ppppppppiStack_18c = (int ********)local_50;
          ppppppppiStack_190 = (int ********)0x46542b;
          ppppppppiStack_180 = (int ********)__vbaLateIdCallLd();
          ppppppppiStack_184 = (int ********)0x465435;
          ppppppppiStack_17c = (int ********)__vbaCastObjVar();
          ppppppppiStack_180 = (int ********)&local_3c;
          ppppppppiStack_184 = (int ********)0x46543c;
          (*pcVar12)();
          ppppppppiStack_184 = (int ********)&local_3c;
          pppppppiStack_188 = (int *******)param_1;
          ppppppppiStack_18c = (int ********)0x465449;
          (*(code *)(*param_1)[0x1c1])();
          ppppppppiStack_150 = (int ********)&local_3c;
          ppppppppiStack_154 = &local_38;
          ppppppppiStack_158 = (int ********)0x2;
          ppppppppiStack_15c = (int ********)0x465459;
          __vbaFreeObjList();
          ppppppppiStack_150 = (int ********)0x465465;
          __vbaFreeVar();
        }
      }
      ppppppppiStack_14c = (int ********)&LAB_00465505;
      ppppppppiStack_150 = (int ********)&local_108;
      ppppppppiStack_154 = (int ********)&local_104;
      ppppppppiStack_158 = (int ********)&local_100;
      ppppppppiStack_15c = &local_fc;
      ppppppppiStack_160 = (int ********)&local_f8;
      ppppppppiStack_164 = local_f4;
      ppppppppiStack_168 = (int ********)0x6;
      __vbaFreeObjList();
      ppppppppiStack_150 = (int ********)0x4654fa;
      __vbaFreeObj();
      ppppppppiStack_150 = (int ********)0x4654ff;
      __vbaFreeObj();
      ppppppppiStack_150 = (int ********)0x465504;
      __vbaFreeObj();
      return;
    }
    ppppppppiStack_14c = (int ********)param_1;
    ppppppppiStack_150 = (int ********)0x464982;
    ppppppppiStack_150 = (int ********)(*(code *)(*param_1)[0xd6])();
    ppppppppiStack_154 = &local_38;
    ppppppppiStack_158 = (int ********)0x464989;
    ppppppppiStack_160 = (int ********)(*pcVar12)();
    ppppppppiStack_158 = (int ********)&local_3c;
    ppppppppiStack_15c = (int ********)local_1c;
    ppppppppiStack_164 = (int ********)0x46499d;
    local_dc = ppppppppiStack_160;
    iVar4 = (*(code *)(*ppppppppiStack_160)[0x10])();
    if (iVar4 < 0) {
      ppppppppiStack_164 = (int ********)0x40;
      ppppppppiStack_168 = (int ********)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_164 = local_d4;
    ppppppppiStack_168 = local_3c;
    local_e4 = local_3c;
    iVar4 = (*(code *)(*local_3c)[0x3c])();
    if (iVar4 < 0) {
      ppppppppiStack_17c = (int ********)0x4649ef;
      __vbaHresultCheckObj();
    }
    local_48 = (short)local_d4[0];
    local_70[0] = (int *******)0x1;
    local_58 = 0;
    local_60[0] = (int ******)0x2;
    local_50[0] = (int ******)0x2;
    ppppppppiStack_17c = (int ********)0x464a28;
    FUN_00441030(local_80,local_50,local_60,local_70);
    ppppppppiStack_17c = (int ********)local_80;
    ppppppppiStack_180 = (int ********)0x464a32;
    local_28 = (int ********)__vbaI2Var();
    ppppppppiStack_180 = (int ********)&local_3c;
    ppppppppiStack_184 = &local_38;
    pppppppiStack_188 = (int *******)0x2;
    ppppppppiStack_18c = (int ********)0x464a44;
    __vbaFreeObjList();
    ppppppppiStack_18c = (int ********)local_80;
    ppppppppiStack_190 = local_70;
    pppppppiStack_194 = local_60;
    pppppppiStack_198 = local_50;
    ppppppppiStack_19c = (int ********)0x4;
    ppppppppiStack_1a0 = (int ********)0x464a5c;
    __vbaFreeVarList();
    ppppppppiStack_180 = (int ********)param_1;
    ppppppppiStack_184 = (int ********)0x464a68;
    ppppppppiStack_184 = (int ********)(*(code *)(*param_1)[0xd6])();
    pppppppiStack_188 = (int *******)&local_38;
    ppppppppiStack_18c = (int ********)0x464a6f;
    ppppppppiVar5 = (int ********)(*pcVar12)();
    ppppppppiStack_18c = (int ********)&local_3c;
    ppppppppiStack_190 = (int ********)local_1c;
    pppppppiStack_198 = (int *******)0x464a7f;
    pppppppiStack_194 = (int *******)ppppppppiVar5;
    ppppppppiVar6 = (int ********)(*(code *)(*ppppppppiVar5)[0x10])();
    if ((int)ppppppppiVar6 < 0) {
      pppppppiStack_198 = (int *******)0x40;
      ppppppppiStack_19c = (int ********)&DAT_004182e4;
      ppppppppiStack_1a8 = (int ********)0x464a94;
      ppppppppiStack_1a4 = ppppppppiVar6;
      ppppppppiStack_1a0 = ppppppppiVar5;
      __vbaHresultCheckObj();
    }
    ppppppppiVar5 = local_3c;
    pppppppiStack_198 = (int *******)local_d4;
    ppppppppiStack_19c = local_3c;
    ppppppppiStack_1a0 = (int ********)0x464aa9;
    ppppppppiStack_1ac = (int ********)(*(code *)(*local_3c)[0x3a])();
    if ((int)ppppppppiStack_1ac < 0) {
      ppppppppiStack_1a0 = (int ********)0xe8;
      ppppppppiStack_1a4 = (int ********)&DAT_0041807c;
      ppppppppiStack_1a8 = ppppppppiVar5;
      ppppppppiStack_1b0 = (int ********)0x464ac1;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_1a0 = (int ********)&local_3c;
    bVar16 = (short)local_d4[0] == 0;
    ppppppppiStack_1a4 = &local_38;
    ppppppppiStack_1a8 = (int ********)0x2;
    ppppppppiStack_1ac = (int ********)0x464ae2;
    __vbaFreeObjList();
    if (bVar16) {
      ppppppppiStack_1a4 = (int ********)param_1[0xe];
      ppppppppiStack_1a0 = &local_38;
      ppppppppiStack_1a8 = (int ********)0x464afb;
      pppppppppiVar7 = (int *********)(*(code *)(*ppppppppiStack_1a4)[0x1c])();
      if ((int)pppppppppiVar7 < 0) {
        ppppppppiStack_1b0 = (int ********)param_1[0xe];
        ppppppppiStack_1a8 = (int ********)0x70;
        ppppppppiStack_1ac = (int ********)&LAB_004133e8;
        ppppppppiStack_1b8 = (int ********)0x464b13;
        ppppppppiStack_1b4 = (int ********)pppppppppiVar7;
        __vbaHresultCheckObj();
      }
      pppppppiVar9 = local_38;
      ppppppppiStack_1a8 = (int ********)&local_3c;
      ppppppppiStack_1ac = (int ********)local_38;
      ppppppppiStack_1b0 = (int ********)0x464b22;
      pppppppppiVar7 = (int *********)(*(code *)(*local_38)[0x1b])();
      if ((int)pppppppppiVar7 < 0) {
        ppppppppiStack_1b0 = (int ********)0x6c;
        ppppppppiStack_1b4 = (int ********)&LAB_004133f8;
        ppppppppiStack_1b8 = (int ********)pppppppiVar9;
        ppppppppiStack_1c0 = (int ********)0x464b37;
        ppppppppiStack_1bc = (int ********)pppppppppiVar7;
        __vbaHresultCheckObj();
      }
      ppppppppiStack_1b4 = &local_fc;
      ppppppppiStack_1b0 = local_3c;
      local_3c = (int ********)0x0;
      ppppppppiStack_1b8 = (int ********)0x464b4b;
      ppppppppiStack_1a0 = (int ********)(*pcVar12)();
      ppppppppiStack_1a4 = (int ********)&local_2c;
      ppppppppiStack_1a8 = (int ********)&local_100;
      ppppppppiStack_1ac = (int ********)&DAT_00414268;
      ppppppppiStack_1b0 = (int ********)0x464b62;
      iVar4 = __vbaForEachCollObj();
      ppppppppiStack_1a0 = (int ********)0x464b6d;
      __vbaFreeObj();
      while (iVar4 != 0) {
        ppppppppiStack_1a0 = (int ********)param_1;
        ppppppppiStack_1a4 = (int ********)0x464b7e;
        ppppppppiStack_1a4 = (int ********)(*(code *)(*param_1)[0xd6])();
        ppppppppiStack_1a8 = &local_38;
        ppppppppiStack_1ac = (int ********)0x464b85;
        pppppppppiVar7 = (int *********)(*pcVar12)();
        ppppppppiStack_1ac = (int ********)&local_3c;
        ppppppppiStack_1b0 = (int ********)local_1c;
        ppppppppiStack_1b8 = (int ********)0x464b95;
        ppppppppiStack_1b4 = (int ********)pppppppppiVar7;
        ppppiVar8 = (int ****)(*(code *)(*pppppppppiVar7)[0x10])();
        if ((int)ppppiVar8 < 0) {
          ppppppppiStack_1b8 = (int ********)0x40;
          ppppppppiStack_1bc = (int ********)&DAT_004182e4;
          ppppppppiStack_1c8 = (int ********)0x464baa;
          ppppiStack_1c4 = ppppiVar8;
          ppppppppiStack_1c0 = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppppiVar5 = local_3c;
        ppppppppiStack_1b8 = &local_30;
        ppppppppiStack_1bc = local_2c;
        ppppppppiStack_1c0 = (int ********)0x464bbf;
        pppppppiStack_1cc = (int *******)(*(code *)(*local_2c)[7])();
        if ((int)pppppppiStack_1cc < 0) {
          ppppppppiStack_1c0 = (int ********)0x1c;
          ppppiStack_1c4 = (int ****)&DAT_00414268;
          ppppppppiStack_1c8 = local_2c;
          pppppppiStack_1d0 = (int *******)0x464bd7;
          __vbaHresultCheckObj();
        }
        pppppppiStack_1cc = (int *******)0xa;
        ppppppppiStack_1c8 = (int ********)local_ac;
        ppppiStack_1c4 = (int ****)0x80020004;
        ppppppppiStack_1c0 = local_a4;
        pppppppiStack_1d0 = local_30;
        ppppppppiStack_1d4 = ppppppppiVar5;
        ppppppppiStack_1d8 = (int ********)0x464c05;
        pppppppppiVar7 = (int *********)(*(code *)(*ppppppppiVar5)[0x7b])();
        if ((int)pppppppppiVar7 < 0) {
          ppppppppiStack_1a0 = (int ********)0x1ec;
          ppppppppiStack_1a4 = (int ********)&DAT_0041807c;
          ppppppppiStack_1a8 = ppppppppiVar5;
          ppppppppiStack_1b0 = (int ********)0x464c1d;
          ppppppppiStack_1ac = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_1a0 = (int ********)0x464c26;
        __vbaFreeStr();
        ppppppppiStack_1a0 = (int ********)&local_3c;
        ppppppppiStack_1a4 = &local_38;
        ppppppppiStack_1a8 = (int ********)0x2;
        ppppppppiStack_1ac = (int ********)0x464c36;
        __vbaFreeObjList();
        ppppppppiStack_1a0 = (int ********)&local_2c;
        ppppppppiStack_1a4 = (int ********)&local_100;
        ppppppppiStack_1a8 = (int ********)&DAT_00414268;
        ppppppppiStack_1ac = (int ********)0x464c4f;
        iVar4 = __vbaNextEachCollObj();
        pcVar12 = __vbaObjSet_exref;
      }
    }
    ppppppppiStack_1a0 = (int ********)param_1;
    ppppppppiStack_1a4 = (int ********)0x464c65;
    ppppppppiStack_1a4 = (int ********)(*(code *)(*param_1)[0xd6])();
    ppppppppiStack_1a8 = &local_38;
    ppppppppiStack_1ac = (int ********)0x464c6c;
    pppppppppiVar7 = (int *********)(*pcVar12)();
    ppppppppiStack_1ac = (int ********)&local_3c;
    ppppppppiStack_1b0 = (int ********)local_1c;
    ppppppppiStack_1b8 = (int ********)0x464c7c;
    ppppppppiStack_1b4 = (int ********)pppppppppiVar7;
    ppppiVar8 = (int ****)(*(code *)(*pppppppppiVar7)[0x10])();
    if ((int)ppppiVar8 < 0) {
      ppppppppiStack_1b8 = (int ********)0x40;
      ppppppppiStack_1bc = (int ********)&DAT_004182e4;
      ppppppppiStack_1c8 = (int ********)0x464c91;
      ppppiStack_1c4 = ppppiVar8;
      ppppppppiStack_1c0 = (int ********)pppppppppiVar7;
      __vbaHresultCheckObj();
    }
    pppppppppiVar7 = (int *********)local_3c;
    ppppppppiStack_1b8 = local_28;
    ppppppppiStack_1bc = local_3c;
    ppppppppiStack_1c0 = (int ********)0x464ca3;
    ppppppppiStack_158 = (int ********)(*(code *)(*local_3c)[0x3d])();
    if ((int)ppppppppiStack_158 < 0) {
      ppppppppiStack_14c = (int ********)0xf4;
      ppppppppiStack_150 = (int ********)&DAT_0041807c;
      ppppppppiStack_154 = (int ********)pppppppppiVar7;
      ppppppppiStack_15c = (int ********)0x464cbb;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_14c = (int ********)&local_3c;
    ppppppppiStack_150 = &local_38;
    ppppppppiStack_154 = (int ********)0x2;
    ppppppppiStack_158 = (int ********)0x464ccb;
    __vbaFreeObjList();
    ppppppppiVar5 = (int ********)(uint)(ushort)((short)local_1c + 1);
  } while (!SCARRY2((short)local_1c,1));
LAB_0046551a:
  ppppppppiStack_14c = (int ********)0x465520;
  __vbaErrorOverflow();
  ppppppppiStack_154 = (int ********)&LAB_004032d6;
  ppppppppiStack_158 = ExceptionList;
  pppppiStack_218 = param_1;
  ppppppppiStack_150 = (int ********)&ppppppppiStack_21c;
  ppppppppiStack_14c = (int ********)&LAB_00402b30;
  ppppppppiStack_220 = (int ********)0x0;
  ppppppppiStack_224 = (int ********)&DAT_00417d44;
  ppppppppiStack_228 = (int ********)0x0;
  ppppppppiStack_22c = (int ********)0xd;
  ppppppppiStack_15c = (int ********)0x0;
  ppppppppiStack_164 = (int ********)0x0;
  ppppppppiStack_168 = (int ********)0x0;
  pppppppppiVar18 = (int *********)0x0;
  ppppppppiStack_17c = (int ********)0x0;
  ppppppppiStack_180 = (int ********)0x0;
  ppppppppiStack_184 = (int ********)0x0;
  pppppppiStack_188 = (int *******)0x0;
  ppppppppiStack_18c = (int ********)0x0;
  ppppppppiStack_19c = (int ********)0x0;
  ppppppppiStack_1a0 = (int ********)0x0;
  ppppppppiStack_1a4 = (int ********)0x0;
  ppppppppiStack_1a8 = (int ********)0x0;
  ppppppppiStack_1ac = (int ********)0x0;
  ppppppppiStack_234 = (int ********)0x465596;
  ExceptionList = &ppppppppiStack_158;
  ppppppppiStack_21c = (int ********)pppppppppiVar7;
  pppppiStack_214 = (int *****)pcVar12;
  ppppppppiStack_234 = (int ********)(*(code *)(*unaff_EBX)[0xe5])();
  ppppppppiStack_238 = (int ********)&ppppppppiStack_17c;
  ppppppppiStack_234 = (int ********)__vbaObjSet();
  ppppppppiStack_238 = (int ********)&ppppppppiStack_19c;
  ppppppppiStack_22c = (int ********)__vbaLateIdCallLd();
  ppppppppiStack_230 = (int ********)0x4655b8;
  ppppppppiStack_228 = (int ********)__vbaCastObjVar();
  ppppppppiStack_22c = (int ********)&ppppppppiStack_180;
  ppppppppiStack_230 = (int ********)0x4655bf;
  ppppppppiStack_228 = (int ********)__vbaObjSet();
  ppppppppiStack_22c = (int ********)0x4655c6;
  uVar3 = __vbaObjIs();
  ppppppppiStack_224 = (int ********)&ppppppppiStack_180;
  ppppppppiStack_228 = (int ********)&ppppppppiStack_17c;
  ppppppppiStack_22c = (int ********)0x2;
  ppppppppiStack_1b0 = (int ********)CONCAT22(ppppppppiStack_1b0._2_2_,~uVar3);
  ppppppppiStack_230 = (int ********)0x4655dc;
  __vbaFreeObjList();
  ppppppppiStack_224 = (int ********)0x4655e8;
  __vbaFreeVar();
  if ((short)ppppppppiStack_1b0 != 0) {
    ppppppppiStack_220 = (int ********)&DAT_00417d44;
    ppppppppiStack_224 = (int ********)0x0;
    ppppppppiStack_228 = (int ********)0xd;
    ppppppppiStack_230 = (int ********)0x4655ff;
    ppppppppiStack_230 = (int ********)(*(code *)(*unaff_EBX)[0xe5])();
    ppppppppiStack_234 = (int ********)&ppppppppiStack_17c;
    ppppppppiStack_238 = (int ********)0x465606;
    ppppppppiStack_230 = (int ********)__vbaObjSet();
    ppppppppiStack_234 = (int ********)&ppppppppiStack_19c;
    ppppppppiStack_238 = (int ********)0x465611;
    ppppppppiStack_228 = (int ********)__vbaLateIdCallLd();
    ppppppppiStack_22c = (int ********)0x46561b;
    ppppppppiStack_224 = (int ********)__vbaCastObjVar();
    ppppppppiStack_228 = (int ********)&ppppppppiStack_180;
    ppppppppiStack_22c = (int ********)0x465622;
    ppppppppiStack_224 = (int ********)__vbaObjSet();
    ppppppppiStack_228 = (int ********)*puStack_13c;
    ppppppppiStack_22c = (int ********)0x46562f;
    sVar2 = __vbaObjIs();
    ppppppppiStack_224 = (int ********)&ppppppppiStack_180;
    ppppppppiStack_228 = (int ********)&ppppppppiStack_17c;
    ppppppppiStack_22c = (int ********)0x2;
    ppppppppiStack_230 = (int ********)0x465644;
    __vbaFreeObjList();
    ppppppppiStack_224 = (int ********)0x465650;
    __vbaFreeVar();
    if (sVar2 != -1) goto LAB_004660a5;
  }
  ppppppppiStack_224 = unaff_EBX[0xf];
  ppppppppiStack_220 = (int ********)0x0;
  ppppppppiStack_228 = (int ********)0x465666;
  sVar2 = __vbaObjIs();
  ppppppppiStack_224 = (int ********)*puStack_13c;
  ppppppppiStack_220 = (int ********)0x0;
  uStack_200 = (uint)(sVar2 == 0);
  ppppppppiStack_228 = (int ********)0x46567e;
  sVar2 = __vbaObjIs();
  if ((sVar2 == 0 & uStack_200) != 0) {
    ppppppppiStack_224 = unaff_EBX[0xf];
    ppppppppiStack_220 = (int ********)&ppppppppiStack_17c;
    ppppppppiStack_228 = (int ********)0x46569f;
    pppppppppiVar7 = (int *********)(*(code *)(*ppppppppiStack_224)[0x1b])();
    pcVar12 = __vbaHresultCheckObj_exref;
    if ((int)pppppppppiVar7 < 0) {
      ppppppppiStack_230 = unaff_EBX[0xf];
      ppppppppiStack_228 = (int ********)0x6c;
      ppppppppiStack_22c = (int ********)&LAB_004133e8;
      ppppppppiStack_238 = (int ********)0x4656b9;
      ppppppppiStack_234 = (int ********)pppppppppiVar7;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_1bc = ppppppppiStack_17c;
    ppppppppiStack_228 = (int ********)&ppppppppiStack_168;
    ppppppppiStack_22c = (int ********)*puStack_13c;
    ppppppppiStack_230 = (int ********)0x4656d9;
    ppppppppiStack_1b0 = ppppppppiStack_22c;
    iVar4 = (*(code *)(*ppppppppiStack_22c)[0x13])();
    if (iVar4 < 0) {
      ppppppppiStack_230 = (int ********)0x4c;
      ppppppppiStack_234 = (int ********)&DAT_00417d44;
      ppppppppiStack_238 = ppppppppiStack_1b0;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_230 = (int ********)&ppppppppiStack_180;
    pppppppiStack_194 = (int *******)ppppppppiStack_168;
    ppppppppiStack_234 = (int ********)&ppppppppiStack_19c;
    ppppppppiStack_168 = (int ********)0x0;
    ppppppppiStack_19c = (int ********)0x8;
    ppppppppiStack_238 = ppppppppiStack_1bc;
    pppppppppiVar7 = (int *********)(*(code *)(*ppppppppiStack_1bc)[9])();
    if ((int)pppppppppiVar7 < 0) {
      ppppppppiStack_224 = (int ********)0x24;
      ppppppppiStack_228 = (int ********)&DAT_004146fc;
      ppppppppiStack_22c = ppppppppiStack_1bc;
      ppppppppiStack_234 = (int ********)0x465722;
      ppppppppiStack_230 = (int ********)pppppppppiVar7;
      __vbaHresultCheckObj();
    }
    ppppppppiStack_224 = ppppppppiStack_180;
    ppppppppiStack_180 = (int ********)0x0;
    ppppppppiStack_228 = (int ********)&ppppppppiStack_164;
    ppppppppiStack_22c = (int ********)0x465733;
    __vbaObjSet();
    ppppppppiStack_224 = (int ********)0x46573c;
    __vbaFreeObj();
    ppppppppiStack_224 = (int ********)0x465745;
    __vbaFreeVar();
    ppppppppiStack_220 = (int ********)0x0;
    ppppppppiStack_224 = ppppppppiStack_164;
    ppppppppiStack_228 = (int ********)0x465750;
    sVar2 = __vbaObjIs();
    if (sVar2 == 0) {
      ppppppppiStack_220 = (int ********)0x0;
      ppppppppiStack_224 = (int ********)0x0;
      ppppppppiStack_22c = (int ********)0x465766;
      ppppppppiStack_22c = (int ********)(*(code *)(*unaff_EBX)[0xe3])();
      ppppppppiStack_230 = (int ********)&ppppppppiStack_17c;
      ppppppppiStack_234 = (int ********)0x465771;
      ppppppppiStack_22c = (int ********)__vbaObjSet();
      ppppppppiStack_230 = (int ********)&ppppppppiStack_19c;
      ppppppppiStack_234 = (int ********)0x46577c;
      ppppppppiStack_224 = (int ********)__vbaLateIdCallLd();
      ppppppppiStack_228 = (int ********)0x465786;
      __vbaI4Var();
      ppppppppiStack_228 = (int ********)0x46578e;
      pppppppiStack_1dc = (int *******)__vbaI2I4();
      pppppppppiVar13 = (int *********)0x1;
      ppppppppiStack_160 = (int ********)0x1;
      ppppppppiStack_224 = (int ********)0x4657a5;
      __vbaFreeObj();
      ppppppppiStack_224 = (int ********)0x4657ae;
      __vbaFreeVar();
      pppppppppiVar7 = (int *********)ppppppppiStack_160;
      while (ppppppppiStack_160 = (int ********)pppppppppiVar7,
            (short)pppppppppiVar13 <= (short)pppppppiStack_1dc) {
        ppppppppiStack_224 = (int ********)0x4657c4;
        ppppppppiStack_224 = (int ********)(*(code *)(*unaff_EBX)[0xc5])();
        ppppppppiStack_228 = (int ********)&ppppppppiStack_17c;
        ppppppppiStack_22c = (int ********)0x4657cf;
        ppppppppiStack_22c = (int ********)__vbaObjSet();
        ppppppppiStack_224 = (int ********)&ppppppppiStack_180;
        ppppppppiStack_230 = (int ********)0x4657dd;
        ppppppppiStack_228 = (int ********)pppppppppiVar13;
        ppppppppiStack_1b0 = ppppppppiStack_22c;
        iVar4 = (*(code *)(*ppppppppiStack_22c)[0x10])();
        if (iVar4 < 0) {
          ppppppppiStack_230 = (int ********)0x40;
          ppppppppiStack_234 = (int ********)&DAT_004182e4;
          ppppppppiStack_238 = ppppppppiStack_1b0;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_230 = (int ********)&stack0xfffffe94;
        ppppppppiStack_234 = ppppppppiStack_180;
        ppppppppiStack_1b8 = ppppppppiStack_180;
        ppppppppiStack_238 = (int ********)0x465804;
        iVar4 = (*(code *)(*ppppppppiStack_180)[0x28])();
        if (iVar4 < 0) {
          ppppppppiStack_238 = (int ********)0xa0;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_238 = (int ********)unaff_EBX;
        (*(code *)(*unaff_EBX)[199])();
        ppppiStack_1c4 = (int ****)__vbaObjSet();
        pppppppppiVar7 = (int *********)(*(code *)(*ppppiStack_1c4)[0x10])();
        if ((int)pppppppppiVar7 < 0) {
          ppppppppiStack_258 = (int ********)0x465851;
          ppppppppiStack_254 = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        pppppppiVar9 = pppppppiStack_188;
        pppppppiStack_1cc = pppppppiStack_188;
        pppppppppiVar7 = (int *********)(*(code *)(*ppppppppiStack_164)[9])();
        if ((int)pppppppppiVar7 < 0) {
          ppppppppiStack_254 = (int ********)&LAB_0041470c;
          ppppppppiStack_258 = ppppppppiStack_164;
          ppppppppiStack_260 = (int ********)0x46587b;
          ppppppppiStack_25c = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_168 = (int ********)0x0;
        __vbaStrMove();
        __vbaStrCopy();
        pppppppiVar9 = (int *******)*pppppppiVar9;
        ppppppppiStack_254 = (int ********)0x4658af;
        FUN_004419b0(pppppppppiVar18,(undefined4 *)&stack0xfffffe90,(undefined4 *)&stack0xfffffe8c);
        ppppppppiStack_254 = (int ********)0x4658ba;
        ppppppppiStack_254 = (int ********)__vbaStrMove();
        pppppppiVar1 = pppppppiStack_1cc;
        ppppppppiStack_258 = (int ********)pppppppiStack_1cc;
        ppppppppiStack_25c = (int ********)0x4658ca;
        iVar4 = (*(code *)pppppppiVar9[0x29])();
        if (iVar4 < 0) {
          ppppppppiStack_25c = (int ********)0xa4;
          ppppppppiStack_260 = (int ********)&DAT_00417a98;
          __vbaHresultCheckObj(iVar4,pppppppiVar1);
        }
        ppppppppiStack_25c = (int ********)&stack0xfffffe88;
        ppppppppiStack_260 = (int ********)&stack0xfffffe8c;
        __vbaFreeStrList(4,&stack0xfffffe94,&stack0xfffffe90);
        __vbaFreeObjList(4,&ppppppppiStack_17c,&ppppppppiStack_180,&ppppppppiStack_184,
                         &pppppppiStack_188);
        ppppppppiStack_260 = (int ********)0x46591a;
        ppppppppiStack_25c = (int ********)unaff_EBX;
        ppppppppiStack_260 = (int ********)(*(code *)(*unaff_EBX)[0xc6])();
        piVar10 = (int *)__vbaObjSet(&ppppppppiStack_17c);
        ppppppppiStack_260 = (int ********)&ppppppppiStack_180;
        iVar4 = (**(code **)(*piVar10 + 0x40))(piVar10,ppppppppiStack_160);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar10,&DAT_004182e4,0x40);
        }
        ppppppppiVar5 = ppppppppiStack_180;
        iVar4 = (*(code *)(*ppppppppiStack_180)[0x28])(ppppppppiStack_180,&ppppppppiStack_168);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,ppppppppiVar5,&DAT_00417a98,0xa0);
        }
        uVar11 = (*(code *)(*unaff_EBX)[0xd1])(unaff_EBX);
        piVar10 = (int *)__vbaObjSet(&ppppppppiStack_184,uVar11);
        iVar4 = (**(code **)(*piVar10 + 0xe0))(piVar10,&ppppppppiStack_1a0);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar10,&DAT_00417e48,0xe0);
        }
        uVar11 = (*(code *)(*unaff_EBX)[200])(unaff_EBX);
        piVar10 = (int *)__vbaObjSet(&pppppppiStack_188,uVar11);
        iVar4 = (**(code **)(*piVar10 + 0x40))(piVar10,ppppppppiStack_160,&ppppppppiStack_18c);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar10,&DAT_004182e4,0x40);
        }
        ppppppppiStack_1ac = (int ********)0x0;
        ppppppppiStack_1a8 = (int ********)0x0;
        pppppppiStack_1d0 = (int *******)ppppppppiStack_18c;
        ppppppppiStack_1a4 = (int ********)-(uint)((short)ppppppppiStack_1a0 == 1);
        pppppppiVar9 = *ppppppppiStack_18c;
        FUN_0046ea50(ppppppppiStack_168,&ppppppppiStack_164,unaff_EBX + 0xd,unaff_EBX + 0x11,
                     (ushort *)&ppppppppiStack_1a4,(int *)&ppppppppiStack_1a8,
                     (int *)&ppppppppiStack_1ac);
        uVar11 = __vbaStrMove();
        pppppppiVar1 = pppppppiStack_1d0;
        ppppppppiStack_208 = (int ********)pppppppiVar9;
        iVar4 = (*(code *)pppppppiVar9[0x29])(pppppppiStack_1d0,uVar11);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,pppppppiVar1,&DAT_00417a98,0xa4);
        }
        __vbaFreeStrList(2,&ppppppppiStack_168,&stack0xfffffe94);
        __vbaFreeObjList(5,&ppppppppiStack_17c,&ppppppppiStack_184,&ppppppppiStack_180,
                         &pppppppiStack_188,&ppppppppiStack_18c);
        iVar4 = (*(code *)(*ppppppppiStack_164)[0x10])(ppppppppiStack_164,&ppppppppiStack_17c);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,ppppppppiStack_164,&LAB_0041470c,0x40);
        }
        sVar2 = __vbaObjIs(ppppppppiStack_17c,0);
        __vbaFreeObj();
        if (sVar2 == 0) {
          iVar4 = (*(code *)(*ppppppppiStack_164)[0x10])(ppppppppiStack_164,&ppppppppiStack_17c);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,ppppppppiStack_164,&LAB_0041470c,0x40);
          }
          ppppppppiVar5 = ppppppppiStack_17c;
          iVar4 = (*(code *)(*ppppppppiStack_17c)[0xf])(ppppppppiStack_17c,&ppppppppiStack_180);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,ppppppppiVar5,&LAB_0041470c,0x3c);
          }
          iVar4 = (int)(short)ppppppppiStack_160;
          ppppppppiStack_1c0 = ppppppppiStack_180;
          if (5 < iVar4 - 1U) {
            __vbaGenerateBoundsError();
          }
          ppppppppiVar5 =
               (int ********)
               (*(code *)(*ppppppppiStack_1c0)[0xb])
                         (ppppppppiStack_1c0,unaff_EBX[0x1a] + (iVar4 - 1U),&ppppppppiStack_184);
          if ((int)ppppppppiVar5 < 0) {
            ppppppppiStack_220 = (int ********)0x2c;
            ppppppppiStack_224 = (int ********)&DAT_00414ba4;
            ppppppppiStack_228 = ppppppppiStack_1c0;
            ppppppppiStack_230 = (int ********)0x465c25;
            ppppppppiStack_22c = ppppppppiVar5;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_224 = (int ********)&ppppppppiStack_15c;
          ppppppppiStack_220 = ppppppppiStack_184;
          ppppppppiStack_184 = (int ********)0x0;
          ppppppppiStack_228 = (int ********)0x465c3c;
          __vbaObjSet();
          ppppppppiStack_220 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_224 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_228 = (int ********)0x2;
          ppppppppiStack_22c = (int ********)0x465c4c;
          __vbaFreeObjList();
          ppppppppiStack_220 = (int ********)0x0;
          ppppppppiStack_224 = ppppppppiStack_15c;
          ppppppppiStack_228 = (int ********)0x465c5b;
          sVar2 = __vbaObjIs();
          if (sVar2 != 0) goto LAB_004660a5;
          ppppppppiStack_224 = (int ********)0x465c6d;
          ppppppppiStack_224 = (int ********)(*(code *)(*unaff_EBX)[0xc4])();
          ppppppppiStack_228 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_22c = (int ********)0x465c74;
          ppppppppiVar5 = (int ********)__vbaObjSet();
          ppppppppiStack_224 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_228 = ppppppppiStack_160;
          ppppppppiStack_230 = (int ********)0x465c84;
          ppppppppiStack_22c = ppppppppiVar5;
          iVar4 = (*(code *)(*ppppppppiVar5)[0x10])();
          if (iVar4 < 0) {
            ppppppppiStack_230 = (int ********)0x40;
            ppppppppiStack_234 = (int ********)&DAT_004182e4;
            ppppppppiStack_238 = ppppppppiVar5;
            __vbaHresultCheckObj();
          }
          ppppppppiVar5 = ppppppppiStack_180;
          ppppppppiStack_230 = (int ********)&ppppppppiStack_19c;
          ppppppppiStack_1bc = ppppppppiStack_180;
          ppppppppiStack_234 = ppppppppiStack_15c;
          ppppppppiStack_238 = (int ********)0x465ca8;
          iVar4 = (*(code *)(*ppppppppiStack_15c)[0xc])();
          if (iVar4 < 0) {
            ppppppppiStack_238 = (int ********)0x30;
            __vbaHresultCheckObj();
          }
          ppppppppiVar5 = (int ********)*ppppppppiVar5;
          ppppppppiStack_238 = (int ********)&ppppppppiStack_19c;
          ppppppppiStack_238 = (int ********)__vbaStrVarVal();
          iVar4 = (*(code *)ppppppppiVar5[0x29])();
          if (iVar4 < 0) {
            __vbaHresultCheckObj();
          }
          __vbaFreeStr();
          __vbaFreeObjList();
          __vbaFreeVar();
          (*(code *)(*unaff_EBX)[0xc3])();
          piVar10 = (int *)__vbaObjSet();
          ppppppppiVar5 = (int ********)(**(code **)(*piVar10 + 0x40))();
          if ((int)ppppppppiVar5 < 0) {
            ppppppppiStack_25c = (int ********)0x465d47;
            ppppppppiStack_258 = ppppppppiVar5;
            ppppppppiStack_254 = (int ********)piVar10;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_1c0 = ppppppppiStack_180;
          ppppppppiStack_254 = (int ********)0x465d5a;
          ppppppppiStack_260 = (int ********)(*(code *)(*ppppppppiStack_15c)[0xc])();
          if ((int)ppppppppiStack_260 < 0) {
            ppppppppiStack_254 = (int ********)0x30;
            ppppppppiStack_258 = (int ********)&DAT_00414bb4;
            ppppppppiStack_25c = ppppppppiStack_15c;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_254 = (int ********)&stack0xfffffe94;
          ppppppppiStack_258 = (int ********)&ppppppppiStack_19c;
          pppppppiVar9 = *unaff_EBX[0xd];
          ppppppppiStack_25c = (int ********)&ppppppppiStack_168;
          ppppppppiStack_260 = (int ********)0x465d85;
          ppppppppiStack_258 = (int ********)__vbaStrVarVal();
          ppppppppiStack_25c = unaff_EBX[0xd];
          ppppppppiStack_260 = (int ********)0x465d8d;
          iVar4 = (*(code *)pppppppiVar9[0x15])();
          ppppppppiStack_260 = (int ********)pppppppppiVar18;
          if (iVar4 < 0) {
            ppppppppiStack_260 = (int ********)0x54;
            __vbaHresultCheckObj(iVar4,unaff_EBX[0xd],&LAB_00414228);
            ppppppppiStack_260 = (int ********)pppppppppiVar18;
          }
          pppppppppiVar14 = (int *********)ppppppppiStack_1c0;
          pppppppppiVar18 = (int *********)ppppppppiStack_260;
          ppppppppiStack_230 =
               (int ********)(*(code *)(*ppppppppiStack_1c0)[0x29])(ppppppppiStack_1c0);
          if ((int)ppppppppiStack_230 < 0) {
            ppppppppiStack_224 = (int ********)0xa4;
            ppppppppiStack_228 = (int ********)&DAT_00417a98;
            ppppppppiStack_22c = (int ********)pppppppppiVar14;
            ppppppppiStack_234 = (int ********)0x465dc5;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_224 = (int ********)&stack0xfffffe94;
          ppppppppiStack_228 = (int ********)&ppppppppiStack_168;
          ppppppppiStack_22c = (int ********)0x2;
          ppppppppiStack_230 = (int ********)0x465dd5;
          __vbaFreeStrList();
          ppppppppiStack_230 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_234 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_238 = (int ********)0x2;
          __vbaFreeObjList();
          ppppppppiStack_224 = (int ********)0x465df1;
          __vbaFreeVar();
        }
        else {
          uVar11 = (*(code *)(*unaff_EBX)[0xc4])(unaff_EBX);
          piVar10 = (int *)__vbaObjSet(&ppppppppiStack_17c,uVar11);
          iVar4 = (**(code **)(*piVar10 + 0x40))(piVar10,ppppppppiStack_160,&ppppppppiStack_180);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar10,&DAT_004182e4,0x40);
          }
          ppppppppiVar5 = ppppppppiStack_180;
          iVar4 = (*(code *)(*ppppppppiStack_180)[0x29])(ppppppppiStack_180,&DAT_00412f74);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,ppppppppiVar5,&DAT_00417a98,0xa4);
          }
          __vbaFreeObjList(2,&ppppppppiStack_17c,&ppppppppiStack_180);
          uVar11 = (*(code *)(*unaff_EBX)[0xc3])(unaff_EBX);
          piVar10 = (int *)__vbaObjSet(&ppppppppiStack_17c,uVar11);
          iVar4 = (**(code **)(*piVar10 + 0x40))(piVar10,ppppppppiStack_160,&ppppppppiStack_180);
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar10,&DAT_004182e4,0x40);
          }
          pppppppppiVar14 = (int *********)ppppppppiStack_180;
          ppppppppiStack_22c =
               (int ********)
               (*(code *)(*ppppppppiStack_180)[0x29])(ppppppppiStack_180,&DAT_00412f74);
          if ((int)ppppppppiStack_22c < 0) {
            ppppppppiStack_220 = (int ********)0xa4;
            ppppppppiStack_224 = (int ********)&DAT_00417a98;
            ppppppppiStack_228 = (int ********)pppppppppiVar14;
            ppppppppiStack_230 = (int ********)0x465b8e;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_220 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_224 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_228 = (int ********)0x2;
          ppppppppiStack_22c = (int ********)0x465b9e;
          __vbaFreeObjList();
        }
        pppppppppiVar13 = (int *********)(uint)(ushort)((short)ppppppppiStack_160 + 1);
        pppppppppiVar7 = pppppppppiVar13;
        if (SCARRY2((short)ppppppppiStack_160,1)) goto LAB_00466117;
      }
      ppppppppiStack_220 = (int ********)0x0;
      ppppppppiStack_224 = (int ********)0x0;
      ppppppppiStack_22c = (int ********)0x465e17;
      ppppppppiStack_22c = (int ********)(*(code *)(*unaff_EBX)[0xe4])();
      ppppppppiStack_230 = (int ********)&ppppppppiStack_17c;
      ppppppppiStack_234 = (int ********)0x465e22;
      ppppppppiStack_22c = (int ********)__vbaObjSet();
      ppppppppiStack_230 = (int ********)&ppppppppiStack_19c;
      ppppppppiStack_234 = (int ********)0x465e2d;
      ppppppppiStack_224 = (int ********)__vbaLateIdCallLd();
      ppppppppiStack_228 = (int ********)0x465e37;
      __vbaI4Var();
      ppppppppiStack_228 = (int ********)0x465e3f;
      pppppppiStack_1e4 = (int *******)__vbaI2I4();
      ppppppppiStack_160 = (int ********)0x1;
      ppppppppiStack_224 = (int ********)0x465e55;
      __vbaFreeObj();
      ppppppppiStack_224 = (int ********)0x465e5e;
      __vbaFreeVar();
      pppppppppiVar7 = (int *********)ppppppppiStack_160;
      do {
        ppppppppiStack_160 = (int ********)pppppppppiVar7;
        if ((short)pppppppiStack_1e4 < (short)ppppppppiStack_160) goto LAB_004660a5;
        ppppppppiStack_220 = (int ********)&ppppppppiStack_17c;
        ppppppppiStack_224 = ppppppppiStack_164;
        ppppppppiStack_228 = (int ********)0x465e7c;
        pppppppppiVar7 = (int *********)(*(code *)(*ppppppppiStack_164)[0x10])();
        if ((int)pppppppppiVar7 < 0) {
          ppppppppiStack_228 = (int ********)0x40;
          ppppppppiStack_22c = (int ********)&LAB_0041470c;
          ppppppppiStack_230 = ppppppppiStack_164;
          ppppppppiStack_238 = (int ********)0x465e90;
          ppppppppiStack_234 = (int ********)pppppppppiVar7;
          __vbaHresultCheckObj();
        }
        ppppppppiStack_228 = (int ********)0x0;
        ppppppppiStack_22c = ppppppppiStack_17c;
        ppppppppiStack_230 = (int ********)0x465e9c;
        sVar2 = __vbaObjIs();
        ppppppppiStack_228 = (int ********)0x465ea8;
        __vbaFreeObj();
        if (sVar2 == 0) {
          ppppppppiStack_228 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_22c = ppppppppiStack_164;
          ppppppppiStack_230 = (int ********)0x465f2e;
          iVar4 = (*(code *)(*ppppppppiStack_164)[0x10])();
          if (iVar4 < 0) {
            ppppppppiStack_230 = (int ********)0x40;
            ppppppppiStack_234 = (int ********)&LAB_0041470c;
            ppppppppiStack_238 = ppppppppiStack_164;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_230 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_234 = ppppppppiStack_17c;
          ppppppppiStack_238 = (int ********)0x465f51;
          iVar4 = (*(code *)(*ppppppppiStack_17c)[0xf])();
          if (iVar4 < 0) {
            ppppppppiStack_238 = (int ********)0x3c;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_1c0 = ppppppppiStack_180;
          if (7 < (int)(short)ppppppppiStack_160 - 1U) {
            ppppppppiStack_238 = (int ********)0x465f78;
            __vbaGenerateBoundsError();
          }
          ppppppppiStack_238 = (int ********)&ppppppppiStack_184;
          ppppppppiVar5 = (int ********)(*(code *)(*ppppppppiStack_1c0)[0xb])();
          if ((int)ppppppppiVar5 < 0) {
            ppppppppiStack_220 = (int ********)0x2c;
            ppppppppiStack_224 = (int ********)&DAT_00414ba4;
            ppppppppiStack_228 = ppppppppiStack_1c0;
            ppppppppiStack_230 = (int ********)0x465fa3;
            ppppppppiStack_22c = ppppppppiVar5;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_224 = (int ********)&ppppppppiStack_15c;
          ppppppppiStack_220 = ppppppppiStack_184;
          ppppppppiStack_184 = (int ********)0x0;
          ppppppppiStack_228 = (int ********)0x465fb8;
          __vbaObjSet();
          ppppppppiStack_220 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_224 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_228 = (int ********)0x2;
          ppppppppiStack_22c = (int ********)0x465fc8;
          __vbaFreeObjList();
          ppppppppiStack_220 = (int ********)0x0;
          ppppppppiStack_224 = ppppppppiStack_15c;
          ppppppppiStack_228 = (int ********)0x465fd7;
          sVar2 = __vbaObjIs();
          if (sVar2 != 0) goto LAB_004660a5;
          ppppppppiStack_224 = (int ********)0x465fe9;
          ppppppppiStack_224 = (int ********)(*(code *)(*unaff_EBX)[0xd7])();
          ppppppppiStack_228 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_22c = (int ********)0x465ff4;
          pppppppppiVar7 = (int *********)__vbaObjSet();
          ppppppppiStack_224 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_228 = ppppppppiStack_160;
          ppppppppiStack_230 = (int ********)0x466004;
          ppppppppiStack_22c = (int ********)pppppppppiVar7;
          iVar4 = (*(code *)(*pppppppppiVar7)[0x10])();
          if (iVar4 < 0) {
            ppppppppiStack_230 = (int ********)0x40;
            ppppppppiStack_234 = (int ********)&DAT_004182e4;
            ppppppppiStack_238 = (int ********)pppppppppiVar7;
            __vbaHresultCheckObj();
          }
          ppppppppiVar5 = ppppppppiStack_180;
          ppppppppiStack_230 = (int ********)&ppppppppiStack_19c;
          ppppppppiStack_1bc = ppppppppiStack_180;
          ppppppppiStack_234 = ppppppppiStack_15c;
          ppppppppiStack_238 = (int ********)0x466028;
          iVar4 = (*(code *)(*ppppppppiStack_15c)[0xc])();
          if (iVar4 < 0) {
            ppppppppiStack_238 = (int ********)0x30;
            __vbaHresultCheckObj();
          }
          ppppppppiVar5 = (int ********)*ppppppppiVar5;
          ppppppppiStack_238 = (int ********)&ppppppppiStack_19c;
          ppppppppiStack_238 = (int ********)__vbaStrVarVal();
          pppppppppiVar14 = (int *********)ppppppppiStack_1bc;
          pppppppppiVar7 = (int *********)(*(code *)ppppppppiVar5[0x29])();
          if ((int)pppppppppiVar7 < 0) {
            ppppppppiStack_224 = (int ********)0xa4;
            ppppppppiStack_228 = (int ********)&DAT_00417a98;
            ppppppppiStack_22c = (int ********)pppppppppiVar14;
            ppppppppiStack_234 = (int ********)0x46606d;
            ppppppppiStack_230 = (int ********)pppppppppiVar7;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_224 = (int ********)0x466076;
          __vbaFreeStr();
          ppppppppiStack_224 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_228 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_22c = (int ********)0x2;
          ppppppppiStack_230 = (int ********)0x466086;
          __vbaFreeObjList();
          ppppppppiStack_224 = (int ********)0x466092;
          __vbaFreeVar();
        }
        else {
          ppppppppiStack_22c = (int ********)0x465eb6;
          ppppppppiStack_22c = (int ********)(*(code *)(*unaff_EBX)[0xd7])();
          ppppppppiStack_230 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_234 = (int ********)0x465ec1;
          ppppppppiStack_234 = (int ********)__vbaObjSet();
          ppppppppiStack_22c = (int ********)&ppppppppiStack_180;
          ppppppppiStack_230 = ppppppppiStack_160;
          ppppppppiStack_238 = (int ********)0x465ed1;
          iVar4 = (*(code *)(*ppppppppiStack_234)[0x10])();
          if (iVar4 < 0) {
            ppppppppiStack_238 = (int ********)0x40;
            __vbaHresultCheckObj();
          }
          pppppppppiVar14 = (int *********)ppppppppiStack_180;
          ppppppppiStack_238 = (int ********)&DAT_00412f74;
          ppppppppiStack_22c = (int ********)(*(code *)(*ppppppppiStack_180)[0x29])();
          if ((int)ppppppppiStack_22c < 0) {
            ppppppppiStack_220 = (int ********)0xa4;
            ppppppppiStack_224 = (int ********)&DAT_00417a98;
            ppppppppiStack_228 = (int ********)pppppppppiVar14;
            ppppppppiStack_230 = (int ********)0x465f09;
            __vbaHresultCheckObj();
          }
          ppppppppiStack_220 = (int ********)&ppppppppiStack_180;
          ppppppppiStack_224 = (int ********)&ppppppppiStack_17c;
          ppppppppiStack_228 = (int ********)0x2;
          ppppppppiStack_22c = (int ********)0x465f19;
          __vbaFreeObjList();
        }
        pppppppppiVar7 = (int *********)(uint)(ushort)((short)ppppppppiStack_160 + 1);
      } while (!SCARRY2((short)ppppppppiStack_160,1));
LAB_00466117:
      ppppppppiStack_220 = (int ********)0x46611d;
      __vbaErrorOverflow();
      ppppppppiStack_22c = (int ********)&LAB_004032d6;
      ppppppppiStack_230 = ExceptionList;
      ppppppppiStack_228 = (int ********)&ppppppppiStack_260;
      ppppppppiStack_260 = (int ********)pcVar12;
      ppppppppiStack_224 = (int ********)&DAT_00402b40;
      ppppppppiStack_220 = (int ********)((uint)pppppiStack_214 & 1);
      piVar15 = (int *)((uint)pppppiStack_214 & 0xfffffffe);
      ExceptionList = &ppppppppiStack_230;
      ppppppppiStack_258 = (int ********)pppppppppiVar14;
      ppppppppiStack_21c = (int ********)&stack0xfffffeb8;
      pppppiStack_214 = (int *****)piVar15;
      (**(code **)(*piVar15 + 4))(piVar15);
      uVar17 = 0;
      ppppppppiStack_234 = (int ********)0x0;
      ppppppppiStack_238 = (int ********)0x0;
      uVar11 = (**(code **)(*piVar15 + 0x394))(piVar15,0xd,0,&DAT_00417d44);
      uVar11 = __vbaObjSet(&ppppppppiStack_234,uVar11);
      uVar11 = __vbaLateIdCallLd(&stack0xfffffdb8,uVar11);
      uVar11 = __vbaCastObjVar(uVar11,uVar17);
      __vbaObjSet(&ppppppppiStack_238,uVar11);
      piVar10 = piVar15;
      (**(code **)(*piVar15 + 0x704))(piVar15,&ppppppppiStack_238);
      __vbaFreeObjList(2,&ppppppppiStack_234,&ppppppppiStack_238);
      __vbaFreeVar(piVar10);
      iVar4 = (**(code **)(*piVar15 + 0x740))(piVar15);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar15,&DAT_004170bc,0x740);
      }
      return;
    }
  }
LAB_004660a5:
  ppppppppiStack_220 = (int ********)&LAB_00466102;
  ppppppppiStack_224 = (int ********)0x4660fc;
  __vbaFreeObj();
  ppppppppiStack_224 = (int ********)0x466101;
  __vbaFreeObj();
  return;
}

/* ---- 0x466120 (FUN_00466120) [estimated] strings:  ---- */
void __cdecl FUN_00466120(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
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
  local_10 = &stack0xffffffb8;
  local_c = &DAT_00402b40;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  uVar5 = 0;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  uVar1 = (**(code **)(*piVar3 + 0x394))(piVar3,0xd,0,&DAT_00417d44);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_30,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar5);
  __vbaObjSet(&local_20,uVar1);
  piVar4 = piVar3;
  (**(code **)(*piVar3 + 0x704))(piVar3,&local_20);
  __vbaFreeObjList(2,&local_1c,&local_20);
  __vbaFreeVar(piVar4);
  iVar2 = (**(code **)(*piVar3 + 0x740))(piVar3);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar3,&DAT_004170bc,0x740);
  }
  return;
}

/* ---- 0x466240 (FUN_00466240) [estimated] strings:  ---- */
void __cdecl FUN_00466240(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_2c;
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
  local_10 = &stack0xffffffa8;
  local_c = &DAT_00402b50;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = 0;
  iVar2 = (**(code **)(*(int *)piVar5[0xd] + 0x44))((int *)piVar5[0xd],&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5[0xd],&LAB_00414228,0x44);
  }
  piVar1 = local_28;
  uVar3 = (**(code **)(*piVar5 + 0x374))(piVar5);
  piVar4 = (int *)__vbaObjSet(&local_24,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0xa8))(piVar4,&local_1c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_0041807c,0xa8);
  }
  local_1c = 0;
  __vbaStrMove();
  iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,&local_20,&local_2c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar1,&DAT_00414238,0x2c);
  }
  __vbaObjSetAddref(piVar5 + 0xf,local_2c);
  __vbaFreeStr();
  __vbaFreeObjList(3,&local_24,&local_28,&local_2c);
  (**(code **)(*piVar5 + 0x700))(piVar5);
  return;
}

/* ---- 0x4663c0 (FUN_004663c0) [estimated] strings: CTP Editor; Invalid file specification in ;  on line ; CTP Editor ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_004663c0(uint param_1,short *param_2)

{
  ushort uVar1;
  int ****ppppiVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int ***pppiVar7;
  int ***pppiVar8;
  int **ppiVar9;
  int ****ppppiVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 extraout_var;
  int *piVar13;
  int ****ppppiVar14;
  bool bVar15;
  int ***pppiStack_288;
  int ****ppppiStack_284;
  int ****ppppiStack_280;
  int *piStack_27c;
  int **ppiStack_278;
  int *apiStack_258 [4];
  short sStack_248;
  undefined4 uStack_240;
  int *piStack_23c;
  int *apiStack_238 [9];
  undefined4 uStack_214;
  wchar_t *pwStack_20c;
  undefined4 auStack_204 [2];
  undefined4 uStack_1fc;
  undefined4 auStack_1f4 [2];
  undefined4 uStack_1ec;
  undefined4 auStack_1e4 [4];
  undefined4 auStack_1d4 [2];
  undefined4 uStack_1cc;
  undefined4 uStack_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int *piStack_1a4;
  undefined4 uStack_1a0;
  int *piStack_19c;
  int *piStack_198;
  int *piStack_194;
  int ****ppppiStack_190;
  int ****ppppiStack_18c;
  int ****ppppiStack_188;
  int ****ppppiStack_184;
  int ****ppppiStack_180;
  int ****ppppiStack_17c;
  int ****ppppiStack_178;
  int ***pppiStack_174;
  int ***pppiStack_170;
  undefined4 *puStack_16c;
  int *piStack_168;
  int ****ppppiStack_164;
  int ****ppppiStack_160;
  int ****ppppiStack_15c;
  int ***pppiStack_158;
  int ****ppppiStack_154;
  int ***pppiStack_150;
  int ****ppppiStack_14c;
  int ****ppppiStack_148;
  int **ppiStack_144;
  int *piStack_140;
  int ***pppiStack_13c;
  undefined4 auStack_108 [3];
  undefined4 uStack_fc;
  int ***pppiStack_f8;
  int ***pppiStack_f4;
  int ***pppiStack_f0;
  int ***pppiStack_ec;
  int ***pppiStack_e8;
  int **ppiStack_e4;
  int ****ppppiStack_e0;
  int ***pppiStack_dc;
  int ***pppiStack_d8;
  int ***pppiStack_d4;
  int ****ppppiStack_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int *piStack_c0;
  int **ppiStack_bc;
  undefined4 *puStack_b8;
  int ****ppppiStack_b4;
  int ***pppiStack_b0;
  int ***pppiStack_ac;
  int *piStack_a8;
  int **ppiStack_a4;
  int ****ppppiStack_a0;
  int *piStack_9c;
  int ***pppiStack_98;
  int *piStack_94;
  undefined4 local_54 [5];
  int **local_40 [2];
  short local_38;
  undefined4 local_30;
  int ***local_2c;
  int **local_28;
  int **local_24;
  int **local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff70;
  local_c = &DAT_00402b60;
  local_8 = param_1 & 1;
  piVar13 = (int *)(param_1 & 0xfffffffe);
  pppiStack_98 = (int ***)0x466400;
  ExceptionList = &pvStack_18;
  piStack_94 = piVar13;
  (**(code **)(*piVar13 + 4))();
  piStack_9c = (int *)piVar13[0xe];
  pppiStack_98 = &local_28;
  local_1c = (int *)0x0;
  local_20 = (int **)0x0;
  local_24 = (int **)0x0;
  local_28 = (int **)0x0;
  local_2c = (int ***)0x0;
  local_30 = 0;
  local_40[0] = (int **)0x0;
  local_54[0] = 0;
  ppppiStack_a0 = (int ****)0x466427;
  iVar4 = (**(code **)(*piStack_9c + 0x70))();
  if (iVar4 < 0) {
    piStack_a8 = (int *)piVar13[0xe];
    ppppiStack_a0 = (int ****)0x70;
    ppiStack_a4 = (int **)&LAB_004133e8;
    pppiStack_b0 = (int ***)0x46643f;
    pppiStack_ac = (int ***)iVar4;
    __vbaHresultCheckObj();
  }
  ppiVar9 = local_28;
  ppppiStack_a0 = &local_2c;
  ppiStack_a4 = local_28;
  piStack_a8 = (int *)0x46644e;
  iVar4 = (*(code *)(*local_28)[0x1b])();
  if (iVar4 < 0) {
    piStack_a8 = (int *)0x6c;
    pppiStack_ac = (int ***)&LAB_004133f8;
    pppiStack_b0 = (int ***)ppiVar9;
    puStack_b8 = (undefined4 *)0x466463;
    ppppiStack_b4 = (int ****)iVar4;
    __vbaHresultCheckObj();
  }
  pppiVar8 = local_2c;
  pppiStack_ac = (int ***)0x46646f;
  piStack_a8 = piVar13;
  pppiStack_ac = (int ***)(**(code **)(*piVar13 + 0x308))();
  pppiStack_b0 = &local_20;
  ppppiStack_b4 = (int ****)0x46647a;
  piVar5 = (int *)__vbaObjSet();
  pppiStack_ac = &local_24;
  pppiStack_b0 = (int ***)CONCAT22((short)((uint)pppiStack_ac >> 0x10),*param_2);
  puStack_b8 = (undefined4 *)0x46648d;
  ppppiStack_b4 = (int ****)piVar5;
  puVar6 = (undefined *)(**(code **)(*piVar5 + 0x40))();
  if ((int)puVar6 < 0) {
    puStack_b8 = (undefined4 *)0x40;
    ppiStack_bc = (int **)&DAT_004182e4;
    pppiStack_c8 = (int ***)0x4664a2;
    pppiStack_c4 = (int ***)puVar6;
    piStack_c0 = piVar5;
    __vbaHresultCheckObj();
  }
  ppiVar9 = local_24;
  puStack_b8 = local_54;
  ppiStack_bc = local_24;
  piStack_c0 = (int *)0x4664b4;
  iVar4 = (*(code *)(*local_24)[0x3c])();
  if (iVar4 < 0) {
    piStack_c0 = (int *)0xf0;
    pppiStack_c4 = (int ***)&DAT_0041807c;
    pppiStack_c8 = (int ***)ppiVar9;
    ppppiStack_d0 = (int ****)0x4664cc;
    pppiStack_cc = (int ***)iVar4;
    __vbaHresultCheckObj();
  }
  piStack_c0 = &local_30;
  local_38 = (short)local_54[0] + 1;
  local_40[0] = (int **)0x2;
  if (!SCARRY2((short)local_54[0],1)) {
    pppiStack_c4 = local_40;
    pppiStack_c8 = pppiVar8;
    pppiStack_cc = (int ***)0x4664f3;
    pppiVar7 = (int ***)(*(code *)(*pppiVar8)[8])();
    if ((int)pppiVar7 < 0) {
      pppiStack_cc = (int ***)0x20;
      ppppiStack_d0 = (int ****)&LAB_00414248;
      pppiStack_d4 = pppiVar8;
      pppiStack_dc = (int ***)0x466508;
      pppiStack_d8 = pppiVar7;
      __vbaHresultCheckObj();
    }
    sVar3 = *param_2;
    if (5 < (int)sVar3 - 1U) {
      pppiStack_cc = (int ***)0x46651a;
      __vbaGenerateBoundsError();
    }
    pppiStack_cc = (int ***)local_30;
    ppppiStack_d0 = (int ****)(piVar13[0x1a] + ((int)sVar3 - 1U) * 4);
    pppiStack_d4 = (int ***)0x46652b;
    __vbaObjSetAddref();
    pppiStack_cc = (int ***)&local_30;
    ppppiStack_d0 = &local_2c;
    pppiStack_d4 = &local_28;
    pppiStack_d8 = &local_24;
    pppiStack_dc = &local_20;
    ppppiStack_e0 = (int ****)0x5;
    ppiStack_e4 = (int **)0x466547;
    __vbaFreeObjList();
    pppiStack_cc = (int ***)0x466553;
    __vbaFreeVar();
    pppiStack_cc = (int ***)0x46655c;
    pppiStack_c8 = (int ***)piVar13;
    pppiStack_cc = (int ***)(**(code **)(*piVar13 + 0x314))();
    ppppiStack_d0 = (int ****)&local_20;
    pppiStack_d4 = (int ***)0x466567;
    pppiVar8 = (int ***)__vbaObjSet();
    ppppiStack_d0 = (int ****)CONCAT22(extraout_var,*param_2);
    pppiStack_cc = &local_24;
    pppiStack_d8 = (int ***)0x466577;
    pppiStack_d4 = pppiVar8;
    ppiVar9 = (int **)(*(code *)(*pppiVar8)[0x10])();
    if ((int)ppiVar9 < 0) {
      pppiStack_d8 = (int ***)0x40;
      pppiStack_dc = (int ***)&DAT_004182e4;
      pppiStack_e8 = (int ***)0x46658c;
      ppiStack_e4 = ppiVar9;
      ppppiStack_e0 = (int ****)pppiVar8;
      __vbaHresultCheckObj();
    }
    ppiVar9 = local_24;
    sVar3 = *param_2;
    if (5 < (int)sVar3 - 1U) {
      pppiStack_d8 = (int ***)0x4665a1;
      __vbaGenerateBoundsError();
    }
    pppiStack_d8 = local_40;
    pppiVar8 = *(int ****)(piVar13[0x1a] + ((int)sVar3 - 1U) * 4);
    ppppiStack_e0 = (int ****)0x4665b1;
    pppiStack_dc = pppiVar8;
    puVar6 = (undefined *)(*(code *)(*pppiVar8)[0x17])();
    if ((int)puVar6 < 0) {
      ppppiStack_e0 = (int ****)0x5c;
      ppiStack_e4 = (int **)&DAT_00414268;
      pppiStack_f0 = (int ***)0x4665c6;
      pppiStack_ec = (int ***)puVar6;
      pppiStack_e8 = pppiVar8;
      __vbaHresultCheckObj();
    }
    ppppiStack_e0 = (int ****)local_40;
    ppiStack_e4 = &local_1c;
    piVar5 = *ppiVar9;
    pppiStack_e8 = (int ***)0x4665d9;
    ppppiStack_e0 = (int ****)__vbaStrVarVal();
    ppiStack_e4 = ppiVar9;
    pppiStack_e8 = (int ***)0x4665e1;
    pppiVar8 = (int ***)(*(code *)piVar5[0x29])();
    if ((int)pppiVar8 < 0) {
      pppiStack_e8 = (int ***)0xa4;
      pppiStack_ec = (int ***)&DAT_00417a98;
      pppiStack_f0 = (int ***)ppiVar9;
      pppiStack_f8 = (int ***)0x4665f9;
      pppiStack_f4 = pppiVar8;
      __vbaHresultCheckObj();
    }
    pppiStack_e8 = (int ***)0x466602;
    __vbaFreeStr();
    pppiStack_e8 = &local_24;
    pppiStack_ec = &local_20;
    pppiStack_f0 = (int ***)0x2;
    pppiStack_f4 = (int ***)0x466614;
    __vbaFreeObjList();
    pppiStack_e8 = (int ***)0x466622;
    __vbaFreeVar();
    ppiStack_e4 = (int **)&DAT_00417d44;
    pppiStack_e8 = (int ***)0x0;
    pppiStack_ec = (int ***)0xd;
    pppiStack_f4 = (int ***)0x466634;
    pppiStack_f0 = (int ***)piVar13;
    pppiStack_f4 = (int ***)(**(code **)(*piVar13 + 0x394))();
    pppiStack_f8 = &local_20;
    uStack_fc = 0x46663f;
    pppiStack_f4 = (int ***)__vbaObjSet();
    pppiStack_f8 = local_40;
    uStack_fc = 0x46664a;
    pppiStack_ec = (int ***)__vbaLateIdCallLd();
    pppiStack_f0 = (int ***)0x466654;
    pppiStack_e8 = (int ***)__vbaCastObjVar();
    pppiStack_ec = &local_24;
    pppiStack_f0 = (int ***)0x46665f;
    __vbaObjSet();
    pppiStack_e8 = &local_24;
    pppiStack_f0 = (int ***)0x46666c;
    pppiStack_ec = (int ***)piVar13;
    (**(code **)(*piVar13 + 0x704))();
    pppiStack_f0 = &local_24;
    pppiStack_f4 = &local_20;
    pppiStack_f8 = (int ***)0x2;
    uStack_fc = 0x466678;
    __vbaFreeObjList();
    pppiStack_f0 = (int ***)0x466680;
    __vbaFreeVar();
    return;
  }
  piStack_c0 = (int *)0x4666e6;
  __vbaErrorOverflow();
  pppiStack_cc = (int ***)&LAB_004032d6;
  ppppiStack_d0 = ExceptionList;
  pppiStack_13c = pppiVar8;
  pppiStack_c8 = &ppiStack_144;
  ppiStack_144 = ppiVar9;
  pppiStack_c4 = (int ***)&DAT_00402b70;
  piStack_c0 = (int *)((uint)ppppiStack_b4 & 1);
  ppppiVar14 = (int ****)((uint)ppppiStack_b4 & 0xfffffffe);
  ppppiStack_14c = (int ****)0x466730;
  ExceptionList = &ppppiStack_d0;
  ppppiStack_148 = ppppiVar14;
  piStack_140 = piVar13;
  ppiStack_bc = (int **)&stack0xfffffffc;
  ppppiStack_b4 = ppppiVar14;
  (*(code *)(*ppppiVar14)[1])();
  pppiStack_150 = ppppiVar14[0xe];
  ppppiStack_14c = &pppiStack_dc;
  pppiStack_d4 = (int ***)0x0;
  pppiStack_d8 = (int ***)0x0;
  pppiStack_dc = (int ***)0x0;
  ppppiStack_e0 = (int ****)0x0;
  ppiStack_e4 = (int **)0x0;
  pppiStack_f4 = (int ***)0x0;
  auStack_108[0] = 0;
  ppppiStack_154 = (int ****)0x466754;
  iVar4 = (*(code *)(*pppiStack_150)[0x1c])();
  if (iVar4 < 0) {
    ppppiStack_15c = (int ****)ppppiVar14[0xe];
    ppppiStack_154 = (int ****)0x70;
    pppiStack_158 = (int ***)&LAB_004133e8;
    ppppiStack_164 = (int ****)0x46676c;
    ppppiStack_160 = (int ****)iVar4;
    __vbaHresultCheckObj();
  }
  pppiVar8 = pppiStack_dc;
  ppppiStack_154 = (int ****)&ppppiStack_e0;
  pppiStack_158 = pppiStack_dc;
  ppppiStack_15c = (int ****)0x46677b;
  iVar4 = (*(code *)(*pppiStack_dc)[0x1b])();
  if (iVar4 < 0) {
    ppppiStack_15c = (int ****)0x6c;
    ppppiStack_160 = (int ****)&LAB_004133f8;
    ppppiStack_164 = (int ****)pppiVar8;
    puStack_16c = (undefined4 *)0x466790;
    piStack_168 = (int *)iVar4;
    __vbaHresultCheckObj();
  }
  ppppiVar2 = ppppiStack_e0;
  ppppiStack_160 = (int ****)0x46679c;
  ppppiStack_15c = ppppiVar14;
  ppppiStack_160 = (int ****)(*(code *)(*ppppiVar14)[0xd6])();
  ppppiStack_164 = &pppiStack_d4;
  piStack_168 = (int *)0x4667a7;
  piVar13 = (int *)__vbaObjSet();
  ppppiStack_160 = &pppiStack_d8;
  ppppiStack_164 = (int ****)CONCAT22((short)((uint)ppppiStack_160 >> 0x10),*(short *)pppiStack_b0);
  puStack_16c = (undefined4 *)0x4667ba;
  piStack_168 = piVar13;
  puVar6 = (undefined *)(**(code **)(*piVar13 + 0x40))();
  if ((int)puVar6 < 0) {
    puStack_16c = (undefined4 *)0x40;
    pppiStack_170 = (int ***)&DAT_004182e4;
    ppppiStack_17c = (int ****)0x4667cf;
    ppppiStack_178 = (int ****)puVar6;
    pppiStack_174 = (int ***)piVar13;
    __vbaHresultCheckObj();
  }
  pppiVar8 = pppiStack_d8;
  puStack_16c = auStack_108;
  pppiStack_170 = pppiStack_d8;
  pppiStack_174 = (int ***)0x4667e1;
  iVar4 = (*(code *)(*pppiStack_d8)[0x3c])();
  if (iVar4 < 0) {
    pppiStack_174 = (int ***)0xf0;
    ppppiStack_178 = (int ****)&DAT_0041807c;
    ppppiStack_17c = (int ****)pppiVar8;
    ppppiStack_184 = (int ****)0x4667f9;
    ppppiStack_180 = (int ****)iVar4;
    __vbaHresultCheckObj();
  }
  pppiStack_174 = &ppiStack_e4;
  pppiStack_f4 = (int ***)0x2;
  if (!SCARRY2((short)auStack_108[0],1)) {
    pppiStack_ec = (int ***)CONCAT22(pppiStack_ec._2_2_,(short)auStack_108[0] + 1);
    ppppiStack_178 = &pppiStack_f4;
    ppppiStack_17c = ppppiVar2;
    ppppiStack_180 = (int ****)0x466820;
    ppppiVar10 = (int ****)(*(code *)(*ppppiVar2)[8])();
    if ((int)ppppiVar10 < 0) {
      ppppiStack_180 = (int ****)0x20;
      ppppiStack_184 = (int ****)&LAB_00414248;
      ppppiStack_188 = ppppiVar2;
      ppppiStack_190 = (int ****)0x466835;
      ppppiStack_18c = ppppiVar10;
      __vbaHresultCheckObj();
    }
    sVar3 = *(short *)pppiStack_b0;
    if (7 < (int)sVar3 - 1U) {
      ppppiStack_180 = (int ****)0x466847;
      __vbaGenerateBoundsError();
    }
    ppppiStack_180 = (int ****)ppiStack_e4;
    ppppiStack_184 = (int ****)(ppppiVar14[0x24] + ((int)sVar3 - 1U));
    ppppiStack_188 = (int ****)0x46685b;
    __vbaObjSetAddref();
    ppppiStack_180 = (int ****)&ppiStack_e4;
    ppppiStack_184 = (int ****)&ppppiStack_e0;
    ppppiStack_188 = &pppiStack_dc;
    ppppiStack_18c = &pppiStack_d8;
    ppppiStack_190 = &pppiStack_d4;
    piStack_194 = (int *)0x5;
    piStack_198 = (int *)0x466879;
    __vbaFreeObjList();
    ppppiStack_180 = (int ****)0x466887;
    __vbaFreeVar();
    ppppiStack_17c = (int ****)&DAT_00417d44;
    ppppiStack_180 = (int ****)0x0;
    ppppiStack_184 = (int ****)0xd;
    ppppiStack_18c = (int ****)0x466899;
    ppppiStack_188 = ppppiVar14;
    ppppiStack_18c = (int ****)(*(code *)(*ppppiVar14)[0xe5])();
    ppppiStack_190 = &pppiStack_d4;
    piStack_194 = (int *)0x4668a4;
    ppppiStack_18c = (int ****)__vbaObjSet();
    ppppiStack_190 = &pppiStack_f4;
    piStack_194 = (int *)0x4668af;
    ppppiStack_184 = (int ****)__vbaLateIdCallLd();
    ppppiStack_188 = (int ****)0x4668b9;
    ppppiStack_180 = (int ****)__vbaCastObjVar();
    ppppiStack_184 = &pppiStack_d8;
    ppppiStack_188 = (int ****)0x4668c4;
    __vbaObjSet();
    ppppiStack_180 = &pppiStack_d8;
    ppppiStack_188 = (int ****)0x4668d1;
    ppppiStack_184 = ppppiVar14;
    (*(code *)(*ppppiVar14)[0x1c1])();
    ppppiStack_188 = &pppiStack_d8;
    ppppiStack_18c = &pppiStack_d4;
    ppppiStack_190 = (int ****)0x2;
    piStack_194 = (int *)0x4668dd;
    __vbaFreeObjList();
    ppppiStack_188 = (int ****)0x4668e5;
    __vbaFreeVar();
    return;
  }
  pppiStack_174 = (int ***)0x466942;
  __vbaErrorOverflow();
  ppppiStack_180 = (int ****)&LAB_004032d6;
  ppppiStack_184 = ExceptionList;
  ppppiStack_280 = ppppiVar2;
  ppppiStack_17c = &pppiStack_288;
  pppiStack_288 = pppiVar8;
  ppppiStack_178 = (int ****)&DAT_00402b80;
  pppiStack_174 = (int ***)((uint)piStack_168 & 1);
  piVar13 = (int *)((uint)piStack_168 & 0xfffffffe);
  ExceptionList = &ppppiStack_184;
  ppppiStack_284 = ppppiVar14;
  pppiStack_170 = &ppiStack_bc;
  piStack_168 = piVar13;
  (**(code **)(*piVar13 + 4))(piVar13);
  ppppiStack_188 = (int ****)0x0;
  ppppiStack_18c = (int ****)0x0;
  ppppiStack_190 = (int ****)0x0;
  piStack_194 = (int *)0x0;
  piStack_198 = (int *)0x0;
  piStack_19c = (int *)0x0;
  uStack_1a0 = 0;
  piStack_1a4 = (int *)0x0;
  uStack_1a8 = 0;
  uStack_1ac = 0;
  piStack_1b0 = (int *)0x0;
  uStack_1b4 = 0;
  uStack_1b8 = 0;
  piStack_1bc = (int *)0x0;
  piStack_1c0 = (int *)0x0;
  uStack_1c4 = 0;
  auStack_1d4[0] = 0;
  auStack_1e4[0] = 0;
  auStack_1f4[0] = 0;
  auStack_204[0] = 0;
  uStack_214 = 0;
  apiStack_238[0] = (int *)0x0;
  piStack_23c = (int *)0x0;
  uStack_240 = 0;
  apiStack_258[0] = (int *)0x0;
  uVar11 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&piStack_1a4,uVar11);
  __vbaStrCopy(piVar13);
  pppiStack_288 = (int ***)0x466a23;
  __vbaStrCopy();
  ppppiStack_280 = (int ****)0x466a2d;
  __vbaStrCopy();
  piStack_27c = piStack_168 + 0x12;
  ppiStack_278 = apiStack_238;
  ppppiStack_280 = (int ****)&piStack_1b0;
  ppppiStack_284 = (int ****)&uStack_1ac;
  piVar13 = (int *)*piStack_27c;
  pppiStack_288 = (int ***)&piStack_1a4;
  iVar4 = (**(code **)(*piVar13 + 0x2c))(piVar13);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,*piStack_27c,&DAT_004146ac,0x2c);
  }
  sStack_248 = (short)apiStack_238[0];
  __vbaFreeStrList(3,&uStack_1ac,&piStack_1b0,&uStack_1b4);
  if (sStack_248 == 0) {
    uVar11 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&piStack_19c,uVar11);
    uVar11 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&piStack_194,uVar11);
    __vbaObjSetAddref(apiStack_258,piStack_19c);
    ppiVar9 = &piStack_1a4;
    piVar5 = apiStack_258[0];
    iVar4 = (**(code **)(*apiStack_258[0] + 0x5c))(apiStack_258[0],ppiVar9);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x5c);
    }
    apiStack_238[0] = (int *)0x0;
    __vbaStrCopy(piVar5,ppiVar9);
    __vbaStrCopy(piVar13);
    pppiStack_288 = (int ***)0x466b30;
    __vbaStrCopy();
    ppppiStack_280 = (int ****)apiStack_238;
    ppppiStack_284 = (int ****)&uStack_1b4;
    pppiStack_288 = (int ***)&piStack_1b0;
    iVar4 = (**(code **)(*apiStack_258[0] + 0x84))(apiStack_258[0],&uStack_1ac,&DAT_0047f0b0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x84);
    }
    __vbaFreeStrList(3,&uStack_1ac,&piStack_1b0,&uStack_1b4);
    iVar4 = (**(code **)(*apiStack_258[0] + 0x4c))(apiStack_258[0]);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x4c);
    }
    while( true ) {
      rtcDoEvents();
      piVar13 = piStack_168;
      ppiVar9 = &piStack_1bc;
      iVar4 = (**(code **)(*(int *)piStack_168[0xd] + 0x44))((int *)piStack_168[0xd],ppiVar9);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar13[0xd],&LAB_00414228,0x44);
      }
      piVar5 = piStack_1bc;
      iVar4 = (**(code **)(*apiStack_258[0] + 0x70))(apiStack_258[0],&uStack_1ac);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x70);
      }
      uStack_1ac = 0;
      __vbaStrMove();
      iVar4 = (**(code **)(*piVar5 + 0x28))(piVar5,&piStack_1b0,&piStack_1c0);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&DAT_00414238,0x28);
      }
      piVar5 = piStack_1c0;
      piStack_1c0 = (int *)0x0;
      __vbaObjSet(&ppppiStack_18c,piVar5);
      __vbaFreeStr();
      __vbaFreeObj();
      iVar4 = (**(code **)(*apiStack_258[0] + 0x70))(apiStack_258[0],&uStack_1ac);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x70);
      }
      uStack_1ac = 0;
      __vbaStrMove();
      iVar4 = (**(code **)(*(int *)piVar13[0xe] + 0x70))((int *)piVar13[0xe],&piStack_1bc);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar13[0xe],&LAB_004133e8,0x70);
      }
      piVar5 = piStack_1bc;
      iVar4 = (**(code **)(*piStack_1bc + 0x6c))(piStack_1bc,&piStack_1c0);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&LAB_004133f8,0x6c);
      }
      piVar5 = piStack_1c0;
      iVar4 = (**(code **)(*piStack_1c0 + 0x24))(piStack_1c0,&uStack_1a0,&uStack_1c4);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&LAB_00414248,0x24);
      }
      uVar11 = uStack_1c4;
      uStack_1c4 = 0;
      __vbaObjSet(&piStack_198,uVar11);
      __vbaFreeObjList(2,&piStack_1bc,&piStack_1c0);
      iVar4 = (**(code **)(*apiStack_258[0] + 0x1c))(apiStack_258[0],&uStack_1ac);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x1c);
      }
      iVar4 = __vbaStrCmp(uStack_1ac,uStack_1a0);
      __vbaFreeStr();
      if (iVar4 == 0) goto LAB_00467283;
      sVar3 = __vbaObjIs(ppppiStack_18c,0);
      if (sVar3 != 0) {
        iVar4 = (**(code **)(*piStack_19c + 0x30))(piStack_19c,&uStack_1ac);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piStack_19c,&DAT_00414258,0x30);
        }
        iVar4 = (**(code **)(*piStack_19c + 0x38))(piStack_19c,&uStack_240);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piStack_19c,&DAT_00414258,0x38);
        }
        uStack_1fc = 0x80020004;
        uStack_1ec = 0x80020004;
        auStack_204[0] = 10;
        auStack_1f4[0] = 10;
        pwStack_20c = L"CTP Editor";
        uStack_214 = 8;
        __vbaVarDup();
        __vbaStrCat(uStack_1ac,L"Invalid file specification in ");
        uVar11 = __vbaStrMove();
        __vbaStrCat(L" on line ",uVar11);
        uVar11 = __vbaStrMove();
        __vbaStrI4(uStack_240);
        uVar12 = __vbaStrMove(uVar11);
        uStack_1cc = __vbaStrCat(uVar12,uVar11);
        auStack_1d4[0] = 8;
        rtcMsgBox(auStack_1d4,0x30,auStack_1e4,auStack_1f4,auStack_204);
        __vbaFreeStrList(4,&uStack_1ac,&piStack_1b0,&uStack_1b4,&uStack_1b8);
        goto LAB_00467275;
      }
      sVar3 = __vbaObjIs(piStack_198,0);
      if (sVar3 != 0) break;
      uVar11 = (**(code **)(*piVar13 + 0x344))(piVar13);
      piVar5 = (int *)__vbaObjSet(&piStack_1bc,uVar11);
      iVar4 = (**(code **)(*piVar5 + 0xe0))(piVar5,apiStack_238);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&DAT_00417e48,0xe0);
      }
      iVar4 = (*(code *)(*ppppiStack_18c)[0xb])(ppppiStack_18c,&piStack_23c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,ppppiStack_18c,&LAB_004133e8,0x2c);
      }
      bVar15 = (short)apiStack_238[0] == 1;
      uVar1 = (ushort)piStack_23c;
      __vbaFreeObj();
      if ((ushort)(-(ushort)bVar15 & ~uVar1) != 0) {
        iVar4 = (**(code **)(*(int *)piVar13[0x11] + 0x34))((int *)piVar13[0x11],apiStack_238);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar13[0x11],&DAT_00415000,0x34);
        }
        uVar11 = __vbaCastObj(0,&DAT_0041462c);
        __vbaObjSet(&piStack_1bc,uVar11);
        piStack_23c = apiStack_238[0];
        iVar4 = (*(code *)(*ppppiStack_18c)[0x22])
                          (ppppiStack_18c,piVar13 + 0xd,&piStack_23c,&piStack_1bc);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,ppppiStack_18c,&LAB_004133e8,0x88);
        }
        __vbaFreeObj();
      }
      iVar4 = (**(code **)(*apiStack_258[0] + 0x34))(apiStack_258[0],&uStack_1ac);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x34);
      }
      uStack_1ac = 0;
      __vbaStrMove();
      iVar4 = (**(code **)(*apiStack_258[0] + 0x70))(apiStack_258[0],&uStack_1ac);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x70);
      }
      uStack_1ac = 0;
      __vbaStrMove();
      iVar4 = (**(code **)(*piStack_194 + 0x58))
                        (piStack_194,&uStack_1a8,&ppppiStack_188,piVar13 + 0x12);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_194,&DAT_00414258,0x58);
      }
      iVar4 = (**(code **)(*piStack_194 + 0x6c))(piStack_194,&ppppiStack_190);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_194,&DAT_00414258,0x6c);
      }
      iVar4 = (**(code **)(*piStack_198 + 0x5c))(piStack_198,auStack_1d4);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_198,&DAT_00414268,0x5c);
      }
      uVar11 = (**(code **)(*piVar13 + 0x344))(piVar13);
      piVar5 = (int *)__vbaObjSet(&piStack_1bc,uVar11);
      iVar4 = (**(code **)(*piVar5 + 0xe0))(piVar5,apiStack_238);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&DAT_00417e48,0xe0);
      }
      piStack_23c = (int *)-(uint)((short)apiStack_238[0] == 1);
      __vbaStrVarMove(auStack_1d4);
      __vbaStrMove();
      (**(code **)(*piVar13 + 0x6fc))
                (piVar13,&ppppiStack_18c,&piStack_198,&uStack_1ac,&ppppiStack_190,&piStack_23c);
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeVar(ppiVar9);
    }
    iVar4 = (**(code **)(*piStack_19c + 0x30))(piStack_19c,&uStack_1ac);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piStack_19c,&DAT_00414258,0x30);
    }
    iVar4 = (**(code **)(*piStack_19c + 0x38))(piStack_19c,&uStack_240);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piStack_19c,&DAT_00414258,0x38);
    }
    uStack_1fc = 0x80020004;
    uStack_1ec = 0x80020004;
    auStack_204[0] = 10;
    auStack_1f4[0] = 10;
    pwStack_20c = L"CTP Editor";
    uStack_214 = 8;
    __vbaVarDup();
    __vbaStrCat(uStack_1ac,L"Invalid GL field specification in ");
    uVar11 = __vbaStrMove();
    __vbaStrCat(L" on line ",uVar11);
    uVar11 = __vbaStrMove();
    __vbaStrI4(uStack_240);
    uVar12 = __vbaStrMove(uVar11);
    uStack_1cc = __vbaStrCat(uVar12,uVar11);
    auStack_1d4[0] = 8;
    rtcMsgBox(auStack_1d4,0x30,auStack_1e4,auStack_1f4,auStack_204);
    __vbaFreeStrList(4,&uStack_1ac,&piStack_1b0,&uStack_1b4,&uStack_1b8);
LAB_00467275:
    __vbaFreeVarList(4,auStack_1d4,auStack_1e4,auStack_1f4,auStack_204);
    piVar13 = piStack_168;
LAB_00467283:
    iVar4 = (**(code **)(*apiStack_258[0] + 0x48))(apiStack_258[0]);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,apiStack_258[0],&DAT_00414258,0x48);
    }
    __vbaObjSetAddref(apiStack_258,0);
    (**(code **)(*piVar13 + 0x700))(piVar13);
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar13 = DAT_0047f074;
    iVar4 = (**(code **)(*DAT_0047f074 + 0x730))(DAT_0047f074);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar13,&DAT_00413d78,0x730);
    }
  }
  pppiStack_174 = (int ***)0x0;
  __vbaFreeObj(&LAB_00467398);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeStr();
  return;
}

/* ---- 0x4666f0 (FUN_004666f0) [estimated] strings: CTP Editor; Invalid file specification in ;  on line ; CTP Editor ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_004666f0(uint param_1,short *param_2)

{
  ushort uVar1;
  int ***pppiVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int ***pppiVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int ***pppiVar11;
  bool bVar12;
  int **ppiVar13;
  int *piVar14;
  int **ppiStack_1d0;
  int ***pppiStack_1cc;
  int ***pppiStack_1c8;
  int *piStack_1c4;
  int *piStack_1c0;
  int *apiStack_1a0 [4];
  short sStack_190;
  undefined4 uStack_188;
  int iStack_184;
  int aiStack_180 [9];
  undefined4 uStack_15c;
  wchar_t *pwStack_154;
  undefined4 auStack_14c [2];
  undefined4 uStack_144;
  undefined4 auStack_13c [2];
  undefined4 uStack_134;
  undefined4 auStack_12c [4];
  undefined4 auStack_11c [2];
  undefined4 uStack_114;
  undefined4 uStack_10c;
  int *piStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int **ppiStack_d8;
  int ***pppiStack_d4;
  int ***pppiStack_d0;
  int ****ppppiStack_cc;
  int ***pppiStack_c8;
  int ***pppiStack_c4;
  int **ppiStack_c0;
  int *piStack_bc;
  int **ppiStack_b8;
  undefined4 *puStack_b4;
  int *piStack_b0;
  int **ppiStack_ac;
  int ***pppiStack_a8;
  int ***pppiStack_a4;
  int **ppiStack_a0;
  int ****ppppiStack_9c;
  int **ppiStack_98;
  int ***pppiStack_94;
  int ***pppiStack_90;
  undefined4 local_50 [5];
  int *local_3c [2];
  short local_34;
  undefined4 local_2c;
  int ***local_28;
  int **local_24;
  int **local_20;
  int **local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff74;
  local_c = &DAT_00402b70;
  local_8 = param_1 & 1;
  pppiVar11 = (int ***)(param_1 & 0xfffffffe);
  pppiStack_94 = (int ***)0x466730;
  ExceptionList = &pvStack_18;
  pppiStack_90 = pppiVar11;
  (*(code *)(*pppiVar11)[1])();
  ppiStack_98 = pppiVar11[0xe];
  pppiStack_94 = &local_24;
  local_1c = (int **)0x0;
  local_20 = (int **)0x0;
  local_24 = (int **)0x0;
  local_28 = (int ***)0x0;
  local_2c = 0;
  local_3c[0] = (int *)0x0;
  local_50[0] = 0;
  ppppiStack_9c = (int ****)0x466754;
  iVar4 = (*(code *)(*ppiStack_98)[0x1c])();
  if (iVar4 < 0) {
    pppiStack_a4 = (int ***)pppiVar11[0xe];
    ppppiStack_9c = (int ****)0x70;
    ppiStack_a0 = (int **)&LAB_004133e8;
    ppiStack_ac = (int **)0x46676c;
    pppiStack_a8 = (int ***)iVar4;
    __vbaHresultCheckObj();
  }
  ppiVar13 = local_24;
  ppppiStack_9c = &local_28;
  ppiStack_a0 = local_24;
  pppiStack_a4 = (int ***)0x46677b;
  iVar4 = (*(code *)(*local_24)[0x1b])();
  if (iVar4 < 0) {
    pppiStack_a4 = (int ***)0x6c;
    pppiStack_a8 = (int ***)&LAB_004133f8;
    ppiStack_ac = ppiVar13;
    puStack_b4 = (undefined4 *)0x466790;
    piStack_b0 = (int *)iVar4;
    __vbaHresultCheckObj();
  }
  pppiVar2 = local_28;
  pppiStack_a8 = (int ***)0x46679c;
  pppiStack_a4 = pppiVar11;
  pppiStack_a8 = (int ***)(*(code *)(*pppiVar11)[0xd6])();
  ppiStack_ac = (int **)&local_1c;
  piStack_b0 = (int *)0x4667a7;
  piVar5 = (int *)__vbaObjSet();
  pppiStack_a8 = &local_20;
  ppiStack_ac = (int **)CONCAT22((short)((uint)pppiStack_a8 >> 0x10),*param_2);
  puStack_b4 = (undefined4 *)0x4667ba;
  piStack_b0 = piVar5;
  puVar6 = (undefined *)(**(code **)(*piVar5 + 0x40))();
  if ((int)puVar6 < 0) {
    puStack_b4 = (undefined4 *)0x40;
    ppiStack_b8 = (int **)&DAT_004182e4;
    pppiStack_c4 = (int ***)0x4667cf;
    ppiStack_c0 = (int **)puVar6;
    piStack_bc = piVar5;
    __vbaHresultCheckObj();
  }
  ppiVar13 = local_20;
  puStack_b4 = local_50;
  ppiStack_b8 = local_20;
  piStack_bc = (int *)0x4667e1;
  iVar4 = (*(code *)(*local_20)[0x3c])();
  if (iVar4 < 0) {
    piStack_bc = (int *)0xf0;
    ppiStack_c0 = (int **)&DAT_0041807c;
    pppiStack_c4 = (int ***)ppiVar13;
    ppppiStack_cc = (int ****)0x4667f9;
    pppiStack_c8 = (int ***)iVar4;
    __vbaHresultCheckObj();
  }
  piStack_bc = &local_2c;
  local_34 = (short)local_50[0] + 1;
  local_3c[0] = (int *)0x2;
  if (!SCARRY2((short)local_50[0],1)) {
    ppiStack_c0 = local_3c;
    pppiStack_c4 = pppiVar2;
    pppiStack_c8 = (int ***)0x466820;
    pppiVar7 = (int ***)(*(code *)(*pppiVar2)[8])();
    if ((int)pppiVar7 < 0) {
      pppiStack_c8 = (int ***)0x20;
      ppppiStack_cc = (int ****)&LAB_00414248;
      pppiStack_d0 = pppiVar2;
      ppiStack_d8 = (int **)0x466835;
      pppiStack_d4 = pppiVar7;
      __vbaHresultCheckObj();
    }
    sVar3 = *param_2;
    if (7 < (int)sVar3 - 1U) {
      pppiStack_c8 = (int ***)0x466847;
      __vbaGenerateBoundsError();
    }
    pppiStack_c8 = (int ***)local_2c;
    ppppiStack_cc = (int ****)(pppiVar11[0x24] + ((int)sVar3 - 1U));
    pppiStack_d0 = (int ***)0x46685b;
    __vbaObjSetAddref();
    pppiStack_c8 = (int ***)&local_2c;
    ppppiStack_cc = &local_28;
    pppiStack_d0 = &local_24;
    pppiStack_d4 = &local_20;
    ppiStack_d8 = (int **)&local_1c;
    piStack_dc = (int *)0x5;
    piStack_e0 = (int *)0x466879;
    __vbaFreeObjList();
    pppiStack_c8 = (int ***)0x466887;
    __vbaFreeVar();
    pppiStack_c4 = (int ***)&DAT_00417d44;
    pppiStack_c8 = (int ***)0x0;
    ppppiStack_cc = (int ****)0xd;
    pppiStack_d4 = (int ***)0x466899;
    pppiStack_d0 = pppiVar11;
    pppiStack_d4 = (int ***)(*(code *)(*pppiVar11)[0xe5])();
    ppiStack_d8 = (int **)&local_1c;
    piStack_dc = (int *)0x4668a4;
    pppiStack_d4 = (int ***)__vbaObjSet();
    ppiStack_d8 = local_3c;
    piStack_dc = (int *)0x4668af;
    ppppiStack_cc = (int ****)__vbaLateIdCallLd();
    pppiStack_d0 = (int ***)0x4668b9;
    pppiStack_c8 = (int ***)__vbaCastObjVar();
    ppppiStack_cc = (int ****)&local_20;
    pppiStack_d0 = (int ***)0x4668c4;
    __vbaObjSet();
    pppiStack_c8 = &local_20;
    pppiStack_d0 = (int ***)0x4668d1;
    ppppiStack_cc = (int ****)pppiVar11;
    (*(code *)(*pppiVar11)[0x1c1])();
    pppiStack_d0 = &local_20;
    pppiStack_d4 = &local_1c;
    ppiStack_d8 = (int **)0x2;
    piStack_dc = (int *)0x4668dd;
    __vbaFreeObjList();
    pppiStack_d0 = (int ***)0x4668e5;
    __vbaFreeVar();
    return;
  }
  piStack_bc = (int *)0x466942;
  __vbaErrorOverflow();
  pppiStack_c8 = (int ***)&LAB_004032d6;
  ppppiStack_cc = ExceptionList;
  pppiStack_1c8 = pppiVar2;
  pppiStack_c4 = &ppiStack_1d0;
  ppiStack_1d0 = ppiVar13;
  ppiStack_c0 = (int **)&DAT_00402b80;
  piStack_bc = (int *)((uint)piStack_b0 & 1);
  piVar5 = (int *)((uint)piStack_b0 & 0xfffffffe);
  ExceptionList = &ppppiStack_cc;
  pppiStack_1cc = pppiVar11;
  ppiStack_b8 = (int **)&stack0xfffffffc;
  piStack_b0 = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  pppiStack_d0 = (int ***)0x0;
  pppiStack_d4 = (int ***)0x0;
  ppiStack_d8 = (int **)0x0;
  piStack_dc = (int *)0x0;
  piStack_e0 = (int *)0x0;
  piStack_e4 = (int *)0x0;
  uStack_e8 = 0;
  piStack_ec = (int *)0x0;
  uStack_f0 = 0;
  uStack_f4 = 0;
  piStack_f8 = (int *)0x0;
  uStack_fc = 0;
  uStack_100 = 0;
  piStack_104 = (int *)0x0;
  piStack_108 = (int *)0x0;
  uStack_10c = 0;
  auStack_11c[0] = 0;
  auStack_12c[0] = 0;
  auStack_13c[0] = 0;
  auStack_14c[0] = 0;
  uStack_15c = 0;
  aiStack_180[0] = 0;
  iStack_184 = 0;
  uStack_188 = 0;
  apiStack_1a0[0] = (int *)0x0;
  uVar8 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&piStack_ec,uVar8);
  __vbaStrCopy(piVar5);
  ppiStack_1d0 = (int **)0x466a23;
  __vbaStrCopy();
  pppiStack_1c8 = (int ***)0x466a2d;
  __vbaStrCopy();
  piStack_1c4 = piStack_b0 + 0x12;
  piStack_1c0 = aiStack_180;
  pppiStack_1c8 = (int ***)&piStack_f8;
  pppiStack_1cc = (int ***)&uStack_f4;
  piVar5 = (int *)*piStack_1c4;
  ppiStack_1d0 = &piStack_ec;
  iVar4 = (**(code **)(*piVar5 + 0x2c))(piVar5);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,*piStack_1c4,&DAT_004146ac,0x2c);
  }
  sStack_190 = (short)aiStack_180[0];
  __vbaFreeStrList(3,&uStack_f4,&piStack_f8,&uStack_fc);
  if (sStack_190 == 0) {
    uVar8 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&piStack_e4,uVar8);
    uVar8 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&piStack_dc,uVar8);
    __vbaObjSetAddref(apiStack_1a0,piStack_e4);
    piVar9 = (int *)&piStack_ec;
    piVar14 = apiStack_1a0[0];
    iVar4 = (**(code **)(*apiStack_1a0[0] + 0x5c))(apiStack_1a0[0],piVar9);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x5c);
    }
    aiStack_180[0] = 0;
    __vbaStrCopy(piVar14,piVar9);
    __vbaStrCopy(piVar5);
    ppiStack_1d0 = (int **)0x466b30;
    __vbaStrCopy();
    pppiStack_1c8 = (int ***)aiStack_180;
    pppiStack_1cc = (int ***)&uStack_fc;
    ppiStack_1d0 = &piStack_f8;
    iVar4 = (**(code **)(*apiStack_1a0[0] + 0x84))(apiStack_1a0[0],&uStack_f4,&DAT_0047f0b0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x84);
    }
    __vbaFreeStrList(3,&uStack_f4,&piStack_f8,&uStack_fc);
    iVar4 = (**(code **)(*apiStack_1a0[0] + 0x4c))(apiStack_1a0[0]);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x4c);
    }
    while( true ) {
      rtcDoEvents();
      piVar5 = piStack_b0;
      ppiVar13 = &piStack_104;
      iVar4 = (**(code **)(*(int *)piStack_b0[0xd] + 0x44))((int *)piStack_b0[0xd],ppiVar13);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5[0xd],&LAB_00414228,0x44);
      }
      piVar9 = piStack_104;
      iVar4 = (**(code **)(*apiStack_1a0[0] + 0x70))(apiStack_1a0[0],&uStack_f4);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x70);
      }
      uStack_f4 = 0;
      __vbaStrMove();
      iVar4 = (**(code **)(*piVar9 + 0x28))(piVar9,&piStack_f8,&piStack_108);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar9,&DAT_00414238,0x28);
      }
      piVar9 = piStack_108;
      piStack_108 = (int *)0x0;
      __vbaObjSet(&pppiStack_d4,piVar9);
      __vbaFreeStr();
      __vbaFreeObj();
      iVar4 = (**(code **)(*apiStack_1a0[0] + 0x70))(apiStack_1a0[0],&uStack_f4);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x70);
      }
      uStack_f4 = 0;
      __vbaStrMove();
      iVar4 = (**(code **)(*(int *)piVar5[0xe] + 0x70))((int *)piVar5[0xe],&piStack_104);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5[0xe],&LAB_004133e8,0x70);
      }
      piVar9 = piStack_104;
      iVar4 = (**(code **)(*piStack_104 + 0x6c))(piStack_104,&piStack_108);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar9,&LAB_004133f8,0x6c);
      }
      piVar9 = piStack_108;
      iVar4 = (**(code **)(*piStack_108 + 0x24))(piStack_108,&uStack_e8,&uStack_10c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar9,&LAB_00414248,0x24);
      }
      uVar8 = uStack_10c;
      uStack_10c = 0;
      __vbaObjSet(&piStack_e0,uVar8);
      __vbaFreeObjList(2,&piStack_104,&piStack_108);
      iVar4 = (**(code **)(*apiStack_1a0[0] + 0x1c))(apiStack_1a0[0],&uStack_f4);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x1c);
      }
      iVar4 = __vbaStrCmp(uStack_f4,uStack_e8);
      __vbaFreeStr();
      if (iVar4 == 0) goto LAB_00467283;
      sVar3 = __vbaObjIs(pppiStack_d4,0);
      if (sVar3 != 0) {
        iVar4 = (**(code **)(*piStack_e4 + 0x30))(piStack_e4,&uStack_f4);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piStack_e4,&DAT_00414258,0x30);
        }
        iVar4 = (**(code **)(*piStack_e4 + 0x38))(piStack_e4,&uStack_188);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piStack_e4,&DAT_00414258,0x38);
        }
        uStack_144 = 0x80020004;
        uStack_134 = 0x80020004;
        auStack_14c[0] = 10;
        auStack_13c[0] = 10;
        pwStack_154 = L"CTP Editor";
        uStack_15c = 8;
        __vbaVarDup();
        __vbaStrCat(uStack_f4,L"Invalid file specification in ");
        uVar8 = __vbaStrMove();
        __vbaStrCat(L" on line ",uVar8);
        uVar8 = __vbaStrMove();
        __vbaStrI4(uStack_188);
        uVar10 = __vbaStrMove(uVar8);
        uStack_114 = __vbaStrCat(uVar10,uVar8);
        auStack_11c[0] = 8;
        rtcMsgBox(auStack_11c,0x30,auStack_12c,auStack_13c,auStack_14c);
        __vbaFreeStrList(4,&uStack_f4,&piStack_f8,&uStack_fc,&uStack_100);
        goto LAB_00467275;
      }
      sVar3 = __vbaObjIs(piStack_e0,0);
      if (sVar3 != 0) break;
      uVar8 = (**(code **)(*piVar5 + 0x344))(piVar5);
      piVar9 = (int *)__vbaObjSet(&piStack_104,uVar8);
      iVar4 = (**(code **)(*piVar9 + 0xe0))(piVar9,aiStack_180);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar9,&DAT_00417e48,0xe0);
      }
      iVar4 = (*(code *)(*pppiStack_d4)[0xb])(pppiStack_d4,&iStack_184);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,pppiStack_d4,&LAB_004133e8,0x2c);
      }
      bVar12 = (short)aiStack_180[0] == 1;
      uVar1 = (ushort)iStack_184;
      __vbaFreeObj();
      if ((ushort)(-(ushort)bVar12 & ~uVar1) != 0) {
        iVar4 = (**(code **)(*(int *)piVar5[0x11] + 0x34))((int *)piVar5[0x11],aiStack_180);
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,piVar5[0x11],&DAT_00415000,0x34);
        }
        uVar8 = __vbaCastObj(0,&DAT_0041462c);
        __vbaObjSet(&piStack_104,uVar8);
        iStack_184 = aiStack_180[0];
        iVar4 = (*(code *)(*pppiStack_d4)[0x22])(pppiStack_d4,piVar5 + 0xd,&iStack_184,&piStack_104)
        ;
        if (iVar4 < 0) {
          __vbaHresultCheckObj(iVar4,pppiStack_d4,&LAB_004133e8,0x88);
        }
        __vbaFreeObj();
      }
      iVar4 = (**(code **)(*apiStack_1a0[0] + 0x34))(apiStack_1a0[0],&uStack_f4);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x34);
      }
      uStack_f4 = 0;
      __vbaStrMove();
      iVar4 = (**(code **)(*apiStack_1a0[0] + 0x70))(apiStack_1a0[0],&uStack_f4);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x70);
      }
      uStack_f4 = 0;
      __vbaStrMove();
      iVar4 = (**(code **)(*piStack_dc + 0x58))(piStack_dc,&uStack_f0,&pppiStack_d0,piVar5 + 0x12);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_dc,&DAT_00414258,0x58);
      }
      iVar4 = (**(code **)(*piStack_dc + 0x6c))(piStack_dc,&ppiStack_d8);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_dc,&DAT_00414258,0x6c);
      }
      iVar4 = (**(code **)(*piStack_e0 + 0x5c))(piStack_e0,auStack_11c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piStack_e0,&DAT_00414268,0x5c);
      }
      uVar8 = (**(code **)(*piVar5 + 0x344))(piVar5);
      piVar9 = (int *)__vbaObjSet(&piStack_104,uVar8);
      iVar4 = (**(code **)(*piVar9 + 0xe0))(piVar9,aiStack_180);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar9,&DAT_00417e48,0xe0);
      }
      iStack_184 = -(uint)((short)aiStack_180[0] == 1);
      __vbaStrVarMove(auStack_11c);
      __vbaStrMove();
      (**(code **)(*piVar5 + 0x6fc))
                (piVar5,&pppiStack_d4,&piStack_e0,&uStack_f4,&ppiStack_d8,&iStack_184);
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeVar(ppiVar13);
    }
    iVar4 = (**(code **)(*piStack_e4 + 0x30))(piStack_e4,&uStack_f4);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piStack_e4,&DAT_00414258,0x30);
    }
    iVar4 = (**(code **)(*piStack_e4 + 0x38))(piStack_e4,&uStack_188);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piStack_e4,&DAT_00414258,0x38);
    }
    uStack_144 = 0x80020004;
    uStack_134 = 0x80020004;
    auStack_14c[0] = 10;
    auStack_13c[0] = 10;
    pwStack_154 = L"CTP Editor";
    uStack_15c = 8;
    __vbaVarDup();
    __vbaStrCat(uStack_f4,L"Invalid GL field specification in ");
    uVar8 = __vbaStrMove();
    __vbaStrCat(L" on line ",uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrI4(uStack_188);
    uVar10 = __vbaStrMove(uVar8);
    uStack_114 = __vbaStrCat(uVar10,uVar8);
    auStack_11c[0] = 8;
    rtcMsgBox(auStack_11c,0x30,auStack_12c,auStack_13c,auStack_14c);
    __vbaFreeStrList(4,&uStack_f4,&piStack_f8,&uStack_fc,&uStack_100);
LAB_00467275:
    __vbaFreeVarList(4,auStack_11c,auStack_12c,auStack_13c,auStack_14c);
    piVar5 = piStack_b0;
LAB_00467283:
    iVar4 = (**(code **)(*apiStack_1a0[0] + 0x48))(apiStack_1a0[0]);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,apiStack_1a0[0],&DAT_00414258,0x48);
    }
    __vbaObjSetAddref(apiStack_1a0,0);
    (**(code **)(*piVar5 + 0x700))(piVar5);
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar5 = DAT_0047f074;
    iVar4 = (**(code **)(*DAT_0047f074 + 0x730))(DAT_0047f074);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00413d78,0x730);
    }
  }
  piStack_bc = (int *)0x0;
  __vbaFreeObj(&LAB_00467398);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeStr();
  return;
}

/* ---- 0x466950 (FUN_00466950) [estimated] strings: CTP Editor; Invalid file specification in ;  on line ; CTP Editor ---- */
void __cdecl FUN_00466950(uint param_1)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  int **ppiVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *local_ec [4];
  short local_dc;
  undefined4 local_d4;
  int local_d0;
  int local_cc [9];
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58;
  int *local_54;
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffee4;
  local_c = &DAT_00402b80;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  piVar6 = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_2c = (int *)0x0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = (int *)0x0;
  local_54 = (int *)0x0;
  local_58 = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98[0] = 0;
  local_a8 = 0;
  local_cc[0] = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_ec[0] = (int *)0x0;
  uVar4 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&local_38,uVar4);
  __vbaStrCopy(piVar6);
  __vbaStrCopy();
  __vbaStrCopy();
  piVar6 = (int *)piVar3[0x12];
  iVar5 = (**(code **)(*piVar6 + 0x2c))(piVar6);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar3[0x12],&DAT_004146ac,0x2c);
  }
  local_dc = (short)local_cc[0];
  __vbaFreeStrList(3,&local_40,&local_44,&local_48);
  if (local_dc == 0) {
    uVar4 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&local_30,uVar4);
    uVar4 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&local_28,uVar4);
    __vbaObjSetAddref(local_ec,local_30);
    puVar11 = &local_38;
    piVar10 = local_ec[0];
    iVar5 = (**(code **)(*local_ec[0] + 0x5c))(local_ec[0],puVar11);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x5c);
    }
    local_cc[0] = 0;
    __vbaStrCopy(piVar10,puVar11);
    __vbaStrCopy(piVar6);
    __vbaStrCopy();
    iVar5 = (**(code **)(*local_ec[0] + 0x84))(local_ec[0],&local_40,&DAT_0047f0b0);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x84);
    }
    __vbaFreeStrList(3,&local_40,&local_44,&local_48);
    iVar5 = (**(code **)(*local_ec[0] + 0x4c))(local_ec[0]);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x4c);
    }
    while( true ) {
      rtcDoEvents();
      ppiVar9 = &local_50;
      iVar5 = (**(code **)(*(int *)piVar3[0xd] + 0x44))((int *)piVar3[0xd],ppiVar9);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar3[0xd],&LAB_00414228,0x44);
      }
      piVar6 = local_50;
      iVar5 = (**(code **)(*local_ec[0] + 0x70))(local_ec[0],&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x70);
      }
      local_40 = 0;
      __vbaStrMove();
      iVar5 = (**(code **)(*piVar6 + 0x28))(piVar6,&local_44,&local_54);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&DAT_00414238,0x28);
      }
      piVar6 = local_54;
      local_54 = (int *)0x0;
      __vbaObjSet(&local_20,piVar6);
      __vbaFreeStr();
      __vbaFreeObj();
      iVar5 = (**(code **)(*local_ec[0] + 0x70))(local_ec[0],&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x70);
      }
      local_40 = 0;
      __vbaStrMove();
      iVar5 = (**(code **)(*(int *)piVar3[0xe] + 0x70))((int *)piVar3[0xe],&local_50);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar3[0xe],&LAB_004133e8,0x70);
      }
      piVar6 = local_50;
      iVar5 = (**(code **)(*local_50 + 0x6c))(local_50,&local_54);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&LAB_004133f8,0x6c);
      }
      piVar6 = local_54;
      iVar5 = (**(code **)(*local_54 + 0x24))(local_54,&local_34,&local_58);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&LAB_00414248,0x24);
      }
      uVar4 = local_58;
      local_58 = 0;
      __vbaObjSet(&local_2c,uVar4);
      __vbaFreeObjList(2,&local_50,&local_54);
      iVar5 = (**(code **)(*local_ec[0] + 0x1c))(local_ec[0],&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x1c);
      }
      iVar5 = __vbaStrCmp(local_40,local_34);
      __vbaFreeStr();
      if (iVar5 == 0) goto LAB_00467283;
      sVar2 = __vbaObjIs(local_20,0);
      if (sVar2 != 0) {
        iVar5 = (**(code **)(*local_30 + 0x30))(local_30,&local_40);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,local_30,&DAT_00414258,0x30);
        }
        iVar5 = (**(code **)(*local_30 + 0x38))(local_30,&local_d4);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,local_30,&DAT_00414258,0x38);
        }
        local_90 = 0x80020004;
        local_80 = 0x80020004;
        local_98[0] = 10;
        local_88[0] = 10;
        local_a0 = L"CTP Editor";
        local_a8 = 8;
        __vbaVarDup();
        __vbaStrCat(local_40,L"Invalid file specification in ");
        uVar4 = __vbaStrMove();
        __vbaStrCat(L" on line ",uVar4);
        uVar4 = __vbaStrMove();
        __vbaStrI4(local_d4);
        uVar7 = __vbaStrMove(uVar4);
        local_60 = __vbaStrCat(uVar7,uVar4);
        local_68[0] = 8;
        rtcMsgBox(local_68,0x30,local_78,local_88,local_98);
        __vbaFreeStrList(4,&local_40,&local_44,&local_48,&local_4c);
        goto LAB_00467275;
      }
      sVar2 = __vbaObjIs(local_2c,0);
      if (sVar2 != 0) break;
      uVar4 = (**(code **)(*piVar3 + 0x344))(piVar3);
      piVar6 = (int *)__vbaObjSet(&local_50,uVar4);
      iVar5 = (**(code **)(*piVar6 + 0xe0))(piVar6,local_cc);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417e48,0xe0);
      }
      iVar5 = (**(code **)(*local_20 + 0x2c))(local_20,&local_d0);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_20,&LAB_004133e8,0x2c);
      }
      bVar8 = (short)local_cc[0] == 1;
      uVar1 = (ushort)local_d0;
      __vbaFreeObj();
      if ((ushort)(-(ushort)bVar8 & ~uVar1) != 0) {
        iVar5 = (**(code **)(*(int *)piVar3[0x11] + 0x34))((int *)piVar3[0x11],local_cc);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,piVar3[0x11],&DAT_00415000,0x34);
        }
        uVar4 = __vbaCastObj(0,&DAT_0041462c);
        __vbaObjSet(&local_50,uVar4);
        local_d0 = local_cc[0];
        iVar5 = (**(code **)(*local_20 + 0x88))(local_20,piVar3 + 0xd,&local_d0,&local_50);
        if (iVar5 < 0) {
          __vbaHresultCheckObj(iVar5,local_20,&LAB_004133e8,0x88);
        }
        __vbaFreeObj();
      }
      iVar5 = (**(code **)(*local_ec[0] + 0x34))(local_ec[0],&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x34);
      }
      local_40 = 0;
      __vbaStrMove();
      iVar5 = (**(code **)(*local_ec[0] + 0x70))(local_ec[0],&local_40);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x70);
      }
      local_40 = 0;
      __vbaStrMove();
      iVar5 = (**(code **)(*local_28 + 0x58))(local_28,&local_3c,&local_1c,piVar3 + 0x12);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_28,&DAT_00414258,0x58);
      }
      iVar5 = (**(code **)(*local_28 + 0x6c))(local_28,&local_24);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_28,&DAT_00414258,0x6c);
      }
      iVar5 = (**(code **)(*local_2c + 0x5c))(local_2c,local_68);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,local_2c,&DAT_00414268,0x5c);
      }
      uVar4 = (**(code **)(*piVar3 + 0x344))(piVar3);
      piVar6 = (int *)__vbaObjSet(&local_50,uVar4);
      iVar5 = (**(code **)(*piVar6 + 0xe0))(piVar6,local_cc);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&DAT_00417e48,0xe0);
      }
      local_d0 = -(uint)((short)local_cc[0] == 1);
      __vbaStrVarMove(local_68);
      __vbaStrMove();
      (**(code **)(*piVar3 + 0x6fc))(piVar3,&local_20,&local_2c,&local_40,&local_24,&local_d0);
      __vbaFreeStr();
      __vbaFreeObj();
      __vbaFreeVar(ppiVar9);
    }
    iVar5 = (**(code **)(*local_30 + 0x30))(local_30,&local_40);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_30,&DAT_00414258,0x30);
    }
    iVar5 = (**(code **)(*local_30 + 0x38))(local_30,&local_d4);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_30,&DAT_00414258,0x38);
    }
    local_90 = 0x80020004;
    local_80 = 0x80020004;
    local_98[0] = 10;
    local_88[0] = 10;
    local_a0 = L"CTP Editor";
    local_a8 = 8;
    __vbaVarDup();
    __vbaStrCat(local_40,L"Invalid GL field specification in ");
    uVar4 = __vbaStrMove();
    __vbaStrCat(L" on line ",uVar4);
    uVar4 = __vbaStrMove();
    __vbaStrI4(local_d4);
    uVar7 = __vbaStrMove(uVar4);
    local_60 = __vbaStrCat(uVar7,uVar4);
    local_68[0] = 8;
    rtcMsgBox(local_68,0x30,local_78,local_88,local_98);
    __vbaFreeStrList(4,&local_40,&local_44,&local_48,&local_4c);
LAB_00467275:
    __vbaFreeVarList(4,local_68,local_78,local_88,local_98);
LAB_00467283:
    iVar5 = (**(code **)(*local_ec[0] + 0x48))(local_ec[0]);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,local_ec[0],&DAT_00414258,0x48);
    }
    __vbaObjSetAddref(local_ec,0);
    (**(code **)(*piVar3 + 0x700))(piVar3);
    if (DAT_0047f074 == (int *)0x0) {
      __vbaNew2(&DAT_0040dbb8,&DAT_0047f074);
    }
    piVar6 = DAT_0047f074;
    iVar5 = (**(code **)(*DAT_0047f074 + 0x730))(DAT_0047f074);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00413d78,0x730);
    }
  }
  local_8 = 0;
  __vbaFreeObj(&LAB_00467398);
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeStr();
  __vbaFreeObj();
  __vbaFreeStr();
  return;
}

/* ---- 0x4673c0 (FUN_004673c0) [estimated] strings:  ---- */
void __cdecl FUN_004673c0(uint param_1)

{
  code *pcVar1;
  int **ppiVar2;
  int ***pppiVar3;
  int **ppiVar4;
  short sVar5;
  undefined2 uVar6;
  int *piVar7;
  int **ppiVar8;
  int ***pppiVar9;
  int iVar10;
  undefined4 uVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  uint unaff_ESI;
  int *piVar12;
  uint uVar13;
  code *pcVar14;
  bool bVar15;
  int **ppiStack_1b8;
  int *piStack_1b4;
  code *pcStack_1b0;
  undefined4 uStack_1a4;
  int iStack_1a0;
  int **ppiStack_19c;
  int **ppiStack_198;
  int *piStack_194;
  int **ppiStack_190;
  int **ppiStack_18c;
  int ***pppiStack_188;
  int ***pppiStack_184;
  int **ppiStack_180;
  int ***pppiStack_17c;
  int ***pppiStack_178;
  int *piStack_174;
  int ***pppiStack_170;
  int *piStack_16c;
  int **ppiStack_168;
  int ***pppiStack_164;
  int *piStack_160;
  int *piStack_15c;
  int ***pppiStack_158;
  int **ppiStack_154;
  int *piStack_150;
  uint uStack_14c;
  int *piStack_148;
  code *pcStack_144;
  int iStack_13c;
  int *piStack_130;
  undefined4 auStack_12c [3];
  int *piStack_120;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int *piStack_100;
  int *piStack_fc;
  int *piStack_f8;
  int **ppiStack_f4;
  undefined4 *puStack_f0;
  int *piStack_ec;
  int **ppiStack_e8;
  int **ppiStack_e4;
  int *piStack_e0;
  int **ppiStack_dc;
  int **ppiStack_d8;
  int *piStack_d4;
  int **ppiStack_d0;
  int ***pppiStack_cc;
  int ***pppiStack_c8;
  int **ppiStack_c4;
  int ***pppiStack_c0;
  int *piStack_bc;
  int **ppiStack_b8;
  int ***pppiStack_b4;
  int ***pppiStack_b0;
  int *piStack_ac;
  int local_58;
  int **local_54;
  int **local_50 [4];
  int *local_40;
  int **local_3c;
  int *local_38;
  int **local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int **local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff58;
  local_c = &DAT_00402b90;
  local_8 = param_1 & 1;
  piVar12 = (int *)(param_1 & 0xfffffffe);
  pppiStack_b0 = (int ***)0x467403;
  ExceptionList = &pvStack_18;
  piStack_ac = piVar12;
  (**(code **)(*piVar12 + 4))();
  pppiStack_b0 = (int ***)0x0;
  pppiStack_b4 = (int ***)0x0;
  local_20 = (int *)0x0;
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = (int **)0x0;
  local_38 = (int *)0x0;
  local_3c = (int **)0x0;
  local_40 = (int *)0x0;
  local_50[0] = (int **)0x0;
  local_54 = (int **)0x0;
  local_58 = 0;
  piStack_bc = (int *)0x467434;
  ppiStack_b8 = (int **)piVar12;
  piStack_bc = (int *)(**(code **)(*piVar12 + 0x38c))();
  pppiStack_c0 = (int ***)&local_30;
  ppiStack_c4 = (int **)0x46743f;
  piStack_bc = (int *)__vbaObjSet();
  pppiStack_c0 = local_50;
  ppiStack_c4 = (int **)0x46744a;
  pppiStack_b4 = (int ***)__vbaLateIdCallLd();
  ppiStack_b8 = (int **)0x467454;
  __vbaI4Var();
  ppiStack_b8 = (int **)0x46745c;
  sVar5 = __vbaI2I4();
  local_1c = (int **)0x1;
  pppiStack_b4 = (int ***)0x467472;
  __vbaFreeObj();
  pppiStack_b4 = (int ***)0x46747b;
  __vbaFreeVar();
  pcVar1 = __vbaHresultCheckObj_exref;
  ppiVar8 = local_1c;
  do {
    local_1c = ppiVar8;
    pppiStack_b0 = (int ***)piVar12;
    if (sVar5 < (short)local_1c) {
      pppiStack_b4 = (int ***)0x4676b9;
      (**(code **)(*piVar12 + 0x700))();
      if (DAT_0047f074 == (int ***)0x0) {
        pppiStack_b4 = (int ***)&DAT_0047f074;
        ppiStack_b8 = (int **)&DAT_0040dbb8;
        piStack_bc = (int *)0x4676d1;
        __vbaNew2();
      }
      pppiVar9 = DAT_0047f074;
      pppiStack_b4 = DAT_0047f074;
      ppiStack_b8 = (int **)0x4676e0;
      ppiStack_c4 = (int **)(*(code *)(*DAT_0047f074)[0x1cc])();
      if ((int)ppiStack_c4 < 0) {
        ppiStack_b8 = (int **)0x730;
        piStack_bc = (int *)&DAT_00413d78;
        pppiStack_c0 = pppiVar9;
        pppiStack_c8 = (int ***)0x4676f4;
        __vbaHresultCheckObj();
      }
      return;
    }
    pppiStack_b4 = (int ***)0x46749b;
    pppiStack_b4 = (int ***)(**(code **)(*piVar12 + 0x324))();
    ppiStack_b8 = &local_30;
    piStack_bc = (int *)0x4674a6;
    piVar7 = (int *)__vbaObjSet();
    pppiStack_b4 = &local_34;
    ppiStack_b8 = local_1c;
    pppiStack_c0 = (int ***)0x4674b6;
    piStack_bc = piVar7;
    ppiVar8 = (int **)(**(code **)(*piVar7 + 0x40))();
    if ((int)ppiVar8 < 0) {
      pppiStack_c0 = (int ***)0x40;
      ppiStack_c4 = (int **)&DAT_004182e4;
      ppiStack_d0 = (int **)0x4674c7;
      pppiStack_cc = (int ***)ppiVar8;
      pppiStack_c8 = (int ***)piVar7;
      __vbaHresultCheckObj();
    }
    ppiVar8 = local_34;
    pppiStack_c0 = &local_54;
    ppiStack_c4 = local_34;
    pppiStack_c8 = (int ***)0x4674d9;
    piStack_bc = (int *)(*(code *)(*local_34)[0x38])();
    if ((int)piStack_bc < 0) {
      pppiStack_b0 = (int ***)0xe0;
      pppiStack_b4 = (int ***)&DAT_00417e48;
      ppiStack_b8 = ppiVar8;
      pppiStack_c0 = (int ***)0x4674ed;
      __vbaHresultCheckObj();
    }
    bVar15 = (short)local_54 == 1;
    pppiStack_b0 = &local_34;
    pppiStack_b4 = (int ***)&local_30;
    ppiStack_b8 = (int **)0x2;
    uVar13 = CONCAT22((short)((uint)ppiVar8 >> 0x10),-(ushort)bVar15);
    piStack_bc = (int *)0x46750c;
    __vbaFreeObjList();
    if ((ushort)-(ushort)bVar15 != 0) {
      pppiStack_b4 = (int ***)0x467521;
      pppiStack_b0 = (int ***)piVar12;
      pppiStack_b4 = (int ***)(**(code **)(*piVar12 + 0x314))();
      ppiStack_b8 = &local_30;
      piStack_bc = (int *)0x46752c;
      piVar7 = (int *)__vbaObjSet();
      pppiStack_b4 = &local_34;
      ppiStack_b8 = local_1c;
      pppiStack_c0 = (int ***)0x46753c;
      piStack_bc = piVar7;
      ppiVar8 = (int **)(**(code **)(*piVar7 + 0x40))();
      if ((int)ppiVar8 < 0) {
        pppiStack_c0 = (int ***)0x40;
        ppiStack_c4 = (int **)&DAT_004182e4;
        ppiStack_d0 = (int **)0x46754d;
        pppiStack_cc = (int ***)ppiVar8;
        pppiStack_c8 = (int ***)piVar7;
        __vbaHresultCheckObj();
      }
      ppiVar8 = local_34;
      pppiStack_c0 = (int ***)&local_20;
      ppiStack_c4 = local_34;
      pppiStack_c8 = (int ***)0x46755f;
      piVar7 = (int *)(*(code *)(*local_34)[0x28])();
      if ((int)piVar7 < 0) {
        pppiStack_c8 = (int ***)0xa0;
        pppiStack_cc = (int ***)&DAT_00417a98;
        ppiStack_d0 = ppiVar8;
        ppiStack_d8 = (int **)0x467573;
        piStack_d4 = piVar7;
        __vbaHresultCheckObj();
      }
      pppiStack_cc = (int ***)0x46757c;
      pppiStack_c8 = (int ***)piVar12;
      pppiStack_cc = (int ***)(**(code **)(*piVar12 + 0x318))();
      ppiStack_d0 = &local_38;
      piStack_d4 = (int *)0x467587;
      piVar7 = (int *)__vbaObjSet();
      pppiStack_cc = &local_3c;
      ppiStack_d0 = local_1c;
      ppiStack_d8 = (int **)0x467597;
      piStack_d4 = piVar7;
      pppiVar9 = (int ***)(**(code **)(*piVar7 + 0x40))();
      if ((int)pppiVar9 < 0) {
        ppiStack_d8 = (int **)0x40;
        ppiStack_dc = (int **)&DAT_004182e4;
        ppiStack_e8 = (int **)0x4675a8;
        ppiStack_e4 = (int **)pppiVar9;
        piStack_e0 = piVar7;
        __vbaHresultCheckObj();
      }
      ppiVar8 = local_3c;
      ppiStack_d8 = &local_24;
      ppiStack_dc = local_3c;
      piStack_e0 = (int *)0x4675ba;
      piVar7 = (int *)(*(code *)(*local_3c)[0x28])();
      if ((int)piVar7 < 0) {
        piStack_e0 = (int *)0xa0;
        ppiStack_e4 = (int **)&DAT_00417a98;
        ppiStack_e8 = ppiVar8;
        puStack_f0 = (undefined4 *)0x4675ce;
        piStack_ec = piVar7;
        __vbaHresultCheckObj();
      }
      ppiStack_e4 = (int **)0x4675d7;
      piStack_e0 = piVar12;
      ppiStack_e4 = (int **)(**(code **)(*piVar12 + 0x344))();
      ppiStack_e8 = &local_40;
      piStack_ec = (int *)0x4675e2;
      ppiVar8 = (int **)__vbaObjSet();
      ppiStack_e4 = (int **)&local_54;
      piStack_ec = (int *)0x4675f1;
      ppiStack_e8 = ppiVar8;
      piVar7 = (int *)(*(code *)(*ppiVar8)[0x38])();
      if ((int)piVar7 < 0) {
        piStack_ec = (int *)0xe0;
        puStack_f0 = (undefined4 *)&DAT_00417e48;
        piStack_fc = (int *)0x467605;
        piStack_f8 = piVar7;
        ppiStack_f4 = ppiVar8;
        __vbaHresultCheckObj();
      }
      local_24 = (int *)0x0;
      local_58 = -(uint)((short)local_54 == 1);
      piStack_ec = (int *)0x467629;
      __vbaStrMove();
      local_20 = (int *)0x0;
      piStack_ec = (int *)0x467638;
      __vbaStrMove();
      uVar13 = (int)(short)local_1c - 1;
      if (5 < uVar13) {
        piStack_ec = (int *)0x467648;
        __vbaGenerateBoundsError();
      }
      piStack_ec = &local_58;
      puStack_f0 = &local_2c;
      ppiStack_f4 = &local_28;
      piStack_f8 = (int *)(piVar12[0x1a] + uVar13 * 4);
      piStack_fc = piVar12 + 0xf;
      uStack_104 = 0x467668;
      piStack_100 = piVar12;
      (**(code **)(*piVar12 + 0x6fc))();
      pppiStack_b0 = (int ***)&local_2c;
      pppiStack_b4 = (int ***)&local_28;
      ppiStack_b8 = (int **)0x2;
      piStack_bc = (int *)0x467678;
      __vbaFreeStrList();
      piStack_bc = (int *)&local_40;
      pppiStack_c0 = &local_3c;
      ppiStack_c4 = &local_38;
      pppiStack_c8 = &local_34;
      pppiStack_cc = (int ***)&local_30;
      ppiStack_d0 = (int **)0x5;
      piStack_d4 = (int *)0x467694;
      __vbaFreeObjList();
    }
    ppiVar8 = (int **)(uint)(ushort)((short)local_1c + 1);
  } while (!SCARRY2((short)local_1c,1));
  pppiStack_b0 = (int ***)0x467765;
  __vbaErrorOverflow();
  piStack_bc = (int *)&LAB_004032d6;
  pppiStack_c0 = ExceptionList;
  pcStack_144 = pcVar1;
  ppiStack_b8 = (int **)&uStack_14c;
  pppiStack_b4 = (int ***)&DAT_00402ba0;
  pppiStack_b0 = (int ***)(unaff_ESI & 1);
  piVar7 = (int *)(unaff_ESI & 0xfffffffe);
  ppiStack_154 = (int **)0x4677b3;
  ExceptionList = &pppiStack_c0;
  piStack_150 = piVar7;
  uStack_14c = uVar13;
  piStack_148 = piVar12;
  piStack_ac = (int *)&stack0xfffffffc;
  (**(code **)(*piVar7 + 4))();
  ppiStack_d0 = (int **)0x0;
  piStack_d4 = (int *)0x0;
  ppiStack_d8 = (int **)0x0;
  ppiStack_e8 = (int **)0x0;
  piStack_f8 = (int *)0x0;
  uStack_108 = 0;
  auStack_12c[0] = 0;
  piStack_130 = (int *)0x0;
  if (DAT_00480244 == (int ***)0x0) {
    ppiStack_154 = (int **)&DAT_00480244;
    pppiStack_158 = (int ***)&DAT_00413b34;
    piStack_15c = (int *)0x4677e9;
    __vbaNew2();
  }
  pppiVar9 = DAT_00480244;
  ppiStack_154 = &piStack_d4;
  pppiStack_158 = DAT_00480244;
  piStack_15c = (int *)0x4677f9;
  piVar12 = (int *)(*(code *)(*DAT_00480244)[6])();
  if ((int)piVar12 < 0) {
    piStack_15c = (int *)0x18;
    piStack_160 = (int *)&DAT_00413b24;
    pppiStack_164 = pppiVar9;
    piStack_16c = (int *)0x46780e;
    ppiStack_168 = (int **)piVar12;
    __vbaHresultCheckObj();
  }
  piVar12 = piStack_d4;
  iVar10 = *piStack_d4;
  piStack_15c = (int *)0x46781e;
  pppiStack_158 = (int ***)__vbaI2I4();
  piStack_15c = piVar12;
  piStack_160 = (int *)0x467823;
  iVar10 = (**(code **)(iVar10 + 0x7c))();
  if (iVar10 < 0) {
    piStack_160 = (int *)0x7c;
    pppiStack_164 = (int ***)&DAT_0041490c;
    ppiStack_168 = (int **)piVar12;
    pppiStack_170 = (int ***)0x467838;
    piStack_16c = (int *)iVar10;
    __vbaHresultCheckObj();
  }
  pcVar14 = __vbaFreeObj_exref;
  piStack_160 = (int *)0x467843;
  __vbaFreeObj();
  uStack_108 = 3;
  pppiStack_170 = (int ***)0x0;
  piStack_16c = (int *)0x3;
  piStack_100 = (int *)0x1;
  ppiStack_168 = (int **)uStack_104;
  pppiStack_164 = (int ***)0x1;
  piStack_160 = piStack_fc;
  pppiStack_178 = (int ***)0x467874;
  piStack_174 = piVar7;
  pppiStack_178 = (int ***)(**(code **)(*piVar7 + 0x38c))();
  pcVar1 = __vbaObjSet_exref;
  pppiStack_17c = (int ***)&piStack_d4;
  ppiStack_180 = (int **)0x467881;
  pppiStack_178 = (int ***)__vbaObjSet();
  pppiStack_17c = (int ***)0x467888;
  __vbaLateIdSt();
  pppiStack_164 = (int ***)0x46788d;
  __vbaFreeObj();
  uStack_108 = 3;
  piStack_174 = (int *)0x0;
  pppiStack_170 = (int ***)0x3;
  piStack_100 = (int *)0x1;
  piStack_16c = (int *)uStack_104;
  ppiStack_168 = (int **)0x1;
  pppiStack_164 = (int ***)piStack_fc;
  pppiStack_17c = (int ***)0x4678be;
  pppiStack_178 = (int ***)piVar7;
  pppiStack_17c = (int ***)(**(code **)(*piVar7 + 0x390))();
  ppiStack_180 = &piStack_d4;
  pppiStack_184 = (int ***)0x4678c5;
  pppiStack_17c = (int ***)__vbaObjSet();
  ppiStack_180 = (int **)0x4678cc;
  __vbaLateIdSt();
  ppiStack_168 = (int **)0x4678d1;
  __vbaFreeObj();
  ppiStack_168 = &piStack_d4;
  ppiStack_c4 = (int **)0x1;
  pppiStack_c8 = (int ***)0x1;
  piStack_16c = (int *)piVar7[0xe];
  pppiStack_cc = (int ***)0x0;
  pppiStack_170 = (int ***)0x4678f0;
  iVar10 = (**(code **)(*piStack_16c + 0x70))();
  if (iVar10 < 0) {
    pppiStack_178 = (int ***)piVar7[0xe];
    pppiStack_170 = (int ***)0x70;
    piStack_174 = (int *)&LAB_004133e8;
    ppiStack_180 = (int **)0x467908;
    pppiStack_17c = (int ***)iVar10;
    __vbaHresultCheckObj();
  }
  pppiStack_170 = &ppiStack_d8;
  piStack_174 = piStack_d4;
  piStack_120 = piStack_d4;
  pppiStack_178 = (int ***)0x467918;
  iVar10 = (**(code **)(*piStack_d4 + 0x6c))();
  if (iVar10 < 0) {
    pppiStack_178 = (int ***)0x6c;
    pppiStack_17c = (int ***)&LAB_004133f8;
    ppiStack_180 = (int **)piStack_120;
    pppiStack_188 = (int ***)0x467930;
    pppiStack_184 = (int ***)iVar10;
    __vbaHresultCheckObj();
  }
  pppiStack_178 = (int ***)ppiStack_d8;
  ppiStack_d8 = (int **)0x0;
  pppiStack_17c = (int ***)auStack_12c;
  ppiStack_180 = (int **)0x467941;
  pppiStack_178 = (int ***)__vbaObjSet();
  pppiStack_17c = &ppiStack_d0;
  ppiStack_180 = &piStack_130;
  pppiStack_184 = (int ***)&DAT_00414268;
  pppiStack_188 = (int ***)0x467958;
  iStack_13c = __vbaForEachCollObj();
  pppiStack_178 = (int ***)0x467963;
  __vbaFreeObj();
  while( true ) {
    if (iStack_13c == 0) {
      if (DAT_00480244 == (int ***)0x0) {
        pppiStack_178 = (int ***)&DAT_00480244;
        pppiStack_17c = (int ***)&DAT_00413b34;
        ppiStack_180 = (int **)0x467bc5;
        __vbaNew2();
      }
      pppiVar9 = DAT_00480244;
      pppiStack_178 = (int ***)&piStack_d4;
      pppiStack_17c = DAT_00480244;
      ppiStack_180 = (int **)0x467bd5;
      piVar12 = (int *)(*(code *)(*DAT_00480244)[6])();
      if ((int)piVar12 < 0) {
        ppiStack_180 = (int **)0x18;
        pppiStack_184 = (int ***)&DAT_00413b24;
        pppiStack_188 = pppiVar9;
        ppiStack_190 = (int **)0x467bea;
        ppiStack_18c = (int **)piVar12;
        __vbaHresultCheckObj();
      }
      piVar12 = piStack_d4;
      iVar10 = *piStack_d4;
      ppiStack_180 = (int **)0x467bf7;
      pppiStack_17c = (int ***)__vbaI2I4();
      ppiStack_180 = (int **)piVar12;
      pppiStack_184 = (int ***)0x467bfc;
      ppiVar8 = (int **)(**(code **)(iVar10 + 0x7c))();
      if ((int)ppiVar8 < 0) {
        pppiStack_184 = (int ***)0x7c;
        pppiStack_188 = (int ***)&DAT_0041490c;
        ppiStack_18c = (int **)piVar12;
        piStack_194 = (int *)0x467c11;
        ppiStack_190 = ppiVar8;
        __vbaHresultCheckObj();
      }
      pppiStack_184 = (int ***)0x467c16;
      (*pcVar14)();
      pppiStack_b0 = (int ***)0x0;
      pppiStack_184 = (int ***)&LAB_00467c68;
      pppiStack_188 = (int ***)&piStack_130;
      ppiStack_18c = (int **)auStack_12c;
      ppiStack_190 = (int **)0x2;
      piStack_194 = (int *)0x467c5b;
      __vbaFreeObjList();
      pppiStack_188 = (int ***)0x467c67;
      __vbaFreeObj();
      return;
    }
    pppiStack_178 = &ppiStack_e8;
    pppiStack_17c = (int ***)ppiStack_d0;
    ppiStack_180 = (int **)0x46797e;
    ppiStack_18c = (int **)(*(code *)(*ppiStack_d0)[0x17])();
    if ((int)ppiStack_18c < 0) {
      ppiStack_180 = (int **)0x5c;
      pppiStack_184 = (int ***)&DAT_00414268;
      pppiStack_188 = (int ***)ppiStack_d0;
      ppiStack_190 = (int **)0x467996;
      __vbaHresultCheckObj();
    }
    pppiStack_184 = &ppiStack_e8;
    ppiStack_180 = (int **)0x1;
    pppiStack_188 = (int ***)&uStack_108;
    ppiStack_190 = &piStack_f8;
    ppiStack_18c = (int **)0x0;
    piStack_100 = (int *)&DAT_0041439c /* bstr: '_' */;
    uStack_108 = 8;
    piStack_194 = (int *)0x4679ba;
    ppiStack_180 = (int **)__vbaInStrVar();
    pppiStack_184 = (int ***)0x4679c1;
    uVar6 = __vbaBoolVarNull();
    piStack_120 = (int *)CONCAT22(piStack_120._2_2_,uVar6);
    ppiStack_180 = &piStack_f8;
    pppiStack_184 = &ppiStack_e8;
    pppiStack_188 = (int ***)0x2;
    ppiStack_18c = (int **)0x4679d5;
    __vbaFreeVarList();
    piStack_194 = piVar7;
    if ((short)piStack_120 == 0) {
      pppiStack_184 = (int ***)(int)(short)pppiStack_c8;
      uStack_108 = 3;
      ppiStack_190 = (int **)0x0;
      ppiStack_18c = (int **)0x3;
      pppiStack_188 = (int ***)uStack_104;
      ppiStack_180 = (int **)piStack_fc;
      ppiStack_198 = (int **)0x467ade;
      piStack_100 = (int *)pppiStack_184;
      ppiStack_198 = (int **)(**(code **)(*piVar7 + 0x390))();
      ppiStack_19c = &piStack_d4;
      iStack_1a0 = 0x467ae5;
      ppiStack_198 = (int **)__vbaObjSet();
      ppiStack_19c = (int **)0x467aec;
      __vbaLateIdSt();
      pppiStack_184 = (int ***)0x467af1;
      (*pcVar14)();
      pppiStack_188 = (int ***)0x467afa;
      pppiStack_184 = (int ***)piVar7;
      pppiStack_188 = (int ***)(**(code **)(*piVar7 + 0x358))();
      ppiStack_18c = &piStack_d4;
      ppiStack_190 = (int **)0x467b01;
      ppiVar8 = (int **)__vbaObjSet();
      pppiStack_188 = &ppiStack_d8;
      ppiStack_18c = (int **)pppiStack_c8;
      piStack_194 = (int *)0x467b11;
      ppiStack_190 = ppiVar8;
      iVar10 = (*(code *)(*ppiVar8)[0x10])();
      if (iVar10 < 0) {
        piStack_194 = (int *)0x40;
        ppiStack_198 = (int **)&DAT_004182e4;
        uStack_1a4 = 0x467b26;
        iStack_1a0 = iVar10;
        ppiStack_19c = ppiVar8;
        __vbaHresultCheckObj();
      }
      ppiVar8 = ppiStack_d8;
      piStack_194 = (int *)pppiStack_cc;
      ppiStack_198 = ppiStack_d8;
      ppiStack_19c = (int **)0x467b38;
      pppiStack_184 = (int ***)(*(code *)(*ppiStack_d8)[0x3d])();
      if ((int)pppiStack_184 < 0) {
        pppiStack_178 = (int ***)0xf4;
        pppiStack_17c = (int ***)&DAT_0041807c;
        ppiStack_180 = ppiVar8;
        pppiStack_188 = (int ***)0x467b50;
        __vbaHresultCheckObj();
      }
      pppiStack_178 = &ppiStack_d8;
      pppiStack_17c = (int ***)&piStack_d4;
      ppiStack_180 = (int **)0x2;
      pppiStack_184 = (int ***)0x467b60;
      __vbaFreeObjList();
      pppiVar3 = (int ***)CONCAT22(extraout_var_00,(short)pppiStack_c8 + 1);
      uVar6 = extraout_var_02;
      pppiVar9 = pppiStack_c8;
      ppiVar4 = ppiStack_c4;
      ppiVar2 = ppiStack_c4;
      sVar5 = (short)pppiStack_c8;
    }
    else {
      pppiStack_184 = (int ***)(int)(short)ppiStack_c4;
      uStack_108 = 3;
      ppiStack_190 = (int **)0x0;
      ppiStack_18c = (int **)0x3;
      pppiStack_188 = (int ***)uStack_104;
      ppiStack_180 = (int **)piStack_fc;
      ppiStack_198 = (int **)0x467a13;
      piStack_100 = (int *)pppiStack_184;
      ppiStack_198 = (int **)(**(code **)(*piVar7 + 0x38c))();
      ppiStack_19c = &piStack_d4;
      iStack_1a0 = 0x467a1a;
      ppiStack_198 = (int **)__vbaObjSet();
      ppiStack_19c = (int **)0x467a21;
      __vbaLateIdSt();
      pppiStack_184 = (int ***)0x467a26;
      (*pcVar14)();
      pppiStack_188 = (int ***)0x467a2f;
      pppiStack_184 = (int ***)piVar7;
      pppiStack_188 = (int ***)(**(code **)(*piVar7 + 0x308))();
      ppiStack_18c = &piStack_d4;
      ppiStack_190 = (int **)0x467a36;
      ppiVar8 = (int **)__vbaObjSet();
      pppiStack_188 = &ppiStack_d8;
      ppiStack_18c = ppiStack_c4;
      piStack_194 = (int *)0x467a46;
      ppiStack_190 = ppiVar8;
      iVar10 = (*(code *)(*ppiVar8)[0x10])();
      if (iVar10 < 0) {
        piStack_194 = (int *)0x40;
        ppiStack_198 = (int **)&DAT_004182e4;
        uStack_1a4 = 0x467a5b;
        iStack_1a0 = iVar10;
        ppiStack_19c = ppiVar8;
        __vbaHresultCheckObj();
      }
      ppiVar8 = ppiStack_d8;
      piStack_194 = (int *)pppiStack_cc;
      ppiStack_198 = ppiStack_d8;
      ppiStack_19c = (int **)0x467a6d;
      pppiStack_184 = (int ***)(*(code *)(*ppiStack_d8)[0x3d])();
      if ((int)pppiStack_184 < 0) {
        pppiStack_178 = (int ***)0xf4;
        pppiStack_17c = (int ***)&DAT_0041807c;
        ppiStack_180 = ppiVar8;
        pppiStack_188 = (int ***)0x467a85;
        __vbaHresultCheckObj();
      }
      pppiStack_178 = &ppiStack_d8;
      pppiStack_17c = (int ***)&piStack_d4;
      ppiStack_180 = (int **)0x2;
      pppiStack_184 = (int ***)0x467a95;
      __vbaFreeObjList();
      pppiVar3 = pppiStack_c8;
      uVar6 = extraout_var_01;
      pppiVar9 = pppiStack_c8;
      ppiVar4 = (int **)CONCAT22(extraout_var,(short)ppiStack_c4 + 1);
      ppiVar2 = ppiStack_c4;
      sVar5 = (short)ppiStack_c4;
    }
    ppiStack_c4 = ppiVar4;
    pppiStack_c8 = pppiVar3;
    if (SCARRY2(sVar5,1)) break;
    pppiStack_178 = &ppiStack_d0;
    pppiStack_17c = (int ***)&piStack_130;
    pppiVar9 = pppiStack_c8;
    ppiVar2 = ppiStack_c4;
    if (SCARRY2((short)pppiStack_cc,1)) break;
    ppiStack_180 = (int **)&DAT_00414268;
    pppiStack_184 = (int ***)0x467b9b;
    pppiStack_cc = (int ***)CONCAT22(uVar6,(short)pppiStack_cc + 1);
    iStack_13c = __vbaNextEachCollObj();
    pcVar14 = __vbaFreeObj_exref;
  }
  ppiStack_c4 = ppiVar2;
  pppiStack_c8 = pppiVar9;
  ppiStack_180 = (int **)0x467c8d;
  __vbaErrorOverflow();
  ppiStack_18c = (int **)&LAB_004032d6;
  ppiStack_190 = ExceptionList;
  pcStack_1b0 = pcVar1;
  pppiStack_188 = &ppiStack_1b8;
  pppiStack_184 = (int ***)&DAT_00402bb0;
  ppiStack_180 = (int **)((uint)piStack_174 & 1);
  piVar12 = (int *)((uint)piStack_174 & 0xfffffffe);
  ExceptionList = &ppiStack_190;
  ppiStack_1b8 = ppiVar8;
  piStack_1b4 = piVar7;
  pppiStack_17c = (int ***)&piStack_ac;
  piStack_174 = piVar12;
  (**(code **)(*piVar12 + 4))(piVar12);
  piStack_194 = (int *)0x0;
  ppiStack_198 = (int **)0x0;
  ppiStack_19c = (int **)0x0;
  iVar10 = (**(code **)(*(int *)piVar12[0x11] + 0x34))((int *)piVar12[0x11],&ppiStack_198);
  if (iVar10 < 0) {
    __vbaHresultCheckObj(iVar10,piVar12[0x11],&DAT_00415000,0x34);
  }
  uVar11 = __vbaCastObj(0,&DAT_0041462c);
  __vbaObjSet(&piStack_194,uVar11);
  ppiStack_19c = ppiStack_198;
  iVar10 = (**(code **)(*(int *)piVar12[0xf] + 0x88))
                     ((int *)piVar12[0xf],piVar12 + 0xd,&ppiStack_19c,&piStack_194);
  if (iVar10 < 0) {
    __vbaHresultCheckObj(iVar10,piVar12[0xf],&LAB_004133e8,0x88);
  }
  __vbaFreeObj();
  (**(code **)(*piVar12 + 0x700))(piVar12);
  return;
}

/* ---- 0x467770 (FUN_00467770) [estimated] strings:  ---- */
void __cdecl FUN_00467770(uint param_1)

{
  short sVar1;
  code *pcVar2;
  int ***pppiVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined2 uVar7;
  int *piVar8;
  int iVar9;
  int **ppiVar10;
  undefined4 uVar11;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int *piVar12;
  code *pcVar13;
  int **ppiStack_110;
  int *piStack_10c;
  code *pcStack_108;
  undefined4 uStack_fc;
  int iStack_f8;
  int **ppiStack_f4;
  int **ppiStack_f0;
  int *piStack_ec;
  int **ppiStack_e8;
  int **ppiStack_e4;
  int ***pppiStack_e0;
  int *piStack_dc;
  int **ppiStack_d8;
  int ***pppiStack_d4;
  int ***pppiStack_d0;
  int *piStack_cc;
  int ***pppiStack_c8;
  int *piStack_c4;
  int **ppiStack_c0;
  int ***pppiStack_bc;
  undefined *puStack_b8;
  int *piStack_b4;
  int ***pppiStack_b0;
  int **ppiStack_ac;
  int *piStack_a8;
  int local_94;
  int *local_88;
  undefined4 local_84 [3];
  int *local_78;
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_54;
  int *local_50 [4];
  undefined4 local_40 [4];
  int **local_30;
  int *local_2c;
  int **local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff5c;
  local_c = &DAT_00402ba0;
  local_8 = param_1 & 1;
  piVar12 = (int *)(param_1 & 0xfffffffe);
  ppiStack_ac = (int **)0x4677b3;
  ExceptionList = &pvStack_18;
  piStack_a8 = piVar12;
  (**(code **)(*piVar12 + 4))();
  local_28 = (int **)0x0;
  local_2c = (int *)0x0;
  local_30 = (int **)0x0;
  local_40[0] = 0;
  local_50[0] = (int *)0x0;
  local_60 = 0;
  local_84[0] = 0;
  local_88 = (int *)0x0;
  if (DAT_00480244 == (int ***)0x0) {
    ppiStack_ac = (int **)&DAT_00480244;
    pppiStack_b0 = (int ***)&DAT_00413b34;
    piStack_b4 = (int *)0x4677e9;
    __vbaNew2();
  }
  pppiVar3 = DAT_00480244;
  ppiStack_ac = &local_2c;
  pppiStack_b0 = DAT_00480244;
  piStack_b4 = (int *)0x4677f9;
  piVar8 = (int *)(*(code *)(*DAT_00480244)[6])();
  if ((int)piVar8 < 0) {
    piStack_b4 = (int *)0x18;
    puStack_b8 = &DAT_00413b24;
    pppiStack_bc = pppiVar3;
    piStack_c4 = (int *)0x46780e;
    ppiStack_c0 = (int **)piVar8;
    __vbaHresultCheckObj();
  }
  piVar8 = local_2c;
  iVar9 = *local_2c;
  piStack_b4 = (int *)0x46781e;
  pppiStack_b0 = (int ***)__vbaI2I4();
  piStack_b4 = piVar8;
  puStack_b8 = (undefined *)0x467823;
  iVar9 = (**(code **)(iVar9 + 0x7c))();
  if (iVar9 < 0) {
    puStack_b8 = (undefined *)0x7c;
    pppiStack_bc = (int ***)&DAT_0041490c;
    ppiStack_c0 = (int **)piVar8;
    pppiStack_c8 = (int ***)0x467838;
    piStack_c4 = (int *)iVar9;
    __vbaHresultCheckObj();
  }
  pcVar13 = __vbaFreeObj_exref;
  puStack_b8 = (undefined *)0x467843;
  __vbaFreeObj();
  local_60 = 3;
  pppiStack_c8 = (int ***)0x0;
  piStack_c4 = (int *)0x3;
  local_58 = (undefined *)0x1;
  ppiStack_c0 = (int **)local_5c;
  pppiStack_bc = (int ***)0x1;
  puStack_b8 = (undefined *)local_54;
  pppiStack_d0 = (int ***)0x467874;
  piStack_cc = piVar12;
  pppiStack_d0 = (int ***)(**(code **)(*piVar12 + 0x38c))();
  pcVar2 = __vbaObjSet_exref;
  pppiStack_d4 = (int ***)&local_2c;
  ppiStack_d8 = (int **)0x467881;
  pppiStack_d0 = (int ***)__vbaObjSet();
  pppiStack_d4 = (int ***)0x467888;
  __vbaLateIdSt();
  pppiStack_bc = (int ***)0x46788d;
  __vbaFreeObj();
  local_60 = 3;
  piStack_cc = (int *)0x0;
  pppiStack_c8 = (int ***)0x3;
  local_58 = (undefined *)0x1;
  piStack_c4 = (int *)local_5c;
  ppiStack_c0 = (int **)0x1;
  pppiStack_bc = (int ***)local_54;
  pppiStack_d4 = (int ***)0x4678be;
  pppiStack_d0 = (int ***)piVar12;
  pppiStack_d4 = (int ***)(**(code **)(*piVar12 + 0x390))();
  ppiStack_d8 = &local_2c;
  piStack_dc = (int *)0x4678c5;
  pppiStack_d4 = (int ***)__vbaObjSet();
  ppiStack_d8 = (int **)0x4678cc;
  __vbaLateIdSt();
  ppiStack_c0 = (int **)0x4678d1;
  __vbaFreeObj();
  ppiStack_c0 = &local_2c;
  local_1c = (int *)0x1;
  local_20 = (int *)0x1;
  piStack_c4 = (int *)piVar12[0xe];
  local_24 = (int *)0x0;
  pppiStack_c8 = (int ***)0x4678f0;
  iVar9 = (**(code **)(*piStack_c4 + 0x70))();
  if (iVar9 < 0) {
    pppiStack_d0 = (int ***)piVar12[0xe];
    pppiStack_c8 = (int ***)0x70;
    piStack_cc = (int *)&LAB_004133e8;
    ppiStack_d8 = (int **)0x467908;
    pppiStack_d4 = (int ***)iVar9;
    __vbaHresultCheckObj();
  }
  pppiStack_c8 = &local_30;
  piStack_cc = local_2c;
  local_78 = local_2c;
  pppiStack_d0 = (int ***)0x467918;
  iVar9 = (**(code **)(*local_2c + 0x6c))();
  if (iVar9 < 0) {
    pppiStack_d0 = (int ***)0x6c;
    pppiStack_d4 = (int ***)&LAB_004133f8;
    ppiStack_d8 = (int **)local_78;
    pppiStack_e0 = (int ***)0x467930;
    piStack_dc = (int *)iVar9;
    __vbaHresultCheckObj();
  }
  pppiStack_d0 = (int ***)local_30;
  local_30 = (int **)0x0;
  pppiStack_d4 = (int ***)local_84;
  ppiStack_d8 = (int **)0x467941;
  pppiStack_d0 = (int ***)__vbaObjSet();
  pppiStack_d4 = &local_28;
  ppiStack_d8 = &local_88;
  piStack_dc = (int *)&DAT_00414268;
  pppiStack_e0 = (int ***)0x467958;
  local_94 = __vbaForEachCollObj();
  pppiStack_d0 = (int ***)0x467963;
  __vbaFreeObj();
  while( true ) {
    if (local_94 == 0) {
      if (DAT_00480244 == (int ***)0x0) {
        pppiStack_d0 = (int ***)&DAT_00480244;
        pppiStack_d4 = (int ***)&DAT_00413b34;
        ppiStack_d8 = (int **)0x467bc5;
        __vbaNew2();
      }
      pppiVar3 = DAT_00480244;
      pppiStack_d0 = (int ***)&local_2c;
      pppiStack_d4 = DAT_00480244;
      ppiStack_d8 = (int **)0x467bd5;
      piVar12 = (int *)(*(code *)(*DAT_00480244)[6])();
      if ((int)piVar12 < 0) {
        ppiStack_d8 = (int **)0x18;
        piStack_dc = (int *)&DAT_00413b24;
        pppiStack_e0 = pppiVar3;
        ppiStack_e8 = (int **)0x467bea;
        ppiStack_e4 = (int **)piVar12;
        __vbaHresultCheckObj();
      }
      piVar12 = local_2c;
      iVar9 = *local_2c;
      ppiStack_d8 = (int **)0x467bf7;
      pppiStack_d4 = (int ***)__vbaI2I4();
      ppiStack_d8 = (int **)piVar12;
      piStack_dc = (int *)0x467bfc;
      ppiVar10 = (int **)(**(code **)(iVar9 + 0x7c))();
      if ((int)ppiVar10 < 0) {
        piStack_dc = (int *)0x7c;
        pppiStack_e0 = (int ***)&DAT_0041490c;
        ppiStack_e4 = (int **)piVar12;
        piStack_ec = (int *)0x467c11;
        ppiStack_e8 = ppiVar10;
        __vbaHresultCheckObj();
      }
      piStack_dc = (int *)0x467c16;
      (*pcVar13)();
      local_8 = 0;
      piStack_dc = (int *)&LAB_00467c68;
      pppiStack_e0 = (int ***)&local_88;
      ppiStack_e4 = (int **)local_84;
      ppiStack_e8 = (int **)0x2;
      piStack_ec = (int *)0x467c5b;
      __vbaFreeObjList();
      pppiStack_e0 = (int ***)0x467c67;
      __vbaFreeObj();
      return;
    }
    pppiStack_d0 = (int ***)local_40;
    pppiStack_d4 = (int ***)local_28;
    ppiStack_d8 = (int **)0x46797e;
    ppiStack_e4 = (int **)(*(code *)(*local_28)[0x17])();
    if ((int)ppiStack_e4 < 0) {
      ppiStack_d8 = (int **)0x5c;
      piStack_dc = (int *)&DAT_00414268;
      pppiStack_e0 = (int ***)local_28;
      ppiStack_e8 = (int **)0x467996;
      __vbaHresultCheckObj();
    }
    piStack_dc = local_40;
    ppiStack_d8 = (int **)0x1;
    pppiStack_e0 = (int ***)&local_60;
    ppiStack_e8 = local_50;
    ppiStack_e4 = (int **)0x0;
    local_58 = &DAT_0041439c /* bstr: '_' */;
    local_60 = 8;
    piStack_ec = (int *)0x4679ba;
    ppiStack_d8 = (int **)__vbaInStrVar();
    piStack_dc = (int *)0x4679c1;
    uVar7 = __vbaBoolVarNull();
    local_78 = (int *)CONCAT22(local_78._2_2_,uVar7);
    ppiStack_d8 = local_50;
    piStack_dc = local_40;
    pppiStack_e0 = (int ***)0x2;
    ppiStack_e4 = (int **)0x4679d5;
    __vbaFreeVarList();
    piStack_ec = piVar12;
    if ((short)local_78 == 0) {
      piStack_dc = (int *)(int)(short)local_20;
      local_60 = 3;
      ppiStack_e8 = (int **)0x0;
      ppiStack_e4 = (int **)0x3;
      pppiStack_e0 = (int ***)local_5c;
      ppiStack_d8 = (int **)local_54;
      ppiStack_f0 = (int **)0x467ade;
      local_58 = (undefined *)piStack_dc;
      ppiStack_f0 = (int **)(**(code **)(*piVar12 + 0x390))();
      ppiStack_f4 = &local_2c;
      iStack_f8 = 0x467ae5;
      ppiStack_f0 = (int **)__vbaObjSet();
      ppiStack_f4 = (int **)0x467aec;
      __vbaLateIdSt();
      piStack_dc = (int *)0x467af1;
      (*pcVar13)();
      pppiStack_e0 = (int ***)0x467afa;
      piStack_dc = piVar12;
      pppiStack_e0 = (int ***)(**(code **)(*piVar12 + 0x358))();
      ppiStack_e4 = &local_2c;
      ppiStack_e8 = (int **)0x467b01;
      ppiVar10 = (int **)__vbaObjSet();
      pppiStack_e0 = &local_30;
      ppiStack_e4 = (int **)local_20;
      piStack_ec = (int *)0x467b11;
      ppiStack_e8 = ppiVar10;
      iVar9 = (*(code *)(*ppiVar10)[0x10])();
      if (iVar9 < 0) {
        piStack_ec = (int *)0x40;
        ppiStack_f0 = (int **)&DAT_004182e4;
        uStack_fc = 0x467b26;
        iStack_f8 = iVar9;
        ppiStack_f4 = ppiVar10;
        __vbaHresultCheckObj();
      }
      ppiVar10 = local_30;
      piStack_ec = local_24;
      ppiStack_f0 = local_30;
      ppiStack_f4 = (int **)0x467b38;
      piStack_dc = (int *)(*(code *)(*local_30)[0x3d])();
      if ((int)piStack_dc < 0) {
        pppiStack_d0 = (int ***)0xf4;
        pppiStack_d4 = (int ***)&DAT_0041807c;
        ppiStack_d8 = ppiVar10;
        pppiStack_e0 = (int ***)0x467b50;
        __vbaHresultCheckObj();
      }
      pppiStack_d0 = &local_30;
      pppiStack_d4 = (int ***)&local_2c;
      ppiStack_d8 = (int **)0x2;
      piStack_dc = (int *)0x467b60;
      __vbaFreeObjList();
      piVar5 = (int *)CONCAT22(extraout_var_00,(short)local_20 + 1);
      uVar7 = extraout_var_02;
      piVar8 = local_20;
      piVar6 = local_1c;
      piVar4 = local_1c;
      sVar1 = (short)local_20;
    }
    else {
      piStack_dc = (int *)(int)(short)local_1c;
      local_60 = 3;
      ppiStack_e8 = (int **)0x0;
      ppiStack_e4 = (int **)0x3;
      pppiStack_e0 = (int ***)local_5c;
      ppiStack_d8 = (int **)local_54;
      ppiStack_f0 = (int **)0x467a13;
      local_58 = (undefined *)piStack_dc;
      ppiStack_f0 = (int **)(**(code **)(*piVar12 + 0x38c))();
      ppiStack_f4 = &local_2c;
      iStack_f8 = 0x467a1a;
      ppiStack_f0 = (int **)__vbaObjSet();
      ppiStack_f4 = (int **)0x467a21;
      __vbaLateIdSt();
      piStack_dc = (int *)0x467a26;
      (*pcVar13)();
      pppiStack_e0 = (int ***)0x467a2f;
      piStack_dc = piVar12;
      pppiStack_e0 = (int ***)(**(code **)(*piVar12 + 0x308))();
      ppiStack_e4 = &local_2c;
      ppiStack_e8 = (int **)0x467a36;
      ppiVar10 = (int **)__vbaObjSet();
      pppiStack_e0 = &local_30;
      ppiStack_e4 = (int **)local_1c;
      piStack_ec = (int *)0x467a46;
      ppiStack_e8 = ppiVar10;
      iVar9 = (*(code *)(*ppiVar10)[0x10])();
      if (iVar9 < 0) {
        piStack_ec = (int *)0x40;
        ppiStack_f0 = (int **)&DAT_004182e4;
        uStack_fc = 0x467a5b;
        iStack_f8 = iVar9;
        ppiStack_f4 = ppiVar10;
        __vbaHresultCheckObj();
      }
      ppiVar10 = local_30;
      piStack_ec = local_24;
      ppiStack_f0 = local_30;
      ppiStack_f4 = (int **)0x467a6d;
      piStack_dc = (int *)(*(code *)(*local_30)[0x3d])();
      if ((int)piStack_dc < 0) {
        pppiStack_d0 = (int ***)0xf4;
        pppiStack_d4 = (int ***)&DAT_0041807c;
        ppiStack_d8 = ppiVar10;
        pppiStack_e0 = (int ***)0x467a85;
        __vbaHresultCheckObj();
      }
      pppiStack_d0 = &local_30;
      pppiStack_d4 = (int ***)&local_2c;
      ppiStack_d8 = (int **)0x2;
      piStack_dc = (int *)0x467a95;
      __vbaFreeObjList();
      piVar5 = local_20;
      uVar7 = extraout_var_01;
      piVar8 = local_20;
      piVar6 = (int *)CONCAT22(extraout_var,(short)local_1c + 1);
      piVar4 = local_1c;
      sVar1 = (short)local_1c;
    }
    local_1c = piVar6;
    local_20 = piVar5;
    if (SCARRY2(sVar1,1)) break;
    pppiStack_d0 = &local_28;
    pppiStack_d4 = (int ***)&local_88;
    piVar8 = local_20;
    piVar4 = local_1c;
    if (SCARRY2((short)local_24,1)) break;
    ppiStack_d8 = (int **)&DAT_00414268;
    piStack_dc = (int *)0x467b9b;
    local_24 = (int *)CONCAT22(uVar7,(short)local_24 + 1);
    local_94 = __vbaNextEachCollObj();
    pcVar13 = __vbaFreeObj_exref;
  }
  local_1c = piVar4;
  local_20 = piVar8;
  ppiStack_d8 = (int **)0x467c8d;
  __vbaErrorOverflow();
  ppiStack_e4 = (int **)&LAB_004032d6;
  ppiStack_e8 = ExceptionList;
  pcStack_108 = pcVar2;
  pppiStack_e0 = &ppiStack_110;
  piStack_dc = (int *)&DAT_00402bb0;
  ppiStack_d8 = (int **)((uint)piStack_cc & 1);
  piVar8 = (int *)((uint)piStack_cc & 0xfffffffe);
  ExceptionList = &ppiStack_e8;
  ppiStack_110 = ppiVar10;
  piStack_10c = piVar12;
  pppiStack_d4 = (int ***)&stack0xfffffffc;
  piStack_cc = piVar8;
  (**(code **)(*piVar8 + 4))(piVar8);
  piStack_ec = (int *)0x0;
  ppiStack_f0 = (int **)0x0;
  ppiStack_f4 = (int **)0x0;
  iVar9 = (**(code **)(*(int *)piVar8[0x11] + 0x34))((int *)piVar8[0x11],&ppiStack_f0);
  if (iVar9 < 0) {
    __vbaHresultCheckObj(iVar9,piVar8[0x11],&DAT_00415000,0x34);
  }
  uVar11 = __vbaCastObj(0,&DAT_0041462c);
  __vbaObjSet(&piStack_ec,uVar11);
  ppiStack_f4 = ppiStack_f0;
  iVar9 = (**(code **)(*(int *)piVar8[0xf] + 0x88))
                    ((int *)piVar8[0xf],piVar8 + 0xd,&ppiStack_f4,&piStack_ec);
  if (iVar9 < 0) {
    __vbaHresultCheckObj(iVar9,piVar8[0xf],&LAB_004133e8,0x88);
  }
  __vbaFreeObj();
  (**(code **)(*piVar8 + 0x700))(piVar8);
  return;
}

/* ---- 0x467c90 (FUN_00467c90) [estimated] strings:  ---- */
void __cdecl FUN_00467c90(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  local_10 = &stack0xffffffc0;
  local_c = &DAT_00402bb0;
  local_8 = param_1 & 1;
  piVar3 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar3 + 4))(piVar3);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  iVar1 = (**(code **)(*(int *)piVar3[0x11] + 0x34))((int *)piVar3[0x11],&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3[0x11],&DAT_00415000,0x34);
  }
  uVar2 = __vbaCastObj(0,&DAT_0041462c);
  __vbaObjSet(&local_1c,uVar2);
  local_24 = local_20;
  iVar1 = (**(code **)(*(int *)piVar3[0xf] + 0x88))
                    ((int *)piVar3[0xf],piVar3 + 0xd,&local_24,&local_1c);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar3[0xf],&LAB_004133e8,0x88);
  }
  __vbaFreeObj();
  (**(code **)(*piVar3 + 0x700))(piVar3);
  return;
}

/* ---- 0x467da0 (FUN_00467da0) [estimated] strings:  ---- */
void __cdecl FUN_00467da0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int *local_64 [4];
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c [4];
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
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
  local_10 = &stack0xffffff88;
  local_c = &DAT_00402bc0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  piVar5 = piVar4;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = (int *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_2c[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = (int *)0x0;
  local_4c[0] = 0;
  local_50 = 0;
  local_64[0] = (int *)0x0;
  uVar1 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&local_20,uVar1);
  __vbaStrCopy(piVar5);
  __vbaStrCopy();
  __vbaStrCopy();
  iVar2 = (**(code **)(*(int *)piVar4[0x12] + 0x2c))((int *)piVar4[0x12]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4[0x12],&DAT_004146ac,0x2c);
  }
  sVar3 = (short)local_50;
  __vbaFreeStrList(3,local_2c,&local_30,&local_34);
  if (sVar3 == 0) {
    uVar1 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&local_1c,uVar1);
    __vbaObjSetAddref(local_64,local_1c);
    iVar2 = (**(code **)(*local_64[0] + 0x5c))(local_64[0],&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_64[0],&DAT_00414258,0x5c);
    }
    sVar3 = (short)piVar4[0x45];
    uVar1 = (**(code **)(*piVar4 + 0x38c))(piVar4,0,0);
    uVar1 = __vbaObjSet(&local_38,uVar1);
    uVar1 = __vbaLateIdCallLd(local_4c,uVar1);
    iVar2 = __vbaI4Var(uVar1);
    local_54 = (int *)CONCAT22(local_54._2_2_,-(ushort)(sVar3 < 1 || iVar2 < sVar3));
    __vbaFreeObj();
    __vbaFreeVar(uVar1);
    if ((short)local_54 != 0) {
      sVar3 = 1;
    }
    iVar2 = (**(code **)(*local_1c + 0x6c))(local_1c,&local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_1c,&DAT_00414258,0x6c);
    }
    uVar1 = (**(code **)(*piVar4 + 0x318))(piVar4);
    local_54 = (int *)__vbaObjSet(&local_38,uVar1);
    iVar2 = (**(code **)(*local_54 + 0x40))(local_54,sVar3,&local_3c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_54,&DAT_004182e4,0x40);
    }
    piVar5 = local_3c;
    iVar2 = (**(code **)(*local_3c + 0xa4))(local_3c,local_24);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar5,&DAT_00417a98,0xa4);
    }
    __vbaFreeObjList(2,&local_38,&local_3c);
    __vbaObjSetAddref(local_64,0);
    (**(code **)(*piVar4 + 0x700))(piVar4);
  }
  local_8 = 0;
  __vbaFreeObj(&LAB_00468052);
  __vbaFreeObj();
  __vbaFreeObj();
  __vbaFreeStr();
  return;
}

/* ---- 0x468080 (FUN_00468080) [anchored] strings: GL field of some entry doesn\'t point to an object; CTPEditor.frmGreatLibrary ---- */
void __cdecl FUN_00468080(uint param_1)

{
  int **ppiVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int ****ppppiVar5;
  undefined4 uVar6;
  int ***pppiVar7;
  int *piVar8;
  int ****ppppiVar9;
  uint uVar10;
  int ***pppiVar11;
  code *pcVar12;
  int ****ppppiVar13;
  code *pcVar14;
  int ****ppppiStack_220;
  int ****ppppiStack_21c;
  int ****ppppiStack_218;
  int ****ppppiStack_214;
  int ***pppiStack_210;
  undefined4 uStack_20c;
  int *piStack_208;
  int ***pppiStack_204;
  int **ppiStack_200;
  int ***pppiStack_1fc;
  int ***pppiStack_1f8;
  int **ppiStack_1f4;
  int ***pppiStack_1f0;
  int *piStack_1ec;
  int ***pppiStack_1e8;
  int ***pppiStack_1e4;
  int ***pppiStack_1e0;
  int ***pppiStack_1dc;
  int ***pppiStack_1d8;
  int ***pppiStack_1d4;
  int ***pppiStack_1d0;
  int ***pppiStack_1cc;
  int ***pppiStack_1c8;
  int ****ppppiStack_1c4;
  int ***pppiStack_1c0;
  int ***pppiStack_1bc;
  int ***pppiStack_1b8;
  int ***pppiStack_1b4;
  int ***pppiStack_1b0;
  int ***pppiStack_1ac;
  int ***pppiStack_1a8;
  undefined4 *puVar15;
  int **local_d4 [9];
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  int **local_70 [2];
  int **local_68;
  int **local_60 [2];
  int **local_58;
  undefined4 local_50;
  int *local_4c;
  int ***local_48;
  int ***local_44;
  undefined4 local_40;
  int **local_3c;
  int local_38;
  int **local_34;
  int ***local_30;
  int ***local_2c;
  int *local_28;
  int ***local_24;
  int ***local_20;
  int ***local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffec4;
  local_c = &DAT_00402bd0;
  local_8 = param_1 & 1;
  ppppiVar13 = (int ****)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (*(code *)(*ppppiVar13)[1])();
  local_1c = (int ***)0x0;
  local_20 = (int ***)0x0;
  local_28 = (int *)0x0;
  local_2c = (int ***)0x0;
  local_30 = (int ***)0x0;
  local_34 = (int **)0x0;
  local_38 = 0;
  local_3c = (int **)0x0;
  local_40 = 0;
  local_44 = (int ***)0x0;
  local_48 = (int ***)0x0;
  local_4c = (int *)0x0;
  local_50 = 0;
  local_60[0] = (int **)0x0;
  local_70[0] = (int **)0x0;
  local_80 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_d4[0] = (int **)0x0;
  iVar3 = (*(code *)(*ppppiVar13[0xf])[0x1b])();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  piVar8 = local_4c;
  (*(code *)(*ppppiVar13)[0xe5])();
  pcVar12 = __vbaObjSet_exref;
  __vbaObjSet();
  __vbaLateIdCallLd();
  __vbaCastObjVar();
  piVar4 = (int *)__vbaObjSet();
  iVar3 = (**(code **)(*piVar4 + 0x4c))();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  local_68 = local_34;
  local_34 = (int **)0x0;
  local_70[0] = (int **)0x8;
  iVar3 = (**(code **)(*piVar8 + 0x24))();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  local_50 = 0;
  __vbaObjSet();
  __vbaFreeObjList();
  __vbaFreeVarList();
  iVar3 = (*(code *)(*ppppiVar13[0xf])[0x1c])();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  iVar3 = (*(code *)(*local_44)[0x1c])();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  local_48 = (int ***)0x0;
  __vbaObjSet();
  __vbaFreeObj();
  iVar3 = (*(code *)(*local_30)[0xf])();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  iVar3 = (*(code *)(*local_44)[0xb])();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  local_48 = (int ***)0x0;
  __vbaObjSet();
  __vbaFreeObj();
  local_d4[0] = (int **)0x0;
  iVar3 = (*(code *)(*local_20)[0xe])();
  if (iVar3 < 0) {
    __vbaHresultCheckObj();
  }
  iVar3 = (*(code *)(*local_20)[0xc])();
  if (iVar3 < 0) {
    pppiStack_1a8 = (int ***)0x468327;
    __vbaHresultCheckObj();
  }
  sVar2 = rtcIsObject();
  __vbaFreeVar();
  if (sVar2 != -1) {
    ppppiVar5 = (int ****)(**(code **)(*local_28 + 0x5c))();
    if ((int)ppppiVar5 < 0) {
      pppiStack_1ac = (int ***)0x46836f;
      pppiStack_1a8 = (int ***)ppppiVar5;
      __vbaHresultCheckObj();
    }
    ppppiVar5 = (int ****)(*(code *)(*local_30)[9])();
    if ((int)ppppiVar5 < 0) {
      pppiStack_1a8 = (int ***)&LAB_0041470c;
      pppiStack_1ac = local_30;
      pppiStack_1b4 = (int ***)0x468398;
      pppiStack_1b0 = (int ***)ppppiVar5;
      __vbaHresultCheckObj();
    }
    local_34 = (int **)0x0;
    __vbaStrMove();
    __vbaStrCopy();
    puVar15 = &local_40;
    pppiVar7 = &local_3c;
    pppiStack_1a8 = (int ***)&local_38;
    pppiStack_1ac = (int ***)0x4683cf;
    uVar6 = __vbaStrVarVal();
    pppiStack_1a8 = (int ***)0x4683d5;
    local_68 = (int **)FUN_004419b0(uVar6,pppiVar7,puVar15);
    pppiStack_1a8 = local_70;
    local_70[0] = (int **)0x8;
    pppiStack_1ac = local_20;
    pppiStack_1b0 = (int ***)0x4683ec;
    pppiStack_1bc = (int ***)(*(code *)(*local_20)[0xd])();
    if ((int)pppiStack_1bc < 0) {
      pppiStack_1b0 = (int ***)0x34;
      pppiStack_1b4 = (int ***)&DAT_00414bb4;
      pppiStack_1b8 = local_20;
      pppiStack_1c0 = (int ***)0x468400;
      __vbaHresultCheckObj();
    }
    pppiStack_1b0 = (int ***)&local_40;
    pppiStack_1b4 = &local_3c;
    pppiStack_1b8 = (int ***)&local_38;
    pppiStack_1bc = (int ***)0x3;
    pppiStack_1c0 = (int ***)0x468414;
    __vbaFreeStrList();
    pppiStack_1c0 = local_70;
    ppppiStack_1c4 = (int ****)local_60;
    pppiStack_1c8 = (int ***)0x2;
    pppiStack_1cc = (int ***)0x468424;
    __vbaFreeVarList();
    pppiStack_1b0 = local_d4;
    local_d4[0] = (int **)0x0;
    pppiStack_1b4 = local_20;
    pppiStack_1b8 = (int ***)0x468441;
    iVar3 = (*(code *)(*local_20)[0xe])();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
  }
  ppppiVar5 = (int ****)(*(code *)(*local_20)[0xc])();
  if ((int)ppppiVar5 < 0) {
    pppiStack_1ac = (int ***)0x46847e;
    pppiStack_1a8 = (int ***)ppppiVar5;
    __vbaHresultCheckObj();
  }
  sVar2 = rtcIsObject();
  __vbaFreeVar();
  pcVar14 = __vbaHresultCheckObj_exref;
  if (sVar2 != -1) {
    __vbaCastObj();
    __vbaObjSet();
    ppppiVar5 = (int ****)(*(code *)(*local_20)[0xc])();
    pcVar14 = __vbaHresultCheckObj_exref;
    if ((int)ppppiVar5 < 0) {
      pppiStack_1a8 = local_20;
      pppiStack_1b0 = (int ***)0x4684da;
      pppiStack_1ac = (int ***)ppppiVar5;
      __vbaHresultCheckObj();
    }
    __vbaStrVarMove();
    __vbaStrMove();
    pppiStack_1ac = ppppiVar13[0xe];
    pppiStack_1a8 = &local_34;
    pppiStack_1b0 = (int ***)0x46850c;
    pppiVar7 = (int ***)(*(code *)(*pppiStack_1ac)[0x1d])();
    if ((int)pppiVar7 < 0) {
      pppiStack_1b8 = ppppiVar13[0xe];
      pppiStack_1b0 = (int ***)0x74;
      pppiStack_1b4 = (int ***)&LAB_004133e8;
      pppiStack_1c0 = (int ***)0x468520;
      pppiStack_1bc = pppiVar7;
      __vbaHresultCheckObj();
    }
    pppiStack_1b0 = (int ***)0x468529;
    __vbaFreeStr();
    pppiStack_1b0 = (int ***)&local_48;
    pppiStack_1b4 = (int ***)&local_44;
    pppiStack_1b8 = (int ***)0x2;
    pppiStack_1bc = (int ***)0x468539;
    __vbaFreeObjList();
    pppiStack_1b0 = (int ***)0x468545;
    __vbaFreeVar();
    pppiStack_1ac = local_d4;
    local_d4[0] = (int **)0x0;
    pppiStack_1b0 = local_20;
    pppiStack_1b4 = (int ***)0x46855f;
    iVar3 = (*(code *)(*local_20)[0xe])();
    if (iVar3 < 0) {
      pppiStack_1a8 = (int ***)0x468573;
      __vbaHresultCheckObj();
    }
  }
  ppppiVar5 = (int ****)(*(code *)(*local_20)[0xc])();
  if ((int)ppppiVar5 < 0) {
    pppiStack_1a8 = local_20;
    pppiStack_1b0 = (int ***)0x46859c;
    pppiStack_1ac = (int ***)ppppiVar5;
    (*pcVar14)();
  }
  sVar2 = rtcIsObject();
  __vbaFreeVar();
  if (sVar2 != -1) {
    rtcErrObj();
    piVar8 = (int *)__vbaObjSet();
    local_88 = 0x80020004;
    local_78 = 0x80020004;
    local_90 = 10;
    local_80 = 10;
    local_a8 = L"GL field of some entry doesn\'t point to an object";
    local_b0 = 8;
    __vbaVarDup();
    local_98 = L"CTPEditor.frmGreatLibrary";
    local_a0 = 8;
    __vbaVarDup();
    pppiStack_1a8 = local_60;
    pppiStack_1ac = (int ***)0x41f;
    pppiStack_1b4 = (int ***)0x46864c;
    pppiStack_1b0 = (int ***)piVar8;
    pppiVar7 = (int ***)(**(code **)(*piVar8 + 0x44))();
    if ((int)pppiVar7 < 0) {
      pppiStack_1ac = (int ***)0x468661;
      pppiStack_1a8 = pppiVar7;
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    pppiStack_1a8 = local_60;
    pppiStack_1ac = (int ***)0x4;
    pppiStack_1b0 = (int ***)0x468685;
    __vbaFreeVarList();
  }
  if (DAT_00480244 == (int ****)0x0) {
    __vbaNew2();
  }
  ppppiVar5 = DAT_00480244;
  ppppiVar9 = (int ****)(*(code *)(*DAT_00480244)[6])();
  if ((int)ppppiVar9 < 0) {
    pppiStack_1a8 = (int ***)&DAT_00413b24;
    pppiStack_1ac = (int ***)ppppiVar5;
    pppiStack_1b4 = (int ***)0x4686c6;
    pppiStack_1b0 = (int ***)ppppiVar9;
    __vbaHresultCheckObj();
  }
  pppiVar11 = local_44;
  pppiVar7 = (int ***)*local_44;
  uVar10 = __vbaI2I4();
  pppiStack_1a8 = (int ***)0x4686e9;
  ppppiVar5 = (int ****)(*(code *)pppiVar7[0x1f])();
  pcVar14 = __vbaHresultCheckObj_exref;
  if ((int)ppppiVar5 < 0) {
    pppiStack_1a8 = (int ***)0x7c;
    pppiStack_1ac = (int ***)&DAT_0041490c;
    pppiStack_1b0 = pppiVar11;
    pppiStack_1b8 = (int ***)0x468700;
    pppiStack_1b4 = (int ***)ppppiVar5;
    __vbaHresultCheckObj();
  }
  pppiStack_1a8 = (int ***)0x468711;
  __vbaFreeObj();
  pppiStack_1a8 = local_60;
  pppiStack_1ac = local_20;
  pppiStack_1b0 = (int ***)0x46871e;
  pppiVar7 = (int ***)(*(code *)(*local_20)[0xc])();
  if ((int)pppiVar7 < 0) {
    pppiStack_1b0 = (int ***)0x30;
    pppiStack_1b4 = (int ***)&DAT_00414bb4;
    pppiStack_1b8 = local_20;
    pppiStack_1c0 = (int ***)0x468732;
    pppiStack_1bc = pppiVar7;
    __vbaHresultCheckObj();
  }
  pppiStack_1b4 = local_60;
  pppiStack_1b0 = (int ***)&LAB_0041470c;
  pppiStack_1b8 = (int ***)0x468741;
  pppiStack_1b0 = (int ***)__vbaCastObjVar();
  pppiStack_1b4 = (int ***)&local_2c;
  pppiStack_1b8 = (int ***)0x468748;
  __vbaObjSet();
  pppiStack_1b0 = (int ***)0x468751;
  __vbaFreeVar();
  pppiStack_1ac = (int ***)0x0;
  pppiStack_1b0 = (int ***)0x0;
  pppiStack_1b8 = (int ***)0x46875e;
  pppiStack_1b4 = (int ***)ppppiVar13;
  pppiStack_1b8 = (int ***)(*(code *)(*ppppiVar13)[0xe3])();
  pppiStack_1bc = (int ***)&local_44;
  pppiStack_1c0 = (int ***)0x468765;
  pppiStack_1b8 = (int ***)__vbaObjSet();
  pppiStack_1bc = local_60;
  pppiStack_1c0 = (int ***)0x468770;
  pppiStack_1b0 = (int ***)__vbaLateIdCallLd();
  pppiStack_1b4 = (int ***)0x46877a;
  __vbaI4Var();
  pppiStack_1b4 = (int ***)0x468782;
  sVar2 = __vbaI2I4();
  local_24 = (int ***)0x1;
  pppiStack_1b0 = (int ***)0x468798;
  __vbaFreeObj();
  pppiStack_1b0 = (int ***)0x4687a1;
  __vbaFreeVar();
  ppppiVar5 = (int ****)local_24;
  while (local_24 = (int ***)ppppiVar5, (short)local_24 <= sVar2) {
    pppiStack_1ac = (int ***)&local_44;
    pppiStack_1b0 = local_2c;
    pppiStack_1b4 = (int ***)0x4687bf;
    ppppiVar5 = (int ****)(*(code *)(*local_2c)[0xf])();
    if ((int)ppppiVar5 < 0) {
      pppiStack_1b4 = (int ***)0x3c;
      pppiStack_1b8 = (int ***)&LAB_0041470c;
      pppiStack_1bc = local_2c;
      ppppiStack_1c4 = (int ****)0x4687d3;
      pppiStack_1c0 = (int ***)ppppiVar5;
      (*pcVar14)();
    }
    pppiVar7 = local_44;
    iVar3 = (int)(short)local_24;
    if (5 < iVar3 - 1U) {
      pppiStack_1b4 = (int ***)0x4687e6;
      __vbaGenerateBoundsError();
    }
    pppiStack_1b4 = (int ***)&local_48;
    pppiStack_1b8 = ppppiVar13[0x1a] + (iVar3 - 1U);
    pppiStack_1bc = pppiVar7;
    pppiStack_1c0 = (int ***)0x4687f7;
    pppiVar11 = (int ***)(*(code *)(*pppiVar7)[0xb])();
    if ((int)pppiVar11 < 0) {
      pppiStack_1c0 = (int ***)0x2c;
      ppppiStack_1c4 = (int ****)&DAT_00414ba4;
      pppiStack_1c8 = pppiVar7;
      pppiStack_1d0 = (int ***)0x46880c;
      pppiStack_1cc = pppiVar11;
      __vbaHresultCheckObj();
    }
    ppppiStack_1c4 = &local_1c;
    pppiStack_1c0 = local_48;
    local_48 = (int ***)0x0;
    pppiStack_1c8 = (int ***)0x468823;
    __vbaObjSet();
    pppiStack_1c0 = (int ***)0x46882c;
    __vbaFreeObj();
    ppppiStack_1c4 = (int ****)0x468835;
    pppiStack_1c0 = (int ***)ppppiVar13;
    ppppiStack_1c4 = (int ****)(*(code *)(*ppppiVar13)[0xc4])();
    pppiStack_1c8 = (int ***)&local_44;
    pppiStack_1cc = (int ***)0x46883c;
    pppiVar7 = (int ***)__vbaObjSet();
    ppppiStack_1c4 = &local_48;
    pppiStack_1c8 = local_24;
    pppiStack_1d0 = (int ***)0x46884c;
    pppiStack_1cc = pppiVar7;
    ppppiVar5 = (int ****)(*(code *)(*pppiVar7)[0x10])();
    if ((int)ppppiVar5 < 0) {
      pppiStack_1d0 = (int ***)0x40;
      pppiStack_1d4 = (int ***)&DAT_004182e4;
      pppiStack_1e0 = (int ***)0x468863;
      pppiStack_1dc = (int ***)ppppiVar5;
      pppiStack_1d8 = pppiVar7;
      __vbaHresultCheckObj();
    }
    pppiVar7 = local_48;
    pppiStack_1d0 = &local_34;
    pppiStack_1d4 = local_48;
    pppiStack_1d8 = (int ***)0x46887d;
    ppppiVar5 = (int ****)(*(code *)(*local_48)[0x28])();
    if ((int)ppppiVar5 < 0) {
      pppiStack_1d8 = (int ***)0xa0;
      pppiStack_1dc = (int ***)&DAT_00417a98;
      pppiStack_1e0 = pppiVar7;
      pppiStack_1e8 = (int ***)0x468891;
      pppiStack_1e4 = (int ***)ppppiVar5;
      __vbaHresultCheckObj();
    }
    pppiStack_1d8 = local_60;
    local_58 = local_34;
    local_34 = (int **)0x0;
    local_60[0] = (int **)0x8;
    pppiStack_1dc = local_1c;
    pppiStack_1e0 = (int ***)0x4688b2;
    piStack_1ec = (int *)(*(code *)(*local_1c)[0xd])();
    if ((int)piStack_1ec < 0) {
      pppiStack_1e0 = (int ***)0x34;
      pppiStack_1e4 = (int ***)&DAT_00414bb4;
      pppiStack_1e8 = local_1c;
      pppiStack_1f0 = (int ***)0x4688c6;
      __vbaHresultCheckObj();
    }
    pppiStack_1e0 = (int ***)&local_48;
    pppiStack_1e4 = (int ***)&local_44;
    pppiStack_1e8 = (int ***)0x2;
    piStack_1ec = (int *)0x4688d6;
    __vbaFreeObjList();
    pppiStack_1e0 = (int ***)0x4688e4;
    __vbaFreeVar();
    pppiStack_1e0 = (int ***)0x4688ed;
    pppiStack_1dc = (int ***)ppppiVar13;
    pppiStack_1e0 = (int ***)(*(code *)(*ppppiVar13)[0xc3])();
    pppiStack_1e4 = (int ***)&local_44;
    pppiStack_1e8 = (int ***)0x4688f8;
    piVar8 = (int *)__vbaObjSet();
    pppiStack_1e0 = (int ***)&local_48;
    pppiStack_1e4 = local_24;
    piStack_1ec = (int *)0x468908;
    pppiStack_1e8 = (int ***)piVar8;
    ppppiVar5 = (int ****)(**(code **)(*piVar8 + 0x40))();
    if ((int)ppppiVar5 < 0) {
      piStack_1ec = (int *)0x40;
      pppiStack_1f0 = (int ***)&DAT_004182e4;
      pppiStack_1fc = (int ***)0x46891d;
      pppiStack_1f8 = (int ***)ppppiVar5;
      ppiStack_1f4 = (int **)piVar8;
      __vbaHresultCheckObj();
    }
    pppiVar7 = local_48;
    piStack_1ec = &local_38;
    pppiStack_1f0 = local_48;
    ppiStack_1f4 = (int **)0x46892f;
    iVar3 = (*(code *)(*local_48)[0x28])();
    if (iVar3 < 0) {
      ppiStack_1f4 = (int **)0xa0;
      pppiStack_1f8 = (int ***)&DAT_00417a98;
      pppiStack_1fc = pppiVar7;
      pppiStack_204 = (int ***)0x468947;
      ppiStack_200 = (int **)iVar3;
      __vbaHresultCheckObj();
    }
    local_38 = 0;
    ppiStack_1f4 = (int **)0x46895a;
    __vbaStrMove();
    ppiStack_1f4 = (int **)local_60;
    pppiStack_1f8 = local_1c;
    pppiStack_1fc = (int ***)0x468967;
    piStack_208 = (int *)(*(code *)(*local_1c)[0xc])();
    if ((int)piStack_208 < 0) {
      pppiStack_1fc = (int ***)0x30;
      ppiStack_200 = (int **)&DAT_00414bb4;
      pppiStack_204 = local_1c;
      uStack_20c = 0x46897f;
      __vbaHresultCheckObj();
    }
    pppiStack_1fc = &local_3c;
    ppiStack_200 = (int **)local_60;
    ppiVar1 = *ppppiVar13[0xd];
    pppiStack_204 = &local_34;
    piStack_208 = (int *)0x468996;
    ppiStack_200 = (int **)__vbaStrVarVal();
    pppiStack_204 = ppppiVar13[0xd];
    piStack_208 = (int *)0x46899e;
    pppiStack_1bc = (int ***)(*(code *)ppiVar1[0x16])();
    if ((int)pppiStack_1bc < 0) {
      pppiStack_1b8 = ppppiVar13[0xd];
      pppiStack_1b0 = (int ***)0x58;
      pppiStack_1b4 = (int ***)&LAB_00414228;
      pppiStack_1c0 = (int ***)0x4689b6;
      __vbaHresultCheckObj();
    }
    pppiStack_1b0 = &local_3c;
    pppiStack_1b4 = &local_34;
    pppiStack_1b8 = (int ***)0x2;
    pppiStack_1bc = (int ***)0x4689c6;
    __vbaFreeStrList();
    pppiStack_1bc = (int ***)&local_48;
    pppiStack_1c0 = (int ***)&local_44;
    ppppiStack_1c4 = (int ****)0x2;
    pppiStack_1c8 = (int ***)0x4689d6;
    __vbaFreeObjList();
    pppiStack_1b0 = (int ***)0x4689de;
    __vbaFreeVar();
    pcVar12 = __vbaObjSet_exref;
    pcVar14 = __vbaHresultCheckObj_exref;
    ppppiVar5 = (int ****)(uint)(ushort)((short)local_24 + 1);
    if (SCARRY2((short)local_24,1)) goto LAB_00468d3f;
  }
  pppiStack_1ac = (int ***)0x0;
  pppiStack_1b0 = (int ***)0x0;
  pppiStack_1b8 = (int ***)0x468a0e;
  pppiStack_1b4 = (int ***)ppppiVar13;
  pppiStack_1b8 = (int ***)(*(code *)(*ppppiVar13)[0xe4])();
  pppiStack_1bc = (int ***)&local_44;
  pppiStack_1c0 = (int ***)0x468a15;
  pppiStack_1c0 = (int ***)(*pcVar12)();
  ppppiStack_1c4 = (int ****)local_60;
  pppiStack_1c8 = (int ***)0x468a20;
  pppiStack_1b8 = (int ***)__vbaLateIdCallLd();
  pppiStack_1bc = (int ***)0x468a2a;
  __vbaI4Var();
  pppiStack_1b4 = (int ***)0x468a32;
  sVar2 = __vbaI2I4();
  local_24 = (int ***)0x1;
  pppiStack_1b0 = (int ***)0x468a48;
  __vbaFreeObj();
  pppiStack_1b0 = (int ***)0x468a51;
  __vbaFreeVar();
  ppppiVar5 = (int ****)local_24;
  do {
    local_24 = (int ***)ppppiVar5;
    if (sVar2 < (short)local_24) {
      pppiStack_1ac = (int ***)&DAT_00417d44;
      pppiStack_1b0 = (int ***)0x0;
      pppiStack_1b4 = (int ***)0xd;
      pppiStack_1bc = (int ***)0x468bc7;
      pppiStack_1b8 = (int ***)ppppiVar13;
      pppiStack_1bc = (int ***)(*(code *)(*ppppiVar13)[0xe5])();
      pppiStack_1c0 = (int ***)&local_44;
      ppppiStack_1c4 = (int ****)0x468bce;
      ppppiStack_1c4 = (int ****)(*pcVar12)();
      pppiStack_1c8 = local_60;
      pppiStack_1cc = (int ***)0x468bd9;
      pppiStack_1bc = (int ***)__vbaLateIdCallLd();
      pppiStack_1c0 = (int ***)0x468be3;
      pppiStack_1b8 = (int ***)__vbaCastObjVar();
      pppiStack_1bc = (int ***)&local_48;
      pppiStack_1c0 = (int ***)0x468bea;
      (*pcVar12)();
      pppiStack_1c0 = (int ***)&local_48;
      pppiStack_1c8 = (int ***)0x468bf7;
      ppppiStack_1c4 = ppppiVar13;
      (*(code *)(*ppppiVar13)[0x1c1])();
      pppiStack_1c8 = (int ***)&local_48;
      pppiStack_1cc = (int ***)&local_44;
      pppiStack_1d0 = (int ***)0x2;
      pppiStack_1d4 = (int ***)0x468c07;
      __vbaFreeObjList();
      pppiStack_1c8 = (int ***)0x468c13;
      __vbaFreeVar();
      ppppiStack_1c4 = (int ****)0x0;
      pppiStack_1c8 = (int ***)0x80011000;
      pppiStack_1d0 = (int ***)0x468c23;
      pppiStack_1cc = (int ***)ppppiVar13;
      pppiStack_1d0 = (int ***)(*(code *)(*ppppiVar13)[0xe5])();
      pppiStack_1d4 = (int ***)&local_44;
      pppiStack_1d8 = (int ***)0x468c2a;
      pppiStack_1d8 = (int ***)(*pcVar12)();
      pppiStack_1dc = (int ***)0x468c31;
      __vbaLateIdCall();
      pppiStack_1d0 = (int ***)0x468c3d;
      __vbaFreeObj();
      if (DAT_00480244 == (int ****)0x0) {
        pppiStack_1d0 = (int ***)&DAT_00480244;
        pppiStack_1d4 = (int ***)&DAT_00413b34;
        pppiStack_1d8 = (int ***)0x468c56;
        __vbaNew2();
      }
      ppppiVar13 = DAT_00480244;
      pppiStack_1d0 = (int ***)&local_44;
      pppiStack_1d4 = (int ***)DAT_00480244;
      pppiStack_1d8 = (int ***)0x468c66;
      ppppiVar5 = (int ****)(*(code *)(*DAT_00480244)[6])();
      if ((int)ppppiVar5 < 0) {
        pppiStack_1d8 = (int ***)0x18;
        pppiStack_1dc = (int ***)&DAT_00413b24;
        pppiStack_1e0 = (int ***)ppppiVar13;
        pppiStack_1e8 = (int ***)0x468c77;
        pppiStack_1e4 = (int ***)ppppiVar5;
        (*pcVar14)();
      }
      pppiVar11 = local_44;
      pppiVar7 = (int ***)*local_44;
      pppiStack_1d8 = (int ***)0x468c84;
      pppiStack_1d4 = (int ***)__vbaI2I4();
      pppiStack_1d8 = pppiVar11;
      pppiStack_1dc = (int ***)0x468c89;
      piVar8 = (int *)(*(code *)pppiVar7[0x1f])();
      if ((int)piVar8 < 0) {
        pppiStack_1dc = (int ***)0x7c;
        pppiStack_1e0 = (int ***)&DAT_0041490c;
        pppiStack_1e4 = pppiVar11;
        piStack_1ec = (int *)0x468c9a;
        pppiStack_1e8 = (int ***)piVar8;
        (*pcVar14)();
      }
      pppiStack_1dc = (int ***)0x468ca3;
      __vbaFreeObj();
      local_8 = 0;
      pppiStack_1dc = (int ***)&LAB_00468d20;
      pppiStack_1e0 = (int ***)0x468d0b;
      __vbaFreeObj();
      pppiStack_1e0 = (int ***)0x468d10;
      __vbaFreeObj();
      pppiStack_1e0 = (int ***)0x468d15;
      __vbaFreeObj();
      pppiStack_1e0 = (int ***)0x468d1a;
      __vbaFreeObj();
      pppiStack_1e0 = (int ***)0x468d1f;
      __vbaFreeObj();
      return;
    }
    pppiStack_1ac = (int ***)&local_44;
    pppiStack_1b0 = local_2c;
    pppiStack_1b4 = (int ***)0x468a6f;
    ppppiVar5 = (int ****)(*(code *)(*local_2c)[0xf])();
    if ((int)ppppiVar5 < 0) {
      pppiStack_1b4 = (int ***)0x3c;
      pppiStack_1b8 = (int ***)&LAB_0041470c;
      pppiStack_1bc = local_2c;
      ppppiStack_1c4 = (int ****)0x468a83;
      pppiStack_1c0 = (int ***)ppppiVar5;
      (*pcVar14)();
    }
    pppiVar7 = local_44;
    iVar3 = (int)(short)local_24;
    if (7 < iVar3 - 1U) {
      pppiStack_1b4 = (int ***)0x468a96;
      __vbaGenerateBoundsError();
    }
    pppiStack_1b4 = (int ***)&local_48;
    pppiStack_1b8 = ppppiVar13[0x24] + (iVar3 - 1U);
    pppiStack_1bc = pppiVar7;
    pppiStack_1c0 = (int ***)0x468aaa;
    pppiVar11 = (int ***)(*(code *)(*pppiVar7)[0xb])();
    if ((int)pppiVar11 < 0) {
      pppiStack_1c0 = (int ***)0x2c;
      ppppiStack_1c4 = (int ****)&DAT_00414ba4;
      pppiStack_1c8 = pppiVar7;
      pppiStack_1d0 = (int ***)0x468abf;
      pppiStack_1cc = pppiVar11;
      __vbaHresultCheckObj();
    }
    ppppiStack_1c4 = &local_1c;
    pppiStack_1c0 = local_48;
    local_48 = (int ***)0x0;
    pppiStack_1c8 = (int ***)0x468ad6;
    __vbaObjSet();
    pppiStack_1c0 = (int ***)0x468adf;
    __vbaFreeObj();
    ppppiStack_1c4 = (int ****)0x468ae8;
    pppiStack_1c0 = (int ***)ppppiVar13;
    ppppiStack_1c4 = (int ****)(*(code *)(*ppppiVar13)[0xd7])();
    pppiStack_1c8 = (int ***)&local_44;
    pppiStack_1cc = (int ***)0x468aef;
    pppiVar11 = (int ***)__vbaObjSet();
    pppiVar7 = local_24;
    ppppiStack_1c4 = &local_48;
    pppiStack_1c8 = local_24;
    pppiStack_1d0 = (int ***)0x468aff;
    pppiStack_1cc = pppiVar11;
    ppppiVar5 = (int ****)(*(code *)(*pppiVar11)[0x10])();
    if ((int)ppppiVar5 < 0) {
      pppiStack_1d0 = (int ***)0x40;
      pppiStack_1d4 = (int ***)&DAT_004182e4;
      pppiStack_1e0 = (int ***)0x468b14;
      pppiStack_1dc = (int ***)ppppiVar5;
      pppiStack_1d8 = pppiVar11;
      __vbaHresultCheckObj();
    }
    pppiVar11 = local_48;
    pppiStack_1d0 = &local_34;
    pppiStack_1d4 = local_48;
    pppiStack_1d8 = (int ***)0x468b26;
    ppppiVar5 = (int ****)(*(code *)(*local_48)[0x28])();
    if ((int)ppppiVar5 < 0) {
      pppiStack_1d8 = (int ***)0xa0;
      pppiStack_1dc = (int ***)&DAT_00417a98;
      pppiStack_1e0 = pppiVar11;
      pppiStack_1e8 = (int ***)0x468b3e;
      pppiStack_1e4 = (int ***)ppppiVar5;
      __vbaHresultCheckObj();
    }
    pppiStack_1d8 = local_60;
    local_58 = local_34;
    local_34 = (int **)0x0;
    local_60[0] = (int **)0x8;
    pppiStack_1dc = local_1c;
    pppiStack_1e0 = (int ***)0x468b5f;
    pppiStack_1bc = (int ***)(*(code *)(*local_1c)[0xd])();
    if ((int)pppiStack_1bc < 0) {
      pppiStack_1b0 = (int ***)0x34;
      pppiStack_1b4 = (int ***)&DAT_00414bb4;
      pppiStack_1b8 = local_1c;
      pppiStack_1c0 = (int ***)0x468b77;
      __vbaHresultCheckObj();
    }
    pppiStack_1b0 = (int ***)&local_48;
    pppiStack_1b4 = (int ***)&local_44;
    pppiStack_1b8 = (int ***)0x2;
    pppiStack_1bc = (int ***)0x468b87;
    __vbaFreeObjList();
    pppiStack_1b0 = (int ***)0x468b93;
    __vbaFreeVar();
    pcVar12 = __vbaObjSet_exref;
    pcVar14 = __vbaHresultCheckObj_exref;
    ppppiVar5 = (int ****)(uint)(ushort)((short)pppiVar7 + 1);
  } while (!SCARRY2((short)pppiVar7,1));
LAB_00468d3f:
  pcVar14 = __vbaObjSet_exref;
  pcVar12 = __vbaHresultCheckObj_exref;
  pppiStack_1ac = (int ***)0x468d45;
  __vbaErrorOverflow();
  pppiStack_1b8 = (int ***)&LAB_004032d6;
  pppiStack_1bc = ExceptionList;
  ppppiStack_218 = (int ****)pcVar14;
  pppiStack_1b4 = (int ***)&ppppiStack_220;
  ppppiStack_220 = (int ****)pcVar12;
  pppiStack_1b0 = (int ***)&DAT_00402be0;
  pppiStack_1ac = (int ***)(uVar10 & 1);
  piVar4 = (int *)(uVar10 & 0xfffffffe);
  ExceptionList = &pppiStack_1bc;
  piVar8 = piVar4;
  ppppiStack_21c = ppppiVar13;
  pppiStack_1a8 = (int ***)&stack0xfffffffc;
  (**(code **)(*piVar4 + 4))(piVar4);
  pppiStack_1c0 = (int ***)0x0;
  ppppiStack_1c4 = (int ****)0x0;
  pppiStack_1cc = (int ***)0x0;
  pppiStack_1d0 = (int ***)0x0;
  pppiStack_1d4 = (int ***)0x0;
  pppiStack_1d8 = (int ***)0x0;
  pppiStack_1dc = (int ***)0x0;
  piStack_1ec = (int *)0x0;
  pppiStack_1f0 = (int ***)0x0;
  piStack_208 = (int *)0x0;
  uVar6 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&ppppiStack_1c4,uVar6);
  __vbaStrCopy(piVar8);
  ppppiStack_220 = (int ****)0x468ddd;
  __vbaStrCopy();
  ppppiStack_218 = (int ****)0x468de7;
  __vbaStrCopy();
  pppiStack_210 = (int ***)&pppiStack_1f0;
  ppppiStack_214 = &pppiStack_1d4;
  ppppiStack_218 = &pppiStack_1d0;
  ppppiStack_21c = &pppiStack_1cc;
  ppppiStack_220 = (int ****)&ppppiStack_1c4;
  iVar3 = (**(code **)(*(int *)piVar4[0x12] + 0x30))((int *)piVar4[0x12]);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar4[0x12],&DAT_004146ac,0x30);
  }
  pppiStack_1f8 = (int ***)CONCAT22(pppiStack_1f8._2_2_,pppiStack_1f0._0_2_);
  __vbaFreeStrList(3,&pppiStack_1cc,&pppiStack_1d0,&pppiStack_1d4);
  if ((short)pppiStack_1f8 == 0) {
    uVar6 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&pppiStack_1c0,uVar6);
    __vbaObjSetAddref(&piStack_208,pppiStack_1c0);
    iVar3 = (**(code **)(*piStack_208 + 0x5c))(piStack_208,&ppppiStack_1c4);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piStack_208,&DAT_00414258,0x5c);
    }
    iVar3 = (**(code **)(*piStack_208 + 0x50))(piStack_208);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piStack_208,&DAT_00414258,0x50);
    }
    sVar2 = (short)piVar4[0x45];
    uVar6 = (**(code **)(*piVar4 + 0x38c))(piVar4,0,0);
    uVar6 = __vbaObjSet(&pppiStack_1d8,uVar6);
    uVar6 = __vbaLateIdCallLd(&piStack_1ec,uVar6);
    iVar3 = __vbaI4Var(uVar6);
    ppiStack_1f4 = (int **)CONCAT22(ppiStack_1f4._2_2_,-(ushort)(iVar3 < sVar2));
    __vbaFreeObj();
    __vbaFreeVar(uVar6);
    if ((short)ppiStack_1f4 != 0) {
      sVar2 = 1;
    }
    uVar6 = (**(code **)(*piVar4 + 0x318))(piVar4);
    piVar8 = (int *)__vbaObjSet(&pppiStack_1d8,uVar6);
    iVar3 = (**(code **)(*piVar8 + 0x40))(piVar8,sVar2,&pppiStack_1dc);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar8,&DAT_004182e4,0x40);
    }
    pppiVar7 = pppiStack_1dc;
    iVar3 = (*(code *)(*pppiStack_1dc)[0x28])(pppiStack_1dc,&pppiStack_1cc);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,pppiVar7,&DAT_00417a98,0xa0);
    }
    pppiStack_1cc = (int ***)0x0;
    __vbaStrMove();
    iVar3 = (**(code **)(*piStack_208 + 0x80))(piStack_208,&pppiStack_1d0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piStack_208,&DAT_00414258,0x80);
    }
    __vbaFreeStr();
    __vbaFreeObjList(2,&pppiStack_1d8,&pppiStack_1dc);
    iVar3 = (**(code **)(*piStack_208 + 0x48))(piStack_208);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piStack_208,&DAT_00414258,0x48);
    }
    __vbaObjSetAddref(&piStack_208,0);
  }
  pppiStack_1ac = (int ***)0x0;
  __vbaFreeObj(&LAB_00469041);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x468d50 (FUN_00468d50) [estimated] strings:  ---- */
void __cdecl FUN_00468d50(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  int *piVar5;
  int *local_64 [4];
  short local_54;
  short local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff84;
  local_c = &DAT_00402be0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  piVar3 = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_28[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_48[0] = 0;
  local_4c = 0;
  local_64[0] = (int *)0x0;
  uVar1 = __vbaNew(&DAT_00407428);
  __vbaObjSet(&local_20,uVar1);
  __vbaStrCopy(piVar3);
  __vbaStrCopy();
  __vbaStrCopy();
  iVar2 = (**(code **)(*(int *)piVar5[0x12] + 0x30))((int *)piVar5[0x12]);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5[0x12],&DAT_004146ac,0x30);
  }
  local_54 = (short)local_4c;
  __vbaFreeStrList(3,local_28,&local_2c,&local_30);
  if (local_54 == 0) {
    uVar1 = __vbaNew(&DAT_00408318);
    __vbaObjSet(&local_1c,uVar1);
    __vbaObjSetAddref(local_64,local_1c);
    iVar2 = (**(code **)(*local_64[0] + 0x5c))(local_64[0],&local_20);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_64[0],&DAT_00414258,0x5c);
    }
    iVar2 = (**(code **)(*local_64[0] + 0x50))(local_64[0]);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_64[0],&DAT_00414258,0x50);
    }
    sVar4 = (short)piVar5[0x45];
    uVar1 = (**(code **)(*piVar5 + 0x38c))(piVar5,0,0);
    uVar1 = __vbaObjSet(&local_34,uVar1);
    uVar1 = __vbaLateIdCallLd(local_48,uVar1);
    iVar2 = __vbaI4Var(uVar1);
    local_50 = -(ushort)(iVar2 < sVar4);
    __vbaFreeObj();
    __vbaFreeVar(uVar1);
    if (local_50 != 0) {
      sVar4 = 1;
    }
    uVar1 = (**(code **)(*piVar5 + 0x318))(piVar5);
    piVar3 = (int *)__vbaObjSet(&local_34,uVar1);
    iVar2 = (**(code **)(*piVar3 + 0x40))(piVar3,sVar4,&local_38);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_004182e4,0x40);
    }
    piVar3 = local_38;
    iVar2 = (**(code **)(*local_38 + 0xa0))(local_38,local_28);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar3,&DAT_00417a98,0xa0);
    }
    local_28[0] = 0;
    __vbaStrMove();
    iVar2 = (**(code **)(*local_64[0] + 0x80))(local_64[0],&local_2c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_64[0],&DAT_00414258,0x80);
    }
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_34,&local_38);
    iVar2 = (**(code **)(*local_64[0] + 0x48))(local_64[0]);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,local_64[0],&DAT_00414258,0x48);
    }
    __vbaObjSetAddref(local_64,0);
  }
  local_8 = 0;
  __vbaFreeObj(&LAB_00469041);
  __vbaFreeObj();
  __vbaFreeObj();
  return;
}

/* ---- 0x469060 (FUN_00469060) [estimated] strings:  ---- */
undefined4 FUN_00469060(uint param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402bf0;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  (**(code **)(*piVar1 + 0x700))(piVar1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x4690d0 (FUN_004690d0) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void FUN_004690d0(uint param_1,short *param_2,byte *param_3)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  short sVar4;
  undefined2 uVar5;
  code ****ppppcVar6;
  int iVar7;
  code *****pppppcVar8;
  code ******ppppppcVar9;
  code ******ppppppcVar10;
  undefined4 *puVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  int *piVar14;
  undefined4 uVar15;
  code *******pppppppcVar16;
  uint uVar17;
  undefined2 extraout_var;
  int *extraout_ECX;
  code *******extraout_ECX_00;
  code *******extraout_ECX_01;
  code *pcVar18;
  ushort uVar19;
  code *pcVar20;
  code ******ppppppcVar21;
  code *******pppppppcVar22;
  ushort uVar23;
  float10 fVar24;
  code *******pppppppcStack_618;
  code *******pppppppcStack_614;
  code *******pppppppcStack_610;
  code *******pppppppcStack_60c;
  code *******pppppppcStack_608;
  code *******pppppppcStack_604;
  code *pcStack_5c4;
  code *******pppppppcStack_5c0;
  code *******pppppppcStack_5bc;
  float fStack_5b8;
  double dStack_5b4;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  double dStack_5a0;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  double dStack_58c;
  float fStack_584;
  double dStack_580;
  float fStack_578;
  float fStack_574;
  float fStack_570;
  double dStack_56c;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  double dStack_558;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  double dStack_544;
  float fStack_53c;
  double dStack_538;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  code ******ppppppcStack_518;
  code ******ppppppcStack_514;
  code ******ppppppcStack_510;
  code ******ppppppcStack_50c;
  code ******ppppppcStack_508;
  code ******ppppppcStack_504;
  code ******ppppppcStack_500;
  code ******ppppppcStack_4f8;
  code ******ppppppcStack_4f4;
  code ******ppppppcStack_4f0;
  code ******ppppppcStack_4ec;
  code ******ppppppcStack_4e8;
  code ******ppppppcStack_4e4;
  code ******ppppppcStack_4e0;
  code ******ppppppcStack_4dc;
  double dStack_4d8;
  int iStack_4d0;
  double dStack_4cc;
  double dStack_4c4;
  double dStack_4b8;
  double dStack_4b0;
  float fStack_4a8;
  code *******pppppppcStack_4a4;
  uint uStack_4a0;
  float fStack_49c;
  code *pcStack_498;
  code *******pppppppcStack_494;
  code ******ppppppcStack_490;
  code ******ppppppcStack_488;
  code ******ppppppcStack_484;
  double dStack_480;
  double dStack_474;
  double dStack_46c;
  double dStack_460;
  double dStack_454;
  undefined4 uStack_3c8;
  undefined4 uStack_3c0;
  short sStack_3b8;
  undefined4 uStack_3a8;
  undefined4 uStack_3a0;
  short sStack_398;
  code *******pppppppcStack_388;
  code *******pppppppcStack_384;
  code *******pppppppcStack_380;
  code *******pppppppcStack_37c;
  code *******pppppppcStack_378;
  int *piStack_374;
  int *piStack_370;
  int *piStack_36c;
  code *******pppppppcStack_368;
  code *******apppppppcStack_364 [5];
  code *******pppppppcStack_350;
  code *******pppppppcStack_348;
  code *******pppppppcStack_344;
  code *******pppppppcStack_340;
  code ******ppppppcStack_33c;
  code ******ppppppcStack_338;
  code *******apppppppcStack_334 [5];
  undefined4 uStack_320;
  code *******pppppppcStack_31c;
  code *******pppppppcStack_318;
  undefined4 uStack_314;
  undefined4 uStack_2f0;
  code *******pppppppcStack_2ec;
  code *******pppppppcStack_2e4;
  code ******appppppcStack_2e0 [4];
  code ******appppppcStack_2d0 [3];
  undefined4 uStack_2c4;
  code ******ppppppcStack_2c0;
  code ******ppppppcStack_2bc;
  undefined8 uStack_2b8;
  code ******ppppppcStack_2b0;
  code *******pppppppcStack_2ac;
  code *******pppppppcStack_2a8;
  code *******pppppppcStack_2a4;
  code *******pppppppcStack_2a0;
  code *******pppppppcStack_29c;
  code *******pppppppcStack_298;
  code *******pppppppcStack_294;
  code *******pppppppcStack_290;
  code *******pppppppcStack_28c;
  code *******pppppppcStack_288;
  code *******pppppppcStack_284;
  code *******pppppppcStack_280;
  code *******pppppppcStack_27c;
  code *******pppppppcStack_278;
  code *******pppppppcStack_274;
  code *******pppppppcStack_270;
  code *******pppppppcStack_26c;
  code *******pppppppcStack_268;
  code *******pppppppcStack_264;
  code *******pppppppcStack_260;
  code *******pppppppcStack_25c;
  code *******pppppppcStack_258;
  code ******ppppppcStack_254;
  code *******pppppppcStack_250;
  code ******ppppppcStack_24c;
  code *******pppppppcStack_248;
  code *****pppppcStack_244;
  code *******pppppppcStack_240;
  code *pcStack_23c;
  code ******ppppppcStack_238;
  code *****pppppcStack_234;
  undefined4 uStack_228;
  code *******pppppppcStack_21c;
  code ******ppppppcStack_214;
  code *******pppppppcStack_20c;
  code *******pppppppcStack_204;
  code *******pppppppcStack_1fc;
  code *******pppppppcStack_1f4;
  undefined4 uStack_1f0;
  code *******pppppppcStack_1ec;
  code *****pppppcStack_1e8;
  code *******pppppppcStack_1e4;
  code *****pppppcStack_1e0;
  code ******ppppppcStack_1dc;
  code ******ppppppcStack_1d8;
  code ******ppppppcStack_1d4;
  code *****pppppcStack_1d0;
  code *****pppppcStack_1cc;
  code *****pppppcStack_1c8;
  code *****pppppcStack_1c4;
  code *****pppppcStack_1c0;
  code *****pppppcStack_1bc;
  code *****pppppcStack_1b8;
  code *****pppppcStack_1b4;
  code ******ppppppcStack_1b0;
  code *****pppppcStack_1ac;
  undefined4 uStack_1a8;
  code ******ppppppcStack_1a4;
  code *******pppppppcStack_1a0;
  code ******ppppppcStack_19c;
  code *******pppppppcStack_198;
  code *******pppppppcStack_194;
  code *******pppppppcStack_190;
  code *******pppppppcStack_18c;
  code *******pppppppcStack_188;
  code ******ppppppcStack_184;
  code ******ppppppcStack_180;
  code *****pppppcStack_17c;
  code ******ppppppcStack_168;
  code ******ppppppcStack_164;
  code *******pppppppcStack_160;
  code *****pppppcStack_15c;
  code *****pppppcStack_158;
  code ******ppppppcStack_154;
  code ******ppppppcStack_150;
  code ******ppppppcStack_14c;
  code ******ppppppcStack_148;
  code ******ppppppcStack_144;
  int local_100;
  uint local_fc [17];
  code *****local_b8 [2];
  code *****local_b0;
  code *****local_a8 [2];
  code *****local_a0;
  code *****local_98 [4];
  code *****local_88 [4];
  code *****local_78 [2];
  undefined4 local_70;
  code *****local_68 [2];
  int local_60;
  code *****local_58 [2];
  undefined4 local_50;
  code *****local_48 [4];
  code ****local_38;
  code *****local_34;
  code *****local_30;
  code *****local_2c;
  code *****local_28;
  code *****local_24;
  code *****local_20;
  code ****local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffec0;
  local_c = &DAT_00402bf8;
  local_8 = param_1 & 1;
  ppppppcVar21 = (code ******)(param_1 & 0xfffffffe);
  ppppppcStack_148 = (code ******)0x469113;
  ExceptionList = &pvStack_18;
  ppppppcStack_144 = ppppppcVar21;
  (*(code *)(*ppppppcVar21)[1])();
  local_1c = (code ****)0x0;
  local_20 = (code *****)0x0;
  local_24 = (code *****)0x0;
  local_28 = (code *****)0x0;
  local_2c = (code *****)0x0;
  local_30 = (code *****)0x0;
  local_34 = (code *****)0x0;
  local_38 = (code ****)0x0;
  local_48[0] = (code *****)0x0;
  local_58[0] = (code *****)0x0;
  local_68[0] = (code *****)0x0;
  local_78[0] = (code *****)0x0;
  local_88[0] = (code *****)0x0;
  local_98[0] = (code *****)0x0;
  local_a8[0] = (code *****)0x0;
  local_b8[0] = (code *****)0x0;
  local_fc[0] = 0;
  local_100 = 0;
  ppppppcStack_14c = (code ******)0x46916c;
  ppppppcStack_148 = ppppppcVar21;
  ppppppcStack_14c = (code ******)(*(code *)(*ppppppcVar21)[0xc0])();
  pcVar18 = __vbaObjSet_exref;
  ppppppcStack_150 = (code ******)&local_1c;
  ppppppcStack_154 = (code ******)0x469179;
  ppppcVar6 = (code ****)__vbaObjSet();
  ppppppcStack_14c = (code ******)local_fc;
  ppppppcStack_154 = (code ******)0x46918f;
  ppppppcStack_150 = (code ******)ppppcVar6;
  iVar7 = (*(code *)(*ppppcVar6)[0x26])();
  if (iVar7 < 0) {
    ppppppcStack_154 = (code ******)0x98;
    pppppcStack_158 = (code *****)&DAT_0041804c;
    ppppppcStack_164 = (code ******)0x4691ad;
    pppppppcStack_160 = (code *******)iVar7;
    pppppcStack_15c = (code *****)ppppcVar6;
    __vbaHresultCheckObj();
  }
  uVar17 = local_fc[0] >> 1;
  bVar1 = *param_3;
  ppppppcStack_154 = (code ******)0x4691d3;
  __vbaFreeObj();
  if ((bVar1 >> 1 & (byte)uVar17 & 1) != 0) {
    sVar2 = *param_2;
    ppppppcStack_154 = (code ******)0x4691f8;
    sVar4 = __vbaI2I4();
    if (sVar2 == sVar4) {
      pppppcStack_158 = (code *****)&DAT_00417d44;
      pppppcStack_15c = (code *****)0x0;
      pppppppcStack_160 = (code *******)0xd;
      ppppppcStack_168 = (code ******)0x469216;
      ppppppcStack_164 = ppppppcVar21;
      ppppppcStack_168 = (code ******)(*(code *)(*ppppppcVar21)[0xe5])();
      ppppppcStack_168 = (code ******)__vbaObjSet();
      pppppppcStack_160 = (code *******)__vbaLateIdCallLd();
      ppppppcStack_164 = (code ******)0x469232;
      pppppcStack_15c = (code *****)__vbaCastObjVar();
      pppppppcStack_160 = (code *******)&local_20;
      ppppppcStack_164 = (code ******)0x469239;
      pppppppcStack_160 = (code *******)__vbaObjSet();
      pppppcStack_15c = (code *****)-(*param_3 & 1);
      ppppppcStack_164 = (code ******)0x46924c;
      iVar7 = (**(code **)((int)*pppppppcStack_160 + 0x60))();
      if (iVar7 < 0) {
        ppppppcStack_164 = (code ******)0x60;
        ppppppcStack_168 = (code ******)&DAT_00417d44;
        __vbaHresultCheckObj();
      }
      ppppppcStack_164 = &local_20;
      ppppppcStack_168 = (code ******)&local_1c;
      __vbaFreeObjList();
      ppppppcStack_164 = (code ******)0x46927d;
      __vbaFreeVar();
      pppppppcStack_160 = (code *******)&DAT_00417d44;
      ppppppcStack_164 = (code ******)0x0;
      ppppppcStack_168 = (code ******)0xd;
      (*(code *)(*ppppppcVar21)[0xe5])();
      __vbaObjSet();
      ppppppcStack_168 = (code ******)__vbaLateIdCallLd();
      ppppppcStack_164 = (code ******)__vbaCastObjVar();
      ppppppcStack_168 = &local_20;
      pppppcVar8 = (code *****)__vbaObjSet();
      ppppppcStack_164 = (code ******)&local_100;
      ppppppcStack_168 = (code ******)pppppcVar8;
      iVar7 = (*(code *)(*pppppcVar8)[0x11])();
      if (iVar7 < 0) {
        pppppcStack_17c = (code *****)0x4692d6;
        __vbaHresultCheckObj();
      }
      local_60 = local_100 + -1;
      local_78[0] = (code *****)0x1;
      if (SBORROW4(local_100,1)) {
        __vbaErrorOverflow();
        pppppcStack_17c = ExceptionList;
        pcStack_23c = pcVar18;
        pppppppcVar22 = (code *******)((uint)pppppppcStack_160 & 0xfffffffe);
        pppppcStack_244 = (code *****)0x469907;
        ExceptionList = &pppppcStack_17c;
        pppppppcStack_240 = pppppppcVar22;
        ppppppcStack_238 = ppppppcVar21;
        pppppcStack_234 = pppppcVar8;
        ppppppcStack_168 = (code ******)&stack0xfffffffc;
        pppppppcStack_160 = pppppppcVar22;
        (*(code *)(*pppppppcVar22)[1])();
        ppppppcStack_254 = (code ******)0x6;
        pppppppcStack_250 = (code *******)0x3;
        ppppppcStack_184 = (code ******)0x0;
        ppppppcStack_24c = (code ******)pppppcStack_1bc;
        pppppppcStack_188 = (code *******)0x0;
        pppppppcStack_18c = (code *******)0x0;
        pppppppcStack_248 = (code *******)0x6;
        pppppppcStack_190 = (code *******)0x0;
        pppppppcStack_194 = (code *******)0x0;
        pppppppcStack_198 = (code *******)0x0;
        ppppppcStack_19c = (code ******)0x0;
        pppppppcStack_1a0 = (code *******)0x0;
        ppppppcStack_1b0 = (code ******)0x0;
        ppppppcStack_1d4 = (code ******)0x0;
        ppppppcStack_1d8 = (code ******)0x0;
        ppppppcStack_1dc = (code ******)0x0;
        pppppcStack_1e0 = (code *****)0x0;
        *(undefined2 *)(pppppppcVar22 + 0x27) = 1;
        *(undefined2 *)((int)pppppppcVar22 + 0x9e) = 1;
        pppppcStack_244 = pppppcStack_1b4;
        pppppppcStack_25c = (code *******)0x469969;
        pppppppcStack_258 = pppppppcVar22;
        pppppppcStack_25c = (code *******)(*(code *)(*pppppppcVar22)[0xe3])();
        pcVar20 = __vbaObjSet_exref;
        pppppppcStack_260 = &ppppppcStack_184;
        pppppppcStack_264 = (code *******)0x469976;
        pppppppcStack_25c = (code *******)__vbaObjSet();
        pppppppcStack_260 = (code *******)0x46997d;
        __vbaLateIdSt();
        pppppppcStack_248 = (code *******)0x469986;
        __vbaFreeObj();
        ppppppcStack_24c = (code ******)0x46998f;
        pppppppcStack_248 = pppppppcVar22;
        ppppppcStack_24c = (code ******)(*(code *)(*pppppppcVar22)[0xc0])();
        pppppppcStack_250 = &ppppppcStack_184;
        ppppppcStack_254 = (code ******)0x469996;
        pppppppcStack_250 = (code *******)__vbaObjSet();
        ppppppcStack_24c = (code ******)&ppppppcStack_1d8;
        ppppppcStack_254 = (code ******)0x4699a6;
        pppppppcStack_1e4 = pppppppcStack_250;
        pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_250)[0x22])();
        pcVar18 = __vbaHresultCheckObj_exref;
        if ((int)pppppppcVar12 < 0) {
          ppppppcStack_254 = (code ******)0x88;
          pppppppcStack_258 = (code *******)&DAT_0041804c;
          pppppppcStack_25c = pppppppcStack_1e4;
          pppppppcStack_264 = (code *******)0x4699c3;
          pppppppcStack_260 = pppppppcVar12;
          __vbaHresultCheckObj();
        }
        ppppppcStack_254 = (code ******)&ppppppcStack_1d4;
        pppppppcStack_25c = (code *******)0x4699d8;
        pppppppcStack_258 = pppppppcVar22;
        pppppppcVar12 = (code *******)(*(code *)(*pppppppcVar22)[0x22])();
        uVar23 = 0;
        if ((int)pppppppcVar12 < 0) {
          pppppppcStack_25c = (code *******)0x88;
          pppppppcStack_260 = (code *******)&DAT_0041708c;
          pppppppcStack_26c = (code *******)0x4699ec;
          pppppppcStack_268 = pppppppcVar12;
          pppppppcStack_264 = pppppppcVar22;
          __vbaHresultCheckObj();
        }
        if ((uVar23 & 0xd) == 0) {
          pppppppcStack_25c = (code *******)0x469a02;
          ppppppcVar21 = (code ******)__vbaFpI4();
          pppppppcVar22[0x29] = ppppppcVar21;
          pppppppcStack_25c = (code *******)0x469a11;
          __vbaFreeObj();
          pppppppcStack_260 = (code *******)0x469a1a;
          pppppppcStack_25c = pppppppcVar22;
          pppppppcStack_260 = (code *******)(*(code *)(*pppppppcVar22)[0xc0])();
          pppppppcStack_264 = &ppppppcStack_184;
          pppppppcStack_268 = (code *******)0x469a21;
          pppppppcStack_264 = (code *******)__vbaObjSet();
          pppppppcStack_260 = &ppppppcStack_1d8;
          pppppppcStack_268 = (code *******)0x469a31;
          pppppppcStack_1e4 = pppppppcStack_264;
          pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_264)[0x20])();
          if ((int)pppppppcVar12 < 0) {
            pppppppcStack_268 = (code *******)0x80;
            pppppppcStack_26c = (code *******)&DAT_0041804c;
            pppppppcStack_270 = pppppppcStack_1e4;
            pppppppcStack_278 = (code *******)0x469a48;
            pppppppcStack_274 = pppppppcVar12;
            __vbaHresultCheckObj();
          }
          pppppppcStack_268 = &ppppppcStack_1d4;
          pppppppcStack_270 = (code *******)0x469a55;
          pppppppcStack_26c = pppppppcVar22;
          pppppppcVar12 = (code *******)(*(code *)(*pppppppcVar22)[0x20])();
          uVar23 = 0;
          if ((int)pppppppcVar12 < 0) {
            pppppppcStack_25c = (code *******)0x80;
            pppppppcStack_260 = (code *******)&DAT_0041708c;
            pppppppcStack_26c = (code *******)0x469a69;
            pppppppcStack_268 = pppppppcVar12;
            pppppppcStack_264 = pppppppcVar22;
            __vbaHresultCheckObj();
          }
          if ((uVar23 & 0xd) == 0) {
            pppppppcStack_25c = (code *******)0x469a7f;
            ppppppcVar21 = (code ******)__vbaFpI4();
            pppppppcVar22[0x2a] = ppppppcVar21;
            pppppppcStack_25c = (code *******)0x469a8e;
            __vbaFreeObj();
            pppppppcStack_25c = (code *******)0x0;
            pppppppcStack_260 = (code *******)0x80010005;
            pppppppcStack_268 = (code *******)0x469a9e;
            pppppppcStack_264 = pppppppcVar22;
            pppppppcStack_268 = (code *******)(*(code *)(*pppppppcVar22)[0xe2])();
            pppppppcStack_26c = &ppppppcStack_184;
            pppppppcStack_270 = (code *******)0x469aa5;
            pppppppcStack_268 = (code *******)__vbaObjSet();
            pppppppcStack_26c = &ppppppcStack_1b0;
            pppppppcStack_270 = (code *******)0x469ab0;
            __vbaLateIdCallLd();
            pppppppcStack_260 = &ppppppcStack_1d4;
            pppppppcStack_268 = (code *******)0x469ac0;
            pppppppcStack_264 = pppppppcVar22;
            pppppppcVar12 = (code *******)(*(code *)(*pppppppcVar22)[0x20])();
            uVar23 = 0;
            if ((int)pppppppcVar12 < 0) {
              pppppppcStack_268 = (code *******)0x80;
              pppppppcStack_26c = (code *******)&DAT_0041708c;
              pppppppcStack_278 = (code *******)0x469ad4;
              pppppppcStack_274 = pppppppcVar12;
              pppppppcStack_270 = pppppppcVar22;
              __vbaHresultCheckObj();
            }
            pppppppcStack_268 = &ppppppcStack_1b0;
            pppppppcStack_26c = (code *******)0x469ade;
            __vbaR4Var();
            if ((uVar23 & 0xd) == 0) {
              pppppppcStack_25c = (code *******)0x469af1;
              ppppppcVar21 = (code ******)__vbaFpI4();
              pppppppcVar22[0x2b] = ppppppcVar21;
              pppppppcStack_25c = (code *******)0x469b00;
              __vbaFreeObj();
              pppppppcStack_25c = (code *******)0x469b09;
              __vbaFreeVar();
              pppppppcStack_25c = (code *******)0x469b12;
              pppppppcStack_258 = pppppppcVar22;
              pppppppcStack_25c = (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
              pppppppcStack_260 = (code *******)&pppppppcStack_188;
              pppppppcStack_264 = (code *******)0x469b19;
              pppppppcStack_264 = (code *******)__vbaObjSet();
              pppppppcStack_25c = (code *******)&pppppppcStack_18c;
              pppppppcStack_260 = (code *******)0x0;
              pppppppcStack_268 = (code *******)0x469b28;
              pppppppcStack_1e4 = pppppppcStack_264;
              pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_264)[0x10])();
              if ((int)pppppppcVar12 < 0) {
                pppppppcStack_268 = (code *******)0x40;
                pppppppcStack_26c = (code *******)&DAT_004182e4;
                pppppppcStack_270 = pppppppcStack_1e4;
                pppppppcStack_278 = (code *******)0x469b3c;
                pppppppcStack_274 = pppppppcVar12;
                __vbaHresultCheckObj();
              }
              pppppppcStack_268 = &ppppppcStack_1d8;
              pppppppcStack_26c = pppppppcStack_18c;
              pppppppcStack_1ec = pppppppcStack_18c;
              pppppppcStack_270 = (code *******)0x469b52;
              pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_18c)[0x22])();
              if ((int)pppppppcVar12 < 0) {
                pppppppcStack_270 = (code *******)0x88;
                pppppppcStack_274 = (code *******)&DAT_00418668;
                pppppppcStack_278 = pppppppcStack_1ec;
                pppppppcStack_280 = (code *******)0x469b6c;
                pppppppcStack_27c = pppppppcVar12;
                __vbaHresultCheckObj();
              }
              pppppppcStack_274 = (code *******)0x469b75;
              pppppppcStack_270 = pppppppcVar22;
              pppppppcStack_274 = (code *******)(*(code *)(*pppppppcVar22)[0xc0])();
              pppppppcStack_278 = &ppppppcStack_184;
              pppppppcStack_27c = (code *******)0x469b7c;
              pppppppcStack_278 = (code *******)__vbaObjSet();
              pppppppcStack_274 = &ppppppcStack_1d4;
              pppppppcStack_27c = (code *******)0x469b8f;
              pppppppcStack_1f4 = pppppppcStack_278;
              pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_278)[0x22])();
              uVar23 = 0;
              if ((int)pppppppcVar12 < 0) {
                pppppppcStack_25c = (code *******)0x88;
                pppppppcStack_260 = (code *******)&DAT_0041804c;
                pppppppcStack_264 = pppppppcStack_1f4;
                pppppppcStack_26c = (code *******)0x469ba9;
                pppppppcStack_268 = pppppppcVar12;
                __vbaHresultCheckObj();
              }
              if ((uVar23 & 0xd) == 0) {
                pppppppcStack_25c = (code *******)0x469bbf;
                ppppppcVar21 = (code ******)__vbaFpI4();
                pppppppcVar22[0x2c] = ppppppcVar21;
                pppppppcStack_25c = (code *******)&pppppppcStack_18c;
                pppppppcStack_260 = (code *******)&pppppppcStack_188;
                pppppppcStack_264 = &ppppppcStack_184;
                pppppppcStack_268 = (code *******)0x3;
                pppppppcStack_26c = (code *******)0x469bd9;
                __vbaFreeObjList();
                pppppppcStack_25c = (code *******)0x0;
                pppppppcStack_260 = (code *******)0x80010006;
                pppppppcStack_268 = (code *******)0x469bec;
                pppppppcStack_264 = pppppppcVar22;
                pppppppcStack_268 = (code *******)(*(code *)(*pppppppcVar22)[0xe5])();
                pppppppcStack_26c = (code *******)&pppppppcStack_18c;
                pppppppcStack_270 = (code *******)0x469bf3;
                pppppppcStack_268 = (code *******)__vbaObjSet();
                pppppppcStack_26c = &ppppppcStack_1b0;
                pppppppcStack_270 = (code *******)0x469bfe;
                __vbaLateIdCallLd();
                pppppppcStack_264 = (code *******)0x469c0a;
                pppppppcStack_260 = pppppppcVar22;
                pppppppcStack_264 = (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
                pppppppcStack_268 = &ppppppcStack_184;
                pppppppcStack_26c = (code *******)0x469c11;
                pppppppcStack_26c = (code *******)__vbaObjSet();
                pppppppcStack_264 = (code *******)&pppppppcStack_188;
                pppppppcStack_268 = (code *******)0x0;
                pppppppcStack_270 = (code *******)0x469c20;
                pppppppcStack_1e4 = pppppppcStack_26c;
                pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_26c)[0x10])();
                if ((int)pppppppcVar12 < 0) {
                  pppppppcStack_270 = (code *******)0x40;
                  pppppppcStack_274 = (code *******)&DAT_004182e4;
                  pppppppcStack_278 = pppppppcStack_1e4;
                  pppppppcStack_280 = (code *******)0x469c34;
                  pppppppcStack_27c = pppppppcVar12;
                  __vbaHresultCheckObj();
                }
                pppppppcStack_270 = &ppppppcStack_1d4;
                pppppppcStack_274 = pppppppcStack_188;
                pppppppcStack_1ec = pppppppcStack_188;
                pppppppcStack_278 = (code *******)0x469c4a;
                pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_188)[0x22])();
                uVar23 = 0;
                if ((int)pppppppcVar12 < 0) {
                  pppppppcStack_278 = (code *******)0x88;
                  pppppppcStack_27c = (code *******)&DAT_00418668;
                  pppppppcStack_280 = pppppppcStack_1ec;
                  pppppppcStack_288 = (code *******)0x469c64;
                  pppppppcStack_284 = pppppppcVar12;
                  __vbaHresultCheckObj();
                }
                pppppppcStack_278 = &ppppppcStack_1b0;
                pppppppcStack_27c = (code *******)0x469c6e;
                __vbaR4Var();
                if ((uVar23 & 0xd) == 0) {
                  pppppppcStack_25c = (code *******)0x469c81;
                  ppppppcVar21 = (code ******)__vbaFpI4();
                  pppppppcVar22[0x2d] = ppppppcVar21;
                  pppppppcStack_25c = (code *******)&pppppppcStack_18c;
                  pppppppcStack_260 = (code *******)&pppppppcStack_188;
                  pppppppcStack_264 = &ppppppcStack_184;
                  pppppppcStack_268 = (code *******)0x3;
                  pppppppcStack_26c = (code *******)0x469c9b;
                  __vbaFreeObjList();
                  pppppppcStack_25c = (code *******)0x469ca7;
                  __vbaFreeVar();
                  pppppppcStack_25c = (code *******)0x469cb0;
                  pppppppcStack_258 = pppppppcVar22;
                  pppppppcStack_25c = (code *******)(*(code *)(*pppppppcVar22)[0xc3])();
                  pppppppcStack_260 = (code *******)&pppppppcStack_18c;
                  pppppppcStack_264 = (code *******)0x469cb7;
                  pppppppcStack_264 = (code *******)__vbaObjSet();
                  pppppppcStack_25c = (code *******)&pppppppcStack_190;
                  pppppppcStack_260 = (code *******)0x1;
                  pppppppcStack_268 = (code *******)0x469cc6;
                  pppppppcStack_1e4 = pppppppcStack_264;
                  pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_264)[0x10])();
                  if ((int)pppppppcVar12 < 0) {
                    pppppppcStack_268 = (code *******)0x40;
                    pppppppcStack_26c = (code *******)&DAT_004182e4;
                    pppppppcStack_270 = pppppppcStack_1e4;
                    pppppppcStack_278 = (code *******)0x469cda;
                    pppppppcStack_274 = pppppppcVar12;
                    __vbaHresultCheckObj();
                  }
                  pppppppcStack_268 = &ppppppcStack_1d8;
                  pppppppcStack_26c = pppppppcStack_190;
                  pppppppcStack_1ec = pppppppcStack_190;
                  pppppppcStack_270 = (code *******)0x469cf0;
                  pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_190)[0x20])();
                  if ((int)pppppppcVar12 < 0) {
                    pppppppcStack_270 = (code *******)0x80;
                    pppppppcStack_274 = (code *******)&DAT_00417a98;
                    pppppppcStack_278 = pppppppcStack_1ec;
                    pppppppcStack_280 = (code *******)0x469d0a;
                    pppppppcStack_27c = pppppppcVar12;
                    __vbaHresultCheckObj();
                  }
                  pppppppcStack_274 = (code *******)0x469d13;
                  pppppppcStack_270 = pppppppcVar22;
                  pppppppcStack_274 = (code *******)(*(code *)(*pppppppcVar22)[200])();
                  pppppppcStack_278 = (code *******)&pppppppcStack_194;
                  pppppppcStack_27c = (code *******)0x469d1a;
                  pppppppcStack_27c = (code *******)__vbaObjSet();
                  pppppppcStack_274 = (code *******)&pppppppcStack_198;
                  pppppppcStack_278 = (code *******)0x1;
                  pppppppcStack_280 = (code *******)0x469d2c;
                  pppppppcStack_1f4 = pppppppcStack_27c;
                  pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_27c)[0x10])();
                  if ((int)pppppppcVar12 < 0) {
                    pppppppcStack_280 = (code *******)0x40;
                    pppppppcStack_284 = (code *******)&DAT_004182e4;
                    pppppppcStack_288 = pppppppcStack_1f4;
                    pppppppcStack_290 = (code *******)0x469d43;
                    pppppppcStack_28c = pppppppcVar12;
                    __vbaHresultCheckObj();
                  }
                  pppppppcStack_280 = &ppppppcStack_1dc;
                  pppppppcStack_284 = pppppppcStack_198;
                  pppppppcStack_1fc = pppppppcStack_198;
                  pppppppcStack_288 = (code *******)0x469d59;
                  pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_198)[0x20])();
                  if ((int)pppppppcVar12 < 0) {
                    pppppppcStack_288 = (code *******)0x80;
                    pppppppcStack_28c = (code *******)&DAT_00417a98;
                    pppppppcStack_290 = pppppppcStack_1fc;
                    pppppppcStack_298 = (code *******)0x469d73;
                    pppppppcStack_294 = pppppppcVar12;
                    __vbaHresultCheckObj();
                  }
                  pppppppcStack_28c = (code *******)0x469d7c;
                  pppppppcStack_288 = pppppppcVar22;
                  pppppppcStack_28c = (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
                  pppppppcStack_290 = &ppppppcStack_184;
                  pppppppcStack_294 = (code *******)0x469d83;
                  pppppppcStack_294 = (code *******)__vbaObjSet();
                  pppppppcStack_28c = (code *******)&pppppppcStack_188;
                  pppppppcStack_290 = (code *******)0x0;
                  pppppppcStack_298 = (code *******)0x469d95;
                  pppppppcStack_204 = pppppppcStack_294;
                  pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_294)[0x10])();
                  if ((int)pppppppcVar12 < 0) {
                    pppppppcStack_298 = (code *******)0x40;
                    pppppppcStack_29c = (code *******)&DAT_004182e4;
                    pppppppcStack_2a0 = pppppppcStack_204;
                    pppppppcStack_2a8 = (code *******)0x469dac;
                    pppppppcStack_2a4 = pppppppcVar12;
                    __vbaHresultCheckObj();
                  }
                  pppppppcStack_298 = &ppppppcStack_1d4;
                  pppppppcStack_29c = pppppppcStack_188;
                  pppppppcStack_20c = pppppppcStack_188;
                  pppppppcStack_2a0 = (code *******)0x469dc2;
                  pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_188)[0x22])();
                  uVar23 = 0;
                  if ((int)pppppppcVar12 < 0) {
                    pppppppcStack_25c = (code *******)0x88;
                    pppppppcStack_260 = (code *******)&DAT_00418668;
                    pppppppcStack_264 = pppppppcStack_20c;
                    pppppppcStack_26c = (code *******)0x469ddc;
                    pppppppcStack_268 = pppppppcVar12;
                    __vbaHresultCheckObj();
                  }
                  if ((uVar23 & 0xd) == 0) {
                    pppppppcStack_25c = (code *******)0x469df5;
                    ppppppcVar21 = (code ******)__vbaFpI4();
                    pppppppcVar22[0x2e] = ppppppcVar21;
                    pppppppcStack_25c = (code *******)&pppppppcStack_198;
                    pppppppcStack_260 = (code *******)&pppppppcStack_194;
                    pppppppcStack_264 = (code *******)&pppppppcStack_190;
                    pppppppcStack_268 = (code *******)&pppppppcStack_18c;
                    pppppppcStack_26c = (code *******)&pppppppcStack_188;
                    pppppppcStack_270 = &ppppppcStack_184;
                    pppppppcStack_274 = (code *******)0x6;
                    pppppppcStack_278 = (code *******)0x469e1b;
                    __vbaFreeObjList();
                    pppppppcStack_260 = (code *******)0x469e27;
                    pppppppcStack_25c = pppppppcVar22;
                    pppppppcStack_260 = (code *******)(*(code *)(*pppppppcVar22)[0xc3])();
                    pppppppcStack_264 = (code *******)&pppppppcStack_18c;
                    pppppppcStack_268 = (code *******)0x469e2e;
                    pppppppcStack_268 = (code *******)__vbaObjSet();
                    pppppppcStack_260 = (code *******)&pppppppcStack_190;
                    pppppppcStack_264 = (code *******)0x1;
                    pppppppcStack_26c = (code *******)0x469e3d;
                    pppppppcStack_1e4 = pppppppcStack_268;
                    iVar7 = (*(code *)(*pppppppcStack_268)[0x10])();
                    if (iVar7 < 0) {
                      pppppppcStack_26c = (code *******)0x40;
                      pppppppcStack_270 = (code *******)&DAT_004182e4;
                      pppppppcStack_274 = pppppppcStack_1e4;
                      pppppppcStack_27c = (code *******)0x469e51;
                      pppppppcStack_278 = (code *******)iVar7;
                      __vbaHresultCheckObj();
                    }
                    pppppppcStack_26c = &ppppppcStack_1d8;
                    pppppppcStack_270 = pppppppcStack_190;
                    pppppppcStack_1ec = pppppppcStack_190;
                    pppppppcStack_274 = (code *******)0x469e64;
                    pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_190)[0x1e])();
                    if ((int)pppppppcVar12 < 0) {
                      pppppppcStack_274 = (code *******)0x78;
                      pppppppcStack_278 = (code *******)&DAT_00417a98;
                      pppppppcStack_27c = pppppppcStack_1ec;
                      pppppppcStack_284 = (code *******)0x469e7b;
                      pppppppcStack_280 = pppppppcVar12;
                      __vbaHresultCheckObj();
                    }
                    pppppppcStack_278 = (code *******)0x469e84;
                    pppppppcStack_274 = pppppppcVar22;
                    pppppppcStack_278 = (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
                    pppppppcStack_27c = &ppppppcStack_184;
                    pppppppcStack_280 = (code *******)0x469e8b;
                    pppppppcStack_280 = (code *******)__vbaObjSet();
                    pppppppcStack_278 = (code *******)&pppppppcStack_188;
                    pppppppcStack_27c = (code *******)0x3;
                    pppppppcStack_284 = (code *******)0x469e9d;
                    pppppppcStack_1f4 = pppppppcStack_280;
                    pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_280)[0x10])();
                    if ((int)pppppppcVar12 < 0) {
                      pppppppcStack_284 = (code *******)0x40;
                      pppppppcStack_288 = (code *******)&DAT_004182e4;
                      pppppppcStack_28c = pppppppcStack_1f4;
                      pppppppcStack_294 = (code *******)0x469eb4;
                      pppppppcStack_290 = pppppppcVar12;
                      __vbaHresultCheckObj();
                    }
                    pppppppcStack_284 = &ppppppcStack_1d4;
                    pppppppcStack_288 = pppppppcStack_188;
                    pppppppcStack_1fc = pppppppcStack_188;
                    pppppppcStack_28c = (code *******)0x469eca;
                    pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_188)[0x20])();
                    uVar23 = 0;
                    if ((int)pppppppcVar12 < 0) {
                      pppppppcStack_25c = (code *******)0x80;
                      pppppppcStack_260 = (code *******)&DAT_00418668;
                      pppppppcStack_264 = pppppppcStack_1fc;
                      pppppppcStack_26c = (code *******)0x469ee4;
                      pppppppcStack_268 = pppppppcVar12;
                      __vbaHresultCheckObj();
                    }
                    if ((uVar23 & 0xd) == 0) {
                      pppppppcStack_25c = (code *******)0x469efa;
                      ppppppcVar21 = (code ******)__vbaFpI4();
                      pppppppcVar22[0x2f] = ppppppcVar21;
                      pppppppcStack_25c = (code *******)&pppppppcStack_190;
                      pppppppcStack_260 = (code *******)&pppppppcStack_18c;
                      pppppppcStack_264 = (code *******)&pppppppcStack_188;
                      pppppppcStack_268 = &ppppppcStack_184;
                      pppppppcStack_26c = (code *******)0x4;
                      pppppppcStack_270 = (code *******)0x469f18;
                      __vbaFreeObjList();
                      pppppppcStack_260 = (code *******)0x469f24;
                      pppppppcStack_25c = pppppppcVar22;
                      pppppppcStack_260 = (code *******)(*(code *)(*pppppppcVar22)[0xc3])();
                      pppppppcStack_264 = (code *******)&pppppppcStack_18c;
                      pppppppcStack_268 = (code *******)0x469f2b;
                      pppppppcStack_268 = (code *******)__vbaObjSet();
                      pppppppcStack_260 = (code *******)&pppppppcStack_190;
                      pppppppcStack_264 = (code *******)0x1;
                      pppppppcStack_26c = (code *******)0x469f3a;
                      pppppppcStack_1e4 = pppppppcStack_268;
                      pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_268)[0x10])();
                      if ((int)pppppppcVar12 < 0) {
                        pppppppcStack_26c = (code *******)0x40;
                        pppppppcStack_270 = (code *******)&DAT_004182e4;
                        pppppppcStack_274 = pppppppcStack_1e4;
                        pppppppcStack_27c = (code *******)0x469f4e;
                        pppppppcStack_278 = pppppppcVar12;
                        __vbaHresultCheckObj();
                      }
                      pppppppcStack_26c = &ppppppcStack_1d8;
                      pppppppcStack_270 = pppppppcStack_190;
                      pppppppcStack_1ec = pppppppcStack_190;
                      pppppppcStack_274 = (code *******)0x469f61;
                      pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_190)[0x1c])();
                      if ((int)pppppppcVar12 < 0) {
                        pppppppcStack_274 = (code *******)0x70;
                        pppppppcStack_278 = (code *******)&DAT_00417a98;
                        pppppppcStack_27c = pppppppcStack_1ec;
                        pppppppcStack_284 = (code *******)0x469f78;
                        pppppppcStack_280 = pppppppcVar12;
                        __vbaHresultCheckObj();
                      }
                      pppppppcStack_278 = (code *******)0x469f81;
                      pppppppcStack_274 = pppppppcVar22;
                      pppppppcStack_278 = (code *******)(*(code *)(*pppppppcVar22)[0xc3])();
                      pppppppcStack_27c = (code *******)&pppppppcStack_194;
                      pppppppcStack_280 = (code *******)0x469f88;
                      pppppppcStack_280 = (code *******)__vbaObjSet();
                      pppppppcStack_278 = (code *******)&pppppppcStack_198;
                      pppppppcStack_27c = (code *******)0x1;
                      pppppppcStack_284 = (code *******)0x469f9a;
                      pppppppcStack_1f4 = pppppppcStack_280;
                      pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_280)[0x10])();
                      if ((int)pppppppcVar12 < 0) {
                        pppppppcStack_284 = (code *******)0x40;
                        pppppppcStack_288 = (code *******)&DAT_004182e4;
                        pppppppcStack_28c = pppppppcStack_1f4;
                        pppppppcStack_294 = (code *******)0x469fb1;
                        pppppppcStack_290 = pppppppcVar12;
                        __vbaHresultCheckObj();
                      }
                      pppppppcStack_284 = &ppppppcStack_1dc;
                      pppppppcStack_288 = pppppppcStack_198;
                      pppppppcStack_1fc = pppppppcStack_198;
                      pppppppcStack_28c = (code *******)0x469fc7;
                      pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_198)[0x20])();
                      if ((int)pppppppcVar12 < 0) {
                        pppppppcStack_28c = (code *******)0x80;
                        pppppppcStack_290 = (code *******)&DAT_00417a98;
                        pppppppcStack_294 = pppppppcStack_1fc;
                        pppppppcStack_29c = (code *******)0x469fe1;
                        pppppppcStack_298 = pppppppcVar12;
                        __vbaHresultCheckObj();
                      }
                      pppppppcStack_290 = (code *******)0x469fea;
                      pppppppcStack_28c = pppppppcVar22;
                      pppppppcStack_290 = (code *******)(*(code *)(*pppppppcVar22)[0xc9])();
                      pppppppcStack_294 = &ppppppcStack_184;
                      pppppppcStack_298 = (code *******)0x469ff1;
                      pppppppcStack_298 = (code *******)__vbaObjSet();
                      pppppppcStack_290 = (code *******)&pppppppcStack_188;
                      pppppppcStack_294 = (code *******)0x1;
                      pppppppcStack_29c = (code *******)0x46a003;
                      pppppppcStack_204 = pppppppcStack_298;
                      pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_298)[0x10])();
                      if ((int)pppppppcVar12 < 0) {
                        pppppppcStack_29c = (code *******)0x40;
                        pppppppcStack_2a0 = (code *******)&DAT_004182e4;
                        pppppppcStack_2a4 = pppppppcStack_204;
                        pppppppcStack_2ac = (code *******)0x46a01a;
                        pppppppcStack_2a8 = pppppppcVar12;
                        __vbaHresultCheckObj();
                      }
                      pppppppcStack_29c = &ppppppcStack_1d4;
                      pppppppcStack_2a0 = pppppppcStack_188;
                      pppppppcStack_20c = pppppppcStack_188;
                      pppppppcStack_2a4 = (code *******)0x46a02d;
                      pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_188)[0x1e])();
                      uVar23 = 0;
                      if ((int)pppppppcVar12 < 0) {
                        pppppppcStack_25c = (code *******)0x78;
                        pppppppcStack_260 = (code *******)&DAT_00417e48;
                        pppppppcStack_264 = pppppppcStack_20c;
                        pppppppcStack_26c = (code *******)0x46a044;
                        pppppppcStack_268 = pppppppcVar12;
                        __vbaHresultCheckObj();
                      }
                      if ((uVar23 & 0xd) == 0) {
                        pppppppcStack_25c = (code *******)0x46a05d;
                        ppppppcVar21 = (code ******)__vbaFpI4();
                        pppppppcVar22[0x30] = ppppppcVar21;
                        pppppppcStack_25c = (code *******)&pppppppcStack_198;
                        pppppppcStack_260 = (code *******)&pppppppcStack_194;
                        pppppppcStack_264 = (code *******)&pppppppcStack_190;
                        pppppppcStack_268 = (code *******)&pppppppcStack_18c;
                        pppppppcStack_26c = (code *******)&pppppppcStack_188;
                        pppppppcStack_270 = &ppppppcStack_184;
                        pppppppcStack_274 = (code *******)0x6;
                        pppppppcStack_278 = (code *******)0x46a083;
                        __vbaFreeObjList();
                        pppppppcStack_260 = (code *******)0x46a08f;
                        pppppppcStack_25c = pppppppcVar22;
                        pppppppcStack_260 = (code *******)(*(code *)(*pppppppcVar22)[0xc3])();
                        pppppppcStack_264 = (code *******)&pppppppcStack_18c;
                        pppppppcStack_268 = (code *******)0x46a096;
                        pppppppcStack_268 = (code *******)__vbaObjSet();
                        pppppppcStack_260 = (code *******)&pppppppcStack_190;
                        pppppppcStack_264 = (code *******)0x1;
                        pppppppcStack_26c = (code *******)0x46a0a5;
                        pppppppcStack_1e4 = pppppppcStack_268;
                        iVar7 = (*(code *)(*pppppppcStack_268)[0x10])();
                        if (iVar7 < 0) {
                          pppppppcStack_26c = (code *******)0x40;
                          pppppppcStack_270 = (code *******)&DAT_004182e4;
                          pppppppcStack_274 = pppppppcStack_1e4;
                          pppppppcStack_27c = (code *******)0x46a0b9;
                          pppppppcStack_278 = (code *******)iVar7;
                          __vbaHresultCheckObj();
                        }
                        pppppppcStack_26c = &ppppppcStack_1d8;
                        pppppppcStack_270 = pppppppcStack_190;
                        pppppppcStack_1ec = pppppppcStack_190;
                        pppppppcStack_274 = (code *******)0x46a0cc;
                        pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_190)[0x1c])();
                        if ((int)pppppppcVar12 < 0) {
                          pppppppcStack_274 = (code *******)0x70;
                          pppppppcStack_278 = (code *******)&DAT_00417a98;
                          pppppppcStack_27c = pppppppcStack_1ec;
                          pppppppcStack_284 = (code *******)0x46a0e3;
                          pppppppcStack_280 = pppppppcVar12;
                          __vbaHresultCheckObj();
                        }
                        pppppppcStack_278 = (code *******)0x46a0ec;
                        pppppppcStack_274 = pppppppcVar22;
                        pppppppcStack_278 = (code *******)(*(code *)(*pppppppcVar22)[0xc3])();
                        pppppppcStack_27c = (code *******)&pppppppcStack_194;
                        pppppppcStack_280 = (code *******)0x46a0f3;
                        pppppppcStack_280 = (code *******)__vbaObjSet();
                        pppppppcStack_278 = (code *******)&pppppppcStack_198;
                        pppppppcStack_27c = (code *******)0x1;
                        pppppppcStack_284 = (code *******)0x46a105;
                        pppppppcStack_1f4 = pppppppcStack_280;
                        pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_280)[0x10])();
                        if ((int)pppppppcVar12 < 0) {
                          pppppppcStack_284 = (code *******)0x40;
                          pppppppcStack_288 = (code *******)&DAT_004182e4;
                          pppppppcStack_28c = pppppppcStack_1f4;
                          pppppppcStack_294 = (code *******)0x46a11c;
                          pppppppcStack_290 = pppppppcVar12;
                          __vbaHresultCheckObj();
                        }
                        pppppppcStack_284 = &ppppppcStack_1dc;
                        pppppppcStack_288 = pppppppcStack_198;
                        pppppppcStack_1fc = pppppppcStack_198;
                        pppppppcStack_28c = (code *******)0x46a132;
                        pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_198)[0x20])();
                        if ((int)pppppppcVar12 < 0) {
                          pppppppcStack_28c = (code *******)0x80;
                          pppppppcStack_290 = (code *******)&DAT_00417a98;
                          pppppppcStack_294 = pppppppcStack_1fc;
                          pppppppcStack_29c = (code *******)0x46a14c;
                          pppppppcStack_298 = pppppppcVar12;
                          __vbaHresultCheckObj();
                        }
                        pppppppcStack_290 = (code *******)0x46a155;
                        pppppppcStack_28c = pppppppcVar22;
                        pppppppcStack_290 = (code *******)(*(code *)(*pppppppcVar22)[199])();
                        pppppppcStack_294 = &ppppppcStack_184;
                        pppppppcStack_298 = (code *******)0x46a15c;
                        pppppppcStack_298 = (code *******)__vbaObjSet();
                        pppppppcStack_290 = (code *******)&pppppppcStack_188;
                        pppppppcStack_294 = (code *******)0x1;
                        pppppppcStack_29c = (code *******)0x46a16e;
                        pppppppcStack_204 = pppppppcStack_298;
                        pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_298)[0x10])();
                        if ((int)pppppppcVar12 < 0) {
                          pppppppcStack_29c = (code *******)0x40;
                          pppppppcStack_2a0 = (code *******)&DAT_004182e4;
                          pppppppcStack_2a4 = pppppppcStack_204;
                          pppppppcStack_2ac = (code *******)0x46a185;
                          pppppppcStack_2a8 = pppppppcVar12;
                          __vbaHresultCheckObj();
                        }
                        pppppppcStack_29c = &ppppppcStack_1d4;
                        pppppppcStack_2a0 = pppppppcStack_188;
                        pppppppcStack_20c = pppppppcStack_188;
                        pppppppcStack_2a4 = (code *******)0x46a198;
                        pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_188)[0x1c])();
                        uVar23 = 0;
                        if ((int)pppppppcVar12 < 0) {
                          pppppppcStack_25c = (code *******)0x70;
                          pppppppcStack_260 = (code *******)&DAT_00417a98;
                          pppppppcStack_264 = pppppppcStack_20c;
                          pppppppcStack_26c = (code *******)0x46a1af;
                          pppppppcStack_268 = pppppppcVar12;
                          __vbaHresultCheckObj();
                        }
                        if ((uVar23 & 0xd) == 0) {
                          pppppppcStack_25c = (code *******)0x46a1c8;
                          ppppppcVar21 = (code ******)__vbaFpI4();
                          pppppppcVar22[0x31] = ppppppcVar21;
                          pppppppcStack_25c = (code *******)&pppppppcStack_198;
                          pppppppcStack_260 = (code *******)&pppppppcStack_194;
                          pppppppcStack_264 = (code *******)&pppppppcStack_190;
                          pppppppcStack_268 = (code *******)&pppppppcStack_18c;
                          pppppppcStack_26c = (code *******)&pppppppcStack_188;
                          pppppppcStack_270 = &ppppppcStack_184;
                          pppppppcStack_274 = (code *******)0x6;
                          pppppppcStack_278 = (code *******)0x46a1ee;
                          __vbaFreeObjList();
                          pppppppcStack_260 = (code *******)0x46a1fa;
                          pppppppcStack_25c = pppppppcVar22;
                          pppppppcStack_260 = (code *******)(*(code *)(*pppppppcVar22)[0xc3])();
                          pppppppcStack_264 = (code *******)&pppppppcStack_18c;
                          pppppppcStack_268 = (code *******)0x46a201;
                          pppppppcStack_268 = (code *******)__vbaObjSet();
                          pppppppcStack_260 = (code *******)&pppppppcStack_190;
                          pppppppcStack_264 = (code *******)0x1;
                          pppppppcStack_26c = (code *******)0x46a210;
                          pppppppcStack_1e4 = pppppppcStack_268;
                          iVar7 = (*(code *)(*pppppppcStack_268)[0x10])();
                          if (iVar7 < 0) {
                            pppppppcStack_26c = (code *******)0x40;
                            pppppppcStack_270 = (code *******)&DAT_004182e4;
                            pppppppcStack_274 = pppppppcStack_1e4;
                            pppppppcStack_27c = (code *******)0x46a224;
                            pppppppcStack_278 = (code *******)iVar7;
                            __vbaHresultCheckObj();
                          }
                          pppppppcStack_26c = &ppppppcStack_1d8;
                          pppppppcStack_270 = pppppppcStack_190;
                          pppppppcStack_1ec = pppppppcStack_190;
                          pppppppcStack_274 = (code *******)0x46a237;
                          pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_190)[0x1c])();
                          if ((int)pppppppcVar12 < 0) {
                            pppppppcStack_274 = (code *******)0x70;
                            pppppppcStack_278 = (code *******)&DAT_00417a98;
                            pppppppcStack_27c = pppppppcStack_1ec;
                            pppppppcStack_284 = (code *******)0x46a24e;
                            pppppppcStack_280 = pppppppcVar12;
                            __vbaHresultCheckObj();
                          }
                          pppppppcStack_278 = (code *******)0x46a257;
                          pppppppcStack_274 = pppppppcVar22;
                          pppppppcStack_278 = (code *******)(*(code *)(*pppppppcVar22)[0xc3])();
                          pppppppcStack_27c = (code *******)&pppppppcStack_194;
                          pppppppcStack_280 = (code *******)0x46a25e;
                          pppppppcStack_280 = (code *******)__vbaObjSet();
                          pppppppcStack_278 = (code *******)&pppppppcStack_198;
                          pppppppcStack_27c = (code *******)0x1;
                          pppppppcStack_284 = (code *******)0x46a270;
                          pppppppcStack_1f4 = pppppppcStack_280;
                          pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_280)[0x10])();
                          if ((int)pppppppcVar12 < 0) {
                            pppppppcStack_284 = (code *******)0x40;
                            pppppppcStack_288 = (code *******)&DAT_004182e4;
                            pppppppcStack_28c = pppppppcStack_1f4;
                            pppppppcStack_294 = (code *******)0x46a287;
                            pppppppcStack_290 = pppppppcVar12;
                            __vbaHresultCheckObj();
                          }
                          pppppppcStack_284 = &ppppppcStack_1dc;
                          pppppppcStack_288 = pppppppcStack_198;
                          pppppppcStack_1fc = pppppppcStack_198;
                          pppppppcStack_28c = (code *******)0x46a29d;
                          pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_198)[0x20])();
                          if ((int)pppppppcVar12 < 0) {
                            pppppppcStack_28c = (code *******)0x80;
                            pppppppcStack_290 = (code *******)&DAT_00417a98;
                            pppppppcStack_294 = pppppppcStack_1fc;
                            pppppppcStack_29c = (code *******)0x46a2b7;
                            pppppppcStack_298 = pppppppcVar12;
                            __vbaHresultCheckObj();
                          }
                          pppppppcStack_290 = (code *******)0x46a2c0;
                          pppppppcStack_28c = pppppppcVar22;
                          pppppppcStack_290 = (code *******)(*(code *)(*pppppppcVar22)[200])();
                          pppppppcStack_294 = &ppppppcStack_184;
                          pppppppcStack_298 = (code *******)0x46a2c7;
                          pppppppcStack_298 = (code *******)__vbaObjSet();
                          pppppppcStack_290 = (code *******)&pppppppcStack_188;
                          pppppppcStack_294 = (code *******)0x1;
                          pppppppcStack_29c = (code *******)0x46a2d9;
                          pppppppcStack_204 = pppppppcStack_298;
                          pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_298)[0x10])();
                          if ((int)pppppppcVar12 < 0) {
                            pppppppcStack_29c = (code *******)0x40;
                            pppppppcStack_2a0 = (code *******)&DAT_004182e4;
                            pppppppcStack_2a4 = pppppppcStack_204;
                            pppppppcStack_2ac = (code *******)0x46a2f0;
                            pppppppcStack_2a8 = pppppppcVar12;
                            __vbaHresultCheckObj();
                          }
                          pppppppcStack_29c = &ppppppcStack_1d4;
                          pppppppcStack_2a0 = pppppppcStack_188;
                          pppppppcStack_20c = pppppppcStack_188;
                          pppppppcStack_2a4 = (code *******)0x46a303;
                          pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_188)[0x1c])();
                          uVar23 = 0;
                          if ((int)pppppppcVar12 < 0) {
                            pppppppcStack_25c = (code *******)0x70;
                            pppppppcStack_260 = (code *******)&DAT_00417a98;
                            pppppppcStack_264 = pppppppcStack_20c;
                            pppppppcStack_26c = (code *******)0x46a31a;
                            pppppppcStack_268 = pppppppcVar12;
                            __vbaHresultCheckObj();
                          }
                          if ((uVar23 & 0xd) == 0) {
                            pppppppcStack_25c = (code *******)0x46a333;
                            ppppppcVar21 = (code ******)__vbaFpI4();
                            pppppppcVar22[0x32] = ppppppcVar21;
                            pppppppcStack_25c = (code *******)&pppppppcStack_198;
                            pppppppcStack_260 = (code *******)&pppppppcStack_194;
                            pppppppcStack_264 = (code *******)&pppppppcStack_190;
                            pppppppcStack_268 = (code *******)&pppppppcStack_18c;
                            pppppppcStack_26c = (code *******)&pppppppcStack_188;
                            pppppppcStack_270 = &ppppppcStack_184;
                            pppppppcStack_274 = (code *******)0x6;
                            pppppppcStack_278 = (code *******)0x46a359;
                            __vbaFreeObjList();
                            pppppppcStack_260 = (code *******)0x46a365;
                            pppppppcStack_25c = pppppppcVar22;
                            pppppppcStack_260 = (code *******)(*(code *)(*pppppppcVar22)[0xd7])();
                            pppppppcStack_264 = &ppppppcStack_184;
                            pppppppcStack_268 = (code *******)0x46a36c;
                            pppppppcStack_268 = (code *******)__vbaObjSet();
                            pppppppcStack_260 = (code *******)&pppppppcStack_188;
                            pppppppcStack_264 = (code *******)0x1;
                            pppppppcStack_26c = (code *******)0x46a37b;
                            pppppppcStack_1e4 = pppppppcStack_268;
                            iVar7 = (*(code *)(*pppppppcStack_268)[0x10])();
                            if (iVar7 < 0) {
                              pppppppcStack_26c = (code *******)0x40;
                              pppppppcStack_270 = (code *******)&DAT_004182e4;
                              pppppppcStack_274 = pppppppcStack_1e4;
                              pppppppcStack_27c = (code *******)0x46a38f;
                              pppppppcStack_278 = (code *******)iVar7;
                              __vbaHresultCheckObj();
                            }
                            pppppppcStack_26c = &ppppppcStack_1d4;
                            pppppppcStack_270 = pppppppcStack_188;
                            pppppppcStack_1ec = pppppppcStack_188;
                            pppppppcStack_274 = (code *******)0x46a3a2;
                            pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_188)[0x1c])();
                            if ((int)pppppppcVar12 < 0) {
                              pppppppcStack_274 = (code *******)0x70;
                              pppppppcStack_278 = (code *******)&DAT_00417a98;
                              pppppppcStack_27c = pppppppcStack_1ec;
                              pppppppcStack_284 = (code *******)0x46a3b9;
                              pppppppcStack_280 = pppppppcVar12;
                              __vbaHresultCheckObj();
                            }
                            pppppppcStack_278 = (code *******)0x46a3c2;
                            pppppppcStack_274 = pppppppcVar22;
                            pppppppcStack_278 = (code *******)(*(code *)(*pppppppcVar22)[0xd6])();
                            pppppppcStack_27c = (code *******)&pppppppcStack_18c;
                            pppppppcStack_280 = (code *******)0x46a3c9;
                            pppppppcStack_280 = (code *******)__vbaObjSet();
                            pppppppcStack_278 = (code *******)&pppppppcStack_190;
                            pppppppcStack_27c = (code *******)0x1;
                            pppppppcStack_284 = (code *******)0x46a3db;
                            pppppppcStack_1f4 = pppppppcStack_280;
                            pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_280)[0x10])();
                            if ((int)pppppppcVar12 < 0) {
                              pppppppcStack_284 = (code *******)0x40;
                              pppppppcStack_288 = (code *******)&DAT_004182e4;
                              pppppppcStack_28c = pppppppcStack_1f4;
                              pppppppcStack_294 = (code *******)0x46a3f2;
                              pppppppcStack_290 = pppppppcVar12;
                              __vbaHresultCheckObj();
                            }
                            pppppppcStack_284 = &ppppppcStack_1d8;
                            pppppppcStack_288 = pppppppcStack_190;
                            pppppppcStack_1fc = pppppppcStack_190;
                            pppppppcStack_28c = (code *******)0x46a405;
                            pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_190)[0x1e])();
                            if ((int)pppppppcVar12 < 0) {
                              pppppppcStack_28c = (code *******)0x78;
                              pppppppcStack_290 = (code *******)&DAT_0041807c;
                              pppppppcStack_294 = pppppppcStack_1fc;
                              pppppppcStack_29c = (code *******)0x46a41c;
                              pppppppcStack_298 = pppppppcVar12;
                              __vbaHresultCheckObj();
                            }
                            pppppppcStack_290 = (code *******)0x46a425;
                            pppppppcStack_28c = pppppppcVar22;
                            pppppppcStack_290 = (code *******)(*(code *)(*pppppppcVar22)[0xd7])();
                            pppppppcStack_294 = (code *******)&pppppppcStack_194;
                            pppppppcStack_298 = (code *******)0x46a42c;
                            pppppppcStack_298 = (code *******)__vbaObjSet();
                            pppppppcStack_290 = (code *******)&pppppppcStack_198;
                            pppppppcStack_294 = (code *******)0x1;
                            pppppppcStack_29c = (code *******)0x46a43e;
                            pppppppcStack_204 = pppppppcStack_298;
                            pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_298)[0x10])();
                            if ((int)pppppppcVar12 < 0) {
                              pppppppcStack_29c = (code *******)0x40;
                              pppppppcStack_2a0 = (code *******)&DAT_004182e4;
                              pppppppcStack_2a4 = pppppppcStack_204;
                              pppppppcStack_2ac = (code *******)0x46a455;
                              pppppppcStack_2a8 = pppppppcVar12;
                              __vbaHresultCheckObj();
                            }
                            pppppppcStack_29c = &ppppppcStack_1dc;
                            pppppppcStack_2a0 = pppppppcStack_198;
                            pppppppcStack_20c = pppppppcStack_198;
                            pppppppcStack_2a4 = (code *******)0x46a46b;
                            ppppppcVar21 = (code ******)(*(code *)(*pppppppcStack_198)[0x20])();
                            if ((int)ppppppcVar21 < 0) {
                              pppppppcStack_2a4 = (code *******)0x80;
                              pppppppcStack_2a8 = (code *******)&DAT_00417a98;
                              pppppppcStack_2ac = pppppppcStack_20c;
                              uStack_2b8 = (double)CONCAT44(0x46a485,(undefined4)uStack_2b8);
                              ppppppcStack_2b0 = ppppppcVar21;
                              __vbaHresultCheckObj();
                            }
                            pppppppcStack_2a8 = (code *******)0x46a48e;
                            pppppppcStack_2a4 = pppppppcVar22;
                            pppppppcStack_2a8 = (code *******)(*(code *)(*pppppppcVar22)[0xd6])();
                            pppppppcStack_2ac = &ppppppcStack_19c;
                            ppppppcStack_2b0 = (code ******)0x46a495;
                            ppppppcStack_2b0 = (code ******)__vbaObjSet();
                            pppppppcStack_2a8 = (code *******)&pppppppcStack_1a0;
                            pppppppcStack_2ac = (code *******)0x1;
                            uStack_2b8 = (double)CONCAT44(0x46a4a7,(undefined4)uStack_2b8);
                            ppppppcStack_214 = ppppppcStack_2b0;
                            ppppppcVar21 = (code ******)(*(code *)(*ppppppcStack_2b0)[0x10])();
                            if ((int)ppppppcVar21 < 0) {
                              uStack_2b8 = 1.3580985181753e-312;
                              ppppppcStack_2bc = ppppppcStack_214;
                              uStack_2c4 = 0x46a4be;
                              ppppppcStack_2c0 = ppppppcVar21;
                              __vbaHresultCheckObj();
                            }
                            uStack_2b8 = (double)CONCAT44(&pppppcStack_1e0,pppppppcStack_1a0);
                            pppppppcStack_21c = pppppppcStack_1a0;
                            ppppppcStack_2bc = (code ******)0x46a4d4;
                            pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_1a0)[0x22])();
                            uVar23 = 0;
                            if ((int)pppppppcVar12 < 0) {
                              pppppppcStack_25c = (code *******)0x88;
                              pppppppcStack_260 = (code *******)&DAT_0041807c;
                              pppppppcStack_264 = pppppppcStack_21c;
                              pppppppcStack_26c = (code *******)0x46a4ee;
                              pppppppcStack_268 = pppppppcVar12;
                              __vbaHresultCheckObj();
                            }
                            if ((uVar23 & 0xd) == 0) {
                              pppppppcStack_25c = (code *******)0x46a510;
                              ppppppcVar21 = (code ******)__vbaFpI4();
                              pppppppcVar22[0x33] = ppppppcVar21;
                              pppppppcStack_25c = (code *******)&pppppppcStack_1a0;
                              pppppppcStack_260 = &ppppppcStack_19c;
                              pppppppcStack_264 = (code *******)&pppppppcStack_198;
                              pppppppcStack_268 = (code *******)&pppppppcStack_194;
                              pppppppcStack_26c = (code *******)&pppppppcStack_190;
                              pppppppcStack_270 = (code *******)&pppppppcStack_18c;
                              pppppppcStack_274 = (code *******)&pppppppcStack_188;
                              pppppppcStack_278 = &ppppppcStack_184;
                              pppppppcStack_27c = (code *******)0x8;
                              pppppppcStack_280 = (code *******)0x46a53e;
                              __vbaFreeObjList();
                              pppppppcStack_260 = (code *******)0x46a54a;
                              pppppppcStack_25c = pppppppcVar22;
                              pppppppcStack_260 = (code *******)(*(code *)(*pppppppcVar22)[0xd6])();
                              pppppppcStack_264 = (code *******)&pppppppcStack_18c;
                              pppppppcStack_268 = (code *******)0x46a551;
                              pppppppcStack_268 = (code *******)__vbaObjSet();
                              pppppppcStack_260 = (code *******)&pppppppcStack_190;
                              pppppppcStack_264 = (code *******)0x1;
                              pppppppcStack_26c = (code *******)0x46a560;
                              pppppppcStack_1e4 = pppppppcStack_268;
                              ppppppcVar21 = (code ******)(*(code *)(*pppppppcStack_268)[0x10])();
                              if ((int)ppppppcVar21 < 0) {
                                pppppppcStack_26c = (code *******)0x40;
                                pppppppcStack_270 = (code *******)&DAT_004182e4;
                                pppppppcStack_274 = pppppppcStack_1e4;
                                pppppppcStack_27c = (code *******)0x46a574;
                                pppppppcStack_278 = (code *******)ppppppcVar21;
                                __vbaHresultCheckObj();
                              }
                              pppppppcStack_26c = &ppppppcStack_1d8;
                              pppppppcStack_270 = pppppppcStack_190;
                              pppppppcStack_1ec = pppppppcStack_190;
                              pppppppcStack_274 = (code *******)0x46a587;
                              iVar7 = (*(code *)(*pppppppcStack_190)[0x1e])();
                              if (iVar7 < 0) {
                                pppppppcStack_274 = (code *******)0x78;
                                pppppppcStack_278 = (code *******)&DAT_0041807c;
                                pppppppcStack_27c = pppppppcStack_1ec;
                                pppppppcStack_284 = (code *******)0x46a59e;
                                pppppppcStack_280 = (code *******)iVar7;
                                __vbaHresultCheckObj();
                              }
                              pppppppcStack_278 = (code *******)0x46a5a7;
                              pppppppcStack_274 = pppppppcVar22;
                              pppppppcStack_278 = (code *******)(*(code *)(*pppppppcVar22)[0xd7])();
                              pppppppcStack_27c = &ppppppcStack_184;
                              pppppppcStack_280 = (code *******)0x46a5ae;
                              pppppppcStack_280 = (code *******)__vbaObjSet();
                              pppppppcStack_278 = (code *******)&pppppppcStack_188;
                              pppppppcStack_27c = (code *******)0x1;
                              pppppppcStack_284 = (code *******)0x46a5c0;
                              pppppppcStack_1f4 = pppppppcStack_280;
                              pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_280)[0x10])();
                              if ((int)pppppppcVar12 < 0) {
                                pppppppcStack_284 = (code *******)0x40;
                                pppppppcStack_288 = (code *******)&DAT_004182e4;
                                pppppppcStack_28c = pppppppcStack_1f4;
                                pppppppcStack_294 = (code *******)0x46a5d7;
                                pppppppcStack_290 = pppppppcVar12;
                                __vbaHresultCheckObj();
                              }
                              pppppppcStack_284 = &ppppppcStack_1d4;
                              pppppppcStack_288 = pppppppcStack_188;
                              pppppppcStack_1fc = pppppppcStack_188;
                              pppppppcStack_28c = (code *******)0x46a5ea;
                              pppppppcVar12 = (code *******)(*(code *)(*pppppppcStack_188)[0x1c])();
                              uVar23 = 0;
                              if ((int)pppppppcVar12 < 0) {
                                pppppppcStack_25c = (code *******)0x70;
                                pppppppcStack_260 = (code *******)&DAT_00417a98;
                                pppppppcStack_264 = pppppppcStack_1fc;
                                pppppppcStack_26c = (code *******)0x46a601;
                                pppppppcStack_268 = pppppppcVar12;
                                __vbaHresultCheckObj();
                              }
                              if ((uVar23 & 0xd) == 0) {
                                pppppppcStack_25c = (code *******)0x46a617;
                                ppppppcVar21 = (code ******)__vbaFpI4();
                                pppppppcVar22[0x34] = ppppppcVar21;
                                pppppppcStack_25c = (code *******)&pppppppcStack_190;
                                pppppppcStack_260 = (code *******)&pppppppcStack_18c;
                                pppppppcStack_264 = (code *******)&pppppppcStack_188;
                                pppppppcStack_268 = &ppppppcStack_184;
                                pppppppcStack_26c = (code *******)0x4;
                                pppppppcStack_270 = (code *******)0x46a635;
                                __vbaFreeObjList();
                                pppppppcStack_260 = (code *******)0x46a641;
                                pppppppcStack_25c = pppppppcVar22;
                                pppppppcStack_260 =
                                     (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
                                pppppppcStack_264 = &ppppppcStack_184;
                                pppppppcStack_268 = (code *******)0x46a648;
                                pppppppcStack_268 = (code *******)__vbaObjSet();
                                pppppppcStack_260 = (code *******)&pppppppcStack_188;
                                pppppppcStack_264 = (code *******)0x0;
                                pppppppcStack_26c = (code *******)0x46a657;
                                pppppppcStack_1e4 = pppppppcStack_268;
                                pppppppcVar12 =
                                     (code *******)(*(code *)(*pppppppcStack_268)[0x10])();
                                if ((int)pppppppcVar12 < 0) {
                                  pppppppcStack_26c = (code *******)0x40;
                                  pppppppcStack_270 = (code *******)&DAT_004182e4;
                                  pppppppcStack_274 = pppppppcStack_1e4;
                                  pppppppcStack_27c = (code *******)0x46a66b;
                                  pppppppcStack_278 = pppppppcVar12;
                                  __vbaHresultCheckObj();
                                }
                                pppppppcStack_26c = &ppppppcStack_1d4;
                                pppppppcStack_270 = pppppppcStack_188;
                                pppppppcStack_1ec = pppppppcStack_188;
                                pppppppcStack_274 = (code *******)0x46a67e;
                                pppppppcVar12 =
                                     (code *******)(*(code *)(*pppppppcStack_188)[0x1c])();
                                if ((int)pppppppcVar12 < 0) {
                                  pppppppcStack_274 = (code *******)0x70;
                                  pppppppcStack_278 = (code *******)&DAT_00418668;
                                  pppppppcStack_27c = pppppppcStack_1ec;
                                  pppppppcStack_284 = (code *******)0x46a695;
                                  pppppppcStack_280 = pppppppcVar12;
                                  __vbaHresultCheckObj();
                                }
                                pppppppcStack_274 = (code *******)0x46a69e;
                                ppppppcVar21 = (code ******)__vbaFpI4();
                                pppppppcVar22[0x35] = ppppppcVar21;
                                pppppppcStack_274 = (code *******)&pppppppcStack_188;
                                pppppppcStack_278 = &ppppppcStack_184;
                                pppppppcStack_27c = (code *******)0x2;
                                pppppppcStack_280 = (code *******)0x46a6b4;
                                __vbaFreeObjList();
                                pppppppcStack_278 = (code *******)0x46a6c0;
                                pppppppcStack_274 = pppppppcVar22;
                                pppppppcStack_278 =
                                     (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
                                pppppppcStack_27c = (code *******)&pppppppcStack_188;
                                pppppppcStack_280 = (code *******)0x46a6c7;
                                pppppppcStack_280 = (code *******)__vbaObjSet();
                                pppppppcStack_278 = (code *******)&pppppppcStack_18c;
                                pppppppcStack_27c = (code *******)0x3;
                                pppppppcStack_284 = (code *******)0x46a6d6;
                                pppppppcStack_1e4 = pppppppcStack_280;
                                pppppppcVar12 =
                                     (code *******)(*(code *)(*pppppppcStack_280)[0x10])();
                                if ((int)pppppppcVar12 < 0) {
                                  pppppppcStack_284 = (code *******)0x40;
                                  pppppppcStack_288 = (code *******)&DAT_004182e4;
                                  pppppppcStack_28c = pppppppcStack_1e4;
                                  pppppppcStack_294 = (code *******)0x46a6ea;
                                  pppppppcStack_290 = pppppppcVar12;
                                  __vbaHresultCheckObj();
                                }
                                pppppppcStack_284 = &ppppppcStack_1d8;
                                pppppppcStack_288 = pppppppcStack_18c;
                                pppppppcStack_1ec = pppppppcStack_18c;
                                pppppppcStack_28c = (code *******)0x46a6fd;
                                pppppppcVar12 =
                                     (code *******)(*(code *)(*pppppppcStack_18c)[0x1c])();
                                if ((int)pppppppcVar12 < 0) {
                                  pppppppcStack_28c = (code *******)0x70;
                                  pppppppcStack_290 = (code *******)&DAT_00418668;
                                  pppppppcStack_294 = pppppppcStack_1ec;
                                  pppppppcStack_29c = (code *******)0x46a714;
                                  pppppppcStack_298 = pppppppcVar12;
                                  __vbaHresultCheckObj();
                                }
                                pppppppcStack_290 = (code *******)0x46a71d;
                                pppppppcStack_28c = pppppppcVar22;
                                pppppppcStack_290 =
                                     (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
                                pppppppcStack_294 = (code *******)&pppppppcStack_190;
                                pppppppcStack_298 = (code *******)0x46a724;
                                pppppppcStack_298 = (code *******)__vbaObjSet();
                                pppppppcStack_290 = (code *******)&pppppppcStack_194;
                                pppppppcStack_294 = (code *******)0x3;
                                pppppppcStack_29c = (code *******)0x46a736;
                                pppppppcStack_1f4 = pppppppcStack_298;
                                pppppppcVar12 =
                                     (code *******)(*(code *)(*pppppppcStack_298)[0x10])();
                                if ((int)pppppppcVar12 < 0) {
                                  pppppppcStack_29c = (code *******)0x40;
                                  pppppppcStack_2a0 = (code *******)&DAT_004182e4;
                                  pppppppcStack_2a4 = pppppppcStack_1f4;
                                  pppppppcStack_2ac = (code *******)0x46a74d;
                                  pppppppcStack_2a8 = pppppppcVar12;
                                  __vbaHresultCheckObj();
                                }
                                pppppppcStack_29c = &ppppppcStack_1dc;
                                pppppppcStack_2a0 = pppppppcStack_194;
                                pppppppcStack_1fc = pppppppcStack_194;
                                pppppppcStack_2a4 = (code *******)0x46a763;
                                ppppppcVar21 = (code ******)(*(code *)(*pppppppcStack_194)[0x20])();
                                if ((int)ppppppcVar21 < 0) {
                                  pppppppcStack_2a4 = (code *******)0x80;
                                  pppppppcStack_2a8 = (code *******)&DAT_00418668;
                                  pppppppcStack_2ac = pppppppcStack_1fc;
                                  uStack_2b8 = (double)CONCAT44(0x46a77d,(undefined4)uStack_2b8);
                                  ppppppcStack_2b0 = ppppppcVar21;
                                  __vbaHresultCheckObj();
                                }
                                pppppppcStack_2a8 = (code *******)0x46a786;
                                pppppppcStack_2a4 = pppppppcVar22;
                                pppppppcStack_2a8 =
                                     (code *******)(*(code *)(*pppppppcVar22)[0xc0])();
                                pppppppcStack_2ac = &ppppppcStack_184;
                                ppppppcStack_2b0 = (code ******)0x46a78d;
                                pppppppcStack_2ac = (code *******)__vbaObjSet();
                                pppppppcStack_2a8 = &ppppppcStack_1d4;
                                ppppppcStack_2b0 = (code ******)0x46a7a0;
                                pppppppcStack_204 = pppppppcStack_2ac;
                                pppppppcVar12 =
                                     (code *******)(*(code *)(*pppppppcStack_2ac)[0x20])();
                                uVar23 = 0;
                                if ((int)pppppppcVar12 < 0) {
                                  pppppppcStack_25c = (code *******)0x80;
                                  pppppppcStack_260 = (code *******)&DAT_0041804c;
                                  pppppppcStack_264 = pppppppcStack_204;
                                  pppppppcStack_26c = (code *******)0x46a7ba;
                                  pppppppcStack_268 = pppppppcVar12;
                                  __vbaHresultCheckObj();
                                }
                                if ((uVar23 & 0xd) == 0) {
                                  pppppppcStack_25c = (code *******)0x46a7d3;
                                  ppppppcVar21 = (code ******)__vbaFpI4();
                                  pppppppcVar22[0x36] = ppppppcVar21;
                                  pppppppcStack_25c = (code *******)&pppppppcStack_194;
                                  pppppppcStack_260 = (code *******)&pppppppcStack_190;
                                  pppppppcStack_264 = (code *******)&pppppppcStack_18c;
                                  pppppppcStack_268 = (code *******)&pppppppcStack_188;
                                  pppppppcStack_26c = &ppppppcStack_184;
                                  pppppppcStack_270 = (code *******)0x5;
                                  pppppppcStack_274 = (code *******)0x46a7f5;
                                  __vbaFreeObjList();
                                  uStack_228 = 2;
                                  ppppppcStack_180 = (code ******)0x0;
                                  ppppppcVar21 = ppppppcStack_180;
                                  do {
                                    ppppppcStack_180 = ppppppcVar21;
                                    if ((short)uStack_228 < (short)ppppppcStack_180) {
                                      return;
                                    }
                                    pppppppcStack_260 = (code *******)0x46a823;
                                    pppppppcStack_25c = pppppppcVar22;
                                    pppppppcStack_260 =
                                         (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
                                    pppppppcStack_264 = (code *******)&pppppppcStack_18c;
                                    pppppppcStack_268 = (code *******)0x46a82a;
                                    pppppppcVar12 = (code *******)(*pcVar20)();
                                    pppppppcStack_268 = (code *******)&pppppppcStack_190;
                                    pppppppcStack_26c = (code *******)ppppppcStack_180;
                                    pppppppcStack_274 = (code *******)0x46a83a;
                                    pppppppcStack_270 = pppppppcVar12;
                                    pppppppcVar13 =
                                         (code *******)(*(code *)(*pppppppcVar12)[0x10])();
                                    if ((int)pppppppcVar13 < 0) {
                                      pppppppcStack_274 = (code *******)0x40;
                                      pppppppcStack_278 = (code *******)&DAT_004182e4;
                                      pppppppcStack_284 = (code *******)0x46a84b;
                                      pppppppcStack_280 = pppppppcVar13;
                                      pppppppcStack_27c = pppppppcVar12;
                                      __vbaHresultCheckObj();
                                    }
                                    pppppppcVar12 = pppppppcStack_190;
                                    pppppppcStack_274 = &ppppppcStack_1d8;
                                    pppppppcStack_278 = pppppppcStack_190;
                                    pppppppcStack_27c = (code *******)0x46a85a;
                                    pppppppcVar13 =
                                         (code *******)(*(code *)(*pppppppcStack_190)[0x1c])();
                                    if ((int)pppppppcVar13 < 0) {
                                      pppppppcStack_27c = (code *******)0x70;
                                      pppppppcStack_280 = (code *******)&DAT_00418668;
                                      pppppppcStack_284 = pppppppcVar12;
                                      pppppppcStack_28c = (code *******)0x46a86b;
                                      pppppppcStack_288 = pppppppcVar13;
                                      __vbaHresultCheckObj();
                                    }
                                    pppppppcStack_280 = (code *******)0x46a874;
                                    pppppppcStack_27c = pppppppcVar22;
                                    pppppppcStack_258 =
                                         (code *******)(*(code *)(*pppppppcVar22)[0xc1])();
                                    pppppppcStack_25c = &ppppppcStack_184;
                                    pppppppcStack_260 = (code *******)0x46a87f;
                                    pppppppcStack_5bc = (code *******)__vbaObjSet();
                                    pppppppcStack_258 = (code *******)&pppppppcStack_188;
                                    pppppppcStack_25c =
                                         (code *******)
                                         CONCAT22(extraout_var,(short)ppppppcStack_180 + 1);
                                    if (SCARRY2((short)ppppppcStack_180,1)) break;
                                    pppppppcStack_264 = (code *******)0x46a89a;
                                    pppppppcStack_260 = pppppppcStack_5bc;
                                    pppppppcVar12 =
                                         (code *******)(*(code *)(*pppppppcStack_5bc)[0x10])();
                                    if ((int)pppppppcVar12 < 0) {
                                      pppppppcStack_264 = (code *******)0x40;
                                      pppppppcStack_268 = (code *******)&DAT_004182e4;
                                      pppppppcStack_274 = (code *******)0x46a8ab;
                                      pppppppcStack_270 = pppppppcVar12;
                                      pppppppcStack_26c = pppppppcStack_5bc;
                                      __vbaHresultCheckObj();
                                    }
                                    pppppppcVar12 = pppppppcStack_188;
                                    pppppppcStack_264 = &ppppppcStack_1d4;
                                    pppppppcStack_268 = pppppppcStack_188;
                                    pppppppcStack_26c = (code *******)0x46a8ba;
                                    pppppppcVar13 =
                                         (code *******)(*(code *)(*pppppppcStack_188)[0x1c])();
                                    uVar23 = 0;
                                    if ((int)pppppppcVar13 < 0) {
                                      pppppppcStack_25c = (code *******)0x70;
                                      pppppppcStack_260 = (code *******)&DAT_00418668;
                                      pppppppcStack_264 = pppppppcVar12;
                                      pppppppcStack_26c = (code *******)0x46a8cb;
                                      pppppppcStack_268 = pppppppcVar13;
                                      __vbaHresultCheckObj();
                                    }
                                    uVar19 = (ushort)ppppppcStack_180;
                                    if (2 < uVar19) {
                                      pppppppcStack_25c = (code *******)0x46a8dc;
                                      __vbaGenerateBoundsError();
                                    }
                                    if ((uVar23 & 0xd) != 0) goto LAB_0046a995;
                                    pppppppcStack_25c = (code *******)0x46a8f2;
                                    pppppcVar8 = (code *****)__vbaFpI4();
                                    pppppppcVar22[0x3b][(short)uVar19] = pppppcVar8;
                                    pppppppcStack_25c = (code *******)&pppppppcStack_190;
                                    pppppppcStack_260 = (code *******)&pppppppcStack_18c;
                                    pppppppcStack_264 = (code *******)&pppppppcStack_188;
                                    pppppppcStack_268 = &ppppppcStack_184;
                                    pppppppcStack_26c = (code *******)0x4;
                                    pppppppcStack_270 = (code *******)0x46a916;
                                    __vbaFreeObjList();
                                    pppppppcStack_5bc = (code *******)__vbaObjSet_exref;
                                    pcVar20 = __vbaObjSet_exref;
                                    ppppppcVar21 = (code ******)(uint)(ushort)(uVar19 + 1);
                                  } while (!SCARRY2(uVar19,1));
                                  pppppppcStack_25c = (code *******)0x46a9a0;
                                  __vbaErrorOverflow();
                                  pppppppcStack_268 = (code *******)&LAB_004032d6;
                                  pppppppcStack_26c = ExceptionList;
                                  pppppppcStack_264 = (code *******)&pcStack_5c4;
                                  pcStack_5c4 = pcVar18;
                                  pppppppcStack_260 = (code *******)&DAT_00402c18;
                                  pppppppcStack_25c = (code *******)((uint)pppppppcStack_250 & 1);
                                  pppppppcVar12 =
                                       (code *******)((uint)pppppppcStack_250 & 0xfffffffe);
                                  ExceptionList = &pppppppcStack_26c;
                                  pppppppcStack_5c0 = pppppppcVar22;
                                  pppppppcStack_258 = &ppppppcStack_168;
                                  pppppppcStack_250 = pppppppcVar12;
                                  (*(code *)(*pppppppcVar12)[1])();
                                  pppppppcStack_294 = (code *******)0x0;
                                  pppppppcStack_298 = (code *******)0x0;
                                  pppppppcStack_29c = (code *******)0x0;
                                  pppppppcStack_2a0 = (code *******)0x0;
                                  ppppppcStack_2b0 = (code ******)0x0;
                                  ppppppcStack_2c0 = (code ******)0x0;
                                  appppppcStack_2d0[0] = (code ******)0x0;
                                  appppppcStack_2e0[0] = (code ******)0x0;
                                  uStack_2f0 = 0;
                                  uStack_320 = 0;
                                  apppppppcStack_334[0] = (code *******)0x0;
                                  ppppppcStack_338 = (code ******)0x0;
                                  ppppppcStack_33c = (code ******)0x0;
                                  apppppppcStack_364[0] = (code *******)0x0;
                                  pppppppcStack_368 = (code *******)0x0;
                                  piStack_36c = (int *)0x0;
                                  piStack_370 = (int *)0x0;
                                  piStack_374 = (int *)0x0;
                                  pppppppcStack_378 = (code *******)0x0;
                                  pppppppcStack_37c = (code *******)0x0;
                                  pppppppcStack_380 = (code *******)0x0;
                                  pppppppcStack_384 = (code *******)0x0;
                                  pppppppcStack_388 = (code *******)0x0;
                                  if (pppppppcVar12[0x29] == (code ******)0x0) {
LAB_0046df9a:
                                    pppppppcStack_25c = (code *******)0x0;
                                    __vbaFreeObjList();
                                    return;
                                  }
                                  (*(code *)(*pppppppcVar12)[0xc0])();
                                  piVar14 = (int *)__vbaObjSet();
                                  iVar7 = (**(code **)(*piVar14 + 0x98))();
                                  if (iVar7 < 0) {
                                    __vbaHresultCheckObj();
                                  }
                                  pppppppcStack_270 = apppppppcStack_334[0];
                                  __vbaFreeObj();
                                  (*(code *)(*pppppppcVar12)[0xc0])();
                                  piVar14 = (int *)__vbaObjSet();
                                  iVar7 = (**(code **)(*piVar14 + 0x9c))();
                                  if (iVar7 < 0) {
                                    __vbaHresultCheckObj();
                                  }
                                  __vbaFreeObj();
                                  iVar7 = (*(code *)(*pppppppcVar12)[0x22])();
                                  uVar23 = 0;
                                  if (iVar7 < 0) {
                                    __vbaHresultCheckObj();
                                  }
                                  (*(code *)(*pppppppcVar12)[0xc0])();
                                  pppppppcVar22 = (code *******)__vbaObjSet();
                                  dStack_454 = (double)(int)pppppppcVar12[0x29];
                                  appppppcStack_2d0[0] = (code ******)0x1;
                                  pppppppcStack_2a8 = (code *******)0x1;
                                  uStack_2b8 = (double)((float)ppppppcStack_338 -
                                                       (float)(int)pppppppcVar12[0x29]);
                                  if ((uVar23 & 0xd) == 0) {
                                    ppppppcStack_2c0 = (code ******)0x5;
                                    ppppppcStack_2b0 = (code ******)0x2;
                                    pppppppcStack_344 = pppppppcVar22;
                                    FUN_00441030(appppppcStack_2e0,&ppppppcStack_2b0,
                                                 &ppppppcStack_2c0,appppppcStack_2d0);
                                    ppppppcVar21 = *pppppppcVar22;
                                    pppppppcStack_604 = (code *******)0x46aba5;
                                    fVar24 = (float10)__vbaR4Var();
                                    pppppppcVar22 = pppppppcStack_344;
                                    pppppppcStack_604 = (code *******)(float)fVar24;
                                    pppppppcStack_608 = pppppppcStack_344;
                                    pppppppcStack_60c = (code *******)0x46abb8;
                                    pppppppcVar13 = (code *******)(*(code *)ppppppcVar21[0x23])();
                                    if ((int)pppppppcVar13 < 0) {
                                      pppppppcStack_60c = (code *******)0x8c;
                                      pppppppcStack_610 = (code *******)&DAT_0041804c;
                                      pppppppcStack_614 = pppppppcVar22;
                                      pppppppcStack_618 = pppppppcVar13;
                                      __vbaHresultCheckObj();
                                    }
                                    pppppppcStack_60c = (code *******)0x46abd5;
                                    __vbaFreeObj();
                                    pppppppcStack_60c = appppppcStack_2e0;
                                    pppppppcStack_610 = appppppcStack_2d0;
                                    pppppppcStack_614 = &ppppppcStack_2c0;
                                    pppppppcStack_618 = &ppppppcStack_2b0;
                                    __vbaFreeVarList();
                                    pppppppcStack_60c = &ppppppcStack_338;
                                    pppppppcStack_614 = (code *******)0x46ac03;
                                    pppppppcStack_610 = pppppppcVar12;
                                    iVar7 = (*(code *)(*pppppppcVar12)[0x20])();
                                    uVar23 = 0;
                                    if (iVar7 < 0) {
                                      pppppppcStack_614 = (code *******)0x80;
                                      pppppppcStack_618 = (code *******)&DAT_0041708c;
                                      __vbaHresultCheckObj();
                                    }
                                    pppppppcStack_618 = (code *******)0x46ac20;
                                    pppppppcStack_614 = pppppppcVar12;
                                    (*(code *)(*pppppppcVar12)[0xc0])();
                                    pppppppcVar22 = (code *******)__vbaObjSet();
                                    dStack_460 = (double)(int)pppppppcVar12[0x2a];
                                    appppppcStack_2d0[0] = (code ******)0x1;
                                    pppppppcStack_2a8 = (code *******)0x1;
                                    uStack_2b8 = (double)((float)ppppppcStack_338 -
                                                         (float)(int)pppppppcVar12[0x2a]);
                                    if ((uVar23 & 0xd) == 0) {
                                      ppppppcStack_2c0 = (code ******)0x5;
                                      ppppppcStack_2b0 = (code ******)0x2;
                                      pppppppcStack_344 = pppppppcVar22;
                                      FUN_00441030(appppppcStack_2e0,&ppppppcStack_2b0,
                                                   &ppppppcStack_2c0,appppppcStack_2d0);
                                      ppppppcVar21 = *pppppppcVar22;
                                      __vbaR4Var();
                                      pppppppcVar22 = pppppppcStack_344;
                                      pppppppcStack_604 = pppppppcStack_344;
                                      pppppppcStack_608 = (code *******)0x46acab;
                                      pppppppcVar13 = (code *******)(*(code *)ppppppcVar21[0x21])();
                                      if ((int)pppppppcVar13 < 0) {
                                        pppppppcStack_608 = (code *******)0x84;
                                        pppppppcStack_60c = (code *******)&DAT_0041804c;
                                        pppppppcStack_610 = pppppppcVar22;
                                        pppppppcStack_618 = (code *******)0x46acbf;
                                        pppppppcStack_614 = pppppppcVar13;
                                        __vbaHresultCheckObj();
                                      }
                                      pppppppcStack_608 = (code *******)0x46acc8;
                                      __vbaFreeObj();
                                      pppppppcStack_608 = appppppcStack_2e0;
                                      pppppppcStack_60c = appppppcStack_2d0;
                                      pppppppcStack_610 = &ppppppcStack_2c0;
                                      pppppppcStack_614 = &ppppppcStack_2b0;
                                      pppppppcStack_618 = (code *******)0x4;
                                      __vbaFreeVarList();
                                      pppppppcStack_608 = &ppppppcStack_338;
                                      pppppppcStack_610 = (code *******)0x46acf6;
                                      pppppppcStack_60c = pppppppcVar12;
                                      iVar7 = (*(code *)(*pppppppcVar12)[0x20])();
                                      uVar23 = 0;
                                      if (iVar7 < 0) {
                                        __vbaHresultCheckObj();
                                      }
                                      dStack_46c = (double)(int)pppppppcVar12[0x2b];
                                      appppppcStack_2d0[0] = (code ******)0x1;
                                      pppppppcStack_2a8 = (code *******)0x1;
                                      ppppppcStack_2c0 = (code ******)0x5;
                                      uStack_2b8 = (double)((float)ppppppcStack_338 -
                                                           (float)(int)pppppppcVar12[0x2b]);
                                      if ((uVar23 & 0xd) == 0) {
                                        ppppppcStack_2b0 = (code ******)0x2;
                                        FUN_00441030(appppppcStack_2e0,&ppppppcStack_2b0,
                                                     &ppppppcStack_2c0,appppppcStack_2d0);
                                        fVar24 = (float10)__vbaR4Var();
                                        pppppppcStack_604 = (code *******)(float)fVar24;
                                        pppppppcStack_610 = (code *******)0x80010005;
                                        pppppppcStack_60c = (code *******)0x4;
                                        pppppppcStack_608 = pppppppcStack_31c;
                                        pppppppcStack_618 = (code *******)0x46ada8;
                                        pppppppcStack_614 = pppppppcVar12;
                                        pppppppcStack_318 = pppppppcStack_604;
                                        pppppppcStack_618 =
                                             (code *******)(*(code *)(*pppppppcVar12)[0xe2])();
                                        pcVar18 = __vbaObjSet_exref;
                                        pppppppcStack_618 = (code *******)__vbaObjSet();
                                        __vbaLateIdSt();
                                        pppppppcStack_604 = (code *******)0x46adc5;
                                        __vbaFreeObj();
                                        pppppppcStack_604 = appppppcStack_2e0;
                                        pppppppcStack_608 = appppppcStack_2d0;
                                        pppppppcStack_60c = &ppppppcStack_2c0;
                                        pppppppcStack_610 = &ppppppcStack_2b0;
                                        pppppppcStack_614 = (code *******)0x4;
                                        pppppppcStack_618 = (code *******)0x46ade0;
                                        __vbaFreeVarList();
                                        pppppppcStack_284 = (code *******)0x0;
                                        pppppppcVar22 = pppppppcStack_284;
                                        do {
                                          pppppppcStack_284 = pppppppcVar22;
                                          pppppppcStack_604 = pppppppcVar12;
                                          if (3 < (short)pppppppcStack_284) {
                                            pppppppcStack_608 = (code *******)0x46af54;
                                            pppppppcStack_608 =
                                                 (code *******)(*(code *)(*pppppppcVar12)[0xc1])();
                                            pppppppcStack_60c = (code *******)&pppppppcStack_294;
                                            pppppppcStack_610 = (code *******)0x46af5b;
                                            pppppppcStack_618 = (code *******)(*pcVar18)();
                                            pppppppcStack_610 = (code *******)&pppppppcStack_298;
                                            pppppppcStack_614 = (code *******)0x0;
                                            pppppppcStack_340 = pppppppcStack_618;
                                            iVar7 = (*(code *)(*pppppppcStack_618)[0x10])();
                                            if (iVar7 < 0) {
                                              __vbaHresultCheckObj();
                                            }
                                            pppppppcStack_348 = pppppppcStack_298;
                                            iVar7 = (*(code *)(*pppppppcStack_298)[0x22])();
                                            uVar23 = 0;
                                            if (iVar7 < 0) {
                                              __vbaHresultCheckObj();
                                            }
                                            dStack_480 = (double)(int)pppppppcVar12[0x2d];
                                            appppppcStack_2d0[0] = (code ******)0x1;
                                            pppppppcStack_2a8 = (code *******)0x1;
                                            ppppppcVar21 = (code ******)&ppppppcStack_2b0;
                                            ppppppcStack_2c0 = (code ******)0x5;
                                            uStack_2b8 = (double)((float)ppppppcStack_338 -
                                                                 (float)(int)pppppppcVar12[0x2d]);
                                            if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
                                            pppppppcVar13 = &ppppppcStack_2c0;
                                            ppppppcStack_2b0 = (code ******)0x2;
                                            FUN_00441030(appppppcStack_2e0,ppppppcVar21,
                                                         pppppppcVar13,appppppcStack_2d0);
                                            pppppppcStack_604 = (code *******)0x46b01a;
                                            fVar24 = (float10)__vbaR4Var();
                                            pppppppcStack_608 = (code *******)(float)fVar24;
                                            pppppppcStack_614 = (code *******)0x80010006;
                                            pppppppcStack_610 = (code *******)0x4;
                                            pppppppcStack_60c = pppppppcStack_31c;
                                            pppppppcStack_604 = (code *******)uStack_314;
                                            pppppppcStack_618 = pppppppcVar12;
                                            pppppppcStack_318 = pppppppcStack_608;
                                            (*(code *)(*pppppppcVar12)[0xe5])();
                                            (*pcVar18)();
                                            __vbaLateIdSt();
                                            pppppppcStack_610 = (code *******)&pppppppcStack_29c;
                                            pppppppcStack_614 = (code *******)&pppppppcStack_298;
                                            pppppppcStack_618 = (code *******)&pppppppcStack_294;
                                            __vbaFreeObjList();
                                            __vbaFreeVarList(4);
                                            pppppppcStack_614 = (code *******)0x46b09e;
                                            pppppppcStack_610 = pppppppcVar12;
                                            pppppppcStack_614 =
                                                 (code *******)(*(code *)(*pppppppcVar12)[0xd6])();
                                            pppppppcStack_618 = (code *******)&pppppppcStack_294;
                                            pppppppcStack_340 = (code *******)(*pcVar18)();
                                            iVar7 = (*(code *)(*pppppppcStack_340)[0x10])();
                                            if (iVar7 < 0) {
                                              __vbaHresultCheckObj(iVar7,pppppppcStack_340);
                                            }
                                            pppppppcStack_348 = pppppppcStack_298;
                                            iVar7 = (*(code *)(*pppppppcStack_298)[0x1e])();
                                            if (iVar7 < 0) {
                                              __vbaHresultCheckObj
                                                        (iVar7,pppppppcStack_348,&DAT_0041807c,0x78)
                                              ;
                                            }
                                            pppppppcStack_274 = (code *******)__vbaFpI4();
                                            __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_298
                                                            );
                                            sStack_398 = *(short *)((int)pppppppcVar12 + 0x9e);
                                            uVar15 = (*(code *)(*pppppppcVar12)[0xe4])
                                                               (pppppppcVar12,0,0);
                                            uVar15 = (*pcVar18)(&pppppppcStack_294,uVar15);
                                            uVar15 = __vbaLateIdCallLd(&ppppppcStack_2b0,uVar15);
                                            iVar7 = __vbaI4Var(uVar15);
                                            if (!SCARRY4(iVar7,1)) {
                                              pppppppcStack_60c = (code *******)0x46b165;
                                              pppppppcStack_284 = (code *******)__vbaI2I4();
                                              pppppppcStack_608 = (code *******)0x46b171;
                                              __vbaFreeObj();
                                              pppppppcStack_608 = (code *******)0x46b17a;
                                              __vbaFreeVar();
                                              pppppppcVar22 = pppppppcStack_284;
                                              goto LAB_0046b17a;
                                            }
                                            break;
                                          }
                                          pppppppcStack_608 = (code *******)0x46ae02;
                                          pppppppcStack_608 =
                                               (code *******)(*(code *)(*pppppppcVar12)[0xc0])();
                                          pppppppcStack_60c = (code *******)&pppppppcStack_294;
                                          pppppppcStack_610 = (code *******)0x46ae09;
                                          pppppppcStack_614 = (code *******)(*pcVar18)();
                                          pppppppcStack_610 = &ppppppcStack_338;
                                          pppppppcStack_618 = (code *******)0x46ae1f;
                                          pppppppcStack_340 = pppppppcStack_614;
                                          iVar7 = (*(code *)(*pppppppcStack_614)[0x22])();
                                          if (iVar7 < 0) {
                                            pppppppcStack_618 = (code *******)0x88;
                                            __vbaHresultCheckObj();
                                          }
                                          pppppppcStack_618 = pppppppcVar12;
                                          (*(code *)(*pppppppcVar12)[0xc1])();
                                          piVar14 = (int *)(*pcVar18)();
                                          iVar7 = (**(code **)(*piVar14 + 0x40))();
                                          uVar23 = 0;
                                          if (iVar7 < 0) {
                                            __vbaHresultCheckObj();
                                          }
                                          pppppppcVar22 = pppppppcStack_29c;
                                          dStack_474 = (double)(int)pppppppcVar12[0x2c];
                                          appppppcStack_2d0[0] = (code ******)0x1;
                                          pppppppcStack_2a8 = (code *******)0x1;
                                          ppppppcVar21 = (code ******)&ppppppcStack_2b0;
                                          uStack_2b8 = (double)((float)ppppppcStack_338 -
                                                               (float)(int)pppppppcVar12[0x2c]);
                                          if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
                                          pppppppcVar13 = &ppppppcStack_2c0;
                                          pppppppcStack_350 = pppppppcStack_29c;
                                          ppppppcStack_2c0 = (code ******)0x5;
                                          ppppppcStack_2b0 = (code ******)0x2;
                                          FUN_00441030(appppppcStack_2e0,ppppppcVar21,pppppppcVar13,
                                                       appppppcStack_2d0);
                                          ppppppcVar9 = *pppppppcVar22;
                                          pppppppcStack_604 = (code *******)0x46aed8;
                                          fVar24 = (float10)__vbaR4Var();
                                          pppppppcVar22 = pppppppcStack_350;
                                          pppppppcStack_604 = (code *******)(float)fVar24;
                                          pppppppcStack_608 = pppppppcStack_350;
                                          pppppppcStack_60c = (code *******)0x46aeeb;
                                          pppppppcStack_610 =
                                               (code *******)(*(code *)ppppppcVar9[0x23])();
                                          if ((int)pppppppcStack_610 < 0) {
                                            pppppppcStack_604 = (code *******)0x8c;
                                            pppppppcStack_608 = (code *******)&DAT_00418668;
                                            pppppppcStack_60c = pppppppcVar22;
                                            pppppppcStack_614 = (code *******)0x46aeff;
                                            __vbaHresultCheckObj();
                                          }
                                          pppppppcStack_604 = (code *******)&pppppppcStack_29c;
                                          pppppppcStack_608 = (code *******)&pppppppcStack_298;
                                          pppppppcStack_60c = (code *******)&pppppppcStack_294;
                                          pppppppcStack_610 = (code *******)0x3;
                                          pppppppcStack_614 = (code *******)0x46af13;
                                          __vbaFreeObjList();
                                          pppppppcStack_614 = appppppcStack_2e0;
                                          pppppppcStack_618 = appppppcStack_2d0;
                                          __vbaFreeVarList();
                                          pcVar18 = __vbaObjSet_exref;
                                          pppppppcVar22 =
                                               (code *******)
                                               (uint)(ushort)((short)pppppppcStack_284 + 1);
                                        } while (!SCARRY2((short)pppppppcStack_284,1));
                                        goto LAB_0046e052;
                                      }
                                    }
                                  }
LAB_0046e04d:
                                  __vbaFPException();
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0046a995:
        __vbaFPException();
        return;
      }
      local_50 = 1;
      local_68[0] = (code *****)0x3;
      local_58[0] = (code *****)0x2;
      pppppcStack_17c = (code *****)0x469318;
      FUN_00441030(local_88,local_58,local_68,local_78);
      pppppcStack_17c = (code *****)&DAT_00417d34;
      ppppppcStack_180 = (code ******)0x0;
      ppppppcStack_184 = (code ******)0x7;
      pppppppcStack_18c = (code *******)0x46932a;
      pppppppcStack_188 = (code *******)ppppppcVar21;
      pppppppcStack_18c = (code *******)(*(code *)(*ppppppcVar21)[0xe5])();
      pppppppcStack_190 = (code *******)&local_24;
      pppppppcStack_194 = (code *******)0x469331;
      pppppppcStack_18c = (code *******)__vbaObjSet();
      pppppppcStack_190 = (code *******)local_98;
      pppppppcStack_194 = (code *******)0x46933f;
      ppppppcStack_184 = (code ******)__vbaLateIdCallLd();
      pppppppcStack_188 = (code *******)0x469349;
      ppppppcStack_180 = (code ******)__vbaCastObjVar();
      ppppppcStack_184 = &local_28;
      pppppppcStack_188 = (code *******)0x469350;
      ppppppcVar9 = (code ******)__vbaObjSet();
      ppppppcStack_180 = &local_2c;
      ppppppcStack_184 = local_88;
      pppppppcStack_18c = (code *******)0x469363;
      pppppppcStack_188 = (code *******)ppppppcVar9;
      ppppppcVar10 = (code ******)(*(code *)(*ppppppcVar9)[9])();
      if ((int)ppppppcVar10 < 0) {
        pppppppcStack_18c = (code *******)0x24;
        pppppppcStack_190 = (code *******)&DAT_00417d34;
        ppppppcStack_19c = (code ******)0x469378;
        pppppppcStack_198 = (code *******)ppppppcVar10;
        pppppppcStack_194 = (code *******)ppppppcVar9;
        __vbaHresultCheckObj();
      }
      local_a0 = local_2c;
      pppppppcStack_18c = (code *******)local_a8;
      local_2c = (code *****)0x0;
      local_a8[0] = (code *****)0x9;
      pppppppcStack_190 = (code *******)0x46939f;
      puVar11 = (undefined4 *)__vbaVerifyVarObj();
      pppppppcStack_198 = (code *******)*puVar11;
      ppppppcStack_19c = (code ******)0x0;
      pppppppcStack_1a0 = (code *******)0xd;
      pppppppcStack_194 = (code *******)puVar11[1];
      pppppppcStack_190 = (code *******)puVar11[2];
      pppppppcStack_18c = (code *******)puVar11[3];
      uStack_1a8 = 0x4693c7;
      ppppppcStack_1a4 = ppppppcVar21;
      uStack_1a8 = (*(code *)(*ppppppcVar21)[0xe5])();
      pppppcStack_1ac = (code *****)&local_30;
      ppppppcStack_1b0 = (code ******)0x4693ce;
      uStack_1a8 = __vbaObjSet();
      pppppcStack_1ac = (code *****)0x4693d5;
      __vbaLateIdStAd();
      pppppcStack_1ac = (code *****)&local_30;
      ppppppcStack_1b0 = &local_28;
      pppppcStack_1b4 = (code *****)&local_24;
      pppppcStack_1b8 = (code *****)&local_20;
      pppppcStack_1bc = &local_1c;
      pppppcStack_1c0 = (code *****)0x5;
      pppppcStack_1c4 = (code *****)0x4693f3;
      __vbaFreeObjList();
      pppppcStack_1c4 = (code *****)local_a8;
      pppppcStack_1c8 = (code *****)local_88;
      pppppcStack_1cc = (code *****)local_98;
      pppppcStack_1d0 = (code *****)local_78;
      ppppppcStack_1d4 = local_68;
      ppppppcStack_1d8 = local_58;
      ppppppcStack_1dc = local_48;
      pppppcStack_1e0 = (code *****)0x7;
      pppppppcStack_1e4 = (code *******)0x469420;
      __vbaFreeVarList();
      pppppppcStack_190 = (code *******)&DAT_00417d44;
      pppppppcStack_194 = (code *******)0x0;
      pppppppcStack_198 = (code *******)0xd;
      pppppppcStack_1a0 = (code *******)0x469435;
      ppppppcStack_19c = ppppppcVar21;
      pppppppcStack_1a0 = (code *******)(*(code *)(*ppppppcVar21)[0xe5])();
      ppppppcStack_1a4 = (code ******)&local_1c;
      uStack_1a8 = 0x46943c;
      pppppppcStack_1a0 = (code *******)__vbaObjSet();
      ppppppcStack_1a4 = local_48;
      uStack_1a8 = 0x469447;
      pppppppcStack_198 = (code *******)__vbaLateIdCallLd();
      ppppppcStack_19c = (code ******)0x469451;
      pppppppcStack_194 = (code *******)__vbaCastObjVar();
      pppppppcStack_198 = (code *******)&local_20;
      ppppppcStack_19c = (code ******)0x469458;
      __vbaObjSet();
      pppppppcStack_194 = (code *******)&local_20;
      ppppppcStack_19c = (code ******)0x469465;
      pppppppcStack_198 = (code *******)ppppppcVar21;
      (*(code *)(*ppppppcVar21)[0x1c1])();
      pppppcStack_158 = (code *****)&local_20;
      pppppcStack_15c = &local_1c;
      pppppppcStack_160 = (code *******)0x2;
      ppppppcStack_164 = (code ******)0x469471;
      __vbaFreeObjList();
    }
    else {
      pppppcStack_158 = (code *****)0x469481;
      sVar4 = __vbaI2I4();
      if (sVar2 != sVar4) goto LAB_00469795;
      ppppppcStack_154 = (code ******)&DAT_00417d44;
      pppppcStack_158 = (code *****)0x0;
      pppppcStack_15c = (code *****)0xd;
      ppppppcStack_164 = (code ******)0x46949f;
      pppppppcStack_160 = (code *******)ppppppcVar21;
      ppppppcStack_164 = (code ******)(*(code *)(*ppppppcVar21)[0xe5])();
      ppppppcStack_168 = (code ******)&local_1c;
      ppppppcStack_164 = (code ******)__vbaObjSet();
      ppppppcStack_168 = local_48;
      pppppcStack_15c = (code *****)__vbaLateIdCallLd();
      pppppppcStack_160 = (code *******)0x4694bd;
      pppppcStack_158 = (code *****)__vbaCastObjVar();
      pppppcStack_15c = (code *****)&local_20;
      pppppppcStack_160 = (code *******)0x4694c4;
      pppppcVar8 = (code *****)__vbaObjSet();
      pppppcStack_158 = (code *****)-(*param_3 & 1);
      pppppppcStack_160 = (code *******)0x4694db;
      pppppcStack_15c = pppppcVar8;
      iVar7 = (*(code *)(*pppppcVar8)[0x18])();
      if (iVar7 < 0) {
        pppppppcStack_160 = (code *******)0x60;
        ppppppcStack_164 = (code ******)&DAT_00417d44;
        ppppppcStack_168 = (code ******)pppppcVar8;
        __vbaHresultCheckObj();
      }
      pppppppcStack_160 = (code *******)&local_20;
      ppppppcStack_164 = (code ******)&local_1c;
      ppppppcStack_168 = (code ******)0x2;
      __vbaFreeObjList();
      pppppppcStack_160 = (code *******)0x469512;
      __vbaFreeVar();
      pppppcStack_15c = (code *****)&DAT_00417d34;
      pppppppcStack_160 = (code *******)0x0;
      ppppppcStack_164 = (code ******)0x7;
      ppppppcStack_168 = ppppppcVar21;
      (*(code *)(*ppppppcVar21)[0xe5])();
      __vbaObjSet();
      ppppppcStack_164 = (code ******)__vbaLateIdCallLd();
      ppppppcStack_168 = (code ******)0x46953c;
      pppppppcStack_160 = (code *******)__vbaCastObjVar();
      ppppppcStack_164 = &local_20;
      ppppppcStack_168 = (code ******)0x469543;
      ppppppcStack_164 = (code ******)__vbaObjSet();
      pppppppcStack_160 = (code *******)&local_100;
      ppppppcStack_168 = (code ******)0x469556;
      iVar7 = (**(code **)((int)*ppppppcStack_164 + 0x1c))();
      if (iVar7 < 0) {
        ppppppcStack_168 = (code ******)0x1c;
        __vbaHresultCheckObj();
      }
      ppppppcStack_168 = (code ******)&DAT_00417d44;
      (*(code *)(*ppppppcVar21)[0xe5])();
      pppppcStack_17c = (code *****)&local_24;
      ppppppcStack_180 = (code ******)0x46958a;
      __vbaObjSet();
      pppppcStack_17c = (code *****)local_58;
      ppppppcStack_180 = (code ******)0x469591;
      __vbaLateIdCallLd();
      __vbaCastObjVar();
      piVar14 = (int *)__vbaObjSet();
      iVar7 = (**(code **)(*piVar14 + 0x44))();
      if (iVar7 < 0) {
        pppppcStack_17c = (code *****)0x4695d0;
        __vbaHresultCheckObj();
      }
      local_70 = 1;
      local_78[0] = (code *****)0x3;
      local_68[0] = (code *****)0x3;
      local_60 = local_100;
      local_88[0] = (code *****)0x1;
      pppppcStack_17c = (code *****)0x46961b;
      FUN_00440ed0(local_98,local_68,local_78,local_88);
      pppppcStack_17c = (code *****)&DAT_00417d34;
      ppppppcStack_180 = (code ******)0x0;
      ppppppcStack_184 = (code ******)0x7;
      pppppppcStack_18c = (code *******)0x46962d;
      pppppppcStack_188 = (code *******)ppppppcVar21;
      pppppppcStack_18c = (code *******)(*(code *)(*ppppppcVar21)[0xe5])();
      pppppppcStack_190 = (code *******)&local_2c;
      pppppppcStack_194 = (code *******)0x469634;
      pppppppcStack_18c = (code *******)__vbaObjSet();
      pppppppcStack_190 = (code *******)local_a8;
      pppppppcStack_194 = (code *******)0x46963e;
      ppppppcStack_184 = (code ******)__vbaLateIdCallLd();
      pppppppcStack_188 = (code *******)0x469648;
      ppppppcStack_180 = (code ******)__vbaCastObjVar();
      ppppppcStack_184 = &local_30;
      pppppppcStack_188 = (code *******)0x46964f;
      ppppppcVar9 = (code ******)__vbaObjSet();
      ppppppcStack_180 = &local_34;
      ppppppcStack_184 = local_98;
      pppppppcStack_18c = (code *******)0x469666;
      pppppppcStack_188 = (code *******)ppppppcVar9;
      ppppppcVar10 = (code ******)(*(code *)(*ppppppcVar9)[9])();
      if ((int)ppppppcVar10 < 0) {
        pppppppcStack_18c = (code *******)0x24;
        pppppppcStack_190 = (code *******)&DAT_00417d34;
        ppppppcStack_19c = (code ******)0x469681;
        pppppppcStack_198 = (code *******)ppppppcVar10;
        pppppppcStack_194 = (code *******)ppppppcVar9;
        __vbaHresultCheckObj();
      }
      local_b0 = local_34;
      pppppppcStack_18c = (code *******)local_b8;
      local_34 = (code *****)0x0;
      local_b8[0] = (code *****)0x9;
      pppppppcStack_190 = (code *******)0x4696a8;
      puVar11 = (undefined4 *)__vbaVerifyVarObj();
      pppppppcStack_198 = (code *******)*puVar11;
      ppppppcStack_19c = (code ******)0x0;
      pppppppcStack_1a0 = (code *******)0xd;
      pppppppcStack_194 = (code *******)puVar11[1];
      pppppppcStack_190 = (code *******)puVar11[2];
      pppppppcStack_18c = (code *******)puVar11[3];
      uStack_1a8 = 0x4696d0;
      ppppppcStack_1a4 = ppppppcVar21;
      uStack_1a8 = (*(code *)(*ppppppcVar21)[0xe5])();
      pppppcStack_1ac = &local_38;
      ppppppcStack_1b0 = (code ******)0x4696d7;
      uStack_1a8 = __vbaObjSet();
      pppppcStack_1ac = (code *****)0x4696de;
      __vbaLateIdStAd();
      pppppcStack_1ac = &local_38;
      ppppppcStack_1b0 = &local_30;
      pppppcStack_1b4 = (code *****)&local_2c;
      pppppcStack_1b8 = (code *****)&local_28;
      pppppcStack_1bc = (code *****)&local_24;
      pppppcStack_1c0 = (code *****)&local_20;
      pppppcStack_1c4 = &local_1c;
      pppppcStack_1c8 = (code *****)0x7;
      pppppcStack_1cc = (code *****)0x469702;
      __vbaFreeObjList();
      pppppcStack_1cc = (code *****)local_b8;
      pppppcStack_1d0 = (code *****)local_98;
      ppppppcStack_1d4 = local_a8;
      ppppppcStack_1d8 = local_88;
      ppppppcStack_1dc = local_78;
      pppppcStack_1e0 = (code *****)local_68;
      pppppppcStack_1e4 = (code *******)local_58;
      pppppcStack_1e8 = (code *****)local_48;
      pppppppcStack_1ec = (code *******)0x8;
      uStack_1f0 = 0x469736;
      __vbaFreeVarList();
      pppppppcStack_190 = (code *******)&DAT_00417d44;
      pppppppcStack_194 = (code *******)0x0;
      pppppppcStack_198 = (code *******)0xd;
      pppppppcStack_1a0 = (code *******)0x46974b;
      ppppppcStack_19c = ppppppcVar21;
      pppppppcStack_1a0 = (code *******)(*(code *)(*ppppppcVar21)[0xe5])();
      ppppppcStack_1a4 = (code ******)&local_1c;
      uStack_1a8 = 0x469752;
      pppppppcStack_1a0 = (code *******)__vbaObjSet();
      ppppppcStack_1a4 = local_48;
      uStack_1a8 = 0x469759;
      pppppppcStack_198 = (code *******)__vbaLateIdCallLd();
      ppppppcStack_19c = (code ******)0x469763;
      pppppppcStack_194 = (code *******)__vbaCastObjVar();
      pppppppcStack_198 = (code *******)&local_20;
      ppppppcStack_19c = (code ******)0x46976a;
      __vbaObjSet();
      pppppppcStack_194 = (code *******)&local_20;
      ppppppcStack_19c = (code ******)0x469777;
      pppppppcStack_198 = (code *******)ppppppcVar21;
      (*(code *)(*ppppppcVar21)[0x1c1])();
      pppppcStack_158 = (code *****)&local_20;
      pppppcStack_15c = &local_1c;
      pppppppcStack_160 = (code *******)0x2;
      ppppppcStack_164 = (code ******)0x469787;
      __vbaFreeObjList();
    }
    pppppcStack_158 = (code *****)0x469793;
    __vbaFreeVar();
  }
LAB_00469795:
  sVar2 = *param_2;
  ppppppcStack_154 = (code ******)0x4697a6;
  sVar4 = __vbaI2I4();
  if (sVar2 == sVar4) {
    *(ushort *)ppppppcVar21[0x42] = ~*(ushort *)ppppppcVar21[0x42];
  }
  else {
    ppppppcStack_150 = (code ******)0x4697c7;
    sVar4 = __vbaI2I4();
    if (sVar2 != sVar4) {
      ppppppcStack_150 = (code ******)0x4697f7;
      sVar4 = __vbaI2I4();
      if (sVar2 != sVar4) {
        return;
      }
      *(ushort *)(ppppppcVar21[0x42] + 1) = ~*(ushort *)(ppppppcVar21[0x42] + 1);
      ppppppcStack_150 = (code ******)0x469816;
      ppppppcStack_14c = ppppppcVar21;
      pppppcStack_158 = (code *****)(*(code *)(*ppppppcVar21)[0x1d0])();
      goto joined_r0x00469818;
    }
    *(ushort *)((int)ppppppcVar21[0x42] + 2) = ~*(ushort *)((int)ppppppcVar21[0x42] + 2);
  }
  ppppppcStack_154 = (code ******)0x4697e6;
  ppppppcStack_150 = ppppppcVar21;
  pppppcStack_158 = (code *****)(*(code *)(*ppppppcVar21)[0x1d0])();
joined_r0x00469818:
  if ((int)pppppcStack_158 < 0) {
    ppppppcStack_14c = (code ******)0x740;
    ppppppcStack_150 = (code ******)&DAT_004170bc;
    pppppcStack_15c = (code *****)0x46982c;
    ppppppcStack_154 = ppppppcVar21;
    __vbaHresultCheckObj();
  }
  return;
  while( true ) {
    if (DAT_00480244 == (code *******)0x0) {
      pppppppcStack_604 = (code *******)&DAT_00480244;
      pppppppcStack_608 = (code *******)&DAT_00413b34;
      pppppppcStack_60c = (code *******)0x46b1a4;
      __vbaNew2();
    }
    pppppppcStack_348 = DAT_00480244;
    pppppppcStack_608 = (code *******)0x46b1b8;
    pppppppcStack_604 = pppppppcVar12;
    pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xd6])();
    pppppppcStack_60c = (code *******)&pppppppcStack_294;
    pppppppcStack_610 = (code *******)0x46b1bf;
    pppppppcStack_618 = (code *******)(*pcVar18)();
    pppppppcStack_610 = (code *******)&pppppppcStack_298;
    pppppppcStack_614 = pppppppcStack_284;
    pppppppcStack_340 = pppppppcStack_618;
    iVar7 = (*(code *)(*pppppppcStack_618)[0x10])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    pppppppcStack_298 = (code *******)0x0;
    ppppppcStack_484 = *pppppppcStack_348;
    (*pcVar18)();
    pppppppcVar22 = pppppppcStack_348;
    iVar7 = (*(code *)ppppppcStack_484[4])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24);
    }
    __vbaFreeObjList(2,&pppppppcStack_294);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xd7])();
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_488 = ppppppcVar9;
    pppppppcStack_610 = (code *******)(*(code *)ppppppcVar9[4])(pppppppcStack_348,uVar15);
    if ((int)pppppppcStack_610 < 0) {
      pppppppcStack_604 = (code *******)0x10;
      pppppppcStack_608 = (code *******)&DAT_00413b24;
      pppppppcStack_60c = pppppppcVar22;
      pppppppcStack_614 = (code *******)0x46b2dd;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_29c;
    pppppppcStack_608 = (code *******)&pppppppcStack_294;
    pppppppcStack_60c = (code *******)0x2;
    pppppppcStack_610 = (code *******)0x46b2ed;
    __vbaFreeObjList();
    pcVar18 = __vbaObjSet_exref;
    pppppppcVar22 = (code *******)(uint)(ushort)((short)pppppppcStack_284 + 1);
    if (SCARRY2((short)pppppppcStack_284,1)) break;
LAB_0046b17a:
    pppppppcStack_284 = pppppppcVar22;
    if (sStack_398 < (short)pppppppcStack_284) {
      pppppppcStack_604 = (code *******)0x0;
      pppppppcStack_608 = (code *******)0x0;
      pppppppcStack_610 = (code *******)0x46b31a;
      pppppppcStack_60c = pppppppcVar12;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar12)[0xe4])();
      pppppppcStack_614 = (code *******)&pppppppcStack_294;
      pppppppcStack_618 = (code *******)0x46b325;
      pppppppcStack_610 = (code *******)__vbaObjSet();
      pppppppcStack_614 = &ppppppcStack_2b0;
      pppppppcStack_618 = (code *******)0x46b330;
      pppppppcStack_608 = (code *******)__vbaLateIdCallLd();
      pppppppcStack_60c = (code *******)0x46b33a;
      __vbaI4Var();
      pppppppcStack_608 = (code *******)0x46b342;
      uStack_3a0 = __vbaI2I4();
      pppppppcVar22 =
           (code *******)
           CONCAT22((short)((uint)pcVar18 >> 0x10),*(short *)((int)pppppppcVar12 + 0x9e) + 1);
      if (!SCARRY2(*(short *)((int)pppppppcVar12 + 0x9e),1)) {
        pppppppcStack_608 = (code *******)0x46b365;
        pppppppcStack_284 = pppppppcVar22;
        __vbaFreeObj();
        pppppppcStack_608 = (code *******)0x46b36e;
        __vbaFreeVar();
        pppppppcVar16 = pppppppcStack_284;
        goto LAB_0046b36e;
      }
      break;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    if (DAT_00480244 == (code *******)0x0) {
      pppppppcStack_604 = (code *******)&DAT_00480244;
      pppppppcStack_608 = (code *******)&DAT_00413b34;
      pppppppcStack_60c = (code *******)0x46b394;
      __vbaNew2();
    }
    pppppppcStack_348 = DAT_00480244;
    pppppppcStack_608 = (code *******)0x46b3a8;
    pppppppcStack_604 = pppppppcVar12;
    pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xd6])();
    pppppppcStack_60c = (code *******)&pppppppcStack_294;
    pppppppcStack_610 = (code *******)0x46b3b3;
    pppppppcStack_610 = (code *******)__vbaObjSet();
    pppppppcStack_608 = (code *******)&pppppppcStack_298;
    pppppppcStack_614 = (code *******)0x46b3c4;
    pppppppcStack_60c = pppppppcVar22;
    pppppppcStack_340 = pppppppcStack_610;
    iVar7 = (*(code *)(*pppppppcStack_610)[0x10])();
    if (iVar7 < 0) {
      pppppppcStack_614 = (code *******)0x40;
      pppppppcStack_618 = (code *******)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    pppppppcStack_614 = pppppppcStack_298;
    pppppppcStack_618 = (code *******)&pppppppcStack_29c;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    pppppppcStack_614 = (code *******)__vbaObjSet();
    pppppppcStack_618 = pppppppcStack_348;
    iVar7 = (*(code *)ppppppcVar9[3])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObjList();
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2();
    }
    pppppppcStack_348 = DAT_00480244;
    (*(code *)(*pppppppcVar12)[0xd7])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4);
    }
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    __vbaObjSet(&pppppppcStack_29c);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_490 = ppppppcVar9;
    pppppppcStack_610 = (code *******)(*(code *)ppppppcVar9[3])(pppppppcStack_348);
    if ((int)pppppppcStack_610 < 0) {
      pppppppcStack_604 = (code *******)0xc;
      pppppppcStack_608 = (code *******)&DAT_00413b24;
      pppppppcStack_60c = pppppppcVar22;
      pppppppcStack_614 = (code *******)0x46b4c8;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_29c;
    pppppppcStack_608 = (code *******)&pppppppcStack_294;
    pppppppcStack_60c = (code *******)0x2;
    pppppppcStack_610 = (code *******)0x46b4d8;
    __vbaFreeObjList();
    pppppppcVar22 = (code *******)(uint)(ushort)((short)pppppppcStack_284 + 1);
    pppppppcVar16 = pppppppcVar22;
    if (SCARRY2((short)pppppppcStack_284,1)) break;
LAB_0046b36e:
    pppppppcStack_284 = pppppppcVar16;
    if ((short)uStack_3a0 < (short)pppppppcVar22) {
      pppppppcStack_604 = (code *******)0x0;
      pppppppcStack_608 = (code *******)0x0;
      pppppppcStack_610 = (code *******)0x46b501;
      pppppppcStack_60c = pppppppcVar12;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar12)[0xe4])();
      pcVar18 = __vbaObjSet_exref;
      pppppppcStack_614 = (code *******)&pppppppcStack_294;
      pppppppcStack_618 = (code *******)0x46b50e;
      pppppppcStack_610 = (code *******)__vbaObjSet();
      pppppppcStack_614 = &ppppppcStack_2b0;
      pppppppcStack_618 = (code *******)0x46b519;
      pppppppcStack_608 = (code *******)__vbaLateIdCallLd();
      pppppppcStack_60c = (code *******)0x46b523;
      __vbaI4Var();
      pppppppcStack_60c = (code *******)0x46b52b;
      uStack_3a8 = __vbaI2I4();
      pppppppcStack_284 = (code *******)0x1;
      pppppppcStack_608 = (code *******)0x46b541;
      __vbaFreeObj();
      pppppppcStack_608 = (code *******)0x46b54a;
      __vbaFreeVar();
      pppppppcVar22 = pppppppcStack_284;
      goto LAB_0046b54a;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    pppppppcStack_608 = (code *******)0x46b590;
    pppppppcStack_290 = pppppppcVar22;
    pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xd6])();
    pppppppcStack_60c = (code *******)&pppppppcStack_294;
    pppppppcStack_610 = (code *******)0x46b59b;
    pppppppcStack_610 = (code *******)__vbaObjSet();
    pppppppcStack_608 = (code *******)&pppppppcStack_298;
    pppppppcStack_60c = pppppppcStack_284;
    pppppppcStack_614 = (code *******)0x46b5af;
    pppppppcStack_340 = pppppppcStack_610;
    iVar7 = (*(code *)(*pppppppcStack_610)[0x10])();
    if (iVar7 < 0) {
      pppppppcStack_614 = (code *******)0x40;
      pppppppcStack_618 = (code *******)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    pppppppcStack_618 = (code *******)apppppppcStack_364;
    pppppppcStack_614 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    __vbaObjSet();
    pppppppcStack_614 = (code *******)0x46b5e7;
    __vbaFreeObj();
    pppppppcStack_614 = (code *******)(float)(int)pppppppcStack_290;
    pppppppcStack_618 = apppppppcStack_364[0];
    pppppppcStack_494 = pppppppcStack_614;
    iVar7 = (*(code *)(*apppppppcStack_364[0])[0x1f])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    (*(code *)(*pppppppcVar12)[0xd6])();
    pppppppcStack_340 = (code *******)__vbaObjSet();
    iVar7 = (**(code **)((int)*pppppppcStack_340 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcStack_340,&DAT_004182e4);
    }
    pppppppcStack_348 = pppppppcStack_298;
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1c])(pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcStack_348,&DAT_0041807c,0x70);
    }
    iVar7 = (*(code *)(*apppppppcStack_364[0])[0x1d])(apppppppcStack_364[0],ppppppcStack_338);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,apppppppcStack_364[0],&DAT_0041807c,0x74);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_298);
    iVar7 = (*(code *)(*apppppppcStack_364[0])[0x27])(apppppppcStack_364[0],0xffffffff);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,apppppppcStack_364[0],&DAT_0041807c,0x9c);
    }
    __vbaObjSetAddref(apppppppcStack_364,0);
    uVar15 = (*(code *)(*pppppppcVar12)[0xd7])(pppppppcVar12);
    pppppppcStack_340 = (code *******)__vbaObjSet(&pppppppcStack_294,uVar15);
    pppppppcVar16 =
         (code *******)
         (*(code *)(*pppppppcStack_340)[0x10])
                   (pppppppcStack_340,pppppppcStack_284,&pppppppcStack_298);
    if ((int)pppppppcVar16 < 0) {
      pppppppcStack_604 = (code *******)0x40;
      pppppppcStack_608 = (code *******)&DAT_004182e4;
      pppppppcStack_60c = pppppppcStack_340;
      pppppppcStack_614 = (code *******)0x46b73a;
      pppppppcStack_610 = pppppppcVar16;
      __vbaHresultCheckObj();
    }
    pppppppcStack_608 = (code *******)&pppppppcStack_368;
    pppppppcStack_604 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    pppppppcStack_60c = (code *******)0x46b752;
    __vbaObjSet();
    pppppppcStack_604 = (code *******)0x46b75b;
    __vbaFreeObj();
    pcVar18 = (code *)((int)pppppppcVar22 + (int)pppppppcVar12[0x34]);
    if (SCARRY4((int)pppppppcVar12[0x34],(int)pppppppcVar22)) break;
    pppppppcStack_604 = (code *******)(float)(int)pcVar18;
    pppppppcStack_608 = pppppppcStack_368;
    pppppppcStack_60c = (code *******)0x46b78e;
    fStack_49c = (float)pppppppcStack_604;
    pcStack_498 = pcVar18;
    pppppppcVar22 = (code *******)(*(code *)(*pppppppcStack_368)[0x1d])();
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_60c = (code *******)0x74;
      pppppppcStack_610 = (code *******)&DAT_00417a98;
      pppppppcStack_614 = pppppppcStack_368;
      pppppppcStack_618 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_610 = (code *******)0x46b7ae;
    pppppppcStack_60c = pppppppcVar12;
    pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar12)[0xd7])();
    pppppppcStack_614 = (code *******)&pppppppcStack_294;
    pppppppcStack_618 = (code *******)0x46b7b9;
    pppppppcStack_618 = (code *******)__vbaObjSet();
    pppppppcStack_610 = (code *******)&pppppppcStack_298;
    pppppppcStack_614 = (code *******)0x1;
    iVar7 = (*(code *)(*pppppppcStack_618)[0x10])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1a])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7);
    }
    iVar7 = (*(code *)(*pppppppcStack_368)[0x1b])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcStack_368,&DAT_00417a98);
    }
    __vbaFreeObjList(2,&pppppppcStack_294);
    pppppppcVar22 = (code *******)(*(code *)(*pppppppcStack_368)[0x25])(pppppppcStack_368);
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_604 = (code *******)0x94;
      pppppppcStack_608 = (code *******)&DAT_00417a98;
      pppppppcStack_60c = pppppppcStack_368;
      pppppppcStack_614 = (code *******)0x46b863;
      pppppppcStack_610 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_608 = (code *******)&pppppppcStack_368;
    pppppppcStack_604 = (code *******)0x0;
    pppppppcStack_60c = (code *******)0x46b872;
    __vbaObjSetAddref();
    pcVar18 = __vbaObjSet_exref;
    pppppppcVar22 = (code *******)(uint)(ushort)((short)pppppppcStack_284 + 1);
    if (SCARRY2((short)pppppppcStack_284,1)) break;
LAB_0046b54a:
    pppppppcStack_284 = pppppppcVar22;
    if ((short)uStack_3a8 < (short)pppppppcStack_284) {
      pppppppcStack_604 = (code *******)0x0;
      pppppppcStack_608 = (code *******)0x0;
      pppppppcStack_610 = (code *******)0x46b89c;
      pppppppcStack_60c = pppppppcVar12;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar12)[0xe4])();
      pppppppcStack_614 = (code *******)&pppppppcStack_294;
      pppppppcStack_618 = (code *******)0x46b8a3;
      pppppppcStack_618 = (code *******)(*pcVar18)();
      pppppppcStack_610 = (code *******)__vbaLateIdCallLd();
      pppppppcStack_614 = (code *******)0x46b8b8;
      __vbaI4Var();
      pppppppcStack_60c = (code *******)0x46b8c0;
      uVar5 = __vbaI2I4();
      *(undefined2 *)((int)pppppppcVar12 + 0x9e) = uVar5;
      pppppppcStack_608 = (code *******)0x46b8d0;
      __vbaFreeObj();
      pppppppcStack_608 = (code *******)0x46b8d9;
      __vbaFreeVar();
      pppppppcStack_278 = (code *******)pppppppcVar12[0x35];
      pppppppcStack_284 = (code *******)0x0;
      pppppppcVar22 = pppppppcStack_284;
      goto LAB_0046b8e7;
    }
    if (((SBORROW2((short)pppppppcStack_284,1)) ||
        (lVar3 = (longlong)(int)(short)((short)pppppppcStack_284 + -1) *
                 (longlong)(int)pppppppcVar12[0x33], iVar7 = (int)lVar3, iVar7 != lVar3)) ||
       (pppppppcVar22 = (code *******)((int)pppppppcStack_274 + iVar7),
       SCARRY4(iVar7,(int)pppppppcStack_274))) break;
  }
  goto LAB_0046e052;
  while( true ) {
    uStack_4a0 = (uint)(short)pppppppcStack_284;
    if (2 < uStack_4a0) {
      pppppppcStack_604 = (code *******)0x46b909;
      __vbaGenerateBoundsError();
    }
    if (*(short *)((int)pppppppcVar12[0x42] + uStack_4a0 * 2) == 0) {
      pppppppcStack_608 = (code *******)0x46ba2f;
      pppppppcStack_604 = pppppppcVar12;
      pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xc1])();
      pppppppcStack_60c = (code *******)&pppppppcStack_294;
      pppppppcStack_610 = (code *******)0x46ba3a;
      pppppppcStack_610 = (code *******)__vbaObjSet();
      pppppppcStack_608 = (code *******)&pppppppcStack_298;
      pppppppcStack_60c = pppppppcStack_284;
      pppppppcStack_614 = (code *******)0x46ba4a;
      iVar7 = (**(code **)((int)*pppppppcStack_610 + 0x40))();
      if (iVar7 < 0) {
        pppppppcStack_614 = (code *******)0x40;
        pppppppcStack_618 = (code *******)&DAT_004182e4;
        __vbaHresultCheckObj();
      }
      pppppppcVar22 = pppppppcStack_298;
      pppppppcStack_614 = (code *******)(float)(int)pppppppcStack_278;
      pppppppcStack_618 = pppppppcStack_298;
      pppppppcStack_4a4 = pppppppcStack_614;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcStack_298)[0x1d])();
      if ((int)pppppppcStack_610 < 0) {
        pppppppcStack_604 = (code *******)0x74;
        pppppppcStack_608 = (code *******)&DAT_00418668;
        pppppppcStack_60c = pppppppcVar22;
        pppppppcStack_614 = (code *******)0x46ba87;
        __vbaHresultCheckObj();
      }
      pppppppcStack_604 = (code *******)&pppppppcStack_298;
      pppppppcStack_608 = (code *******)&pppppppcStack_294;
      pppppppcStack_60c = (code *******)0x2;
      pppppppcStack_610 = (code *******)0x46ba97;
      __vbaFreeObjList();
      uVar17 = (uint)(short)pppppppcStack_284;
      if (2 < uVar17) {
        pppppppcStack_604 = (code *******)0x46baa9;
        __vbaGenerateBoundsError();
      }
      pppppppcVar22 = (code *******)((int)pppppppcStack_278 + (int)pppppppcVar12[0x3b][uVar17]);
      if (SCARRY4((int)pppppppcVar12[0x3b][uVar17],(int)pppppppcStack_278)) break;
    }
    else {
      pppppppcStack_608 = (code *******)0x46b929;
      pppppppcStack_604 = pppppppcVar12;
      pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xc1])();
      pppppppcStack_60c = (code *******)&pppppppcStack_294;
      pppppppcStack_610 = (code *******)0x46b930;
      pppppppcStack_618 = (code *******)(*pcVar18)();
      pppppppcStack_610 = (code *******)&pppppppcStack_298;
      pppppppcStack_614 = pppppppcStack_284;
      iVar7 = (*(code *)(*pppppppcStack_618)[0x10])();
      if (iVar7 < 0) {
        __vbaHresultCheckObj();
      }
      iVar7 = (*(code *)(*pppppppcStack_298)[0x20])();
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7);
      }
      (*(code *)(*pppppppcVar12)[0xc1])();
      piVar14 = (int *)__vbaObjSet();
      iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
      }
      pppppppcVar22 = pppppppcStack_2a0;
      iVar7 = (*(code *)(*pppppppcVar12)[0x20])(pppppppcVar12,&ppppppcStack_338);
      uVar23 = 0;
      if (iVar7 < 0) {
        __vbaHresultCheckObj();
      }
      if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
      ppppppcVar21 = (code ******)0x46b9f8;
      pppppppcVar13 = pppppppcVar22;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar22)[0x1d])();
      if ((int)pppppppcStack_610 < 0) {
        pppppppcStack_604 = (code *******)0x74;
        pppppppcStack_608 = (code *******)&DAT_00418668;
        pppppppcStack_60c = pppppppcVar22;
        pppppppcStack_614 = (code *******)0x46ba09;
        __vbaHresultCheckObj();
      }
      pppppppcStack_604 = (code *******)&pppppppcStack_2a0;
      pppppppcStack_608 = (code *******)&pppppppcStack_29c;
      pppppppcStack_60c = (code *******)&pppppppcStack_298;
      pppppppcStack_610 = (code *******)&pppppppcStack_294;
      pppppppcStack_614 = (code *******)0x4;
      pppppppcStack_618 = (code *******)0x46ba21;
      __vbaFreeObjList();
      pppppppcVar22 = pppppppcStack_278;
    }
    pppppppcStack_278 = pppppppcVar22;
    pcVar18 = __vbaObjSet_exref;
    pppppppcVar22 = (code *******)(uint)(ushort)((short)pppppppcStack_284 + 1);
    if (SCARRY2((short)pppppppcStack_284,1)) break;
LAB_0046b8e7:
    pppppppcStack_284 = pppppppcVar22;
    if (2 < (short)pppppppcStack_284) {
      pppppppcStack_608 = (code *******)0x46bae6;
      pppppppcStack_604 = pppppppcVar12;
      pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xc1])();
      pppppppcStack_60c = (code *******)&pppppppcStack_294;
      pppppppcStack_610 = (code *******)0x46baed;
      pppppppcStack_618 = (code *******)(*pcVar18)();
      pppppppcStack_610 = (code *******)&pppppppcStack_298;
      pppppppcStack_614 = (code *******)0x3;
      pppppppcStack_340 = pppppppcStack_618;
      iVar7 = (*(code *)(*pppppppcStack_618)[0x10])();
      if (iVar7 < 0) {
        __vbaHresultCheckObj();
      }
      fStack_4a8 = (float)(int)pppppppcStack_278;
      pppppppcStack_348 = pppppppcStack_298;
      iVar7 = (*(code *)(*pppppppcStack_298)[0x1d])();
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7);
      }
      __vbaFreeObjList();
      (*(code *)(*pppppppcVar12)[0xc0])();
      pppppppcStack_340 = (code *******)(*pcVar18)();
      iVar7 = (*(code *)(*pppppppcStack_340)[0x20])(pppppppcStack_340,&ppppppcStack_338);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,pppppppcStack_340,&DAT_0041804c,0x80);
      }
      uVar15 = (*(code *)(*pppppppcVar12)[0xc1])(pppppppcVar12);
      piVar14 = (int *)(*pcVar18)(&pppppppcStack_298,uVar15);
      iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,3,&pppppppcStack_29c);
      uVar23 = 0;
      if (iVar7 < 0) {
        pppppppcStack_604 = (code *******)0x46bbce;
        __vbaHresultCheckObj();
      }
      pppppppcVar22 = pppppppcStack_29c;
      dStack_4b0 = (double)(int)pppppppcVar12[0x36];
      appppppcStack_2d0[0] = (code ******)0x1;
      pppppppcStack_2a8 = (code *******)0x1;
      dStack_4b8 = (double)(int)pppppppcStack_278;
      pppppppcStack_350 = pppppppcStack_29c;
      ppppppcStack_2c0 = (code ******)0x5;
      ppppppcStack_2b0 = (code ******)0x2;
      uStack_2b8 = (double)(((float)ppppppcStack_338 - (float)(int)pppppppcVar12[0x36]) -
                           (float)(int)pppppppcStack_278);
      if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
      pppppppcStack_604 = (code *******)0x46bc3c;
      FUN_00441030(appppppcStack_2e0,&ppppppcStack_2b0,&ppppppcStack_2c0,appppppcStack_2d0);
      ppppppcVar21 = *pppppppcVar22;
      pppppppcStack_604 = appppppcStack_2e0;
      pppppppcStack_608 = (code *******)0x46bc4b;
      fVar24 = (float10)__vbaR4Var();
      pppppppcVar22 = pppppppcStack_350;
      pppppppcStack_608 = (code *******)(float)fVar24;
      pppppppcStack_60c = pppppppcStack_350;
      pppppppcStack_610 = (code *******)0x46bc5e;
      iVar7 = (*(code *)ppppppcVar21[0x21])();
      if (iVar7 < 0) {
        pppppppcStack_610 = (code *******)0x84;
        pppppppcStack_614 = (code *******)&DAT_00418668;
        pppppppcStack_618 = pppppppcVar22;
        __vbaHresultCheckObj();
      }
      pppppppcStack_610 = (code *******)&pppppppcStack_29c;
      pppppppcStack_614 = (code *******)&pppppppcStack_298;
      pppppppcStack_618 = (code *******)&pppppppcStack_294;
      __vbaFreeObjList();
      __vbaFreeVarList(4);
      pppppppcStack_614 = (code *******)0x46bcad;
      pppppppcStack_610 = pppppppcVar12;
      pppppppcStack_614 = (code *******)(*(code *)(*pppppppcVar12)[0xc1])();
      pppppppcStack_618 = (code *******)&pppppppcStack_294;
      piVar14 = (int *)__vbaObjSet();
      pppppppcStack_614 = (code *******)&pppppppcStack_298;
      pppppppcStack_618 = (code *******)0x3;
      iVar7 = (**(code **)(*piVar14 + 0x40))();
      if (iVar7 < 0) {
        __vbaHresultCheckObj();
      }
      iVar7 = (*(code *)(*pppppppcStack_298)[0x22])();
      uVar23 = 0;
      if (iVar7 < 0) {
        __vbaHresultCheckObj();
      }
      dStack_4c4 = (double)(int)pppppppcVar12[0x2e];
      appppppcStack_2d0[0] = (code ******)0x1;
      ppppppcStack_2c0 = (code ******)0x5;
      uStack_2b8 = (double)((float)ppppppcStack_338 - (float)(int)pppppppcVar12[0x2e]);
      if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
      pppppppcStack_2a8 = (code *******)0x2;
      ppppppcStack_2b0 = (code ******)0x2;
      FUN_00441030(appppppcStack_2e0,&ppppppcStack_2b0,&ppppppcStack_2c0,appppppcStack_2d0);
      pppppppcStack_604 = (code *******)0x46bd65;
      pppppppcStack_28c = (code *******)__vbaI4Var();
      pppppppcStack_604 = (code *******)&pppppppcStack_298;
      pppppppcStack_608 = (code *******)&pppppppcStack_294;
      pppppppcStack_60c = (code *******)0x2;
      pppppppcStack_610 = (code *******)0x46bd78;
      __vbaFreeObjList();
      pppppppcStack_610 = appppppcStack_2e0;
      pppppppcStack_614 = appppppcStack_2d0;
      pppppppcStack_618 = &ppppppcStack_2c0;
      __vbaFreeVarList();
      pppppppcStack_608 = (code *******)0x46bd9f;
      pppppppcStack_604 = pppppppcVar12;
      pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xe3])();
      pppppppcStack_60c = (code *******)&pppppppcStack_29c;
      pppppppcStack_610 = (code *******)0x46bdaa;
      __vbaObjSet();
      pppppppcStack_60c = (code *******)0x46bdb3;
      pppppppcStack_608 = pppppppcVar12;
      pppppppcStack_60c = (code *******)(*(code *)(*pppppppcVar12)[0xc1])();
      pppppppcStack_610 = (code *******)&pppppppcStack_294;
      pppppppcStack_614 = (code *******)0x46bdbe;
      pppppppcStack_614 = (code *******)__vbaObjSet();
      pppppppcStack_60c = (code *******)&pppppppcStack_298;
      pppppppcStack_610 = (code *******)0x3;
      pppppppcStack_618 = (code *******)0x46bdd0;
      pppppppcStack_340 = pppppppcStack_614;
      iVar7 = (*(code *)(*pppppppcStack_614)[0x10])();
      if (iVar7 < 0) {
        pppppppcStack_618 = (code *******)0x40;
        __vbaHresultCheckObj();
      }
      pppppppcStack_618 = &ppppppcStack_338;
      pppppppcStack_348 = pppppppcStack_298;
      iVar7 = (*(code *)(*pppppppcStack_298)[0x20])();
      uVar23 = 0;
      if (iVar7 < 0) {
        __vbaHresultCheckObj();
      }
      pppppppcStack_2a8 = pppppppcStack_29c;
      uStack_2b8 = (double)CONCAT44(uStack_2b8._4_4_,ppppppcStack_338);
      appppppcStack_2d0[0] = (code ******)0x1;
      ppppppcStack_2c0 = (code ******)0x4;
      pppppppcStack_29c = (code *******)0x0;
      ppppppcStack_2b0 = (code ******)0x9;
      FUN_00441030(appppppcStack_2e0,&ppppppcStack_2b0,&ppppppcStack_2c0,appppppcStack_2d0);
      pppppppcStack_27c = (code *******)__vbaI4Var(appppppcStack_2e0);
      __vbaFreeObjList(3,&pppppppcStack_294,&pppppppcStack_298,&pppppppcStack_29c);
      __vbaFreeVarList(4,&ppppppcStack_2b0,&ppppppcStack_2c0,appppppcStack_2d0,appppppcStack_2e0);
      uVar15 = (*(code *)(*pppppppcVar12)[0xe3])(pppppppcVar12,0,0);
      uVar15 = __vbaObjSet(&pppppppcStack_294,uVar15);
      __vbaLateIdCallLd(&ppppppcStack_2b0,uVar15);
      dStack_4cc = (double)(int)pppppppcStack_27c;
      iStack_4d0 = __vbaI4Var(&ppppppcStack_2b0);
      dStack_4d8 = (double)iStack_4d0;
      if (DAT_0047f000 != 0) {
        adj_fdiv_m64();
      }
      if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
      pppppppcStack_280 = (code *******)__vbaFpI4();
      __vbaFreeObj();
      __vbaFreeVar();
      sStack_3b8 = *(short *)(pppppppcVar12 + 0x27);
      (*(code *)(*pppppppcVar12)[0xe3])();
      pppppppcStack_604 = (code *******)0x46bf55;
      __vbaObjSet();
      pppppppcStack_604 = (code *******)0x46bf60;
      pppppppcVar13 = (code *******)__vbaLateIdCallLd();
      ppppppcVar21 = (code ******)0x46bf66;
      iVar7 = __vbaI4Var();
      if (!SCARRY4(iVar7,1)) {
        pppppppcStack_60c = (code *******)0x46bf77;
        pppppppcVar16 = (code *******)__vbaI2I4();
        pppppppcStack_608 = (code *******)0x46bf85;
        pppppppcStack_284 = pppppppcVar16;
        __vbaFreeObj();
        pppppppcStack_608 = (code *******)0x46bf8e;
        __vbaFreeVar();
        pppppppcVar22 = pppppppcStack_284;
        goto LAB_0046bf8e;
      }
      break;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    if (DAT_00480244 == (code *******)0x0) {
      pppppppcStack_604 = (code *******)&DAT_00480244;
      pppppppcStack_608 = (code *******)&DAT_00413b34;
      pppppppcStack_60c = (code *******)0x46bfb4;
      __vbaNew2();
    }
    pppppppcStack_348 = DAT_00480244;
    pppppppcStack_608 = (code *******)0x46bfc9;
    pppppppcStack_604 = pppppppcVar12;
    pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xc2])();
    pppppppcStack_60c = (code *******)&pppppppcStack_294;
    pppppppcStack_610 = (code *******)0x46bfd4;
    pppppppcStack_610 = (code *******)__vbaObjSet();
    pppppppcStack_608 = (code *******)&pppppppcStack_298;
    pppppppcStack_614 = (code *******)0x46bfe5;
    pppppppcStack_60c = pppppppcVar16;
    pppppppcStack_340 = pppppppcStack_610;
    iVar7 = (*(code *)(*pppppppcStack_610)[0x10])();
    if (iVar7 < 0) {
      pppppppcStack_614 = (code *******)0x40;
      pppppppcStack_618 = (code *******)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    pppppppcStack_618 = (code *******)&pppppppcStack_29c;
    pppppppcStack_614 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    pppppppcStack_614 = (code *******)__vbaObjSet();
    pppppppcStack_618 = pppppppcStack_348;
    ppppppcStack_4dc = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[4])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObjList();
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2();
    }
    pppppppcStack_348 = DAT_00480244;
    (*(code *)(*pppppppcVar12)[0xc4])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4);
    }
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    __vbaObjSet(&pppppppcStack_29c);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_4e0 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[4])(pppppppcStack_348);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_4e4 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[4])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xc9])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_4e8 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[4])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[199])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_4ec = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[4])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[200])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_4f0 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[4])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xc5])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_4f4 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[4])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xc6])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_4f8 = ppppppcVar9;
    pppppppcStack_610 = (code *******)(*(code *)ppppppcVar9[4])(pppppppcStack_348,uVar15);
    if ((int)pppppppcStack_610 < 0) {
      pppppppcStack_604 = (code *******)0x10;
      pppppppcStack_608 = (code *******)&DAT_00413b24;
      pppppppcStack_60c = pppppppcVar22;
      pppppppcStack_614 = (code *******)0x46c518;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_29c;
    pppppppcStack_608 = (code *******)&pppppppcStack_294;
    pppppppcStack_60c = (code *******)0x2;
    pppppppcStack_610 = (code *******)0x46c528;
    __vbaFreeObjList();
    pppppppcVar16 = (code *******)(uint)(ushort)((short)pppppppcStack_284 + 1);
    pppppppcVar22 = pppppppcVar16;
    if (SCARRY2((short)pppppppcStack_284,1)) break;
LAB_0046bf8e:
    pppppppcStack_284 = pppppppcVar22;
    if (sStack_3b8 < (short)pppppppcVar16) {
      pppppppcStack_604 = (code *******)0x0;
      pppppppcStack_608 = (code *******)0x0;
      pppppppcStack_610 = (code *******)0x46c551;
      pppppppcStack_60c = pppppppcVar12;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar12)[0xe3])();
      pppppppcStack_614 = (code *******)&pppppppcStack_294;
      pppppppcStack_618 = (code *******)0x46c55c;
      pppppppcStack_610 = (code *******)__vbaObjSet();
      pppppppcStack_614 = &ppppppcStack_2b0;
      pppppppcStack_618 = (code *******)0x46c567;
      pppppppcStack_608 = (code *******)__vbaLateIdCallLd();
      pppppppcStack_60c = (code *******)0x46c571;
      __vbaI4Var();
      pppppppcStack_608 = (code *******)0x46c579;
      uStack_3c0 = __vbaI2I4();
      pppppppcVar22 =
           (code *******)
           CONCAT22((short)((uint)pppppppcVar16 >> 0x10),*(short *)(pppppppcVar12 + 0x27) + 1);
      if (!SCARRY2(*(short *)(pppppppcVar12 + 0x27),1)) {
        pppppppcStack_608 = (code *******)0x46c59c;
        pppppppcStack_284 = pppppppcVar22;
        __vbaFreeObj();
        pppppppcStack_608 = (code *******)0x46c5a5;
        __vbaFreeVar();
        pppppppcVar16 = pppppppcStack_284;
        goto LAB_0046c5a5;
      }
      break;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    if (DAT_00480244 == (code *******)0x0) {
      pppppppcStack_604 = (code *******)&DAT_00480244;
      pppppppcStack_608 = (code *******)&DAT_00413b34;
      pppppppcStack_60c = (code *******)0x46c5cb;
      __vbaNew2();
    }
    pppppppcStack_348 = DAT_00480244;
    pppppppcStack_608 = (code *******)0x46c5df;
    pppppppcStack_604 = pppppppcVar12;
    pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xc2])();
    pppppppcStack_60c = (code *******)&pppppppcStack_294;
    pppppppcStack_610 = (code *******)0x46c5ea;
    pppppppcStack_610 = (code *******)__vbaObjSet();
    pppppppcStack_608 = (code *******)&pppppppcStack_298;
    pppppppcStack_614 = (code *******)0x46c5fb;
    pppppppcStack_60c = pppppppcVar22;
    pppppppcStack_340 = pppppppcStack_610;
    iVar7 = (*(code *)(*pppppppcStack_610)[0x10])();
    if (iVar7 < 0) {
      pppppppcStack_614 = (code *******)0x40;
      pppppppcStack_618 = (code *******)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    pppppppcStack_614 = pppppppcStack_298;
    pppppppcStack_618 = (code *******)&pppppppcStack_29c;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    pppppppcStack_614 = (code *******)__vbaObjSet();
    pppppppcStack_618 = pppppppcStack_348;
    iVar7 = (*(code *)ppppppcVar9[3])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObjList();
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2();
    }
    pppppppcStack_348 = DAT_00480244;
    (*(code *)(*pppppppcVar12)[0xc4])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4);
    }
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    __vbaObjSet(&pppppppcStack_29c);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_500 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[3])(pppppppcStack_348);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_504 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[3])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xc9])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_508 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[3])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[199])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_50c = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[3])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[200])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_510 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[3])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xc5])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_514 = ppppppcVar9;
    iVar7 = (*(code *)ppppppcVar9[3])(pppppppcStack_348,uVar15);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_29c);
    if (DAT_00480244 == (code *******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppppcStack_348 = DAT_00480244;
    uVar15 = (*(code *)(*pppppppcVar12)[0xc6])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    ppppppcVar9 = *pppppppcStack_348;
    uVar15 = __vbaObjSet(&pppppppcStack_29c,pppppppcVar22);
    pppppppcVar22 = pppppppcStack_348;
    ppppppcStack_518 = ppppppcVar9;
    pppppppcStack_610 = (code *******)(*(code *)ppppppcVar9[3])(pppppppcStack_348,uVar15);
    if ((int)pppppppcStack_610 < 0) {
      pppppppcStack_604 = (code *******)0xc;
      pppppppcStack_608 = (code *******)&DAT_00413b24;
      pppppppcStack_60c = pppppppcVar22;
      pppppppcStack_614 = (code *******)0x46cb25;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_29c;
    pppppppcStack_608 = (code *******)&pppppppcStack_294;
    pppppppcStack_60c = (code *******)0x2;
    pppppppcStack_610 = (code *******)0x46cb35;
    __vbaFreeObjList();
    pppppppcVar22 = (code *******)(uint)(ushort)((short)pppppppcStack_284 + 1);
    pppppppcVar16 = pppppppcVar22;
    if (SCARRY2((short)pppppppcStack_284,1)) break;
LAB_0046c5a5:
    pppppppcStack_284 = pppppppcVar16;
    if ((short)uStack_3c0 < (short)pppppppcVar22) {
      pppppppcStack_604 = (code *******)0x0;
      pppppppcStack_608 = (code *******)0x0;
      pppppppcStack_610 = (code *******)0x46cb5e;
      pppppppcStack_60c = pppppppcVar12;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar12)[0xe3])();
      pcVar18 = __vbaObjSet_exref;
      pppppppcStack_614 = (code *******)&pppppppcStack_294;
      pppppppcStack_618 = (code *******)0x46cb6b;
      pppppppcStack_610 = (code *******)__vbaObjSet();
      pppppppcStack_614 = &ppppppcStack_2b0;
      pppppppcStack_618 = (code *******)0x46cb76;
      pppppppcStack_608 = (code *******)__vbaLateIdCallLd();
      pppppppcStack_60c = (code *******)0x46cb80;
      __vbaI4Var();
      pppppppcStack_60c = (code *******)0x46cb88;
      uStack_3c8 = __vbaI2I4();
      pppppppcStack_284 = (code *******)0x1;
      pppppppcStack_608 = (code *******)0x46cb9e;
      __vbaFreeObj();
      pppppppcStack_608 = (code *******)0x46cba7;
      __vbaFreeVar();
      pppppppcVar22 = pppppppcStack_284;
      goto LAB_0046cba7;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    pppppppcStack_608 = (code *******)0x46cbdf;
    pppppppcStack_288 = pppppppcVar22;
    pppppppcStack_608 = (code *******)(*(code *)(*pppppppcVar12)[0xc2])();
    pppppppcStack_60c = (code *******)&pppppppcStack_294;
    pppppppcStack_610 = (code *******)0x46cbe6;
    pppppppcStack_618 = (code *******)(*pcVar18)();
    pppppppcStack_610 = (code *******)&pppppppcStack_298;
    pppppppcStack_614 = pppppppcStack_284;
    iVar7 = (*(code *)(*pppppppcStack_618)[0x10])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    pppppppcStack_298 = (code *******)0x0;
    __vbaObjSet();
    __vbaFreeObj();
    (*(code *)(*pppppppcVar12)[0xc2])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4);
    }
    pppppppcVar22 = pppppppcStack_298;
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1e])(pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_0041807c,0x78);
    }
    iVar7 = (**(code **)(*piStack_36c + 0x7c))(piStack_36c,ppppppcStack_338);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_36c,&DAT_0041807c,0x7c);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_298);
    fStack_51c = (float)(int)pppppppcStack_288;
    iVar7 = (**(code **)(*piStack_36c + 0x74))(piStack_36c,fStack_51c);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_36c,&DAT_0041807c,0x74);
    }
    fStack_520 = (float)(int)pppppppcStack_280;
    iVar7 = (**(code **)(*piStack_36c + 0x84))(piStack_36c,fStack_520);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_36c,&DAT_0041807c,0x84);
    }
    iVar7 = (**(code **)(*piStack_36c + 0x9c))(piStack_36c,0xffffffff);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_36c,&DAT_0041807c,0x9c);
    }
    __vbaObjSetAddref(&piStack_36c,0);
    uVar15 = (*(code *)(*pppppppcVar12)[0xc4])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    __vbaObjSet(&piStack_370,pppppppcVar22);
    __vbaFreeObj();
    uVar15 = (*(code *)(*pppppppcVar12)[0xc4])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,1,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1c])(pppppppcStack_298,&ppppppcStack_338);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00417a98,0x70);
    }
    iVar7 = (**(code **)(*piStack_370 + 0x74))(piStack_370,ppppppcStack_338);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_370,&DAT_00417a98,0x74);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_298);
    fStack_524 = (float)(int)pppppppcStack_288;
    iVar7 = (**(code **)(*piStack_370 + 0x6c))(piStack_370,fStack_524);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_370,&DAT_00417a98,0x6c);
    }
    fStack_528 = (float)(int)pppppppcStack_280;
    iVar7 = (**(code **)(*piStack_370 + 0x7c))(piStack_370,fStack_528);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_370,&DAT_00417a98,0x7c);
    }
    iVar7 = (**(code **)(*piStack_370 + 0x94))(piStack_370,0xffffffff);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_370,&DAT_00417a98,0x94);
    }
    __vbaObjSetAddref(&piStack_370,0);
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    __vbaObjSet(&piStack_374,pppppppcVar22);
    __vbaFreeObj();
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,1,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1c])(pppppppcStack_298,&ppppppcStack_338);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00417a98,0x70);
    }
    iVar7 = (**(code **)(*piStack_374 + 0x74))(piStack_374,ppppppcStack_338);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_374,&DAT_00417a98,0x74);
    }
    __vbaFreeObjList(2,&pppppppcStack_294,&pppppppcStack_298);
    fStack_52c = (float)(int)pppppppcStack_288;
    iVar7 = (**(code **)(*piStack_374 + 0x6c))(piStack_374,fStack_52c);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_374,&DAT_00417a98,0x6c);
    }
    fStack_530 = (float)(int)pppppppcStack_280;
    iVar7 = (**(code **)(*piStack_374 + 0x7c))(piStack_374,fStack_530);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piStack_374,&DAT_00417a98,0x7c);
    }
    iVar7 = (**(code **)(*piStack_374 + 0x94))(piStack_374,0xffffffff);
    uVar23 = 0;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    dStack_538 = (double)(int)pppppppcStack_28c;
    if (DAT_0047f000 == 0) {
      fVar24 = (float10)(int)pppppppcStack_28c / (float10)2.0;
      piVar14 = piStack_374;
    }
    else {
      fVar24 = (float10)adj_fdiv_m64();
      piVar14 = extraout_ECX;
    }
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    fStack_53c = (float)fVar24;
    pppppppcVar22 = (code *******)(**(code **)(*piVar14 + 0x84))();
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_608 = (code *******)0x46d0d2;
      pppppppcStack_604 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    __vbaObjSetAddref();
    (*(code *)(*pppppppcVar12)[0xc9])();
    pppppppcStack_604 = (code *******)0x46d0f5;
    pppppppcVar22 = (code *******)__vbaObjSet();
    pppppppcStack_608 = (code *******)0x46d105;
    pppppppcStack_604 = pppppppcVar22;
    pppppppcVar13 = (code *******)(*(code *)(*pppppppcVar22)[0x10])();
    if ((int)pppppppcVar13 < 0) {
      pppppppcStack_608 = (code *******)0x40;
      pppppppcStack_60c = (code *******)&DAT_004182e4;
      pppppppcStack_618 = (code *******)0x46d116;
      pppppppcStack_614 = pppppppcVar13;
      pppppppcStack_610 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_60c = (code *******)&pppppppcStack_378;
    pppppppcStack_608 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    pppppppcStack_610 = (code *******)0x46d130;
    __vbaObjSet();
    pppppppcStack_608 = (code *******)0x46d139;
    __vbaFreeObj();
    pppppppcStack_60c = (code *******)0x46d142;
    pppppppcStack_608 = pppppppcVar12;
    pppppppcStack_60c = (code *******)(*(code *)(*pppppppcVar12)[0xc3])();
    pppppppcStack_610 = (code *******)&pppppppcStack_29c;
    pppppppcStack_614 = (code *******)0x46d149;
    pppppppcStack_614 = (code *******)__vbaObjSet();
    pppppppcStack_60c = (code *******)&pppppppcStack_2a0;
    pppppppcStack_610 = pppppppcStack_284;
    pppppppcStack_618 = (code *******)0x46d159;
    iVar7 = (*(code *)(*pppppppcStack_614)[0x10])();
    if (iVar7 < 0) {
      pppppppcStack_618 = (code *******)0x40;
      __vbaHresultCheckObj();
    }
    pppppppcStack_618 = &ppppppcStack_33c;
    iVar7 = (*(code *)(*pppppppcStack_2a0)[0x20])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    (*(code *)(*pppppppcVar12)[0xc3])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1c])(pppppppcStack_298,&ppppppcStack_338);
    uVar23 = 0;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    dStack_544 = (double)(int)pppppppcVar12[0x30];
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    fStack_548 = (float)ppppppcStack_33c + (float)ppppppcStack_338 + (float)(int)pppppppcVar12[0x30]
    ;
    pppppppcStack_604 = (code *******)(*(code *)(*pppppppcStack_378)[0x1f])();
    if ((int)pppppppcStack_604 < 0) {
      pppppppcStack_608 = (code *******)0x46d250;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_294;
    pppppppcStack_608 = (code *******)0x4;
    pppppppcStack_60c = (code *******)0x46d268;
    __vbaFreeObjList();
    fStack_54c = (float)(int)pppppppcStack_288;
    iVar7 = (*(code *)(*pppppppcStack_378)[0x1d])();
    if (iVar7 < 0) {
      pppppppcStack_604 = (code *******)&DAT_00417e48;
      pppppppcStack_608 = pppppppcStack_378;
      pppppppcStack_610 = (code *******)0x46d29e;
      pppppppcStack_60c = (code *******)iVar7;
      __vbaHresultCheckObj();
    }
    fStack_550 = (float)(int)pppppppcStack_280;
    pppppppcStack_604 = pppppppcStack_378;
    pppppppcStack_608 = (code *******)0x46d2bd;
    pppppppcStack_614 = (code *******)(*(code *)(*pppppppcStack_378)[0x21])();
    if ((int)pppppppcStack_614 < 0) {
      pppppppcStack_608 = (code *******)0x84;
      pppppppcStack_60c = (code *******)&DAT_00417e48;
      pppppppcStack_610 = pppppppcStack_378;
      pppppppcStack_618 = (code *******)0x46d2d7;
      __vbaHresultCheckObj();
    }
    pppppppcStack_614 = (code *******)0x2;
    pppppppcStack_610 = pppppppcStack_2ec;
    pppppppcStack_618 = pppppppcStack_378;
    pppppppcStack_60c = (code *******)0x1;
    pppppppcStack_608 = pppppppcStack_2e4;
    iVar7 = (*(code *)(*pppppppcStack_378)[0x72])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    iVar7 = (*(code *)(*pppppppcStack_378)[0x27])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7);
    }
    __vbaObjSetAddref();
    (*(code *)(*pppppppcVar12)[199])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    __vbaObjSet(&pppppppcStack_37c,pppppppcVar22);
    __vbaFreeObj();
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_29c,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_2a0);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_2a0;
    iVar7 = (*(code *)(*pppppppcStack_2a0)[0x20])(pppppppcStack_2a0,&ppppppcStack_33c);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00417a98,0x80);
    }
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1c])(pppppppcStack_298,&ppppppcStack_338);
    uVar23 = 0;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    dStack_558 = (double)(int)pppppppcVar12[0x31];
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    fStack_55c = (float)ppppppcStack_33c + (float)ppppppcStack_338 + (float)(int)pppppppcVar12[0x31]
    ;
    pppppppcStack_604 = (code *******)(*(code *)(*pppppppcStack_37c)[0x1d])();
    if ((int)pppppppcStack_604 < 0) {
      pppppppcStack_608 = (code *******)0x46d4d5;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_294;
    pppppppcStack_608 = (code *******)0x4;
    pppppppcStack_60c = (code *******)0x46d4ed;
    __vbaFreeObjList();
    fStack_560 = (float)(int)pppppppcStack_288;
    iVar7 = (*(code *)(*pppppppcStack_37c)[0x1b])();
    if (iVar7 < 0) {
      pppppppcStack_604 = (code *******)&DAT_00417a98;
      pppppppcStack_608 = pppppppcStack_37c;
      pppppppcStack_610 = (code *******)0x46d523;
      pppppppcStack_60c = (code *******)iVar7;
      __vbaHresultCheckObj();
    }
    fStack_564 = (float)(int)pppppppcStack_280;
    pppppppcStack_604 = pppppppcStack_37c;
    pppppppcStack_608 = (code *******)0x46d53f;
    pppppppcVar22 = (code *******)(*(code *)(*pppppppcStack_37c)[0x1f])();
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_608 = (code *******)0x7c;
      pppppppcStack_60c = (code *******)&DAT_00417a98;
      pppppppcStack_610 = pppppppcStack_37c;
      pppppppcStack_618 = (code *******)0x46d556;
      pppppppcStack_614 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_60c = (code *******)0x46d55f;
    pppppppcStack_608 = pppppppcVar12;
    pppppppcStack_60c = (code *******)(*(code *)(*pppppppcVar12)[0xcb])();
    pppppppcStack_610 = (code *******)&pppppppcStack_294;
    pppppppcStack_614 = (code *******)0x46d56a;
    pppppppcStack_610 = (code *******)__vbaObjSet();
    pppppppcStack_60c = (code *******)apppppppcStack_334;
    pppppppcStack_614 = (code *******)0x46d57c;
    iVar7 = (*(code *)(*pppppppcStack_610)[0x38])();
    if (iVar7 < 0) {
      pppppppcStack_614 = (code *******)0xe0;
      pppppppcStack_618 = (code *******)&DAT_00417e48;
      __vbaHresultCheckObj();
    }
    pppppppcStack_614 = (code *******)-(uint)((short)apppppppcStack_334[0] == 1);
    pppppppcStack_618 = pppppppcStack_37c;
    iVar7 = (*(code *)(*pppppppcStack_37c)[0x25])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaObjSetAddref();
    (*(code *)(*pppppppcVar12)[200])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4);
    }
    pppppppcStack_298 = (code *******)0x0;
    __vbaObjSet(&pppppppcStack_380);
    __vbaFreeObj();
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])();
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_29c,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_2a0);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_2a0;
    iVar7 = (*(code *)(*pppppppcStack_2a0)[0x20])(pppppppcStack_2a0,&ppppppcStack_33c);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00417a98,0x80);
    }
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1c])(pppppppcStack_298,&ppppppcStack_338);
    uVar23 = 0;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    dStack_56c = (double)(int)pppppppcVar12[0x32];
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    fStack_570 = (float)ppppppcStack_33c + (float)ppppppcStack_338 + (float)(int)pppppppcVar12[0x32]
    ;
    pppppppcStack_604 = (code *******)(*(code *)(*pppppppcStack_380)[0x1d])();
    if ((int)pppppppcStack_604 < 0) {
      pppppppcStack_608 = (code *******)0x46d750;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_294;
    pppppppcStack_608 = (code *******)0x4;
    pppppppcStack_60c = (code *******)0x46d768;
    __vbaFreeObjList();
    fStack_574 = (float)(int)pppppppcStack_288;
    iVar7 = (*(code *)(*pppppppcStack_380)[0x1b])();
    if (iVar7 < 0) {
      pppppppcStack_604 = (code *******)&DAT_00417a98;
      pppppppcStack_608 = pppppppcStack_380;
      pppppppcStack_610 = (code *******)0x46d79e;
      pppppppcStack_60c = (code *******)iVar7;
      __vbaHresultCheckObj();
    }
    fStack_578 = (float)(int)pppppppcStack_280;
    pppppppcStack_604 = pppppppcStack_380;
    pppppppcStack_608 = (code *******)0x46d7ba;
    pppppppcVar22 = (code *******)(*(code *)(*pppppppcStack_380)[0x1f])();
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_608 = (code *******)0x7c;
      pppppppcStack_60c = (code *******)&DAT_00417a98;
      pppppppcStack_610 = pppppppcStack_380;
      pppppppcStack_618 = (code *******)0x46d7d1;
      pppppppcStack_614 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_60c = (code *******)0x46d7da;
    pppppppcStack_608 = pppppppcVar12;
    pppppppcStack_60c = (code *******)(*(code *)(*pppppppcVar12)[0xcb])();
    pppppppcStack_610 = (code *******)&pppppppcStack_294;
    pppppppcStack_614 = (code *******)0x46d7e5;
    pppppppcStack_610 = (code *******)__vbaObjSet();
    pppppppcStack_60c = (code *******)apppppppcStack_334;
    pppppppcStack_614 = (code *******)0x46d7f7;
    iVar7 = (*(code *)(*pppppppcStack_610)[0x38])();
    if (iVar7 < 0) {
      pppppppcStack_614 = (code *******)0xe0;
      pppppppcStack_618 = (code *******)&DAT_00417e48;
      __vbaHresultCheckObj();
    }
    pppppppcStack_614 = (code *******)-(uint)((short)apppppppcStack_334[0] == 1);
    pppppppcStack_618 = pppppppcStack_380;
    iVar7 = (*(code *)(*pppppppcStack_380)[0x25])();
    uVar23 = 0;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    dStack_580 = (double)(int)pppppppcStack_28c;
    if (DAT_0047f000 == 0) {
      fVar24 = (float10)(int)pppppppcStack_28c / (float10)2.0;
      pppppppcVar22 = pppppppcStack_380;
    }
    else {
      fVar24 = (float10)adj_fdiv_m64();
      pppppppcVar22 = extraout_ECX_00;
    }
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    fStack_584 = (float)fVar24;
    pppppppcVar22 = (code *******)(*(code *)(*pppppppcVar22)[0x21])();
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_608 = (code *******)0x46d8c1;
      pppppppcStack_604 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    __vbaObjSetAddref();
    (*(code *)(*pppppppcVar12)[0xc5])();
    pppppppcStack_604 = (code *******)0x46d8e4;
    pppppppcVar22 = (code *******)__vbaObjSet();
    pppppppcStack_608 = (code *******)0x46d8f4;
    pppppppcStack_604 = pppppppcVar22;
    pppppppcVar13 = (code *******)(*(code *)(*pppppppcVar22)[0x10])();
    if ((int)pppppppcVar13 < 0) {
      pppppppcStack_608 = (code *******)0x40;
      pppppppcStack_60c = (code *******)&DAT_004182e4;
      pppppppcStack_618 = (code *******)0x46d905;
      pppppppcStack_614 = pppppppcVar13;
      pppppppcStack_610 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_60c = (code *******)&pppppppcStack_384;
    pppppppcStack_608 = pppppppcStack_298;
    pppppppcStack_298 = (code *******)0x0;
    pppppppcStack_610 = (code *******)0x46d91f;
    __vbaObjSet();
    pppppppcStack_608 = (code *******)0x46d928;
    __vbaFreeObj();
    pppppppcStack_60c = (code *******)0x46d931;
    pppppppcStack_608 = pppppppcVar12;
    pppppppcStack_60c = (code *******)(*(code *)(*pppppppcVar12)[0xc3])();
    pppppppcStack_610 = (code *******)&pppppppcStack_29c;
    pppppppcStack_614 = (code *******)0x46d938;
    pppppppcStack_614 = (code *******)__vbaObjSet();
    pppppppcStack_60c = (code *******)&pppppppcStack_2a0;
    pppppppcStack_610 = pppppppcStack_284;
    pppppppcStack_618 = (code *******)0x46d948;
    iVar7 = (*(code *)(*pppppppcStack_614)[0x10])();
    if (iVar7 < 0) {
      pppppppcStack_618 = (code *******)0x40;
      __vbaHresultCheckObj();
    }
    pppppppcStack_618 = &ppppppcStack_33c;
    iVar7 = (*(code *)(*pppppppcStack_2a0)[0x20])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    (*(code *)(*pppppppcVar12)[0xc3])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1c])(pppppppcStack_298,&ppppppcStack_338);
    uVar23 = 0;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    dStack_58c = (double)(int)pppppppcVar12[0x31];
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    fStack_590 = (float)ppppppcStack_33c + (float)ppppppcStack_338 + (float)(int)pppppppcVar12[0x31]
    ;
    pppppppcStack_604 = (code *******)(*(code *)(*pppppppcStack_384)[0x1d])();
    if ((int)pppppppcStack_604 < 0) {
      pppppppcStack_608 = (code *******)0x46da3f;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_294;
    pppppppcStack_608 = (code *******)0x4;
    pppppppcStack_60c = (code *******)0x46da57;
    __vbaFreeObjList();
    fStack_594 = (float)(int)pppppppcStack_288;
    iVar7 = (*(code *)(*pppppppcStack_384)[0x1b])();
    if (iVar7 < 0) {
      pppppppcStack_604 = (code *******)&DAT_00417a98;
      pppppppcStack_608 = pppppppcStack_384;
      pppppppcStack_610 = (code *******)0x46da8d;
      pppppppcStack_60c = (code *******)iVar7;
      __vbaHresultCheckObj();
    }
    fStack_598 = (float)(int)pppppppcStack_280;
    pppppppcStack_604 = pppppppcStack_384;
    pppppppcStack_608 = (code *******)0x46daa9;
    pppppppcVar22 = (code *******)(*(code *)(*pppppppcStack_384)[0x1f])();
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_608 = (code *******)0x7c;
      pppppppcStack_60c = (code *******)&DAT_00417a98;
      pppppppcStack_610 = pppppppcStack_384;
      pppppppcStack_618 = (code *******)0x46dac0;
      pppppppcStack_614 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_60c = (code *******)0x46dac9;
    pppppppcStack_608 = pppppppcVar12;
    pppppppcStack_60c = (code *******)(*(code *)(*pppppppcVar12)[0xcb])();
    pppppppcStack_610 = (code *******)&pppppppcStack_294;
    pppppppcStack_614 = (code *******)0x46dad4;
    pppppppcStack_610 = (code *******)__vbaObjSet();
    pppppppcStack_60c = (code *******)apppppppcStack_334;
    pppppppcStack_614 = (code *******)0x46dae6;
    iVar7 = (*(code *)(*pppppppcStack_610)[0x38])();
    if (iVar7 < 0) {
      pppppppcStack_614 = (code *******)0xe0;
      pppppppcStack_618 = (code *******)&DAT_00417e48;
      __vbaHresultCheckObj();
    }
    pppppppcStack_614 = (code *******)-(uint)((short)apppppppcStack_334[0] == 0);
    pppppppcStack_618 = pppppppcStack_384;
    iVar7 = (*(code *)(*pppppppcStack_384)[0x25])();
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaObjSetAddref();
    (*(code *)(*pppppppcVar12)[0xc6])();
    piVar14 = (int *)__vbaObjSet();
    iVar7 = (**(code **)(*piVar14 + 0x40))();
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4);
    }
    pppppppcStack_298 = (code *******)0x0;
    __vbaObjSet(&pppppppcStack_388);
    __vbaFreeObj();
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])();
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_29c,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_2a0);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    pppppppcVar22 = pppppppcStack_2a0;
    iVar7 = (*(code *)(*pppppppcStack_2a0)[0x20])(pppppppcStack_2a0,&ppppppcStack_33c);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,pppppppcVar22,&DAT_00417a98,0x80);
    }
    uVar15 = (*(code *)(*pppppppcVar12)[0xc3])(pppppppcVar12);
    piVar14 = (int *)__vbaObjSet(&pppppppcStack_294,uVar15);
    iVar7 = (**(code **)(*piVar14 + 0x40))(piVar14,pppppppcStack_284,&pppppppcStack_298);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar14,&DAT_004182e4,0x40);
    }
    iVar7 = (*(code *)(*pppppppcStack_298)[0x1c])(pppppppcStack_298,&ppppppcStack_338);
    uVar23 = 0;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    dStack_5a0 = (double)(int)pppppppcVar12[0x32];
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    fStack_5a4 = (float)ppppppcStack_33c + (float)ppppppcStack_338 + (float)(int)pppppppcVar12[0x32]
    ;
    pppppppcStack_604 = (code *******)(*(code *)(*pppppppcStack_388)[0x1d])();
    if ((int)pppppppcStack_604 < 0) {
      pppppppcStack_608 = (code *******)0x46dcb9;
      __vbaHresultCheckObj();
    }
    pppppppcStack_604 = (code *******)&pppppppcStack_294;
    pppppppcStack_608 = (code *******)0x4;
    pppppppcStack_60c = (code *******)0x46dcd1;
    __vbaFreeObjList();
    fStack_5a8 = (float)(int)pppppppcStack_288;
    iVar7 = (*(code *)(*pppppppcStack_388)[0x1b])();
    if (iVar7 < 0) {
      pppppppcStack_604 = (code *******)&DAT_00417a98;
      pppppppcStack_608 = pppppppcStack_388;
      pppppppcStack_610 = (code *******)0x46dd07;
      pppppppcStack_60c = (code *******)iVar7;
      __vbaHresultCheckObj();
    }
    fStack_5ac = (float)(int)pppppppcStack_280;
    pppppppcStack_604 = pppppppcStack_388;
    pppppppcStack_608 = (code *******)0x46dd23;
    pppppppcVar22 = (code *******)(*(code *)(*pppppppcStack_388)[0x1f])();
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_608 = (code *******)0x7c;
      pppppppcStack_60c = (code *******)&DAT_00417a98;
      pppppppcStack_610 = pppppppcStack_388;
      pppppppcStack_618 = (code *******)0x46dd3a;
      pppppppcStack_614 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_60c = (code *******)0x46dd43;
    pppppppcStack_608 = pppppppcVar12;
    pppppppcStack_60c = (code *******)(*(code *)(*pppppppcVar12)[0xcb])();
    pppppppcStack_610 = (code *******)&pppppppcStack_294;
    pppppppcStack_614 = (code *******)0x46dd4e;
    pppppppcStack_610 = (code *******)__vbaObjSet();
    pppppppcStack_60c = (code *******)apppppppcStack_334;
    pppppppcStack_614 = (code *******)0x46dd60;
    iVar7 = (*(code *)(*pppppppcStack_610)[0x38])();
    if (iVar7 < 0) {
      pppppppcStack_614 = (code *******)0xe0;
      pppppppcStack_618 = (code *******)&DAT_00417e48;
      __vbaHresultCheckObj();
    }
    pppppppcStack_614 = (code *******)-(uint)((short)apppppppcStack_334[0] == 0);
    pppppppcStack_618 = pppppppcStack_388;
    iVar7 = (*(code *)(*pppppppcStack_388)[0x25])();
    uVar23 = 0;
    if (iVar7 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    dStack_5b4 = (double)(int)pppppppcStack_28c;
    if (DAT_0047f000 == 0) {
      fVar24 = (float10)(int)pppppppcStack_28c / (float10)2.0;
      pppppppcVar13 = pppppppcStack_388;
    }
    else {
      fVar24 = (float10)adj_fdiv_m64();
      pppppppcVar13 = extraout_ECX_01;
    }
    if ((uVar23 & 0xd) != 0) goto LAB_0046e04d;
    fStack_5b8 = (float)fVar24;
    ppppppcVar21 = (code ******)0x46de0f;
    pppppppcVar22 = (code *******)(*(code *)(*pppppppcVar13)[0x21])();
    if ((int)pppppppcVar22 < 0) {
      pppppppcStack_604 = (code *******)0x84;
      pppppppcStack_608 = (code *******)&DAT_00417a98;
      pppppppcStack_60c = pppppppcStack_388;
      pppppppcStack_614 = (code *******)0x46de29;
      pppppppcStack_610 = pppppppcVar22;
      __vbaHresultCheckObj();
    }
    pppppppcStack_608 = (code *******)&pppppppcStack_388;
    pppppppcStack_604 = (code *******)0x0;
    pppppppcStack_60c = (code *******)0x46de38;
    __vbaObjSetAddref();
    pcVar18 = __vbaObjSet_exref;
    pppppppcVar22 = (code *******)(uint)(ushort)((short)pppppppcStack_284 + 1);
    if (SCARRY2((short)pppppppcStack_284,1)) break;
LAB_0046cba7:
    pppppppcStack_284 = pppppppcVar22;
    if ((short)uStack_3c8 < (short)pppppppcStack_284) {
      pppppppcStack_604 = (code *******)0x0;
      pppppppcStack_608 = (code *******)0x0;
      pppppppcStack_610 = (code *******)0x46de62;
      pppppppcStack_60c = pppppppcVar12;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar12)[0xe3])();
      pppppppcStack_614 = (code *******)&pppppppcStack_294;
      pppppppcStack_618 = (code *******)0x46de69;
      pppppppcStack_618 = (code *******)(*pcVar18)();
      pppppppcStack_610 = (code *******)__vbaLateIdCallLd();
      pppppppcStack_614 = (code *******)0x46de7e;
      __vbaI4Var();
      pppppppcStack_614 = (code *******)0x46de86;
      uVar5 = __vbaI2I4();
      *(undefined2 *)(pppppppcVar12 + 0x27) = uVar5;
      pppppppcStack_610 = (code *******)0x46de96;
      __vbaFreeObj();
      pppppppcStack_610 = (code *******)0x46de9f;
      __vbaFreeVar();
      pppppppcStack_610 = (code *******)0x46dea8;
      pppppppcStack_60c = pppppppcVar12;
      pppppppcStack_610 = (code *******)(*(code *)(*pppppppcVar12)[0xcb])();
      pppppppcStack_614 = (code *******)&pppppppcStack_29c;
      pppppppcStack_618 = (code *******)0x46deaf;
      pppppppcStack_350 = (code *******)(*pcVar18)();
      pppppppcStack_618 = pppppppcVar12;
      (*(code *)(*pppppppcVar12)[0xc9])();
      pppppppcStack_340 = (code *******)(*pcVar18)();
      iVar7 = (*(code *)(*pppppppcStack_340)[0x10])();
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,pppppppcStack_340,&DAT_004182e4,0x40);
      }
      pppppppcStack_348 = pppppppcStack_298;
      iVar7 = (*(code *)(*pppppppcStack_298)[0x1e])(pppppppcStack_298,&ppppppcStack_338);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,pppppppcStack_348,&DAT_00417e48,0x78);
      }
      iVar7 = (*(code *)(*pppppppcStack_350)[0x1f])(pppppppcStack_350,ppppppcStack_338);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,pppppppcStack_350,&DAT_00417e48,0x7c);
      }
      __vbaFreeObjList(3,&pppppppcStack_294,&pppppppcStack_298,&pppppppcStack_29c);
      uVar15 = (*(code *)(*pppppppcVar12)[0xc0])(pppppppcVar12);
      piVar14 = (int *)(*pcVar18)(&pppppppcStack_294,uVar15);
      iVar7 = (**(code **)(*piVar14 + 0x9c))(piVar14,pppppppcStack_270);
      if (iVar7 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaFreeObj();
      goto LAB_0046df9a;
    }
    if ((SBORROW2((short)pppppppcStack_284,1)) ||
       (lVar3 = (longlong)(int)(short)((short)pppppppcStack_284 + -1) *
                (longlong)(int)pppppppcStack_280, pppppppcVar22 = (code *******)lVar3,
       (int)pppppppcVar22 != lVar3)) break;
  }
LAB_0046e052:
  pppppppcStack_604 = (code *******)0x46e058;
  __vbaErrorOverflow();
  pppppppcStack_610 = (code *******)&LAB_004032d6;
  pppppppcStack_614 = ExceptionList;
  pppppppcStack_60c = (code *******)&stack0xfffff9d4;
  pppppppcStack_608 = (code *******)&LAB_00402c28;
  pppppppcStack_604 = (code *******)((uint)ppppppcVar21 & 1);
  piVar14 = (int *)((uint)ppppppcVar21 & 0xfffffffe);
  ExceptionList = &pppppppcStack_614;
  (**(code **)(*piVar14 + 4))(piVar14);
  pppppppcStack_618 = (code *******)0x0;
  __vbaObjSetAddref(&pppppppcStack_618,pppppppcVar13);
  (**(code **)(*piVar14 + 0x704))(piVar14,&pppppppcStack_618);
  pppppppcStack_604 = (code *******)0x0;
  __vbaFreeObj(&LAB_0046e0d2);
  return;
}

/* ---- 0x4698c0 (FUN_004698c0) [estimated] strings:  ---- */
void FUN_004698c0(uint param_1)

{
  longlong lVar1;
  code *****pppppcVar2;
  undefined2 uVar3;
  int *piVar4;
  code ******ppppppcVar5;
  code *****pppppcVar6;
  code ******ppppppcVar7;
  int iVar8;
  code *****pppppcVar9;
  code ****ppppcVar10;
  undefined4 uVar11;
  code ******ppppppcVar12;
  undefined2 extraout_var;
  int *extraout_ECX;
  code ******extraout_ECX_00;
  code ******extraout_ECX_01;
  code *pcVar13;
  ushort uVar14;
  code *pcVar15;
  uint uVar16;
  code ******ppppppcVar17;
  ushort uVar18;
  float10 fVar19;
  code *****pppppcStack_4b4;
  code *****pppppcStack_4b0;
  code *****pppppcStack_4ac;
  code *****pppppcStack_4a8;
  code *****pppppcStack_4a4;
  code *****pppppcStack_4a0;
  code *pcStack_460;
  code *****pppppcStack_45c;
  code *****pppppcStack_458;
  float fStack_454;
  double dStack_450;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  double dStack_43c;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  double dStack_428;
  float fStack_420;
  double dStack_41c;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  double dStack_408;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  double dStack_3f4;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  double dStack_3e0;
  float fStack_3d8;
  double dStack_3d4;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  code ****ppppcStack_3b4;
  code ****ppppcStack_3b0;
  code ****ppppcStack_3ac;
  code ****ppppcStack_3a8;
  code ****ppppcStack_3a4;
  code ****ppppcStack_3a0;
  code ****ppppcStack_39c;
  code ****ppppcStack_394;
  code ****ppppcStack_390;
  code ****ppppcStack_38c;
  code ****ppppcStack_388;
  code ****ppppcStack_384;
  code ****ppppcStack_380;
  code ****ppppcStack_37c;
  code ****ppppcStack_378;
  double dStack_374;
  int iStack_36c;
  double dStack_368;
  double dStack_360;
  double dStack_354;
  double dStack_34c;
  float fStack_344;
  code *****pppppcStack_340;
  uint uStack_33c;
  float fStack_338;
  code *pcStack_334;
  code *****pppppcStack_330;
  code ****ppppcStack_32c;
  code ****ppppcStack_324;
  code ****ppppcStack_320;
  double dStack_31c;
  double dStack_310;
  double dStack_308;
  double dStack_2fc;
  double dStack_2f0;
  undefined4 uStack_264;
  undefined4 uStack_25c;
  short sStack_254;
  undefined4 uStack_244;
  undefined4 uStack_23c;
  short sStack_234;
  code *****pppppcStack_224;
  code *****pppppcStack_220;
  code *****pppppcStack_21c;
  code *****pppppcStack_218;
  code *****pppppcStack_214;
  int *piStack_210;
  int *piStack_20c;
  int *piStack_208;
  code *****pppppcStack_204;
  code *****apppppcStack_200 [5];
  code *****pppppcStack_1ec;
  code *****pppppcStack_1e4;
  code *****pppppcStack_1e0;
  code *****pppppcStack_1dc;
  code ****ppppcStack_1d8;
  code ****ppppcStack_1d4;
  code *****apppppcStack_1d0 [5];
  undefined4 uStack_1bc;
  code *****pppppcStack_1b8;
  code *****pppppcStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_18c;
  code *****pppppcStack_188;
  code *****pppppcStack_180;
  code ****appppcStack_17c [4];
  code ****appppcStack_16c [3];
  undefined4 uStack_160;
  code ****ppppcStack_15c;
  code ****ppppcStack_158;
  undefined8 uStack_154;
  code ****ppppcStack_14c;
  code *****pppppcStack_148;
  code *****pppppcStack_144;
  code *****pppppcStack_140;
  code *****pppppcStack_13c;
  code *****pppppcStack_138;
  code *****pppppcStack_134;
  code *****pppppcStack_130;
  code *****pppppcStack_12c;
  code *****pppppcStack_128;
  code *****pppppcStack_124;
  code *****pppppcStack_120;
  code *****pppppcStack_11c;
  code *****pppppcStack_118;
  code *****pppppcStack_114;
  code *****pppppcStack_110;
  code *****pppppcStack_10c;
  code *****pppppcStack_108;
  code *****pppppcStack_104;
  code *****pppppcStack_100;
  code *****pppppcStack_fc;
  code *****pppppcStack_f8;
  code *****pppppcStack_f4;
  code ****ppppcStack_f0;
  code *****pppppcStack_ec;
  code ****ppppcStack_e8;
  code *****pppppcStack_e4;
  undefined4 uStack_e0;
  code *****pppppcStack_dc;
  undefined4 local_7c;
  code ****local_78;
  code ****local_74;
  code ****local_70 [6];
  undefined4 local_58;
  undefined4 local_50;
  code ****local_4c [4];
  code *****local_3c;
  undefined4 local_38;
  code *****local_34;
  code *****local_30;
  code *****local_2c;
  code *****local_28;
  code *****local_24;
  code ****local_20;
  code ****local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff28;
  local_c = &DAT_00402c08;
  local_8 = param_1 & 1;
  ppppppcVar17 = (code ******)(param_1 & 0xfffffffe);
  uStack_e0 = 0x469907;
  ExceptionList = &pvStack_18;
  pppppcStack_dc = (code *****)ppppppcVar17;
  (*(code *)(*ppppppcVar17)[1])();
  ppppcStack_f0 = (code ****)0x6;
  pppppcStack_ec = (code *****)0x3;
  local_20 = (code ****)0x0;
  ppppcStack_e8 = (code ****)local_58;
  local_24 = (code *****)0x0;
  local_28 = (code *****)0x0;
  pppppcStack_e4 = (code *****)0x6;
  local_2c = (code *****)0x0;
  local_30 = (code *****)0x0;
  local_34 = (code *****)0x0;
  local_38 = 0;
  local_3c = (code *****)0x0;
  local_4c[0] = (code ****)0x0;
  local_70[0] = (code ****)0x0;
  local_74 = (code ****)0x0;
  local_78 = (code ****)0x0;
  local_7c = 0;
  *(undefined2 *)(ppppppcVar17 + 0x27) = 1;
  *(undefined2 *)((int)ppppppcVar17 + 0x9e) = 1;
  uStack_e0 = local_50;
  pppppcStack_f8 = (code *****)0x469969;
  pppppcStack_f4 = (code *****)ppppppcVar17;
  pppppcStack_f8 = (code *****)(*(code *)(*ppppppcVar17)[0xe3])();
  pcVar15 = __vbaObjSet_exref;
  pppppcStack_fc = &local_20;
  pppppcStack_100 = (code *****)0x469976;
  pppppcStack_f8 = (code *****)__vbaObjSet();
  pppppcStack_fc = (code *****)0x46997d;
  __vbaLateIdSt();
  pppppcStack_e4 = (code *****)0x469986;
  __vbaFreeObj();
  ppppcStack_e8 = (code ****)0x46998f;
  pppppcStack_e4 = (code *****)ppppppcVar17;
  ppppcStack_e8 = (code ****)(*(code *)(*ppppppcVar17)[0xc0])();
  pppppcStack_ec = &local_20;
  ppppcStack_f0 = (code ****)0x469996;
  piVar4 = (int *)__vbaObjSet();
  ppppcStack_e8 = (code ****)&local_74;
  ppppcStack_f0 = (code ****)0x4699a6;
  pppppcStack_ec = (code *****)piVar4;
  ppppppcVar5 = (code ******)(**(code **)(*piVar4 + 0x88))();
  pcVar13 = __vbaHresultCheckObj_exref;
  if ((int)ppppppcVar5 < 0) {
    ppppcStack_f0 = (code ****)0x88;
    pppppcStack_f4 = (code *****)&DAT_0041804c;
    pppppcStack_100 = (code *****)0x4699c3;
    pppppcStack_fc = (code *****)ppppppcVar5;
    pppppcStack_f8 = (code *****)piVar4;
    __vbaHresultCheckObj();
  }
  ppppcStack_f0 = (code ****)local_70;
  pppppcStack_f8 = (code *****)0x4699d8;
  pppppcStack_f4 = (code *****)ppppppcVar17;
  ppppppcVar5 = (code ******)(*(code *)(*ppppppcVar17)[0x22])();
  uVar18 = 0;
  if ((int)ppppppcVar5 < 0) {
    pppppcStack_f8 = (code *****)0x88;
    pppppcStack_fc = (code *****)&DAT_0041708c;
    pppppcStack_108 = (code *****)0x4699ec;
    pppppcStack_104 = (code *****)ppppppcVar5;
    pppppcStack_100 = (code *****)ppppppcVar17;
    __vbaHresultCheckObj();
  }
  if ((uVar18 & 0xd) == 0) {
    pppppcStack_f8 = (code *****)0x469a02;
    pppppcVar6 = (code *****)__vbaFpI4();
    ppppppcVar17[0x29] = pppppcVar6;
    pppppcStack_f8 = (code *****)0x469a11;
    __vbaFreeObj();
    pppppcStack_fc = (code *****)0x469a1a;
    pppppcStack_f8 = (code *****)ppppppcVar17;
    pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xc0])();
    pppppcStack_100 = &local_20;
    pppppcStack_104 = (code *****)0x469a21;
    ppppppcVar5 = (code ******)__vbaObjSet();
    pppppcStack_fc = &local_74;
    pppppcStack_104 = (code *****)0x469a31;
    pppppcStack_100 = (code *****)ppppppcVar5;
    ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x20])();
    if ((int)ppppppcVar7 < 0) {
      pppppcStack_104 = (code *****)0x80;
      pppppcStack_108 = (code *****)&DAT_0041804c;
      pppppcStack_114 = (code *****)0x469a48;
      pppppcStack_110 = (code *****)ppppppcVar7;
      pppppcStack_10c = (code *****)ppppppcVar5;
      __vbaHresultCheckObj();
    }
    pppppcStack_104 = local_70;
    pppppcStack_10c = (code *****)0x469a55;
    pppppcStack_108 = (code *****)ppppppcVar17;
    ppppppcVar5 = (code ******)(*(code *)(*ppppppcVar17)[0x20])();
    uVar18 = 0;
    if ((int)ppppppcVar5 < 0) {
      pppppcStack_f8 = (code *****)0x80;
      pppppcStack_fc = (code *****)&DAT_0041708c;
      pppppcStack_108 = (code *****)0x469a69;
      pppppcStack_104 = (code *****)ppppppcVar5;
      pppppcStack_100 = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    if ((uVar18 & 0xd) == 0) {
      pppppcStack_f8 = (code *****)0x469a7f;
      pppppcVar6 = (code *****)__vbaFpI4();
      ppppppcVar17[0x2a] = pppppcVar6;
      pppppcStack_f8 = (code *****)0x469a8e;
      __vbaFreeObj();
      pppppcStack_f8 = (code *****)0x0;
      pppppcStack_fc = (code *****)0x80010005;
      pppppcStack_104 = (code *****)0x469a9e;
      pppppcStack_100 = (code *****)ppppppcVar17;
      pppppcStack_104 = (code *****)(*(code *)(*ppppppcVar17)[0xe2])();
      pppppcStack_108 = &local_20;
      pppppcStack_10c = (code *****)0x469aa5;
      pppppcStack_104 = (code *****)__vbaObjSet();
      pppppcStack_108 = local_4c;
      pppppcStack_10c = (code *****)0x469ab0;
      __vbaLateIdCallLd();
      pppppcStack_fc = local_70;
      pppppcStack_104 = (code *****)0x469ac0;
      pppppcStack_100 = (code *****)ppppppcVar17;
      ppppppcVar5 = (code ******)(*(code *)(*ppppppcVar17)[0x20])();
      uVar18 = 0;
      if ((int)ppppppcVar5 < 0) {
        pppppcStack_104 = (code *****)0x80;
        pppppcStack_108 = (code *****)&DAT_0041708c;
        pppppcStack_114 = (code *****)0x469ad4;
        pppppcStack_110 = (code *****)ppppppcVar5;
        pppppcStack_10c = (code *****)ppppppcVar17;
        __vbaHresultCheckObj();
      }
      pppppcStack_104 = local_4c;
      pppppcStack_108 = (code *****)0x469ade;
      __vbaR4Var();
      if ((uVar18 & 0xd) == 0) {
        pppppcStack_f8 = (code *****)0x469af1;
        pppppcVar6 = (code *****)__vbaFpI4();
        ppppppcVar17[0x2b] = pppppcVar6;
        pppppcStack_f8 = (code *****)0x469b00;
        __vbaFreeObj();
        pppppcStack_f8 = (code *****)0x469b09;
        __vbaFreeVar();
        pppppcStack_f8 = (code *****)0x469b12;
        pppppcStack_f4 = (code *****)ppppppcVar17;
        pppppcStack_f8 = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
        pppppcStack_fc = (code *****)&local_24;
        pppppcStack_100 = (code *****)0x469b19;
        ppppppcVar5 = (code ******)__vbaObjSet();
        pppppcStack_f8 = (code *****)&local_28;
        pppppcStack_fc = (code *****)0x0;
        pppppcStack_104 = (code *****)0x469b28;
        pppppcStack_100 = (code *****)ppppppcVar5;
        ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
        if ((int)ppppppcVar7 < 0) {
          pppppcStack_104 = (code *****)0x40;
          pppppcStack_108 = (code *****)&DAT_004182e4;
          pppppcStack_114 = (code *****)0x469b3c;
          pppppcStack_110 = (code *****)ppppppcVar7;
          pppppcStack_10c = (code *****)ppppppcVar5;
          __vbaHresultCheckObj();
        }
        pppppcVar6 = local_28;
        pppppcStack_104 = &local_74;
        pppppcStack_108 = local_28;
        pppppcStack_10c = (code *****)0x469b52;
        ppppppcVar5 = (code ******)(*(code *)(*local_28)[0x22])();
        if ((int)ppppppcVar5 < 0) {
          pppppcStack_10c = (code *****)0x88;
          pppppcStack_110 = (code *****)&DAT_00418668;
          pppppcStack_114 = pppppcVar6;
          pppppcStack_11c = (code *****)0x469b6c;
          pppppcStack_118 = (code *****)ppppppcVar5;
          __vbaHresultCheckObj();
        }
        pppppcStack_110 = (code *****)0x469b75;
        pppppcStack_10c = (code *****)ppppppcVar17;
        pppppcStack_110 = (code *****)(*(code *)(*ppppppcVar17)[0xc0])();
        pppppcStack_114 = &local_20;
        pppppcStack_118 = (code *****)0x469b7c;
        ppppppcVar5 = (code ******)__vbaObjSet();
        pppppcStack_110 = local_70;
        pppppcStack_118 = (code *****)0x469b8f;
        pppppcStack_114 = (code *****)ppppppcVar5;
        ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x22])();
        uVar18 = 0;
        if ((int)ppppppcVar7 < 0) {
          pppppcStack_f8 = (code *****)0x88;
          pppppcStack_fc = (code *****)&DAT_0041804c;
          pppppcStack_108 = (code *****)0x469ba9;
          pppppcStack_104 = (code *****)ppppppcVar7;
          pppppcStack_100 = (code *****)ppppppcVar5;
          __vbaHresultCheckObj();
        }
        if ((uVar18 & 0xd) == 0) {
          pppppcStack_f8 = (code *****)0x469bbf;
          pppppcVar6 = (code *****)__vbaFpI4();
          ppppppcVar17[0x2c] = pppppcVar6;
          pppppcStack_f8 = (code *****)&local_28;
          pppppcStack_fc = (code *****)&local_24;
          pppppcStack_100 = &local_20;
          pppppcStack_104 = (code *****)0x3;
          pppppcStack_108 = (code *****)0x469bd9;
          __vbaFreeObjList();
          pppppcStack_f8 = (code *****)0x0;
          pppppcStack_fc = (code *****)0x80010006;
          pppppcStack_104 = (code *****)0x469bec;
          pppppcStack_100 = (code *****)ppppppcVar17;
          pppppcStack_104 = (code *****)(*(code *)(*ppppppcVar17)[0xe5])();
          pppppcStack_108 = (code *****)&local_28;
          pppppcStack_10c = (code *****)0x469bf3;
          pppppcStack_104 = (code *****)__vbaObjSet();
          pppppcStack_108 = local_4c;
          pppppcStack_10c = (code *****)0x469bfe;
          __vbaLateIdCallLd();
          pppppcStack_100 = (code *****)0x469c0a;
          pppppcStack_fc = (code *****)ppppppcVar17;
          pppppcStack_100 = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
          pppppcStack_104 = &local_20;
          pppppcStack_108 = (code *****)0x469c11;
          ppppppcVar5 = (code ******)__vbaObjSet();
          pppppcStack_100 = (code *****)&local_24;
          pppppcStack_104 = (code *****)0x0;
          pppppcStack_10c = (code *****)0x469c20;
          pppppcStack_108 = (code *****)ppppppcVar5;
          ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
          if ((int)ppppppcVar7 < 0) {
            pppppcStack_10c = (code *****)0x40;
            pppppcStack_110 = (code *****)&DAT_004182e4;
            pppppcStack_11c = (code *****)0x469c34;
            pppppcStack_118 = (code *****)ppppppcVar7;
            pppppcStack_114 = (code *****)ppppppcVar5;
            __vbaHresultCheckObj();
          }
          pppppcVar6 = local_24;
          pppppcStack_10c = local_70;
          pppppcStack_110 = local_24;
          pppppcStack_114 = (code *****)0x469c4a;
          ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x22])();
          uVar18 = 0;
          if ((int)ppppppcVar5 < 0) {
            pppppcStack_114 = (code *****)0x88;
            pppppcStack_118 = (code *****)&DAT_00418668;
            pppppcStack_11c = pppppcVar6;
            pppppcStack_124 = (code *****)0x469c64;
            pppppcStack_120 = (code *****)ppppppcVar5;
            __vbaHresultCheckObj();
          }
          pppppcStack_114 = local_4c;
          pppppcStack_118 = (code *****)0x469c6e;
          __vbaR4Var();
          if ((uVar18 & 0xd) == 0) {
            pppppcStack_f8 = (code *****)0x469c81;
            pppppcVar6 = (code *****)__vbaFpI4();
            ppppppcVar17[0x2d] = pppppcVar6;
            pppppcStack_f8 = (code *****)&local_28;
            pppppcStack_fc = (code *****)&local_24;
            pppppcStack_100 = &local_20;
            pppppcStack_104 = (code *****)0x3;
            pppppcStack_108 = (code *****)0x469c9b;
            __vbaFreeObjList();
            pppppcStack_f8 = (code *****)0x469ca7;
            __vbaFreeVar();
            pppppcStack_f8 = (code *****)0x469cb0;
            pppppcStack_f4 = (code *****)ppppppcVar17;
            pppppcStack_f8 = (code *****)(*(code *)(*ppppppcVar17)[0xc3])();
            pppppcStack_fc = (code *****)&local_28;
            pppppcStack_100 = (code *****)0x469cb7;
            ppppppcVar5 = (code ******)__vbaObjSet();
            pppppcStack_f8 = (code *****)&local_2c;
            pppppcStack_fc = (code *****)0x1;
            pppppcStack_104 = (code *****)0x469cc6;
            pppppcStack_100 = (code *****)ppppppcVar5;
            ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
            if ((int)ppppppcVar7 < 0) {
              pppppcStack_104 = (code *****)0x40;
              pppppcStack_108 = (code *****)&DAT_004182e4;
              pppppcStack_114 = (code *****)0x469cda;
              pppppcStack_110 = (code *****)ppppppcVar7;
              pppppcStack_10c = (code *****)ppppppcVar5;
              __vbaHresultCheckObj();
            }
            pppppcVar6 = local_2c;
            pppppcStack_104 = &local_74;
            pppppcStack_108 = local_2c;
            pppppcStack_10c = (code *****)0x469cf0;
            ppppppcVar5 = (code ******)(*(code *)(*local_2c)[0x20])();
            if ((int)ppppppcVar5 < 0) {
              pppppcStack_10c = (code *****)0x80;
              pppppcStack_110 = (code *****)&DAT_00417a98;
              pppppcStack_114 = pppppcVar6;
              pppppcStack_11c = (code *****)0x469d0a;
              pppppcStack_118 = (code *****)ppppppcVar5;
              __vbaHresultCheckObj();
            }
            pppppcStack_110 = (code *****)0x469d13;
            pppppcStack_10c = (code *****)ppppppcVar17;
            pppppcStack_110 = (code *****)(*(code *)(*ppppppcVar17)[200])();
            pppppcStack_114 = (code *****)&local_30;
            pppppcStack_118 = (code *****)0x469d1a;
            ppppppcVar5 = (code ******)__vbaObjSet();
            pppppcStack_110 = (code *****)&local_34;
            pppppcStack_114 = (code *****)0x1;
            pppppcStack_11c = (code *****)0x469d2c;
            pppppcStack_118 = (code *****)ppppppcVar5;
            ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
            if ((int)ppppppcVar7 < 0) {
              pppppcStack_11c = (code *****)0x40;
              pppppcStack_120 = (code *****)&DAT_004182e4;
              pppppcStack_12c = (code *****)0x469d43;
              pppppcStack_128 = (code *****)ppppppcVar7;
              pppppcStack_124 = (code *****)ppppppcVar5;
              __vbaHresultCheckObj();
            }
            pppppcVar6 = local_34;
            pppppcStack_11c = &local_78;
            pppppcStack_120 = local_34;
            pppppcStack_124 = (code *****)0x469d59;
            ppppppcVar5 = (code ******)(*(code *)(*local_34)[0x20])();
            if ((int)ppppppcVar5 < 0) {
              pppppcStack_124 = (code *****)0x80;
              pppppcStack_128 = (code *****)&DAT_00417a98;
              pppppcStack_12c = pppppcVar6;
              pppppcStack_134 = (code *****)0x469d73;
              pppppcStack_130 = (code *****)ppppppcVar5;
              __vbaHresultCheckObj();
            }
            pppppcStack_128 = (code *****)0x469d7c;
            pppppcStack_124 = (code *****)ppppppcVar17;
            pppppcStack_128 = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
            pppppcStack_12c = &local_20;
            pppppcStack_130 = (code *****)0x469d83;
            ppppppcVar5 = (code ******)__vbaObjSet();
            pppppcStack_128 = (code *****)&local_24;
            pppppcStack_12c = (code *****)0x0;
            pppppcStack_134 = (code *****)0x469d95;
            pppppcStack_130 = (code *****)ppppppcVar5;
            ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
            if ((int)ppppppcVar7 < 0) {
              pppppcStack_134 = (code *****)0x40;
              pppppcStack_138 = (code *****)&DAT_004182e4;
              pppppcStack_144 = (code *****)0x469dac;
              pppppcStack_140 = (code *****)ppppppcVar7;
              pppppcStack_13c = (code *****)ppppppcVar5;
              __vbaHresultCheckObj();
            }
            pppppcVar6 = local_24;
            pppppcStack_134 = local_70;
            pppppcStack_138 = local_24;
            pppppcStack_13c = (code *****)0x469dc2;
            ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x22])();
            uVar18 = 0;
            if ((int)ppppppcVar5 < 0) {
              pppppcStack_f8 = (code *****)0x88;
              pppppcStack_fc = (code *****)&DAT_00418668;
              pppppcStack_100 = pppppcVar6;
              pppppcStack_108 = (code *****)0x469ddc;
              pppppcStack_104 = (code *****)ppppppcVar5;
              __vbaHresultCheckObj();
            }
            if ((uVar18 & 0xd) == 0) {
              pppppcStack_f8 = (code *****)0x469df5;
              pppppcVar6 = (code *****)__vbaFpI4();
              ppppppcVar17[0x2e] = pppppcVar6;
              pppppcStack_f8 = (code *****)&local_34;
              pppppcStack_fc = (code *****)&local_30;
              pppppcStack_100 = (code *****)&local_2c;
              pppppcStack_104 = (code *****)&local_28;
              pppppcStack_108 = (code *****)&local_24;
              pppppcStack_10c = &local_20;
              pppppcStack_110 = (code *****)0x6;
              pppppcStack_114 = (code *****)0x469e1b;
              __vbaFreeObjList();
              pppppcStack_fc = (code *****)0x469e27;
              pppppcStack_f8 = (code *****)ppppppcVar17;
              pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xc3])();
              pppppcStack_100 = (code *****)&local_28;
              pppppcStack_104 = (code *****)0x469e2e;
              ppppppcVar5 = (code ******)__vbaObjSet();
              pppppcStack_fc = (code *****)&local_2c;
              pppppcStack_100 = (code *****)0x1;
              pppppcStack_108 = (code *****)0x469e3d;
              pppppcStack_104 = (code *****)ppppppcVar5;
              iVar8 = (*(code *)(*ppppppcVar5)[0x10])();
              if (iVar8 < 0) {
                pppppcStack_108 = (code *****)0x40;
                pppppcStack_10c = (code *****)&DAT_004182e4;
                pppppcStack_118 = (code *****)0x469e51;
                pppppcStack_114 = (code *****)iVar8;
                pppppcStack_110 = (code *****)ppppppcVar5;
                __vbaHresultCheckObj();
              }
              pppppcVar6 = local_2c;
              pppppcStack_108 = &local_74;
              pppppcStack_10c = local_2c;
              pppppcStack_110 = (code *****)0x469e64;
              ppppppcVar5 = (code ******)(*(code *)(*local_2c)[0x1e])();
              if ((int)ppppppcVar5 < 0) {
                pppppcStack_110 = (code *****)0x78;
                pppppcStack_114 = (code *****)&DAT_00417a98;
                pppppcStack_118 = pppppcVar6;
                pppppcStack_120 = (code *****)0x469e7b;
                pppppcStack_11c = (code *****)ppppppcVar5;
                __vbaHresultCheckObj();
              }
              pppppcStack_114 = (code *****)0x469e84;
              pppppcStack_110 = (code *****)ppppppcVar17;
              pppppcStack_114 = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
              pppppcStack_118 = &local_20;
              pppppcStack_11c = (code *****)0x469e8b;
              ppppppcVar5 = (code ******)__vbaObjSet();
              pppppcStack_114 = (code *****)&local_24;
              pppppcStack_118 = (code *****)0x3;
              pppppcStack_120 = (code *****)0x469e9d;
              pppppcStack_11c = (code *****)ppppppcVar5;
              ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
              if ((int)ppppppcVar7 < 0) {
                pppppcStack_120 = (code *****)0x40;
                pppppcStack_124 = (code *****)&DAT_004182e4;
                pppppcStack_130 = (code *****)0x469eb4;
                pppppcStack_12c = (code *****)ppppppcVar7;
                pppppcStack_128 = (code *****)ppppppcVar5;
                __vbaHresultCheckObj();
              }
              pppppcVar6 = local_24;
              pppppcStack_120 = local_70;
              pppppcStack_124 = local_24;
              pppppcStack_128 = (code *****)0x469eca;
              ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x20])();
              uVar18 = 0;
              if ((int)ppppppcVar5 < 0) {
                pppppcStack_f8 = (code *****)0x80;
                pppppcStack_fc = (code *****)&DAT_00418668;
                pppppcStack_100 = pppppcVar6;
                pppppcStack_108 = (code *****)0x469ee4;
                pppppcStack_104 = (code *****)ppppppcVar5;
                __vbaHresultCheckObj();
              }
              if ((uVar18 & 0xd) == 0) {
                pppppcStack_f8 = (code *****)0x469efa;
                pppppcVar6 = (code *****)__vbaFpI4();
                ppppppcVar17[0x2f] = pppppcVar6;
                pppppcStack_f8 = (code *****)&local_2c;
                pppppcStack_fc = (code *****)&local_28;
                pppppcStack_100 = (code *****)&local_24;
                pppppcStack_104 = &local_20;
                pppppcStack_108 = (code *****)0x4;
                pppppcStack_10c = (code *****)0x469f18;
                __vbaFreeObjList();
                pppppcStack_fc = (code *****)0x469f24;
                pppppcStack_f8 = (code *****)ppppppcVar17;
                pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xc3])();
                pppppcStack_100 = (code *****)&local_28;
                pppppcStack_104 = (code *****)0x469f2b;
                ppppppcVar5 = (code ******)__vbaObjSet();
                pppppcStack_fc = (code *****)&local_2c;
                pppppcStack_100 = (code *****)0x1;
                pppppcStack_108 = (code *****)0x469f3a;
                pppppcStack_104 = (code *****)ppppppcVar5;
                ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                if ((int)ppppppcVar7 < 0) {
                  pppppcStack_108 = (code *****)0x40;
                  pppppcStack_10c = (code *****)&DAT_004182e4;
                  pppppcStack_118 = (code *****)0x469f4e;
                  pppppcStack_114 = (code *****)ppppppcVar7;
                  pppppcStack_110 = (code *****)ppppppcVar5;
                  __vbaHresultCheckObj();
                }
                pppppcVar6 = local_2c;
                pppppcStack_108 = &local_74;
                pppppcStack_10c = local_2c;
                pppppcStack_110 = (code *****)0x469f61;
                ppppppcVar5 = (code ******)(*(code *)(*local_2c)[0x1c])();
                if ((int)ppppppcVar5 < 0) {
                  pppppcStack_110 = (code *****)0x70;
                  pppppcStack_114 = (code *****)&DAT_00417a98;
                  pppppcStack_118 = pppppcVar6;
                  pppppcStack_120 = (code *****)0x469f78;
                  pppppcStack_11c = (code *****)ppppppcVar5;
                  __vbaHresultCheckObj();
                }
                pppppcStack_114 = (code *****)0x469f81;
                pppppcStack_110 = (code *****)ppppppcVar17;
                pppppcStack_114 = (code *****)(*(code *)(*ppppppcVar17)[0xc3])();
                pppppcStack_118 = (code *****)&local_30;
                pppppcStack_11c = (code *****)0x469f88;
                ppppppcVar5 = (code ******)__vbaObjSet();
                pppppcStack_114 = (code *****)&local_34;
                pppppcStack_118 = (code *****)0x1;
                pppppcStack_120 = (code *****)0x469f9a;
                pppppcStack_11c = (code *****)ppppppcVar5;
                ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                if ((int)ppppppcVar7 < 0) {
                  pppppcStack_120 = (code *****)0x40;
                  pppppcStack_124 = (code *****)&DAT_004182e4;
                  pppppcStack_130 = (code *****)0x469fb1;
                  pppppcStack_12c = (code *****)ppppppcVar7;
                  pppppcStack_128 = (code *****)ppppppcVar5;
                  __vbaHresultCheckObj();
                }
                pppppcVar6 = local_34;
                pppppcStack_120 = &local_78;
                pppppcStack_124 = local_34;
                pppppcStack_128 = (code *****)0x469fc7;
                pppppcVar9 = (code *****)(*(code *)(*local_34)[0x20])();
                if ((int)pppppcVar9 < 0) {
                  pppppcStack_128 = (code *****)0x80;
                  pppppcStack_12c = (code *****)&DAT_00417a98;
                  pppppcStack_130 = pppppcVar6;
                  pppppcStack_138 = (code *****)0x469fe1;
                  pppppcStack_134 = pppppcVar9;
                  __vbaHresultCheckObj();
                }
                pppppcStack_12c = (code *****)0x469fea;
                pppppcStack_128 = (code *****)ppppppcVar17;
                pppppcStack_12c = (code *****)(*(code *)(*ppppppcVar17)[0xc9])();
                pppppcStack_130 = &local_20;
                pppppcStack_134 = (code *****)0x469ff1;
                pppppcVar6 = (code *****)__vbaObjSet();
                pppppcStack_12c = (code *****)&local_24;
                pppppcStack_130 = (code *****)0x1;
                pppppcStack_138 = (code *****)0x46a003;
                pppppcStack_134 = pppppcVar6;
                ppppppcVar5 = (code ******)(*(code *)(*pppppcVar6)[0x10])();
                if ((int)ppppppcVar5 < 0) {
                  pppppcStack_138 = (code *****)0x40;
                  pppppcStack_13c = (code *****)&DAT_004182e4;
                  pppppcStack_148 = (code *****)0x46a01a;
                  pppppcStack_144 = (code *****)ppppppcVar5;
                  pppppcStack_140 = pppppcVar6;
                  __vbaHresultCheckObj();
                }
                pppppcVar6 = local_24;
                pppppcStack_138 = local_70;
                pppppcStack_13c = local_24;
                pppppcStack_140 = (code *****)0x46a02d;
                ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x1e])();
                uVar18 = 0;
                if ((int)ppppppcVar5 < 0) {
                  pppppcStack_f8 = (code *****)0x78;
                  pppppcStack_fc = (code *****)&DAT_00417e48;
                  pppppcStack_100 = pppppcVar6;
                  pppppcStack_108 = (code *****)0x46a044;
                  pppppcStack_104 = (code *****)ppppppcVar5;
                  __vbaHresultCheckObj();
                }
                if ((uVar18 & 0xd) == 0) {
                  pppppcStack_f8 = (code *****)0x46a05d;
                  pppppcVar6 = (code *****)__vbaFpI4();
                  ppppppcVar17[0x30] = pppppcVar6;
                  pppppcStack_f8 = (code *****)&local_34;
                  pppppcStack_fc = (code *****)&local_30;
                  pppppcStack_100 = (code *****)&local_2c;
                  pppppcStack_104 = (code *****)&local_28;
                  pppppcStack_108 = (code *****)&local_24;
                  pppppcStack_10c = &local_20;
                  pppppcStack_110 = (code *****)0x6;
                  pppppcStack_114 = (code *****)0x46a083;
                  __vbaFreeObjList();
                  pppppcStack_fc = (code *****)0x46a08f;
                  pppppcStack_f8 = (code *****)ppppppcVar17;
                  pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xc3])();
                  pppppcStack_100 = (code *****)&local_28;
                  pppppcStack_104 = (code *****)0x46a096;
                  ppppppcVar5 = (code ******)__vbaObjSet();
                  pppppcStack_fc = (code *****)&local_2c;
                  pppppcStack_100 = (code *****)0x1;
                  pppppcStack_108 = (code *****)0x46a0a5;
                  pppppcStack_104 = (code *****)ppppppcVar5;
                  iVar8 = (*(code *)(*ppppppcVar5)[0x10])();
                  if (iVar8 < 0) {
                    pppppcStack_108 = (code *****)0x40;
                    pppppcStack_10c = (code *****)&DAT_004182e4;
                    pppppcStack_118 = (code *****)0x46a0b9;
                    pppppcStack_114 = (code *****)iVar8;
                    pppppcStack_110 = (code *****)ppppppcVar5;
                    __vbaHresultCheckObj();
                  }
                  pppppcVar6 = local_2c;
                  pppppcStack_108 = &local_74;
                  pppppcStack_10c = local_2c;
                  pppppcStack_110 = (code *****)0x46a0cc;
                  ppppppcVar5 = (code ******)(*(code *)(*local_2c)[0x1c])();
                  if ((int)ppppppcVar5 < 0) {
                    pppppcStack_110 = (code *****)0x70;
                    pppppcStack_114 = (code *****)&DAT_00417a98;
                    pppppcStack_118 = pppppcVar6;
                    pppppcStack_120 = (code *****)0x46a0e3;
                    pppppcStack_11c = (code *****)ppppppcVar5;
                    __vbaHresultCheckObj();
                  }
                  pppppcStack_114 = (code *****)0x46a0ec;
                  pppppcStack_110 = (code *****)ppppppcVar17;
                  pppppcStack_114 = (code *****)(*(code *)(*ppppppcVar17)[0xc3])();
                  pppppcStack_118 = (code *****)&local_30;
                  pppppcStack_11c = (code *****)0x46a0f3;
                  ppppppcVar5 = (code ******)__vbaObjSet();
                  pppppcStack_114 = (code *****)&local_34;
                  pppppcStack_118 = (code *****)0x1;
                  pppppcStack_120 = (code *****)0x46a105;
                  pppppcStack_11c = (code *****)ppppppcVar5;
                  ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                  if ((int)ppppppcVar7 < 0) {
                    pppppcStack_120 = (code *****)0x40;
                    pppppcStack_124 = (code *****)&DAT_004182e4;
                    pppppcStack_130 = (code *****)0x46a11c;
                    pppppcStack_12c = (code *****)ppppppcVar7;
                    pppppcStack_128 = (code *****)ppppppcVar5;
                    __vbaHresultCheckObj();
                  }
                  pppppcVar6 = local_34;
                  pppppcStack_120 = &local_78;
                  pppppcStack_124 = local_34;
                  pppppcStack_128 = (code *****)0x46a132;
                  pppppcVar9 = (code *****)(*(code *)(*local_34)[0x20])();
                  if ((int)pppppcVar9 < 0) {
                    pppppcStack_128 = (code *****)0x80;
                    pppppcStack_12c = (code *****)&DAT_00417a98;
                    pppppcStack_130 = pppppcVar6;
                    pppppcStack_138 = (code *****)0x46a14c;
                    pppppcStack_134 = pppppcVar9;
                    __vbaHresultCheckObj();
                  }
                  pppppcStack_12c = (code *****)0x46a155;
                  pppppcStack_128 = (code *****)ppppppcVar17;
                  pppppcStack_12c = (code *****)(*(code *)(*ppppppcVar17)[199])();
                  pppppcStack_130 = &local_20;
                  pppppcStack_134 = (code *****)0x46a15c;
                  pppppcVar6 = (code *****)__vbaObjSet();
                  pppppcStack_12c = (code *****)&local_24;
                  pppppcStack_130 = (code *****)0x1;
                  pppppcStack_138 = (code *****)0x46a16e;
                  pppppcStack_134 = pppppcVar6;
                  ppppppcVar5 = (code ******)(*(code *)(*pppppcVar6)[0x10])();
                  if ((int)ppppppcVar5 < 0) {
                    pppppcStack_138 = (code *****)0x40;
                    pppppcStack_13c = (code *****)&DAT_004182e4;
                    pppppcStack_148 = (code *****)0x46a185;
                    pppppcStack_144 = (code *****)ppppppcVar5;
                    pppppcStack_140 = pppppcVar6;
                    __vbaHresultCheckObj();
                  }
                  pppppcVar6 = local_24;
                  pppppcStack_138 = local_70;
                  pppppcStack_13c = local_24;
                  pppppcStack_140 = (code *****)0x46a198;
                  ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x1c])();
                  uVar18 = 0;
                  if ((int)ppppppcVar5 < 0) {
                    pppppcStack_f8 = (code *****)0x70;
                    pppppcStack_fc = (code *****)&DAT_00417a98;
                    pppppcStack_100 = pppppcVar6;
                    pppppcStack_108 = (code *****)0x46a1af;
                    pppppcStack_104 = (code *****)ppppppcVar5;
                    __vbaHresultCheckObj();
                  }
                  if ((uVar18 & 0xd) == 0) {
                    pppppcStack_f8 = (code *****)0x46a1c8;
                    pppppcVar6 = (code *****)__vbaFpI4();
                    ppppppcVar17[0x31] = pppppcVar6;
                    pppppcStack_f8 = (code *****)&local_34;
                    pppppcStack_fc = (code *****)&local_30;
                    pppppcStack_100 = (code *****)&local_2c;
                    pppppcStack_104 = (code *****)&local_28;
                    pppppcStack_108 = (code *****)&local_24;
                    pppppcStack_10c = &local_20;
                    pppppcStack_110 = (code *****)0x6;
                    pppppcStack_114 = (code *****)0x46a1ee;
                    __vbaFreeObjList();
                    pppppcStack_fc = (code *****)0x46a1fa;
                    pppppcStack_f8 = (code *****)ppppppcVar17;
                    pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xc3])();
                    pppppcStack_100 = (code *****)&local_28;
                    pppppcStack_104 = (code *****)0x46a201;
                    ppppppcVar5 = (code ******)__vbaObjSet();
                    pppppcStack_fc = (code *****)&local_2c;
                    pppppcStack_100 = (code *****)0x1;
                    pppppcStack_108 = (code *****)0x46a210;
                    pppppcStack_104 = (code *****)ppppppcVar5;
                    iVar8 = (*(code *)(*ppppppcVar5)[0x10])();
                    if (iVar8 < 0) {
                      pppppcStack_108 = (code *****)0x40;
                      pppppcStack_10c = (code *****)&DAT_004182e4;
                      pppppcStack_118 = (code *****)0x46a224;
                      pppppcStack_114 = (code *****)iVar8;
                      pppppcStack_110 = (code *****)ppppppcVar5;
                      __vbaHresultCheckObj();
                    }
                    pppppcVar6 = local_2c;
                    pppppcStack_108 = &local_74;
                    pppppcStack_10c = local_2c;
                    pppppcStack_110 = (code *****)0x46a237;
                    ppppppcVar5 = (code ******)(*(code *)(*local_2c)[0x1c])();
                    if ((int)ppppppcVar5 < 0) {
                      pppppcStack_110 = (code *****)0x70;
                      pppppcStack_114 = (code *****)&DAT_00417a98;
                      pppppcStack_118 = pppppcVar6;
                      pppppcStack_120 = (code *****)0x46a24e;
                      pppppcStack_11c = (code *****)ppppppcVar5;
                      __vbaHresultCheckObj();
                    }
                    pppppcStack_114 = (code *****)0x46a257;
                    pppppcStack_110 = (code *****)ppppppcVar17;
                    pppppcStack_114 = (code *****)(*(code *)(*ppppppcVar17)[0xc3])();
                    pppppcStack_118 = (code *****)&local_30;
                    pppppcStack_11c = (code *****)0x46a25e;
                    ppppppcVar5 = (code ******)__vbaObjSet();
                    pppppcStack_114 = (code *****)&local_34;
                    pppppcStack_118 = (code *****)0x1;
                    pppppcStack_120 = (code *****)0x46a270;
                    pppppcStack_11c = (code *****)ppppppcVar5;
                    ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                    if ((int)ppppppcVar7 < 0) {
                      pppppcStack_120 = (code *****)0x40;
                      pppppcStack_124 = (code *****)&DAT_004182e4;
                      pppppcStack_130 = (code *****)0x46a287;
                      pppppcStack_12c = (code *****)ppppppcVar7;
                      pppppcStack_128 = (code *****)ppppppcVar5;
                      __vbaHresultCheckObj();
                    }
                    pppppcVar6 = local_34;
                    pppppcStack_120 = &local_78;
                    pppppcStack_124 = local_34;
                    pppppcStack_128 = (code *****)0x46a29d;
                    pppppcVar9 = (code *****)(*(code *)(*local_34)[0x20])();
                    if ((int)pppppcVar9 < 0) {
                      pppppcStack_128 = (code *****)0x80;
                      pppppcStack_12c = (code *****)&DAT_00417a98;
                      pppppcStack_130 = pppppcVar6;
                      pppppcStack_138 = (code *****)0x46a2b7;
                      pppppcStack_134 = pppppcVar9;
                      __vbaHresultCheckObj();
                    }
                    pppppcStack_12c = (code *****)0x46a2c0;
                    pppppcStack_128 = (code *****)ppppppcVar17;
                    pppppcStack_12c = (code *****)(*(code *)(*ppppppcVar17)[200])();
                    pppppcStack_130 = &local_20;
                    pppppcStack_134 = (code *****)0x46a2c7;
                    pppppcVar6 = (code *****)__vbaObjSet();
                    pppppcStack_12c = (code *****)&local_24;
                    pppppcStack_130 = (code *****)0x1;
                    pppppcStack_138 = (code *****)0x46a2d9;
                    pppppcStack_134 = pppppcVar6;
                    ppppppcVar5 = (code ******)(*(code *)(*pppppcVar6)[0x10])();
                    if ((int)ppppppcVar5 < 0) {
                      pppppcStack_138 = (code *****)0x40;
                      pppppcStack_13c = (code *****)&DAT_004182e4;
                      pppppcStack_148 = (code *****)0x46a2f0;
                      pppppcStack_144 = (code *****)ppppppcVar5;
                      pppppcStack_140 = pppppcVar6;
                      __vbaHresultCheckObj();
                    }
                    pppppcVar6 = local_24;
                    pppppcStack_138 = local_70;
                    pppppcStack_13c = local_24;
                    pppppcStack_140 = (code *****)0x46a303;
                    ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x1c])();
                    uVar18 = 0;
                    if ((int)ppppppcVar5 < 0) {
                      pppppcStack_f8 = (code *****)0x70;
                      pppppcStack_fc = (code *****)&DAT_00417a98;
                      pppppcStack_100 = pppppcVar6;
                      pppppcStack_108 = (code *****)0x46a31a;
                      pppppcStack_104 = (code *****)ppppppcVar5;
                      __vbaHresultCheckObj();
                    }
                    if ((uVar18 & 0xd) == 0) {
                      pppppcStack_f8 = (code *****)0x46a333;
                      pppppcVar6 = (code *****)__vbaFpI4();
                      ppppppcVar17[0x32] = pppppcVar6;
                      pppppcStack_f8 = (code *****)&local_34;
                      pppppcStack_fc = (code *****)&local_30;
                      pppppcStack_100 = (code *****)&local_2c;
                      pppppcStack_104 = (code *****)&local_28;
                      pppppcStack_108 = (code *****)&local_24;
                      pppppcStack_10c = &local_20;
                      pppppcStack_110 = (code *****)0x6;
                      pppppcStack_114 = (code *****)0x46a359;
                      __vbaFreeObjList();
                      pppppcStack_fc = (code *****)0x46a365;
                      pppppcStack_f8 = (code *****)ppppppcVar17;
                      pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xd7])();
                      pppppcStack_100 = &local_20;
                      pppppcStack_104 = (code *****)0x46a36c;
                      ppppppcVar5 = (code ******)__vbaObjSet();
                      pppppcStack_fc = (code *****)&local_24;
                      pppppcStack_100 = (code *****)0x1;
                      pppppcStack_108 = (code *****)0x46a37b;
                      pppppcStack_104 = (code *****)ppppppcVar5;
                      iVar8 = (*(code *)(*ppppppcVar5)[0x10])();
                      if (iVar8 < 0) {
                        pppppcStack_108 = (code *****)0x40;
                        pppppcStack_10c = (code *****)&DAT_004182e4;
                        pppppcStack_118 = (code *****)0x46a38f;
                        pppppcStack_114 = (code *****)iVar8;
                        pppppcStack_110 = (code *****)ppppppcVar5;
                        __vbaHresultCheckObj();
                      }
                      pppppcVar6 = local_24;
                      pppppcStack_108 = local_70;
                      pppppcStack_10c = local_24;
                      pppppcStack_110 = (code *****)0x46a3a2;
                      ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x1c])();
                      if ((int)ppppppcVar5 < 0) {
                        pppppcStack_110 = (code *****)0x70;
                        pppppcStack_114 = (code *****)&DAT_00417a98;
                        pppppcStack_118 = pppppcVar6;
                        pppppcStack_120 = (code *****)0x46a3b9;
                        pppppcStack_11c = (code *****)ppppppcVar5;
                        __vbaHresultCheckObj();
                      }
                      pppppcStack_114 = (code *****)0x46a3c2;
                      pppppcStack_110 = (code *****)ppppppcVar17;
                      pppppcStack_114 = (code *****)(*(code *)(*ppppppcVar17)[0xd6])();
                      pppppcStack_118 = (code *****)&local_28;
                      pppppcStack_11c = (code *****)0x46a3c9;
                      ppppppcVar5 = (code ******)__vbaObjSet();
                      pppppcStack_114 = (code *****)&local_2c;
                      pppppcStack_118 = (code *****)0x1;
                      pppppcStack_120 = (code *****)0x46a3db;
                      pppppcStack_11c = (code *****)ppppppcVar5;
                      ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                      if ((int)ppppppcVar7 < 0) {
                        pppppcStack_120 = (code *****)0x40;
                        pppppcStack_124 = (code *****)&DAT_004182e4;
                        pppppcStack_130 = (code *****)0x46a3f2;
                        pppppcStack_12c = (code *****)ppppppcVar7;
                        pppppcStack_128 = (code *****)ppppppcVar5;
                        __vbaHresultCheckObj();
                      }
                      pppppcVar6 = local_2c;
                      pppppcStack_120 = &local_74;
                      pppppcStack_124 = local_2c;
                      pppppcStack_128 = (code *****)0x46a405;
                      pppppcVar9 = (code *****)(*(code *)(*local_2c)[0x1e])();
                      if ((int)pppppcVar9 < 0) {
                        pppppcStack_128 = (code *****)0x78;
                        pppppcStack_12c = (code *****)&DAT_0041807c;
                        pppppcStack_130 = pppppcVar6;
                        pppppcStack_138 = (code *****)0x46a41c;
                        pppppcStack_134 = pppppcVar9;
                        __vbaHresultCheckObj();
                      }
                      pppppcStack_12c = (code *****)0x46a425;
                      pppppcStack_128 = (code *****)ppppppcVar17;
                      pppppcStack_12c = (code *****)(*(code *)(*ppppppcVar17)[0xd7])();
                      pppppcStack_130 = (code *****)&local_30;
                      pppppcStack_134 = (code *****)0x46a42c;
                      pppppcVar6 = (code *****)__vbaObjSet();
                      pppppcStack_12c = (code *****)&local_34;
                      pppppcStack_130 = (code *****)0x1;
                      pppppcStack_138 = (code *****)0x46a43e;
                      pppppcStack_134 = pppppcVar6;
                      ppppppcVar5 = (code ******)(*(code *)(*pppppcVar6)[0x10])();
                      if ((int)ppppppcVar5 < 0) {
                        pppppcStack_138 = (code *****)0x40;
                        pppppcStack_13c = (code *****)&DAT_004182e4;
                        pppppcStack_148 = (code *****)0x46a455;
                        pppppcStack_144 = (code *****)ppppppcVar5;
                        pppppcStack_140 = pppppcVar6;
                        __vbaHresultCheckObj();
                      }
                      pppppcVar6 = local_34;
                      pppppcStack_138 = &local_78;
                      pppppcStack_13c = local_34;
                      pppppcStack_140 = (code *****)0x46a46b;
                      pppppcVar9 = (code *****)(*(code *)(*local_34)[0x20])();
                      if ((int)pppppcVar9 < 0) {
                        pppppcStack_140 = (code *****)0x80;
                        pppppcStack_144 = (code *****)&DAT_00417a98;
                        pppppcStack_148 = pppppcVar6;
                        uStack_154 = (double)CONCAT44(0x46a485,(undefined4)uStack_154);
                        ppppcStack_14c = (code ****)pppppcVar9;
                        __vbaHresultCheckObj();
                      }
                      pppppcStack_144 = (code *****)0x46a48e;
                      pppppcStack_140 = (code *****)ppppppcVar17;
                      pppppcStack_144 = (code *****)(*(code *)(*ppppppcVar17)[0xd6])();
                      pppppcStack_148 = (code *****)&local_38;
                      ppppcStack_14c = (code ****)0x46a495;
                      pppppcVar6 = (code *****)__vbaObjSet();
                      pppppcStack_144 = (code *****)&local_3c;
                      pppppcStack_148 = (code *****)0x1;
                      uStack_154 = (double)CONCAT44(0x46a4a7,(undefined4)uStack_154);
                      ppppcStack_14c = (code ****)pppppcVar6;
                      pppppcVar9 = (code *****)(*(code *)(*pppppcVar6)[0x10])();
                      if ((int)pppppcVar9 < 0) {
                        uStack_154 = 1.3580985181753e-312;
                        uStack_160 = 0x46a4be;
                        ppppcStack_15c = (code ****)pppppcVar9;
                        ppppcStack_158 = (code ****)pppppcVar6;
                        __vbaHresultCheckObj();
                      }
                      pppppcVar6 = local_3c;
                      uStack_154 = (double)CONCAT44(&local_7c,local_3c);
                      ppppcStack_158 = (code ****)0x46a4d4;
                      ppppppcVar5 = (code ******)(*(code *)(*local_3c)[0x22])();
                      uVar18 = 0;
                      if ((int)ppppppcVar5 < 0) {
                        pppppcStack_f8 = (code *****)0x88;
                        pppppcStack_fc = (code *****)&DAT_0041807c;
                        pppppcStack_100 = pppppcVar6;
                        pppppcStack_108 = (code *****)0x46a4ee;
                        pppppcStack_104 = (code *****)ppppppcVar5;
                        __vbaHresultCheckObj();
                      }
                      if ((uVar18 & 0xd) == 0) {
                        pppppcStack_f8 = (code *****)0x46a510;
                        pppppcVar6 = (code *****)__vbaFpI4();
                        ppppppcVar17[0x33] = pppppcVar6;
                        pppppcStack_f8 = (code *****)&local_3c;
                        pppppcStack_fc = (code *****)&local_38;
                        pppppcStack_100 = (code *****)&local_34;
                        pppppcStack_104 = (code *****)&local_30;
                        pppppcStack_108 = (code *****)&local_2c;
                        pppppcStack_10c = (code *****)&local_28;
                        pppppcStack_110 = (code *****)&local_24;
                        pppppcStack_114 = &local_20;
                        pppppcStack_118 = (code *****)0x8;
                        pppppcStack_11c = (code *****)0x46a53e;
                        __vbaFreeObjList();
                        pppppcStack_fc = (code *****)0x46a54a;
                        pppppcStack_f8 = (code *****)ppppppcVar17;
                        pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xd6])();
                        pppppcStack_100 = (code *****)&local_28;
                        pppppcStack_104 = (code *****)0x46a551;
                        ppppppcVar5 = (code ******)__vbaObjSet();
                        pppppcStack_fc = (code *****)&local_2c;
                        pppppcStack_100 = (code *****)0x1;
                        pppppcStack_108 = (code *****)0x46a560;
                        pppppcStack_104 = (code *****)ppppppcVar5;
                        pppppcVar6 = (code *****)(*(code *)(*ppppppcVar5)[0x10])();
                        if ((int)pppppcVar6 < 0) {
                          pppppcStack_108 = (code *****)0x40;
                          pppppcStack_10c = (code *****)&DAT_004182e4;
                          pppppcStack_118 = (code *****)0x46a574;
                          pppppcStack_114 = pppppcVar6;
                          pppppcStack_110 = (code *****)ppppppcVar5;
                          __vbaHresultCheckObj();
                        }
                        pppppcVar6 = local_2c;
                        pppppcStack_108 = &local_74;
                        pppppcStack_10c = local_2c;
                        pppppcStack_110 = (code *****)0x46a587;
                        iVar8 = (*(code *)(*local_2c)[0x1e])();
                        if (iVar8 < 0) {
                          pppppcStack_110 = (code *****)0x78;
                          pppppcStack_114 = (code *****)&DAT_0041807c;
                          pppppcStack_118 = pppppcVar6;
                          pppppcStack_120 = (code *****)0x46a59e;
                          pppppcStack_11c = (code *****)iVar8;
                          __vbaHresultCheckObj();
                        }
                        pppppcStack_114 = (code *****)0x46a5a7;
                        pppppcStack_110 = (code *****)ppppppcVar17;
                        pppppcStack_114 = (code *****)(*(code *)(*ppppppcVar17)[0xd7])();
                        pppppcStack_118 = &local_20;
                        pppppcStack_11c = (code *****)0x46a5ae;
                        ppppppcVar5 = (code ******)__vbaObjSet();
                        pppppcStack_114 = (code *****)&local_24;
                        pppppcStack_118 = (code *****)0x1;
                        pppppcStack_120 = (code *****)0x46a5c0;
                        pppppcStack_11c = (code *****)ppppppcVar5;
                        ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                        if ((int)ppppppcVar7 < 0) {
                          pppppcStack_120 = (code *****)0x40;
                          pppppcStack_124 = (code *****)&DAT_004182e4;
                          pppppcStack_130 = (code *****)0x46a5d7;
                          pppppcStack_12c = (code *****)ppppppcVar7;
                          pppppcStack_128 = (code *****)ppppppcVar5;
                          __vbaHresultCheckObj();
                        }
                        pppppcVar6 = local_24;
                        pppppcStack_120 = local_70;
                        pppppcStack_124 = local_24;
                        pppppcStack_128 = (code *****)0x46a5ea;
                        ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x1c])();
                        uVar18 = 0;
                        if ((int)ppppppcVar5 < 0) {
                          pppppcStack_f8 = (code *****)0x70;
                          pppppcStack_fc = (code *****)&DAT_00417a98;
                          pppppcStack_100 = pppppcVar6;
                          pppppcStack_108 = (code *****)0x46a601;
                          pppppcStack_104 = (code *****)ppppppcVar5;
                          __vbaHresultCheckObj();
                        }
                        if ((uVar18 & 0xd) == 0) {
                          pppppcStack_f8 = (code *****)0x46a617;
                          pppppcVar6 = (code *****)__vbaFpI4();
                          ppppppcVar17[0x34] = pppppcVar6;
                          pppppcStack_f8 = (code *****)&local_2c;
                          pppppcStack_fc = (code *****)&local_28;
                          pppppcStack_100 = (code *****)&local_24;
                          pppppcStack_104 = &local_20;
                          pppppcStack_108 = (code *****)0x4;
                          pppppcStack_10c = (code *****)0x46a635;
                          __vbaFreeObjList();
                          pppppcStack_fc = (code *****)0x46a641;
                          pppppcStack_f8 = (code *****)ppppppcVar17;
                          pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
                          pppppcStack_100 = &local_20;
                          pppppcStack_104 = (code *****)0x46a648;
                          ppppppcVar5 = (code ******)__vbaObjSet();
                          pppppcStack_fc = (code *****)&local_24;
                          pppppcStack_100 = (code *****)0x0;
                          pppppcStack_108 = (code *****)0x46a657;
                          pppppcStack_104 = (code *****)ppppppcVar5;
                          ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                          if ((int)ppppppcVar7 < 0) {
                            pppppcStack_108 = (code *****)0x40;
                            pppppcStack_10c = (code *****)&DAT_004182e4;
                            pppppcStack_118 = (code *****)0x46a66b;
                            pppppcStack_114 = (code *****)ppppppcVar7;
                            pppppcStack_110 = (code *****)ppppppcVar5;
                            __vbaHresultCheckObj();
                          }
                          pppppcVar6 = local_24;
                          pppppcStack_108 = local_70;
                          pppppcStack_10c = local_24;
                          pppppcStack_110 = (code *****)0x46a67e;
                          ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x1c])();
                          if ((int)ppppppcVar5 < 0) {
                            pppppcStack_110 = (code *****)0x70;
                            pppppcStack_114 = (code *****)&DAT_00418668;
                            pppppcStack_118 = pppppcVar6;
                            pppppcStack_120 = (code *****)0x46a695;
                            pppppcStack_11c = (code *****)ppppppcVar5;
                            __vbaHresultCheckObj();
                          }
                          pppppcStack_110 = (code *****)0x46a69e;
                          pppppcVar6 = (code *****)__vbaFpI4();
                          ppppppcVar17[0x35] = pppppcVar6;
                          pppppcStack_110 = (code *****)&local_24;
                          pppppcStack_114 = &local_20;
                          pppppcStack_118 = (code *****)0x2;
                          pppppcStack_11c = (code *****)0x46a6b4;
                          __vbaFreeObjList();
                          pppppcStack_114 = (code *****)0x46a6c0;
                          pppppcStack_110 = (code *****)ppppppcVar17;
                          pppppcStack_114 = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
                          pppppcStack_118 = (code *****)&local_24;
                          pppppcStack_11c = (code *****)0x46a6c7;
                          ppppppcVar5 = (code ******)__vbaObjSet();
                          pppppcStack_114 = (code *****)&local_28;
                          pppppcStack_118 = (code *****)0x3;
                          pppppcStack_120 = (code *****)0x46a6d6;
                          pppppcStack_11c = (code *****)ppppppcVar5;
                          ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                          if ((int)ppppppcVar7 < 0) {
                            pppppcStack_120 = (code *****)0x40;
                            pppppcStack_124 = (code *****)&DAT_004182e4;
                            pppppcStack_130 = (code *****)0x46a6ea;
                            pppppcStack_12c = (code *****)ppppppcVar7;
                            pppppcStack_128 = (code *****)ppppppcVar5;
                            __vbaHresultCheckObj();
                          }
                          pppppcVar6 = local_28;
                          pppppcStack_120 = &local_74;
                          pppppcStack_124 = local_28;
                          pppppcStack_128 = (code *****)0x46a6fd;
                          pppppcVar9 = (code *****)(*(code *)(*local_28)[0x1c])();
                          if ((int)pppppcVar9 < 0) {
                            pppppcStack_128 = (code *****)0x70;
                            pppppcStack_12c = (code *****)&DAT_00418668;
                            pppppcStack_130 = pppppcVar6;
                            pppppcStack_138 = (code *****)0x46a714;
                            pppppcStack_134 = pppppcVar9;
                            __vbaHresultCheckObj();
                          }
                          pppppcStack_12c = (code *****)0x46a71d;
                          pppppcStack_128 = (code *****)ppppppcVar17;
                          pppppcStack_12c = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
                          pppppcStack_130 = (code *****)&local_2c;
                          pppppcStack_134 = (code *****)0x46a724;
                          pppppcVar6 = (code *****)__vbaObjSet();
                          pppppcStack_12c = (code *****)&local_30;
                          pppppcStack_130 = (code *****)0x3;
                          pppppcStack_138 = (code *****)0x46a736;
                          pppppcStack_134 = pppppcVar6;
                          ppppppcVar5 = (code ******)(*(code *)(*pppppcVar6)[0x10])();
                          if ((int)ppppppcVar5 < 0) {
                            pppppcStack_138 = (code *****)0x40;
                            pppppcStack_13c = (code *****)&DAT_004182e4;
                            pppppcStack_148 = (code *****)0x46a74d;
                            pppppcStack_144 = (code *****)ppppppcVar5;
                            pppppcStack_140 = pppppcVar6;
                            __vbaHresultCheckObj();
                          }
                          pppppcVar6 = local_30;
                          pppppcStack_138 = &local_78;
                          pppppcStack_13c = local_30;
                          pppppcStack_140 = (code *****)0x46a763;
                          pppppcVar9 = (code *****)(*(code *)(*local_30)[0x20])();
                          if ((int)pppppcVar9 < 0) {
                            pppppcStack_140 = (code *****)0x80;
                            pppppcStack_144 = (code *****)&DAT_00418668;
                            pppppcStack_148 = pppppcVar6;
                            uStack_154 = (double)CONCAT44(0x46a77d,(undefined4)uStack_154);
                            ppppcStack_14c = (code ****)pppppcVar9;
                            __vbaHresultCheckObj();
                          }
                          pppppcStack_144 = (code *****)0x46a786;
                          pppppcStack_140 = (code *****)ppppppcVar17;
                          pppppcStack_144 = (code *****)(*(code *)(*ppppppcVar17)[0xc0])();
                          pppppcStack_148 = &local_20;
                          ppppcStack_14c = (code ****)0x46a78d;
                          ppppppcVar5 = (code ******)__vbaObjSet();
                          pppppcStack_144 = local_70;
                          ppppcStack_14c = (code ****)0x46a7a0;
                          pppppcStack_148 = (code *****)ppppppcVar5;
                          ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x20])();
                          uVar18 = 0;
                          if ((int)ppppppcVar7 < 0) {
                            pppppcStack_f8 = (code *****)0x80;
                            pppppcStack_fc = (code *****)&DAT_0041804c;
                            pppppcStack_108 = (code *****)0x46a7ba;
                            pppppcStack_104 = (code *****)ppppppcVar7;
                            pppppcStack_100 = (code *****)ppppppcVar5;
                            __vbaHresultCheckObj();
                          }
                          if ((uVar18 & 0xd) == 0) {
                            pppppcStack_f8 = (code *****)0x46a7d3;
                            pppppcVar6 = (code *****)__vbaFpI4();
                            ppppppcVar17[0x36] = pppppcVar6;
                            pppppcStack_f8 = (code *****)&local_30;
                            pppppcStack_fc = (code *****)&local_2c;
                            pppppcStack_100 = (code *****)&local_28;
                            pppppcStack_104 = (code *****)&local_24;
                            pppppcStack_108 = &local_20;
                            pppppcStack_10c = (code *****)0x5;
                            pppppcStack_110 = (code *****)0x46a7f5;
                            __vbaFreeObjList();
                            local_1c = (code ****)0x0;
                            pppppcVar6 = (code *****)local_1c;
                            do {
                              local_1c = (code ****)pppppcVar6;
                              if (2 < (short)local_1c) {
                                return;
                              }
                              pppppcStack_fc = (code *****)0x46a823;
                              pppppcStack_f8 = (code *****)ppppppcVar17;
                              pppppcStack_fc = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
                              pppppcStack_100 = (code *****)&local_28;
                              pppppcStack_104 = (code *****)0x46a82a;
                              ppppppcVar5 = (code ******)(*pcVar15)();
                              pppppcStack_104 = (code *****)&local_2c;
                              pppppcStack_108 = (code *****)local_1c;
                              pppppcStack_110 = (code *****)0x46a83a;
                              pppppcStack_10c = (code *****)ppppppcVar5;
                              ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar5)[0x10])();
                              if ((int)ppppppcVar7 < 0) {
                                pppppcStack_110 = (code *****)0x40;
                                pppppcStack_114 = (code *****)&DAT_004182e4;
                                pppppcStack_120 = (code *****)0x46a84b;
                                pppppcStack_11c = (code *****)ppppppcVar7;
                                pppppcStack_118 = (code *****)ppppppcVar5;
                                __vbaHresultCheckObj();
                              }
                              pppppcVar6 = local_2c;
                              pppppcStack_110 = &local_74;
                              pppppcStack_114 = local_2c;
                              pppppcStack_118 = (code *****)0x46a85a;
                              ppppppcVar5 = (code ******)(*(code *)(*local_2c)[0x1c])();
                              if ((int)ppppppcVar5 < 0) {
                                pppppcStack_118 = (code *****)0x70;
                                pppppcStack_11c = (code *****)&DAT_00418668;
                                pppppcStack_120 = pppppcVar6;
                                pppppcStack_128 = (code *****)0x46a86b;
                                pppppcStack_124 = (code *****)ppppppcVar5;
                                __vbaHresultCheckObj();
                              }
                              pppppcStack_11c = (code *****)0x46a874;
                              pppppcStack_118 = (code *****)ppppppcVar17;
                              pppppcStack_f4 = (code *****)(*(code *)(*ppppppcVar17)[0xc1])();
                              pppppcStack_f8 = &local_20;
                              pppppcStack_fc = (code *****)0x46a87f;
                              pppppcStack_458 = (code *****)__vbaObjSet();
                              pppppcStack_f4 = (code *****)&local_24;
                              pppppcStack_f8 =
                                   (code *****)CONCAT22(extraout_var,(short)local_1c + 1);
                              if (SCARRY2((short)local_1c,1)) break;
                              pppppcStack_100 = (code *****)0x46a89a;
                              pppppcStack_fc = pppppcStack_458;
                              ppppppcVar5 = (code ******)(*(code *)(*pppppcStack_458)[0x10])();
                              if ((int)ppppppcVar5 < 0) {
                                pppppcStack_100 = (code *****)0x40;
                                pppppcStack_104 = (code *****)&DAT_004182e4;
                                pppppcStack_110 = (code *****)0x46a8ab;
                                pppppcStack_10c = (code *****)ppppppcVar5;
                                pppppcStack_108 = pppppcStack_458;
                                __vbaHresultCheckObj();
                              }
                              pppppcVar6 = local_24;
                              pppppcStack_100 = local_70;
                              pppppcStack_104 = local_24;
                              pppppcStack_108 = (code *****)0x46a8ba;
                              ppppppcVar5 = (code ******)(*(code *)(*local_24)[0x1c])();
                              uVar18 = 0;
                              if ((int)ppppppcVar5 < 0) {
                                pppppcStack_f8 = (code *****)0x70;
                                pppppcStack_fc = (code *****)&DAT_00418668;
                                pppppcStack_100 = pppppcVar6;
                                pppppcStack_108 = (code *****)0x46a8cb;
                                pppppcStack_104 = (code *****)ppppppcVar5;
                                __vbaHresultCheckObj();
                              }
                              uVar14 = (ushort)local_1c;
                              if (2 < uVar14) {
                                pppppcStack_f8 = (code *****)0x46a8dc;
                                __vbaGenerateBoundsError();
                              }
                              if ((uVar18 & 0xd) != 0) goto LAB_0046a995;
                              pppppcStack_f8 = (code *****)0x46a8f2;
                              ppppcVar10 = (code ****)__vbaFpI4();
                              ppppppcVar17[0x3b][(short)uVar14] = ppppcVar10;
                              pppppcStack_f8 = (code *****)&local_2c;
                              pppppcStack_fc = (code *****)&local_28;
                              pppppcStack_100 = (code *****)&local_24;
                              pppppcStack_104 = &local_20;
                              pppppcStack_108 = (code *****)0x4;
                              pppppcStack_10c = (code *****)0x46a916;
                              __vbaFreeObjList();
                              pppppcStack_458 = (code *****)__vbaObjSet_exref;
                              pcVar15 = __vbaObjSet_exref;
                              pppppcVar6 = (code *****)(uint)(ushort)(uVar14 + 1);
                            } while (!SCARRY2(uVar14,1));
                            pppppcStack_f8 = (code *****)0x46a9a0;
                            __vbaErrorOverflow();
                            pppppcStack_104 = (code *****)&LAB_004032d6;
                            pppppcStack_108 = ExceptionList;
                            pppppcStack_100 = (code *****)&pcStack_460;
                            pcStack_460 = pcVar13;
                            pppppcStack_fc = (code *****)&DAT_00402c18;
                            pppppcStack_f8 = (code *****)((uint)pppppcStack_ec & 1);
                            ppppppcVar5 = (code ******)((uint)pppppcStack_ec & 0xfffffffe);
                            ExceptionList = &pppppcStack_108;
                            pppppcStack_45c = (code *****)ppppppcVar17;
                            pppppcStack_f4 = (code *****)&stack0xfffffffc;
                            pppppcStack_ec = (code *****)ppppppcVar5;
                            (*(code *)(*ppppppcVar5)[1])();
                            pppppcStack_130 = (code *****)0x0;
                            pppppcStack_134 = (code *****)0x0;
                            pppppcStack_138 = (code *****)0x0;
                            pppppcStack_13c = (code *****)0x0;
                            ppppcStack_14c = (code ****)0x0;
                            ppppcStack_15c = (code ****)0x0;
                            appppcStack_16c[0] = (code ****)0x0;
                            appppcStack_17c[0] = (code ****)0x0;
                            uStack_18c = 0;
                            uStack_1bc = 0;
                            apppppcStack_1d0[0] = (code *****)0x0;
                            ppppcStack_1d4 = (code ****)0x0;
                            ppppcStack_1d8 = (code ****)0x0;
                            apppppcStack_200[0] = (code *****)0x0;
                            pppppcStack_204 = (code *****)0x0;
                            piStack_208 = (int *)0x0;
                            piStack_20c = (int *)0x0;
                            piStack_210 = (int *)0x0;
                            pppppcStack_214 = (code *****)0x0;
                            pppppcStack_218 = (code *****)0x0;
                            pppppcStack_21c = (code *****)0x0;
                            pppppcStack_220 = (code *****)0x0;
                            pppppcStack_224 = (code *****)0x0;
                            if (ppppppcVar5[0x29] == (code *****)0x0) {
LAB_0046df9a:
                              pppppcStack_f8 = (code *****)0x0;
                              __vbaFreeObjList();
                              return;
                            }
                            (*(code *)(*ppppppcVar5)[0xc0])();
                            piVar4 = (int *)__vbaObjSet();
                            iVar8 = (**(code **)(*piVar4 + 0x98))();
                            if (iVar8 < 0) {
                              __vbaHresultCheckObj();
                            }
                            pppppcStack_10c = apppppcStack_1d0[0];
                            __vbaFreeObj();
                            (*(code *)(*ppppppcVar5)[0xc0])();
                            piVar4 = (int *)__vbaObjSet();
                            iVar8 = (**(code **)(*piVar4 + 0x9c))();
                            if (iVar8 < 0) {
                              __vbaHresultCheckObj();
                            }
                            __vbaFreeObj();
                            iVar8 = (*(code *)(*ppppppcVar5)[0x22])();
                            uVar18 = 0;
                            if (iVar8 < 0) {
                              __vbaHresultCheckObj();
                            }
                            (*(code *)(*ppppppcVar5)[0xc0])();
                            ppppppcVar17 = (code ******)__vbaObjSet();
                            dStack_2f0 = (double)(int)ppppppcVar5[0x29];
                            appppcStack_16c[0] = (code ****)0x1;
                            pppppcStack_144 = (code *****)0x1;
                            uStack_154 = (double)((float)ppppcStack_1d4 -
                                                 (float)(int)ppppppcVar5[0x29]);
                            if ((uVar18 & 0xd) == 0) {
                              ppppcStack_15c = (code ****)0x5;
                              ppppcStack_14c = (code ****)0x2;
                              pppppcStack_1e0 = (code *****)ppppppcVar17;
                              FUN_00441030(appppcStack_17c,&ppppcStack_14c,&ppppcStack_15c,
                                           appppcStack_16c);
                              pppppcVar6 = *ppppppcVar17;
                              pppppcStack_4a0 = (code *****)0x46aba5;
                              fVar19 = (float10)__vbaR4Var();
                              pppppcVar9 = pppppcStack_1e0;
                              pppppcStack_4a0 = (code *****)(float)fVar19;
                              pppppcStack_4a4 = pppppcStack_1e0;
                              pppppcStack_4a8 = (code *****)0x46abb8;
                              ppppppcVar17 = (code ******)(*(code *)pppppcVar6[0x23])();
                              if ((int)ppppppcVar17 < 0) {
                                pppppcStack_4a8 = (code *****)0x8c;
                                pppppcStack_4ac = (code *****)&DAT_0041804c;
                                pppppcStack_4b0 = pppppcVar9;
                                pppppcStack_4b4 = (code *****)ppppppcVar17;
                                __vbaHresultCheckObj();
                              }
                              pppppcStack_4a8 = (code *****)0x46abd5;
                              __vbaFreeObj();
                              pppppcStack_4a8 = appppcStack_17c;
                              pppppcStack_4ac = appppcStack_16c;
                              pppppcStack_4b0 = &ppppcStack_15c;
                              pppppcStack_4b4 = &ppppcStack_14c;
                              __vbaFreeVarList();
                              pppppcStack_4a8 = &ppppcStack_1d4;
                              pppppcStack_4b0 = (code *****)0x46ac03;
                              pppppcStack_4ac = (code *****)ppppppcVar5;
                              iVar8 = (*(code *)(*ppppppcVar5)[0x20])();
                              uVar18 = 0;
                              if (iVar8 < 0) {
                                pppppcStack_4b0 = (code *****)0x80;
                                pppppcStack_4b4 = (code *****)&DAT_0041708c;
                                __vbaHresultCheckObj();
                              }
                              pppppcStack_4b4 = (code *****)0x46ac20;
                              pppppcStack_4b0 = (code *****)ppppppcVar5;
                              (*(code *)(*ppppppcVar5)[0xc0])();
                              ppppppcVar17 = (code ******)__vbaObjSet();
                              dStack_2fc = (double)(int)ppppppcVar5[0x2a];
                              appppcStack_16c[0] = (code ****)0x1;
                              pppppcStack_144 = (code *****)0x1;
                              uStack_154 = (double)((float)ppppcStack_1d4 -
                                                   (float)(int)ppppppcVar5[0x2a]);
                              if ((uVar18 & 0xd) == 0) {
                                ppppcStack_15c = (code ****)0x5;
                                ppppcStack_14c = (code ****)0x2;
                                pppppcStack_1e0 = (code *****)ppppppcVar17;
                                FUN_00441030(appppcStack_17c,&ppppcStack_14c,&ppppcStack_15c,
                                             appppcStack_16c);
                                pppppcVar6 = *ppppppcVar17;
                                __vbaR4Var();
                                pppppcVar9 = pppppcStack_1e0;
                                pppppcStack_4a0 = pppppcStack_1e0;
                                pppppcStack_4a4 = (code *****)0x46acab;
                                ppppppcVar17 = (code ******)(*(code *)pppppcVar6[0x21])();
                                if ((int)ppppppcVar17 < 0) {
                                  pppppcStack_4a4 = (code *****)0x84;
                                  pppppcStack_4a8 = (code *****)&DAT_0041804c;
                                  pppppcStack_4ac = pppppcVar9;
                                  pppppcStack_4b4 = (code *****)0x46acbf;
                                  pppppcStack_4b0 = (code *****)ppppppcVar17;
                                  __vbaHresultCheckObj();
                                }
                                pppppcStack_4a4 = (code *****)0x46acc8;
                                __vbaFreeObj();
                                pppppcStack_4a4 = appppcStack_17c;
                                pppppcStack_4a8 = appppcStack_16c;
                                pppppcStack_4ac = &ppppcStack_15c;
                                pppppcStack_4b0 = &ppppcStack_14c;
                                pppppcStack_4b4 = (code *****)0x4;
                                __vbaFreeVarList();
                                pppppcStack_4a4 = &ppppcStack_1d4;
                                pppppcStack_4ac = (code *****)0x46acf6;
                                pppppcStack_4a8 = (code *****)ppppppcVar5;
                                iVar8 = (*(code *)(*ppppppcVar5)[0x20])();
                                uVar18 = 0;
                                if (iVar8 < 0) {
                                  __vbaHresultCheckObj();
                                }
                                dStack_308 = (double)(int)ppppppcVar5[0x2b];
                                appppcStack_16c[0] = (code ****)0x1;
                                pppppcStack_144 = (code *****)0x1;
                                ppppcStack_15c = (code ****)0x5;
                                uStack_154 = (double)((float)ppppcStack_1d4 -
                                                     (float)(int)ppppppcVar5[0x2b]);
                                if ((uVar18 & 0xd) == 0) {
                                  ppppcStack_14c = (code ****)0x2;
                                  FUN_00441030(appppcStack_17c,&ppppcStack_14c,&ppppcStack_15c,
                                               appppcStack_16c);
                                  fVar19 = (float10)__vbaR4Var();
                                  pppppcStack_4a0 = (code *****)(float)fVar19;
                                  pppppcStack_4ac = (code *****)0x80010005;
                                  pppppcStack_4a8 = (code *****)0x4;
                                  pppppcStack_4a4 = pppppcStack_1b8;
                                  pppppcStack_4b4 = (code *****)0x46ada8;
                                  pppppcStack_4b0 = (code *****)ppppppcVar5;
                                  pppppcStack_1b4 = pppppcStack_4a0;
                                  pppppcStack_4b4 = (code *****)(*(code *)(*ppppppcVar5)[0xe2])();
                                  pcVar13 = __vbaObjSet_exref;
                                  pppppcStack_4b4 = (code *****)__vbaObjSet();
                                  __vbaLateIdSt();
                                  pppppcStack_4a0 = (code *****)0x46adc5;
                                  __vbaFreeObj();
                                  pppppcStack_4a0 = appppcStack_17c;
                                  pppppcStack_4a4 = appppcStack_16c;
                                  pppppcStack_4a8 = &ppppcStack_15c;
                                  pppppcStack_4ac = &ppppcStack_14c;
                                  pppppcStack_4b0 = (code *****)0x4;
                                  pppppcStack_4b4 = (code *****)0x46ade0;
                                  __vbaFreeVarList();
                                  pppppcStack_120 = (code *****)0x0;
                                  ppppppcVar17 = (code ******)pppppcStack_120;
                                  do {
                                    pppppcStack_120 = (code *****)ppppppcVar17;
                                    pppppcStack_4a0 = (code *****)ppppppcVar5;
                                    if (3 < (short)pppppcStack_120) {
                                      pppppcStack_4a4 = (code *****)0x46af54;
                                      pppppcStack_4a4 =
                                           (code *****)(*(code *)(*ppppppcVar5)[0xc1])();
                                      pppppcStack_4a8 = (code *****)&pppppcStack_130;
                                      pppppcStack_4ac = (code *****)0x46af5b;
                                      pppppcStack_4b4 = (code *****)(*pcVar13)();
                                      pppppcStack_4ac = (code *****)&pppppcStack_134;
                                      pppppcStack_4b0 = (code *****)0x0;
                                      pppppcStack_1dc = pppppcStack_4b4;
                                      iVar8 = (*(code *)(*pppppcStack_4b4)[0x10])();
                                      if (iVar8 < 0) {
                                        __vbaHresultCheckObj();
                                      }
                                      pppppcStack_1e4 = pppppcStack_134;
                                      iVar8 = (*(code *)(*pppppcStack_134)[0x22])();
                                      uVar18 = 0;
                                      if (iVar8 < 0) {
                                        __vbaHresultCheckObj();
                                      }
                                      dStack_31c = (double)(int)ppppppcVar5[0x2d];
                                      appppcStack_16c[0] = (code ****)0x1;
                                      pppppcStack_144 = (code *****)0x1;
                                      pppppcVar6 = &ppppcStack_14c;
                                      ppppcStack_15c = (code ****)0x5;
                                      uStack_154 = (double)((float)ppppcStack_1d4 -
                                                           (float)(int)ppppppcVar5[0x2d]);
                                      if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
                                      ppppppcVar7 = (code ******)&ppppcStack_15c;
                                      ppppcStack_14c = (code ****)0x2;
                                      FUN_00441030(appppcStack_17c,pppppcVar6,ppppppcVar7,
                                                   appppcStack_16c);
                                      pppppcStack_4a0 = (code *****)0x46b01a;
                                      fVar19 = (float10)__vbaR4Var();
                                      pppppcStack_4a4 = (code *****)(float)fVar19;
                                      pppppcStack_4b0 = (code *****)0x80010006;
                                      pppppcStack_4ac = (code *****)0x4;
                                      pppppcStack_4a8 = pppppcStack_1b8;
                                      pppppcStack_4a0 = (code *****)uStack_1b0;
                                      pppppcStack_4b4 = (code *****)ppppppcVar5;
                                      pppppcStack_1b4 = pppppcStack_4a4;
                                      (*(code *)(*ppppppcVar5)[0xe5])();
                                      (*pcVar13)();
                                      __vbaLateIdSt();
                                      pppppcStack_4ac = (code *****)&pppppcStack_138;
                                      pppppcStack_4b0 = (code *****)&pppppcStack_134;
                                      pppppcStack_4b4 = (code *****)&pppppcStack_130;
                                      __vbaFreeObjList();
                                      __vbaFreeVarList(4);
                                      pppppcStack_4b0 = (code *****)0x46b09e;
                                      pppppcStack_4ac = (code *****)ppppppcVar5;
                                      pppppcStack_4b0 =
                                           (code *****)(*(code *)(*ppppppcVar5)[0xd6])();
                                      pppppcStack_4b4 = (code *****)&pppppcStack_130;
                                      pppppcStack_1dc = (code *****)(*pcVar13)();
                                      iVar8 = (*(code *)(*pppppcStack_1dc)[0x10])();
                                      if (iVar8 < 0) {
                                        __vbaHresultCheckObj(iVar8,pppppcStack_1dc);
                                      }
                                      pppppcStack_1e4 = pppppcStack_134;
                                      iVar8 = (*(code *)(*pppppcStack_134)[0x1e])();
                                      if (iVar8 < 0) {
                                        __vbaHresultCheckObj
                                                  (iVar8,pppppcStack_1e4,&DAT_0041807c,0x78);
                                      }
                                      pppppcStack_110 = (code *****)__vbaFpI4();
                                      __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_134);
                                      sStack_234 = *(short *)((int)ppppppcVar5 + 0x9e);
                                      uVar11 = (*(code *)(*ppppppcVar5)[0xe4])(ppppppcVar5,0,0);
                                      uVar11 = (*pcVar13)(&pppppcStack_130,uVar11);
                                      uVar11 = __vbaLateIdCallLd(&ppppcStack_14c,uVar11);
                                      iVar8 = __vbaI4Var(uVar11);
                                      if (!SCARRY4(iVar8,1)) {
                                        pppppcStack_4a8 = (code *****)0x46b165;
                                        pppppcStack_120 = (code *****)__vbaI2I4();
                                        pppppcStack_4a4 = (code *****)0x46b171;
                                        __vbaFreeObj();
                                        pppppcStack_4a4 = (code *****)0x46b17a;
                                        __vbaFreeVar();
                                        ppppppcVar17 = (code ******)pppppcStack_120;
                                        goto LAB_0046b17a;
                                      }
                                      break;
                                    }
                                    pppppcStack_4a4 = (code *****)0x46ae02;
                                    pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xc0])();
                                    pppppcStack_4a8 = (code *****)&pppppcStack_130;
                                    pppppcStack_4ac = (code *****)0x46ae09;
                                    pppppcStack_4b0 = (code *****)(*pcVar13)();
                                    pppppcStack_4ac = &ppppcStack_1d4;
                                    pppppcStack_4b4 = (code *****)0x46ae1f;
                                    pppppcStack_1dc = pppppcStack_4b0;
                                    iVar8 = (*(code *)(*pppppcStack_4b0)[0x22])();
                                    if (iVar8 < 0) {
                                      pppppcStack_4b4 = (code *****)0x88;
                                      __vbaHresultCheckObj();
                                    }
                                    pppppcStack_4b4 = (code *****)ppppppcVar5;
                                    (*(code *)(*ppppppcVar5)[0xc1])();
                                    piVar4 = (int *)(*pcVar13)();
                                    iVar8 = (**(code **)(*piVar4 + 0x40))();
                                    uVar18 = 0;
                                    if (iVar8 < 0) {
                                      __vbaHresultCheckObj();
                                    }
                                    pppppcVar9 = pppppcStack_138;
                                    dStack_310 = (double)(int)ppppppcVar5[0x2c];
                                    appppcStack_16c[0] = (code ****)0x1;
                                    pppppcStack_144 = (code *****)0x1;
                                    pppppcVar6 = &ppppcStack_14c;
                                    uStack_154 = (double)((float)ppppcStack_1d4 -
                                                         (float)(int)ppppppcVar5[0x2c]);
                                    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
                                    ppppppcVar7 = (code ******)&ppppcStack_15c;
                                    pppppcStack_1ec = pppppcStack_138;
                                    ppppcStack_15c = (code ****)0x5;
                                    ppppcStack_14c = (code ****)0x2;
                                    FUN_00441030(appppcStack_17c,pppppcVar6,ppppppcVar7,
                                                 appppcStack_16c);
                                    pppppcVar9 = (code *****)*pppppcVar9;
                                    pppppcStack_4a0 = (code *****)0x46aed8;
                                    fVar19 = (float10)__vbaR4Var();
                                    pppppcVar2 = pppppcStack_1ec;
                                    pppppcStack_4a0 = (code *****)(float)fVar19;
                                    pppppcStack_4a4 = pppppcStack_1ec;
                                    pppppcStack_4a8 = (code *****)0x46aeeb;
                                    pppppcStack_4ac = (code *****)(*(code *)pppppcVar9[0x23])();
                                    if ((int)pppppcStack_4ac < 0) {
                                      pppppcStack_4a0 = (code *****)0x8c;
                                      pppppcStack_4a4 = (code *****)&DAT_00418668;
                                      pppppcStack_4a8 = pppppcVar2;
                                      pppppcStack_4b0 = (code *****)0x46aeff;
                                      __vbaHresultCheckObj();
                                    }
                                    pppppcStack_4a0 = (code *****)&pppppcStack_138;
                                    pppppcStack_4a4 = (code *****)&pppppcStack_134;
                                    pppppcStack_4a8 = (code *****)&pppppcStack_130;
                                    pppppcStack_4ac = (code *****)0x3;
                                    pppppcStack_4b0 = (code *****)0x46af13;
                                    __vbaFreeObjList();
                                    pppppcStack_4b0 = appppcStack_17c;
                                    pppppcStack_4b4 = appppcStack_16c;
                                    __vbaFreeVarList();
                                    pcVar13 = __vbaObjSet_exref;
                                    ppppppcVar17 = (code ******)
                                                   (uint)(ushort)((short)pppppcStack_120 + 1);
                                  } while (!SCARRY2((short)pppppcStack_120,1));
                                  goto LAB_0046e052;
                                }
                              }
                            }
LAB_0046e04d:
                            __vbaFPException();
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0046a995:
  __vbaFPException();
  return;
  while( true ) {
    if (DAT_00480244 == (code ******)0x0) {
      pppppcStack_4a0 = (code *****)&DAT_00480244;
      pppppcStack_4a4 = (code *****)&DAT_00413b34;
      pppppcStack_4a8 = (code *****)0x46b1a4;
      __vbaNew2();
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    pppppcStack_4a4 = (code *****)0x46b1b8;
    pppppcStack_4a0 = (code *****)ppppppcVar5;
    pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xd6])();
    pppppcStack_4a8 = (code *****)&pppppcStack_130;
    pppppcStack_4ac = (code *****)0x46b1bf;
    pppppcStack_4b4 = (code *****)(*pcVar13)();
    pppppcStack_4ac = (code *****)&pppppcStack_134;
    pppppcStack_4b0 = pppppcStack_120;
    pppppcStack_1dc = pppppcStack_4b4;
    iVar8 = (*(code *)(*pppppcStack_4b4)[0x10])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    pppppcStack_134 = (code *****)0x0;
    ppppcStack_320 = *pppppcStack_1e4;
    (*pcVar13)();
    pppppcVar9 = pppppcStack_1e4;
    iVar8 = (*(code *)ppppcStack_320[4])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar9,&DAT_00413b24);
    }
    __vbaFreeObjList(2,&pppppcStack_130);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xd7])();
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_324 = (code ****)pppppcVar9;
    pppppcStack_4ac = (code *****)(*(code *)pppppcVar9[4])(pppppcStack_1e4,uVar11);
    if ((int)pppppcStack_4ac < 0) {
      pppppcStack_4a0 = (code *****)0x10;
      pppppcStack_4a4 = (code *****)&DAT_00413b24;
      pppppcStack_4a8 = pppppcVar2;
      pppppcStack_4b0 = (code *****)0x46b2dd;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_138;
    pppppcStack_4a4 = (code *****)&pppppcStack_130;
    pppppcStack_4a8 = (code *****)0x2;
    pppppcStack_4ac = (code *****)0x46b2ed;
    __vbaFreeObjList();
    pcVar13 = __vbaObjSet_exref;
    ppppppcVar17 = (code ******)(uint)(ushort)((short)pppppcStack_120 + 1);
    if (SCARRY2((short)pppppcStack_120,1)) break;
LAB_0046b17a:
    pppppcStack_120 = (code *****)ppppppcVar17;
    if (sStack_234 < (short)pppppcStack_120) {
      pppppcStack_4a0 = (code *****)0x0;
      pppppcStack_4a4 = (code *****)0x0;
      pppppcStack_4ac = (code *****)0x46b31a;
      pppppcStack_4a8 = (code *****)ppppppcVar5;
      pppppcStack_4ac = (code *****)(*(code *)(*ppppppcVar5)[0xe4])();
      pppppcStack_4b0 = (code *****)&pppppcStack_130;
      pppppcStack_4b4 = (code *****)0x46b325;
      pppppcStack_4ac = (code *****)__vbaObjSet();
      pppppcStack_4b0 = &ppppcStack_14c;
      pppppcStack_4b4 = (code *****)0x46b330;
      pppppcStack_4a4 = (code *****)__vbaLateIdCallLd();
      pppppcStack_4a8 = (code *****)0x46b33a;
      __vbaI4Var();
      pppppcStack_4a4 = (code *****)0x46b342;
      uStack_23c = __vbaI2I4();
      ppppppcVar17 = (code ******)
                     CONCAT22((short)((uint)pcVar13 >> 0x10),*(short *)((int)ppppppcVar5 + 0x9e) + 1
                             );
      if (!SCARRY2(*(short *)((int)ppppppcVar5 + 0x9e),1)) {
        pppppcStack_4a4 = (code *****)0x46b365;
        pppppcStack_120 = (code *****)ppppppcVar17;
        __vbaFreeObj();
        pppppcStack_4a4 = (code *****)0x46b36e;
        __vbaFreeVar();
        ppppppcVar12 = (code ******)pppppcStack_120;
        goto LAB_0046b36e;
      }
      break;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    if (DAT_00480244 == (code ******)0x0) {
      pppppcStack_4a0 = (code *****)&DAT_00480244;
      pppppcStack_4a4 = (code *****)&DAT_00413b34;
      pppppcStack_4a8 = (code *****)0x46b394;
      __vbaNew2();
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    pppppcStack_4a4 = (code *****)0x46b3a8;
    pppppcStack_4a0 = (code *****)ppppppcVar5;
    pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xd6])();
    pppppcStack_4a8 = (code *****)&pppppcStack_130;
    pppppcStack_4ac = (code *****)0x46b3b3;
    pppppcStack_4ac = (code *****)__vbaObjSet();
    pppppcStack_4a4 = (code *****)&pppppcStack_134;
    pppppcStack_4b0 = (code *****)0x46b3c4;
    pppppcStack_4a8 = (code *****)ppppppcVar17;
    pppppcStack_1dc = pppppcStack_4ac;
    iVar8 = (*(code *)(*pppppcStack_4ac)[0x10])();
    if (iVar8 < 0) {
      pppppcStack_4b0 = (code *****)0x40;
      pppppcStack_4b4 = (code *****)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b0 = pppppcStack_134;
    pppppcStack_4b4 = (code *****)&pppppcStack_138;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    pppppcStack_4b0 = (code *****)__vbaObjSet();
    pppppcStack_4b4 = pppppcStack_1e4;
    iVar8 = (*(code *)pppppcVar9[3])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObjList();
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2();
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    (*(code *)(*ppppppcVar5)[0xd7])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4);
    }
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    __vbaObjSet(&pppppcStack_138);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_32c = (code ****)pppppcVar9;
    pppppcStack_4ac = (code *****)(*(code *)pppppcVar9[3])(pppppcStack_1e4);
    if ((int)pppppcStack_4ac < 0) {
      pppppcStack_4a0 = (code *****)0xc;
      pppppcStack_4a4 = (code *****)&DAT_00413b24;
      pppppcStack_4a8 = pppppcVar2;
      pppppcStack_4b0 = (code *****)0x46b4c8;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_138;
    pppppcStack_4a4 = (code *****)&pppppcStack_130;
    pppppcStack_4a8 = (code *****)0x2;
    pppppcStack_4ac = (code *****)0x46b4d8;
    __vbaFreeObjList();
    ppppppcVar17 = (code ******)(uint)(ushort)((short)pppppcStack_120 + 1);
    ppppppcVar12 = ppppppcVar17;
    if (SCARRY2((short)pppppcStack_120,1)) break;
LAB_0046b36e:
    pppppcStack_120 = (code *****)ppppppcVar12;
    if ((short)uStack_23c < (short)ppppppcVar17) {
      pppppcStack_4a0 = (code *****)0x0;
      pppppcStack_4a4 = (code *****)0x0;
      pppppcStack_4ac = (code *****)0x46b501;
      pppppcStack_4a8 = (code *****)ppppppcVar5;
      pppppcStack_4ac = (code *****)(*(code *)(*ppppppcVar5)[0xe4])();
      pcVar13 = __vbaObjSet_exref;
      pppppcStack_4b0 = (code *****)&pppppcStack_130;
      pppppcStack_4b4 = (code *****)0x46b50e;
      pppppcStack_4ac = (code *****)__vbaObjSet();
      pppppcStack_4b0 = &ppppcStack_14c;
      pppppcStack_4b4 = (code *****)0x46b519;
      pppppcStack_4a4 = (code *****)__vbaLateIdCallLd();
      pppppcStack_4a8 = (code *****)0x46b523;
      __vbaI4Var();
      pppppcStack_4a8 = (code *****)0x46b52b;
      uStack_244 = __vbaI2I4();
      pppppcStack_120 = (code *****)0x1;
      pppppcStack_4a4 = (code *****)0x46b541;
      __vbaFreeObj();
      pppppcStack_4a4 = (code *****)0x46b54a;
      __vbaFreeVar();
      ppppppcVar17 = (code ******)pppppcStack_120;
      goto LAB_0046b54a;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    pppppcStack_4a4 = (code *****)0x46b590;
    pppppcStack_12c = (code *****)ppppppcVar17;
    pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xd6])();
    pppppcStack_4a8 = (code *****)&pppppcStack_130;
    pppppcStack_4ac = (code *****)0x46b59b;
    pppppcStack_4ac = (code *****)__vbaObjSet();
    pppppcStack_4a4 = (code *****)&pppppcStack_134;
    pppppcStack_4a8 = pppppcStack_120;
    pppppcStack_4b0 = (code *****)0x46b5af;
    pppppcStack_1dc = pppppcStack_4ac;
    iVar8 = (*(code *)(*pppppcStack_4ac)[0x10])();
    if (iVar8 < 0) {
      pppppcStack_4b0 = (code *****)0x40;
      pppppcStack_4b4 = (code *****)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b4 = (code *****)apppppcStack_200;
    pppppcStack_4b0 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    __vbaObjSet();
    pppppcStack_4b0 = (code *****)0x46b5e7;
    __vbaFreeObj();
    pppppcStack_4b0 = (code *****)(float)(int)pppppcStack_12c;
    pppppcStack_4b4 = apppppcStack_200[0];
    pppppcStack_330 = pppppcStack_4b0;
    iVar8 = (*(code *)(*apppppcStack_200[0])[0x1f])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    (*(code *)(*ppppppcVar5)[0xd6])();
    pppppcStack_1dc = (code *****)__vbaObjSet();
    iVar8 = (**(code **)((int)*pppppcStack_1dc + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcStack_1dc,&DAT_004182e4);
    }
    pppppcStack_1e4 = pppppcStack_134;
    iVar8 = (*(code *)(*pppppcStack_134)[0x1c])(pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcStack_1e4,&DAT_0041807c,0x70);
    }
    iVar8 = (*(code *)(*apppppcStack_200[0])[0x1d])(apppppcStack_200[0],ppppcStack_1d4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,apppppcStack_200[0],&DAT_0041807c,0x74);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_134);
    iVar8 = (*(code *)(*apppppcStack_200[0])[0x27])(apppppcStack_200[0],0xffffffff);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,apppppcStack_200[0],&DAT_0041807c,0x9c);
    }
    __vbaObjSetAddref(apppppcStack_200,0);
    uVar11 = (*(code *)(*ppppppcVar5)[0xd7])(ppppppcVar5);
    pppppcStack_1dc = (code *****)__vbaObjSet(&pppppcStack_130,uVar11);
    ppppppcVar12 = (code ******)
                   (*(code *)(*pppppcStack_1dc)[0x10])
                             (pppppcStack_1dc,pppppcStack_120,&pppppcStack_134);
    if ((int)ppppppcVar12 < 0) {
      pppppcStack_4a0 = (code *****)0x40;
      pppppcStack_4a4 = (code *****)&DAT_004182e4;
      pppppcStack_4a8 = pppppcStack_1dc;
      pppppcStack_4b0 = (code *****)0x46b73a;
      pppppcStack_4ac = (code *****)ppppppcVar12;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a4 = (code *****)&pppppcStack_204;
    pppppcStack_4a0 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcStack_4a8 = (code *****)0x46b752;
    __vbaObjSet();
    pppppcStack_4a0 = (code *****)0x46b75b;
    __vbaFreeObj();
    pcVar13 = (code *)((int)ppppppcVar17 + (int)ppppppcVar5[0x34]);
    if (SCARRY4((int)ppppppcVar5[0x34],(int)ppppppcVar17)) break;
    pppppcStack_4a0 = (code *****)(float)(int)pcVar13;
    pppppcStack_4a4 = pppppcStack_204;
    pppppcStack_4a8 = (code *****)0x46b78e;
    fStack_338 = (float)pppppcStack_4a0;
    pcStack_334 = pcVar13;
    ppppppcVar17 = (code ******)(*(code *)(*pppppcStack_204)[0x1d])();
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a8 = (code *****)0x74;
      pppppcStack_4ac = (code *****)&DAT_00417a98;
      pppppcStack_4b0 = pppppcStack_204;
      pppppcStack_4b4 = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4ac = (code *****)0x46b7ae;
    pppppcStack_4a8 = (code *****)ppppppcVar5;
    pppppcStack_4ac = (code *****)(*(code *)(*ppppppcVar5)[0xd7])();
    pppppcStack_4b0 = (code *****)&pppppcStack_130;
    pppppcStack_4b4 = (code *****)0x46b7b9;
    pppppcStack_4b4 = (code *****)__vbaObjSet();
    pppppcStack_4ac = (code *****)&pppppcStack_134;
    pppppcStack_4b0 = (code *****)0x1;
    iVar8 = (*(code *)(*pppppcStack_4b4)[0x10])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    iVar8 = (*(code *)(*pppppcStack_134)[0x1a])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8);
    }
    iVar8 = (*(code *)(*pppppcStack_204)[0x1b])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcStack_204,&DAT_00417a98);
    }
    __vbaFreeObjList(2,&pppppcStack_130);
    ppppppcVar17 = (code ******)(*(code *)(*pppppcStack_204)[0x25])(pppppcStack_204);
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a0 = (code *****)0x94;
      pppppcStack_4a4 = (code *****)&DAT_00417a98;
      pppppcStack_4a8 = pppppcStack_204;
      pppppcStack_4b0 = (code *****)0x46b863;
      pppppcStack_4ac = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a4 = (code *****)&pppppcStack_204;
    pppppcStack_4a0 = (code *****)0x0;
    pppppcStack_4a8 = (code *****)0x46b872;
    __vbaObjSetAddref();
    pcVar13 = __vbaObjSet_exref;
    ppppppcVar17 = (code ******)(uint)(ushort)((short)pppppcStack_120 + 1);
    if (SCARRY2((short)pppppcStack_120,1)) break;
LAB_0046b54a:
    pppppcStack_120 = (code *****)ppppppcVar17;
    if ((short)uStack_244 < (short)pppppcStack_120) {
      pppppcStack_4a0 = (code *****)0x0;
      pppppcStack_4a4 = (code *****)0x0;
      pppppcStack_4ac = (code *****)0x46b89c;
      pppppcStack_4a8 = (code *****)ppppppcVar5;
      pppppcStack_4ac = (code *****)(*(code *)(*ppppppcVar5)[0xe4])();
      pppppcStack_4b0 = (code *****)&pppppcStack_130;
      pppppcStack_4b4 = (code *****)0x46b8a3;
      pppppcStack_4b4 = (code *****)(*pcVar13)();
      pppppcStack_4ac = (code *****)__vbaLateIdCallLd();
      pppppcStack_4b0 = (code *****)0x46b8b8;
      __vbaI4Var();
      pppppcStack_4a8 = (code *****)0x46b8c0;
      uVar3 = __vbaI2I4();
      *(undefined2 *)((int)ppppppcVar5 + 0x9e) = uVar3;
      pppppcStack_4a4 = (code *****)0x46b8d0;
      __vbaFreeObj();
      pppppcStack_4a4 = (code *****)0x46b8d9;
      __vbaFreeVar();
      pppppcStack_114 = ppppppcVar5[0x35];
      pppppcStack_120 = (code *****)0x0;
      ppppppcVar17 = (code ******)pppppcStack_120;
      goto LAB_0046b8e7;
    }
    if (((SBORROW2((short)pppppcStack_120,1)) ||
        (lVar1 = (longlong)(int)(short)((short)pppppcStack_120 + -1) *
                 (longlong)(int)ppppppcVar5[0x33], iVar8 = (int)lVar1, iVar8 != lVar1)) ||
       (ppppppcVar17 = (code ******)((int)pppppcStack_110 + iVar8),
       SCARRY4(iVar8,(int)pppppcStack_110))) break;
  }
  goto LAB_0046e052;
  while( true ) {
    uStack_33c = (uint)(short)pppppcStack_120;
    if (2 < uStack_33c) {
      pppppcStack_4a0 = (code *****)0x46b909;
      __vbaGenerateBoundsError();
    }
    if (*(short *)((int)ppppppcVar5[0x42] + uStack_33c * 2) == 0) {
      pppppcStack_4a4 = (code *****)0x46ba2f;
      pppppcStack_4a0 = (code *****)ppppppcVar5;
      pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xc1])();
      pppppcStack_4a8 = (code *****)&pppppcStack_130;
      pppppcStack_4ac = (code *****)0x46ba3a;
      pppppcStack_4ac = (code *****)__vbaObjSet();
      pppppcStack_4a4 = (code *****)&pppppcStack_134;
      pppppcStack_4a8 = pppppcStack_120;
      pppppcStack_4b0 = (code *****)0x46ba4a;
      iVar8 = (**(code **)((int)*pppppcStack_4ac + 0x40))();
      if (iVar8 < 0) {
        pppppcStack_4b0 = (code *****)0x40;
        pppppcStack_4b4 = (code *****)&DAT_004182e4;
        __vbaHresultCheckObj();
      }
      pppppcVar9 = pppppcStack_134;
      pppppcStack_4b0 = (code *****)(float)(int)pppppcStack_114;
      pppppcStack_4b4 = pppppcStack_134;
      pppppcStack_340 = pppppcStack_4b0;
      pppppcStack_4ac = (code *****)(*(code *)(*pppppcStack_134)[0x1d])();
      if ((int)pppppcStack_4ac < 0) {
        pppppcStack_4a0 = (code *****)0x74;
        pppppcStack_4a4 = (code *****)&DAT_00418668;
        pppppcStack_4a8 = pppppcVar9;
        pppppcStack_4b0 = (code *****)0x46ba87;
        __vbaHresultCheckObj();
      }
      pppppcStack_4a0 = (code *****)&pppppcStack_134;
      pppppcStack_4a4 = (code *****)&pppppcStack_130;
      pppppcStack_4a8 = (code *****)0x2;
      pppppcStack_4ac = (code *****)0x46ba97;
      __vbaFreeObjList();
      uVar16 = (uint)(short)pppppcStack_120;
      if (2 < uVar16) {
        pppppcStack_4a0 = (code *****)0x46baa9;
        __vbaGenerateBoundsError();
      }
      ppppppcVar17 = (code ******)((int)pppppcStack_114 + (int)ppppppcVar5[0x3b][uVar16]);
      if (SCARRY4((int)ppppppcVar5[0x3b][uVar16],(int)pppppcStack_114)) break;
    }
    else {
      pppppcStack_4a4 = (code *****)0x46b929;
      pppppcStack_4a0 = (code *****)ppppppcVar5;
      pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xc1])();
      pppppcStack_4a8 = (code *****)&pppppcStack_130;
      pppppcStack_4ac = (code *****)0x46b930;
      pppppcStack_4b4 = (code *****)(*pcVar13)();
      pppppcStack_4ac = (code *****)&pppppcStack_134;
      pppppcStack_4b0 = pppppcStack_120;
      iVar8 = (*(code *)(*pppppcStack_4b4)[0x10])();
      if (iVar8 < 0) {
        __vbaHresultCheckObj();
      }
      iVar8 = (*(code *)(*pppppcStack_134)[0x20])();
      if (iVar8 < 0) {
        __vbaHresultCheckObj(iVar8);
      }
      (*(code *)(*ppppppcVar5)[0xc1])();
      piVar4 = (int *)__vbaObjSet();
      iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4);
      if (iVar8 < 0) {
        __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
      }
      pppppcVar9 = pppppcStack_13c;
      iVar8 = (*(code *)(*ppppppcVar5)[0x20])(ppppppcVar5,&ppppcStack_1d4);
      uVar18 = 0;
      if (iVar8 < 0) {
        __vbaHresultCheckObj();
      }
      if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
      pppppcVar6 = (code *****)0x46b9f8;
      ppppppcVar7 = (code ******)pppppcVar9;
      pppppcStack_4ac = (code *****)(*(code *)(*pppppcVar9)[0x1d])();
      if ((int)pppppcStack_4ac < 0) {
        pppppcStack_4a0 = (code *****)0x74;
        pppppcStack_4a4 = (code *****)&DAT_00418668;
        pppppcStack_4a8 = pppppcVar9;
        pppppcStack_4b0 = (code *****)0x46ba09;
        __vbaHresultCheckObj();
      }
      pppppcStack_4a0 = (code *****)&pppppcStack_13c;
      pppppcStack_4a4 = (code *****)&pppppcStack_138;
      pppppcStack_4a8 = (code *****)&pppppcStack_134;
      pppppcStack_4ac = (code *****)&pppppcStack_130;
      pppppcStack_4b0 = (code *****)0x4;
      pppppcStack_4b4 = (code *****)0x46ba21;
      __vbaFreeObjList();
      ppppppcVar17 = (code ******)pppppcStack_114;
    }
    pppppcStack_114 = (code *****)ppppppcVar17;
    pcVar13 = __vbaObjSet_exref;
    ppppppcVar17 = (code ******)(uint)(ushort)((short)pppppcStack_120 + 1);
    if (SCARRY2((short)pppppcStack_120,1)) break;
LAB_0046b8e7:
    pppppcStack_120 = (code *****)ppppppcVar17;
    if (2 < (short)pppppcStack_120) {
      pppppcStack_4a4 = (code *****)0x46bae6;
      pppppcStack_4a0 = (code *****)ppppppcVar5;
      pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xc1])();
      pppppcStack_4a8 = (code *****)&pppppcStack_130;
      pppppcStack_4ac = (code *****)0x46baed;
      pppppcStack_4b4 = (code *****)(*pcVar13)();
      pppppcStack_4ac = (code *****)&pppppcStack_134;
      pppppcStack_4b0 = (code *****)0x3;
      pppppcStack_1dc = pppppcStack_4b4;
      iVar8 = (*(code *)(*pppppcStack_4b4)[0x10])();
      if (iVar8 < 0) {
        __vbaHresultCheckObj();
      }
      fStack_344 = (float)(int)pppppcStack_114;
      pppppcStack_1e4 = pppppcStack_134;
      iVar8 = (*(code *)(*pppppcStack_134)[0x1d])();
      if (iVar8 < 0) {
        __vbaHresultCheckObj(iVar8);
      }
      __vbaFreeObjList();
      (*(code *)(*ppppppcVar5)[0xc0])();
      pppppcStack_1dc = (code *****)(*pcVar13)();
      iVar8 = (*(code *)(*pppppcStack_1dc)[0x20])(pppppcStack_1dc,&ppppcStack_1d4);
      if (iVar8 < 0) {
        __vbaHresultCheckObj(iVar8,pppppcStack_1dc,&DAT_0041804c,0x80);
      }
      uVar11 = (*(code *)(*ppppppcVar5)[0xc1])(ppppppcVar5);
      piVar4 = (int *)(*pcVar13)(&pppppcStack_134,uVar11);
      iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,3,&pppppcStack_138);
      uVar18 = 0;
      if (iVar8 < 0) {
        pppppcStack_4a0 = (code *****)0x46bbce;
        __vbaHresultCheckObj();
      }
      pppppcVar6 = pppppcStack_138;
      dStack_34c = (double)(int)ppppppcVar5[0x36];
      appppcStack_16c[0] = (code ****)0x1;
      pppppcStack_144 = (code *****)0x1;
      dStack_354 = (double)(int)pppppcStack_114;
      pppppcStack_1ec = pppppcStack_138;
      ppppcStack_15c = (code ****)0x5;
      ppppcStack_14c = (code ****)0x2;
      uStack_154 = (double)(((float)ppppcStack_1d4 - (float)(int)ppppppcVar5[0x36]) -
                           (float)(int)pppppcStack_114);
      if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
      pppppcStack_4a0 = (code *****)0x46bc3c;
      FUN_00441030(appppcStack_17c,&ppppcStack_14c,&ppppcStack_15c,appppcStack_16c);
      pppppcVar6 = (code *****)*pppppcVar6;
      pppppcStack_4a0 = appppcStack_17c;
      pppppcStack_4a4 = (code *****)0x46bc4b;
      fVar19 = (float10)__vbaR4Var();
      pppppcVar9 = pppppcStack_1ec;
      pppppcStack_4a4 = (code *****)(float)fVar19;
      pppppcStack_4a8 = pppppcStack_1ec;
      pppppcStack_4ac = (code *****)0x46bc5e;
      iVar8 = (*(code *)pppppcVar6[0x21])();
      if (iVar8 < 0) {
        pppppcStack_4ac = (code *****)0x84;
        pppppcStack_4b0 = (code *****)&DAT_00418668;
        pppppcStack_4b4 = pppppcVar9;
        __vbaHresultCheckObj();
      }
      pppppcStack_4ac = (code *****)&pppppcStack_138;
      pppppcStack_4b0 = (code *****)&pppppcStack_134;
      pppppcStack_4b4 = (code *****)&pppppcStack_130;
      __vbaFreeObjList();
      __vbaFreeVarList(4);
      pppppcStack_4b0 = (code *****)0x46bcad;
      pppppcStack_4ac = (code *****)ppppppcVar5;
      pppppcStack_4b0 = (code *****)(*(code *)(*ppppppcVar5)[0xc1])();
      pppppcStack_4b4 = (code *****)&pppppcStack_130;
      piVar4 = (int *)__vbaObjSet();
      pppppcStack_4b0 = (code *****)&pppppcStack_134;
      pppppcStack_4b4 = (code *****)0x3;
      iVar8 = (**(code **)(*piVar4 + 0x40))();
      if (iVar8 < 0) {
        __vbaHresultCheckObj();
      }
      iVar8 = (*(code *)(*pppppcStack_134)[0x22])();
      uVar18 = 0;
      if (iVar8 < 0) {
        __vbaHresultCheckObj();
      }
      dStack_360 = (double)(int)ppppppcVar5[0x2e];
      appppcStack_16c[0] = (code ****)0x1;
      ppppcStack_15c = (code ****)0x5;
      uStack_154 = (double)((float)ppppcStack_1d4 - (float)(int)ppppppcVar5[0x2e]);
      if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
      pppppcStack_144 = (code *****)0x2;
      ppppcStack_14c = (code ****)0x2;
      FUN_00441030(appppcStack_17c,&ppppcStack_14c,&ppppcStack_15c,appppcStack_16c);
      pppppcStack_4a0 = (code *****)0x46bd65;
      pppppcStack_128 = (code *****)__vbaI4Var();
      pppppcStack_4a0 = (code *****)&pppppcStack_134;
      pppppcStack_4a4 = (code *****)&pppppcStack_130;
      pppppcStack_4a8 = (code *****)0x2;
      pppppcStack_4ac = (code *****)0x46bd78;
      __vbaFreeObjList();
      pppppcStack_4ac = appppcStack_17c;
      pppppcStack_4b0 = appppcStack_16c;
      pppppcStack_4b4 = &ppppcStack_15c;
      __vbaFreeVarList();
      pppppcStack_4a4 = (code *****)0x46bd9f;
      pppppcStack_4a0 = (code *****)ppppppcVar5;
      pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xe3])();
      pppppcStack_4a8 = (code *****)&pppppcStack_138;
      pppppcStack_4ac = (code *****)0x46bdaa;
      __vbaObjSet();
      pppppcStack_4a8 = (code *****)0x46bdb3;
      pppppcStack_4a4 = (code *****)ppppppcVar5;
      pppppcStack_4a8 = (code *****)(*(code *)(*ppppppcVar5)[0xc1])();
      pppppcStack_4ac = (code *****)&pppppcStack_130;
      pppppcStack_4b0 = (code *****)0x46bdbe;
      pppppcStack_4b0 = (code *****)__vbaObjSet();
      pppppcStack_4a8 = (code *****)&pppppcStack_134;
      pppppcStack_4ac = (code *****)0x3;
      pppppcStack_4b4 = (code *****)0x46bdd0;
      pppppcStack_1dc = pppppcStack_4b0;
      iVar8 = (*(code *)(*pppppcStack_4b0)[0x10])();
      if (iVar8 < 0) {
        pppppcStack_4b4 = (code *****)0x40;
        __vbaHresultCheckObj();
      }
      pppppcStack_4b4 = &ppppcStack_1d4;
      pppppcStack_1e4 = pppppcStack_134;
      iVar8 = (*(code *)(*pppppcStack_134)[0x20])();
      uVar18 = 0;
      if (iVar8 < 0) {
        __vbaHresultCheckObj();
      }
      pppppcStack_144 = pppppcStack_138;
      uStack_154 = (double)CONCAT44(uStack_154._4_4_,ppppcStack_1d4);
      appppcStack_16c[0] = (code ****)0x1;
      ppppcStack_15c = (code ****)0x4;
      pppppcStack_138 = (code *****)0x0;
      ppppcStack_14c = (code ****)0x9;
      FUN_00441030(appppcStack_17c,&ppppcStack_14c,&ppppcStack_15c,appppcStack_16c);
      pppppcStack_118 = (code *****)__vbaI4Var(appppcStack_17c);
      __vbaFreeObjList(3,&pppppcStack_130,&pppppcStack_134,&pppppcStack_138);
      __vbaFreeVarList(4,&ppppcStack_14c,&ppppcStack_15c,appppcStack_16c,appppcStack_17c);
      uVar11 = (*(code *)(*ppppppcVar5)[0xe3])(ppppppcVar5,0,0);
      uVar11 = __vbaObjSet(&pppppcStack_130,uVar11);
      __vbaLateIdCallLd(&ppppcStack_14c,uVar11);
      dStack_368 = (double)(int)pppppcStack_118;
      iStack_36c = __vbaI4Var(&ppppcStack_14c);
      dStack_374 = (double)iStack_36c;
      if (DAT_0047f000 != 0) {
        adj_fdiv_m64();
      }
      if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
      pppppcStack_11c = (code *****)__vbaFpI4();
      __vbaFreeObj();
      __vbaFreeVar();
      sStack_254 = *(short *)(ppppppcVar5 + 0x27);
      (*(code *)(*ppppppcVar5)[0xe3])();
      pppppcStack_4a0 = (code *****)0x46bf55;
      __vbaObjSet();
      pppppcStack_4a0 = (code *****)0x46bf60;
      ppppppcVar7 = (code ******)__vbaLateIdCallLd();
      pppppcVar6 = (code *****)0x46bf66;
      iVar8 = __vbaI4Var();
      if (!SCARRY4(iVar8,1)) {
        pppppcStack_4a8 = (code *****)0x46bf77;
        ppppppcVar12 = (code ******)__vbaI2I4();
        pppppcStack_4a4 = (code *****)0x46bf85;
        pppppcStack_120 = (code *****)ppppppcVar12;
        __vbaFreeObj();
        pppppcStack_4a4 = (code *****)0x46bf8e;
        __vbaFreeVar();
        ppppppcVar17 = (code ******)pppppcStack_120;
        goto LAB_0046bf8e;
      }
      break;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    if (DAT_00480244 == (code ******)0x0) {
      pppppcStack_4a0 = (code *****)&DAT_00480244;
      pppppcStack_4a4 = (code *****)&DAT_00413b34;
      pppppcStack_4a8 = (code *****)0x46bfb4;
      __vbaNew2();
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    pppppcStack_4a4 = (code *****)0x46bfc9;
    pppppcStack_4a0 = (code *****)ppppppcVar5;
    pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xc2])();
    pppppcStack_4a8 = (code *****)&pppppcStack_130;
    pppppcStack_4ac = (code *****)0x46bfd4;
    pppppcStack_4ac = (code *****)__vbaObjSet();
    pppppcStack_4a4 = (code *****)&pppppcStack_134;
    pppppcStack_4b0 = (code *****)0x46bfe5;
    pppppcStack_4a8 = (code *****)ppppppcVar12;
    pppppcStack_1dc = pppppcStack_4ac;
    iVar8 = (*(code *)(*pppppcStack_4ac)[0x10])();
    if (iVar8 < 0) {
      pppppcStack_4b0 = (code *****)0x40;
      pppppcStack_4b4 = (code *****)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b4 = (code *****)&pppppcStack_138;
    pppppcStack_4b0 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    pppppcStack_4b0 = (code *****)__vbaObjSet();
    pppppcStack_4b4 = pppppcStack_1e4;
    ppppcStack_378 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[4])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObjList();
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2();
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    (*(code *)(*ppppppcVar5)[0xc4])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4);
    }
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    __vbaObjSet(&pppppcStack_138);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_37c = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[4])(pppppcStack_1e4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_380 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[4])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xc9])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_384 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[4])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[199])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_388 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[4])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[200])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_38c = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[4])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xc5])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_390 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[4])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0x10);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xc6])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_394 = (code ****)pppppcVar9;
    pppppcStack_4ac = (code *****)(*(code *)pppppcVar9[4])(pppppcStack_1e4,uVar11);
    if ((int)pppppcStack_4ac < 0) {
      pppppcStack_4a0 = (code *****)0x10;
      pppppcStack_4a4 = (code *****)&DAT_00413b24;
      pppppcStack_4a8 = pppppcVar2;
      pppppcStack_4b0 = (code *****)0x46c518;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_138;
    pppppcStack_4a4 = (code *****)&pppppcStack_130;
    pppppcStack_4a8 = (code *****)0x2;
    pppppcStack_4ac = (code *****)0x46c528;
    __vbaFreeObjList();
    ppppppcVar12 = (code ******)(uint)(ushort)((short)pppppcStack_120 + 1);
    ppppppcVar17 = ppppppcVar12;
    if (SCARRY2((short)pppppcStack_120,1)) break;
LAB_0046bf8e:
    pppppcStack_120 = (code *****)ppppppcVar17;
    if (sStack_254 < (short)ppppppcVar12) {
      pppppcStack_4a0 = (code *****)0x0;
      pppppcStack_4a4 = (code *****)0x0;
      pppppcStack_4ac = (code *****)0x46c551;
      pppppcStack_4a8 = (code *****)ppppppcVar5;
      pppppcStack_4ac = (code *****)(*(code *)(*ppppppcVar5)[0xe3])();
      pppppcStack_4b0 = (code *****)&pppppcStack_130;
      pppppcStack_4b4 = (code *****)0x46c55c;
      pppppcStack_4ac = (code *****)__vbaObjSet();
      pppppcStack_4b0 = &ppppcStack_14c;
      pppppcStack_4b4 = (code *****)0x46c567;
      pppppcStack_4a4 = (code *****)__vbaLateIdCallLd();
      pppppcStack_4a8 = (code *****)0x46c571;
      __vbaI4Var();
      pppppcStack_4a4 = (code *****)0x46c579;
      uStack_25c = __vbaI2I4();
      ppppppcVar17 = (code ******)
                     CONCAT22((short)((uint)ppppppcVar12 >> 0x10),*(short *)(ppppppcVar5 + 0x27) + 1
                             );
      if (!SCARRY2(*(short *)(ppppppcVar5 + 0x27),1)) {
        pppppcStack_4a4 = (code *****)0x46c59c;
        pppppcStack_120 = (code *****)ppppppcVar17;
        __vbaFreeObj();
        pppppcStack_4a4 = (code *****)0x46c5a5;
        __vbaFreeVar();
        ppppppcVar12 = (code ******)pppppcStack_120;
        goto LAB_0046c5a5;
      }
      break;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    if (DAT_00480244 == (code ******)0x0) {
      pppppcStack_4a0 = (code *****)&DAT_00480244;
      pppppcStack_4a4 = (code *****)&DAT_00413b34;
      pppppcStack_4a8 = (code *****)0x46c5cb;
      __vbaNew2();
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    pppppcStack_4a4 = (code *****)0x46c5df;
    pppppcStack_4a0 = (code *****)ppppppcVar5;
    pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xc2])();
    pppppcStack_4a8 = (code *****)&pppppcStack_130;
    pppppcStack_4ac = (code *****)0x46c5ea;
    pppppcStack_4ac = (code *****)__vbaObjSet();
    pppppcStack_4a4 = (code *****)&pppppcStack_134;
    pppppcStack_4b0 = (code *****)0x46c5fb;
    pppppcStack_4a8 = (code *****)ppppppcVar17;
    pppppcStack_1dc = pppppcStack_4ac;
    iVar8 = (*(code *)(*pppppcStack_4ac)[0x10])();
    if (iVar8 < 0) {
      pppppcStack_4b0 = (code *****)0x40;
      pppppcStack_4b4 = (code *****)&DAT_004182e4;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b0 = pppppcStack_134;
    pppppcStack_4b4 = (code *****)&pppppcStack_138;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    pppppcStack_4b0 = (code *****)__vbaObjSet();
    pppppcStack_4b4 = pppppcStack_1e4;
    iVar8 = (*(code *)pppppcVar9[3])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObjList();
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2();
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    (*(code *)(*ppppppcVar5)[0xc4])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4);
    }
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    __vbaObjSet(&pppppcStack_138);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_39c = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[3])(pppppcStack_1e4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_3a0 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[3])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xc9])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_3a4 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[3])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[199])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_3a8 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[3])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[200])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_3ac = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[3])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xc5])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_3b0 = (code ****)pppppcVar9;
    iVar8 = (*(code *)pppppcVar9[3])(pppppcStack_1e4,uVar11);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar2,&DAT_00413b24,0xc);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_138);
    if (DAT_00480244 == (code ******)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    pppppcStack_1e4 = (code *****)DAT_00480244;
    uVar11 = (*(code *)(*ppppppcVar5)[0xc6])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar2 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcVar9 = (code *****)*pppppcStack_1e4;
    uVar11 = __vbaObjSet(&pppppcStack_138,pppppcVar2);
    pppppcVar2 = pppppcStack_1e4;
    ppppcStack_3b4 = (code ****)pppppcVar9;
    pppppcStack_4ac = (code *****)(*(code *)pppppcVar9[3])(pppppcStack_1e4,uVar11);
    if ((int)pppppcStack_4ac < 0) {
      pppppcStack_4a0 = (code *****)0xc;
      pppppcStack_4a4 = (code *****)&DAT_00413b24;
      pppppcStack_4a8 = pppppcVar2;
      pppppcStack_4b0 = (code *****)0x46cb25;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_138;
    pppppcStack_4a4 = (code *****)&pppppcStack_130;
    pppppcStack_4a8 = (code *****)0x2;
    pppppcStack_4ac = (code *****)0x46cb35;
    __vbaFreeObjList();
    ppppppcVar17 = (code ******)(uint)(ushort)((short)pppppcStack_120 + 1);
    ppppppcVar12 = ppppppcVar17;
    if (SCARRY2((short)pppppcStack_120,1)) break;
LAB_0046c5a5:
    pppppcStack_120 = (code *****)ppppppcVar12;
    if ((short)uStack_25c < (short)ppppppcVar17) {
      pppppcStack_4a0 = (code *****)0x0;
      pppppcStack_4a4 = (code *****)0x0;
      pppppcStack_4ac = (code *****)0x46cb5e;
      pppppcStack_4a8 = (code *****)ppppppcVar5;
      pppppcStack_4ac = (code *****)(*(code *)(*ppppppcVar5)[0xe3])();
      pcVar13 = __vbaObjSet_exref;
      pppppcStack_4b0 = (code *****)&pppppcStack_130;
      pppppcStack_4b4 = (code *****)0x46cb6b;
      pppppcStack_4ac = (code *****)__vbaObjSet();
      pppppcStack_4b0 = &ppppcStack_14c;
      pppppcStack_4b4 = (code *****)0x46cb76;
      pppppcStack_4a4 = (code *****)__vbaLateIdCallLd();
      pppppcStack_4a8 = (code *****)0x46cb80;
      __vbaI4Var();
      pppppcStack_4a8 = (code *****)0x46cb88;
      uStack_264 = __vbaI2I4();
      pppppcStack_120 = (code *****)0x1;
      pppppcStack_4a4 = (code *****)0x46cb9e;
      __vbaFreeObj();
      pppppcStack_4a4 = (code *****)0x46cba7;
      __vbaFreeVar();
      ppppppcVar17 = (code ******)pppppcStack_120;
      goto LAB_0046cba7;
    }
  }
  goto LAB_0046e052;
  while( true ) {
    pppppcStack_4a4 = (code *****)0x46cbdf;
    pppppcStack_124 = (code *****)ppppppcVar17;
    pppppcStack_4a4 = (code *****)(*(code *)(*ppppppcVar5)[0xc2])();
    pppppcStack_4a8 = (code *****)&pppppcStack_130;
    pppppcStack_4ac = (code *****)0x46cbe6;
    pppppcStack_4b4 = (code *****)(*pcVar13)();
    pppppcStack_4ac = (code *****)&pppppcStack_134;
    pppppcStack_4b0 = pppppcStack_120;
    iVar8 = (*(code *)(*pppppcStack_4b4)[0x10])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    pppppcStack_134 = (code *****)0x0;
    __vbaObjSet();
    __vbaFreeObj();
    (*(code *)(*ppppppcVar5)[0xc2])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4);
    }
    pppppcVar6 = pppppcStack_134;
    iVar8 = (*(code *)(*pppppcStack_134)[0x1e])(pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar6,&DAT_0041807c,0x78);
    }
    iVar8 = (**(code **)(*piStack_208 + 0x7c))(piStack_208,ppppcStack_1d4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_208,&DAT_0041807c,0x7c);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_134);
    fStack_3b8 = (float)(int)pppppcStack_124;
    iVar8 = (**(code **)(*piStack_208 + 0x74))(piStack_208,fStack_3b8);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_208,&DAT_0041807c,0x74);
    }
    fStack_3bc = (float)(int)pppppcStack_11c;
    iVar8 = (**(code **)(*piStack_208 + 0x84))(piStack_208,fStack_3bc);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_208,&DAT_0041807c,0x84);
    }
    iVar8 = (**(code **)(*piStack_208 + 0x9c))(piStack_208,0xffffffff);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_208,&DAT_0041807c,0x9c);
    }
    __vbaObjSetAddref(&piStack_208,0);
    uVar11 = (*(code *)(*ppppppcVar5)[0xc4])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar6 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    __vbaObjSet(&piStack_20c,pppppcVar6);
    __vbaFreeObj();
    uVar11 = (*(code *)(*ppppppcVar5)[0xc4])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,1,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar6 = pppppcStack_134;
    iVar8 = (*(code *)(*pppppcStack_134)[0x1c])(pppppcStack_134,&ppppcStack_1d4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar6,&DAT_00417a98,0x70);
    }
    iVar8 = (**(code **)(*piStack_20c + 0x74))(piStack_20c,ppppcStack_1d4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_20c,&DAT_00417a98,0x74);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_134);
    fStack_3c0 = (float)(int)pppppcStack_124;
    iVar8 = (**(code **)(*piStack_20c + 0x6c))(piStack_20c,fStack_3c0);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_20c,&DAT_00417a98,0x6c);
    }
    fStack_3c4 = (float)(int)pppppcStack_11c;
    iVar8 = (**(code **)(*piStack_20c + 0x7c))(piStack_20c,fStack_3c4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_20c,&DAT_00417a98,0x7c);
    }
    iVar8 = (**(code **)(*piStack_20c + 0x94))(piStack_20c,0xffffffff);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_20c,&DAT_00417a98,0x94);
    }
    __vbaObjSetAddref(&piStack_20c,0);
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar6 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    __vbaObjSet(&piStack_210,pppppcVar6);
    __vbaFreeObj();
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,1,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar6 = pppppcStack_134;
    iVar8 = (*(code *)(*pppppcStack_134)[0x1c])(pppppcStack_134,&ppppcStack_1d4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar6,&DAT_00417a98,0x70);
    }
    iVar8 = (**(code **)(*piStack_210 + 0x74))(piStack_210,ppppcStack_1d4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_210,&DAT_00417a98,0x74);
    }
    __vbaFreeObjList(2,&pppppcStack_130,&pppppcStack_134);
    fStack_3c8 = (float)(int)pppppcStack_124;
    iVar8 = (**(code **)(*piStack_210 + 0x6c))(piStack_210,fStack_3c8);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_210,&DAT_00417a98,0x6c);
    }
    fStack_3cc = (float)(int)pppppcStack_11c;
    iVar8 = (**(code **)(*piStack_210 + 0x7c))(piStack_210,fStack_3cc);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piStack_210,&DAT_00417a98,0x7c);
    }
    iVar8 = (**(code **)(*piStack_210 + 0x94))(piStack_210,0xffffffff);
    uVar18 = 0;
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    dStack_3d4 = (double)(int)pppppcStack_128;
    if (DAT_0047f000 == 0) {
      fVar19 = (float10)(int)pppppcStack_128 / (float10)2.0;
      piVar4 = piStack_210;
    }
    else {
      fVar19 = (float10)adj_fdiv_m64();
      piVar4 = extraout_ECX;
    }
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    fStack_3d8 = (float)fVar19;
    ppppppcVar17 = (code ******)(**(code **)(*piVar4 + 0x84))();
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a4 = (code *****)0x46d0d2;
      pppppcStack_4a0 = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    __vbaObjSetAddref();
    (*(code *)(*ppppppcVar5)[0xc9])();
    pppppcStack_4a0 = (code *****)0x46d0f5;
    ppppppcVar17 = (code ******)__vbaObjSet();
    pppppcStack_4a4 = (code *****)0x46d105;
    pppppcStack_4a0 = (code *****)ppppppcVar17;
    ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar17)[0x10])();
    if ((int)ppppppcVar7 < 0) {
      pppppcStack_4a4 = (code *****)0x40;
      pppppcStack_4a8 = (code *****)&DAT_004182e4;
      pppppcStack_4b4 = (code *****)0x46d116;
      pppppcStack_4b0 = (code *****)ppppppcVar7;
      pppppcStack_4ac = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a8 = (code *****)&pppppcStack_214;
    pppppcStack_4a4 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcStack_4ac = (code *****)0x46d130;
    __vbaObjSet();
    pppppcStack_4a4 = (code *****)0x46d139;
    __vbaFreeObj();
    pppppcStack_4a8 = (code *****)0x46d142;
    pppppcStack_4a4 = (code *****)ppppppcVar5;
    pppppcStack_4a8 = (code *****)(*(code *)(*ppppppcVar5)[0xc3])();
    pppppcStack_4ac = (code *****)&pppppcStack_138;
    pppppcStack_4b0 = (code *****)0x46d149;
    pppppcStack_4b0 = (code *****)__vbaObjSet();
    pppppcStack_4a8 = (code *****)&pppppcStack_13c;
    pppppcStack_4ac = pppppcStack_120;
    pppppcStack_4b4 = (code *****)0x46d159;
    iVar8 = (*(code *)(*pppppcStack_4b0)[0x10])();
    if (iVar8 < 0) {
      pppppcStack_4b4 = (code *****)0x40;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b4 = &ppppcStack_1d8;
    iVar8 = (*(code *)(*pppppcStack_13c)[0x20])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    (*(code *)(*ppppppcVar5)[0xc3])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    iVar8 = (*(code *)(*pppppcStack_134)[0x1c])(pppppcStack_134,&ppppcStack_1d4);
    uVar18 = 0;
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    dStack_3e0 = (double)(int)ppppppcVar5[0x30];
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    fStack_3e4 = (float)ppppcStack_1d8 + (float)ppppcStack_1d4 + (float)(int)ppppppcVar5[0x30];
    pppppcStack_4a0 = (code *****)(*(code *)(*pppppcStack_214)[0x1f])();
    if ((int)pppppcStack_4a0 < 0) {
      pppppcStack_4a4 = (code *****)0x46d250;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_130;
    pppppcStack_4a4 = (code *****)0x4;
    pppppcStack_4a8 = (code *****)0x46d268;
    __vbaFreeObjList();
    fStack_3e8 = (float)(int)pppppcStack_124;
    iVar8 = (*(code *)(*pppppcStack_214)[0x1d])();
    if (iVar8 < 0) {
      pppppcStack_4a0 = (code *****)&DAT_00417e48;
      pppppcStack_4a4 = pppppcStack_214;
      pppppcStack_4ac = (code *****)0x46d29e;
      pppppcStack_4a8 = (code *****)iVar8;
      __vbaHresultCheckObj();
    }
    fStack_3ec = (float)(int)pppppcStack_11c;
    pppppcStack_4a0 = pppppcStack_214;
    pppppcStack_4a4 = (code *****)0x46d2bd;
    pppppcStack_4b0 = (code *****)(*(code *)(*pppppcStack_214)[0x21])();
    if ((int)pppppcStack_4b0 < 0) {
      pppppcStack_4a4 = (code *****)0x84;
      pppppcStack_4a8 = (code *****)&DAT_00417e48;
      pppppcStack_4ac = pppppcStack_214;
      pppppcStack_4b4 = (code *****)0x46d2d7;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b0 = (code *****)0x2;
    pppppcStack_4ac = pppppcStack_188;
    pppppcStack_4b4 = pppppcStack_214;
    pppppcStack_4a8 = (code *****)0x1;
    pppppcStack_4a4 = pppppcStack_180;
    iVar8 = (*(code *)(*pppppcStack_214)[0x72])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    iVar8 = (*(code *)(*pppppcStack_214)[0x27])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8);
    }
    __vbaObjSetAddref();
    (*(code *)(*ppppppcVar5)[199])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar6 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    __vbaObjSet(&pppppcStack_218,pppppcVar6);
    __vbaFreeObj();
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_138,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_13c);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar6 = pppppcStack_13c;
    iVar8 = (*(code *)(*pppppcStack_13c)[0x20])(pppppcStack_13c,&ppppcStack_1d8);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar6,&DAT_00417a98,0x80);
    }
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    iVar8 = (*(code *)(*pppppcStack_134)[0x1c])(pppppcStack_134,&ppppcStack_1d4);
    uVar18 = 0;
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    dStack_3f4 = (double)(int)ppppppcVar5[0x31];
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    fStack_3f8 = (float)ppppcStack_1d8 + (float)ppppcStack_1d4 + (float)(int)ppppppcVar5[0x31];
    pppppcStack_4a0 = (code *****)(*(code *)(*pppppcStack_218)[0x1d])();
    if ((int)pppppcStack_4a0 < 0) {
      pppppcStack_4a4 = (code *****)0x46d4d5;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_130;
    pppppcStack_4a4 = (code *****)0x4;
    pppppcStack_4a8 = (code *****)0x46d4ed;
    __vbaFreeObjList();
    fStack_3fc = (float)(int)pppppcStack_124;
    iVar8 = (*(code *)(*pppppcStack_218)[0x1b])();
    if (iVar8 < 0) {
      pppppcStack_4a0 = (code *****)&DAT_00417a98;
      pppppcStack_4a4 = pppppcStack_218;
      pppppcStack_4ac = (code *****)0x46d523;
      pppppcStack_4a8 = (code *****)iVar8;
      __vbaHresultCheckObj();
    }
    fStack_400 = (float)(int)pppppcStack_11c;
    pppppcStack_4a0 = pppppcStack_218;
    pppppcStack_4a4 = (code *****)0x46d53f;
    ppppppcVar17 = (code ******)(*(code *)(*pppppcStack_218)[0x1f])();
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a4 = (code *****)0x7c;
      pppppcStack_4a8 = (code *****)&DAT_00417a98;
      pppppcStack_4ac = pppppcStack_218;
      pppppcStack_4b4 = (code *****)0x46d556;
      pppppcStack_4b0 = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a8 = (code *****)0x46d55f;
    pppppcStack_4a4 = (code *****)ppppppcVar5;
    pppppcStack_4a8 = (code *****)(*(code *)(*ppppppcVar5)[0xcb])();
    pppppcStack_4ac = (code *****)&pppppcStack_130;
    pppppcStack_4b0 = (code *****)0x46d56a;
    pppppcStack_4ac = (code *****)__vbaObjSet();
    pppppcStack_4a8 = (code *****)apppppcStack_1d0;
    pppppcStack_4b0 = (code *****)0x46d57c;
    iVar8 = (*(code *)(*pppppcStack_4ac)[0x38])();
    if (iVar8 < 0) {
      pppppcStack_4b0 = (code *****)0xe0;
      pppppcStack_4b4 = (code *****)&DAT_00417e48;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b0 = (code *****)-(uint)((short)apppppcStack_1d0[0] == 1);
    pppppcStack_4b4 = pppppcStack_218;
    iVar8 = (*(code *)(*pppppcStack_218)[0x25])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaObjSetAddref();
    (*(code *)(*ppppppcVar5)[200])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4);
    }
    pppppcStack_134 = (code *****)0x0;
    __vbaObjSet(&pppppcStack_21c);
    __vbaFreeObj();
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])();
    piVar4 = (int *)__vbaObjSet(&pppppcStack_138,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_13c);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar6 = pppppcStack_13c;
    iVar8 = (*(code *)(*pppppcStack_13c)[0x20])(pppppcStack_13c,&ppppcStack_1d8);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar6,&DAT_00417a98,0x80);
    }
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    iVar8 = (*(code *)(*pppppcStack_134)[0x1c])(pppppcStack_134,&ppppcStack_1d4);
    uVar18 = 0;
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    dStack_408 = (double)(int)ppppppcVar5[0x32];
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    fStack_40c = (float)ppppcStack_1d8 + (float)ppppcStack_1d4 + (float)(int)ppppppcVar5[0x32];
    pppppcStack_4a0 = (code *****)(*(code *)(*pppppcStack_21c)[0x1d])();
    if ((int)pppppcStack_4a0 < 0) {
      pppppcStack_4a4 = (code *****)0x46d750;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_130;
    pppppcStack_4a4 = (code *****)0x4;
    pppppcStack_4a8 = (code *****)0x46d768;
    __vbaFreeObjList();
    fStack_410 = (float)(int)pppppcStack_124;
    iVar8 = (*(code *)(*pppppcStack_21c)[0x1b])();
    if (iVar8 < 0) {
      pppppcStack_4a0 = (code *****)&DAT_00417a98;
      pppppcStack_4a4 = pppppcStack_21c;
      pppppcStack_4ac = (code *****)0x46d79e;
      pppppcStack_4a8 = (code *****)iVar8;
      __vbaHresultCheckObj();
    }
    fStack_414 = (float)(int)pppppcStack_11c;
    pppppcStack_4a0 = pppppcStack_21c;
    pppppcStack_4a4 = (code *****)0x46d7ba;
    ppppppcVar17 = (code ******)(*(code *)(*pppppcStack_21c)[0x1f])();
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a4 = (code *****)0x7c;
      pppppcStack_4a8 = (code *****)&DAT_00417a98;
      pppppcStack_4ac = pppppcStack_21c;
      pppppcStack_4b4 = (code *****)0x46d7d1;
      pppppcStack_4b0 = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a8 = (code *****)0x46d7da;
    pppppcStack_4a4 = (code *****)ppppppcVar5;
    pppppcStack_4a8 = (code *****)(*(code *)(*ppppppcVar5)[0xcb])();
    pppppcStack_4ac = (code *****)&pppppcStack_130;
    pppppcStack_4b0 = (code *****)0x46d7e5;
    pppppcStack_4ac = (code *****)__vbaObjSet();
    pppppcStack_4a8 = (code *****)apppppcStack_1d0;
    pppppcStack_4b0 = (code *****)0x46d7f7;
    iVar8 = (*(code *)(*pppppcStack_4ac)[0x38])();
    if (iVar8 < 0) {
      pppppcStack_4b0 = (code *****)0xe0;
      pppppcStack_4b4 = (code *****)&DAT_00417e48;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b0 = (code *****)-(uint)((short)apppppcStack_1d0[0] == 1);
    pppppcStack_4b4 = pppppcStack_21c;
    iVar8 = (*(code *)(*pppppcStack_21c)[0x25])();
    uVar18 = 0;
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    dStack_41c = (double)(int)pppppcStack_128;
    if (DAT_0047f000 == 0) {
      fVar19 = (float10)(int)pppppcStack_128 / (float10)2.0;
      ppppppcVar17 = (code ******)pppppcStack_21c;
    }
    else {
      fVar19 = (float10)adj_fdiv_m64();
      ppppppcVar17 = extraout_ECX_00;
    }
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    fStack_420 = (float)fVar19;
    ppppppcVar17 = (code ******)(*(code *)(*ppppppcVar17)[0x21])();
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a4 = (code *****)0x46d8c1;
      pppppcStack_4a0 = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    __vbaObjSetAddref();
    (*(code *)(*ppppppcVar5)[0xc5])();
    pppppcStack_4a0 = (code *****)0x46d8e4;
    ppppppcVar17 = (code ******)__vbaObjSet();
    pppppcStack_4a4 = (code *****)0x46d8f4;
    pppppcStack_4a0 = (code *****)ppppppcVar17;
    ppppppcVar7 = (code ******)(*(code *)(*ppppppcVar17)[0x10])();
    if ((int)ppppppcVar7 < 0) {
      pppppcStack_4a4 = (code *****)0x40;
      pppppcStack_4a8 = (code *****)&DAT_004182e4;
      pppppcStack_4b4 = (code *****)0x46d905;
      pppppcStack_4b0 = (code *****)ppppppcVar7;
      pppppcStack_4ac = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a8 = (code *****)&pppppcStack_220;
    pppppcStack_4a4 = pppppcStack_134;
    pppppcStack_134 = (code *****)0x0;
    pppppcStack_4ac = (code *****)0x46d91f;
    __vbaObjSet();
    pppppcStack_4a4 = (code *****)0x46d928;
    __vbaFreeObj();
    pppppcStack_4a8 = (code *****)0x46d931;
    pppppcStack_4a4 = (code *****)ppppppcVar5;
    pppppcStack_4a8 = (code *****)(*(code *)(*ppppppcVar5)[0xc3])();
    pppppcStack_4ac = (code *****)&pppppcStack_138;
    pppppcStack_4b0 = (code *****)0x46d938;
    pppppcStack_4b0 = (code *****)__vbaObjSet();
    pppppcStack_4a8 = (code *****)&pppppcStack_13c;
    pppppcStack_4ac = pppppcStack_120;
    pppppcStack_4b4 = (code *****)0x46d948;
    iVar8 = (*(code *)(*pppppcStack_4b0)[0x10])();
    if (iVar8 < 0) {
      pppppcStack_4b4 = (code *****)0x40;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b4 = &ppppcStack_1d8;
    iVar8 = (*(code *)(*pppppcStack_13c)[0x20])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    (*(code *)(*ppppppcVar5)[0xc3])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    iVar8 = (*(code *)(*pppppcStack_134)[0x1c])(pppppcStack_134,&ppppcStack_1d4);
    uVar18 = 0;
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    dStack_428 = (double)(int)ppppppcVar5[0x31];
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    fStack_42c = (float)ppppcStack_1d8 + (float)ppppcStack_1d4 + (float)(int)ppppppcVar5[0x31];
    pppppcStack_4a0 = (code *****)(*(code *)(*pppppcStack_220)[0x1d])();
    if ((int)pppppcStack_4a0 < 0) {
      pppppcStack_4a4 = (code *****)0x46da3f;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_130;
    pppppcStack_4a4 = (code *****)0x4;
    pppppcStack_4a8 = (code *****)0x46da57;
    __vbaFreeObjList();
    fStack_430 = (float)(int)pppppcStack_124;
    iVar8 = (*(code *)(*pppppcStack_220)[0x1b])();
    if (iVar8 < 0) {
      pppppcStack_4a0 = (code *****)&DAT_00417a98;
      pppppcStack_4a4 = pppppcStack_220;
      pppppcStack_4ac = (code *****)0x46da8d;
      pppppcStack_4a8 = (code *****)iVar8;
      __vbaHresultCheckObj();
    }
    fStack_434 = (float)(int)pppppcStack_11c;
    pppppcStack_4a0 = pppppcStack_220;
    pppppcStack_4a4 = (code *****)0x46daa9;
    ppppppcVar17 = (code ******)(*(code *)(*pppppcStack_220)[0x1f])();
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a4 = (code *****)0x7c;
      pppppcStack_4a8 = (code *****)&DAT_00417a98;
      pppppcStack_4ac = pppppcStack_220;
      pppppcStack_4b4 = (code *****)0x46dac0;
      pppppcStack_4b0 = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a8 = (code *****)0x46dac9;
    pppppcStack_4a4 = (code *****)ppppppcVar5;
    pppppcStack_4a8 = (code *****)(*(code *)(*ppppppcVar5)[0xcb])();
    pppppcStack_4ac = (code *****)&pppppcStack_130;
    pppppcStack_4b0 = (code *****)0x46dad4;
    pppppcStack_4ac = (code *****)__vbaObjSet();
    pppppcStack_4a8 = (code *****)apppppcStack_1d0;
    pppppcStack_4b0 = (code *****)0x46dae6;
    iVar8 = (*(code *)(*pppppcStack_4ac)[0x38])();
    if (iVar8 < 0) {
      pppppcStack_4b0 = (code *****)0xe0;
      pppppcStack_4b4 = (code *****)&DAT_00417e48;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b0 = (code *****)-(uint)((short)apppppcStack_1d0[0] == 0);
    pppppcStack_4b4 = pppppcStack_220;
    iVar8 = (*(code *)(*pppppcStack_220)[0x25])();
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    __vbaObjSetAddref();
    (*(code *)(*ppppppcVar5)[0xc6])();
    piVar4 = (int *)__vbaObjSet();
    iVar8 = (**(code **)(*piVar4 + 0x40))();
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4);
    }
    pppppcStack_134 = (code *****)0x0;
    __vbaObjSet(&pppppcStack_224);
    __vbaFreeObj();
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])();
    piVar4 = (int *)__vbaObjSet(&pppppcStack_138,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_13c);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    pppppcVar6 = pppppcStack_13c;
    iVar8 = (*(code *)(*pppppcStack_13c)[0x20])(pppppcStack_13c,&ppppcStack_1d8);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,pppppcVar6,&DAT_00417a98,0x80);
    }
    uVar11 = (*(code *)(*ppppppcVar5)[0xc3])(ppppppcVar5);
    piVar4 = (int *)__vbaObjSet(&pppppcStack_130,uVar11);
    iVar8 = (**(code **)(*piVar4 + 0x40))(piVar4,pppppcStack_120,&pppppcStack_134);
    if (iVar8 < 0) {
      __vbaHresultCheckObj(iVar8,piVar4,&DAT_004182e4,0x40);
    }
    iVar8 = (*(code *)(*pppppcStack_134)[0x1c])(pppppcStack_134,&ppppcStack_1d4);
    uVar18 = 0;
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    dStack_43c = (double)(int)ppppppcVar5[0x32];
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    fStack_440 = (float)ppppcStack_1d8 + (float)ppppcStack_1d4 + (float)(int)ppppppcVar5[0x32];
    pppppcStack_4a0 = (code *****)(*(code *)(*pppppcStack_224)[0x1d])();
    if ((int)pppppcStack_4a0 < 0) {
      pppppcStack_4a4 = (code *****)0x46dcb9;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a0 = (code *****)&pppppcStack_130;
    pppppcStack_4a4 = (code *****)0x4;
    pppppcStack_4a8 = (code *****)0x46dcd1;
    __vbaFreeObjList();
    fStack_444 = (float)(int)pppppcStack_124;
    iVar8 = (*(code *)(*pppppcStack_224)[0x1b])();
    if (iVar8 < 0) {
      pppppcStack_4a0 = (code *****)&DAT_00417a98;
      pppppcStack_4a4 = pppppcStack_224;
      pppppcStack_4ac = (code *****)0x46dd07;
      pppppcStack_4a8 = (code *****)iVar8;
      __vbaHresultCheckObj();
    }
    fStack_448 = (float)(int)pppppcStack_11c;
    pppppcStack_4a0 = pppppcStack_224;
    pppppcStack_4a4 = (code *****)0x46dd23;
    ppppppcVar17 = (code ******)(*(code *)(*pppppcStack_224)[0x1f])();
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a4 = (code *****)0x7c;
      pppppcStack_4a8 = (code *****)&DAT_00417a98;
      pppppcStack_4ac = pppppcStack_224;
      pppppcStack_4b4 = (code *****)0x46dd3a;
      pppppcStack_4b0 = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a8 = (code *****)0x46dd43;
    pppppcStack_4a4 = (code *****)ppppppcVar5;
    pppppcStack_4a8 = (code *****)(*(code *)(*ppppppcVar5)[0xcb])();
    pppppcStack_4ac = (code *****)&pppppcStack_130;
    pppppcStack_4b0 = (code *****)0x46dd4e;
    pppppcStack_4ac = (code *****)__vbaObjSet();
    pppppcStack_4a8 = (code *****)apppppcStack_1d0;
    pppppcStack_4b0 = (code *****)0x46dd60;
    iVar8 = (*(code *)(*pppppcStack_4ac)[0x38])();
    if (iVar8 < 0) {
      pppppcStack_4b0 = (code *****)0xe0;
      pppppcStack_4b4 = (code *****)&DAT_00417e48;
      __vbaHresultCheckObj();
    }
    pppppcStack_4b0 = (code *****)-(uint)((short)apppppcStack_1d0[0] == 0);
    pppppcStack_4b4 = pppppcStack_224;
    iVar8 = (*(code *)(*pppppcStack_224)[0x25])();
    uVar18 = 0;
    if (iVar8 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObj();
    dStack_450 = (double)(int)pppppcStack_128;
    if (DAT_0047f000 == 0) {
      fVar19 = (float10)(int)pppppcStack_128 / (float10)2.0;
      ppppppcVar7 = (code ******)pppppcStack_224;
    }
    else {
      fVar19 = (float10)adj_fdiv_m64();
      ppppppcVar7 = extraout_ECX_01;
    }
    if ((uVar18 & 0xd) != 0) goto LAB_0046e04d;
    fStack_454 = (float)fVar19;
    pppppcVar6 = (code *****)0x46de0f;
    ppppppcVar17 = (code ******)(*(code *)(*ppppppcVar7)[0x21])();
    if ((int)ppppppcVar17 < 0) {
      pppppcStack_4a0 = (code *****)0x84;
      pppppcStack_4a4 = (code *****)&DAT_00417a98;
      pppppcStack_4a8 = pppppcStack_224;
      pppppcStack_4b0 = (code *****)0x46de29;
      pppppcStack_4ac = (code *****)ppppppcVar17;
      __vbaHresultCheckObj();
    }
    pppppcStack_4a4 = (code *****)&pppppcStack_224;
    pppppcStack_4a0 = (code *****)0x0;
    pppppcStack_4a8 = (code *****)0x46de38;
    __vbaObjSetAddref();
    pcVar13 = __vbaObjSet_exref;
    ppppppcVar17 = (code ******)(uint)(ushort)((short)pppppcStack_120 + 1);
    if (SCARRY2((short)pppppcStack_120,1)) break;
LAB_0046cba7:
    pppppcStack_120 = (code *****)ppppppcVar17;
    if ((short)uStack_264 < (short)pppppcStack_120) {
      pppppcStack_4a0 = (code *****)0x0;
      pppppcStack_4a4 = (code *****)0x0;
      pppppcStack_4ac = (code *****)0x46de62;
      pppppcStack_4a8 = (code *****)ppppppcVar5;
      pppppcStack_4ac = (code *****)(*(code *)(*ppppppcVar5)[0xe3])();
      pppppcStack_4b0 = (code *****)&pppppcStack_130;
      pppppcStack_4b4 = (code *****)0x46de69;
      pppppcStack_4b4 = (code *****)(*pcVar13)();
      pppppcStack_4ac = (code *****)__vbaLateIdCallLd();
      pppppcStack_4b0 = (code *****)0x46de7e;
      __vbaI4Var();
      pppppcStack_4b0 = (code *****)0x46de86;
      uVar3 = __vbaI2I4();
      *(undefined2 *)(ppppppcVar5 + 0x27) = uVar3;
      pppppcStack_4ac = (code *****)0x46de96;
      __vbaFreeObj();
      pppppcStack_4ac = (code *****)0x46de9f;
      __vbaFreeVar();
      pppppcStack_4ac = (code *****)0x46dea8;
      pppppcStack_4a8 = (code *****)ppppppcVar5;
      pppppcStack_4ac = (code *****)(*(code *)(*ppppppcVar5)[0xcb])();
      pppppcStack_4b0 = (code *****)&pppppcStack_138;
      pppppcStack_4b4 = (code *****)0x46deaf;
      pppppcStack_1ec = (code *****)(*pcVar13)();
      pppppcStack_4b4 = (code *****)ppppppcVar5;
      (*(code *)(*ppppppcVar5)[0xc9])();
      pppppcStack_1dc = (code *****)(*pcVar13)();
      iVar8 = (*(code *)(*pppppcStack_1dc)[0x10])();
      if (iVar8 < 0) {
        __vbaHresultCheckObj(iVar8,pppppcStack_1dc,&DAT_004182e4,0x40);
      }
      pppppcStack_1e4 = pppppcStack_134;
      iVar8 = (*(code *)(*pppppcStack_134)[0x1e])(pppppcStack_134,&ppppcStack_1d4);
      if (iVar8 < 0) {
        __vbaHresultCheckObj(iVar8,pppppcStack_1e4,&DAT_00417e48,0x78);
      }
      iVar8 = (*(code *)(*pppppcStack_1ec)[0x1f])(pppppcStack_1ec,ppppcStack_1d4);
      if (iVar8 < 0) {
        __vbaHresultCheckObj(iVar8,pppppcStack_1ec,&DAT_00417e48,0x7c);
      }
      __vbaFreeObjList(3,&pppppcStack_130,&pppppcStack_134,&pppppcStack_138);
      uVar11 = (*(code *)(*ppppppcVar5)[0xc0])(ppppppcVar5);
      piVar4 = (int *)(*pcVar13)(&pppppcStack_130,uVar11);
      iVar8 = (**(code **)(*piVar4 + 0x9c))(piVar4,pppppcStack_10c);
      if (iVar8 < 0) {
        __vbaHresultCheckObj();
      }
      __vbaFreeObj();
      goto LAB_0046df9a;
    }
    if ((SBORROW2((short)pppppcStack_120,1)) ||
       (lVar1 = (longlong)(int)(short)((short)pppppcStack_120 + -1) * (longlong)(int)pppppcStack_11c
       , ppppppcVar17 = (code ******)lVar1, (int)ppppppcVar17 != lVar1)) break;
  }
LAB_0046e052:
  pppppcStack_4a0 = (code *****)0x46e058;
  __vbaErrorOverflow();
  pppppcStack_4ac = (code *****)&LAB_004032d6;
  pppppcStack_4b0 = ExceptionList;
  pppppcStack_4a8 = (code *****)&stack0xfffffb38;
  pppppcStack_4a4 = (code *****)&LAB_00402c28;
  pppppcStack_4a0 = (code *****)((uint)pppppcVar6 & 1);
  piVar4 = (int *)((uint)pppppcVar6 & 0xfffffffe);
  ExceptionList = &pppppcStack_4b0;
  (**(code **)(*piVar4 + 4))(piVar4);
  pppppcStack_4b4 = (code *****)0x0;
  __vbaObjSetAddref(&pppppcStack_4b4,ppppppcVar7);
  (**(code **)(*piVar4 + 0x704))(piVar4,&pppppcStack_4b4);
  pppppcStack_4a0 = (code *****)0x0;
  __vbaFreeObj(&LAB_0046e0d2);
  return;
}

/* ---- 0x46e060 (FUN_0046e060) [estimated] strings:  ---- */
void __cdecl FUN_0046e060(uint param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &LAB_00402c28;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_1c = 0;
  __vbaObjSetAddref(&local_1c,param_2);
  (**(code **)(*piVar1 + 0x704))(piVar1,&local_1c);
  local_8 = 0;
  __vbaFreeObj(&LAB_0046e0d2);
  return;
}

/* ---- 0x46e100 (FUN_0046e100) [estimated] strings:  ---- */
undefined4 FUN_0046e100(uint param_1,short *param_2)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402c38;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  *(ushort *)(piVar1 + 0x28) = -(ushort)(*param_2 == 1);
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x46e180 (FUN_0046e180) [estimated] strings:  ---- */
undefined4 FUN_0046e180(uint param_1,undefined2 *param_2)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402c40;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  *(undefined2 *)(piVar1 + 0x45) = *param_2;
  local_8 = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x46e200 (FUN_0046e200) [estimated] strings:  ---- */
undefined4 FUN_0046e200(uint param_1)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402c48;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x740))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_004170bc,0x740);
  }
  (**(code **)(*piVar2 + 0x700))(piVar2);
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x46e290 (FUN_0046e290) [estimated] strings:  ---- */
undefined4 FUN_0046e290(uint param_1)

{
  int iVar1;
  int *piVar2;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &LAB_00402c50;
  local_8 = param_1 & 1;
  piVar2 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &local_18;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar1 = (**(code **)(*piVar2 + 0x740))(piVar2);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,piVar2,&DAT_004170bc,0x740);
  }
  (**(code **)(*piVar2 + 0x700))(piVar2);
  local_8 = 0;
  (**(code **)(*piVar2 + 8))(piVar2);
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x46e320 (FUN_0046e320) [estimated] strings:  ---- */
void __cdecl FUN_0046e320(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00402c58;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x46e3b0 (FUN_0046e3b0) [estimated] strings:  ---- */
undefined4 FUN_0046e3b0(int *param_1)

{
  int *piVar1;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffd4;
  local_c = &DAT_00402c68;
  local_8 = 0;
  ExceptionList = &local_18;
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaStrCopy(piVar1);
  (**(code **)(*param_1 + 8))();
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x46e420 (FUN_0046e420) [estimated] strings:  ---- */
void __cdecl FUN_0046e420(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00402c70;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0x10]);
  return;
}
