// name: FUN_1003da99e
// address: 1003da99e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1003da99e(long param_1,uint param_2,ulong *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = *(uint *)(param_1 + 0x4a4);
  if (uVar6 == 1) {
    dVar7 = *(double *)(param_1 + 0x490);
    dVar8 = ((double)param_2 * dVar7) / _DAT_100708b48;
    uVar3 = (ulong)dVar8;
    uVar3 = (long)(dVar8 - DAT_10070e4c0) & (long)uVar3 >> 0x3f | uVar3;
    lVar4 = *(uint *)(param_1 + 0x4a8) * uVar3;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x4a0);
    if (uVar2 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mFormatInfo.audioFormat.mBytesPerPacket != 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar2 = *(uint *)(param_1 + 0x4a0);
      uVar6 = *(uint *)(param_1 + 0x4a4);
    }
    dVar7 = *(double *)(param_1 + 0x490);
    dVar8 = ((double)param_2 * dVar7) / ((double)uVar6 * _DAT_100708b48);
    uVar3 = (ulong)dVar8;
    uVar3 = (long)(dVar8 - DAT_10070e4c0) & (long)uVar3 >> 0x3f | uVar3;
    lVar4 = uVar2 * uVar3;
    uVar3 = uVar3 * uVar6;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar3;
  }
  if (param_4 != (undefined4 *)0x0) {
    auVar9._8_4_ = (int)(uVar3 >> 0x20);
    auVar9._0_8_ = uVar3;
    auVar9._12_4_ = DAT_10070d3c0._4_4_;
    *param_4 = (int)(long)(((((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar3) -
                             _DAT_10070d3d0) + (auVar9._8_8_ - _UNK_10070d3d8)) * _DAT_100708b48) /
                          dVar7);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4 + *(long *)(param_1 + 0x4c8);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

