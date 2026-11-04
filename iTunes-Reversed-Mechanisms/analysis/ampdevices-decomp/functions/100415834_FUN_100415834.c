// name: FUN_100415834
// address: 100415834

ulong FUN_100415834(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == '\x01') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "!mOpen";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    uVar4 = FUN_10041503c(param_2,param_1 + 8);
    *(int *)(param_1 + 0x10) = (int)uVar4;
    if ((int)uVar4 == 0) {
      *param_1 = '\x01';
      uVar2 = FUN_10041576c(*(undefined8 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      *(undefined8 *)(param_1 + 0x18) = param_2;
      uVar4 = (ulong)*(uint *)(param_1 + 0x10);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

