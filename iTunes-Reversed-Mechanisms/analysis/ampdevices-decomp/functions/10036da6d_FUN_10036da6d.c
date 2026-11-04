// name: FUN_10036da6d
// address: 10036da6d

void FUN_10036da6d(uint param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  uint local_3a;
  undefined2 local_36;
  long local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) goto LAB_10036db24;
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
  if (param_1 < 100) {
    if (cVar1 != '\0') {
      pcVar3 = "AFC %s operation failed (%d) for \"%{public}s\"";
LAB_10036db7d:
      local_34 = param_3 + 0x34;
      local_36 = 0x822;
      local_3c = 0x400;
      local_48 = 0x8200302;
      local_44 = param_2;
      local_3a = param_1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,pcVar3,&local_48,0x1c);
    }
  }
  else if (cVar1 != '\0') {
    pcVar3 = "AFC %s operation failed (0x%08X) for \"%{public}s\"";
    goto LAB_10036db7d;
  }
  if (*(long *)(param_3 + 0x4e0) != 0) {
    lVar2 = _AFCConnectionCopyLastErrorInfo();
    if (lVar2 != 0) {
      _CFShow(lVar2);
      _CFRelease(lVar2);
    }
  }
LAB_10036db24:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

