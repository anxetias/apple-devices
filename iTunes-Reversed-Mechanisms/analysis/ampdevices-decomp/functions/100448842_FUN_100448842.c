// name: FUN_100448842
// address: 100448842

undefined8 FUN_100448842(long *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  (**(code **)(*param_1 + 0x38))();
  lVar5 = _AVCFAssetReaderOutputCopyOutputSettings(param_1[7]);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_4a = "settings != __null";
LAB_100448ae7:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    local_5c = 0;
    local_6c = 0;
    local_68 = 0;
    FUN_1001c62d9(param_2,0x28);
    cVar2 = FUN_100167740(lVar5,*(undefined8 *)PTR__AVCFFormatIDKey_10082b1f8,&local_6c);
    if (cVar2 == '\0') {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_4a = "JRCFDictionaryGetUInt32(inDict, AVCFFormatIDKey, &formatID)";
        goto LAB_100448ae7;
      }
    }
    else {
      fVar7 = (float)FUN_100167e9e(lVar5,*(undefined8 *)PTR__AVCFSampleRateKey_10082b470);
      if (fVar7 <= 0.0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_4a = "sampleRate > 0";
          goto LAB_100448ae7;
        }
      }
      else {
        local_64 = fVar7;
        cVar2 = FUN_100167740(lVar5,*(undefined8 *)PTR__AVCFNumberOfChannelsKey_10082b358,&local_5c)
        ;
        if (cVar2 == '\0') {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = "JRCFDictionaryGetUInt32(inDict, AVCFNumberOfChannelsKey, &numChannels)";
            goto LAB_100448ae7;
          }
        }
        else {
          cVar2 = FUN_100167740(lVar5,*(undefined8 *)PTR__AVCFLinearPCMBitDepthKey_10082b200,
                                &local_68);
          if (cVar2 != '\0') {
            uVar6 = 0;
            cVar2 = FUN_100167e71(lVar5,*(undefined8 *)PTR__AVCFLinearPCMIsBigEndianKey_10082b208,0)
            ;
            cVar3 = FUN_100167e71(lVar5,*(undefined8 *)PTR__AVCFLinearPCMIsFloatKey_10082b210,0);
            local_60 = (uint)(cVar3 == '\x01') + (uint)(cVar2 == '\x01') * 2;
            cVar4 = FUN_100167e71(lVar5,*(undefined8 *)
                                         PTR__AVCFLinearPCMIsNonInterleavedKey_10082b218,0);
            iVar1 = (cVar3 == '\x01') + 0x20 + (uint)(cVar2 == '\x01') * 2;
            if (cVar4 != '\x01') {
              iVar1 = local_60;
            }
            FUN_10015d7ff(local_64,local_5c,0,iVar1,param_2);
            goto LAB_100448b1b;
          }
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = "JRCFDictionaryGetUInt32(inDict, AVCFLinearPCMBitDepthKey, &bitDepth)";
            goto LAB_100448ae7;
          }
        }
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar6 = 0xffffffce;
LAB_100448b1b:
  FUN_10017060f(lVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

