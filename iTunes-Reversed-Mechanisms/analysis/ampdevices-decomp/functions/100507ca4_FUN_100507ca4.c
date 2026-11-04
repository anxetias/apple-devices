// name: FUN_100507ca4
// address: 100507ca4

undefined8 FUN_100507ca4(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(*(long *)(param_1 + 0x10) + 8) != 0) {
    uVar4 = 0;
    uVar3 = FUN_1002b1255(param_1,0);
    if ((uVar3 & 0xc62) == 0) goto LAB_100507d73;
    if ((~*(uint *)(param_1 + 0x48) & 0x480) != 0) {
      FUN_1003c3248(param_1,1,0,0,0,0);
      uVar2 = *(uint *)(param_1 + 0x48);
      if (-1 < (char)uVar2) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "trackInstance->drmVersionsValid";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        uVar2 = *(uint *)(param_1 + 0x48);
      }
      if ((uVar2 >> 10 & 1) == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "trackInstance->drmPlatformIDValid";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    if ((*(long *)(*(long *)(param_1 + 0x10) + 8) != 0) &&
       (*(int *)(*(long *)(param_1 + 0x10) + 4) < 0)) {
      uVar4 = 1;
      goto LAB_100507d73;
    }
  }
  uVar4 = 0;
LAB_100507d73:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

