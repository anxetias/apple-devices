// name: FUN_1006292c2
// address: 1006292c2

undefined1
FUN_1006292c2(long param_1,undefined4 *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mContext != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x58);
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)(param_1 + 0x5c);
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = *(undefined1 *)(param_1 + 0x5d);
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = *(undefined1 *)(param_1 + 0x5e);
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = *(undefined1 *)(param_1 + 0x60);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return *(undefined1 *)(param_1 + 0x1046);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

