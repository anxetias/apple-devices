// name: FUN_1002a75ab
// address: 1002a75ab

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1002a75ab(undefined8 param_1,double *param_2,byte param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  double local_78;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = _CFCharacterSetCreateWithCharactersInString(DAT_1008c4d90,&cf___);
  uVar3 = FUN_10029b7a2(param_1,uVar2,1);
  FUN_1002a7d90(uVar2);
  lVar4 = FUN_1001737f8(uVar3);
  if (lVar4 != 1) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRCFStringGetLength(signString) == 1";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    uVar5 = 0;
    goto LAB_1002a7b22;
  }
  uVar2 = _CFCharacterSetGetPredefined(4);
  uVar2 = FUN_10029b7a2(param_1,uVar2,1);
  uVar5 = FUN_1001737f8(uVar2);
  if (uVar5 < 8) {
    local_78 = 0.0;
    uVar9 = (ulong)param_3;
    dVar10 = DAT_100700458;
    if ((0xcUL >> (uVar5 & 0x3f) & 1) == 0) {
      if ((0x30UL >> (uVar5 & 0x3f) & 1) == 0) {
        if ((0xc0UL >> (uVar5 & 0x3f) & 1) == 0) goto LAB_1002a796c;
        if (uVar5 == (uVar9 ^ 7)) {
          lVar4 = FUN_100173623(DAT_1008c4d90,uVar2,uVar9 ^ 5,2);
          if (lVar4 != 0) {
            dVar10 = (double)FUN_100174119(lVar4);
            local_78 = (dVar10 / DAT_10070e580) / DAT_10070e580 + 0.0;
            FUN_10017060f(lVar4);
            uVar5 = uVar5 - 2;
            dVar10 = DAT_100711ee8;
            goto LAB_1002a7714;
          }
          uVar6 = FUN_1001cc310();
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "secondsString != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          FUN_1001782e9(0,0);
        }
        else {
          uVar6 = FUN_1001cc310();
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "(isLatitude == false && integralComponentsStringLength == 7) || (isLatitude && integralComponentsStringLength == 6)"
            ;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          FUN_1001782e9(0,0);
        }
      }
      else {
LAB_1002a7714:
        if (uVar5 == (uVar9 ^ 5)) {
          lVar4 = FUN_100173623(DAT_1008c4d90,uVar2,uVar9 ^ 3,2);
          if (lVar4 != 0) {
            dVar10 = dVar10 / DAT_10070e580;
            dVar11 = (double)FUN_100174119(lVar4);
            local_78 = local_78 + dVar11 / DAT_10070e580;
            FUN_10017060f(lVar4);
            uVar5 = (uVar9 ^ 5) - 2;
            goto LAB_1002a77ad;
          }
          uVar6 = FUN_1001cc310();
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "minutesString != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          FUN_1001782e9(0,0);
        }
        else {
          uVar6 = FUN_1001cc310();
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "(isLatitude == false && integralComponentsStringLength == 5) || (isLatitude && integralComponentsStringLength == 4)"
            ;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          FUN_1001782e9(0,0);
        }
      }
      goto LAB_1002a7b09;
    }
LAB_1002a77ad:
    if (uVar5 != (uVar9 ^ 3)) {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "(isLatitude == false && integralComponentsStringLength == 3) || (isLatitude && integralComponentsStringLength == 2)"
        ;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      FUN_1001782e9(0,0);
      goto LAB_1002a7b09;
    }
    lVar4 = FUN_100173623(DAT_1008c4d90,uVar2,0,uVar9 ^ 3);
    if (lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "degreesString != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      FUN_1001782e9(0,0);
      goto LAB_1002a7b09;
    }
    dVar11 = (double)FUN_100174119(lVar4);
    FUN_10017060f(lVar4);
    pcVar8 = &cf___C_;
    if (param_3 != 0) {
      pcVar8 = &cf___;
    }
    uVar6 = _CFCharacterSetCreateWithCharactersInString(DAT_1008c4d90,pcVar8);
    lVar4 = FUN_10029b7a2(param_1,uVar6,0);
    local_78 = local_78 + dVar11;
    FUN_1002a7d90(uVar6);
    if ((lVar4 != 0) && (lVar7 = _CFStringGetLength(lVar4), 0 < lVar7)) {
      dVar11 = (double)FUN_100174119(lVar4);
      local_78 = local_78 + dVar11 * dVar10;
    }
    cVar1 = FUN_100169ddb(uVar3,"-");
    if (cVar1 != '\0') {
      local_78 = (double)((ulong)local_78 ^ _DAT_100700b30);
    }
    *param_2 = local_78;
    uVar5 = CONCAT71((int7)((ulong)uVar6 >> 8),1);
  }
  else {
LAB_1002a796c:
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "false";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
LAB_1002a7b09:
    lVar4 = 0;
    uVar5 = 0;
  }
  FUN_10017060f(lVar4);
  FUN_10017060f(uVar2);
LAB_1002a7b22:
  FUN_10017060f(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5 & 0xffffffff;
}

