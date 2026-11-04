// name: FUN_1005ab648
// address: 1005ab648

void FUN_1005ab648(long param_1,ulong param_2,long param_3,long param_4,undefined4 param_5,
                  undefined1 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ustrValue != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_3 != 0) {
    iVar2 = FUN_1005a2140(param_1 + 0x1660,param_2,param_3);
    if (iVar2 == 1) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        FUN_1005ad828(param_1,param_2 & 0xffffffff,param_3,param_4,param_5,param_6);
        return;
      }
      goto LAB_1005ab75d;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_1005ab75d:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

