// name: FUN_10043ebfa
// address: 10043ebfa

undefined8 FUN_10043ebfa(long param_1)

{
  char cVar1;
  dispatch_queue_t pdVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x4c0) == 0) {
    pdVar2 = _dispatch_queue_create("com.apple.CoreMediaItem",(dispatch_queue_attr_t)0x0);
    if (pdVar2 == (dispatch_queue_t)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "notificationQueue != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      if (*(int *)(param_1 + 0x4b8) == 0) {
        *(undefined4 *)(param_1 + 0x4b8) = 0xffffff85;
      }
    }
    else {
      *(dispatch_queue_t *)(param_1 + 0x4c0) = pdVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return *(undefined8 *)(param_1 + 0x4c0);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

