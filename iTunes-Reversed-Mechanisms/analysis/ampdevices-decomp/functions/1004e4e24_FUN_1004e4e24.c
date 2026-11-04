// name: FUN_1004e4e24
// address: 1004e4e24

int FUN_1004e4e24(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long local_50 [5];
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = *(int *)(param_1 + 0x14cb8);
  if (iVar3 == 0) {
    iVar3 = FUN_100189f61(param_1 + 0x6b40,local_50);
    if (iVar3 == 0) {
      uVar5 = local_50[0] + 0x3fffffff;
      iVar3 = (int)(uVar5 >> 0x1e);
      if (((uVar5 & 0x3fffffff00000000) == 0) || (*(char *)(param_1 + 0x35b) != '\0')) {
        iVar4 = iVar3 * 0x5dc00;
      }
      else {
        iVar4 = 0x1400000;
        if (4 < ((uint)(uVar5 >> 0x20) & 0x3ff)) {
          iVar4 = iVar3 << 0x14;
        }
      }
      *(int *)(param_1 + 0x14cb8) = iVar4;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x14cb8);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x14cb8) = 0x500000;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_24 = *(undefined4 *)(param_1 + 0x14cb8);
      local_28 = 0x4000100;
      __os_log_impl(0x100000000,uVar1,1,"stats> freeSpaceReservation = %u",&local_28,8);
    }
    iVar3 = *(int *)(param_1 + 0x14cb8);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

