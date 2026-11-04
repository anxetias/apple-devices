// name: FUN_1004c05d0
// address: 1004c05d0

int FUN_1004c05d0(long param_1)

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
  *(undefined4 *)(param_1 + 0x4d8) = 0x636d6564;
  *(undefined1 *)(param_1 + 0x18) = 0x12;
  iVar2 = FUN_1002ea370();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x540) = 0x3ff0000000000000;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

