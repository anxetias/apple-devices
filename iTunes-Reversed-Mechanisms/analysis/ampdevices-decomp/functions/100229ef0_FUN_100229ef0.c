// name: FUN_100229ef0
// address: 100229ef0

undefined8
FUN_100229ef0(void *param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulong uVar13;
  size_t sVar14;
  cfstringStruct *pcVar15;
  void *pvVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 local_210 [72];
  long local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined4 local_1b0 [2];
  undefined1 local_1a8 [8];
  void *local_1a0;
  long local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  undefined6 uStack_178;
  undefined1 local_118 [64];
  undefined4 local_d8;
  char *local_d4;
  undefined2 local_cc;
  char *local_ca;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 != '\0') goto LAB_10022a7a9;
  local_190 = param_5;
  FUN_1001e222d(param_3,local_118);
  cVar5 = FUN_1001e4e7c("ipsw",local_118,1);
  if (cVar5 == '\0') goto LAB_10022a7a9;
  local_1b0[0] = 0;
  FUN_1001c62d9(local_1a8,8);
  local_1a0 = param_1;
  lVar7 = FUN_10022117b(param_1,"Restore.plist",0);
  pcVar15 = &cf_ProductBuildVersion;
  if ((lVar7 == 0) && (lVar7 = FUN_10022117b(local_1a0,"BuildManifest.plist",0), lVar7 == 0)) {
    lVar7 = FUN_10022117b(local_1a0,"Info.plist",0);
    if (lVar7 != 0) {
      pcVar15 = &cf_TargetUpdate;
      goto LAB_100229fdb;
    }
    lVar7 = 0;
LAB_10022a07b:
    lVar10 = 0;
    bVar2 = false;
  }
  else {
LAB_100229fdb:
    lVar8 = FUN_100166c1b(lVar7,pcVar15);
    if (lVar8 == 0) {
      uVar11 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar11,0x10);
      if (cVar5 != '\0') {
        pcVar12 = "buildVersionString != nullptr";
        goto LAB_10022a7f5;
      }
LAB_10022a06f:
      FUN_1001782e9(0,0);
      goto LAB_10022a07b;
    }
    lVar9 = FUN_100166844(lVar7,&cf_SupportedProductTypes);
    if (lVar9 == 0) {
      lVar9 = FUN_100166c1b(lVar7,&cf_ProductType);
      if (lVar9 == 0) {
        uVar11 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar11,0x10);
        if (cVar5 != '\0') {
          pcVar12 = "productTypeString != nullptr";
LAB_10022a7f5:
          uStack_17c = 0x822;
          local_180 = 1;
          uStack_184 = 0x7a0a90;
          local_188 = 0x8220202;
          uStack_17a = SUB82(pcVar12,0);
          uStack_178 = (undefined6)((ulong)pcVar12 >> 0x10);
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_188,0x16);
        }
      }
      else {
        lVar10 = FUN_100170720(DAT_1008c4d90,1,PTR__kCFTypeArrayCallBacks_10082e130);
        if (lVar10 != 0) {
          FUN_1001709a5(lVar10,lVar9);
          goto LAB_10022a011;
        }
        uVar11 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar11,0x10);
        if (cVar5 != '\0') {
          pcVar12 = "productTypeStringsArray != nullptr";
          goto LAB_10022a7f5;
        }
      }
      goto LAB_10022a06f;
    }
    lVar10 = FUN_1001705fc(lVar9);
LAB_10022a011:
    local_188 = 0x73766d64;
    uVar11 = FUN_1001705fc(lVar8);
    local_180 = (undefined4)uVar11;
    uStack_17c = (undefined2)((ulong)uVar11 >> 0x20);
    uStack_17a = (undefined2)((ulong)uVar11 >> 0x30);
    FUN_100249f2c(local_1b0);
    FUN_100249fca(&local_188);
    bVar2 = true;
  }
  FUN_10017060f(lVar7);
  if (bVar2) {
    bVar2 = true;
    for (lVar7 = 0; lVar8 = FUN_10017076e(lVar10), (bool)(lVar7 < lVar8 & bVar2); lVar7 = lVar7 + 1)
    {
      lVar8 = FUN_100164a01(lVar10,lVar7);
      if (lVar8 == 0) {
        uVar11 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar11,0x10);
        if (cVar5 != '\0') {
          local_188 = 0x8220202;
          uStack_184 = 0x7a0a90;
          local_180 = 1;
          uStack_17c = 0x822;
          uStack_17a = 0x1bfa;
          uStack_178 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_188,0x16);
        }
        bVar2 = true;
        FUN_1001782e9(0,0);
      }
      else {
        FUN_100249c30(&local_188);
        FUN_10024f22a(local_210);
        iVar6 = FUN_10024f023(*local_190,lVar8,&local_1b4);
        if ((iVar6 == 0) && (iVar6 = FUN_1005e70cb(local_1b4,&local_188), iVar6 != -0x80)) {
          if (iVar6 != 0) {
            uVar11 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar11,0x10);
            if (cVar5 != '\0') {
              local_88 = 0x8220202;
              local_84 = "Assertion failure";
              local_7c = 0x400;
              local_7a = iVar6;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x12);
            }
            goto LAB_10022a0f6;
          }
          cVar5 = FUN_10024d72a(*local_190,2,&local_188,0,1,0,local_210,0,0,0,0,0,0,0);
          if (((cVar5 == '\0') || (cVar5 = FUN_10024abfd(local_1b0,local_210), cVar5 != '\0')) ||
             (cVar5 = FUN_10024ab23(local_1b0,local_210), cVar5 != '\0')) goto LAB_10022a0f6;
          local_1c0 = *local_190;
          FUN_10024f22a(&local_88);
          local_198 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
          if (local_198 == 0) {
            uVar11 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar11,0x10);
            if (cVar5 != '\0') {
              local_ca = "supportedCurrentVersionsArray != nullptr";
LAB_10022a4f7:
              local_cc = 0x822;
              local_d4 = "Assertion failure";
              local_d8 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_d8);
            }
LAB_10022a526:
            bVar3 = true;
            FUN_1001782e9(0,0);
          }
          else {
            cVar5 = FUN_10024d72a(local_1c0,1,&local_188,0,1,0,&local_88,0,0,0,0,local_198,0,0);
            if (cVar5 == '\0') {
              uVar11 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar11,0x10);
              if (cVar5 != '\0') {
                local_ca = 
                "GetNewestKnownMobileDeviceSoftwareVersionForProductType(webUpdateDictionary, kDeviceSoftwareTypeUpdate, deviceUpdaterFamilyInfo, nullptr, true, kUseCurrentSupportedPayloadVersion, &unusedWebSoftwareBundleInfo, nullptr, nullptr, nullptr, 0, supportedCurrentVersionsArray)"
                ;
                goto LAB_10022a4f7;
              }
              goto LAB_10022a526;
            }
            lVar8 = FUN_10017076e(local_198);
            if (lVar8 < 1) {
              uVar11 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar11,0x10);
              if (cVar5 != '\0') {
                local_ca = "supportedCurrentVersionsArrayLength > 0";
                goto LAB_10022a4f7;
              }
              goto LAB_10022a526;
            }
            lVar9 = 0;
            local_1c8 = lVar8;
            do {
              FUN_10024f22a(&local_d8);
              uVar11 = FUN_100164a01(local_198,lVar9);
              cVar5 = FUN_10024d72a(local_1c0,1,&local_188,uVar11,1,0,&local_d8,0,0,0,0,0,0,0);
              if ((cVar5 != '\0') &&
                 ((cVar5 = FUN_10024abfd(local_1b0,&local_d8), cVar5 != '\0' ||
                  (cVar5 = FUN_10024ab23(local_1b0,&local_d8), cVar5 != '\0')))) {
                FUN_10024f3ba(&local_d8);
                bVar3 = true;
                goto LAB_10022a532;
              }
              FUN_10024f3ba(&local_d8);
              lVar9 = lVar9 + 1;
            } while (local_1c8 != lVar9);
            bVar3 = false;
          }
LAB_10022a532:
          FUN_10017060f(local_198);
          FUN_10024f3ba(&local_88);
          bVar2 = true;
          if (bVar3) goto LAB_10022a0f6;
        }
        else {
LAB_10022a0f6:
          bVar2 = false;
        }
        FUN_10024f3ba(local_210);
        FUN_100249ea6(&local_188);
      }
    }
    if (bVar2) {
      pvVar1 = (void *)local_190[2];
      if (pvVar1 < (void *)local_190[3]) {
        _memcpy(pvVar1,local_1a0,0x420);
        lVar7 = (long)pvVar1 + 0x420;
      }
      else {
        lVar7 = (long)pvVar1 - local_190[1] >> 5;
        uVar13 = lVar7 * 0xf83e0f83e0f83e1 + 1;
        if (0x3e0f83e0f83e0f < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_10022a8ca();
        }
        lVar8 = (long)local_190[3] - local_190[1] >> 5;
        uVar17 = lVar8 * 0x1f07c1f07c1f07c2;
        if (uVar13 < uVar17) {
          uVar13 = uVar17;
        }
        uVar17 = 0x3e0f83e0f83e0f;
        if ((ulong)(lVar8 * 0xf83e0f83e0f83e1) < 0x1f07c1f07c1f07) {
          uVar17 = uVar13;
        }
        if (uVar17 == 0) {
          auVar18 = ZEXT816(0);
        }
        else {
          auVar18 = FUN_10022a8da(local_190 + 3);
        }
        pvVar16 = (void *)(lVar7 * 0x20 + auVar18._0_8_);
        local_198 = auVar18._8_8_ * 0x420 + auVar18._0_8_;
        _memcpy(pvVar16,local_1a0,0x420);
        puVar4 = local_190;
        lVar7 = (long)pvVar16 + 0x420;
        sVar14 = local_190[2] - (long)local_190[1];
        pvVar16 = (void *)((long)pvVar16 - sVar14);
        _memcpy(pvVar16,(void *)local_190[1],sVar14);
        pvVar1 = (void *)puVar4[1];
        puVar4[1] = pvVar16;
        puVar4[2] = lVar7;
        puVar4[3] = local_198;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
      }
      local_190[2] = lVar7;
    }
    FUN_10017060f(lVar10);
  }
  FUN_100249fca(local_1b0);
LAB_10022a7a9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

