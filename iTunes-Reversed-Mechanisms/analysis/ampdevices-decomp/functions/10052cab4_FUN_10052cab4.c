// name: FUN_10052cab4
// address: 10052cab4

int FUN_10052cab4(long param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined4 *)(param_1 + 0x78) = 0x44415448;
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  FUN_1001c631b(param_2 + 1,param_1 + 0x84,0x460);
  *(undefined1 *)(param_1 + 0x500) = *(undefined1 *)((long)param_2 + 0x469);
  *(undefined4 *)(param_1 + 0x7c) = 0x62756666;
  iVar2 = FUN_1001e9c3e(param_1 + 0x550);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x11c);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

