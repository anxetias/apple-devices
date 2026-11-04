// name: FUN_1001c2ee4
// address: 1001c2ee4

undefined8 FUN_1001c2ee4(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 local_64;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    param_1 = _CFBundleGetMainBundle();
    if (DAT_1008a2208 != 0) goto LAB_1001c2f36;
    uVar7 = FUN_100174c5a();
    lVar2 = FUN_100174d30(uVar7,&cf_LocalizableStringsMap_plist,0,0);
  }
  else {
    if (DAT_1008a2208 != 0) {
LAB_1001c2f36:
      uVar7 = 0;
      goto LAB_1001c32dc;
    }
    lVar2 = FUN_100165b4f(param_1,&cf_LocalizableStringsMap_plist,0,0);
  }
  if (lVar2 == 0) {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    uVar7 = 0xffffffd5;
    if (cVar1 != '\0') {
      FUN_1006a6c7d(uVar8);
    }
LAB_1001c31f1:
    FUN_1001782e9(0,0);
    FUN_10017060f(lVar2);
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      FUN_1006a6cf3(uVar7,uVar8);
    }
    lVar2 = 0;
    pvVar5 = (void *)0x0;
    pvVar6 = (void *)0x0;
  }
  else {
    lVar3 = FUN_10016a42c(DAT_1008c4d90,lVar2,0,0);
    if (lVar3 == 0) {
      uVar8 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar8,0x10);
      uVar7 = 0xffffff94;
      if (cVar1 != '\0') {
        FUN_1006a6c07(uVar8);
      }
      goto LAB_1001c31f1;
    }
    FUN_10017060f(lVar2);
    local_60 = lVar3;
    uVar4 = FUN_100171426(lVar3);
    uVar9 = -(ulong)(uVar4 >> 0x3d != 0) | uVar4 * 8;
    pvVar5 = operator_new__(uVar9,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar5 == (void *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        FUN_1006a6b91(uVar7);
      }
      pvVar5 = (void *)0x0;
      FUN_1001782e9(0,0);
      pvVar6 = (void *)0x0;
LAB_1001c32af:
      uVar7 = 0xffffff94;
      lVar2 = local_60;
    }
    else {
      pvVar6 = operator_new__(uVar9,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar6 == (void *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          FUN_1006a6b1b(uVar7);
        }
        pvVar6 = (void *)0x0;
LAB_1001c32a0:
        FUN_1001782e9(0,0);
        goto LAB_1001c32af;
      }
      FUN_1001714b1(local_60,pvVar5,pvVar6);
      lVar2 = FUN_100171409(DAT_1008c4d90,uVar4,0,PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (lVar2 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          FUN_1006a6aa5(uVar7);
        }
        goto LAB_1001c32a0;
      }
      if (0 < (long)uVar4) {
        uVar9 = 0;
        do {
          cVar1 = FUN_1001694dc(*(undefined8 *)((long)pvVar6 + uVar9 * 8),&local_64);
          if (cVar1 == '\0') {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              local_4a = "JRCFNumberGetUInt32(numericKeys[index], &numericKey)";
LAB_1001c3137:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
LAB_1001c3160:
            FUN_1001782e9(0,0);
          }
          else {
            lVar3 = *(long *)((long)pvVar5 + uVar9 * 8);
            if (lVar3 == 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                local_4a = "stringKeys[index] != nullptr";
                goto LAB_1001c3137;
              }
              goto LAB_1001c3160;
            }
            lVar3 = FUN_100174d74(param_1,lVar3,0,&cf_Localizable);
            if (lVar3 == 0) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                local_4a = "localizedString != nullptr";
                goto LAB_1001c3137;
              }
              goto LAB_1001c3160;
            }
            _CFDictionaryAddValue(lVar2,local_64,lVar3);
            _CFRelease(lVar3);
          }
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar9);
      }
      uVar7 = 0;
      DAT_1008a2208 = lVar2;
      FUN_1001c0fbe(FUN_1001c2ec7,0,0,0,0);
      lVar2 = local_60;
    }
  }
  FUN_10017060f(0);
  FUN_10017060f(lVar2);
  if (pvVar5 != (void *)0x0) {
    operator_delete__(pvVar5);
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete__(pvVar6);
  }
LAB_1001c32dc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

