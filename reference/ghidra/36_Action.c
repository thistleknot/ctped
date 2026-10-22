/* Object #36 Action -- ESTIMATED function range; public methods per VB header: Action */
#include "ghidra_types.h"

/* ---- 0x47dc60 (FUN_0047dc60) [estimated] strings:  ---- */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0047dc60(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_34 [5];
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
  local_c = &DAT_004032a0;
  local_8 = param_1 & 1;
  piVar4 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar4 + 4))(piVar4);
  uVar7 = 0;
  local_1c = 0;
  local_20 = 0;
  local_34[1] = 0;
  local_34[0] = 0;
  uVar1 = (**(code **)(*piVar4 + 0x308))(piVar4,7,0,&DAT_00417d34);
  uVar1 = __vbaObjSet(&local_1c,uVar1);
  uVar1 = __vbaLateIdCallLd(local_34 + 1,uVar1);
  uVar1 = __vbaCastObjVar(uVar1,uVar7);
  piVar2 = (int *)__vbaObjSet(&local_20,uVar1);
  piVar6 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,local_34);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00417d34,0x1c);
  }
  bVar5 = local_34[0] == 0;
  __vbaFreeObjList(2,&local_1c,&local_20);
  __vbaFreeVar(piVar6);
  if (bVar5) {
    if (DAT_00480244 == (int *)0x0) {
      __vbaNew2(&DAT_00413b34,&DAT_00480244);
    }
    piVar6 = DAT_00480244;
    iVar3 = *DAT_00480244;
    uVar1 = __vbaObjSetAddref(&local_1c,piVar4);
    iVar3 = (**(code **)(iVar3 + 0x10))(piVar6,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar6,&DAT_00413b24,0x10);
    }
    __vbaFreeObj();
  }
  return;
}
