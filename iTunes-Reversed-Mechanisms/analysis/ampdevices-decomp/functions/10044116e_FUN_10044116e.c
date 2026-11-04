// name: FUN_10044116e
// address: 10044116e

undefined8 FUN_10044116e(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44();
  FUN_10043e902(param_2);
  if (*(long *)(param_2 + 0x498) == 0) {
    uVar3 = FUN_1001cc310();
  }
  else {
    FUN_1004406ae(param_2,1,0);
    FUN_10043e902(param_2);
    if (*(long *)(param_2 + 0x498) != 0) {
      FUN_1004406ae(param_2,1,0);
      lVar2 = _AVCFAssetCopyMetadataForFormat
                        (*(undefined8 *)(param_2 + 0x498),
                         *(undefined8 *)PTR__AVCFMetadataFormatQuickTimeUserData_10082b260);
      if (lVar2 != 0) {
        FUN_100440ac4(lVar2,*(undefined8 *)PTR__AVCFMetadataQuickTimeUserDataKeyCopyright_10082b340,
                      0,param_1);
      }
      FUN_10017060f(0);
      FUN_10017060f(lVar2);
      goto LAB_100441243;
    }
    uVar3 = FUN_1001cc310();
  }
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "mAsset != __null";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  FUN_1001782e9(0,0);
LAB_100441243:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

