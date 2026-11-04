// name: FUN_10046f5ca
// address: 10046f5ca

long FUN_10046f5ca(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "mDataHandler != __null";
LAB_10046f6d7:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x58))();
    lVar2 = FUN_100171409(param_2,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar2 != 0) {
      FUN_100168c16(uVar4,lVar2,
                    *(undefined8 *)
                     PTR__kCMByteStreamThroughputStatisticsKey_AverageReadBytesPerSecond_10082bbf0,1
                   );
      goto LAB_10046f699;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "dict != __null";
      goto LAB_10046f6d7;
    }
  }
  lVar2 = 0;
  FUN_1001782e9(0,0);
LAB_10046f699:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

