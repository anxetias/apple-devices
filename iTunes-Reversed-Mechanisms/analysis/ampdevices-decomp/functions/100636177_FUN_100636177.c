// name: FUN_100636177
// address: 100636177

long FUN_100636177(ushort param_1,long param_2,long param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long local_60;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016bf14();
  }
  iVar2 = (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
  if (iVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x202;
      uStack_56 = 0x822;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "driverObject != 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    lVar6 = 0;
    goto LAB_100636390;
  }
  if (param_1 < 0x13e) {
LAB_1006361c3:
    lVar6 = 0;
  }
  else if ((ushort)(param_1 - 0x146) < 0xba) {
    if (*(long **)(param_3 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    iVar3 = (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    if (iVar3 == 0) {
      iVar3 = FUN_1006352f4(iVar2);
      if (iVar3 != 0) goto LAB_10063623b;
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x202;
        uStack_56 = 0x822;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "usbDeviceObject != 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      lVar6 = 0;
      FUN_1001782e9(0,0);
    }
    else {
LAB_10063623b:
      local_60 = 0;
      iVar4 = FUN_10063534d(iVar3,2,&local_60,8);
      if (iVar4 == 0) {
        iVar4 = 0;
        lVar6 = local_60;
        if (local_60 == 0) goto LAB_100636286;
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "err == 0";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
LAB_100636286:
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_58 = 0;
          __os_log_impl(0x100000000,uVar5,0x10,"Failed to get Checkpoint data from USB iGSC!",
                        &local_58,2);
        }
        if (param_4 == '\0') {
          iVar4 = 0;
          lVar6 = 0;
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          iVar4 = 6;
          if (cVar1 != '\0') {
            local_58 = 0;
            __os_log_impl(0x100000000,uVar5,1,"trying SCSI driver",&local_58,2);
          }
          lVar6 = 0;
        }
      }
      _IOObjectRelease(iVar3);
      if (iVar4 != 0) {
        if (iVar4 != 6) goto LAB_1006361c3;
        goto LAB_100636367;
      }
    }
  }
  else {
LAB_100636367:
    local_58 = 0;
    uStack_56 = 0;
    uStack_54 = 0;
    FUN_1006343f6(iVar2,FUN_1006346e8);
    lVar6 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
    if (lVar6 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_58 = 0;
        __os_log_impl(0x100000000,uVar5,0x10,"Failed to get Checkpoint data from drive!",&local_58,2
                     );
      }
      goto LAB_1006361c3;
    }
  }
  _IOObjectRelease(iVar2);
LAB_100636390:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

