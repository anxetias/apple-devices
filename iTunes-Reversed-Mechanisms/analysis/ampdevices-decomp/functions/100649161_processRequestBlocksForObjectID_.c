// name: processRequestBlocksForObjectID:
// address: 100649161

/* Function Stack Size: 0x14 bytes */

void AMPDevicesClientConnection::processRequestBlocksForObjectID_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  ID local_48;
  unsigned_int local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "objectID != 0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  else {
    local_68 = PTR___NSConcreteStackBlock_10082caf0;
    local_60 = 0xc2000000;
    local_58 = FUN_100649266;
    local_50 = &DAT_100871690;
    local_48 = param_1;
    local_40 = param_3;
    (*(code *)PTR__objc_msgSend_10082c770)
              (param_1,PTR_s_performBlockOnMainThreadAsync__10088daf0,&local_68);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

