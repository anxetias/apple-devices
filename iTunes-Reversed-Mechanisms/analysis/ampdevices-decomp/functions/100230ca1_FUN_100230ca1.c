// name: FUN_100230ca1
// address: 100230ca1

long FUN_100230ca1(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1002307cb(param_1,1);
  if (lVar2 != 0) {
    uVar3 = FUN_10016696d(lVar2,&cf_BKCoverImageData);
    lVar4 = FUN_1001705fc(uVar3);
    if (lVar4 != 0) goto LAB_100230d5b;
    uVar3 = FUN_10023046d();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,1);
    if (cVar1 != '\0') {
      local_34 = FUN_100166c1b(lVar2,&cf_itemName);
      local_38 = 0x8420102;
      __os_log_impl(0x100000000,uVar3,1,
                    "bookkit> missing BKCoverImageData key in metadata for book \"%{public}@\"",
                    &local_38,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  lVar4 = 0;
LAB_100230d5b:
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

