// name: FUN_10052aeee
// address: 10052aeee

int FUN_10052aeee(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(uint *)(param_1 + 0x80) = param_2;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  iVar2 = FUN_10015a455(8,0,0,param_1 + 8);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_1001e9c3e(param_1 + 0x38);
      if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_10052afb5;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    if (cVar1 != '\0') {
      local_2c = 0x400;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      local_2a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
LAB_10052afb5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

