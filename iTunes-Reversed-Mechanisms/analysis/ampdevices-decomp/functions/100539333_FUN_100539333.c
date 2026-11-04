// name: FUN_100539333
// address: 100539333

undefined1 FUN_100539333(long param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "bitFields != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != (int *)0x0) {
      iVar1 = *param_2;
      while (iVar1 != 0) {
        param_2 = param_2 + 1;
        if ((iVar1 < 0x100) && (cVar2 = FUN_10015fa28(param_1), cVar2 != '\0')) {
          uVar4 = 1;
          goto LAB_1005393ac;
        }
        iVar1 = *param_2;
      }
    }
    uVar4 = 0;
  }
LAB_1005393ac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

