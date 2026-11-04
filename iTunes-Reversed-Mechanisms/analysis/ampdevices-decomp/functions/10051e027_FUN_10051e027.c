// name: FUN_10051e027
// address: 10051e027

void FUN_10051e027(undefined4 param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 in_stack_fffffffffffff408;
  undefined4 uVar11;
  undefined1 local_bc8 [16];
  undefined1 local_bb8 [16];
  undefined1 local_ba8 [16];
  undefined8 local_b98;
  long local_b90;
  undefined4 local_b88 [2];
  undefined1 local_b80 [8];
  void *local_b78;
  undefined4 local_b6c;
  undefined4 local_b68;
  undefined4 uStack_b64;
  undefined4 uStack_b60;
  undefined2 local_b5c;
  char *local_b5a;
  undefined4 local_964;
  undefined4 local_960;
  undefined1 local_950 [1056];
  undefined1 local_530 [32];
  undefined1 local_510 [16];
  undefined1 local_500;
  undefined8 local_4f0 [2];
  long local_4e0 [132];
  undefined1 local_c0 [72];
  long local_78;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar11 = (undefined4)((ulong)in_stack_fffffffffffff408 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b6c = param_1;
  lVar8 = FUN_1004de449();
  if (lVar8 == 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_b68 = 0x8220202;
      uStack_b64 = 0x7a0a90;
      uStack_b60 = 1;
      local_b5c = 0x822;
      local_b5a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_b68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10051e729;
  }
  iVar6 = *(int *)(lVar8 + 0x66b0);
  if (iVar6 < 0x69506f64) {
    if ((iVar6 == 0x69506164) || (iVar6 == 0x6950686e)) {
LAB_10051e0b9:
      FUN_100249c30(local_c0);
      local_b88[0] = 0;
      FUN_1001c62d9(local_b80,8);
      FUN_100255ad1(lVar8);
      uVar3 = *(undefined4 *)(lVar8 + 0x66b0);
      uVar9 = FUN_1004de449(local_b6c);
      uVar9 = FUN_100501f71(uVar9);
      local_b68 = (undefined4)uVar9;
      uStack_b64 = (undefined4)((ulong)uVar9 >> 0x20);
      FUN_1001b7eb0(local_ba8,uVar9);
      cVar5 = FUN_1002669ba(*(undefined8 *)(lVar8 + 0x66d8));
      iVar6 = FUN_100255c63(uVar3,local_ba8,cVar5 != '\0',*(undefined4 *)(lVar8 + 0x284),
                            *(undefined8 *)(lVar8 + 0x61e8),*(undefined4 *)(lVar8 + 0x61f0),
                            CONCAT44(uVar11,*(undefined4 *)(lVar8 + 0x61f4)),lVar8 + 0x58,local_c0,
                            local_b88,0);
      FUN_1001b7a50(local_ba8);
      FUN_10016d588(&local_b68);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) {
          local_b78 = (void *)0x0;
          if ((*(int *)(lVar8 + 0x66b0) == 0x6950686e) && (cVar5 = FUN_10024bc99(0), cVar5 != '\0'))
          {
            local_b90 = lVar8 + 0x6230;
            iVar6 = 10;
            do {
              iVar7 = FUN_10024ae56(local_c0,0,0,1,local_b90,lVar8 + 0x144,local_4e0,0);
              if (iVar7 != -0x80) {
                if (iVar7 != 0) {
                  uVar9 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar9);
                  if (cVar5 != '\0') {
                    local_b68 = 0x8220202;
                    uStack_b64 = 0x7a0a90;
                    uStack_b60 = 1;
                    local_b5c = 0x400;
                    local_b5a = (char *)CONCAT44(local_b5a._4_4_,iVar7);
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_b68,
                                        0x12);
                  }
                  if (iVar7 != 0) goto LAB_10051e261;
                }
                FUN_10017060f(local_78);
                local_78 = local_4e0[0];
              }
LAB_10051e261:
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if (local_78 == 0) {
              local_78 = FUN_1001705fc(PTR_cf_Unlocked_10083eff8);
            }
          }
          iVar6 = FUN_1002537af(local_c0,local_b88,1,0,&local_b78);
          if (iVar6 == 0) {
            local_4f0[0] = 0;
            FUN_1001c62d9(&local_b68,0x680);
            cVar5 = FUN_1002669ba(*(undefined8 *)(lVar8 + 0x66d8));
            local_bc8 = (undefined1  [16])0x0;
            iVar6 = FUN_1002253a4(cVar5 != '\0',*(undefined4 *)(lVar8 + 0x66b0),
                                  (long)local_b78 + 0x558,0,1,local_bc8,local_4e0);
            if ((long *)local_bc8._8_8_ != (long *)0x0) {
              LOCK();
              plVar10 = (long *)(local_bc8._8_8_ + 8);
              lVar1 = *plVar10;
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (lVar1 == 0) {
                (**(code **)(*(long *)local_bc8._8_8_ + 0x10))(local_bc8._8_8_);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar6 == -0x80) goto LAB_10051e686;
            if (iVar6 != 0) {
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              if (iVar6 != 0) goto LAB_10051e686;
            }
            cVar5 = FUN_1002669ba(*(undefined8 *)(lVar8 + 0x66d8));
            if (cVar5 == '\0') {
              local_b68 = 1;
              auVar2 = *(undefined1 (*) [16])(lVar8 + 0x38);
              local_510._0_8_ = auVar2._8_8_;
              local_510._8_4_ = auVar2._0_4_;
              local_510._12_4_ = auVar2._4_4_;
              local_500 = 1;
            }
            else {
              local_b68 = 2;
              local_960 = local_b6c;
              iVar6 = FUN_10024a018((long)local_b78 + 0x538,local_530,0x20);
              if (iVar6 != 0) {
                uVar9 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar9,0x10);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = 
                  "evaluationResultRef->restoreLatestBundleInfo.softwareVersion.GetBuildVersionCString(deviceParams.firmwareBundleBuildVersionCString, sizeof(deviceParams.firmwareBundleBuildVersionCString)) == noErr"
                  ;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
            }
            local_964 = *(undefined4 *)(lVar8 + 0x284);
            _memcpy(local_950,local_4e0,0x420);
            plVar10 = (long *)FUN_10039a28c();
            iVar6 = (**(code **)(*plVar10 + 0x48))(plVar10,&local_b68,&local_b98);
            if (iVar6 == -0x80) {
LAB_10051e675:
              FUN_100182d59(local_4e0,1);
            }
            else {
              if (iVar6 != 0) {
                uVar9 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar9,0x10);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                if (iVar6 != 0) goto LAB_10051e675;
              }
              plVar10 = (long *)FUN_10039a28c();
              iVar6 = (**(code **)(*plVar10 + 8))(plVar10,local_b98);
              if (iVar6 == -0x80) goto LAB_10051e675;
              if (iVar6 != 0) {
                uVar9 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar9,0x10);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                if (iVar6 != 0) goto LAB_10051e675;
              }
              *(undefined1 *)(DAT_1008c76a0 + 0x1a58) = 1;
              plVar10 = (long *)FUN_10039a28c();
              local_bb8 = (undefined1  [16])0x0;
              iVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,local_bb8,0);
              FUN_100205d70(local_bb8);
              if (iVar6 == -0x80) goto LAB_10051e675;
              if (iVar6 != 0) {
                uVar9 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar9,0x10);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                if (iVar6 != 0) goto LAB_10051e675;
              }
            }
LAB_10051e686:
            FUN_10026340c(local_4f0);
          }
          pvVar4 = local_b78;
          if (local_b78 != (void *)0x0) {
            lVar8 = (long)local_b78 + 0x978;
            FUN_100249fee((long)local_b78 + 0x988);
            FUN_100249fca(lVar8);
            FUN_100249fee((long)pvVar4 + 0x548);
            FUN_100249fca((long)pvVar4 + 0x538);
            FUN_100249fee((long)pvVar4 + 0x108);
            FUN_100249fca((long)pvVar4 + 0xf8);
            FUN_10024f3ba((long)pvVar4 + 0xb0);
            FUN_10024f3ba((long)pvVar4 + 0x68);
            FUN_10024f3ba((long)pvVar4 + 0x18);
            operator_delete(pvVar4);
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_b68 = 0x8220202;
            uStack_b64 = 0x7a0a90;
            uStack_b60 = 1;
            local_b5c = 0x400;
            local_b5a = (char *)CONCAT44(local_b5a._4_4_,iVar6);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_b68,0x12);
          }
        }
      }
      FUN_100249fca(local_b88);
      FUN_100249ea6(local_c0);
      goto LAB_10051e729;
    }
  }
  else if ((iVar6 == 0x69506f64) || (iVar6 == 0x69506f74)) goto LAB_10051e0b9;
  uVar9 = FUN_1001cc310();
  cVar5 = _os_log_type_enabled(uVar9,0x10);
  if (cVar5 != '\0') {
    local_b68 = 0x8220202;
    uStack_b64 = 0x7a0a90;
    uStack_b60 = 1;
    local_b5c = 0x822;
    local_b5a = 
    "(handlerData->deviceClass == kITIPodDeviceClassAppleIPod) || (handlerData->deviceClass == kITIPodDeviceClassAppleIPodTouch) || (handlerData->deviceClass == kITIPodDeviceClassAppleIPhone) || (handlerData->deviceClass == kITIPodDeviceClassAppleIPad)"
    ;
    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_b68,0x16);
  }
  FUN_1001782e9(0,0);
LAB_10051e729:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

