// name: FUN_1005c7152
// address: 1005c7152

undefined8 FUN_1005c7152(undefined8 param_1,uint param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (2 < param_2) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "wakeupResult == RESULT_DEVICE_AWAKE || wakeupResult == RESULT_OPERATION_EXPIRED || wakeupResult == RESULT_ASYNC_ERROR"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (cVar1 != '\0') {
    local_48 = 0x8420202;
    local_3c = 0x400;
    local_3a = (char *)CONCAT44(local_3a._4_4_,param_2);
    local_44 = param_3;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                  "wakeup result for device %{public}@ = %d",&local_48,0x12);
  }
  FUN_10017060f(param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

