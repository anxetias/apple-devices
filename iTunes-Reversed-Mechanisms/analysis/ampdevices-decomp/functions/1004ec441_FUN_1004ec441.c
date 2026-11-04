// name: FUN_1004ec441
// address: 1004ec441

uint FUN_1004ec441(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 local_b8;
  char *local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  undefined2 local_52;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100167ab3(param_2,PTR_cf_DRMUserID_10083db28,&local_70);
  if (cVar2 != '\0') {
    FUN_100167ab3(param_2,PTR_cf_DRMFamilyID_10083db30,&local_a8);
    if ((*(char *)(param_1 + 0x3a9) == '\0') && (uVar3 = 0x36, local_a8 != 0)) goto LAB_1004ec76a;
    cVar2 = FUN_100167ab3(param_2,PTR_cf_DRMKeyID_10083db38,&local_a0);
    if ((cVar2 == '\0') ||
       (cVar2 = FUN_100167740(param_2,PTR_cf_DRMVersions_10083db40,&local_8c), cVar2 == '\0')) {
      iVar5 = FUN_1002d7c95(param_1,local_70);
      uVar3 = 0x12;
      if (iVar5 != 0) goto LAB_1004ec76a;
      cVar2 = FUN_1002d8000(param_1,local_70,0,0x1010100,param_3);
      if (cVar2 == '\0') {
        uVar3 = 9;
        goto LAB_1004ec76a;
      }
    }
    else {
      FUN_100167ab3(param_2,PTR_cf_DRMDownloaderUserID_10083db48,&local_b8);
      uVar3 = FUN_1002d813d(param_1,local_70,local_b8,local_a0,local_a8,local_8c,0x20000,param_3);
      uVar4 = uVar3;
      if ((uVar3 & 0x3e) == 0x12) {
        cVar2 = FUN_1002d9f23(param_1,local_70,local_a0);
        if (cVar2 == '\0') goto LAB_1004ec76a;
        uVar4 = FUN_1002d7c95(param_1,local_70);
      }
      if (uVar4 != 0) goto LAB_1004ec76a;
    }
  }
  cVar2 = FUN_10020af68(param_2,param_1 + 0x66,*(undefined2 *)(param_1 + 100));
  if (cVar2 == '\0') {
    uVar3 = 0x27;
    goto LAB_1004ec76a;
  }
  if ((0x2ff < *(ushort *)(param_1 + 100)) &&
     (lVar6 = FUN_100171475(param_2,PTR_cf_RequiredDeviceCapabilities_10083db58), lVar6 != 0)) {
    local_78 = 0;
    local_40 = &cf_CFBundleIdentifier;
    local_48 = FUN_100166c1b(param_2,PTR_cf_Identifier_10083db50);
    local_98 = FUN_1001713ff(DAT_1008c4d90,&local_40,&local_48,1,
                             PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                             PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (local_98 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure";
        local_5c = 0x822;
        local_5a = "optionsDict != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
    }
    lVar8 = local_98;
    lVar6 = FUN_100172752(DAT_1008c4d90,lVar6,0);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure";
        local_5c = 0x822;
        local_5a = "requiredCapabilities != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar5 = FUN_1005c38a1(*(undefined8 *)(param_1 + 0x7168),lVar6,lVar8,&local_78);
    uVar3 = 0x26;
    if (iVar5 == 0) {
      lVar8 = FUN_100171475(local_78,&cf_AppBlacklisted);
      if (lVar8 == *(long *)PTR__kCFBooleanTrue_10082e038) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        local_88 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        bVar1 = true;
        uVar3 = 0x34;
        if (cVar2 != '\0') {
          local_80 = (char *)FUN_100166c1b(param_2,PTR_cf_Identifier_10083db50);
          local_5a = (char *)FUN_100166c1b(param_2,PTR_cf_Name_10083db60);
          local_68 = 0x8420202;
          pcVar9 = "apps> application \"%{public}@\" (\"%{public}@\") is blacklisted";
          uVar7 = 0x16;
LAB_1004ec91d:
          local_5c = 0x842;
          bVar1 = true;
          local_64 = local_80;
          __os_log_impl(0x100000000,local_88,1,pcVar9,&local_68,uVar7);
        }
      }
      else {
        lVar8 = FUN_100171475(local_78,&cf_CapabilitiesMatch);
        if (lVar8 != *(long *)PTR__kCFBooleanFalse_10082e030) goto LAB_1004ec6f3;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        local_88 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        bVar1 = true;
        if (cVar2 != '\0') {
          local_80 = (char *)FUN_100166c1b(param_2,PTR_cf_Identifier_10083db50);
          local_b0 = (char *)FUN_100166c1b(param_2,PTR_cf_Name_10083db60);
          local_50 = FUN_100171475(local_78,&cf_MismatchedCapabilities);
          local_68 = 0x8420302;
          local_5a = local_b0;
          local_52 = 0x842;
          pcVar9 = 
          "apps> application \"%{public}@\" (\"%{public}@\") has mismatched capabilities %{public}@"
          ;
          uVar7 = 0x20;
          goto LAB_1004ec91d;
        }
      }
    }
    else {
LAB_1004ec6f3:
      bVar1 = false;
    }
    FUN_10017060f(lVar6);
    FUN_10017060f(local_98);
    FUN_10017060f(local_78);
    if (bVar1) goto LAB_1004ec76a;
  }
  cVar2 = FUN_10020ad61(param_2,*(undefined4 *)(param_1 + 0x66b0),*(undefined4 *)(param_1 + 0x284),
                        *(undefined2 *)(param_1 + 100));
  if (cVar2 == '\0') {
    uVar3 = 0x26;
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x381) == '\0') {
      cVar2 = FUN_10020b028(param_2);
      uVar3 = 0x3f;
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
    }
  }
LAB_1004ec76a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

