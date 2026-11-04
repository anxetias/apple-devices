// name: FUN_1005bc3be
// address: 1005bc3be

undefined8 FUN_1005bc3be(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "deviceClass != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = FUN_1005ba95d(param_1,&cf_DeviceClass);
    local_38 = (undefined4)uVar3;
    uStack_34 = (undefined4)((ulong)uVar3 >> 0x20);
    uVar2 = FUN_1005bc20a(uVar3);
    *param_2 = uVar2;
    FUN_10016d588(&local_38);
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

