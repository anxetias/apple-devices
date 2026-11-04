// name: FUN_100498b29
// address: 100498b29

long FUN_100498b29(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100495380();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITImageLibraryIsValid( imageLibrary )";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    for (lVar3 = FUN_100496019(param_1); lVar3 != 0; lVar3 = FUN_1004960d0(lVar3)) {
      if ((*(char *)(lVar3 + 0x4f) == (char)((ulong)param_3 >> 0x38)) &&
         (auVar1._8_8_ = param_3, auVar1._0_8_ = param_2,
         auVar1 == *(undefined1 (*) [16])(lVar3 + 0x40))) goto LAB_100498bc3;
    }
    lVar3 = 0;
  }
LAB_100498bc3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

