// name: FUN_10061909d
// address: 10061909d

void FUN_10061909d(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined8 local_490;
  undefined8 local_488;
  long local_480;
  uint local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined2 local_458 [528];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = *(long *)(param_1 + 0x10);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_458[0] = 0;
    __os_log_impl(0x100000000,uVar6,1,"sync> entering profiles thread",local_458,2);
  }
  *(undefined1 *)(param_1 + 0x4da) = 0;
  local_490 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  uVar6 = *(undefined8 *)(lVar7 + 0x66d8);
  uVar5 = _CFStringGetTypeID();
  uVar6 = FUN_10059ca0a(uVar6,&cf_UniqueDeviceID,uVar5);
  local_488 = FUN_1001705fc(uVar6);
  iVar4 = *(int *)(param_1 + 0x38);
  iVar8 = 0x35;
  local_480 = param_1;
  do {
    iVar3 = FUN_1003870d4(iVar8,iVar4 * 2 & 2,local_458);
    if (iVar3 == 0) {
      iVar3 = FUN_10017fdd8(local_458,1,1,FUN_100619435,&local_490);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          local_46a = iVar3;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x38);
  lVar7 = FUN_10017076e(local_490);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  lVar1 = local_480;
  uVar6 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_478 = 0x4000100;
    local_474 = (char *)CONCAT44(local_474._4_4_,(int)lVar7);
    __os_log_impl(0x100000000,uVar6,1,"sync> found %d provisioning profile(s) for device",&local_478
                  ,8);
  }
  if (0 < lVar7) {
    iVar4 = FUN_1005c3217(*(undefined8 *)(lVar1 + 0x48),local_490);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_478 = 0x8220202;
        local_474 = "Assertion failure";
        local_46c = 0x400;
        local_46a = iVar4;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
    *(undefined1 *)(lVar1 + 0x4da) = 1;
  }
  FUN_10017060f(local_490);
  FUN_10017060f(local_488);
  FUN_1001e9809(lVar1 + 0x4c8);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_478 = local_478 & 0xffff0000;
    __os_log_impl(0x100000000,uVar6,1,"sync> exiting profiles thread",&local_478,2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

