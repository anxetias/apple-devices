// name: FUN_10038f215
// address: 10038f215

int FUN_10038f215(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100495380();
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
LAB_10038f3e7:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      for (lVar4 = FUN_100495ce0(param_1); lVar4 != 0; lVar4 = FUN_100495d97(lVar4)) {
        lVar1 = lVar4 + 0x490;
        cVar2 = FUN_100161f0e(lVar1);
        if (cVar2 != '\0') {
          FUN_100160cb6(lVar1,*(undefined8 *)(lVar4 + 0x488));
          FUN_10016013b(lVar1);
          *(undefined8 *)(lVar4 + 0x488) = 0;
          FUN_1001c62d9(lVar4 + 0x68,0x420);
        }
      }
      iVar3 = FUN_10038bf26(param_1,param_2,param_3);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      goto LAB_10038f3a2;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "buffer != nullptr";
      goto LAB_10038f3e7;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10038f3a2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

