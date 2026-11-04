// name: FUN_1004cd923
// address: 1004cd923

void FUN_1004cd923(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined2 local_6c;
  char *local_6a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      local_70 = 1;
      local_6c = 0x822;
      local_6a = "pluginData != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 != (long *)0x0) {
      do {
        if (plVar3[4] != 0) {
          FUN_1001c62d9(&local_78,0x38);
          local_78 = (undefined4)param_3;
          uStack_74 = (undefined4)((ulong)param_3 >> 0x20);
          local_70 = param_4;
          FUN_1002fc1ae(plVar3[4],param_2,&local_78);
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

