// name: FUN_100444f12
// address: 100444f12

ulong FUN_100444f12(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  char *pcStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = *(undefined8 *)(PTR__kCMTimeZero_10082bc18 + 0x10);
  local_88 = *(undefined4 *)PTR__kCMTimeZero_10082bc18;
  uStack_84 = *(undefined4 *)(PTR__kCMTimeZero_10082bc18 + 4);
  uStack_80 = *(undefined4 *)(PTR__kCMTimeZero_10082bc18 + 8);
  uStack_7c = *(undefined4 *)(PTR__kCMTimeZero_10082bc18 + 0xc);
  if (*(int *)(param_1 + 0x1c) != 0x44574e4c) {
    uVar8 = 0;
    goto LAB_10044509a;
  }
  if (*(long *)(param_1 + 0x4a8) == 0) {
    FUN_10043f0e2(param_1);
    if (*(long *)(param_1 + 0x4a8) == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_68 = 0x8220202;
        pcStack_64 = "Assertion failure";
        uStack_5c = 0x822;
        uStack_5a = 0xec72;
        uStack_58 = 0x1007c;
        uStack_54 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      uVar8 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10044509a;
    }
  }
  lVar4 = _AVCFPlayerItemCopyLoadedTimeRanges();
  if (lVar4 == 0) {
LAB_100445090:
    uVar8 = 0;
  }
  else {
    lVar5 = FUN_10017076e(lVar4);
    if (lVar5 < 1) goto LAB_100445090;
    lVar9 = 0;
    local_90 = param_2;
    do {
      lVar6 = FUN_10016499b(lVar4,lVar9);
      if (lVar6 != 0) {
        _CMTimeRangeMakeFromDictionary(&local_68,lVar6);
        _CMTimeRangeGetEnd(&local_a8);
        iVar3 = FUN_1005d1376(0);
        if (0 < iVar3) {
          local_78 = local_98;
          local_88 = local_a8;
          uStack_84 = uStack_a4;
          uStack_80 = uStack_a0;
          uStack_7c = uStack_9c;
        }
      }
      puVar1 = local_90;
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    uVar8 = CONCAT71((int7)((ulong)&local_a8 >> 8),1);
    if (local_90 != (undefined4 *)0x0) {
      _CMTimeConvertScale(&local_68,1000,1);
      *puVar1 = local_68;
    }
  }
  FUN_10017060f(lVar4);
LAB_10044509a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

