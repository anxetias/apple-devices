// name: FUN_10043ece4
// address: 10043ece4

undefined8 FUN_10043ece4(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *(long *)(param_1 + 0x498);
  if (lVar4 == 0) {
    FUN_10043e902(param_1);
    lVar4 = *(long *)(param_1 + 0x498);
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "asset != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar3 = 0;
      FUN_1001782e9(0,0);
      lVar2 = 0;
      goto LAB_10043ee18;
    }
  }
  lVar2 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "properties != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
  }
  else {
    if (0 < param_2) {
      FUN_1001709a5(lVar2,*(undefined8 *)PTR__AVCFAssetPropertyDuration_10082b140);
      FUN_1001709a5(lVar2,*(undefined8 *)PTR__AVCFAssetPropertyCommonMetadata_10082b138);
      FUN_1001709a5(lVar2,*(undefined8 *)PTR__AVCFAssetPropertyAvailableMetadataFormats_10082b130);
      _AVCFAssetLoadValuesAsynchronouslyForProperties
                (lVar4,lVar2,FUN_10043eee6,*(undefined4 *)(param_1 + 0x490));
    }
    uVar3 = 0;
    if ((param_2 == 3) || (param_2 == 2)) {
      FUN_10043f0e2(param_1);
      FUN_10043f63a(param_1);
    }
  }
LAB_10043ee18:
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

