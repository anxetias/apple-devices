// name: FUN_1002061f0
// address: 1002061f0

undefined8 FUN_1002061f0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (lVar3 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38)), 0 < lVar3)) {
    lVar5 = 0;
    do {
      local_60 = 0;
      iVar2 = FUN_100325516(param_1,lVar5,&local_60,0,0,0);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10);
        }
      }
      cVar1 = FUN_100170633(local_60,*(undefined8 *)(param_1 + 0x50));
      FUN_10017060f(local_60);
      if (cVar1 != '\0') {
        *(long *)(param_1 + 0x60) = lVar5;
        break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return *(undefined8 *)(param_1 + 0x60);
}

