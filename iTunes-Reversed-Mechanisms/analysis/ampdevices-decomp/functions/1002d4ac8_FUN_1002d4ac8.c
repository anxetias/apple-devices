// name: FUN_1002d4ac8
// address: 1002d4ac8

void FUN_1002d4ac8(undefined8 param_1,int param_2,undefined8 *param_3,long param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined2 local_4fe;
  int local_4fc;
  uint local_4f8;
  undefined8 local_4f4;
  undefined2 local_4ec;
  char *local_4ea;
  undefined1 local_4d9;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4f8 = 0x8220202;
      local_4f4 = "Assertion failure";
      local_4ec = 0x822;
      local_4ea = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4f8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_2 == 0x756d6e74) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_4f8 = local_4f8 & 0xffff0000;
      __os_log_impl(0x100000000,uVar5,1,"kVolumeUnmountedMessage",&local_4f8,2);
    }
    lVar4 = FUN_100264373(*(undefined4 *)param_3);
    if (lVar4 != 0) {
      FUN_10026394e(lVar4);
      FUN_100264de6(lVar4);
      if (*(char *)(lVar4 + 0x6db1) == '\0') {
        if ((*(char *)(lVar4 + 0x9de) == '\0') && (*(char *)(lVar4 + 28000) == '\0')) {
          FUN_10026473a(lVar4,0x706f6475,0,0);
          FUN_100264854(lVar4);
        }
      }
      else {
        *(undefined1 *)(lVar4 + 0x6db1) = 0;
      }
      FUN_100264ec8(lVar4);
    }
  }
  else if (param_2 == 0x6d6e7420) {
    local_4fc = 0;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_4f8 = local_4f8 & 0xffff0000;
      __os_log_impl(0x100000000,uVar5,1,"kVolumeMountedMessage",&local_4f8,2);
    }
    FUN_1002d1f64(param_3[1],&local_508,&local_510,&local_4fe,&local_4fc,0);
    if (local_4fc != 0) {
      lVar4 = FUN_100263880(local_508);
      local_518 = lVar4;
      if (lVar4 == 0) {
        iVar3 = FUN_1002d6afb(local_508,local_510,local_4fe,local_4fc,&local_518);
        lVar4 = local_518;
        if (iVar3 == 0) {
          *(undefined1 *)(local_518 + 0x3c) = 0;
          uVar1 = *DAT_1008c5d70;
          *(undefined1 *)(local_518 + 0x39) = uVar1;
          *(undefined1 *)(local_518 + 0x6d64) = uVar1;
          FUN_100245b2b(local_4fc,*param_3,&local_4f8,0,0);
          *(undefined1 *)(lVar4 + 0x42) = local_4f4._4_1_;
          *(undefined1 *)(lVar4 + 0x43) = local_4d9;
          FUN_10026473a(lVar4,0x706f6461,0,0);
          FUN_100264854(lVar4);
          FUN_1002634e2(lVar4);
          if (*(char *)(lVar4 + 0x9de) != '\0') {
            FUN_10026473a(lVar4,0x72617761,0,0);
            FUN_100264854(lVar4);
          }
        }
        else if (local_518 == 0) goto LAB_1002d4dd4;
      }
      else {
        FUN_10017060f(*(undefined8 *)(lVar4 + 0x6d8));
        *(undefined8 *)(lVar4 + 0x6d8) = 0;
        FUN_10017060f(*(undefined8 *)(lVar4 + 0x6e0));
        *(undefined8 *)(lVar4 + 0x6e0) = 0;
      }
      if (*(char *)(lVar4 + 0x36) == '\0') {
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_3 + 2);
        FUN_100264a2f(lVar4,*param_3);
        if (*(char *)(lVar4 + 0x36) == '\0') {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_4f8 = 0x8220202;
            local_4f4 = "Assertion failure";
            local_4ec = 0x822;
            local_4ea = "pod->mounted";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4f8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        iVar3 = FUN_10017e137(lVar4 + 0x48,0,lVar4 + 0x4d8);
        if ((iVar3 != -0x80) && (iVar3 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_4f8 = 0x8220202;
            local_4f4 = "Assertion failure";
            local_4ec = 0x400;
            local_4ea = (char *)CONCAT44(local_4ea._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_4f8,0x12);
          }
        }
        if ((local_4fc == 0x69506f64) && ((*(uint *)(lVar4 + 0x934) | 2) != 0x82)) {
          FUN_100636f27(*(undefined4 *)(lVar4 + 0x6d68));
        }
        if (*(char *)(lVar4 + 0x6db1) == '\0') {
          if ((*(char *)(lVar4 + 0x9de) == '\0') && (*(char *)(lVar4 + 28000) == '\0')) {
            FUN_100264704(lVar4,0x706f646d,0);
          }
        }
        else {
          FUN_1002d61b2(lVar4);
        }
      }
    }
  }
LAB_1002d4dd4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

