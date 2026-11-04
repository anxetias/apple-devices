// name: FUN_10025110a
// address: 10025110a

undefined4
FUN_10025110a(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             long param_7,long *param_8,undefined8 *param_9,long param_10,undefined8 *param_11)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  undefined8 local_d8 [2];
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined8 uStack_78;
  long local_70 [3];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c8 = param_6;
  local_b8 = param_2;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x11c5;
      uStack_78._0_6_ = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
    goto LAB_100251915;
  }
  local_b0 = param_3;
  local_a8 = param_1;
  if ((param_3 == 0 && param_4 == 0) && param_5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x5189;
      uStack_78._0_6_ = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100251211:
    lVar3 = FUN_100173bb7(local_b8,&cf_4_0,0x40);
    if ((lVar3 == -1) ||
       (local_a0 = FUN_1005f4d4c(&cf_MobileDeviceCarriersByMccMnc,0x6950686e), local_a0 == 0)) {
      lVar3 = FUN_10024bb81(local_b0);
      if (lVar3 == 0) goto LAB_1002514c8;
      local_a0 = 0;
      local_98 = 0;
LAB_100251577:
      if (param_11 != (undefined8 *)0x0) {
        uVar6 = FUN_1001705fc(lVar3);
        *param_11 = uVar6;
      }
      lVar7 = FUN_100173bb7(local_b8,&cf_3_0,0x40);
      lVar4 = lVar3;
      if (lVar7 == -1) {
        lVar7 = FUN_1005f4d4c(&cf_MobileDeviceCarrierBundles,0x6950686e);
        if (lVar7 != 0) {
          lVar3 = FUN_100166b7f(lVar7,lVar3);
          goto LAB_10025168c;
        }
        local_8c = 0x5c6;
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_1005f4d4c(&cf_MobileDeviceCarrierBundlesByProductVersion,0x6950686e);
        if (lVar7 == 0) {
LAB_1002518dd:
          local_8c = 0x5c6;
        }
        else {
          lVar3 = FUN_100166b7f(lVar7,lVar3);
          local_8c = 0x663;
          if (lVar3 == 0) goto LAB_1002518ea;
          lVar8 = FUN_100166b7f(lVar3,&cf_ByProductType);
          if (lVar8 != 0) {
            lVar9 = FUN_100166b7f(lVar8,local_a8);
            if (lVar9 == 0) {
              uVar6 = _CFCharacterSetGetPredefined(4);
              uVar10 = FUN_1001737f8(local_a8);
              cVar1 = FUN_100173cc6(local_a8,uVar6,0,uVar10,0,local_d8);
              if (cVar1 == '\0') {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 == '\0') {
                  local_8c = 0xffffffce;
                }
                else {
                  local_8c = 0xffffffce;
                  local_4a = 
                  "JRCFStringFindCharacterFromSet(productTypeString, digitCharacterSet, CFRangeMake(0, JRCFStringGetLength(productTypeString)), kNilOptions, &digitRange)"
                  ;
LAB_100251a93:
                  local_4c = 0x822;
                  local_54 = "Assertion failure";
                  local_58 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
              }
              else {
                lVar11 = FUN_100173623(DAT_1008c4d90,local_a8,0,local_d8[0]);
                if (lVar11 != 0) {
                  lVar9 = FUN_100166b7f(lVar8,lVar11);
                  FUN_10017060f(lVar11);
                  if (lVar9 == 0) goto LAB_1002518ea;
                  goto LAB_10025161d;
                }
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_8c = 0xffffff94;
                  local_4a = "productTypePrefixString != nullptr";
                  goto LAB_100251a93;
                }
                local_8c = 0xffffff94;
              }
              FUN_1001782e9(0,0);
              goto LAB_1002518ea;
            }
LAB_10025161d:
            cVar1 = FUN_100167e61(lVar9,&cf_FallbackToByProductVersion,0);
            if (cVar1 == '\0') {
              lVar3 = lVar9;
            }
          }
          local_88._0_4_ = (undefined4)local_b8;
          local_88._4_4_ = (undefined4)((ulong)local_b8 >> 0x20);
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_7a = 0;
          uStack_78._0_6_ = 0;
          uStack_78._6_2_ = 0;
          FUN_1001714c2(lVar3,FUN_10025aca3);
          lVar3 = CONCAT26(uStack_78._6_2_,(undefined6)uStack_78);
LAB_10025168c:
          if (lVar3 == 0) {
            local_8c = 0x663;
          }
          else {
            if (param_10 != 0) {
              lVar8 = FUN_100166c1b(lVar3,&cf_BuildVersion);
              if (lVar8 == 0) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_88._0_4_ = 0x8220202;
                  local_88._4_4_ = 0x7a0a90;
                  uStack_80 = 1;
                  uStack_7c = 0x822;
                  uStack_7a = 0xb6bf;
                  uStack_78._0_6_ = 0x1007a;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_1002518dd;
              }
              local_88._0_4_ = 0x73766d64;
              uVar6 = FUN_1001705fc(lVar8);
              uStack_80 = (undefined4)uVar6;
              uStack_7c = (undefined2)((ulong)uVar6 >> 0x20);
              uStack_7a = (undefined2)((ulong)uVar6 >> 0x30);
              FUN_100249f2c(param_10);
              FUN_100249fca(&local_88);
            }
            local_8c = 0;
            if (param_8 != (long *)0x0) {
              uVar6 = FUN_100166c1b(lVar3,&cf_BundleURL);
              lVar8 = FUN_1001705fc(uVar6);
              *param_8 = lVar8;
              if (lVar8 == 0) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_88._0_4_ = 0x8220202;
                  local_88._4_4_ = 0x7a0a90;
                  uStack_80 = 1;
                  uStack_7c = 0x822;
                  uStack_7a = 0x5336;
                  uStack_78._0_6_ = 0x1007b;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_1002518dd;
              }
              if (param_9 != (undefined8 *)0x0) {
                uVar6 = FUN_10016696d(lVar3,&cf_Digest);
                uVar6 = FUN_1001705fc(uVar6);
                *param_9 = uVar6;
              }
            }
          }
        }
      }
    }
    else {
      if (param_5 == 0) {
        local_8c = 0x673;
      }
      else {
        local_c0 = FUN_100166b7f(local_a0,param_5);
        local_8c = 0x65e;
        if (local_c0 != 0) {
          local_98 = FUN_100166844(local_c0,&cf_MVNOs);
          if (local_98 == 0) {
            lVar3 = 0;
          }
          else {
            uStack_78._0_6_ = 0;
            uStack_78._6_2_ = 0;
            local_70[0] = 0;
            local_88._0_4_ = 0;
            local_88._4_4_ = 0;
            uStack_80 = 0;
            uStack_7c = 0;
            uStack_7a = 0;
            local_70[1] = 0;
            lVar3 = FUN_10017076e();
            if (0 < lVar3) {
              uVar12 = 0;
              uVar13 = 1;
              do {
                lVar3 = FUN_10016499b(local_98,uVar12);
                if (lVar3 == 0) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "mvnoDictionary != nullptr";
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  lVar4 = FUN_100166c1b(lVar3,&cf_GID1);
                  lVar7 = FUN_100166c1b(lVar3,&cf_GID2);
                  lVar8 = FUN_100166c1b(lVar3,&cf_ICCID);
                  if (((lVar4 == 0) ||
                      ((local_c8 != 0 && (cVar1 = FUN_100169fa1(local_c8,lVar4), cVar1 != '\0'))))
                     && ((lVar7 == 0 ||
                         ((param_7 != 0 && (cVar1 = FUN_100169fa1(param_7,lVar7), cVar1 != '\0')))))
                     ) {
                    if (lVar8 == 0) {
                      plVar5 = (long *)&uStack_80;
                      if ((lVar4 != 0 && lVar7 != 0) ||
                         (plVar5 = local_70, lVar4 != 0 || lVar7 != 0)) goto LAB_100251427;
                    }
                    else if ((local_b0 != 0) &&
                            (cVar1 = FUN_100169fa1(local_b0,lVar8), cVar1 != '\0')) {
                      plVar5 = &local_88;
                      if (lVar4 == 0 || lVar7 == 0) {
                        plVar5 = &uStack_78 + (ulong)(lVar4 == 0 && lVar7 == 0) * 2;
                      }
LAB_100251427:
                      if (*plVar5 == 0) {
                        *plVar5 = lVar3;
                      }
                    }
                  }
                }
                lVar3 = FUN_10017076e(local_98);
                bVar14 = (long)uVar13 < lVar3;
                uVar12 = uVar13;
                uVar13 = (ulong)((int)uVar13 + 1);
              } while (bVar14);
            }
            lVar4 = 0;
            do {
              lVar3 = (&local_88)[lVar4];
              if (lVar3 != 0) break;
              bVar14 = lVar4 != 4;
              lVar4 = lVar4 + 1;
            } while (bVar14);
          }
          lVar4 = local_c0;
          if (lVar3 != 0) {
            lVar4 = lVar3;
          }
          lVar3 = FUN_100166c1b(lVar4,&cf_BundleName);
          FUN_1001705fc(lVar3);
          local_98 = 0;
          lVar7 = 0;
          lVar4 = 0;
          if (lVar3 == 0) goto LAB_1002518ea;
          goto LAB_100251577;
        }
      }
LAB_1002514e7:
      lVar7 = 0;
      local_98 = 0;
      lVar4 = 0;
    }
  }
  else {
    if (param_4 == 0) goto LAB_100251211;
    local_98 = FUN_1005f4d4c(&cf_MobileDeviceCarriersByCarrierID,0x6950686e);
    if (local_98 == 0) {
LAB_1002514c8:
      local_8c = 0x65e;
      local_a0 = 0;
      goto LAB_1002514e7;
    }
    lVar3 = FUN_100166c1b(local_98,param_4);
    if (lVar3 != 0) {
      FUN_1001705fc(lVar3);
      local_a0 = 0;
      goto LAB_100251577;
    }
    local_8c = 0x65e;
    lVar7 = 0;
    local_a0 = 0;
    lVar4 = 0;
  }
LAB_1002518ea:
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar7);
  FUN_10017060f(local_a0);
  FUN_10017060f(local_98);
  uVar2 = local_8c;
LAB_100251915:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

