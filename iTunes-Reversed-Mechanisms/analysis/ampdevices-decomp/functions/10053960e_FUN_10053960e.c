// name: FUN_10053960e
// address: 10053960e

undefined1 FUN_10053960e(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  char local_48 [4];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_48,"\x02\x02\"\b",4);
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "bitFields != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_100538877(local_48,param_1);
  FUN_100538d96(local_48,param_2);
  lVar4 = 0;
  do {
    if (local_48[lVar4] != '\0') {
      uVar2 = 1;
      goto LAB_100539688;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x20);
  uVar2 = 0;
LAB_100539688:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

