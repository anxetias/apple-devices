// name: FUN_1005e79a6
// address: 1005e79a6

undefined8 FUN_1005e79a6(long param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "outDeviceClass != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *param_3 = 0;
    uVar2 = 0x4e26;
    if (param_2 != 0) {
      for (puVar3 = *(undefined4 **)(param_1 + 0x60); puVar3 != (undefined4 *)0x0;
          puVar3 = *(undefined4 **)(puVar3 + 0x1a1e)) {
        if (puVar3[0x1a21] == param_2) {
          *param_3 = *puVar3;
          uVar2 = 0;
          break;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

