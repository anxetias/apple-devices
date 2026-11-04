// name: FUN_1001fd053
// address: 1001fd053

long FUN_1001fd053(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char local_d18 [80];
  undefined1 local_cc8 [16];
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  long local_ca0;
  undefined1 local_c98 [512];
  undefined4 local_a98;
  undefined8 local_a94;
  undefined2 local_a8c;
  undefined4 local_a8a;
  undefined1 local_a78 [512];
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  char *local_86a;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined6 local_448;
  undefined2 uStack_442;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      uStack_454 = 0x7a0a90;
      local_450 = 1;
      uStack_44c = 0x822;
      uStack_44a = 0x3244;
      local_448 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1001fd784;
  }
  FUN_10016843e(lVar3,&cf_ProductType,param_1 + 0x106,0);
  FUN_10016843e(lVar3,&cf_ProductVersion,param_1 + 0x66,0);
  FUN_100168550(lVar3,&cf_ProductName,param_1 + 0x288,0);
  FUN_10016843e(lVar3,&cf_BuildVersion,param_1 + 0xc6,0);
  FUN_10016843e(lVar3,&cf_SerialNumber,param_1 + 0x144,0);
  uVar4 = FUN_1001eb64b();
  local_458 = (undefined4)uVar4;
  uStack_454 = (undefined4)((ulong)uVar4 >> 0x20);
  FUN_100171502(lVar3,&cf_macOSVersion,uVar4);
  FUN_10016d588(&local_458);
  uVar4 = FUN_1001eb66f();
  local_458 = (undefined4)uVar4;
  uStack_454 = (undefined4)((ulong)uVar4 >> 0x20);
  FUN_100171502(lVar3,&cf_macOSBuildVersion,uVar4);
  FUN_10016d588(&local_458);
  FUN_10016843e(lVar3,&cf_PhoneNumber,param_1 + 0x6210,0);
  FUN_10016843e(lVar3,&cf_IMEI,param_1 + 0x6230,0);
  FUN_10016843e(lVar3,&cf_ICCID,param_1 + 0x6250,0);
  FUN_10016843e(lVar3,&cf_MEID,param_1 + 0x6290,0);
  FUN_10016843e(lVar3,&cf_PhoneNumber2,param_1 + 0x62b0,0);
  FUN_10016843e(lVar3,&cf_IMEI2,param_1 + 0x62d0,0);
  FUN_10016843e(lVar3,&cf_ICCID2,param_1 + 0x62f0,0);
  FUN_10016843e(lVar3,&cf_UniqueIdentifier,param_1 + 0x244,0);
  FUN_1001ea62b(local_cc8);
  FUN_100168878(lVar3,&cf_GUID,local_cc8,0x10);
  FUN_1004f0e83(param_1,local_c98);
  FUN_100168550(lVar3,&cf_DisplayName,local_c98,0);
  FUN_100168550(lVar3,&cf_DeviceName,local_c98,0);
  local_ca0 = 0;
  if (param_1 == 0) {
LAB_1001fd3c7:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      uStack_454 = 0x7a0a90;
      local_450 = 1;
      uStack_44c = 0x822;
      uStack_44a = 0xd2b2;
      local_448 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        uStack_454 = 0x7ab58c;
        local_450 = 1;
        uStack_44c = 0x822;
        uStack_44a = 0xd710;
        local_448 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1001fd3c7;
    }
    iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x6974756e,0,&local_458
                         );
    if (iVar2 == -0x80) {
LAB_1001fd461:
      uVar4 = 0;
    }
    else {
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_86a = (char *)CONCAT44(local_86a._4_4_,iVar2);
LAB_1001fdaff:
          local_86c = 0x400;
          local_874 = "Assertion failure";
          local_878 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_878,0x12);
        }
        goto LAB_1001fd461;
      }
      iVar2 = FUN_1001879bd(&local_458,0,&local_ca0);
      if (iVar2 == -0x80) goto LAB_1001fd461;
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_86a = (char *)CONCAT44(local_86a._4_4_,iVar2);
          goto LAB_1001fdaff;
        }
        goto LAB_1001fd461;
      }
      local_cb0 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      iVar2 = FUN_100187bea(local_ca0,&local_878,local_d18,local_a78);
      uVar4 = local_cb0;
      if (iVar2 == 0) {
LAB_1001fd8f8:
        if (local_d18[0] == '\0') {
          lVar7 = 0;
          do {
            cVar1 = FUN_1001e4e7c((long)&DAT_100712590 +
                                  (long)*(int *)((long)&DAT_100712590 + lVar7),local_a78,1);
            if (cVar1 != '\0') goto LAB_1001fd958;
            lVar7 = lVar7 + 4;
          } while (lVar7 != 0x50);
          lVar7 = 0;
          do {
            cVar1 = FUN_1001e4e7c(*(undefined8 *)((long)&PTR_s_IC_Info_sidb_10083d4f0 + lVar7),
                                  local_a78,1);
            if (cVar1 != '\0') goto LAB_1001fd958;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0x28);
        }
        goto LAB_1001fda3a;
      }
    }
LAB_1001fd463:
    if (local_ca0 != 0) {
      FUN_100187c42();
    }
  }
  FUN_100171502(lVar3,&cf_iTunesFiles);
  FUN_10017060f(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x7168);
  uVar5 = _CFDictionaryGetTypeID();
  uVar4 = FUN_1005ba383(uVar4,&cf_com_apple_iTunes,0,uVar5,0);
  FUN_100171502(lVar3,&cf_iTunesSettings,uVar4);
  FUN_10017060f(uVar4);
  uVar4 = FUN_1001fcbda(param_1);
  FUN_100171502(lVar3,&cf_SyncSettings,uVar4);
  FUN_10017060f(uVar4);
  uVar5 = FUN_1005056bf(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x7168);
  uVar6 = FUN_1001705fc(uVar4);
  local_458 = (undefined4)uVar6;
  uStack_454 = (undefined4)((ulong)uVar6 >> 0x20);
  lVar7 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  local_448 = (undefined6)lVar7;
  uStack_442 = (undefined2)((ulong)lVar7 >> 0x30);
  if (lVar7 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_878 = 0x8220202;
      local_874 = "Assertion failure";
      local_86c = 0x822;
      local_86a = "context.applicationsBackupDict != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_878,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = FUN_1005c3d08(uVar4,&local_450);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_878 = 0x8220202;
      local_874 = "Assertion failure";
      local_86c = 0x400;
      local_86a = (char *)CONCAT44(local_86a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_878,0x12);
    }
  }
  FUN_1001714c2(uVar5,FUN_1002031ee,&local_458);
  FUN_10017060f(CONCAT26(uStack_44a,CONCAT24(uStack_44c,local_450)));
  FUN_10017060f(CONCAT44(uStack_454,local_458));
  uVar4 = CONCAT26(uStack_442,local_448);
  uVar6 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  FUN_1001714c2(uVar5,FUN_10020352f,uVar6);
  FUN_100171502(lVar3,&cf_InstalledApplications,uVar6);
  FUN_100171502(lVar3,&cf_Applications,uVar4);
  FUN_10017060f(uVar6);
  FUN_10017060f(uVar4);
  FUN_10017060f(uVar5);
  if ((*(char *)(param_1 + 0x39c) != '\0') &&
     (iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x626f6f6b,0,
                            &local_458), iVar2 == 0)) {
    iVar2 = FUN_1001888ba(&local_458,"iBooksData.plist",&local_878,0);
    if (iVar2 == 0) {
      uVar4 = FUN_100165eef(DAT_1008c4d90,&local_878,0,0);
      FUN_100171502(lVar3,&cf_iBooksData,uVar4);
      FUN_10017060f(uVar4);
    }
    iVar2 = FUN_1001888ba(&local_458,"iBooksData2.plist",&local_878,0);
    if (iVar2 == 0) {
      uVar4 = FUN_100165eef(DAT_1008c4d90,&local_878,0,0);
      FUN_100171502(lVar3,&cf_iBooksData2,uVar4);
      FUN_10017060f(uVar4);
    }
    iVar2 = FUN_1001888ba(&local_458,"iBooksData3.plist",&local_878,0);
    if (iVar2 == 0) {
      uVar4 = FUN_100165eef(DAT_1008c4d90,&local_878,0,0);
      FUN_100171502(lVar3,&cf_iBooksData3,uVar4);
      FUN_10017060f(uVar4);
    }
  }
LAB_1001fd784:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
LAB_1001fd958:
  uVar4 = FUN_1001658f1(DAT_1008c4d90,local_a78);
  local_ca8 = FUN_100165eef(DAT_1008c4d90,&local_878,0,0);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  local_cb8 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_a8a = FUN_100170ef7(local_ca8);
    local_a98 = 0x8420202;
    local_a8c = 0x400;
    local_a94 = uVar4;
    __os_log_impl(0x100000000,local_cb8,1,"backup> backing up \"%{public}@\", size = %d",&local_a98,
                  0x12);
  }
  FUN_1001714de(local_cb0,uVar4,local_ca8);
  FUN_10017060f(uVar4);
  FUN_10017060f(local_ca8);
LAB_1001fda3a:
  iVar2 = FUN_100187bea(local_ca0,&local_878,local_d18);
  uVar4 = local_cb0;
  if (iVar2 != 0) goto LAB_1001fd463;
  goto LAB_1001fd8f8;
}

