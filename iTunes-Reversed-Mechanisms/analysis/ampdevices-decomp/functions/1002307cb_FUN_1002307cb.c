// name: FUN_1002307cb
// address: 1002307cb

undefined8 FUN_1002307cb(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  code *local_50;
  code *local_48;
  dispatch_semaphore_t local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_6c = param_2;
  FUN_1002304d1();
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x2408;
      local_58 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar5,0x10,"failed to create BKAgent: %{public}@",&local_68,
                          0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = FUN_10016ff43(0,param_1);
    if (lVar3 == 0) {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        uStack_64 = 0x7a0a90;
        local_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0xe8d;
        local_58 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar5,0x10,"failed to create BKAgent: %{public}@",&local_68,
                            0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      uVar5 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      local_88 = &local_90;
      local_90 = 0;
      local_80 = 0x2020000000;
      local_78 = 0;
      local_68 = 0;
      uStack_64 = 0;
      local_60 = SUB84(&local_68,0);
      uStack_5c = (undefined2)((ulong)&local_68 >> 0x20);
      uStack_5a = (undefined2)((ulong)&local_68 >> 0x30);
      local_58 = 0x3032000000;
      uStack_52 = 0;
      local_50 = FUN_1002306c0;
      local_48 = FUN_1002306d6;
      local_40 = _dispatch_semaphore_create(0);
      uVar4 = _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_10082c770)(lVar2,PTR_s_addInterruptionHandler__10088c3e8,uVar4);
      (*(code *)PTR__objc_msgSend_10082c770)
                (lVar2,PTR_s_examineBook_includeCover_withRep_10088c408,lVar3,(undefined1)local_6c);
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(CONCAT26(uStack_5a,CONCAT24(uStack_5c,local_60)) + 0x28),
                 0xffffffffffffffff);
      (*(code *)PTR__objc_msgSend_10082c770)(lVar2,PTR_s_removeInterruptionHandler__10088c3f8,uVar4)
      ;
      FUN_10017060f(lVar3);
      uVar5 = local_88[3];
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      __Block_object_dispose(&local_68,8);
      (*(code *)PTR__objc_release_10082c7b0)(local_40);
      __Block_object_dispose(&local_90,8);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

