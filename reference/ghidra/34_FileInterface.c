/* Object #34 FileInterface -- ESTIMATED function range; public methods per VB header: Setup, CurrentPath, FileAbsent, PathInvalid, ObtainOpenFile, ObtainSaveAsFile */
#include "ghidra_types.h"

/* ---- 0x47a780 (FUN_0047a780) [estimated] strings: ; CTP Editor; File not found; CTP Editor ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FUN_0047a780(int **param_1,int *param_2,undefined4 param_3,wchar_t *param_4,undefined4 *param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int **ppiVar6;
  int *piVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puStack_450;
  int *piStack_44c;
  int *piStack_448;
  int iStack_444;
  int iStack_430;
  short sStack_42c;
  int *piStack_428;
  undefined4 auStack_424 [9];
  undefined4 uStack_400;
  wchar_t *pwStack_3f8;
  undefined4 uStack_3f0;
  wchar_t *pwStack_3e8;
  undefined4 auStack_3e0 [2];
  undefined4 uStack_3d8;
  undefined4 auStack_3d0 [2];
  undefined4 uStack_3c8;
  undefined4 auStack_3c0 [4];
  undefined4 auStack_3b0 [2];
  undefined4 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  int *piStack_378;
  undefined4 uStack_374;
  void *pvStack_370;
  int *piStack_36c;
  int *piStack_368;
  int *piStack_364;
  int *piStack_360;
  int *piStack_35c;
  code *pcStack_358;
  int *piStack_354;
  undefined4 *puStack_34c;
  undefined4 *puStack_348;
  undefined4 auStack_340 [2];
  undefined *puStack_338;
  int aiStack_330 [4];
  int iStack_320;
  int iStack_31c;
  int *piStack_318;
  int **ppiStack_314;
  int *piStack_310;
  int *piStack_30c;
  int *piStack_308;
  int **ppiStack_304;
  int **ppiStack_300;
  int **ppiStack_2fc;
  int **ppiStack_2f8;
  int *piStack_2f4;
  int *piStack_2f0;
  int *piStack_2ec;
  int **ppiStack_2e8;
  int **ppiStack_2e4;
  int *piStack_2e0;
  code *pcStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  int iStack_2d0;
  int iStack_2b8;
  int aiStack_2a8 [3];
  undefined *puStack_29c;
  undefined4 auStack_294 [2];
  int **ppiStack_28c;
  undefined4 auStack_284 [4];
  undefined4 auStack_274 [4];
  undefined4 auStack_264 [4];
  int *piStack_254;
  int iStack_250;
  int *piStack_24c;
  int *piStack_248;
  int *piStack_244;
  int *piStack_240;
  int *piStack_23c;
  int *piStack_238;
  int *piStack_234;
  int *piStack_230;
  int *piStack_22c;
  int **ppiStack_228;
  int *piStack_224;
  undefined1 *puStack_220;
  undefined4 uStack_21c;
  int *piStack_218;
  int *piStack_214;
  int *piStack_210;
  int *piStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined *puStack_1fc;
  undefined4 uStack_1f8;
  int *piStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int *piStack_1e8;
  int **ppiStack_1e4;
  int *piStack_1e0;
  int *piStack_1dc;
  code *pcStack_1d8;
  int iStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  int *apiStack_1c0 [3];
  undefined4 auStack_1b4 [6];
  int *piStack_19c;
  int *piStack_194;
  undefined4 auStack_190 [4];
  undefined4 auStack_180 [2];
  undefined4 uStack_178;
  undefined4 auStack_170 [2];
  undefined4 uStack_168;
  int aiStack_160 [4];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int *piStack_144;
  int *piStack_140;
  int *piStack_13c;
  int *piStack_138;
  int **ppiStack_134;
  int **ppiStack_130;
  int **ppiStack_12c;
  int **ppiStack_128;
  undefined1 *puStack_124;
  undefined4 uStack_120;
  int *piStack_11c;
  wchar_t *pwStack_118;
  undefined4 uStack_114;
  int *piStack_110;
  undefined4 *puStack_10c;
  undefined4 uStack_108;
  int *piStack_104;
  undefined *puStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  int **ppiStack_ec;
  int **ppiStack_e8;
  int *piStack_e4;
  int **ppiStack_e0;
  int *local_c0 [3];
  undefined4 local_b4 [9];
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  int *local_7c;
  wchar_t *local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  int local_50 [2];
  undefined4 local_48;
  int local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff24;
  local_c = &DAT_00403108;
  local_8 = 0;
  ppiStack_e0 = param_1;
  piStack_e4 = (int *)0x47a7ba;
  ExceptionList = &pvStack_18;
  (*(code *)(*param_1)[1])();
  piStack_e4 = param_1[0xd];
  ppiStack_e8 = local_c0;
  local_1c = (int *)0x0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80 = 0;
  local_90 = 0;
  local_b4[0] = 0;
  local_c0[0] = (int *)0x0;
  ppiStack_ec = (int **)0x47a7fb;
  __vbaObjSetAddref();
  piStack_e4 = (int *)*param_5;
  ppiStack_e8 = (int **)&DAT_00412f74;
  ppiStack_ec = (int **)0x47a80c;
  iVar3 = __vbaStrCmp();
  pcVar9 = __vbaLateIdSt_exref;
  if (iVar3 != 0) {
    piStack_e4 = local_b4;
    ppiStack_e8 = (int **)param_5;
    ppiStack_ec = param_1;
    iStack_f0 = 0x47a81e;
    iStack_f0 = (*(code *)(*param_1)[10])();
    if (iStack_f0 < 0) {
      piStack_e4 = (int *)0x28;
      ppiStack_e8 = (int **)&DAT_004146ac;
      ppiStack_ec = param_1;
      uStack_f4 = 0x47a831;
      __vbaHresultCheckObj();
    }
    pcVar9 = __vbaLateIdSt_exref;
    if ((short)local_b4[0] == 0) {
      local_80 = 0x4008;
      iStack_f0 = 0x4008;
      uStack_f4 = 5;
      local_78 = (wchar_t *)param_5;
      ppiStack_ec = (int **)local_7c;
      ppiStack_e8 = (int **)param_5;
      piStack_e4 = (int *)local_74;
      piStack_f8 = local_c0[0];
      uStack_fc = 0x47a86c;
      __vbaLateIdSt();
    }
  }
  local_80 = 0x4008;
  local_78 = (wchar_t *)param_3;
  iStack_f0 = 0x4008;
  uStack_f4 = 2;
  ppiStack_ec = (int **)local_7c;
  piStack_f8 = local_c0[0];
  ppiStack_e8 = (int **)param_3;
  piStack_e4 = (int *)local_74;
  uStack_fc = 0x47a8a3;
  (*pcVar9)();
  local_80 = 8;
  puStack_10c = (undefined4 *)0x1;
  uStack_108 = 8;
  local_78 = L"";
  piStack_104 = local_7c;
  piStack_110 = local_c0[0];
  puStack_100 = &DAT_00412f74;
  uStack_fc = local_74;
  uStack_114 = 0x47a8d4;
  (*pcVar9)();
  local_80 = 0x4008;
  local_78 = param_4;
  uStack_120 = 0x4008;
  puStack_124 = (undefined1 *)0x3;
  piStack_11c = local_7c;
  ppiStack_128 = (int **)local_c0[0];
  pwStack_118 = param_4;
  uStack_114 = local_74;
  ppiStack_12c = (int **)0x47a903;
  (*pcVar9)();
  ppiStack_12c = (int **)0x0;
  ppiStack_130 = (int **)0x1e;
  ppiStack_134 = (int **)local_c0[0];
  piStack_138 = (int *)0x47a913;
  __vbaLateIdCall();
  pcVar9 = __vbaStrVarMove_exref;
  uVar8 = 1;
  while( true ) {
    sVar1 = (short)uVar8;
    ppiStack_130 = (int **)0x0;
    ppiStack_134 = (int **)0x1;
    piStack_13c = local_40;
    piStack_138 = local_c0[0];
    piStack_140 = (int *)0x47a93f;
    ppiStack_12c = (int **)(int)sVar1;
    ppiStack_130 = (int **)__vbaLateIdCallLd();
    ppiStack_134 = (int **)0x47a945;
    __vbaStrVarMove();
    ppiStack_130 = (int **)0x47a950;
    ppiStack_130 = (int **)__vbaStrMove();
    ppiStack_134 = (int **)&DAT_00419230 /* bstr: '\\' */;
    piStack_138 = (int *)0x0;
    piStack_13c = (int *)0x47a95d;
    iVar3 = __vbaInStr();
    ppiStack_12c = (int **)0x47a970;
    __vbaFreeStr();
    ppiStack_12c = (int **)0x47a979;
    __vbaFreeVar();
    if ((short)-(uint)(iVar3 != 0) == 0) break;
    ppiStack_12c = (int **)0x0;
    ppiStack_130 = (int **)0x1;
    piStack_138 = local_40;
    ppiStack_134 = (int **)local_c0[0];
    piStack_13c = (int *)0x47a99a;
    ppiStack_128 = (int **)(int)sVar1;
    ppiStack_12c = (int **)__vbaLateIdCallLd();
    ppiStack_130 = (int **)0x47a9a0;
    __vbaStrVarMove();
    ppiStack_12c = (int **)0x47a9ab;
    ppiStack_12c = (int **)__vbaStrMove();
    ppiStack_130 = (int **)&DAT_00419230 /* bstr: '\\' */;
    ppiStack_134 = (int **)0x0;
    piStack_138 = (int *)0x47a9b9;
    iVar4 = __vbaInStr();
    if (SCARRY4(iVar4,1)) goto LAB_0047ac8a;
    ppiStack_128 = (int **)0x47a9ca;
    uVar8 = __vbaI2I4();
    puStack_124 = (undefined1 *)0x47a9d5;
    __vbaFreeStr();
    puStack_124 = (undefined1 *)0x47a9de;
    __vbaFreeVar();
  }
  ppiStack_128 = (int **)0x0;
  ppiStack_12c = (int **)0x1;
  ppiStack_134 = (int **)local_40;
  ppiStack_130 = (int **)local_c0[0];
  piStack_138 = (int *)0x47a9fa;
  __vbaLateIdCallLd();
  ppiStack_128 = (int **)local_40;
  ppiStack_12c = (int **)0x47aa03;
  local_48 = __vbaStrVarMove();
  if (!SBORROW2(sVar1,1)) {
    ppiStack_128 = (int **)(int)(short)(sVar1 + -1);
    ppiStack_130 = (int **)local_60;
    local_50[0] = 8;
    ppiStack_134 = (int **)0x47aa2c;
    ppiStack_12c = (int **)local_50;
    rtcLeftCharVar();
    ppiStack_128 = (int **)local_60;
    ppiStack_12c = (int **)0x47aa32;
    __vbaStrVarMove();
    ppiStack_128 = (int **)0x47aa3d;
    __vbaStrMove();
    ppiStack_128 = (int **)local_60;
    ppiStack_12c = (int **)local_50;
    ppiStack_130 = (int **)local_40;
    ppiStack_134 = (int **)0x3;
    piStack_138 = (int *)0x47aa53;
    __vbaFreeVarList();
    piStack_138 = (int *)0x0;
    piStack_13c = (int *)0x1;
    piStack_144 = local_40;
    piStack_140 = local_c0[0];
    uStack_148 = 0x47aa68;
    __vbaLateIdCallLd();
    ppiStack_128 = (int **)local_40;
    local_58 = 0x80020004;
    local_60[0] = 10;
    ppiStack_12c = (int **)0x47aa7f;
    local_48 = __vbaStrVarMove();
    ppiStack_12c = (int **)(int)sVar1;
    ppiStack_128 = (int **)local_60;
    ppiStack_130 = (int **)local_50;
    ppiStack_134 = (int **)local_70;
    local_50[0] = 8;
    piStack_138 = (int *)0x47aa9f;
    rtcMidCharVar();
    ppiStack_128 = (int **)local_70;
    ppiStack_12c = (int **)0x47aaa5;
    __vbaStrVarMove();
    ppiStack_128 = (int **)0x47aab0;
    __vbaStrMove();
    ppiStack_128 = (int **)local_70;
    ppiStack_12c = (int **)local_60;
    ppiStack_130 = (int **)local_50;
    ppiStack_134 = (int **)local_40;
    piStack_138 = (int *)0x4;
    piStack_13c = (int *)0x47aac4;
    __vbaFreeVarList();
    ppiStack_12c = local_c0;
    ppiStack_128 = (int **)0x0;
    ppiStack_130 = (int **)0x47aad8;
    __vbaObjSetAddref();
    ppiStack_128 = (int **)local_28;
    ppiStack_12c = (int **)0x47aae4;
    iVar3 = __vbaLenBstr();
    ppiStack_128 = (int **)local_1c;
    ppiStack_12c = (int **)0x47aaf8;
    iVar4 = __vbaLenBstr();
    if (iVar4 == 0 || iVar3 == 0) {
      local_24 = 0xffffffff;
    }
    else {
      ppiStack_128 = (int **)local_b4;
      ppiStack_12c = (int **)&local_28;
      ppiStack_130 = &local_1c;
      ppiStack_134 = param_1;
      piStack_138 = (int *)0x47ab2c;
      ppiVar6 = (int **)(*(code *)(*param_1)[9])();
      if ((int)ppiVar6 < 0) {
        ppiStack_128 = (int **)0x24;
        ppiStack_12c = (int **)&DAT_004146ac;
        ppiStack_130 = param_1;
        piStack_138 = (int *)0x47ab3f;
        ppiStack_134 = ppiVar6;
        __vbaHresultCheckObj();
      }
      if ((short)local_b4[0] == 0) {
        ppiStack_12c = (int **)&local_30;
        ppiStack_128 = param_1;
        piVar7 = (int *)*param_2;
        ppiStack_130 = (int **)0x47abdf;
        __vbaObjSetAddref();
        ppiStack_128 = (int **)&local_30;
        ppiStack_12c = (int **)&local_28;
        ppiStack_130 = (int **)local_1c;
        piStack_138 = (int *)0x47abf1;
        ppiStack_134 = (int **)piVar7;
        piVar5 = (int *)(**(code **)(*piVar7 + 0x50))();
        if ((int)piVar5 < 0) {
          ppiStack_128 = (int **)0x50;
          ppiStack_12c = (int **)&DAT_0041462c;
          piStack_138 = (int *)0x47ac06;
          ppiStack_134 = (int **)piVar5;
          ppiStack_130 = (int **)piVar7;
          __vbaHresultCheckObj();
        }
        ppiStack_128 = (int **)0x47ac0f;
        __vbaFreeObj();
      }
      else {
        local_70[0] = 10;
        local_60[0] = 10;
        local_68 = 0x80020004;
        local_58 = 0x80020004;
        local_88 = L"CTP Editor";
        local_90 = 8;
        ppiStack_128 = (int **)0x47ab89;
        __vbaVarDup();
        local_78 = L"File not found";
        local_80 = 8;
        ppiStack_128 = (int **)0x47ab9b;
        __vbaVarDup();
        ppiStack_128 = (int **)local_70;
        ppiStack_12c = (int **)local_60;
        ppiStack_130 = (int **)local_50;
        piStack_138 = local_40;
        ppiStack_134 = (int **)0x30;
        piStack_13c = (int *)0x47abb3;
        rtcMsgBox();
        ppiStack_128 = (int **)local_70;
        ppiStack_12c = (int **)local_60;
        ppiStack_130 = (int **)local_50;
        ppiStack_134 = (int **)local_40;
        piStack_138 = (int *)0x4;
        piStack_13c = (int *)0x47abc7;
        __vbaFreeVarList();
        local_24 = 0xffffffff;
      }
    }
    ppiStack_128 = (int **)&LAB_0047ac61;
    ppiStack_12c = (int **)0x47ac50;
    __vbaFreeObj();
    ppiStack_12c = (int **)0x47ac5b;
    __vbaFreeStr();
    ppiStack_12c = (int **)0x47ac60;
    __vbaFreeStr();
    return;
  }
LAB_0047ac8a:
  ppiStack_128 = (int **)0x47ac90;
  __vbaErrorOverflow();
  piVar7 = piStack_11c;
  ppiStack_134 = (int **)&LAB_004032d6;
  piStack_138 = ExceptionList;
  ppiStack_130 = (int **)&pcStack_1d8;
  pcStack_1d8 = pcVar9;
  ppiStack_12c = (int **)&DAT_00403118;
  ppiStack_128 = (int **)0x0;
  piStack_1dc = piStack_11c;
  piStack_1e0 = (int *)0x47acca;
  ExceptionList = &piStack_138;
  iStack_1d4 = -(uint)(iVar3 != 0);
  uStack_1d0 = uVar8;
  puStack_124 = &stack0xfffffffc;
  (**(code **)(*piStack_11c + 4))();
  piStack_1e0 = (int *)piVar7[0xd];
  ppiStack_1e4 = apiStack_1c0;
  piStack_13c = (int *)0x0;
  piStack_144 = (int *)0x0;
  uStack_148 = 0;
  uStack_14c = 0;
  uStack_150 = 0;
  aiStack_160[0] = 0;
  auStack_170[0] = 0;
  auStack_180[0] = 0;
  auStack_190[0] = 0;
  auStack_1b4[0] = 0;
  apiStack_1c0[0] = (int *)0x0;
  piStack_1e8 = (int *)0x47ad02;
  __vbaObjSetAddref();
  puVar10 = puStack_10c;
  piStack_1e0 = (int *)*puStack_10c;
  ppiStack_1e4 = (int **)&DAT_00412f74;
  piStack_1e8 = (int *)0x47ad13;
  iVar3 = __vbaStrCmp();
  piStack_218 = piStack_19c;
  pcVar9 = __vbaLateIdSt_exref;
  if (iVar3 != 0) {
    piStack_1e0 = auStack_1b4;
    ppiStack_1e4 = (int **)puVar10;
    piStack_1e8 = piVar7;
    iStack_1ec = 0x47ad25;
    iStack_1ec = (**(code **)(*piVar7 + 0x28))();
    if (iStack_1ec < 0) {
      piStack_1e0 = (int *)0x28;
      ppiStack_1e4 = (int **)&DAT_004146ac;
      piStack_1e8 = piVar7;
      uStack_1f0 = 0x47ad38;
      __vbaHresultCheckObj();
    }
    pcVar9 = __vbaLateIdSt_exref;
    piStack_218 = piStack_19c;
    if ((short)auStack_1b4[0] == 0) {
      iStack_1ec = 0x4008;
      uStack_1f0 = 5;
      piStack_1f4 = apiStack_1c0[0];
      piStack_1e8 = piStack_19c;
      ppiStack_1e4 = (int **)puVar10;
      piStack_1e0 = piStack_194;
      uStack_1f8 = 0x47ad6d;
      __vbaLateIdSt();
    }
  }
  uStack_1f0 = 2;
  iStack_1ec = 0x4008;
  ppiStack_1e4 = (int **)uStack_114;
  piStack_1f4 = apiStack_1c0[0];
  uStack_1f8 = 0x47ad9e;
  (*pcVar9)();
  uStack_208 = 1;
  uStack_204 = 8;
  puStack_1fc = &DAT_00412f74;
  piStack_20c = apiStack_1c0[0];
  piStack_210 = (int *)0x47adc3;
  (*pcVar9)();
  puStack_220 = (undefined1 *)0x3;
  uStack_21c = 0x4008;
  piStack_214 = piStack_110;
  piStack_224 = apiStack_1c0[0];
  ppiStack_228 = (int **)0x47ade6;
  piStack_210 = piStack_194;
  (*pcVar9)();
  ppiStack_228 = (int **)0x0;
  piStack_22c = (int *)0x1f;
  piStack_230 = apiStack_1c0[0];
  piStack_234 = (int *)0x47adf7;
  __vbaLateIdCall();
  pcVar9 = __vbaStrVarMove_exref;
  uVar8 = 1;
  while( true ) {
    sVar1 = (short)uVar8;
    ppiStack_228 = (int **)(int)sVar1;
    piStack_22c = (int *)0x0;
    piStack_230 = (int *)0x1;
    piStack_238 = aiStack_160;
    piStack_234 = apiStack_1c0[0];
    piStack_23c = (int *)0x47ae24;
    iStack_1cc = (int)ppiStack_228;
    piStack_22c = (int *)__vbaLateIdCallLd();
    piStack_230 = (int *)0x47ae2a;
    __vbaStrVarMove();
    piStack_22c = (int *)0x47ae35;
    piStack_22c = (int *)__vbaStrMove();
    piStack_230 = (int *)&DAT_00419230 /* bstr: '\\' */;
    piStack_234 = (int *)0x0;
    piStack_238 = (int *)0x47ae43;
    iVar3 = __vbaInStr();
    ppiStack_228 = (int **)0x47ae56;
    __vbaFreeStr();
    ppiStack_228 = (int **)0x47ae5f;
    __vbaFreeVar();
    if ((short)-(uint)(iVar3 != 0) == 0) break;
    piStack_224 = (int *)iStack_1cc;
    ppiStack_228 = (int **)0x0;
    piStack_22c = (int *)0x1;
    piStack_234 = aiStack_160;
    piStack_230 = apiStack_1c0[0];
    piStack_238 = (int *)0x47ae80;
    ppiStack_228 = (int **)__vbaLateIdCallLd();
    piStack_22c = (int *)0x47ae86;
    __vbaStrVarMove();
    ppiStack_228 = (int **)0x47ae91;
    ppiStack_228 = (int **)__vbaStrMove();
    piStack_22c = (int *)&DAT_00419230 /* bstr: '\\' */;
    piStack_230 = (int *)0x0;
    piStack_234 = (int *)0x47ae9f;
    iVar4 = __vbaInStr();
    if (SCARRY4(iVar4,1)) goto LAB_0047b0a3;
    piStack_224 = (int *)0x47aeb0;
    uVar8 = __vbaI2I4();
    puStack_220 = (undefined1 *)0x47aebb;
    __vbaFreeStr();
    puStack_220 = (undefined1 *)0x47aec4;
    __vbaFreeVar();
  }
  piStack_224 = (int *)0x0;
  ppiStack_228 = (int **)0x1;
  piStack_230 = aiStack_160;
  piStack_22c = apiStack_1c0[0];
  piStack_234 = (int *)0x47aede;
  __vbaLateIdCallLd();
  piStack_224 = aiStack_160;
  ppiStack_228 = (int **)0x47aee7;
  uStack_168 = __vbaStrVarMove();
  if (!SBORROW2(sVar1,1)) {
    piStack_224 = (int *)(int)(short)(sVar1 + -1);
    piStack_22c = auStack_180;
    auStack_170[0] = 8;
    piStack_230 = (int *)0x47af10;
    ppiStack_228 = (int **)auStack_170;
    rtcLeftCharVar();
    piStack_224 = auStack_180;
    ppiStack_228 = (int **)0x47af16;
    __vbaStrVarMove();
    piStack_224 = (int *)0x47af21;
    __vbaStrMove();
    piStack_224 = auStack_180;
    ppiStack_228 = (int **)auStack_170;
    piStack_22c = aiStack_160;
    piStack_230 = (int *)0x3;
    piStack_234 = (int *)0x47af37;
    __vbaFreeVarList();
    piStack_234 = (int *)0x0;
    piStack_238 = (int *)0x1;
    piStack_240 = aiStack_160;
    piStack_23c = apiStack_1c0[0];
    piStack_244 = (int *)0x47af4c;
    __vbaLateIdCallLd();
    piStack_224 = aiStack_160;
    uStack_178 = 0x80020004;
    auStack_180[0] = 10;
    ppiStack_228 = (int **)0x47af63;
    uStack_168 = __vbaStrVarMove();
    piStack_224 = auStack_180;
    ppiStack_228 = (int **)(int)sVar1;
    piStack_22c = auStack_170;
    piStack_230 = auStack_190;
    auStack_170[0] = 8;
    piStack_234 = (int *)0x47af83;
    rtcMidCharVar();
    piStack_224 = auStack_190;
    ppiStack_228 = (int **)0x47af89;
    __vbaStrVarMove();
    piStack_224 = (int *)0x47af94;
    __vbaStrMove();
    piStack_224 = auStack_190;
    ppiStack_228 = (int **)auStack_180;
    piStack_22c = auStack_170;
    piStack_230 = aiStack_160;
    piStack_234 = (int *)0x4;
    piStack_238 = (int *)0x47afa8;
    __vbaFreeVarList();
    piStack_224 = piStack_144;
    ppiStack_228 = (int **)0x47afb7;
    iVar3 = __vbaLenBstr();
    piStack_224 = piStack_13c;
    ppiStack_228 = (int **)0x47afc5;
    iVar4 = __vbaLenBstr();
    if (iVar4 == 0 || iVar3 == 0) {
      uStack_148 = 0xffffffff;
    }
    else {
      ppiStack_228 = (int **)&uStack_150;
      piVar7 = *(int **)pwStack_118;
      piStack_224 = piStack_11c;
      piStack_22c = (int *)0x47afed;
      __vbaObjSetAddref();
      piStack_224 = &uStack_150;
      ppiStack_228 = &piStack_144;
      piStack_22c = piStack_13c;
      piStack_234 = (int *)0x47afff;
      piStack_230 = piVar7;
      piVar5 = (int *)(**(code **)(*piVar7 + 0x50))();
      if ((int)piVar5 < 0) {
        piStack_224 = (int *)0x50;
        ppiStack_228 = (int **)&DAT_0041462c;
        piStack_234 = (int *)0x47b014;
        piStack_230 = piVar5;
        piStack_22c = piVar7;
        __vbaHresultCheckObj();
      }
      piStack_224 = (int *)0x47b01d;
      __vbaFreeObj();
      ppiStack_228 = apiStack_1c0;
      piStack_224 = (int *)0x0;
      piStack_22c = (undefined4 *)0x47b028;
      __vbaObjSetAddref();
    }
    piStack_224 = (int *)&LAB_0047b07a;
    ppiStack_228 = (int **)0x47b069;
    __vbaFreeObj();
    ppiStack_228 = (int **)0x47b074;
    __vbaFreeStr();
    ppiStack_228 = (int **)0x47b079;
    __vbaFreeStr();
    return;
  }
LAB_0047b0a3:
  piStack_224 = (int *)0x47b0a9;
  __vbaErrorOverflow();
  piStack_238 = (int *)&LAB_004032d6;
  piStack_23c = ExceptionList;
  piStack_234 = (int *)&pcStack_2dc;
  pcStack_2dc = pcVar9;
  piStack_230 = (int *)&DAT_00403128;
  piStack_22c = (int *)0x0;
  ppiStack_228 = (int **)0x0;
  piStack_2e0 = piStack_218;
  ppiStack_2e4 = (int **)0x47b0ed;
  ExceptionList = &piStack_23c;
  iStack_2d8 = -(uint)(iVar3 != 0);
  uStack_2d4 = uVar8;
  puStack_220 = (undefined1 *)&puStack_124;
  (**(code **)(*piStack_218 + 4))();
  piStack_240 = (int *)0x0;
  piStack_244 = (int *)0x0;
  piStack_24c = (int *)0x0;
  iStack_250 = 0;
  piStack_254 = (int *)0x0;
  auStack_264[0] = 0;
  auStack_274[0] = 0;
  auStack_284[0] = 0;
  auStack_294[0] = 0;
  aiStack_2a8[1] = 0;
  aiStack_2a8[0] = 0;
  ppiStack_2e4 = (int **)0x47b120;
  __vbaStrCopy();
  piVar7 = (int *)*piStack_20c;
  pcStack_2dc = (code *)aiStack_2a8;
  ppiStack_2e4 = (int **)0x47b132;
  piStack_2e0 = piVar7;
  piVar5 = (int *)(**(code **)(*piVar7 + 0x1c))();
  pcVar9 = __vbaHresultCheckObj_exref;
  if ((int)piVar5 < 0) {
    ppiStack_2e4 = (int **)0x1c;
    ppiStack_2e8 = (int **)&DAT_00419234;
    piStack_2f4 = (int *)0x47b149;
    piStack_2f0 = piVar5;
    piStack_2ec = piVar7;
    __vbaHresultCheckObj();
  }
  if ((short)aiStack_2a8[0] == 0) {
    ppiStack_2e4 = (int **)aiStack_2a8;
    ppiStack_2e8 = &piStack_244;
    piStack_2ec = piStack_218;
    piStack_2f0 = (int *)0x47b170;
    piVar5 = (int *)(**(code **)(*piStack_218 + 0x28))();
    if ((int)piVar5 < 0) {
      ppiStack_2e4 = (int **)0x28;
      ppiStack_2e8 = (int **)&DAT_004146ac;
      piStack_2ec = piStack_218;
      piStack_2f4 = (int *)0x47b17f;
      piStack_2f0 = piVar5;
      __vbaHresultCheckObj();
    }
    if ((short)aiStack_2a8[0] == 0) {
      ppiStack_28c = &piStack_244;
      auStack_294[0] = 0x4008;
      ppiStack_2e4 = (int **)0x1;
      ppiStack_2e8 = (int **)auStack_294;
      piStack_2ec = auStack_264;
      piStack_2f0 = (int *)0x47b1aa;
      rtcRightCharVar();
      puStack_29c = &DAT_00419230 /* bstr: '\\' */;
      aiStack_2a8[1] = 0x8008;
      ppiStack_2e4 = (int **)auStack_264;
      ppiStack_2e8 = (int **)(aiStack_2a8 + 1);
      piStack_2ec = auStack_274;
      piStack_2f0 = (int *)0x47b1d0;
      ppiStack_2e4 = (int **)__vbaVarCmpEq();
      ppiStack_2e8 = (int **)auStack_284;
      piStack_2ec = (int *)0x47b1db;
      ppiStack_2e4 = (int **)__vbaVarNot();
      ppiStack_2e8 = (int **)0x47b1e2;
      sVar1 = __vbaBoolVarNull();
      piVar7 = (int *)CONCAT22((short)((uint)piVar7 >> 0x10),sVar1);
      ppiStack_2e4 = (int **)0x47b1ee;
      __vbaFreeVar();
      if (sVar1 != 0) {
        piStack_2e0 = piStack_244;
        ppiStack_2e4 = (int **)&DAT_00419230 /* bstr: '\\' */;
        ppiStack_2e8 = (int **)0x47b202;
        __vbaStrCat();
        piStack_2e0 = (int *)0x47b20d;
        __vbaStrMove();
      }
      piStack_2e0 = (int *)&DAT_00407428;
      ppiStack_2e4 = (int **)0x47b218;
      piStack_2e0 = (int *)__vbaNew();
      ppiStack_2e4 = &piStack_240;
      ppiStack_2e8 = (int **)0x47b223;
      __vbaObjSet();
      ppiStack_2e4 = (int **)piStack_218[0xe];
      piStack_2e0 = piStack_244;
      ppiStack_2e8 = (int **)0x47b233;
      piVar5 = (int *)(**(code **)((int)*ppiStack_2e4 + 0xac))();
      if ((int)piVar5 < 0) {
        ppiStack_2e8 = (int **)0xac;
        piStack_2ec = (int *)&DAT_00416cb0;
        piStack_2f0 = (int *)piStack_218[0xe];
        ppiStack_2f8 = (int **)0x47b24a;
        piStack_2f4 = piVar5;
        __vbaHresultCheckObj();
      }
      piStack_2ec = (int *)piStack_218[0xe];
      ppiStack_2e8 = (int **)*piStack_210;
      piStack_2f0 = (int *)0x47b25c;
      ppiVar6 = (int **)(**(code **)(*piStack_2ec + 0xb4))();
      if ((int)ppiVar6 < 0) {
        piStack_2f0 = (int *)0xb4;
        piStack_2f4 = (int *)&DAT_00416cb0;
        ppiStack_2f8 = (int **)piStack_218[0xe];
        ppiStack_300 = (int **)0x47b273;
        ppiStack_2fc = ppiVar6;
        __vbaHresultCheckObj();
      }
      piStack_2f4 = (int *)piStack_218[0xe];
      piStack_2f0 = aiStack_2a8;
      ppiStack_2f8 = (int **)0x47b286;
      piVar5 = (int *)(**(code **)(*piStack_2f4 + 0xe8))();
      if ((int)piVar5 < 0) {
        ppiStack_2f8 = (int **)0xe8;
        ppiStack_2fc = (int **)&DAT_00416cb0;
        ppiStack_300 = (int **)piStack_218[0xe];
        piStack_308 = (int *)0x47b29d;
        ppiStack_304 = (int **)piVar5;
        __vbaHresultCheckObj();
      }
      if (!SBORROW2((short)aiStack_2a8[0],1)) {
        iStack_2b8 = (int)(short)((short)aiStack_2a8[0] + -1);
        piStack_248 = (int *)0x0;
        piVar5 = piStack_248;
        do {
          piStack_248 = piVar5;
          if (iStack_2b8 < (int)piStack_248) {
            ppiStack_2f8 = (int **)0x1;
            ppiStack_2fc = (int **)0x47b3d2;
            __vbaOnError();
            ppiStack_2fc = (int **)piStack_218[0xf];
            ppiStack_2f8 = (int **)piStack_244;
            ppiStack_300 = (int **)0x47b3e2;
            piVar7 = (int *)(*(code *)(*ppiStack_2fc)[0x2b])();
            if ((int)piVar7 < 0) {
              ppiStack_300 = (int **)0xac;
              ppiStack_304 = (int **)&DAT_00416cc0;
              piStack_308 = (int *)piStack_218[0xf];
              piStack_310 = (undefined4 *)0x47b3f9;
              piStack_30c = piVar7;
              __vbaHresultCheckObj();
            }
            ppiStack_300 = (int **)0x0;
            ppiStack_304 = (int **)0x47b3fd;
            __vbaOnError();
            piVar7 = (int *)0x0;
            piStack_248 = (int *)0x0;
            goto LAB_0047b402;
          }
          iVar3 = *(int *)piStack_218[0xe];
          ppiStack_2f8 = &piStack_24c;
          ppiStack_2fc = (int **)0x47b2d7;
          ppiStack_2f8 = (int **)__vbaI2I4();
          ppiStack_2fc = (int **)piStack_218[0xe];
          ppiStack_300 = (int **)0x47b2e2;
          piVar7 = (int *)(**(code **)(iVar3 + 0xf8))();
          if ((int)piVar7 < 0) {
            ppiStack_300 = (int **)0xf8;
            ppiStack_304 = (int **)&DAT_00416cb0;
            piStack_308 = (int *)piStack_218[0xe];
            piStack_310 = (undefined4 *)0x47b2f9;
            piStack_30c = piVar7;
            __vbaHresultCheckObj();
          }
          ppiStack_300 = (int **)piStack_218;
          ppiStack_304 = &piStack_254;
          piStack_308 = (int *)0x47b304;
          __vbaObjSetAddref();
          piStack_24c = (int *)0x0;
          ppiStack_300 = (int **)0x47b317;
          __vbaStrMove();
          ppiStack_300 = &piStack_254;
          ppiStack_304 = (int **)&iStack_250;
          piStack_308 = piStack_244;
          piStack_30c = piStack_240;
          piStack_310 = (int *)0x47b32c;
          iVar3 = (**(code **)(*piStack_240 + 0x50))();
          if (iVar3 < 0) {
            piStack_310 = (int *)0x50;
            ppiStack_314 = (int **)&DAT_0041462c;
            piStack_318 = piStack_240;
            iStack_320 = 0x47b340;
            iStack_31c = iVar3;
            __vbaHresultCheckObj();
          }
          piStack_310 = (int *)0x47b349;
          __vbaFreeStr();
          piStack_310 = (int *)0x47b352;
          __vbaFreeObj();
          piVar7 = (int *)*piStack_20c;
          piStack_310 = piStack_240;
          ppiStack_314 = &piStack_254;
          piStack_318 = (int *)0x47b365;
          __vbaObjSetAddref();
          ppiStack_28c = &piStack_254;
          auStack_294[0] = 0x4009;
          piStack_310 = auStack_294;
          piStack_318 = (int *)0x47b37c;
          ppiStack_314 = (int **)piVar7;
          piVar5 = (int *)(**(code **)(*piVar7 + 0x24))();
          if ((int)piVar5 < 0) {
            ppiStack_2f8 = (int **)0x24;
            ppiStack_2fc = (int **)&DAT_00419234;
            piStack_308 = (int *)0x47b38d;
            ppiStack_304 = (int **)piVar5;
            ppiStack_300 = (int **)piVar7;
            __vbaHresultCheckObj();
          }
          ppiStack_2f8 = (int **)&DAT_0041462c;
          ppiStack_2fc = (int **)piStack_254;
          ppiStack_300 = (int **)0x47b39c;
          ppiStack_2f8 = (int **)__vbaCastObj();
          ppiStack_2fc = &piStack_240;
          ppiStack_300 = (int **)0x47b3a7;
          __vbaObjSet();
          ppiStack_2f8 = (int **)0x47b3b0;
          __vbaFreeObj();
          piVar5 = (int *)((int)piStack_248 + 1);
        } while (!SCARRY4((int)piStack_248,1));
      }
      goto LAB_0047b55e;
    }
  }
LAB_0047b4eb:
  ppiStack_2e4 = (int **)0x47b4f1;
  __vbaExitProc();
  ppiStack_2e4 = (int **)&LAB_0047b53f;
  ppiStack_2e8 = (int **)0x47b535;
  __vbaFreeObj();
  ppiStack_2e8 = (int **)0x47b53e;
  __vbaFreeStr();
  return;
LAB_0047b402:
  ppiStack_304 = (int **)piStack_218[0xf];
  ppiStack_300 = (int **)aiStack_2a8;
  piStack_308 = (int *)0x47b415;
  piVar5 = (int *)(**(code **)((int)*ppiStack_304 + 0xb0))();
  if ((int)piVar5 < 0) {
    ppiStack_2e4 = (int **)0xb0;
    ppiStack_2e8 = (int **)&DAT_00416cc0;
    piStack_2ec = (int *)piStack_218[0xf];
    piStack_2f4 = (int *)0x47b42c;
    piStack_2f0 = piVar5;
    __vbaHresultCheckObj();
  }
  if ((int)(short)aiStack_2a8[0] <= (int)piVar7) {
    ppiStack_2e4 = (int **)0x0;
    ppiStack_2e8 = (int **)0x47b4eb;
    __vbaOnError();
    goto LAB_0047b4eb;
  }
  iStack_2d0 = *(int *)piStack_218[0xf];
  ppiStack_2e4 = &piStack_24c;
  ppiStack_2e8 = (int **)0x47b452;
  ppiStack_2e4 = (int **)__vbaI2I4();
  ppiStack_2e8 = (int **)piStack_218[0xf];
  piStack_2ec = (int *)0x47b463;
  ppiStack_2f8 = (int **)(**(code **)(iStack_2d0 + 0xc0))();
  if ((int)ppiStack_2f8 < 0) {
    piStack_2ec = (int *)0xc0;
    piStack_2f0 = (int *)&DAT_00416cc0;
    piStack_2f4 = (int *)piStack_218[0xf];
    ppiStack_2fc = (int **)0x47b47a;
    __vbaHresultCheckObj();
  }
  piStack_2ec = piStack_20c;
  piStack_2f0 = piStack_210;
  piStack_2f4 = piStack_24c;
  ppiStack_2f8 = (int **)piStack_218;
  ppiStack_2fc = (int **)0x47b48c;
  piVar7 = (int *)(**(code **)(*piStack_218 + 0x34))();
  if ((int)piVar7 < 0) {
    ppiStack_2f8 = (int **)0x34;
    ppiStack_2fc = (int **)&DAT_004146ac;
    ppiStack_300 = (int **)piStack_218;
    piStack_308 = (int *)0x47b49b;
    ppiStack_304 = (int **)piVar7;
    __vbaHresultCheckObj();
  }
  ppiStack_2f8 = (int **)0x47b4a4;
  __vbaFreeStr();
  piVar7 = (int *)((int)piStack_248 + 1);
  if (!SCARRY4((int)piStack_248,1)) {
    ppiStack_2fc = (int **)piStack_218[0xf];
    ppiStack_2f8 = (int **)piStack_244;
    ppiStack_300 = (int **)0x47b4c3;
    piStack_248 = piVar7;
    piVar5 = (int *)(*(code *)(*ppiStack_2fc)[0x2b])();
    if ((int)piVar5 < 0) {
      ppiStack_300 = (int **)0xac;
      ppiStack_304 = (int **)&DAT_00416cc0;
      piStack_308 = (int *)piStack_218[0xf];
      piStack_310 = (undefined4 *)0x47b4de;
      piStack_30c = piVar5;
      __vbaHresultCheckObj();
    }
    goto LAB_0047b402;
  }
LAB_0047b55e:
  ppiStack_2f8 = (int **)0x47b564;
  __vbaErrorOverflow();
  piVar5 = piStack_2ec;
  ppiStack_304 = (int **)&LAB_004032d6;
  piStack_308 = ExceptionList;
  pcStack_358 = pcVar9;
  piStack_35c = piStack_218;
  ppiStack_300 = &piStack_360;
  ppiStack_2fc = (int **)&DAT_00403150;
  ppiStack_2f8 = (int **)0x0;
  piStack_364 = piStack_2ec;
  piStack_368 = (int *)0x47b5a7;
  ExceptionList = &piStack_308;
  piStack_360 = piVar7;
  piStack_2f4 = (int *)&puStack_220;
  (**(code **)(*piStack_2ec + 4))();
  piStack_310 = (int *)0x0;
  iStack_320 = 0;
  aiStack_330[0] = 0;
  auStack_340[0] = 0;
  *(undefined2 *)(piVar5 + 0x10) = 0;
  *(undefined2 *)((int)piVar5 + 0x42) = 0;
  piStack_368 = (int *)0x47b5c9;
  __vbaStrCopy();
  ppiVar6 = ppiStack_2e4;
  puVar10 = (undefined4 *)0x0;
  do {
    puVar11 = puVar10;
    sVar1 = (short)puVar11;
    if (0x19 < sVar1) {
LAB_0047b682:
      piStack_360 = (int *)&LAB_0047b6a7;
      piStack_364 = (int *)0x47b6a6;
      __vbaFreeStr();
      return;
    }
    piStack_360 = (int *)&DAT_00419248 /* bstr: 'A' */;
    piStack_364 = (int *)0x47b5e5;
    sVar2 = rtcAnsiValueBstr();
    if (SCARRY2(sVar2,sVar1)) break;
    piStack_360 = (int *)(int)(short)(sVar2 + sVar1);
    piStack_368 = (int *)0x47b5fc;
    piStack_364 = &iStack_320;
    rtcVarBstrFromAnsi();
    piStack_360 = &iStack_320;
    piStack_364 = auStack_340;
    piStack_368 = aiStack_330;
    puStack_338 = &DAT_00419250 /* bstr: ':\\' */;
    auStack_340[0] = 8;
    piStack_36c = (int *)0x47b61c;
    piStack_360 = (int *)__vbaVarCat();
    piStack_364 = (int *)0x47b623;
    __vbaStrVarMove();
    piStack_360 = (int *)0x47b62e;
    __vbaStrMove();
    piStack_360 = aiStack_330;
    piStack_364 = &iStack_320;
    piStack_368 = (int *)0x2;
    piStack_36c = (int *)0x47b63e;
    __vbaFreeVarList();
    piStack_360 = (int *)ppiVar6;
    piStack_364 = (int *)ppiStack_2e8;
    piStack_368 = piStack_310;
    piStack_36c = piVar5;
    pvStack_370 = (void *)0x47b650;
    piVar7 = (int *)(**(code **)(*piVar5 + 0x34))();
    if ((int)piVar7 < 0) {
      piStack_360 = (int *)0x34;
      piStack_364 = (int *)&DAT_004146ac;
      piStack_368 = piVar5;
      pvStack_370 = (void *)0x47b663;
      piStack_36c = piVar7;
      __vbaHresultCheckObj();
    }
    if (((short)piVar5[0x10] != 0) || (*(short *)((int)piVar5 + 0x42) != 0)) goto LAB_0047b682;
    puVar10 = (undefined4 *)(uint)(ushort)(sVar1 + 1);
  } while (!SCARRY2(sVar1,1));
  piStack_360 = (int *)0x47b6cc;
  __vbaErrorOverflow();
  piVar7 = piStack_354;
  piStack_36c = (int *)&LAB_004032d6;
  pvStack_370 = ExceptionList;
  piStack_448 = (int *)ppiVar6;
  piStack_44c = piVar5;
  piStack_368 = (int *)&puStack_450;
  piStack_364 = (int *)&DAT_00403160;
  piStack_360 = (int *)0x0;
  ExceptionList = &pvStack_370;
  piVar5 = piStack_354;
  puStack_450 = puVar11;
  piStack_35c = (int *)&piStack_2f4;
  (**(code **)(*piStack_354 + 4))(piStack_354);
  uStack_374 = 0;
  piStack_378 = (int *)0x0;
  *puStack_348 = 0;
  uStack_37c = 0;
  uStack_380 = 0;
  uStack_384 = 0;
  uStack_388 = 0;
  uStack_38c = 0;
  uStack_390 = 0;
  uStack_394 = 0;
  uStack_398 = 0;
  uStack_39c = 0;
  uStack_3a0 = 0;
  auStack_3b0[0] = 0;
  auStack_3c0[0] = 0;
  auStack_3d0[0] = 0;
  auStack_3e0[0] = 0;
  uStack_3f0 = 0;
  uStack_400 = 0;
  auStack_424[0] = 0;
  __vbaStrCopy(piVar5);
  while( true ) {
    puStack_450 = auStack_424;
    puVar10 = &uStack_374;
    piVar5 = piVar7;
    puVar11 = puStack_34c;
    iVar3 = (**(code **)(*piVar7 + 0x24))(piVar7,puVar10,puStack_34c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar7,&DAT_004146ac,0x24);
    }
    if ((short)auStack_424[0] == 0) break;
    auStack_3e0[0] = 10;
    auStack_3d0[0] = 10;
    uStack_3d8 = 0x80020004;
    uStack_3c8 = 0x80020004;
    pwStack_3e8 = L"CTP Editor";
    uStack_3f0 = 8;
    __vbaVarDup();
    __vbaStrCat(*puStack_34c,L"Could not locate ");
    uVar8 = __vbaStrMove();
    __vbaStrCat(L" at:",uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(uStack_374,uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(L"Would you like CTPEd to look for it?",uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar8);
    uVar8 = __vbaStrMove();
    uStack_3a8 = __vbaStrCat(L"(Choose no to select another path yourself)",uVar8);
    auStack_3b0[0] = 8;
    iStack_430 = rtcMsgBox(auStack_3b0,3,auStack_3c0,auStack_3d0,auStack_3e0);
    __vbaFreeStrList(7,&uStack_380,&uStack_384,&uStack_388,&uStack_38c,&uStack_390,&uStack_394,
                     &uStack_398);
    __vbaFreeVarList(4,auStack_3b0,auStack_3c0,auStack_3d0,auStack_3e0);
    if (iStack_430 == 2) break;
    if (iStack_430 == 6) {
      iVar3 = *piVar7;
      uVar8 = __vbaNew(&DAT_004062a0);
      uVar8 = __vbaObjSet(&uStack_39c,uVar8);
      piVar7 = piStack_354;
      iStack_444 = iVar3;
      iVar3 = (**(code **)(iVar3 + 0x4c))(piStack_354,uVar8);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar7,&DAT_004146ac,0x4c);
      }
      __vbaFreeObj();
      iVar3 = (**(code **)(*piVar7 + 0x44))(piVar7,&uStack_39c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar7,&DAT_004146ac,0x44);
      }
      uVar8 = uStack_39c;
      uStack_39c = 0;
      __vbaObjSet(&uStack_3a0,uVar8);
      iVar3 = (**(code **)(*piVar7 + 0x38))(piVar7,puStack_34c,&uStack_3a0);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar7,&DAT_004146ac,0x38);
      }
      __vbaFreeObj();
      if ((short)piVar7[0x10] == 0) {
        auStack_3e0[0] = 10;
        auStack_3d0[0] = 10;
        uStack_3d8 = 0x80020004;
        uStack_3c8 = 0x80020004;
        pwStack_3e8 = L"CTP Editor";
        uStack_3f0 = 8;
        __vbaVarDup();
        uStack_3a8 = __vbaStrCat(*puStack_34c,L"Could not locate ");
        auStack_3b0[0] = 8;
        rtcMsgBox(auStack_3b0,0x30,auStack_3c0,auStack_3d0,auStack_3e0);
        __vbaFreeVarList(4,auStack_3b0,auStack_3c0,auStack_3d0,auStack_3e0);
      }
      else {
        __vbaStrCopy(puVar11);
      }
    }
    else if (iStack_430 == 7) {
      __vbaStrCat(&DAT_00418ec4 /* bstr: '|' */,*puStack_34c);
      uVar8 = __vbaStrMove();
      __vbaStrCat(*puStack_34c,uVar8);
      __vbaStrMove();
      __vbaStrCat(*puStack_34c,L"Please locate ");
      __vbaStrMove();
      iVar3 = (**(code **)(*piVar7 + 0x2c))
                        (piVar7,&piStack_378,&uStack_384,&uStack_388,&uStack_374,auStack_424);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar7,&DAT_004146ac,0x2c);
      }
      sStack_42c = (short)auStack_424[0];
      __vbaFreeStrList(3,&uStack_380,&uStack_384,&uStack_388);
      if (sStack_42c != 0) break;
      iVar3 = (**(code **)(*piStack_378 + 0x2c))(piStack_378,&uStack_380);
      if (iVar3 < 0) {
        puStack_450 = (undefined4 *)0x2c;
        __vbaHresultCheckObj(iVar3,piStack_378,&DAT_0041462c);
      }
      uStack_380 = 0;
      puStack_450 = (undefined4 *)0x47ba91;
      __vbaStrMove();
    }
    else {
      uVar8 = rtcErrObj();
      piStack_428 = (int *)__vbaObjSet(&uStack_39c,uVar8);
      auStack_3e0[0] = 10;
      auStack_3d0[0] = 10;
      uStack_3d8 = 0x80020004;
      uStack_3c8 = 0x80020004;
      pwStack_3f8 = L"Invalid MsgBox response in UserAssistedSeekFile";
      uStack_400 = 8;
      __vbaVarDup();
      pwStack_3e8 = L"CTPEd.FileInterface";
      uStack_3f0 = 8;
      __vbaVarDup();
      iVar3 = (**(code **)(*piStack_428 + 0x44))
                        (piStack_428,0x456,auStack_3b0,auStack_3c0,auStack_3d0,auStack_3e0);
      if (iVar3 < 0) {
        puStack_450 = (undefined4 *)0x44;
        __vbaHresultCheckObj(iVar3,piStack_428,&DAT_00413af4);
      }
      puStack_450 = (undefined4 *)0x47b99f;
      __vbaFreeObj();
      puStack_450 = auStack_3e0;
      __vbaFreeVarList(4,auStack_3b0,auStack_3c0,auStack_3d0);
    }
  }
  __vbaStrCopy(piVar5,puVar10);
  __vbaFreeStr(&LAB_0047bc7a);
  __vbaFreeObj();
  return;
}

/* ---- 0x47b0b0 (FUN_0047b0b0) [estimated] strings: CTP Editor; Could not locate ;  at:; Would you like CTPEd to look for it? ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0047b0b0(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puStack_234;
  int *piStack_230;
  int *piStack_22c;
  int iStack_228;
  int iStack_214;
  short sStack_210;
  int *piStack_20c;
  undefined4 auStack_208 [9];
  undefined4 uStack_1e4;
  wchar_t *pwStack_1dc;
  undefined4 uStack_1d4;
  wchar_t *pwStack_1cc;
  undefined4 auStack_1c4 [2];
  undefined4 uStack_1bc;
  undefined4 auStack_1b4 [2];
  undefined4 uStack_1ac;
  undefined4 auStack_1a4 [4];
  undefined4 auStack_194 [2];
  undefined4 uStack_18c;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int *piStack_15c;
  undefined4 uStack_158;
  void *pvStack_154;
  int *piStack_150;
  int *piStack_14c;
  int *piStack_148;
  int *piStack_144;
  int *piStack_140;
  code *pcStack_13c;
  int *piStack_138;
  undefined4 *puStack_130;
  undefined4 *puStack_12c;
  undefined4 auStack_124 [2];
  undefined *puStack_11c;
  int aiStack_114 [4];
  int iStack_104;
  int iStack_100;
  int *piStack_fc;
  int **ppiStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  int **ppiStack_e8;
  int **ppiStack_e4;
  int **ppiStack_e0;
  int **ppiStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  int **ppiStack_cc;
  int **ppiStack_c8;
  int *piStack_c4;
  int local_8c [3];
  undefined *local_80;
  undefined4 local_78 [2];
  int **local_70;
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  int *local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  void *pvStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puStack_1c = &LAB_004032d6;
  pvStack_20 = ExceptionList;
  local_18 = &stack0xffffff40;
  local_14 = &DAT_00403128;
  local_10 = 0;
  local_c = 0;
  piStack_c4 = param_1;
  ppiStack_c8 = (int **)0x47b0ed;
  ExceptionList = &pvStack_20;
  (**(code **)(*param_1 + 4))();
  local_24 = (int *)0x0;
  local_28 = (int *)0x0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_8c[1] = 0;
  local_8c[0] = 0;
  ppiStack_c8 = (int **)0x47b120;
  __vbaStrCopy();
  piVar6 = (int *)*param_4;
  ppiStack_c8 = (int **)0x47b132;
  piStack_c4 = piVar6;
  piVar4 = (int *)(**(code **)(*piVar6 + 0x1c))();
  pcVar1 = __vbaHresultCheckObj_exref;
  if ((int)piVar4 < 0) {
    ppiStack_c8 = (int **)0x1c;
    ppiStack_cc = (int **)&DAT_00419234;
    piStack_d8 = (int *)0x47b149;
    piStack_d4 = piVar4;
    piStack_d0 = piVar6;
    __vbaHresultCheckObj();
  }
  if ((short)local_8c[0] == 0) {
    ppiStack_c8 = (int **)local_8c;
    ppiStack_cc = &local_28;
    piStack_d0 = param_1;
    piStack_d4 = (int *)0x47b170;
    piVar4 = (int *)(**(code **)(*param_1 + 0x28))();
    if ((int)piVar4 < 0) {
      ppiStack_c8 = (int **)0x28;
      ppiStack_cc = (int **)&DAT_004146ac;
      piStack_d0 = param_1;
      piStack_d8 = (int *)0x47b17f;
      piStack_d4 = piVar4;
      __vbaHresultCheckObj();
    }
    if ((short)local_8c[0] == 0) {
      local_70 = &local_28;
      local_78[0] = 0x4008;
      ppiStack_c8 = (int **)0x1;
      ppiStack_cc = (int **)local_78;
      piStack_d0 = local_48;
      piStack_d4 = (int *)0x47b1aa;
      rtcRightCharVar();
      local_80 = &DAT_00419230 /* bstr: '\\' */;
      local_8c[1] = 0x8008;
      ppiStack_c8 = (int **)local_48;
      ppiStack_cc = (int **)(local_8c + 1);
      piStack_d0 = local_58;
      piStack_d4 = (int *)0x47b1d0;
      ppiStack_c8 = (int **)__vbaVarCmpEq();
      ppiStack_cc = (int **)local_68;
      piStack_d0 = (int *)0x47b1db;
      ppiStack_c8 = (int **)__vbaVarNot();
      ppiStack_cc = (int **)0x47b1e2;
      sVar2 = __vbaBoolVarNull();
      piVar6 = (int *)CONCAT22((short)((uint)piVar6 >> 0x10),sVar2);
      ppiStack_c8 = (int **)0x47b1ee;
      __vbaFreeVar();
      if (sVar2 != 0) {
        piStack_c4 = local_28;
        ppiStack_c8 = (int **)&DAT_00419230 /* bstr: '\\' */;
        ppiStack_cc = (int **)0x47b202;
        __vbaStrCat();
        piStack_c4 = (int *)0x47b20d;
        __vbaStrMove();
      }
      piStack_c4 = (int *)&DAT_00407428;
      ppiStack_c8 = (int **)0x47b218;
      piStack_c4 = (int *)__vbaNew();
      ppiStack_c8 = &local_24;
      ppiStack_cc = (int **)0x47b223;
      __vbaObjSet();
      ppiStack_c8 = (int **)param_1[0xe];
      piStack_c4 = local_28;
      ppiStack_cc = (int **)0x47b233;
      piVar4 = (int *)(**(code **)((int)*ppiStack_c8 + 0xac))();
      if ((int)piVar4 < 0) {
        ppiStack_cc = (int **)0xac;
        piStack_d0 = (int *)&DAT_00416cb0;
        piStack_d4 = (int *)param_1[0xe];
        ppiStack_dc = (int **)0x47b24a;
        piStack_d8 = piVar4;
        __vbaHresultCheckObj();
      }
      piStack_d0 = (int *)param_1[0xe];
      ppiStack_cc = (int **)*param_3;
      piStack_d4 = (int *)0x47b25c;
      ppiVar5 = (int **)(**(code **)(*piStack_d0 + 0xb4))();
      if ((int)ppiVar5 < 0) {
        piStack_d4 = (int *)0xb4;
        piStack_d8 = (int *)&DAT_00416cb0;
        ppiStack_dc = (int **)param_1[0xe];
        ppiStack_e4 = (int **)0x47b273;
        ppiStack_e0 = ppiVar5;
        __vbaHresultCheckObj();
      }
      piStack_d8 = (int *)param_1[0xe];
      piStack_d4 = local_8c;
      ppiStack_dc = (int **)0x47b286;
      piVar4 = (int *)(**(code **)(*piStack_d8 + 0xe8))();
      if ((int)piVar4 < 0) {
        ppiStack_dc = (int **)0xe8;
        ppiStack_e0 = (int **)&DAT_00416cb0;
        ppiStack_e4 = (int **)param_1[0xe];
        piStack_ec = (int *)0x47b29d;
        ppiStack_e8 = (int **)piVar4;
        __vbaHresultCheckObj();
      }
      sVar2 = (short)local_8c[0] + -1;
      if (!SBORROW2((short)local_8c[0],1)) {
        local_2c = (int *)0x0;
        piVar4 = local_2c;
        do {
          local_2c = piVar4;
          if ((int)sVar2 < (int)local_2c) {
            ppiStack_dc = (int **)0x1;
            ppiStack_e0 = (int **)0x47b3d2;
            __vbaOnError();
            ppiStack_e0 = (int **)param_1[0xf];
            ppiStack_dc = (int **)local_28;
            ppiStack_e4 = (int **)0x47b3e2;
            piVar6 = (int *)(*(code *)(*ppiStack_e0)[0x2b])();
            if ((int)piVar6 < 0) {
              ppiStack_e4 = (int **)0xac;
              ppiStack_e8 = (int **)&DAT_00416cc0;
              piStack_ec = (int *)param_1[0xf];
              piStack_f4 = (undefined4 *)0x47b3f9;
              piStack_f0 = piVar6;
              __vbaHresultCheckObj();
            }
            ppiStack_e4 = (int **)0x0;
            ppiStack_e8 = (int **)0x47b3fd;
            __vbaOnError();
            piVar6 = (int *)0x0;
            local_2c = (int *)0x0;
            goto LAB_0047b402;
          }
          iVar7 = *(int *)param_1[0xe];
          ppiStack_dc = &local_30;
          ppiStack_e0 = (int **)0x47b2d7;
          ppiStack_dc = (int **)__vbaI2I4();
          ppiStack_e0 = (int **)param_1[0xe];
          ppiStack_e4 = (int **)0x47b2e2;
          piVar6 = (int *)(**(code **)(iVar7 + 0xf8))();
          if ((int)piVar6 < 0) {
            ppiStack_e4 = (int **)0xf8;
            ppiStack_e8 = (int **)&DAT_00416cb0;
            piStack_ec = (int *)param_1[0xe];
            piStack_f4 = (undefined4 *)0x47b2f9;
            piStack_f0 = piVar6;
            __vbaHresultCheckObj();
          }
          ppiStack_e4 = (int **)param_1;
          ppiStack_e8 = &local_38;
          piStack_ec = (int *)0x47b304;
          __vbaObjSetAddref();
          local_30 = (int *)0x0;
          ppiStack_e4 = (int **)0x47b317;
          __vbaStrMove();
          ppiStack_e4 = &local_38;
          ppiStack_e8 = (int **)&local_34;
          piStack_ec = local_28;
          piStack_f0 = local_24;
          piStack_f4 = (int *)0x47b32c;
          iVar7 = (**(code **)(*local_24 + 0x50))();
          if (iVar7 < 0) {
            piStack_f4 = (int *)0x50;
            ppiStack_f8 = (int **)&DAT_0041462c;
            piStack_fc = local_24;
            iStack_104 = 0x47b340;
            iStack_100 = iVar7;
            __vbaHresultCheckObj();
          }
          piStack_f4 = (int *)0x47b349;
          __vbaFreeStr();
          piStack_f4 = (int *)0x47b352;
          __vbaFreeObj();
          piVar6 = (int *)*param_4;
          piStack_f4 = local_24;
          ppiStack_f8 = &local_38;
          piStack_fc = (int *)0x47b365;
          __vbaObjSetAddref();
          local_70 = &local_38;
          local_78[0] = 0x4009;
          piStack_f4 = local_78;
          piStack_fc = (int *)0x47b37c;
          ppiStack_f8 = (int **)piVar6;
          piVar4 = (int *)(**(code **)(*piVar6 + 0x24))();
          if ((int)piVar4 < 0) {
            ppiStack_dc = (int **)0x24;
            ppiStack_e0 = (int **)&DAT_00419234;
            piStack_ec = (int *)0x47b38d;
            ppiStack_e8 = (int **)piVar4;
            ppiStack_e4 = (int **)piVar6;
            __vbaHresultCheckObj();
          }
          ppiStack_dc = (int **)&DAT_0041462c;
          ppiStack_e0 = (int **)local_38;
          ppiStack_e4 = (int **)0x47b39c;
          ppiStack_dc = (int **)__vbaCastObj();
          ppiStack_e0 = &local_24;
          ppiStack_e4 = (int **)0x47b3a7;
          __vbaObjSet();
          ppiStack_dc = (int **)0x47b3b0;
          __vbaFreeObj();
          piVar4 = (int *)((int)local_2c + 1);
        } while (!SCARRY4((int)local_2c,1));
      }
      goto LAB_0047b55e;
    }
  }
LAB_0047b4eb:
  ppiStack_c8 = (int **)0x47b4f1;
  __vbaExitProc();
  ppiStack_c8 = (int **)&LAB_0047b53f;
  ppiStack_cc = (int **)0x47b535;
  __vbaFreeObj();
  ppiStack_cc = (int **)0x47b53e;
  __vbaFreeStr();
  return;
LAB_0047b402:
  ppiStack_e8 = (int **)param_1[0xf];
  ppiStack_e4 = (int **)local_8c;
  piStack_ec = (int *)0x47b415;
  piVar4 = (int *)(**(code **)((int)*ppiStack_e8 + 0xb0))();
  if ((int)piVar4 < 0) {
    ppiStack_c8 = (int **)0xb0;
    ppiStack_cc = (int **)&DAT_00416cc0;
    piStack_d0 = (int *)param_1[0xf];
    piStack_d8 = (int *)0x47b42c;
    piStack_d4 = piVar4;
    __vbaHresultCheckObj();
  }
  if ((int)(short)local_8c[0] <= (int)piVar6) {
    ppiStack_c8 = (int **)0x0;
    ppiStack_cc = (int **)0x47b4eb;
    __vbaOnError();
    goto LAB_0047b4eb;
  }
  iVar7 = *(int *)param_1[0xf];
  ppiStack_c8 = &local_30;
  ppiStack_cc = (int **)0x47b452;
  ppiStack_c8 = (int **)__vbaI2I4();
  ppiStack_cc = (int **)param_1[0xf];
  piStack_d0 = (int *)0x47b463;
  ppiStack_dc = (int **)(**(code **)(iVar7 + 0xc0))();
  if ((int)ppiStack_dc < 0) {
    piStack_d0 = (int *)0xc0;
    piStack_d4 = (int *)&DAT_00416cc0;
    piStack_d8 = (int *)param_1[0xf];
    ppiStack_e0 = (int **)0x47b47a;
    __vbaHresultCheckObj();
  }
  piStack_d0 = param_4;
  piStack_d4 = param_3;
  piStack_d8 = local_30;
  ppiStack_dc = (int **)param_1;
  ppiStack_e0 = (int **)0x47b48c;
  piVar6 = (int *)(**(code **)(*param_1 + 0x34))();
  if ((int)piVar6 < 0) {
    ppiStack_dc = (int **)0x34;
    ppiStack_e0 = (int **)&DAT_004146ac;
    ppiStack_e4 = (int **)param_1;
    piStack_ec = (int *)0x47b49b;
    ppiStack_e8 = (int **)piVar6;
    __vbaHresultCheckObj();
  }
  ppiStack_dc = (int **)0x47b4a4;
  __vbaFreeStr();
  piVar6 = (int *)((int)local_2c + 1);
  if (!SCARRY4((int)local_2c,1)) {
    ppiStack_e0 = (int **)param_1[0xf];
    ppiStack_dc = (int **)local_28;
    ppiStack_e4 = (int **)0x47b4c3;
    local_2c = piVar6;
    piVar4 = (int *)(*(code *)(*ppiStack_e0)[0x2b])();
    if ((int)piVar4 < 0) {
      ppiStack_e4 = (int **)0xac;
      ppiStack_e8 = (int **)&DAT_00416cc0;
      piStack_ec = (int *)param_1[0xf];
      piStack_f4 = (undefined4 *)0x47b4de;
      piStack_f0 = piVar4;
      __vbaHresultCheckObj();
    }
    goto LAB_0047b402;
  }
LAB_0047b55e:
  ppiStack_dc = (int **)0x47b564;
  __vbaErrorOverflow();
  piVar4 = piStack_d0;
  ppiStack_e8 = (int **)&LAB_004032d6;
  piStack_ec = ExceptionList;
  pcStack_13c = pcVar1;
  piStack_140 = param_1;
  ppiStack_e4 = &piStack_144;
  ppiStack_e0 = (int **)&DAT_00403150;
  ppiStack_dc = (int **)0x0;
  piStack_148 = piStack_d0;
  piStack_14c = (int *)0x47b5a7;
  ExceptionList = &piStack_ec;
  piStack_144 = piVar6;
  piStack_d8 = (int *)&stack0xfffffffc;
  (**(code **)(*piStack_d0 + 4))();
  piStack_f4 = (int *)0x0;
  iStack_104 = 0;
  aiStack_114[0] = 0;
  auStack_124[0] = 0;
  *(undefined2 *)(piVar4 + 0x10) = 0;
  *(undefined2 *)((int)piVar4 + 0x42) = 0;
  piStack_14c = (int *)0x47b5c9;
  __vbaStrCopy();
  ppiVar5 = ppiStack_c8;
  puVar9 = (undefined4 *)0x0;
  do {
    puVar10 = puVar9;
    sVar2 = (short)puVar10;
    if (0x19 < sVar2) {
LAB_0047b682:
      piStack_144 = (int *)&LAB_0047b6a7;
      piStack_148 = (int *)0x47b6a6;
      __vbaFreeStr();
      return;
    }
    piStack_144 = (int *)&DAT_00419248 /* bstr: 'A' */;
    piStack_148 = (int *)0x47b5e5;
    sVar3 = rtcAnsiValueBstr();
    if (SCARRY2(sVar3,sVar2)) break;
    piStack_144 = (int *)(int)(short)(sVar3 + sVar2);
    piStack_14c = (int *)0x47b5fc;
    piStack_148 = &iStack_104;
    rtcVarBstrFromAnsi();
    piStack_144 = &iStack_104;
    piStack_148 = auStack_124;
    piStack_14c = aiStack_114;
    puStack_11c = &DAT_00419250 /* bstr: ':\\' */;
    auStack_124[0] = 8;
    piStack_150 = (int *)0x47b61c;
    piStack_144 = (int *)__vbaVarCat();
    piStack_148 = (int *)0x47b623;
    __vbaStrVarMove();
    piStack_144 = (int *)0x47b62e;
    __vbaStrMove();
    piStack_144 = aiStack_114;
    piStack_148 = &iStack_104;
    piStack_14c = (int *)0x2;
    piStack_150 = (int *)0x47b63e;
    __vbaFreeVarList();
    piStack_144 = (int *)ppiVar5;
    piStack_148 = (int *)ppiStack_cc;
    piStack_14c = piStack_f4;
    piStack_150 = piVar4;
    pvStack_154 = (void *)0x47b650;
    piVar6 = (int *)(**(code **)(*piVar4 + 0x34))();
    if ((int)piVar6 < 0) {
      piStack_144 = (int *)0x34;
      piStack_148 = (int *)&DAT_004146ac;
      piStack_14c = piVar4;
      pvStack_154 = (void *)0x47b663;
      piStack_150 = piVar6;
      __vbaHresultCheckObj();
    }
    if (((short)piVar4[0x10] != 0) || (*(short *)((int)piVar4 + 0x42) != 0)) goto LAB_0047b682;
    puVar9 = (undefined4 *)(uint)(ushort)(sVar2 + 1);
  } while (!SCARRY2(sVar2,1));
  piStack_144 = (int *)0x47b6cc;
  __vbaErrorOverflow();
  piVar6 = piStack_138;
  piStack_150 = (int *)&LAB_004032d6;
  pvStack_154 = ExceptionList;
  piStack_22c = (int *)ppiVar5;
  piStack_230 = piVar4;
  piStack_14c = (int *)&puStack_234;
  piStack_148 = (int *)&DAT_00403160;
  piStack_144 = (int *)0x0;
  ExceptionList = &pvStack_154;
  piVar4 = piStack_138;
  puStack_234 = puVar10;
  piStack_140 = (int *)&piStack_d8;
  (**(code **)(*piStack_138 + 4))(piStack_138);
  uStack_158 = 0;
  piStack_15c = (int *)0x0;
  *puStack_12c = 0;
  uStack_160 = 0;
  uStack_164 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  uStack_170 = 0;
  uStack_174 = 0;
  uStack_178 = 0;
  uStack_17c = 0;
  uStack_180 = 0;
  uStack_184 = 0;
  auStack_194[0] = 0;
  auStack_1a4[0] = 0;
  auStack_1b4[0] = 0;
  auStack_1c4[0] = 0;
  uStack_1d4 = 0;
  uStack_1e4 = 0;
  auStack_208[0] = 0;
  __vbaStrCopy(piVar4);
  while( true ) {
    puStack_234 = auStack_208;
    puVar9 = &uStack_158;
    piVar4 = piVar6;
    puVar10 = puStack_130;
    iVar7 = (**(code **)(*piVar6 + 0x24))(piVar6,puVar9,puStack_130);
    if (iVar7 < 0) {
      __vbaHresultCheckObj(iVar7,piVar6,&DAT_004146ac,0x24);
    }
    if ((short)auStack_208[0] == 0) break;
    auStack_1c4[0] = 10;
    auStack_1b4[0] = 10;
    uStack_1bc = 0x80020004;
    uStack_1ac = 0x80020004;
    pwStack_1cc = L"CTP Editor";
    uStack_1d4 = 8;
    __vbaVarDup();
    __vbaStrCat(*puStack_130,L"Could not locate ");
    uVar8 = __vbaStrMove();
    __vbaStrCat(L" at:",uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(uStack_158,uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(L"Would you like CTPEd to look for it?",uVar8);
    uVar8 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar8);
    uVar8 = __vbaStrMove();
    uStack_18c = __vbaStrCat(L"(Choose no to select another path yourself)",uVar8);
    auStack_194[0] = 8;
    iStack_214 = rtcMsgBox(auStack_194,3,auStack_1a4,auStack_1b4,auStack_1c4);
    __vbaFreeStrList(7,&uStack_164,&uStack_168,&uStack_16c,&uStack_170,&uStack_174,&uStack_178,
                     &uStack_17c);
    __vbaFreeVarList(4,auStack_194,auStack_1a4,auStack_1b4,auStack_1c4);
    if (iStack_214 == 2) break;
    if (iStack_214 == 6) {
      iVar7 = *piVar6;
      uVar8 = __vbaNew(&DAT_004062a0);
      uVar8 = __vbaObjSet(&uStack_180,uVar8);
      piVar6 = piStack_138;
      iStack_228 = iVar7;
      iVar7 = (**(code **)(iVar7 + 0x4c))(piStack_138,uVar8);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar6,&DAT_004146ac,0x4c);
      }
      __vbaFreeObj();
      iVar7 = (**(code **)(*piVar6 + 0x44))(piVar6,&uStack_180);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar6,&DAT_004146ac,0x44);
      }
      uVar8 = uStack_180;
      uStack_180 = 0;
      __vbaObjSet(&uStack_184,uVar8);
      iVar7 = (**(code **)(*piVar6 + 0x38))(piVar6,puStack_130,&uStack_184);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar6,&DAT_004146ac,0x38);
      }
      __vbaFreeObj();
      if ((short)piVar6[0x10] == 0) {
        auStack_1c4[0] = 10;
        auStack_1b4[0] = 10;
        uStack_1bc = 0x80020004;
        uStack_1ac = 0x80020004;
        pwStack_1cc = L"CTP Editor";
        uStack_1d4 = 8;
        __vbaVarDup();
        uStack_18c = __vbaStrCat(*puStack_130,L"Could not locate ");
        auStack_194[0] = 8;
        rtcMsgBox(auStack_194,0x30,auStack_1a4,auStack_1b4,auStack_1c4);
        __vbaFreeVarList(4,auStack_194,auStack_1a4,auStack_1b4,auStack_1c4);
      }
      else {
        __vbaStrCopy(puVar10);
      }
    }
    else if (iStack_214 == 7) {
      __vbaStrCat(&DAT_00418ec4 /* bstr: '|' */,*puStack_130);
      uVar8 = __vbaStrMove();
      __vbaStrCat(*puStack_130,uVar8);
      __vbaStrMove();
      __vbaStrCat(*puStack_130,L"Please locate ");
      __vbaStrMove();
      iVar7 = (**(code **)(*piVar6 + 0x2c))
                        (piVar6,&piStack_15c,&uStack_168,&uStack_16c,&uStack_158,auStack_208);
      if (iVar7 < 0) {
        __vbaHresultCheckObj(iVar7,piVar6,&DAT_004146ac,0x2c);
      }
      sStack_210 = (short)auStack_208[0];
      __vbaFreeStrList(3,&uStack_164,&uStack_168,&uStack_16c);
      if (sStack_210 != 0) break;
      iVar7 = (**(code **)(*piStack_15c + 0x2c))(piStack_15c,&uStack_164);
      if (iVar7 < 0) {
        puStack_234 = (undefined4 *)0x2c;
        __vbaHresultCheckObj(iVar7,piStack_15c,&DAT_0041462c);
      }
      uStack_164 = 0;
      puStack_234 = (undefined4 *)0x47ba91;
      __vbaStrMove();
    }
    else {
      uVar8 = rtcErrObj();
      piStack_20c = (int *)__vbaObjSet(&uStack_180,uVar8);
      auStack_1c4[0] = 10;
      auStack_1b4[0] = 10;
      uStack_1bc = 0x80020004;
      uStack_1ac = 0x80020004;
      pwStack_1dc = L"Invalid MsgBox response in UserAssistedSeekFile";
      uStack_1e4 = 8;
      __vbaVarDup();
      pwStack_1cc = L"CTPEd.FileInterface";
      uStack_1d4 = 8;
      __vbaVarDup();
      iVar7 = (**(code **)(*piStack_20c + 0x44))
                        (piStack_20c,0x456,auStack_194,auStack_1a4,auStack_1b4,auStack_1c4);
      if (iVar7 < 0) {
        puStack_234 = (undefined4 *)0x44;
        __vbaHresultCheckObj(iVar7,piStack_20c,&DAT_00413af4);
      }
      puStack_234 = (undefined4 *)0x47b99f;
      __vbaFreeObj();
      puStack_234 = auStack_1c4;
      __vbaFreeVarList(4,auStack_194,auStack_1a4,auStack_1b4);
    }
  }
  __vbaStrCopy(piVar4,puVar9);
  __vbaFreeStr(&LAB_0047bc7a);
  __vbaFreeObj();
  return;
}

/* ---- 0x47b570 (FUN_0047b570) [estimated] strings: CTP Editor; Could not locate ;  at:; Would you like CTPEd to look for it? ---- */
void __cdecl FUN_0047b570(int *param_1,undefined *param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_160;
  int *piStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  int iStack_140;
  short sStack_13c;
  int *piStack_138;
  undefined4 auStack_134 [9];
  undefined4 uStack_110;
  wchar_t *pwStack_108;
  undefined4 uStack_100;
  wchar_t *pwStack_f8;
  undefined4 auStack_f0 [2];
  undefined4 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined4 uStack_d8;
  undefined4 auStack_d0 [4];
  undefined4 auStack_c0 [2];
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  void *pvStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_64;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 local_50 [2];
  undefined *local_48;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  int *local_20;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff90;
  local_c = &DAT_00403150;
  local_8 = 0;
  piStack_74 = param_1;
  piStack_78 = (int *)0x47b5a7;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  local_20 = (int *)0x0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  piStack_78 = (int *)0x47b5c9;
  __vbaStrCopy();
  puVar6 = (undefined4 *)0x0;
  do {
    puVar7 = puVar6;
    sVar5 = (short)puVar7;
    if (0x19 < sVar5) {
LAB_0047b682:
      piStack_74 = (int *)0x47b6a6;
      __vbaFreeStr();
      return;
    }
    piStack_74 = (int *)0x47b5e5;
    sVar1 = rtcAnsiValueBstr();
    if (SCARRY2(sVar1,sVar5)) break;
    piStack_78 = (int *)0x47b5fc;
    piStack_74 = local_30;
    rtcVarBstrFromAnsi();
    piStack_74 = local_50;
    piStack_78 = local_40;
    local_48 = &DAT_00419250 /* bstr: ':\\' */;
    local_50[0] = 8;
    piStack_7c = (int *)0x47b61c;
    __vbaVarCat();
    piStack_74 = (int *)0x47b623;
    __vbaStrVarMove();
    __vbaStrMove();
    piStack_74 = local_30;
    piStack_78 = (int *)0x2;
    piStack_7c = (int *)0x47b63e;
    __vbaFreeVarList();
    piStack_74 = (int *)param_2;
    piStack_78 = local_20;
    piStack_7c = param_1;
    pvStack_80 = (void *)0x47b650;
    piVar2 = (int *)(**(code **)(*param_1 + 0x34))();
    if ((int)piVar2 < 0) {
      piStack_74 = (int *)&DAT_004146ac;
      piStack_78 = param_1;
      pvStack_80 = (void *)0x47b663;
      piStack_7c = piVar2;
      __vbaHresultCheckObj();
    }
    if (((short)param_1[0x10] != 0) || (*(short *)((int)param_1 + 0x42) != 0)) goto LAB_0047b682;
    puVar6 = (undefined4 *)(uint)(ushort)(sVar5 + 1);
  } while (!SCARRY2(sVar5,1));
  __vbaErrorOverflow();
  piStack_7c = (int *)&LAB_004032d6;
  pvStack_80 = ExceptionList;
  uStack_158 = param_3;
  piStack_15c = param_1;
  piStack_78 = (int *)&puStack_160;
  piStack_74 = (int *)&DAT_00403160;
  ExceptionList = &pvStack_80;
  piVar2 = piStack_64;
  puStack_160 = puVar7;
  (**(code **)(*piStack_64 + 4))(piStack_64);
  uStack_84 = 0;
  piStack_88 = (int *)0x0;
  *puStack_58 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  auStack_c0[0] = 0;
  auStack_d0[0] = 0;
  auStack_e0[0] = 0;
  auStack_f0[0] = 0;
  uStack_100 = 0;
  uStack_110 = 0;
  auStack_134[0] = 0;
  __vbaStrCopy(piVar2);
  while( true ) {
    puStack_160 = auStack_134;
    puVar6 = &uStack_84;
    piVar2 = piStack_64;
    puVar7 = puStack_5c;
    iVar3 = (**(code **)(*piStack_64 + 0x24))(piStack_64,puVar6,puStack_5c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piStack_64,&DAT_004146ac,0x24);
    }
    if ((short)auStack_134[0] == 0) break;
    auStack_f0[0] = 10;
    auStack_e0[0] = 10;
    uStack_e8 = 0x80020004;
    uStack_d8 = 0x80020004;
    pwStack_f8 = L"CTP Editor";
    uStack_100 = 8;
    __vbaVarDup();
    __vbaStrCat(*puStack_5c,L"Could not locate ");
    uVar4 = __vbaStrMove();
    __vbaStrCat(L" at:",uVar4);
    uVar4 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar4);
    uVar4 = __vbaStrMove();
    __vbaStrCat(uStack_84,uVar4);
    uVar4 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar4);
    uVar4 = __vbaStrMove();
    __vbaStrCat(L"Would you like CTPEd to look for it?",uVar4);
    uVar4 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar4);
    uVar4 = __vbaStrMove();
    uStack_b8 = __vbaStrCat(L"(Choose no to select another path yourself)",uVar4);
    auStack_c0[0] = 8;
    iStack_140 = rtcMsgBox(auStack_c0,3,auStack_d0,auStack_e0,auStack_f0);
    __vbaFreeStrList(7,&uStack_90,&uStack_94,&uStack_98,&uStack_9c,&uStack_a0,&uStack_a4,&uStack_a8)
    ;
    __vbaFreeVarList(4,auStack_c0,auStack_d0,auStack_e0,auStack_f0);
    if (iStack_140 == 2) break;
    if (iStack_140 == 6) {
      iVar3 = *piStack_64;
      uVar4 = __vbaNew(&DAT_004062a0);
      uVar4 = __vbaObjSet(&uStack_ac,uVar4);
      iStack_154 = iVar3;
      iVar3 = (**(code **)(iVar3 + 0x4c))(piStack_64,uVar4);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piStack_64,&DAT_004146ac,0x4c);
      }
      __vbaFreeObj();
      iVar3 = (**(code **)(*piStack_64 + 0x44))(piStack_64,&uStack_ac);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piStack_64,&DAT_004146ac,0x44);
      }
      uVar4 = uStack_ac;
      uStack_ac = 0;
      __vbaObjSet(&uStack_b0,uVar4);
      iVar3 = (**(code **)(*piStack_64 + 0x38))(piStack_64,puStack_5c,&uStack_b0);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piStack_64,&DAT_004146ac,0x38);
      }
      __vbaFreeObj();
      if ((short)piStack_64[0x10] == 0) {
        auStack_f0[0] = 10;
        auStack_e0[0] = 10;
        uStack_e8 = 0x80020004;
        uStack_d8 = 0x80020004;
        pwStack_f8 = L"CTP Editor";
        uStack_100 = 8;
        __vbaVarDup();
        uStack_b8 = __vbaStrCat(*puStack_5c,L"Could not locate ");
        auStack_c0[0] = 8;
        rtcMsgBox(auStack_c0,0x30,auStack_d0,auStack_e0,auStack_f0);
        __vbaFreeVarList(4,auStack_c0,auStack_d0,auStack_e0,auStack_f0);
      }
      else {
        __vbaStrCopy(puVar7);
      }
    }
    else if (iStack_140 == 7) {
      __vbaStrCat(&DAT_00418ec4 /* bstr: '|' */,*puStack_5c);
      uVar4 = __vbaStrMove();
      __vbaStrCat(*puStack_5c,uVar4);
      __vbaStrMove();
      __vbaStrCat(*puStack_5c,L"Please locate ");
      __vbaStrMove();
      iVar3 = (**(code **)(*piStack_64 + 0x2c))
                        (piStack_64,&piStack_88,&uStack_94,&uStack_98,&uStack_84,auStack_134);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piStack_64,&DAT_004146ac,0x2c);
      }
      sStack_13c = (short)auStack_134[0];
      __vbaFreeStrList(3,&uStack_90,&uStack_94,&uStack_98);
      if (sStack_13c != 0) break;
      iVar3 = (**(code **)(*piStack_88 + 0x2c))(piStack_88,&uStack_90);
      if (iVar3 < 0) {
        puStack_160 = (undefined4 *)0x2c;
        __vbaHresultCheckObj(iVar3,piStack_88,&DAT_0041462c);
      }
      uStack_90 = 0;
      puStack_160 = (undefined4 *)0x47ba91;
      __vbaStrMove();
    }
    else {
      uVar4 = rtcErrObj();
      piStack_138 = (int *)__vbaObjSet(&uStack_ac,uVar4);
      auStack_f0[0] = 10;
      auStack_e0[0] = 10;
      uStack_e8 = 0x80020004;
      uStack_d8 = 0x80020004;
      pwStack_108 = L"Invalid MsgBox response in UserAssistedSeekFile";
      uStack_110 = 8;
      __vbaVarDup();
      pwStack_f8 = L"CTPEd.FileInterface";
      uStack_100 = 8;
      __vbaVarDup();
      iVar3 = (**(code **)(*piStack_138 + 0x44))
                        (piStack_138,0x456,auStack_c0,auStack_d0,auStack_e0,auStack_f0);
      if (iVar3 < 0) {
        puStack_160 = (undefined4 *)0x44;
        __vbaHresultCheckObj(iVar3,piStack_138,&DAT_00413af4);
      }
      puStack_160 = (undefined4 *)0x47b99f;
      __vbaFreeObj();
      puStack_160 = auStack_f0;
      __vbaFreeVarList(4,auStack_c0,auStack_d0,auStack_e0);
    }
  }
  __vbaStrCopy(piVar2,puVar6);
  __vbaFreeStr(&LAB_0047bc7a);
  __vbaFreeObj();
  return;
}

/* ---- 0x47b6d0 (FUN_0047b6d0) [estimated] strings: CTP Editor; Could not locate ;  at:; Would you like CTPEd to look for it? ---- */
void __cdecl FUN_0047b6d0(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_cc [9];
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68 [4];
  undefined4 local_58 [2];
  undefined4 local_50;
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
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff08;
  local_c = &DAT_00403160;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  piVar4 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  *param_4 = 0;
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
  local_58[0] = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_98 = 0;
  local_a8 = 0;
  local_cc[0] = 0;
  __vbaStrCopy(piVar4);
  while( true ) {
    puVar5 = &local_1c;
    piVar4 = param_1;
    puVar6 = param_3;
    iVar2 = (**(code **)(*param_1 + 0x24))(param_1,puVar5,param_3);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,param_1,&DAT_004146ac,0x24);
    }
    if ((short)local_cc[0] == 0) break;
    local_88[0] = 10;
    local_78[0] = 10;
    local_80 = 0x80020004;
    local_70 = 0x80020004;
    local_90 = L"CTP Editor";
    local_98 = 8;
    __vbaVarDup();
    __vbaStrCat(*param_3,L"Could not locate ");
    uVar3 = __vbaStrMove();
    __vbaStrCat(L" at:",uVar3);
    uVar3 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar3);
    uVar3 = __vbaStrMove();
    __vbaStrCat(local_1c,uVar3);
    uVar3 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar3);
    uVar3 = __vbaStrMove();
    __vbaStrCat(L"Would you like CTPEd to look for it?",uVar3);
    uVar3 = __vbaStrMove();
    __vbaStrCat(&LAB_004143c4,uVar3);
    uVar3 = __vbaStrMove();
    local_50 = __vbaStrCat(L"(Choose no to select another path yourself)",uVar3);
    local_58[0] = 8;
    iVar2 = rtcMsgBox(local_58,3,local_68,local_78,local_88);
    __vbaFreeStrList(7,&local_28,&local_2c,&local_30,&local_34,&local_38,&local_3c,&local_40);
    __vbaFreeVarList(4,local_58,local_68,local_78,local_88);
    if (iVar2 == 2) break;
    if (iVar2 == 6) {
      iVar2 = *param_1;
      uVar3 = __vbaNew(&DAT_004062a0);
      uVar3 = __vbaObjSet(&local_44,uVar3);
      iVar2 = (**(code **)(iVar2 + 0x4c))(param_1,uVar3);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_004146ac,0x4c);
      }
      __vbaFreeObj();
      iVar2 = (**(code **)(*param_1 + 0x44))(param_1,&local_44);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_004146ac,0x44);
      }
      uVar3 = local_44;
      local_44 = 0;
      __vbaObjSet(&local_48,uVar3);
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_3,&local_48);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_004146ac,0x38);
      }
      __vbaFreeObj();
      if ((short)param_1[0x10] == 0) {
        local_88[0] = 10;
        local_78[0] = 10;
        local_80 = 0x80020004;
        local_70 = 0x80020004;
        local_90 = L"CTP Editor";
        local_98 = 8;
        __vbaVarDup();
        local_50 = __vbaStrCat(*param_3,L"Could not locate ");
        local_58[0] = 8;
        rtcMsgBox(local_58,0x30,local_68,local_78,local_88);
        __vbaFreeVarList(4,local_58,local_68,local_78,local_88);
      }
      else {
        __vbaStrCopy(puVar6);
      }
    }
    else if (iVar2 == 7) {
      __vbaStrCat(&DAT_00418ec4 /* bstr: '|' */,*param_3);
      uVar3 = __vbaStrMove();
      __vbaStrCat(*param_3,uVar3);
      __vbaStrMove();
      __vbaStrCat(*param_3,L"Please locate ");
      __vbaStrMove();
      iVar2 = (**(code **)(*param_1 + 0x2c))
                        (param_1,&local_20,&local_2c,&local_30,&local_1c,local_cc);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,param_1,&DAT_004146ac,0x2c);
      }
      sVar1 = (short)local_cc[0];
      __vbaFreeStrList(3,&local_28,&local_2c,&local_30);
      if (sVar1 != 0) break;
      iVar2 = (**(code **)(*local_20 + 0x2c))(local_20,&local_28);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,local_20,&DAT_0041462c);
      }
      local_28 = 0;
      __vbaStrMove();
    }
    else {
      uVar3 = rtcErrObj();
      piVar4 = (int *)__vbaObjSet(&local_44,uVar3);
      local_88[0] = 10;
      local_78[0] = 10;
      local_80 = 0x80020004;
      local_70 = 0x80020004;
      local_a0 = L"Invalid MsgBox response in UserAssistedSeekFile";
      local_a8 = 8;
      __vbaVarDup();
      local_90 = L"CTPEd.FileInterface";
      local_98 = 8;
      __vbaVarDup();
      iVar2 = (**(code **)(*piVar4 + 0x44))(piVar4,0x456,local_58,local_68,local_78,local_88);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00413af4);
      }
      __vbaFreeObj();
      __vbaFreeVarList(4,local_58,local_68,local_78);
    }
  }
  __vbaStrCopy(piVar4,puVar5);
  __vbaFreeStr(&LAB_0047bc7a);
  __vbaFreeObj();
  return;
}

/* ---- 0x47bcb0 (FUN_0047bcb0) [estimated] strings: FileName; Path; Found ;  at: ---- */
void __cdecl FUN_0047bcb0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_140 [2];
  wchar_t *local_138;
  undefined4 local_130 [2];
  undefined1 *local_128;
  undefined4 local_110 [2];
  undefined1 *local_108;
  undefined4 local_100 [2];
  wchar_t *local_f8;
  undefined4 local_f0 [2];
  wchar_t *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b0 [4];
  undefined4 local_a0 [4];
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffe6c;
  local_c = &DAT_00403170;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  piVar3 = piVar4;
  (**(code **)(*piVar4 + 4))(piVar4);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_70[0] = 0;
  local_80[0] = 0;
  local_90[0] = 0;
  local_a0[0] = 0;
  local_b0[0] = 0;
  local_c0[0] = 0;
  local_d0[0] = 0;
  local_e0 = 0;
  local_f0[0] = 0;
  local_100[0] = 0;
  local_110[0] = 0;
  local_130[0] = 0;
  local_140[0] = 0;
  if (((short)piVar4[0x10] == 0) && (*(short *)((int)piVar4 + 0x42) == 0)) {
    __vbaVarLateMemCallLd(local_30,param_2,L"FileName",0);
    __vbaVarLateMemCallLd(local_70,param_2,L"Path",0);
    local_c8 = 0x80020004;
    local_b8 = 0x80020004;
    local_d0[0] = 10;
    local_c0[0] = 10;
    __vbaVarDup();
    puVar8 = local_d0;
    local_108 = &LAB_004143c4;
    local_128 = &LAB_004143c4;
    puVar7 = local_c0;
    puVar6 = local_b0;
    uVar5 = 3;
    local_e8 = L"Found ";
    local_f0[0] = 8;
    local_f8 = L" at:";
    local_100[0] = 8;
    local_110[0] = 8;
    local_130[0] = 8;
    local_138 = L"Is this the correct file?";
    local_140[0] = 8;
    uVar1 = __vbaVarCat(local_40,local_30,local_f0);
    uVar1 = __vbaVarCat(local_50,local_100,uVar1);
    uVar1 = __vbaVarCat(local_60,local_110,uVar1);
    uVar1 = __vbaVarCat(local_80,local_70,uVar1);
    uVar1 = __vbaVarCat(local_90,local_130,uVar1);
    uVar1 = __vbaVarCat(local_a0,local_140,uVar1);
    iVar2 = rtcMsgBox(uVar1,uVar5,puVar6,puVar7,puVar8);
    __vbaFreeVarList(0xb,local_30,local_40,local_50,local_60,local_70,local_80,local_90,local_a0,
                     local_b0,local_c0,local_d0);
    if (iVar2 == 2) {
      *(undefined2 *)((int)piVar4 + 0x42) = 0xffff;
    }
    else if (iVar2 == 6) {
      uVar1 = __vbaVarLateMemCallLd(local_30,param_2,L"Path",0);
      __vbaStrVarMove(uVar1);
      __vbaStrMove();
      __vbaStrCopy(piVar3);
      __vbaFreeStr();
      __vbaFreeVar();
      *(undefined2 *)(piVar4 + 0x10) = 0xffff;
      iVar2 = (**(code **)(*piVar4 + 0x44))();
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_004146ac,0x44);
      }
      piVar3 = local_20;
      iVar2 = (**(code **)(*local_20 + 0x20))(local_20,0xffffffff);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00419234,0x20);
      }
      __vbaFreeObj();
    }
    else if (iVar2 != 7) {
      uVar1 = rtcErrObj();
      piVar3 = (int *)__vbaObjSet(&local_20,uVar1);
      local_58 = 0x80020004;
      local_48 = 0x80020004;
      local_60[0] = 10;
      local_50[0] = 10;
      local_e8 = L"Invalid MsgBox response in FileFoundAction_Action";
      local_f0[0] = 8;
      __vbaVarDup();
      local_d8 = L"CTPEd.FileInterface";
      local_e0 = 8;
      __vbaVarDup();
      iVar2 = (**(code **)(*piVar3 + 0x44))(piVar3,0x456,local_30,local_40,local_50,local_60);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar3,&DAT_00413af4,0x44);
      }
      __vbaFreeObj();
      __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
    }
  }
  return;
}

/* ---- 0x47c0f0 (FUN_0047c0f0) [estimated] strings:  ---- */
undefined4 FUN_0047c0f0(int *param_1,undefined2 *param_2)

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
  local_c = &DAT_00403180;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_20 = 0;
  local_1c = 0;
  iVar1 = (**(code **)(*(int *)param_1[0xd] + 0x24))
                    ((int *)param_1[0xd],param_1 + 0xe,param_1 + 0xf,&local_20);
  if (iVar1 < 0) {
    __vbaHresultCheckObj(iVar1,param_1[0xd],&DAT_004146ac,0x24);
  }
  local_1c = local_20;
  (**(code **)(*param_1 + 8))(param_1);
  *param_2 = (undefined2)local_1c;
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x47c190 (FUN_0047c190) [estimated] strings:  ---- */
void __cdecl FUN_0047c190(int *param_1,undefined4 *param_2)

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
  local_c = &DAT_00403188;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  *param_2 = 0;
  __vbaObjSetAddref(&local_1c,param_1[0xd]);
  return;
}

/* ---- 0x47c220 (FUN_0047c220) [estimated] strings:  ---- */
void __cdecl FUN_0047c220(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_00403198;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}

/* ---- 0x47c2b0 (FUN_0047c2b0) [estimated] strings:  ---- */
undefined4 FUN_0047c2b0(int *param_1)

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
  local_c = &DAT_004031a8;
  local_8 = 0;
  ExceptionList = &local_18;
  piVar1 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  __vbaStrCopy(piVar1);
  (**(code **)(*param_1 + 8))();
  ExceptionList = local_18;
  return local_8;
}

/* ---- 0x47c320 (FUN_0047c320) [estimated] strings:  ---- */
void __cdecl FUN_0047c320(int *param_1,undefined4 *param_2)

{
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_004032d6;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffd0;
  local_c = &DAT_004031b0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  *param_2 = 0;
  __vbaStrCopy(param_1);
  return;
}
