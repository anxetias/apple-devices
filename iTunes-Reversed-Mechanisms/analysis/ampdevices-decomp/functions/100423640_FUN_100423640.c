// name: FUN_100423640
// address: 100423640

void FUN_100423640(void)

{
  char cVar1;
  undefined8 uVar2;
  int *local_48;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48 = (int *)FUN_1004aab9f(1);
  if (local_48 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "context.downloadManager != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_40 = 0;
    FUN_1004af2c0(*(undefined8 *)(local_48 + 0x54),0,FUN_100423749,&local_48);
    if (local_40 != 0) {
      FUN_1004aef0b(local_48,local_40,0);
      FUN_1004aa496(local_40);
    }
    if (local_48 != (int *)0x0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 == 0) {
        FUN_1004ada4f();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

