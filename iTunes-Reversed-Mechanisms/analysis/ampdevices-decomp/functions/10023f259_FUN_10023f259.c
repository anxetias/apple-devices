// name: FUN_10023f259
// address: 10023f259

ulong FUN_10023f259(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
                   undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10023e02c(param_3);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "uti != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    if (param_5 < 1 || param_4 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        uVar6 = _PasteboardPutItemFlavor(*(undefined8 *)(param_1 + 0x78),param_2,lVar3,0,param_6);
        return uVar6;
      }
      goto LAB_10023f47b;
    }
    lVar4 = FUN_100170dc5(DAT_1008c4d90,param_4,param_5);
    if (lVar4 != 0) {
      uVar2 = _PasteboardPutItemFlavor(*(undefined8 *)(param_1 + 0x78),param_2,lVar3,lVar4,param_6);
      FUN_10017060f(lVar4);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return (ulong)uVar2;
      }
      goto LAB_10023f47b;
    }
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "flavorData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
    uVar6 = 0xffffff94;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
LAB_10023f47b:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

