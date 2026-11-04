// name: FUN_1004f1911
// address: 1004f1911

undefined8 FUN_1004f1911(undefined8 param_1,char param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined2 local_458 [8];
  uint local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_1004de449();
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0x45f;
    goto LAB_1004f1d69;
  }
  if (*(char *)(DAT_1008c76a0 + 0x1a93) == '\0') {
    if (*(char *)(lVar4 + 0x6af5) == '\0') {
LAB_1004f1cdf:
      if (*(char *)(lVar4 + 0x35a) != '\0') {
        FUN_1001fc6d2(lVar4,0);
      }
      if ((*(char *)(lVar4 + 0x14cd8) == '\0') && (*(char *)(lVar4 + 0x6aec) == '\0')) {
        FUN_1004f1ea7(&local_448,lVar4);
        lVar7 = 0;
        if ((*(char *)(lVar4 + 0x38b) != '\0') && (*(char *)(lVar4 + 0x38d) == '\0')) {
          bVar2 = FUN_10049ca60();
          lVar7 = (ulong)bVar2 << 0xc;
        }
        FUN_1004f20db(lVar4,lVar7,&local_448);
        FUN_1001b7a50(&local_448);
      }
      uVar6 = FUN_1001c156e();
      uVar5 = 0;
      FUN_1001c6987(uVar6,0x69707372,*(undefined4 *)(lVar4 + 0x28),0,0);
      goto LAB_1004f1d69;
    }
    if (param_2 == '\0' && *(char *)(lVar4 + 0x6af6) != '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_448 = local_448 & 0xffff0000;
        __os_log_impl(0x100000000,uVar5,1,"setup> license agreement not accepted, forgetting device"
                      ,&local_448,2);
      }
      FUN_1004e3b42(lVar4);
    }
    else {
      cVar1 = *(char *)(lVar4 + 0x6af7);
      if (param_3 != '\0' || cVar1 == '\0') {
        *(undefined1 *)(lVar4 + 0x6af5) = 0;
        if (*(char *)(lVar4 + 0x6af6) != '\0') {
          *(undefined1 *)(lVar4 + 0x6af6) = 0;
          iVar3 = FUN_1001893a7(lVar4 + 0x75e0,"ShowLicense");
          if (iVar3 == 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar5 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_448 = local_448 & 0xffff0000;
              __os_log_impl(0x100000000,uVar5,1,"setup> deleted ShowLicense file",&local_448,2);
            }
          }
          iVar3 = FUN_1002441f8(*(undefined4 *)(lVar4 + 0x66b0),lVar4 + 0x6b40,0x6c69636e,0,
                                &local_448);
          if (iVar3 == 0) {
            iVar3 = FUN_100182d59(&local_448,1);
            if (iVar3 == 0) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar5 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 != '\0') {
                local_458[0] = 0;
                __os_log_impl(0x100000000,uVar5,1,"setup> deleted Licenses folder",local_458,2);
              }
            }
          }
          cVar1 = *(char *)(lVar4 + 0x6af7);
        }
        if (cVar1 != '\0') {
          *(undefined1 *)(lVar4 + 0x6af7) = 0;
          iVar3 = FUN_1001893a7(lVar4 + 0x75e0,"ShowWarranty");
          if (iVar3 == 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar5 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_448 = local_448 & 0xffff0000;
              __os_log_impl(0x100000000,uVar5,1,"setup> deleted ShowWarranty file",&local_448,2);
            }
          }
          iVar3 = FUN_1001893a7(lVar4 + 0x75e0,"Warranty.html");
          if (iVar3 == 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar5 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_448 = local_448 & 0xffff0000;
              __os_log_impl(0x100000000,uVar5,1,"setup> deleted Warranty.html file",&local_448,2);
            }
          }
        }
        goto LAB_1004f1cdf;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_448 = local_448 & 0xffff0000;
        __os_log_impl(0x100000000,uVar5,1,"setup> warranty info not accepted, forgetting device",
                      &local_448,2);
      }
      FUN_1004e3b42(lVar4);
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_448 = local_448 & 0xffff0000;
      __os_log_impl(0x100000000,uVar5,1,"setup> store genius mode, forgetting device",&local_448,2);
    }
    FUN_1004e3b42(lVar4);
  }
  uVar5 = 0;
LAB_1004f1d69:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

