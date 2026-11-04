// name: FUN_10052cc36
// address: 10052cc36

undefined8 FUN_10052cc36(long param_1,long param_2,byte param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x598) == 0) {
    lVar2 = *(long *)(param_1 + 0x5a0);
    if (*(long *)(param_1 + 0x5a0) <= param_2) {
      lVar2 = param_2;
    }
    lVar4 = 0;
    if (0 < lVar2) {
      lVar4 = lVar2;
    }
    lVar2 = FUN_1001c63e1(lVar4);
    *(long *)(param_1 + 0x598) = lVar2;
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x5a8) = lVar4;
      *(long *)(param_1 + 0x5b0) = param_2;
      if (*(char *)(param_1 + 0x500) == '\x01') {
        *(undefined8 *)(param_1 + 0x508) = 0;
      }
      *(undefined8 *)(param_1 + 0x510) = 0;
      uVar3 = 0;
      goto LAB_10052cd83;
    }
LAB_10052cd5b:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mBuffer != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x5b0);
    uVar3 = 0;
    if (lVar2 == param_2) goto LAB_10052cd83;
    if (*(long *)(param_1 + 0x5a8) < param_2) {
      lVar2 = FUN_1001c6479(*(long *)(param_1 + 0x598),param_2);
      *(long *)(param_1 + 0x598) = lVar2;
      if (lVar2 == 0) goto LAB_10052cd5b;
      *(long *)(param_1 + 0x5a8) = param_2;
      lVar2 = *(long *)(param_1 + 0x5b0);
    }
    if ((param_2 <= lVar2 & (param_3 ^ 1)) == 0) {
      *(long *)(param_1 + 0x5b0) = param_2;
      lVar2 = param_2;
    }
    if (lVar2 < *(long *)(param_1 + 0x510)) {
      *(long *)(param_1 + 0x510) = lVar2;
    }
    if ((*(char *)(param_1 + 0x500) == '\x01') && (lVar2 < *(long *)(param_1 + 0x508))) {
      *(long *)(param_1 + 0x508) = lVar2;
      uVar3 = 0;
    }
  }
LAB_10052cd83:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

