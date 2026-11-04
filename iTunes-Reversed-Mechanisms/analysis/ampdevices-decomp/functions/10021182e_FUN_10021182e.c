// name: FUN_10021182e
// address: 10021182e

long FUN_10021182e(long param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  undefined4 *puVar12;
  int local_127c;
  undefined1 local_1278 [3072];
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined2 local_66c;
  char *local_66a;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined2 local_64c;
  char *local_64a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100211846;
  lVar4 = FUN_100108310();
  lVar4 = -lVar4;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar10 = param_1 + 0x23f8;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100211879;
  iVar3 = FUN_1001823de(lVar10,local_1278,0xbfe);
  local_127c = iVar3;
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002118ad;
      lVar5 = FUN_100172473(DAT_1008c4d90,local_1278,0x8000100);
      if (lVar5 != 0) {
        if (param_2 == 1) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002118d1;
          lVar6 = _AMRestorableDeviceCopyDefaultRestoreOptions();
          if (lVar6 == 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211ab9;
            uVar7 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211ac9;
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_658 = 0x8220202;
              uStack_654 = 0x7a0a90;
              uStack_650 = 1;
              local_64c = 0x822;
              local_64a = "optionsDictionary != nullptr";
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1002120dd;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_658,0x16)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211ada;
            FUN_1001782e9(0,0);
LAB_100211b02:
            local_127c = -0x6c;
            lVar6 = 0;
            goto LAB_10021203a;
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1002118f3;
          FUN_100168b0b(lVar6,&cf_WaitForDeviceConnectionToFinishStateMachine,0,1);
          if ((*(int *)(param_1 + 0x21a0) != 0x69427269) &&
             (*(int *)(param_1 + 0x21a0) != 0x4d616320)) goto LAB_100211a56;
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211918;
          iVar3 = FUN_10018a780(&local_658);
          local_127c = iVar3;
          if (iVar3 == -0x80) goto LAB_10021203a;
          if (iVar3 != 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211c56;
            uVar7 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211c66;
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x400;
              local_22a = (char *)CONCAT44(local_22a._4_4_,iVar3);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100211cb3;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_238,0x12);
            }
            goto LAB_10021203a;
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10021194b;
          FUN_10017ddd6(&local_678,&local_658,&local_127c);
          iVar3 = local_127c;
          if (local_127c != -0x80) {
            if (local_127c == 0) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10021196e;
              cVar2 = FUN_1001b8428(&local_678);
              if (cVar2 == '\0') {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100212080;
                FUN_10016865a(lVar6,&cf_PersonalizedRestoreBundlePath,&local_678,0);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10021208c;
                FUN_1001b7a50(&local_678);
                goto LAB_100211a56;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10021197b;
              uVar7 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10021198b;
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x822;
                local_22a = "!posixPath.IsEmpty()";
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10021226b;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10021199c;
              FUN_1001782e9(0,0);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100211d7d;
              uVar7 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100211d8d;
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x400;
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar3);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1002121c9;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_238,0x12
                                   );
              }
            }
          }
          puVar12 = &local_678;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211a4a;
          lVar6 = _AMRestoreCreateDefaultOptions(DAT_1008c4d90);
          if (lVar6 == 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211ae1;
            uVar7 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211af1;
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_658 = 0x8220202;
              uStack_654 = 0x7a0a90;
              uStack_650 = 1;
              local_64c = 0x822;
              local_64a = "optionsDictionary != nullptr";
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10021212e;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_658,0x16)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211b02;
            FUN_1001782e9(0,0);
            goto LAB_100211b02;
          }
LAB_100211a56:
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211a6c;
          FUN_100171502(lVar6,&cf_RestoreBundlePath,lVar5);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211a82;
          FUN_100171502(lVar6,&cf_iTunesVersion,&cf_13_5_6_12);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211a98;
          FUN_100171502(lVar6,&cf_AMPDevicesAgentVersion,&cf_1_5_6_12);
          cVar2 = *(char *)(param_1 + 0x2852);
          if (param_2 == 0) {
            pcVar11 = &cf_UOI;
            if (cVar2 != '\0') {
              pcVar11 = &cf_Update;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211b3b;
            _AMRLog(5,&cf_AMPDevicesAgent_Specifying__bootimage,pcVar11);
            pcVar11 = &cf_UserOrInternal;
            if (*(char *)(param_1 + 0x2852) != '\0') {
              pcVar11 = &cf_Update;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211b5d;
            FUN_100171502(lVar6,&cf_BootImageType,pcVar11);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211b70;
            FUN_1001e04f5("Restore.plist",&local_238);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211b88;
            iVar3 = FUN_10017ecc9(lVar10,&local_238,&local_658,0);
            if (iVar3 == -0x80) {
LAB_100211dd0:
              lVar8 = 0;
            }
            else {
              if (iVar3 != 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100211cbd;
                uVar7 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100211cd1;
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_678 = 0x8220202;
                  uStack_674 = 0x7a0a90;
                  uStack_670 = 1;
                  local_66c = 0x400;
                  local_66a = (char *)CONCAT44(local_66a._4_4_,iVar3);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100211d22;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_678,
                                      0x12);
                }
                goto LAB_100211dd0;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100211bb5;
              lVar8 = FUN_10016aa24(DAT_1008c4d90,&local_658,0,0);
              if (lVar8 == 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100211daf;
                uVar7 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100211dbf;
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_678 = 0x8220202;
                  uStack_674 = 0x7a0a90;
                  uStack_670 = 1;
                  local_66c = 0x822;
                  local_66a = "manifestDictionary != nullptr";
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10021221a;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_678,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100211dd0;
                FUN_1001782e9(0,0);
                goto LAB_100211dd0;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100211bd8;
              lVar9 = FUN_100166b7f(lVar8,&cf_SystemRestoreImages);
              if (lVar9 != 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100211bf3;
                cVar2 = FUN_100171439(lVar9,&cf_Internal);
                if (cVar2 != '\0') {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100211c0a;
                  cVar2 = FUN_100171439(lVar9,&cf_User);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100211c1b;
                  FUN_10017060f(lVar8);
                  if (cVar2 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100211c36;
                    _AMRLog(5,&cf_AMPDevicesAgent_Specifyingnon_usersystemimage);
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x100211c4c;
                    FUN_100171502(lVar6,&cf_SystemImageType,&cf_Internal);
                  }
                  goto LAB_100211dd7;
                }
              }
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211dd7;
            FUN_10017060f(lVar8);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211aaf;
            FUN_1002122a1(lVar6,cVar2);
          }
LAB_100211dd7:
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211dea;
          FUN_1001e04f5("BuildManifest.plist",&local_238);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e02;
          iVar3 = FUN_10017ecc9(lVar10,&local_238,&local_658,0);
          if (iVar3 != 0) goto LAB_10021203a;
          local_678 = 0;
          uStack_674 = 0;
          if (param_2 == 0) {
            uVar1 = *(undefined1 *)(param_1 + 0x2852);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e2a;
            FUN_1002122a1(lVar6,uVar1);
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e36;
          FUN_1001b7a44(&local_238);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e49;
          cVar2 = FUN_1001cd7eb("ipsw-variant",&local_238);
          if (cVar2 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e65;
            FUN_10016865a(lVar6,&cf_AuthInstallVariant,&local_238,0);
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e6a;
          lVar10 = FUN_1001c1ec5();
          if (lVar10 == 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e93;
            uVar7 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211ea3;
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_658 = 0x8220202;
              uStack_654 = 0x7a0a90;
              uStack_650 = 1;
              local_64c = 0x822;
              local_64a = "applicationLocale != nullptr";
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10021217f;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_658,0x16)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211eb4;
            FUN_1001782e9(0,0);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e84;
            FUN_100171502(lVar6,&cf_UserLocale,lVar10);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211e8c;
            FUN_10017060f(lVar10);
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211ec7;
          cVar2 = FUN_1001cd899("personalized-installation-server-host",&local_678);
          if (cVar2 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211ee5;
            _AMRLog(5,&cf_AMPDevicesAgent_Usingserverhost__,CONCAT44(uStack_674,local_678));
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211efb;
            FUN_100171502(lVar6,&cf_AuthInstallSigningServerHost,CONCAT44(uStack_674,local_678));
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211f07;
            FUN_10017060f(CONCAT44(uStack_674,local_678));
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211f17;
          iVar3 = FUN_1001cd9a6("personalized-installation-server-port",0,0);
          if (iVar3 != 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211f32;
            _AMRLog(5,&cf_AMPDevicesAgent_Usingserverport_d,iVar3);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211f46;
            FUN_100168746(lVar6,&cf_AuthInstallSigningServerPort,(long)iVar3,0);
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100211f5b;
          cVar2 = FUN_1001ce5fc("com.apple.AMPDevicesAgent","allow-sso-personalization",0);
          if (cVar2 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211f76;
            _AMRLog(5,&cf_AMPDevicesAgent_WilluseAppleConnecttopersonalize);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211f8f;
            FUN_100168b0b(lVar6,&cf_AuthInstallEnableSso,1,1);
            local_658 = 0;
            uStack_654 = 0;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211fa9;
            cVar2 = FUN_1001cd899("personalized-installation-server-url");
            if (cVar2 == '\0') {
              pcVar11 = &cf_https___gs_apple_com_443;
              local_658 = 0x8758d0;
              uStack_654 = 1;
            }
            else {
              pcVar11 = (cfstringStruct *)CONCAT44(uStack_654,local_658);
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211fd7;
            _AMRLog(5,&cf_AMPDevicesAgent_UsingserverURL__,pcVar11);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211fef;
            FUN_10016826a(lVar6,&cf_AuthInstallSigningServerURL,CONCAT44(uStack_654,local_658),0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100211ffb;
            FUN_10017060f(CONCAT44(uStack_654,local_658));
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10021200e;
          _AMRLog(5,&cf_AMPDevicesAgent_Addingadditionalrestoreoptions);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100212027;
          FUN_100168b0b(lVar6,&cf_ShouldRestoreSystemImage,1,1);
          puVar12 = &local_238;
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100212033;
        FUN_1001b7a50(puVar12);
        goto LAB_10021203a;
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100211a06;
      uVar7 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100211a16;
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_658 = 0x8220202;
        uStack_654 = 0x7a0a90;
        uStack_650 = 1;
        local_64c = 0x822;
        local_64a = "extractedFirmwareBundleFolderPathString != nullptr";
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100211d73;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100211a27;
      FUN_1001782e9(0,0);
      local_127c = -0x6c;
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002119a6;
      uVar7 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002119b6;
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_658 = 0x8220202;
        uStack_654 = 0x7a0a90;
        uStack_650 = 1;
        local_64c = 0x400;
        local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
        *(undefined8 *)((long)&local_38 + lVar4) = 0x1002119ff;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_658,0x12);
      }
    }
  }
  lVar5 = 0;
  lVar6 = 0;
LAB_10021203a:
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10021203f;
  FUN_10017060f(lVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar4) = &UNK_100212275;
    ___stack_chk_fail();
  }
  return lVar6;
}

