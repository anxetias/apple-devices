// name: FUN_1003d1c21
// address: 1003d1c21

void FUN_1003d1c21(undefined8 param_1,char param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
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
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    for (lVar2 = FUN_100496019(param_1); lVar2 != 0; lVar2 = FUN_1004960d0(lVar2)) {
      *(undefined4 *)(lVar2 + 0xa4) = 0;
    }
    if (param_2 == '\0') {
      for (lVar2 = FUN_100496392(param_1); lVar2 != 0; lVar2 = FUN_100496449(lVar2)) {
        *(undefined4 *)(lVar2 + 0xbc) = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

