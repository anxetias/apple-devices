// name: FUN_1003cd0e6
// address: 1003cd0e6

undefined4 FUN_1003cd0e6(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = *(undefined8 *)(param_1 + 0x15de8);
  lVar1 = param_1 + 0x159c8;
  lVar8 = 0;
  do {
    iVar3 = FUN_1003cc9d2(lVar1,param_2,
                          *(undefined8 *)
                           ((long)&PTR_cf_relativeTrackPropertiesPath_100857730 + lVar8),local_478);
    if (iVar3 == 0) {
      iVar3 = FUN_100182d4d(local_478);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x18);
  lVar8 = FUN_100166844(uVar7,&cf_assetOrdering);
  if (lVar8 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "assetArray != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffff30;
    goto LAB_1003cd2dc;
  }
  if (param_3 < 0) {
LAB_1003cd213:
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "assetIndex >= 0 && assetIndex < JRCFArrayGetCount(assetArray)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar5 = FUN_10017076e(lVar8);
    if (lVar5 <= param_3) goto LAB_1003cd213;
  }
  FUN_100170bed(lVar8,param_3);
  lVar8 = FUN_10017076e(lVar8);
  if (lVar8 == 0) {
    uVar4 = FUN_100182d59(lVar1,1);
    FUN_1001c62d9(lVar1,0x420);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x15de8));
    *(undefined8 *)(param_1 + 0x15de8) = 0;
  }
  else {
    uVar4 = FUN_1003c7866(param_1,uVar7,lVar1);
  }
LAB_1003cd2dc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

