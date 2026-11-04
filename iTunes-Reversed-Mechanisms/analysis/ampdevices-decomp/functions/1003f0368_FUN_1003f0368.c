// name: FUN_1003f0368
// address: 1003f0368

undefined1 * FUN_1003f0368(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 < 0x100001) {
    local_38 = (undefined4)param_3;
    uStack_34 = (undefined4)(param_3 >> 0x20);
    puVar2 = (undefined1 *)FUN_100160380(*(undefined8 *)(param_1 + 0x100000),&local_38,param_2);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "dataSize <= (1 * 1024L * 1024L)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    puVar2 = &DAT_ffffff30;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

