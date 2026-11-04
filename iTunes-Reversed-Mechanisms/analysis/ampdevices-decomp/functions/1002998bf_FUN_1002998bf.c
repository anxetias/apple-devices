// name: FUN_1002998bf
// address: 1002998bf

undefined8 FUN_1002998bf(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001c63e1(0x20);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "frameCountCacheRecord != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    FUN_1001c271d(&DAT_1008b5bc8,lVar2);
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

