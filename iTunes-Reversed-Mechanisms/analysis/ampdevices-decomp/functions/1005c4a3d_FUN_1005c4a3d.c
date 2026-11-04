// name: FUN_1005c4a3d
// address: 1005c4a3d

undefined8 FUN_1005c4a3d(undefined8 param_1)

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
  cVar1 = FUN_1001ee068();
  if (cVar1 == '\0') {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      uVar3 = FUN_1005c4b38(param_1);
      return uVar3;
    }
  }
  else {
    iVar2 = FUN_1005ba4e2(param_1,0xe,0);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
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
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

