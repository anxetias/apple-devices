// name: FUN_100222d8f
// address: 100222d8f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100222d8f(ulong param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 long *param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double local_1078;
  uint local_106c;
  undefined8 local_1068;
  long *local_1060;
  int *local_1058;
  double local_1050;
  undefined4 local_1048 [2];
  undefined1 local_1040 [1056];
  undefined1 local_c20 [512];
  undefined8 local_a20;
  undefined4 local_9f0 [4];
  undefined1 local_9e0 [24];
  long local_9c8 [137];
  undefined4 local_580;
  undefined4 local_578;
  undefined4 *local_570;
  long local_568 [4];
  undefined1 local_548 [24];
  code *local_530;
  undefined4 *local_520;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100222da7;
  local_106c = param_2;
  auVar11 = FUN_100108310();
  lVar7 = auVar11._8_8_;
  lVar1 = -auVar11._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar1) = 0x100222dde;
  local_1060 = param_6;
  FUN_1004afafa(local_9f0);
  local_1068 = 0;
  iVar3 = (int)param_1;
  *(undefined8 *)((long)&local_38 + lVar1) = 0x100222df1;
  cVar2 = FUN_100247c62(param_1 & 0xffffffff);
  if (cVar2 == '\0') {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222e76;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222e86;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_44a = "IsSoftwareUpdateRestoreDeviceClass(deviceClass)";
LAB_10022342b:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100223450;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
LAB_100222f00:
    iVar3 = -0x32;
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222f0e;
    FUN_1001782e9(0,0);
    goto LAB_100222f0e;
  }
  if (lVar7 == 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222ebb;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222ecb;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "firmwareBundleDownloadURL != nullptr";
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002232ba;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    iVar3 = 0x194;
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222ee1;
    FUN_1001782e9(0,0);
    goto LAB_100222f0e;
  }
  if (param_7 == 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222ee8;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222ef8;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_44a = "iPodSoftwareUpdateRestoreActionDelegate != nullptr";
      goto LAB_10022342b;
    }
    goto LAB_100222f00;
  }
  *(undefined8 *)((long)&local_38 + lVar1) = 0x100222e13;
  local_1058 = (int *)FUN_1004aab9f(1);
  if (local_1058 == (int *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222f47;
    uVar5 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222f57;
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_44a = "downloadManager != nullptr";
LAB_100223522:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100223547;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
LAB_100222f5f:
    iVar3 = -0x32;
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222f6d;
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222e39;
    FUN_1001c62d9(local_1048,0x658);
    if (param_5 == 0) {
      if (iVar3 < 0x69506164) {
        if (iVar3 < 0x57617463) {
          if (iVar3 == 0x48506f64) {
            param_5 = 0x1e;
          }
          else {
            if (iVar3 != 0x4d616320) goto LAB_1002232f3;
            param_5 = 0x20;
          }
        }
        else if (iVar3 == 0x57617463) {
          param_5 = 0x1c;
        }
        else {
          if (iVar3 != 0x69427269) goto LAB_1002232f3;
          param_5 = 0x22;
        }
      }
      else if (iVar3 < 0x69506f64) {
        if (iVar3 == 0x69506164) {
          param_5 = 0x18;
        }
        else {
LAB_1002232f3:
          param_5 = 0x16;
        }
      }
      else {
        param_5 = 0x14;
        if ((iVar3 != 0x69506f64) && (iVar3 != 0x69506f74)) {
          if (iVar3 != 0x69545620) goto LAB_1002232f3;
          param_5 = 0x1a;
        }
      }
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x100222e54;
    iVar3 = FUN_1003870d4(param_5,3,&local_458);
    if (iVar3 == 0) {
      local_1048[0] = 0xc;
      *(undefined8 *)((long)&local_38 + lVar1) = 0x100222fe4;
      _memcpy(local_1040,&local_458,0x420);
      local_a20 = 0x69707377686f6f6b;
LAB_100223082:
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10022308e;
      FUN_10018e077(local_1040);
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10022309f;
      puVar6 = (undefined4 *)FUN_1001c629e(0x218,&DAT_100711c6e);
      if (puVar6 == (undefined4 *)0x0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100223107;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100223117;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "context != nullptr";
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223755;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100223128;
        FUN_1001782e9(0,0);
LAB_1002234a1:
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002234a6;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002234b6;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_44a = "context != nullptr";
LAB_100223641:
          local_44c = 0x822;
          local_454 = "Assertion failure";
          local_458 = 0x8220202;
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223666;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
      }
      else {
        *puVar6 = 0x6966646d;
        psVar8 = (short *)(puVar6 + 1);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002230bf;
        iVar3 = FUN_100220c77(lVar7,psVar8);
        if (iVar3 == -0x80) {
LAB_100223499:
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1002234a1;
          operator_delete(puVar6);
          goto LAB_1002234a1;
        }
        local_1050 = (double)CONCAT44(local_1050._4_4_,iVar3);
        if (iVar3 == 0) {
          if (*psVar8 == 0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100223478;
            uVar5 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100223488;
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x822;
              local_44a = "context->firmwareBundleFileName[0] != 0";
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100223911;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100223499;
            FUN_1001782e9(0,0);
            goto LAB_100223499;
          }
          *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 1;
          *(long *)(puVar6 + 0x84) = param_7;
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1002230f6;
          uVar5 = FUN_1001705fc(param_4);
          *(undefined8 *)(puVar6 + 0x82) = uVar5;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223163;
          uVar5 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223173;
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x400;
            local_44a = (char *)CONCAT44(local_44a._4_4_,local_1050._0_4_);
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100223842;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,0x12);
          }
          if (local_1050._0_4_ != 0) goto LAB_100223499;
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x10022319a;
        FUN_1001e1c39(psVar8,local_c20);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002231a9;
        FUN_1001e26e1(".download",local_c20);
        local_9f0[0] = 0x64657669;
        local_580 = 0xe0000001;
        local_578 = 0x66696c65;
        local_570 = local_1048;
        local_568[1] = 0;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002231e7;
        FUN_100203686(local_548,param_8);
        local_530 = FUN_1002239fe;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100223207;
        local_520 = puVar6;
        iVar3 = FUN_10022420f(lVar7,0,&local_1078);
        if (iVar3 == 0) {
          local_1050 = local_1078;
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223224;
          dVar10 = (double)_CFAbsoluteTimeGetCurrent();
          if (_DAT_100718e00 < local_1050 - dVar10) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100223243;
            uVar5 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100223253;
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x822;
              local_44a = 
              "CopySoftwareUpdateQueueTokenAndRetryTimeFromDatabase(firmwareBundleDownloadURL, nullptr, &retryAbsoluteTime) != noErr || IsSentinelSoftwareUpdateQueueRetryAbsoluteTime(retryAbsoluteTime) == false"
              ;
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100223962;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar1) = 0x100223269;
            FUN_1001782e9(0,0);
            iVar3 = 0x687;
            goto LAB_1002234cc;
          }
        }
        if ((local_1060 == (long *)0x0) || ((char)local_1060[4] != '\0')) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223322;
          FUN_1001aaef6(&local_458,lVar7);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223335;
          FUN_1001aaadc(local_9c8,&local_458);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223341;
          FUN_1001ab006(&local_458);
LAB_100223341:
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223356;
          uVar5 = FUN_100416f20(param_1 & 0xffffffff,(local_106c & 0xff) + 0x10cc0101);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223365;
          FUN_1001b81f2(local_9e0,uVar5);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223378;
          iVar3 = FUN_1004a9413(local_9f0,&local_1068);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1002233a0;
              iVar3 = FUN_1004ae1d2(local_1058,local_1068,0);
              if (iVar3 != -0x80) {
                if (iVar3 == 0) {
                  if (local_1060 == (long *)0x0) {
                    lVar9 = 0;
                  }
                  else {
                    lVar9 = *local_1060;
                    if ((lVar9 == 0 & *(byte *)(local_1060 + 4)) == 1) {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002233dc;
                      uVar5 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002233ec;
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        local_458 = 0x8220202;
                        local_454 = "Assertion failure";
                        local_44c = 0x822;
                        local_44a = 
                        "optionalSoftwareUpdateQueueRequestParams->IsRestore() == false || tokenCFString != nullptr"
                        ;
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002239b3;
                        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                            &local_458,0x16);
                      }
                      lVar9 = 0;
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002233ff;
                      FUN_1001782e9(0,0);
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x10022384e;
                  dVar10 = (double)_CFAbsoluteTimeGetCurrent();
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x100223861;
                  iVar4 = FUN_100224366(dVar10 + _DAT_100718e08,lVar7,lVar9);
                  iVar3 = 0;
                  if (iVar4 != 0) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x100223873;
                    uVar5 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x100223883;
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    iVar3 = 0;
                    if (cVar2 != '\0') {
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar4);
                      iVar3 = 0;
                      goto LAB_10022306d;
                    }
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1002237a8;
                  uVar5 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1002237b8;
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
LAB_10022306d:
                    local_44c = 0x400;
                    local_454 = "Assertion failure";
                    local_458 = 0x8220202;
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10022307d;
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,
                                        0x12);
                  }
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100223670;
              uVar5 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x100223680;
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
                goto LAB_10022306d;
              }
            }
          }
          goto LAB_1002234cc;
        }
        lVar9 = local_1060[1];
        *(undefined8 *)((long)&local_38 + lVar1) = 0x10022355c;
        FUN_1001aaef6(&local_458,lVar9);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x10022356f;
        FUN_1001aaadc(local_9c8,&local_458);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x10022357b;
        FUN_1001ab006(&local_458);
        if (local_9c8[0] == 0) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10022375f;
          uVar5 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10022376f;
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_44a = "downloadItemCreateParams.mURL != nullptr";
            goto LAB_100223522;
          }
          goto LAB_100222f5f;
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100223598;
        uVar5 = FUN_100222a1c(local_1060,lVar7);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002235a7;
        FUN_1001aaedc(&local_458,uVar5);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002235ba;
        FUN_1001aaadc(local_568,&local_458);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002235c6;
        FUN_1001ab006(&local_458);
        if (local_568[0] != 0) goto LAB_100223341;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002235d9;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1002235e9;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_44a = "downloadItemCreateParams.mHeaders != nullptr";
          goto LAB_100223641;
        }
      }
      iVar3 = -0x6c;
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002234cc;
      FUN_1001782e9(0,0);
    }
    else {
      if (iVar3 != -0x80) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100222fff;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x10022300f;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          *(undefined8 *)((long)&local_38 + lVar1) = 0x100223704;
          local_46a = iVar3;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
        if (iVar3 == 0) goto LAB_100223082;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100223020;
        uVar5 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar1) = 0x100223030;
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_1002234cc;
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
        goto LAB_10022306d;
      }
      iVar3 = -0x80;
    }
  }
LAB_1002234cc:
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1002234d8;
  FUN_1004aa496(local_1068);
  if (local_1058 != (int *)0x0) {
    LOCK();
    *local_1058 = *local_1058 + -1;
    UNLOCK();
    if (*local_1058 == 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1002234f6;
      FUN_1004ada4f();
    }
  }
LAB_100222f0e:
  *(undefined8 *)((long)&local_38 + lVar1) = 0x100222f1a;
  FUN_1004afc72(local_9f0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar1) = &UNK_1002239bd;
    ___stack_chk_fail();
  }
  return iVar3;
}

