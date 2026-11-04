// name: FUN_10047659f
// address: 10047659f

void FUN_10047659f(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = *(char *)(param_1 + 0xc1);
  if (param_2 == 0) {
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "trackInfo->isBusyCount_Private != 0";
        goto LAB_100476672;
      }
      goto LAB_10047662e;
    }
    cVar1 = cVar1 + -1;
  }
  else {
    if (cVar1 == -1) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "trackInfo->isBusyCount_Private < 255";
LAB_100476672:
        local_2c = 0x822;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
LAB_10047662e:
      FUN_1001782e9(0,0);
      goto LAB_100476637;
    }
    cVar1 = cVar1 + '\x01';
  }
  *(char *)(param_1 + 0xc1) = cVar1;
LAB_100476637:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

