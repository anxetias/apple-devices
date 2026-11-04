// name: FUN_100496791
// address: 100496791

void FUN_100496791(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    for (lVar2 = FUN_100496019(param_1); lVar2 != 0; lVar2 = FUN_1004960d0(lVar2)) {
      *(undefined4 *)(lVar2 + 0xa0) = 0;
      *(undefined1 *)(lVar2 + 0x83) = 0;
      for (lVar3 = FUN_1004968c5(lVar2); lVar3 != 0; lVar3 = FUN_100496985(lVar3)) {
        *(undefined4 *)(lVar3 + 0x480) = 0;
        *(undefined1 *)(lVar3 + 0x50) = 0;
      }
    }
    for (lVar2 = FUN_100496392(param_1); lVar2 != 0; lVar2 = FUN_100496449(lVar2)) {
      *(undefined4 *)(lVar2 + 0xb8) = 0;
      *(undefined1 *)(lVar2 + 0xc5) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

