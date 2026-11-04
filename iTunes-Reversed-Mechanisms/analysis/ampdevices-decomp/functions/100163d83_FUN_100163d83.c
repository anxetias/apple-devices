// name: FUN_100163d83
// address: 100163d83

undefined8 FUN_100163d83(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  cfstringStruct *pcVar19;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar16 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar16,0x10);
    if (cVar4 != '\0') {
      FUN_100671b75(uVar16);
    }
LAB_1001641e1:
    uVar16 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1001642e8;
  }
  if (param_2 == 0) {
    uVar16 = 0;
    goto LAB_1001642e8;
  }
  lVar6 = FUN_100171c60();
  if (lVar6 == 0) {
    uVar16 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar16,0x10);
    if (cVar4 != '\0') {
      FUN_100671aff(uVar16);
    }
    goto LAB_1001641e1;
  }
  lVar7 = _CFNetworkCopyProxiesForURL(lVar6,param_2);
  if (lVar7 == 0) {
LAB_100164174:
    lVar8 = FUN_10017478a(lVar6);
    pcVar19 = &cf_http;
    cVar4 = FUN_100169eb1(lVar8,&cf_http);
    if (cVar4 == '\0') {
      pcVar19 = &cf_https;
      cVar4 = FUN_100169eb1(lVar8,&cf_https);
      if ((cVar4 != '\0') &&
         (iVar5 = FUN_100167d23(param_2,*(undefined8 *)PTR__kSCPropNetProxiesHTTPSEnable_10082c380),
         iVar5 != 0)) {
        local_70 = (undefined8 *)PTR__kSCPropNetProxiesHTTPSPort_10082c388;
        puVar15 = (undefined8 *)PTR__kSCPropNetProxiesHTTPSProxy_10082c390;
        goto LAB_100164231;
      }
    }
    else {
      iVar5 = FUN_100167d23(param_2,*(undefined8 *)PTR__kSCPropNetProxiesHTTPEnable_10082c368);
      if (iVar5 != 0) {
        local_70 = (undefined8 *)PTR__kSCPropNetProxiesHTTPPort_10082c370;
        puVar15 = (undefined8 *)PTR__kSCPropNetProxiesHTTPProxy_10082c378;
LAB_100164231:
        lVar7 = FUN_100166c1b(param_2,*puVar15);
        iVar5 = FUN_100167d23(param_2,*local_70);
        if (lVar7 != 0) {
          iVar17 = 0x50;
          if (iVar5 != 0) {
            iVar17 = iVar5;
          }
          uVar16 = FUN_10016ad19(DAT_1008c4d90,pcVar19,lVar7,iVar17,0,0);
          goto LAB_1001642db;
        }
      }
    }
    uVar16 = 0;
  }
  else {
    lVar8 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    lVar9 = FUN_10017076e(lVar7);
    if (0 < lVar9) {
      uVar16 = *(undefined8 *)PTR__kCFProxyTypeKey_10082d608;
      uVar1 = *(undefined8 *)PTR__kCFProxyTypeAutoConfigurationURL_10082d5f0;
      uVar14 = *(undefined8 *)PTR__kCFProxyAutoConfigurationURLKey_10082d5d0;
      uVar2 = *(undefined8 *)PTR__kCFProxyTypeNone_10082d610;
      uVar3 = *(undefined8 *)PTR__kCFNull_10082e0c8;
      lVar18 = 0;
      do {
        lVar10 = FUN_10016499b(lVar7,lVar18);
        if (lVar10 == 0) {
          uVar11 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar11,0x10);
          if (cVar4 != '\0') {
            local_68 = 0x8220202;
            uStack_64 = 0x7a0a90;
            uStack_60 = 1;
            uStack_5c = 0x822;
            uStack_5a = 0x1006;
            uStack_58 = 0x1007a;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          uVar11 = FUN_100171475(lVar10,uVar16);
          cVar4 = FUN_100170633(uVar11,uVar1);
          if (cVar4 == '\0') {
            cVar4 = FUN_100170633(uVar11,uVar2);
            if (cVar4 != '\0') {
              FUN_1001709a5(lVar8,uVar3);
              goto LAB_10016400f;
            }
            uVar11 = FUN_10016450a(lVar10);
            FUN_1001709a5(lVar8,uVar11);
          }
          else {
            lVar10 = FUN_100166c7f(lVar10,uVar14);
            if (lVar10 == 0) {
              uVar11 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar11,0x10);
              if (cVar4 != '\0') {
                local_68 = 0x8220202;
                uStack_64 = 0x7a0a90;
                uStack_60 = 1;
                uStack_5c = 0x822;
                uStack_5a = 0x101b;
                uStack_58 = 0x1007a;
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_68,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
              local_68 = 0;
              uStack_64 = 0;
              uStack_58 = 0;
              uStack_52 = 0;
              uStack_50 = 0;
              local_48 = 0;
              uStack_60 = (undefined4)uVar11;
              uStack_5c = (undefined2)((ulong)uVar11 >> 0x20);
              uStack_5a = (undefined2)((ulong)uVar11 >> 0x30);
              uVar12 = _CFNetworkExecuteProxyAutoConfigurationURL
                                 (lVar10,lVar6,FUN_100164639,&local_68);
              uVar13 = FUN_100172796();
              FUN_1001728e7(uVar13,uVar12,&cf_com_apple_iTunes_ProxyAutoConfigMode);
              FUN_1001727b4((int)DAT_10070d390,&cf_com_apple_iTunes_ProxyAutoConfigMode,0);
              uVar13 = FUN_100172796();
              FUN_100172980(uVar13,uVar12,&cf_com_apple_iTunes_ProxyAutoConfigMode);
              FUN_10017060f(uVar12);
            }
            uVar12 = FUN_10017076e(uVar11);
            FUN_100170664(lVar8,uVar11,0,uVar12);
          }
          FUN_10017060f(uVar11);
        }
LAB_10016400f:
        lVar18 = lVar18 + 1;
      } while (lVar9 != lVar18);
    }
    FUN_10017060f(lVar7);
    if (lVar8 == 0) goto LAB_100164174;
    lVar7 = FUN_10017076e(lVar8);
    if (lVar7 < 1) {
      uVar16 = 0;
    }
    else {
      uVar1 = *(undefined8 *)PTR__kCFNull_10082e0c8;
      uVar16 = 0;
      lVar9 = 0;
      do {
        uVar14 = FUN_100170853(lVar8,lVar9);
        cVar4 = FUN_100170633(uVar14,uVar1);
        if (cVar4 == '\0') {
          lVar7 = FUN_1001705e9(uVar14);
          lVar9 = _CFURLGetTypeID();
          if (lVar7 != lVar9) {
            uVar16 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar16,0x10);
            if (cVar4 != '\0') {
              FUN_100671a89(uVar16);
            }
            FUN_1001782e9(0,0);
          }
          uVar16 = FUN_1001705fc(uVar14);
          break;
        }
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
    }
  }
LAB_1001642db:
  FUN_10017060f(lVar8);
  FUN_10017060f(lVar6);
LAB_1001642e8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}

