// name: FUN_10036c8bb
// address: 10036c8bb

int FUN_10036c8bb(long param_1,long param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 local_e0 [8];
  long local_d8;
  long local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 local_bc;
  int local_ba;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 local_b2;
  undefined4 local_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined2 local_a8;
  undefined4 local_a6;
  undefined4 uStack_a2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  long local_58 [2];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      pcVar7 = "device != nullptr";
LAB_10036ca2a:
      local_bc = 0x822;
      uStack_be = 0;
      uStack_c0 = 1;
      local_c4 = 0x7a0a90;
      local_c8 = 0x8220202;
      local_ba = (int)pcVar7;
      uStack_b6 = (undefined2)((ulong)pcVar7 >> 0x20);
      uStack_b4 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
    }
  }
  else if (param_2 == 0) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      pcVar7 = "appIdentifier != nullptr";
      goto LAB_10036ca2a;
    }
  }
  else {
    if (param_3 != (void *)0x0) {
      FUN_1001c62d9(param_3,0x420);
      lVar5 = FUN_10036d183(param_1,param_2);
      local_d0 = lVar5;
      if (lVar5 == 0) {
LAB_10036caaa:
        local_40 = &cf_Command;
        local_48 = &cf_VendDocuments;
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_6a = 0;
        local_58[0] = 0;
        local_58[1] = 0;
        iVar4 = FUN_1005b7cbc(param_1);
        if (iVar4 == -0x80) {
LAB_10036ccbc:
          cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar3 != '\0') {
            local_c8 = 0x4000100;
            local_c4 = iVar4;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDeviceConnectAndStartSession failed (0x%08X)",&local_c8,8);
          }
        }
        else {
          if (iVar4 != 0) {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            if (cVar3 != '\0') {
              local_c8 = 0x8220202;
              local_c4 = 0x7a0a90;
              uStack_c0 = 1;
              uStack_be = 0;
              local_bc = 0x400;
              local_ba = iVar4;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_c8,0x12);
            }
            goto LAB_10036ccbc;
          }
          lVar5 = FUN_1001713ff(DAT_1008c4d90,&local_40,&local_48,1,
                                PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if (lVar5 == 0) {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            if (cVar3 != '\0') {
              local_c8 = 0x8220202;
              local_c4 = 0x7a0a90;
              uStack_c0 = 1;
              uStack_be = 0;
              local_bc = 0x822;
              local_ba = 0x7a2c1f;
              uStack_b6 = 1;
              uStack_b4 = 0;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
            }
            FUN_1001782e9(0,0);
            iVar4 = -0x6c;
          }
          else {
            iVar4 = _AMDeviceCreateHouseArrestService(param_1,param_2,lVar5,local_58);
            uVar1 = uStack_a2;
            uStack_a2 = (undefined4)((ulong)param_1 >> 0x20);
            uVar2 = uStack_a2;
            uStack_a2 = uVar1;
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                if (cVar3 != '\0') {
                  local_d8 = local_58[0];
                  uVar8 = _AMDeviceCopyDeviceIdentifier(param_1);
                  FUN_1001aaedc(local_e0,uVar8);
                  local_c8 = 0x8000402;
                  local_c4 = (int)local_d8;
                  uStack_c0 = (undefined2)((ulong)local_d8 >> 0x20);
                  uStack_be = (undefined2)((ulong)local_d8 >> 0x30);
                  local_bc = 0x842;
                  local_ba = (int)param_2;
                  uStack_b6 = (undefined2)((ulong)param_2 >> 0x20);
                  uStack_b4 = (undefined2)((ulong)param_2 >> 0x30);
                  local_b2 = 0x842;
                  local_b0 = local_e0._0_4_;
                  uStack_ac = local_e0._4_2_;
                  uStack_aa = local_e0._6_2_;
                  local_a8 = 0x800;
                  local_a6 = (undefined4)param_1;
                  uStack_a2 = uVar2;
                  __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                                "created AFC connection %p for identifier \"%{public}@\" for device %{public}@ (%p)"
                                ,&local_c8,0x2a);
                  FUN_1001ab006(local_e0);
                }
                _AFCConnectionSetDisposeSecureContextOnInvalidate(local_58[0],1);
                _AFCConnectionSetCallBack(local_58[0],FUN_10037059a);
                iVar4 = FUN_10036fcd3(param_1,&local_78,local_58,"Documents",param_2,&local_d0);
                if (iVar4 == 0) {
                  iVar4 = 0;
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar3 != '\0') {
                    local_c8 = 0x8220202;
                    local_c4 = 0x7a0a90;
                    uStack_c0 = 1;
                    uStack_be = 0;
                    local_bc = 0x400;
                    local_ba = iVar4;
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_c8,
                                        0x12);
                  }
                }
                goto LAB_10036cd79;
              }
              local_d8 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(local_d8,0x10);
              if (cVar3 != '\0') {
                local_c8 = 0x8220202;
                local_c4 = 0x7a0a90;
                uStack_c0 = 1;
                uStack_be = 0;
                local_bc = 0x400;
                local_ba = iVar4;
                __os_log_error_impl(0x100000000,local_d8,0x10,"%{public}s: err == (%d)",&local_c8,
                                    0x12);
              }
            }
            cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
            if (cVar3 != '\0') {
              uVar8 = _AMDeviceCopyDeviceIdentifier(param_1);
              FUN_1001aaedc(local_e0,uVar8);
              local_c8 = 0x4000402;
              uStack_c0 = 0x842;
              uStack_be = (undefined2)param_2;
              local_bc = (undefined2)((ulong)param_2 >> 0x10);
              local_ba = (int)((ulong)param_2 >> 0x20);
              uStack_b6 = 0x842;
              uStack_b4 = local_e0._0_2_;
              local_b2 = local_e0._2_2_;
              local_b0 = local_e0._4_4_;
              uStack_ac = 0x800;
              uStack_aa = (undefined2)param_1;
              local_a8 = (undefined2)((ulong)param_1 >> 0x10);
              local_c4 = iVar4;
              local_a6 = uVar2;
              __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                  "AMDeviceCreateHouseArrestService failed (0x%08X) for identifier \"%{public}@\" for device %{public}@ (%p)"
                                  ,&local_c8,0x26);
              FUN_1001ab006(local_e0);
            }
          }
LAB_10036cd79:
          FUN_10017060f(lVar5);
          if (local_58[0] != 0 && iVar4 != 0) {
            _AFCConnectionInvalidate();
            FUN_10017060f(local_58[0]);
          }
          FUN_1005b8595(param_1);
        }
        if (iVar4 == -0x80) goto LAB_10036ca5e;
        if (iVar4 != 0) {
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          if (cVar3 != '\0') {
            local_c8 = 0x8220202;
            local_c4 = 0x7a0a90;
            uStack_c0 = 1;
            uStack_be = 0;
            local_bc = 0x400;
            local_ba = iVar4;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_c8,0x12);
          }
          goto LAB_10036ca5e;
        }
        if (*(int *)(local_d0 + 8) != 2) {
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          if (cVar3 != '\0') {
            local_c8 = 0x8220202;
            local_c4 = 0x7a0a90;
            uStack_c0 = 1;
            uStack_be = 0;
            local_bc = 0x822;
            local_ba = 0x7c5862;
            uStack_b6 = 1;
            uStack_b4 = 0;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_10036d4d2(local_d0);
        lVar5 = local_d0;
      }
      else {
        lVar6 = FUN_10036d2f1(lVar5,0);
        if (lVar6 == 0) {
LAB_10036ca87:
          FUN_10036d4d2(lVar5);
          FUN_10036d4d2(lVar5);
          local_d0 = 0;
          FUN_10017060f(lVar6);
          goto LAB_10036caaa;
        }
        cVar3 = _AFCConnectionIsValid(lVar6);
        if (cVar3 == '\0') goto LAB_10036ca87;
        FUN_10017060f(lVar6);
      }
      _memcpy(param_3,(void *)(lVar5 + 0x10),0x420);
      iVar4 = FUN_10017d477(param_3,&local_c8,0);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          if ((char)local_c8 != '\0') {
LAB_10036cf15:
            iVar4 = 0;
            goto LAB_10036ca5e;
          }
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          if (cVar3 != '\0') {
            local_78 = 0x8220202;
            uStack_74 = 0x7a0a90;
            uStack_70 = 1;
            uStack_6c = 0x822;
            uStack_6a = 0x5882;
            uStack_68 = 0x7c;
            uStack_66 = 1;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
          }
          FUN_1001782e9(0,0);
          iVar4 = -0x57f;
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar8,0x10);
          if (cVar3 != '\0') {
            local_78 = 0x8220202;
            uStack_74 = 0x7a0a90;
            uStack_70 = 1;
            uStack_6c = 0x400;
            uStack_6a = (undefined2)iVar4;
            uStack_68 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_78,0x12);
          }
          if (iVar4 == 0) goto LAB_10036cf15;
        }
      }
      FUN_10036d4d2(local_d0);
      goto LAB_10036ca5e;
    }
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      pcVar7 = "volumeSpec != nullptr";
      goto LAB_10036ca2a;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_10036ca5e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

