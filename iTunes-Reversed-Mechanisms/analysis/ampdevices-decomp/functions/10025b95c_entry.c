// name: entry
// address: 10025b95c

undefined8 entry(void)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  dispatch_object_t dVar9;
  char *pcVar10;
  undefined **local_78 [4];
  undefined ***local_58;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = _objc_autoreleasePoolPush();
  _pthread_setname_np("AMPDevicesAgent main");
  uVar7 = FUN_10025b8e3();
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  cVar4 = _os_signpost_enabled(uVar7);
  if (cVar4 != '\0') {
    local_48 = local_48 & 0xffff0000;
    __os_signpost_emit_with_name_impl
              (0x100000000,uVar7,1,0xeeeeb0b5b2b2eeee,"launch","",&local_48,2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  FUN_1001ebc98();
  iVar5 = FUN_1001c13d5();
  if (iVar5 == -0x80) goto LAB_10025bc6e;
  if (iVar5 != 0) {
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar5;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    goto LAB_10025bc6e;
  }
  local_78[0] = &PTR_FUN_10083f0f0;
  local_58 = local_78;
  FUN_10017866e(local_78);
  if (local_58 == local_78) {
    lVar8 = 0x20;
LAB_10025ba87:
    (**(code **)((long)*local_58 + lVar8))();
  }
  else {
    lVar8 = 0x28;
    if (local_58 != (undefined ***)0x0) goto LAB_10025ba87;
  }
  iVar5 = FUN_1001ed9f1(1);
  if (iVar5 == -0x80) goto LAB_10025bc6e;
  if (iVar5 != 0) {
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar5;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    goto LAB_10025bc6e;
  }
  iVar5 = FUN_10018d9b0(0);
  if (iVar5 == -0x80) goto LAB_10025bc6e;
  if (iVar5 != 0) {
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar5;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    goto LAB_10025bc6e;
  }
  FUN_1001c19f2(FUN_1002cf13c);
  _sqlite3_activate_see(0);
  iVar5 = FUN_100469dd0(&DAT_1008a2e70);
  if (iVar5 == 0) {
    iVar5 = FUN_10046bbe8(DAT_1008a2e70);
    if (iVar5 == 0) {
      _signal(0xf);
      dVar9._os_obj =
           (_os_object_s *)
           _dispatch_source_create
                     ((dispatch_source_type_t)PTR___dispatch_source_type_signal_10082cb68,0xf,0,
                      (dispatch_queue_t)PTR___dispatch_main_q_10082cb60);
      _dispatch_source_set_event_handler(dVar9._os_obj,&PTR___NSConcreteGlobalBlock_10083f0a0);
      _dispatch_resume(dVar9);
      _signal(0x1e);
      puVar2 = PTR___dispatch_main_q_10082cb60;
      dVar9._os_obj =
           (_os_object_s *)
           _dispatch_source_create
                     ((dispatch_source_type_t)PTR___dispatch_source_type_signal_10082cb68,0x1e,0,
                      (dispatch_queue_t)PTR___dispatch_main_q_10082cb60);
      (*(code *)PTR__objc_release_10082c7b0)(puVar2);
      _dispatch_source_set_event_handler(dVar9._os_obj,&PTR___NSConcreteGlobalBlock_10083f0c0);
      _dispatch_resume(dVar9);
      FUN_10046c2a2(DAT_1008a2e70);
      FUN_10046c38a(DAT_1008a2e70);
                    /* WARNING: Subroutine does not return */
      __exit(0);
    }
    cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar4 != '\0') {
      local_44 = (char *)CONCAT44(local_44._4_4_,iVar5);
      pcVar10 = "ERROR: AMPDevicesAgent::Initialize() failed! error:%d";
      goto LAB_10025bd6a;
    }
  }
  else {
    cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar4 != '\0') {
      local_44 = (char *)CONCAT44(local_44._4_4_,iVar5);
      pcVar10 = "ERROR: AMPDevicesAgent::Create() failed! error:%d";
LAB_10025bd6a:
      local_48 = 0x4000100;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,pcVar10,&local_48,8);
    }
  }
  plVar3 = DAT_1008a2e78;
  DAT_1008a2e70 = 0;
  DAT_1008a2e78 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10025bc6e:
  _objc_autoreleasePoolPop(uVar6);
  FUN_1001c147c();
  FUN_1001e8daa();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 1;
}

