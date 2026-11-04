// name: FUN_1004c3a86
// address: 1004c3a86

undefined8 FUN_1004c3a86(undefined8 param_1,float param_2,float param_3,long param_4,byte param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_4 + 0x4f0) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mCoreMediaItem != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *(byte *)(param_4 + 0x528) = param_5;
    *(float *)(param_4 + 0x52c) = param_2;
    *(float *)(param_4 + 0x530) = param_3;
    FUN_100443a6e(param_2 * param_3,*(long *)(param_4 + 0x4f0),2 - (uint)param_5);
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

