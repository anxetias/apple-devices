// name: FUN_10035d05f
// address: 10035d05f

void FUN_10035d05f(uint *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (uint *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "codecList != nullptr";
LAB_10035d149:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      uVar1 = *param_1;
      if ((ulong)uVar1 != 0) {
        lVar4 = 0;
        do {
          if (*(int *)((long)param_1 + lVar4 + 4) == param_2) {
            *(undefined4 *)((long)param_1 + lVar4 + 4) = 0;
          }
          lVar4 = lVar4 + 0x24;
        } while ((ulong)uVar1 * 0x24 != lVar4);
      }
      goto LAB_10035d10e;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "codecType != kUnknownDeviceAudioCodecType";
      goto LAB_10035d149;
    }
  }
  FUN_1001782e9(0,0);
LAB_10035d10e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

