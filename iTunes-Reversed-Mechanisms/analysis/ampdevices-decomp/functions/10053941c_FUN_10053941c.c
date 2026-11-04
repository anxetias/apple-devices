// name: FUN_10053941c
// address: 10053941c

undefined1 FUN_10053941c(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "bitFields != __null";
LAB_1005394f9:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        if ((*(byte *)(param_1 + lVar2) & *(byte *)(param_2 + lVar2)) != 0) {
          uVar4 = 1;
          goto LAB_1005394bb;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x20);
      uVar4 = 0;
      goto LAB_1005394bb;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "testBitFields != __null";
      goto LAB_1005394f9;
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1005394bb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

