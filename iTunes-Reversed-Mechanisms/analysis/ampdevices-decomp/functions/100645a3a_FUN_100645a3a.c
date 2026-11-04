// name: FUN_100645a3a
// address: 100645a3a

void FUN_100645a3a(void)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_38;
  int iStack_34;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = _objc_autoreleasePoolPush();
  FUN_10025b7fa(&local_38);
  DAT_1008c34b8 = FUN_10046b98c(CONCAT44(iStack_34,local_38));
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  _objc_autoreleasePoolPop(uVar3);
  if (DAT_1008c34b8 == 0) {
    FUN_1001c703f(&DAT_1008c3448,FUN_100645c85,0);
    uVar3 = FUN_1001c156e();
    FUN_1001c6b4a(uVar3,&DAT_1008c3448);
    plVar4 = (long *)FUN_10039a28c();
    uVar3 = (**(code **)(*plVar4 + 0x58))(plVar4);
    FUN_1001c6b4a(uVar3,&DAT_1008c3448);
    uVar5 = _objc_opt_new(&objc::class_t::AMPDeviceProgressMap);
    uVar3 = DAT_1008c3488;
    DAT_1008c3488 = uVar5;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar5 = _objc_opt_new(&objc::class_t::AMPDeviceProgressMap);
    uVar3 = DAT_1008c3490;
    DAT_1008c3490 = uVar5;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar5 = _objc_opt_new(&objc::class_t::AMPDeviceProgressMap);
    uVar3 = DAT_1008c3498;
    DAT_1008c3498 = uVar5;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar5 = _objc_opt_new(&objc::class_t::AMPDeviceProgressMap);
    uVar3 = DAT_1008c34a0;
    DAT_1008c34a0 = uVar5;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar5 = _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
    uVar3 = DAT_1008c34a8;
    DAT_1008c34a8 = uVar5;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  else {
    uVar3 = FUN_100642e20();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x4000100;
      iStack_34 = DAT_1008c34b8;
      __os_log_impl(0x100000000,uVar3,0x10,"Failed to initialize full service: %d",&local_38,8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_10025b7fa(&local_38);
    FUN_100469b0a(CONCAT44(iStack_34,local_38),"failed to init full service");
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

