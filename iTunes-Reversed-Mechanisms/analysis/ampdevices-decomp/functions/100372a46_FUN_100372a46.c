// name: FUN_100372a46
// address: 100372a46

undefined8 FUN_100372a46(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036d859();
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffdd;
    goto LAB_100372b80;
  }
  lVar4 = FUN_10036d2f1(lVar3,0);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "afcConnection != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xe8004017;
LAB_100372b55:
    lVar5 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = FUN_10036e72b(param_1);
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "path != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar2 = 0xe8004003;
      goto LAB_100372b55;
    }
    uVar6 = _AFCOperationCreateRemovePath(DAT_1008c4d90,lVar5,0);
    uVar2 = FUN_10036ed41(lVar4,uVar6);
  }
  FUN_10017060f(uVar6);
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar4);
  FUN_10036d4d2(lVar3);
  uVar6 = FUN_10036db97(uVar2);
LAB_100372b80:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

