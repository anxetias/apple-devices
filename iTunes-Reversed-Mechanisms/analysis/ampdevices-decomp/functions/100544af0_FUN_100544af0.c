// name: FUN_100544af0
// address: 100544af0

undefined8 FUN_100544af0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 local_290 [20];
  int local_27c;
  undefined1 local_278 [16];
  long local_268;
  long local_260;
  undefined1 local_258 [16];
  long local_248;
  long local_240;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  undefined1 local_220 [16];
  undefined1 local_210 [32];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [50];
  undefined2 local_19e;
  undefined1 local_150 [32];
  undefined4 local_130;
  undefined1 local_12a;
  undefined1 local_128;
  undefined1 local_11e;
  long local_108;
  long local_100;
  undefined2 local_f8;
  short local_56;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_1004de449();
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0;
    goto LAB_1005451a1;
  }
  local_248 = FUN_100503780(lVar5 + 0x106,param_2,1);
  local_240 = lVar5;
  if (*(int *)(lVar5 + 8) == 0x64756c63) {
LAB_100544b8d:
    if (local_248 == 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x822;
        local_22a = "backupList != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100545193;
    }
    cVar2 = FUN_1005c43fa(*(undefined8 *)(local_240 + 0x7168));
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(local_240 + 0x66b0);
      FUN_1004f0e83(local_240,&local_238);
      FUN_1001b8dfc(local_258,&local_238);
      FUN_1004fda52(&local_238,*(undefined4 *)(local_240 + 0x28));
      FUN_1005462f1(uVar1,local_258,&local_238);
      FUN_1001b7a50(&local_238);
      FUN_1001b7a50(local_258);
      goto LAB_100545193;
    }
    lVar5 = FUN_10017076e(local_248);
    if (lVar5 < 1) goto LAB_100545193;
    iVar4 = FUN_1004fe690(local_240,local_248);
    local_27c = 1;
    if (1 < (short)(iVar4 + 1)) {
      local_27c = iVar4 + 1;
    }
    local_268 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (local_268 == 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_22a = "backupNameArray != nullptr";
LAB_1005453d2:
        local_22c = 0x822;
        local_234 = "Assertion failure";
        local_238 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
LAB_1005452d2:
      FUN_1001782e9(0,0);
      uVar6 = 0;
      local_260 = 0;
    }
    else {
      local_260 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
      if (local_260 == 0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_22a = "backupInfoArray != nullptr";
          goto LAB_1005453d2;
        }
        goto LAB_1005452d2;
      }
      lVar13 = 0;
      do {
        lVar7 = FUN_10016499b(local_248,lVar13);
        if (lVar7 != 0) {
          lVar8 = FUN_100166c1b(lVar7,&cf_DisplayName);
          if (lVar8 != 0) {
            FUN_1001b7a44(&local_238);
            lVar7 = FUN_100166a07(lVar7,&cf_LastBackupDate);
            if (lVar7 == 0) {
              FUN_1001c334a(local_258,0x10d30002);
              FUN_1001b80b2(&local_238,local_258);
            }
            else {
              FUN_1001e2384(local_258,lVar7,0x16);
              FUN_1001b80b2(&local_238,local_258);
            }
            FUN_1001b7a50(local_258);
            FUN_1001c334a(local_278,0x10cf0035);
            FUN_1001bbec4(local_258,local_278,&local_238);
            FUN_1001b7a50(local_278);
            FUN_1001709a5(local_268,lVar8);
            FUN_100165883(local_260,local_258);
            FUN_1001b7a50(local_258);
            FUN_1001b7a50(&local_238);
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      while( true ) {
        uVar1 = *(undefined4 *)(local_240 + 0x66b0);
        FUN_1005d4cc2(&local_238);
        FUN_1001c334a(local_258,0x10cf0025);
        FUN_1001b80b2(local_220,local_258);
        FUN_1001b7a50(local_258);
        uVar6 = FUN_100416f20(uVar1,0x10cc0210);
        FUN_1001b81f2(local_210,uVar6);
        FUN_1001c334a(local_258,0x10cf0011);
        FUN_1001b80b2(local_1e0,local_258);
        FUN_1001b7a50(local_258);
        FUN_1001c334a(local_258,0x5db30004);
        FUN_1001b80b2(local_1d0,local_258);
        FUN_1001b7a50(local_258);
        uVar6 = FUN_100416f20(uVar1,0x10cc0211);
        FUN_1001b81f2(local_150,uVar6);
        local_130 = 0x20002;
        local_12a = 1;
        local_128 = 1;
        local_11e = 1;
        local_108 = local_268;
        local_100 = local_260;
        local_f8 = (undefined2)local_27c;
        sVar3 = FUN_1005d5016(&local_238);
        lVar5 = (long)local_56;
        FUN_10021811e(&local_238);
        if (sVar3 != 1) break;
        uVar6 = FUN_10016499b(local_248,lVar5 + -1);
        lVar5 = FUN_100503fca(local_240,local_248,lVar5 + -1);
        if (-1 < lVar5) {
          uVar9 = FUN_10016499b(local_248,lVar5);
          uVar1 = *(undefined4 *)(local_240 + 0x66b0);
          uVar10 = FUN_100166a07(uVar9,&cf_LastBackupDate);
          FUN_1001e2384(local_258,uVar10,2);
          FUN_100166f9c(local_278,uVar6,&cf_DeviceName);
          FUN_10044eef2(&local_238);
          cVar2 = FUN_1001b8428(local_278);
          if (cVar2 != '\0') {
            FUN_100166f9c(local_290,uVar6,&cf_DisplayName);
            FUN_1001b80b2(local_278,local_290);
            FUN_1001b7a50(local_290);
          }
          uVar10 = FUN_100416f20(uVar1,0x10cc028d);
          uVar11 = FUN_1001b8336(local_258);
          uVar12 = FUN_1001b8336(local_278);
          FUN_1001bbc1c(local_290,uVar10,uVar11,uVar12);
          FUN_1001b80b2(local_210,local_290);
          FUN_1001b7a50(local_290);
          FUN_1001c334a(local_290,0x10cf0038);
          FUN_1001b80b2(local_1f0,local_290);
          FUN_1001b7a50(local_290);
          FUN_1001c334a(local_290,0x10cf0037);
          FUN_1001b80b2(local_1e0,local_290);
          FUN_1001b7a50(local_290);
          local_19e = 1;
          sVar3 = FUN_10044f1a0(&local_238);
          FUN_10020dfaa(&local_238);
          FUN_1001b7a50(local_278);
          FUN_1001b7a50(local_258);
          if (sVar3 == 1) {
            uVar6 = uVar9;
          }
        }
        uVar6 = FUN_1001705fc(uVar6);
        uVar9 = FUN_100171475(uVar6,&cf_RestoreCompatibility);
        cVar2 = FUN_100170633(uVar9,&cf_ApplicationDataOnlyCompatible);
        if (cVar2 == '\0') goto LAB_1005452e8;
        cVar2 = FUN_1005454d0(*(undefined4 *)(local_240 + 0x66b0));
        if (cVar2 != '\0') goto LAB_1005452e8;
        FUN_10017060f(uVar6);
      }
      uVar6 = 0;
    }
LAB_1005452e8:
    FUN_10017060f(local_268);
    FUN_10017060f(local_260);
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure (expected to be true)";
      local_22c = 0x822;
      local_22a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 != '\0') goto LAB_100544b8d;
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100545193:
    uVar6 = 0;
  }
  FUN_10017060f(local_248);
LAB_1005451a1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

