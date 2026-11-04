// name: FUN_10035e1e9
// address: 10035e1e9

undefined8 FUN_10035e1e9(void *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (uint *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "codecList != nullptr";
LAB_10035e2dc:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    uVar1 = *param_2;
    if ((ulong)uVar1 < 0x14) {
      _memcpy(param_2 + (ulong)uVar1 * 199 + 1,param_1,0x31c);
      *param_2 = uVar1 + 1;
      uVar3 = 0;
      goto LAB_10035e29f;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "codecList->numCodecs < 20";
      goto LAB_10035e2dc;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_10035e29f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

