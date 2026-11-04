// name: FUN_100448fa6
// address: 100448fa6

ulong FUN_100448fa6(long *param_1)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)((long)param_1 + 0x44) == '\0') {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xee88;
      uStack_48 = 0x7c;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar8 = 0x234f;
  }
  else {
    (**(code **)(*param_1 + 0x50))();
    uVar8 = 0xffffffd9;
    if ((char)param_1[0x1c] == '\0') {
      lVar5 = _AVCFAssetReaderOutputCopyNextSampleBuffer(param_1[7]);
      if (lVar5 == 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0001004491dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (**(code **)(*param_1 + 0x30))(param_1,1);
          return uVar8;
        }
        goto LAB_10044930e;
      }
      uVar3 = _CMSampleBufferMakeDataReady(lVar5);
      uVar8 = (ulong)uVar3;
      if (uVar3 != 0xffffff80) {
        if (uVar3 == 0) {
          param_1[0xf] = lVar5;
          _CFRetain(lVar5);
          *(undefined1 *)(param_1 + 0xe) = 1;
          _CMSampleBufferGetPresentationTimeStamp(&local_58,lVar5);
          param_1[0x14] = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
          *(undefined4 *)(param_1 + 0x12) = local_58;
          *(undefined4 *)((long)param_1 + 0x94) = uStack_54;
          *(undefined4 *)(param_1 + 0x13) = uStack_50;
          *(uint *)((long)param_1 + 0x9c) = CONCAT22(uStack_4a,uStack_4c);
          _CMSampleBufferGetOutputDuration(&local_58,lVar5);
          param_1[0x17] = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
          param_1[0x15] = CONCAT44(uStack_54,local_58);
          param_1[0x16] = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
          lVar10 = param_1[0x17];
          uVar4 = (undefined4)param_1[0x15];
          uVar9 = (undefined4)param_1[0x16];
          dVar1 = (double)_CMTimeGetSeconds();
          *(int *)((long)param_1 + 0x84) = (int)(long)(dVar1 * (double)param_1[9]);
          lVar6 = _CMSampleBufferGetDataBuffer(lVar5);
          if (lVar6 == 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0xee92;
              uStack_48 = 0x7c;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16,
                                  uVar4,uVar9,lVar10);
            }
            FUN_1001782e9(0,0);
            uVar8 = 0xffffffce;
          }
          else {
            uVar4 = _CMBlockBufferGetDataLength(lVar6);
            *(undefined4 *)((long)param_1 + 0x8c) = uVar4;
            uVar8 = 0;
            if (param_1[4] != 0) {
              _CMTimeConvertScale(&local_58,1000,1);
              lVar10 = CONCAT44(uStack_54,local_58);
              _CMTimeConvertScale(&local_58,1000,1);
              if (param_1[4] + param_1[3] <= lVar10 + CONCAT44(uStack_54,local_58)) {
                *(undefined1 *)(param_1 + 0x1c) = 1;
                uVar8 = 0;
              }
            }
          }
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x400;
            uStack_4a = (undefined2)uVar3;
            uStack_48 = (undefined2)(uVar3 >> 0x10);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
      _CFRelease(lVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8;
  }
LAB_10044930e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

