// name: FUN_1005f4b1c
// address: 1005f4b1c

long FUN_1005f4b1c(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 local_480;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  lVar3 = DAT_1008c76a0;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c76a0 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "gAppContext != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    lVar8 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1005f4c83;
  }
  if (param_1 == 0x69427269) {
    pcVar6 = "iBridgeRestore_VersionCheck.plist";
    lVar7 = 0x1a80;
  }
  else if (param_1 == 0x4d616320) {
    pcVar6 = "MacRestore_VersionCheck.plist";
    lVar7 = 0x1a70;
  }
  else {
    pcVar6 = "VersionCheck.plist";
    lVar7 = 0x1a60;
  }
  if (*(long *)(DAT_1008c76a0 + lVar7) != 0) {
    lVar3 = FUN_1001705fc();
    return lVar3;
  }
  local_480 = 0;
  iVar2 = FUN_1003870d4(0x10,1,&local_458);
  if (iVar2 == -0x80) {
LAB_1005f4c2b:
    lVar8 = 0;
  }
  else {
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_478 = 0x8220202;
        local_474 = "Assertion failure";
        local_46c = 0x400;
        local_46a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
      if (iVar2 != 0) goto LAB_1005f4c2b;
    }
    lVar5 = FUN_10016aa8e(0,&local_458,pcVar6,0,&local_480);
    FUN_10016925a(local_480);
    FUN_10017060f(local_480);
    lVar8 = 0;
    if (lVar5 != 0) {
      uVar4 = FUN_1001705fc(lVar5);
      FUN_10017060f(*(undefined8 *)(lVar3 + lVar7));
      *(undefined8 *)(lVar3 + lVar7) = uVar4;
      lVar8 = lVar5;
    }
  }
LAB_1005f4c83:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}

