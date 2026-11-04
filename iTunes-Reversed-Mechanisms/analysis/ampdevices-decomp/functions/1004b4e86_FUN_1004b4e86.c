// name: FUN_1004b4e86
// address: 1004b4e86

long FUN_1004b4e86(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (ulong)*(uint *)(param_1 + 8);
  lVar2 = param_2 / (long)uVar5;
  if (lVar2 < (long)(ulong)*(uint *)(param_1 + 0xc)) {
    lVar4 = param_1 + lVar2 * 0x41 + 0x10;
    if (param_3 != (long *)0x0) {
      *param_3 = lVar2 * uVar5;
    }
  }
  else {
    uVar3 = FUN_1001cc310(param_1,uVar5,param_2 % (long)uVar5);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "index < inSegmentsInfo->numSegments";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

