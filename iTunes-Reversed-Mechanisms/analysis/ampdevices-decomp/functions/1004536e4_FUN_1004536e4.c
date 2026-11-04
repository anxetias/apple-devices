// name: FUN_1004536e4
// address: 1004536e4

void FUN_1004536e4(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined1 local_748 [72];
  undefined4 local_700 [2];
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined1 local_6d8 [72];
  undefined1 local_690 [16];
  undefined8 local_680;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = _objc_autoreleasePoolPush();
  local_700[0] = 0;
  local_6f8 = 0;
  uStack_6f0 = 0;
  local_6e8 = 0;
  IVar4 = NSMutableSet::set((ID)PTR__OBJC_CLASS___NSMutableSet_10082dfb8,PTR_s_set_10088cad8);
  local_6e0 = (*(code *)PTR__objc_retain_10082c7b8)(IVar4);
  local_680 = 0;
  iVar2 = FUN_1001601fd(local_6d8,10000000);
  if (iVar2 == -0x80) goto LAB_1004539b2;
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x400;
      local_44a = iVar2;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,0x12);
    }
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = iVar2;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
      goto LAB_1004539b2;
    }
  }
  iVar2 = FUN_100451790(0x400,0,&local_680);
  uVar5 = local_680;
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      IVar4 = MediaLibraryObserver::getInstance(0x10088e400,PTR_s_getInstance_10088d2d0);
      FUN_100453d55(local_700,uVar5,IVar4);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = iVar2;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
  }
  FUN_1001b7b04(local_690,"PhotosMLMediaLibrary.log");
  iVar2 = FUN_1003870d4(0x23,1,&local_458);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1001bb41a(local_690,local_658);
      FUN_100160f1a(local_748,local_6d8,&local_458,local_658);
      iVar2 = FUN_100160f8a(local_748);
      if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100453969;
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
    }
    if (cVar1 != '\0') {
      local_66c = 0x400;
      local_674 = "Assertion failure";
      local_678 = 0x8220202;
      local_66a = iVar2;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_678,0x12);
    }
  }
LAB_100453969:
  FUN_10016013b(local_6d8);
  FUN_1001b7a50(local_690);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x400;
      local_44a = iVar2;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,0x12);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_680);
LAB_1004539b2:
  FUN_10045331a(local_700);
  _objc_autoreleasePoolPop(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

