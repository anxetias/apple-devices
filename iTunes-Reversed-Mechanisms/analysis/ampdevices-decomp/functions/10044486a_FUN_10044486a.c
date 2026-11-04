// name: FUN_10044486a
// address: 10044486a

undefined8 FUN_10044486a(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_140 [2];
  undefined4 uStack_138;
  undefined8 local_130;
  long local_128;
  long local_110;
  long local_108;
  long local_100;
  int local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined4 local_9c;
  long local_98;
  int iStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *(long *)(param_1 + 0x4a8);
  local_9c = param_3;
  if (lVar5 == 0) {
    FUN_10043f0e2(param_1);
    lVar5 = *(long *)(param_1 + 0x4a8);
    if (lVar5 == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0xe887;
        uStack_68 = 0x1007c;
        uStack_64 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      uVar7 = 0xffffffce;
      goto LAB_100444ccc;
    }
  }
  _CMTimeMake(&local_98,param_2,1000);
  _AVCFPlayerItemGetCurrentTime(local_140,*(undefined8 *)(param_1 + 0x4a8));
  uVar11 = CONCAT44(uStack_84,local_88);
  uVar10 = CONCAT44(uStack_8c,iStack_90);
  lVar8 = local_98;
  iVar4 = FUN_1005d1376(1);
  plVar9 = (long *)PTR__kCMTimeZero_10082bc18;
  uVar7 = 0;
  if (iVar4 != 0) {
    local_128 = local_98;
    local_80 = *(long *)PTR__kCMTimeZero_10082bc18;
    local_f8 = *(int *)(PTR__kCMTimeZero_10082bc18 + 8);
    uStack_f4 = *(uint *)(PTR__kCMTimeZero_10082bc18 + 0xc);
    uStack_f0 = *(undefined4 *)(PTR__kCMTimeZero_10082bc18 + 0x10);
    uStack_ec = *(undefined4 *)(PTR__kCMTimeZero_10082bc18 + 0x14);
    if (*(int *)(param_1 + 0x1c) == 0x44574e4c) {
      if ((*(long *)(param_1 + 0x4a8) == 0) &&
         (FUN_10043f0e2(param_1), *(long *)(param_1 + 0x4a8) == 0)) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_78 = 0x8220202;
          uStack_74 = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0xec72;
          uStack_68 = 0x1007c;
          uStack_64 = 0;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16,
                              local_140[0],uStack_138,local_130,lVar8,uVar10,uVar11);
        }
        FUN_1001782e9(0,0);
      }
      else {
        local_100 = lVar5;
        lVar5 = _AVCFPlayerItemCopyLoadedTimeRanges();
        if (lVar5 != 0) {
          local_a8 = param_4;
          local_110 = FUN_10017076e(lVar5);
          if (0 < local_110) {
            lVar8 = 0;
            local_108 = lVar5;
            do {
              lVar6 = FUN_10016499b(lVar5,lVar8);
              if (lVar6 != 0) {
                _CMTimeRangeMakeFromDictionary(&local_78,lVar6);
                lStack_d0 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
                lStack_c8 = CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
                local_d8 = CONCAT44(uStack_74,local_78);
                local_b8 = local_58;
                uStack_b0 = uStack_50;
                lStack_c0 = lStack_60;
                local_48 = lStack_d0;
                lStack_40 = lStack_c8;
                _CMTimeRangeGetEnd(&local_78);
                uVar2 = uStack_74;
                uVar1 = local_78;
                lVar6 = CONCAT44(uStack_74,local_78);
                local_e8 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
                uStack_e0 = CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
                uStack_70 = (undefined4)local_48;
                uStack_6c = (undefined2)((ulong)local_48 >> 0x20);
                uStack_6a = (undefined2)((ulong)local_48 >> 0x30);
                uStack_68 = (undefined4)lStack_40;
                uStack_64 = (undefined2)((ulong)lStack_40 >> 0x20);
                uStack_62 = (undefined2)((ulong)lStack_40 >> 0x30);
                local_78 = 0;
                uStack_74 = 0;
                lStack_60 = lVar6;
                local_58 = local_e8;
                uStack_50 = uStack_e0;
                cVar3 = _CMTimeRangeContainsTime();
                plVar9 = (long *)PTR__kCMTimeZero_10082bc18;
                param_4 = local_a8;
                if (cVar3 != '\0') goto LAB_100444bf0;
                uStack_70 = (undefined4)local_e8;
                uStack_6c = (undefined2)((ulong)local_e8 >> 0x20);
                uStack_6a = (undefined2)((ulong)local_e8 >> 0x30);
                uStack_68 = (undefined4)uStack_e0;
                uStack_64 = (undefined2)((ulong)uStack_e0 >> 0x20);
                uStack_62 = (undefined2)((ulong)uStack_e0 >> 0x30);
                local_d8 = local_80;
                lStack_d0 = CONCAT44(uStack_f4,local_f8);
                lStack_c8 = CONCAT44(uStack_ec,uStack_f0);
                local_78 = uVar1;
                uStack_74 = uVar2;
                iVar4 = FUN_1005d1376(0);
                lVar5 = local_108;
                if (0 < iVar4) {
                  local_f8 = (int)local_e8;
                  uStack_f4 = local_e8._4_4_;
                  uStack_f0 = (undefined4)uStack_e0;
                  uStack_ec = uStack_e0._4_4_;
                  local_80 = lVar6;
                }
              }
              lVar8 = lVar8 + 1;
            } while (local_110 != lVar8);
          }
          plVar9 = (long *)PTR__kCMTimeZero_10082bc18;
          param_4 = local_a8;
          if (local_80 != 0) {
            local_98 = local_80;
            iStack_90 = local_f8;
            uStack_8c = uStack_f4;
            local_88 = uStack_f0;
            uStack_84 = uStack_ec;
          }
        }
LAB_100444bf0:
        FUN_10017060f(lVar5);
        lVar5 = local_100;
      }
    }
    uVar7 = 0;
    if ((char)local_9c == '\0') {
      _AVCFPlayerItemSeekToTime(lVar5);
    }
    else {
      lStack_c8 = plVar9[2];
      uStack_68 = (undefined4)lStack_c8;
      uStack_64 = (undefined2)((ulong)lStack_c8 >> 0x20);
      uStack_62 = (undefined2)((ulong)lStack_c8 >> 0x30);
      local_d8 = *plVar9;
      lStack_d0 = plVar9[1];
      local_78 = (undefined4)local_d8;
      uStack_74 = (undefined4)((ulong)local_d8 >> 0x20);
      uStack_70 = (undefined4)lStack_d0;
      uStack_6c = (undefined2)((ulong)lStack_d0 >> 0x20);
      uStack_6a = (undefined2)((ulong)lStack_d0 >> 0x30);
      _AVCFPlayerItemSeekToTimeWithTolerance(lVar5);
    }
    if (param_4 != (long *)0x0) {
      uVar7 = 0;
      if ((uStack_8c & 0x1d) == 1) {
        lVar5 = local_98;
        if ((long)iStack_90 != 1000) {
          lVar5 = (local_98 * 1000) / (long)iStack_90;
        }
      }
      else {
        lVar5 = 0;
      }
      *param_4 = lVar5;
    }
  }
LAB_100444ccc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

