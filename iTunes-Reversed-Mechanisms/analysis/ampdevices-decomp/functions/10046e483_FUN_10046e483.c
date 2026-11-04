// name: FUN_10046e483
// address: 10046e483

bool FUN_10046e483(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) == 0x61646563) {
    if (*(char *)(param_1 + 0x1874) == '\0') {
      if (((*(int *)(param_1 + 0x17c0) != 0) && (*(int *)(param_1 + 0x17c0) != -0x27)) &&
         (*(int *)(param_1 + 0x17c0) != -0x1b)) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = 
          "(decoderData->asyncDecoderStatus == noErr) || (decoderData->asyncDecoderStatus == eofErr) || (decoderData->asyncDecoderStatus == abortErr)"
          ;
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
      }
      bVar3 = *(int *)(param_1 + 0x17c0) != 0;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "decoderData->magic == \'adec\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    bVar3 = true;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

