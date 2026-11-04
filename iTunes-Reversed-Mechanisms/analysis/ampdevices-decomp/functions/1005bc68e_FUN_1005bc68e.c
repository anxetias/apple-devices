// name: FUN_1005bc68e
// address: 1005bc68e

undefined4 FUN_1005bc68e(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "value != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) goto LAB_1005bc782;
    uVar2 = 0xffffffce;
  }
  else {
    uVar3 = FUN_1001658f1(DAT_1008c4d90);
    uVar2 = FUN_1005bbb13(param_1,0,&cf_DeviceName,uVar3);
    FUN_10017060f(uVar3);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
LAB_1005bc782:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  }
  return uVar2;
}

