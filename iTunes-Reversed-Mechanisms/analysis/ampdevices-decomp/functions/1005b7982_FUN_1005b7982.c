// name: FUN_1005b7982
// address: 1005b7982

void FUN_1005b7982(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c2fa1 == '\x01') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "sAMSInitialized == false";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar3 = 0;
  }
  else {
    iVar2 = _AMSInitialize(0);
    if (iVar2 == 0) {
      FUN_1001c0fbe(FUN_1005b7ace,0,0,0,0);
      DAT_1008c2fa1 = '\x01';
      goto LAB_1005b79f3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "status == AMSStatus_OK";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar3 = 0x400;
  }
  FUN_1001782e9(uVar3,0);
LAB_1005b79f3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

