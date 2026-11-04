// name: FUN_1003d374e
// address: 1003d374e

undefined8 FUN_1003d374e(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (*(long *)(lVar3 + 0x152e8) != *(long *)(param_1 + 8) + 0x4c8) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = 
      "mSyncContext->handlerData->syncDelayedActionCompletion == &mSyncContext->cooperativeCompletion"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  }
  *(undefined8 *)(lVar3 + 0x152e8) = 0;
  FUN_10060324e();
  if (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x30) + 0x2c60) != 0) {
    FUN_100528e75();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

