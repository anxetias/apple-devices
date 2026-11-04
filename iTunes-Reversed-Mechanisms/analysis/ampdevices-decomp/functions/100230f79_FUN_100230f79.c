// name: FUN_100230f79
// address: 100230f79

long FUN_100230f79(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inBookKitAssetID != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"failed to create BKAgent: %{public}@",&local_58,
                          0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  else if (param_1 != 0) {
    do {
      cVar1 = FUN_100474865(param_1);
      if (cVar1 == '\b') {
        FUN_10047d1cb(&local_58,param_1,PTR_cf_bookkit_asset_id_100844b50);
        cVar1 = FUN_1001b8428(&local_58);
        if (cVar1 == '\0') {
          FUN_1001b7eb0(local_68,param_2);
          iVar2 = FUN_1001b9c66(&local_58,local_68);
          FUN_1001b7a50(local_68);
          FUN_1001b7a50(&local_58);
          if (iVar2 == 0) goto LAB_100231061;
        }
        else {
          FUN_1001b7a50(&local_58);
        }
      }
      param_1 = FUN_1002f9451(param_1);
    } while (param_1 != 0);
  }
  param_1 = 0;
LAB_100231061:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

