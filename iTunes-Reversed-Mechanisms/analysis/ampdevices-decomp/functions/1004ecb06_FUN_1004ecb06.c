// name: FUN_1004ecb06
// address: 1004ecb06

undefined8 FUN_1004ecb06(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100166c1b(param_2,PTR_cf_Identifier_10083db50);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "appIdentifier != nullptr";
LAB_1004ecc23:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1004ecbc8:
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = FUN_1004ecc52(param_1,0);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "installedAppsDict != nullptr";
        goto LAB_1004ecc23;
      }
      goto LAB_1004ecbc8;
    }
    lVar2 = FUN_100166b7f(lVar3,lVar2);
    if (lVar2 != 0) {
      uVar4 = FUN_10020b285(param_2,lVar2);
      goto LAB_1004ecbd9;
    }
  }
  uVar4 = 1;
LAB_1004ecbd9:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

