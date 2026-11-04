// name: FUN_100496dcc
// address: 100496dcc

void FUN_100496dcc(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "ITImageFormatInfoIsValid(formatInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    lVar1 = param_1 + 0x490;
    cVar3 = FUN_100161f0e(lVar1);
    if (cVar3 != '\0') {
      FUN_100160cb6(lVar1,*(undefined8 *)(param_1 + 0x488));
      FUN_10016013b(lVar1);
    }
    FUN_1001dcc15(param_1 + 0x18);
    FUN_1001c2502(lVar2 + 0x38,param_1);
    *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + -1;
    FUN_1001c5aec(*(undefined8 *)(lVar2 + 0x60),param_1);
    *(undefined1 *)(lVar2 + 4) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

