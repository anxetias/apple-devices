// name: FUN_1003cc55b
// address: 1003cc55b

int FUN_1003cc55b(long param_1,undefined8 param_2)

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
  iVar2 = FUN_10030d69f(param_1,param_2,2);
  if (iVar2 == -0x80) goto LAB_1003cc628;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x45) = 0;
    iVar2 = FUN_1002fc027(param_1);
    if (iVar2 == -0x80) goto LAB_1003cc628;
    if (iVar2 == 0) {
      FUN_1002b532a(param_1,0xf);
      FUN_1002b48e9(param_1);
      iVar2 = 0;
      goto LAB_1003cc628;
    }
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
LAB_1003cc628:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

