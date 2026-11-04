// name: FUN_10043e902
// address: 10043e902

void FUN_10043e902(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_4d0;
  undefined1 local_4cc [1124];
  long local_68;
  undefined8 local_60;
  undefined1 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[0x93] != 0) goto LAB_10043eb34;
  FUN_1001c62d9(&local_4d0,0x488);
  local_4d0 = *(undefined4 *)((long)param_1 + 0x1c);
  _memcpy(local_4cc,param_1 + 4,0x460);
  local_68 = (**(code **)(*param_1 + 0x30))(param_1);
  local_60 = FUN_10043ebfa(param_1);
  lVar4 = param_1[0xa9];
  if (lVar4 != 0) {
    if (local_68 == 0) {
      lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      local_68 = lVar3;
      if (lVar3 == 0) goto LAB_10043ea58;
    }
    else {
      lVar3 = FUN_100171413(DAT_1008c4d90,0);
      if (lVar3 == 0) {
LAB_10043ea58:
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "optionsDict != __null";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10043ea7e;
      }
      FUN_10017060f(local_68);
    }
    local_68 = lVar3;
    lVar4 = FUN_100166844(lVar4,PTR_cf_sinfs_100845a28);
    if ((lVar4 != 0) &&
       (lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140), lVar5 != 0)) {
      FUN_100171502(lVar5,PTR_cf_sinfs_1008529f0,lVar4);
      FUN_100171502(lVar3,*(undefined8 *)PTR__AVCFURLAssetPurchaseBundleKey_10082b498,lVar5);
      FUN_10017060f(lVar5);
    }
    local_50 = 1;
  }
LAB_10043ea7e:
  lVar4 = FUN_10046fb2b(&local_4d0);
  param_1[0x93] = lVar4;
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_10017060f(local_68);
    iVar2 = -0x7b;
  }
  else {
    lVar4 = _PFVideoAVCFObjectBuilderCreateWithVideoAsset(0,lVar4,0);
    param_1[0x94] = lVar4;
    if ((lVar4 != 0) && (lVar4 = _PFVideoAVCFObjectBuilderCopyAVCFAsset(lVar4,0), lVar4 != 0)) {
      FUN_10017060f(param_1[0x93]);
      param_1[0x93] = lVar4;
    }
    iVar2 = FUN_10043ece4(param_1,1);
    FUN_10017060f(local_68);
    if (iVar2 == 0) goto LAB_10043eb34;
  }
  if ((int)param_1[0x97] == 0) {
    *(int *)(param_1 + 0x97) = iVar2;
  }
LAB_10043eb34:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

