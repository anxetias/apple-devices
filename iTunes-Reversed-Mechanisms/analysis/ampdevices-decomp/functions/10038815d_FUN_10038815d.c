// name: FUN_10038815d
// address: 10038815d

undefined1 * FUN_10038815d(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = param_3;
  if (*(uint *)(param_1 + 2) < param_3) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "dataSize <= context->recordBufferSize";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    puVar3 = &DAT_ffffff30;
  }
  else {
    puVar3 = (undefined1 *)FUN_100160380(*param_1,&local_40,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

