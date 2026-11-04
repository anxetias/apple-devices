// name: FUN_100495e46
// address: 100495e46

void FUN_100495e46(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001dcd18(param_1 + 0x70);
    FUN_1001dcd18(param_1 + 0xc0);
    lVar4 = 0x110;
    do {
      FUN_1001dcd18(param_1 + lVar4);
      lVar4 = lVar4 + 0x50;
    } while (lVar4 != 0x750);
    for (puVar2 = (undefined8 *)FUN_100495ce0(param_1); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      FUN_1001dcd18(puVar2 + 3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

