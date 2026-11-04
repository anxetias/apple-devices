// name: FUN_1003ca68a
// address: 1003ca68a

int FUN_1003ca68a(long param_1,long param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  undefined1 uVar4;
  long lVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined1 auVar15 [16];
  undefined1 local_626c [5728];
  undefined1 local_4c0c [68];
  undefined1 local_4bc8;
  undefined2 local_4bc7;
  undefined1 local_4bc5;
  undefined2 local_4bba;
  code *local_4b98;
  undefined8 local_4b90;
  undefined8 local_4b78;
  undefined8 local_4b70;
  long local_4b68;
  long local_4b60;
  long local_4b58;
  long local_4b50;
  undefined4 local_4b48;
  char *local_4b44;
  undefined2 local_4b3c;
  int local_4b3a;
  undefined4 local_4b28;
  char *local_4b24;
  undefined2 local_4b1c;
  int local_4b1a;
  undefined4 local_4708;
  char *local_4704;
  undefined2 local_46fc;
  char *local_46fa;
  undefined1 local_46e0 [1016];
  undefined1 local_42e8 [1056];
  undefined1 local_3ec8 [1056];
  undefined1 local_3aa8 [1056];
  ulong local_3688 [25];
  undefined1 local_35c0 [13696];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1003ca6a2;
  auVar15 = FUN_100108310();
  lVar13 = auVar15._8_8_;
  lVar5 = -auVar15._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3688[0] = 0;
  local_3688[1] = 0;
  local_4b68 = 0;
  if (param_1 == 0) {
LAB_1003caa00:
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caa05;
    uVar11 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caa15;
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_4708 = 0x8220202;
      local_4704 = "Assertion failure";
      local_46fc = 0x822;
      local_46fa = "DulcimerHandlerDataIsValid(handlerData)";
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cab44;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4708,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caa26;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca6ec;
      uVar11 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca6fc;
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_4708 = 0x8220202;
        local_4704 = "Assertion failure (expected to be true)";
        local_46fc = 0x822;
        local_46fa = "handlerData->magic == kDulcimerHandlerDataMagic";
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cab95;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4708,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca710;
      cVar6 = FUN_1001782e9(0,1);
      if (cVar6 == '\0') goto LAB_1003caa00;
    }
    if ((*(char *)(param_1 + 0x37c) == '\0') && (*(char *)(param_1 + 0x38e) == '\0')) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caa82;
      uVar11 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caa92;
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_4708 = 0x8220202;
        local_4704 = "Assertion failure";
        local_46fc = 0x822;
        local_46fa = 
        "handlerData->deviceInfo.supportsStore || handlerData->deviceInfo.supportsDownloadedPodcasts"
        ;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cac62;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4708,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caaa3;
      FUN_1001782e9(0,0);
    }
    else if ((param_2 == 0) ||
            ((lVar12 = *(long *)(param_2 + 8), lVar12 == 0 || (*(long *)(lVar12 + 0x10) == 0)))) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caa2d;
      uVar11 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caa3d;
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_4708 = 0x8220202;
        local_4704 = "Assertion failure";
        local_46fc = 0x822;
        local_46fa = "TrackInstanceIsValid(trackInstance)";
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cabe6;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4708,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caa4e;
      FUN_1001782e9(0,0);
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca75b;
      local_4b50 = lVar12;
      cVar6 = FUN_1003ca4e0();
      if (cVar6 == '\0') {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caad2;
        uVar11 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caae2;
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4708 = 0x8220202;
          local_4704 = "Assertion failure";
          local_46fc = 0x822;
          local_46fa = "TrackInfoIsValidIPodPurchasedTrack(trackInfo)";
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cad58;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4708,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caaf3;
        FUN_1001782e9(0,0);
      }
      else if (((lVar13 == 0) || (lVar12 = *(long *)(lVar13 + 8), lVar12 == 0)) ||
              (*(long *)(lVar12 + 0x10) == 0)) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caaaa;
        uVar11 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caaba;
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4708 = 0x8220202;
          local_4704 = "Assertion failure";
          local_46fc = 0x822;
          local_46fa = "TrackInstanceIsValid(destTrackInstance)";
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cacb3;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4708,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caacb;
        FUN_1001782e9(0,0);
      }
      else {
        if (*(int *)(*(long *)(lVar12 + 0x10) + 0x84) == 0x2062696c) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca7a9;
          local_4b58 = lVar12;
          FUN_1003af743(local_626c);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca7b5;
          FUN_1003af7fe(local_3688);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca7c1;
          FUN_1003af8bd(local_4c0c);
          if (param_4 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca7ee;
            FUN_10030a4a4(param_2,0x20,0,local_626c,local_3688,local_4c0c);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca7f6;
            lVar12 = FUN_1002b5390(param_2);
            if (lVar12 != 0) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca807;
              FUN_1002ecb9c(&local_4708);
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca81d;
              iVar8 = FUN_1003cba40(param_1,local_4b50,&local_4708);
              if (iVar8 != -0x80) {
                if (iVar8 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca82f;
                  local_4b60 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca843;
                  cVar6 = _os_log_type_enabled(local_4b60,0x10);
                  if (cVar6 != '\0') {
                    local_4b28 = 0x8220202;
                    local_4b24 = "Assertion failure";
                    local_4b1c = 0x400;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb204;
                    local_4b1a = iVar8;
                    __os_log_error_impl(0x100000000,local_4b60,0x10,"%{public}s: err == (%d)",
                                        &local_4b28,0x12);
                  }
                  if (iVar8 != 0) goto LAB_1003ca86a;
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca863;
                FUN_1001bb41a(local_46e0,local_35c0);
                local_3688[0] = local_3688[0] | 0x400;
              }
LAB_1003ca86a:
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca876;
              FUN_1002ecb54(&local_4708);
            }
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca883;
          iVar8 = FUN_1002b0559(param_2,0xc2);
          if (iVar8 != -0x80) {
            if (iVar8 == 0) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca8a7;
              iVar8 = FUN_1002b1039(param_2,local_3aa8);
              if (iVar8 != -0x80) {
                if (iVar8 == 0) {
                  uVar7 = *(undefined1 *)(param_1 + 0x39e);
                  uVar4 = *(undefined1 *)(param_1 + 0x39d);
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca8d6;
                  cVar6 = FUN_1002bd03f(local_4b50,uVar7,uVar4);
                  if (cVar6 == '\0') {
                    local_4b78 = 0xffffffffffffffff;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cae32;
                    local_4b60 = FUN_1003cc68c(param_1,local_3aa8);
                    if (local_4b60 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb13b;
                      uVar11 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb14b;
                      cVar6 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar6 != '\0') {
                        local_4708 = 0x8220202;
                        local_4704 = "Assertion failure";
                        local_46fc = 0x822;
                        local_46fa = "assetInfoDict != nullptr";
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb6ee;
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                            &local_4708,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb15c;
                      FUN_1001782e9(0,0);
                      iVar8 = -0x2b;
                    }
                    else if (param_4 == '\0') {
LAB_1003caf68:
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caf70;
                      lVar12 = FUN_1002b5390(lVar13);
                      if (lVar12 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caf81;
                        cVar6 = FUN_10044acc3(local_4b58);
                        if (cVar6 == '\0') {
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb58e;
                          FUN_1004f0e83(param_1,&local_4b28);
                          uVar11 = *(undefined8 *)(param_1 + 0x40);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb59e;
                          uVar7 = FUN_100474865(local_4b58);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb5b2;
                          lVar12 = FUN_1003c5a70(uVar11,uVar7,&local_4b28,0);
                          if (lVar12 != 0) {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb5cf;
                            cVar6 = FUN_100485bb5(local_4b58,lVar12,0);
                            if (cVar6 == '\0') {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb5e3;
                              uVar11 = FUN_10048a4b3(local_4b58);
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb5f5;
                              FUN_1003a790f(uVar11,0,lVar12,0,0);
                            }
                          }
                        }
                      }
                      if (*(char *)(param_1 + 0x3a2) == '\0') {
                        local_4b70 = *(undefined8 *)(param_1 + 0x30);
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb270;
                        uVar7 = FUN_1002b458b(param_2);
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb284;
                        uVar10 = FUN_1004744bf(local_4b50,0);
                        *(undefined1 **)(&stack0xfffffffffffffff0 + lVar5) = local_42e8;
                        *(undefined4 *)(&stack0xffffffffffffffe8 + lVar5) = 0;
                        *(undefined4 *)(&stack0xffffffffffffffe0 + lVar5) = 0;
                        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
                        *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb2c1;
                        iVar8 = FUN_10031774e(local_4b70,uVar7,uVar10,0,0,0);
                        if (iVar8 != -0x80) {
                          if (iVar8 != 0) {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb653;
                            uVar11 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb663;
                            cVar6 = _os_log_type_enabled(uVar11,0x10);
                            if (cVar6 == '\0') goto LAB_1003cb851;
                            puVar14 = &local_4b28;
                            local_4b28 = 0x8220202;
                            local_4b24 = "Assertion failure";
                            local_4b1c = 0x400;
                            local_4b1a = iVar8;
                            goto LAB_1003cadaf;
                          }
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb2e2;
                          iVar8 = FUN_100182d4d(local_3aa8);
                          if ((iVar8 != -0x80) && (iVar8 != 0)) {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb2f4;
                            uVar11 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb304;
                            cVar6 = _os_log_type_enabled(uVar11,0x10);
                            if (cVar6 != '\0') {
                              local_4b28 = 0x8220202;
                              local_4b24 = "Assertion failure";
                              local_4b1c = 0x400;
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb952;
                              local_4b1a = iVar8;
                              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                                  &local_4b28,0x12);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb314;
                          FUN_1002b0f56(param_2);
                          puVar2 = (uint *)(*(long *)(param_2 + 8) + 0xc2);
                          *puVar2 = *puVar2 & 0x7fffffff;
                          puVar3 = (ushort *)(*(long *)(param_2 + 8) + 0xc6);
                          *puVar3 = *puVar3 & 0xfffe;
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb33a;
                          cVar6 = FUN_1003203ad(local_4b50);
                          if (cVar6 != '\0') {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb351;
                            uVar11 = FUN_100166c1b(local_4b60,&cf_relativeMediaAssetPath);
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb35c;
                            iVar8 = FUN_1003cccb2(param_1,uVar11);
                            if ((iVar8 != -0x80) && (iVar8 != 0)) {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb36e;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb37e;
                              cVar6 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar6 != '\0') {
                                local_4b28 = 0x8220202;
                                local_4b24 = "Assertion failure";
                                local_4b1c = 0x400;
                                *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb9e6;
                                local_4b1a = iVar8;
                                __os_log_error_impl(0x100000000,uVar11,0x10,
                                                    "%{public}s: err == (%d)",&local_4b28,0x12);
                              }
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb39c;
                          iVar8 = FUN_1003cd0e6(param_1,local_4b60,local_4b78);
                          if ((iVar8 != -0x80) && (iVar8 != 0)) {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb3ae;
                            uVar11 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb3be;
                            cVar6 = _os_log_type_enabled(uVar11,0x10);
                            if (cVar6 != '\0') {
                              local_4b28 = 0x8220202;
                              local_4b24 = "Assertion failure";
                              local_4b1c = 0x400;
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb99c;
                              local_4b1a = iVar8;
                              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                                  &local_4b28,0x12);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb3d7;
                          FUN_1001c62d9(&local_4bc8,0x50);
                          local_4bc7 = 0x101;
                          local_4bc5 = 1;
                          local_4bba = 0x201;
                          local_4b98 = FUN_1003cd3a6;
                          local_4b90 = *(undefined8 *)(param_1 + 0x30);
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb418;
                          iVar8 = FUN_1002b1039(lVar13,&local_4b28);
                          if (iVar8 != -0x80) {
                            if (iVar8 == 0) {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb453;
                              iVar8 = FUN_100182f89(1,&local_4b28,local_42e8,local_3ec8,&local_4bc8)
                              ;
                              if (iVar8 != -0x80) {
                                if (iVar8 == 0) {
                                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb477;
                                  iVar8 = FUN_1003cc55b(param_2,local_3ec8);
                                  if (iVar8 != -0x80) {
                                    if (iVar8 == 0) {
                                      *(undefined4 *)(param_2 + 0x74) =
                                           *(undefined4 *)(lVar13 + 0x74);
                                      *(undefined4 *)(param_2 + 0x78) =
                                           *(undefined4 *)(lVar13 + 0x78);
                                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb4a9;
                                      FUN_1002b532a(param_2,0x25);
                                      iVar8 = 0;
                                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb4c4;
                                      iVar9 = FUN_100356a30(param_1,local_4b50,local_4b58,0);
                                      if ((iVar9 != -0x80) && (iVar9 != 0)) {
                                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb4dc;
                                        uVar11 = FUN_1001cc310();
                                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb4ec;
                                        cVar6 = _os_log_type_enabled(uVar11,0x10);
                                        if (cVar6 != '\0') {
                                          puVar14 = &local_4b28;
                                          local_4b28 = 0x8220202;
                                          local_4b24 = "Assertion failure";
                                          local_4b1c = 0x400;
                                          local_4b1a = iVar9;
                                          goto LAB_1003ca9f8;
                                        }
                                      }
                                    }
                                    else {
                                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb839;
                                      uVar11 = FUN_1001cc310();
                                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb849;
                                      cVar6 = _os_log_type_enabled(uVar11,0x10);
                                      if (cVar6 != '\0') {
                                        puVar14 = &local_4b28;
                                        local_4b28 = 0x8220202;
                                        local_4b24 = "Assertion failure";
                                        local_4b1c = 0x400;
                                        local_4b1a = iVar8;
                                        goto LAB_1003cadaf;
                                      }
                                    }
                                  }
                                }
                                else {
                                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb74c;
                                  uVar11 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb75c;
                                  cVar6 = _os_log_type_enabled(uVar11,0x10);
                                  if (cVar6 != '\0') {
                                    puVar14 = &local_4b48;
                                    local_4b48 = 0x8220202;
                                    local_4b44 = "Assertion failure";
                                    local_4b3c = 0x400;
                                    local_4b3a = iVar8;
                                    goto LAB_1003cadaf;
                                  }
                                }
                              }
                            }
                            else {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb6f8;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb708;
                              cVar6 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar6 != '\0') {
                                puVar14 = &local_4b48;
                                local_4b48 = 0x8220202;
                                local_4b44 = "Assertion failure";
                                local_4b3c = 0x400;
                                local_4b3a = iVar8;
                                goto LAB_1003cadaf;
                              }
                            }
                          }
                        }
                      }
                      else {
                        *(byte *)(local_4b50 + 0xc6) = *(byte *)(local_4b50 + 0xc6) | 1;
                        uVar11 = *(undefined8 *)(param_1 + 0x30);
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cafb7;
                        FUN_100316867(uVar11,0xf,1);
                        iVar8 = 0;
                      }
                    }
                    else {
                      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
                      *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cae7d;
                      iVar8 = FUN_100312763(lVar13,local_626c,local_3688,local_4c0c,0xd,0);
                      if (iVar8 != -0x80) {
                        if (iVar8 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caeb3;
                          iVar8 = FUN_1003cc9d2(param_1 + 0x159c8,local_4b60,
                                                &cf_relativeArtworkAssetPath,&local_4708);
                          if (iVar8 != -0x80) {
                            if (iVar8 != 0) {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caec5;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caed5;
                              cVar6 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar6 != '\0') {
                                local_4b28 = 0x8220202;
                                local_4b24 = "Assertion failure";
                                local_4b1c = 0x400;
                                *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb82f;
                                local_4b1a = iVar8;
                                __os_log_error_impl(0x100000000,uVar11,0x10,
                                                    "%{public}s: err == (%d)",&local_4b28,0x12);
                              }
                              if (iVar8 != 0) goto LAB_1003caf21;
                            }
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caef7;
                            iVar8 = FUN_1005d2873(&local_4708,0,&local_4b68);
                            if ((iVar8 != -0x80) && (iVar8 != 0)) {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caf09;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caf19;
                              cVar6 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar6 != '\0') {
                                local_4b28 = 0x8220202;
                                local_4b24 = "Assertion failure";
                                local_4b1c = 0x400;
                                *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb908;
                                local_4b1a = iVar8;
                                __os_log_error_impl(0x100000000,uVar11,0x10,
                                                    "%{public}s: err == (%d)",&local_4b28,0x12);
                              }
                            }
                          }
LAB_1003caf21:
                          if (local_4b68 != 0) {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caf3e;
                            iVar8 = FUN_1005d4855(local_4b68,local_4b58,3);
                            if ((iVar8 != -0x80) && (iVar8 != 0)) {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caf50;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caf60;
                              cVar6 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar6 != '\0') {
                                local_4b28 = 0x8220202;
                                local_4b24 = "Assertion failure";
                                local_4b1c = 0x400;
                                *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb8be;
                                local_4b1a = iVar8;
                                __os_log_error_impl(0x100000000,uVar11,0x10,
                                                    "%{public}s: err == (%d)",&local_4b28,0x12);
                              }
                            }
                          }
                          goto LAB_1003caf68;
                        }
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb530;
                        uVar11 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb540;
                        cVar6 = _os_log_type_enabled(uVar11,0x10);
                        if (cVar6 != '\0') {
                          puVar14 = &local_4708;
                          local_4708 = 0x8220202;
                          local_4704 = "Assertion failure";
                          local_46fc = 0x400;
                          local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar8);
                          goto LAB_1003cadaf;
                        }
                      }
                    }
                  }
                  else {
                    if (param_4 != '\0') {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca8eb;
                      lVar12 = FUN_1002b5390(lVar13);
                      if (lVar12 != 0) {
                        *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
                        *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca91d;
                        iVar8 = FUN_100312763(lVar13,local_626c,local_3688,local_4c0c,0xd,0);
                        if (iVar8 != -0x80) {
                          if (iVar8 == 0) goto LAB_1003ca932;
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb16c;
                          uVar11 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb17c;
                          cVar6 = _os_log_type_enabled(uVar11,0x10);
                          if (cVar6 != '\0') {
                            puVar14 = &local_4708;
                            local_4708 = 0x8220202;
                            local_4704 = "Assertion failure";
                            local_46fc = 0x400;
                            local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar8);
                            goto LAB_1003cadaf;
                          }
                        }
                        goto LAB_1003cb851;
                      }
                    }
LAB_1003ca932:
                    if (*(char *)(param_1 + 0x3a2) == '\0') {
                      uVar11 = *(undefined8 *)(param_1 + 0x30);
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cafcb;
                      uVar7 = FUN_1002b458b(param_2);
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cafdf;
                      uVar10 = FUN_1004744bf(local_4b50,0);
                      *(undefined1 **)(&stack0xfffffffffffffff0 + lVar5) = local_42e8;
                      *(undefined4 *)(&stack0xffffffffffffffe8 + lVar5) = 0;
                      *(undefined4 *)(&stack0xffffffffffffffe0 + lVar5) = 0;
                      *(undefined4 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
                      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb018;
                      iVar8 = FUN_10031774e(uVar11,uVar7,uVar10,0,0,0);
                      if (iVar8 != -0x80) {
                        if (iVar8 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb03c;
                          iVar8 = FUN_1003cc13c(param_1,local_3aa8);
                          if ((iVar8 != -0x80) && (iVar8 != 0)) {
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb04e;
                            uVar11 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb05e;
                            cVar6 = _os_log_type_enabled(uVar11,0x10);
                            if (cVar6 != '\0') {
                              local_4708 = 0x8220202;
                              local_4704 = "Assertion failure";
                              local_46fc = 0x400;
                              local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar8);
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb7e5;
                              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                                  &local_4708,0x12);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb087;
                          iVar8 = FUN_10017f061(local_3aa8,local_42e8,0,1,local_3ec8);
                          if (iVar8 != -0x80) {
                            if (iVar8 == 0) {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb0a4;
                              FUN_1002b0f56(param_2);
                              puVar2 = (uint *)(*(long *)(param_2 + 8) + 0xc2);
                              *puVar2 = *puVar2 & 0x7fffffff;
                              puVar3 = (ushort *)(*(long *)(param_2 + 8) + 0xc6);
                              *puVar3 = *puVar3 & 0xfffe;
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb0cd;
                              iVar8 = FUN_1003cc55b(param_2,local_3ec8);
                              if (iVar8 != -0x80) {
                                if (iVar8 == 0) goto LAB_1003ca960;
                                *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb0e7;
                                uVar11 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb0f7;
                                cVar6 = _os_log_type_enabled(uVar11,0x10);
                                if (cVar6 != '\0') {
                                  puVar14 = &local_4708;
                                  local_4708 = 0x8220202;
                                  local_4704 = "Assertion failure";
                                  local_46fc = 0x400;
                                  local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar8);
                                  goto LAB_1003cadaf;
                                }
                              }
                            }
                            else {
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb5ff;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb60f;
                              cVar6 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar6 != '\0') {
                                puVar14 = &local_4708;
                                local_4708 = 0x8220202;
                                local_4704 = "Assertion failure";
                                local_46fc = 0x400;
                                local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar8);
                                goto LAB_1003cadaf;
                              }
                            }
                          }
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb20e;
                          uVar11 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb21e;
                          cVar6 = _os_log_type_enabled(uVar11,0x10);
                          if (cVar6 != '\0') {
                            puVar14 = &local_4708;
                            local_4708 = 0x8220202;
                            local_4704 = "Assertion failure";
                            local_46fc = 0x400;
                            local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar8);
LAB_1003cadaf:
                            *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cadbf;
                            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                                puVar14,0x12);
                          }
                        }
                      }
                    }
                    else {
                      *(byte *)(local_4b50 + 0xc6) = *(byte *)(local_4b50 + 0xc6) | 1;
                      uVar11 = *(undefined8 *)(param_1 + 0x30);
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca960;
                      FUN_100316867(uVar11,0xf,1);
LAB_1003ca960:
                      if (*(long *)(local_4b50 + 0x188) == 0) {
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca97d;
                        FUN_100472be7(local_4b50,local_4b58);
                      }
                      iVar8 = 0;
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca996;
                      iVar9 = FUN_1004362d5(param_1,local_4b58,1,0);
                      if ((iVar9 != -0x80) && (iVar9 != 0)) {
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca9ae;
                        uVar11 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003ca9be;
                        cVar6 = _os_log_type_enabled(uVar11,0x10);
                        if (cVar6 != '\0') {
                          puVar14 = &local_4708;
                          local_4708 = 0x8220202;
                          local_4704 = "Assertion failure";
                          local_46fc = 0x400;
                          local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar9);
LAB_1003ca9f8:
                          iVar8 = 0;
                          goto LAB_1003cadaf;
                        }
                      }
                    }
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cad62;
                  uVar11 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cad72;
                  cVar6 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar6 != '\0') {
                    puVar14 = &local_4708;
                    local_4708 = 0x8220202;
                    local_4704 = "Assertion failure";
                    local_46fc = 0x400;
                    local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar8);
                    goto LAB_1003cadaf;
                  }
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cacbd;
              uVar11 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003caccd;
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 != '\0') {
                puVar14 = &local_4708;
                local_4708 = 0x8220202;
                local_4704 = "Assertion failure";
                local_46fc = 0x400;
                local_46fa = (char *)CONCAT44(local_46fa._4_4_,iVar8);
                goto LAB_1003cadaf;
              }
            }
          }
LAB_1003cb851:
          if (local_4b68 != 0) {
            LOCK();
            piVar1 = (int *)(local_4b68 + 4);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb868;
              FUN_1005d25cb();
            }
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb874;
          FUN_1003ae783(local_4c0c);
          goto LAB_1003caa54;
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cabf0;
        uVar11 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cac00;
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4708 = 0x8220202;
          local_4704 = "Assertion failure";
          local_46fc = 0x822;
          local_46fa = 
          "(((destTrackInfo) != nullptr) ? ((destTrackInfo)->trackDataPrivate) : nullptr)->trackDataKind == kTrackDataKind_Library"
          ;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cae10;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4708,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cac11;
        FUN_1001782e9(0,0);
      }
    }
  }
  iVar8 = -0x32;
LAB_1003caa54:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1003cb7a0;
    ___stack_chk_fail();
  }
  return iVar8;
}

