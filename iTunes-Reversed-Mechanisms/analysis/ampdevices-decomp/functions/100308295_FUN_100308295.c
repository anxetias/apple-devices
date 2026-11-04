// name: FUN_100308295
// address: 100308295

long FUN_100308295(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100308309:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100308309;
    }
    if ((*(byte *)(param_1 + 0x1bb4) & 0x40) == 0) {
      lVar3 = param_1 + 0x16e0;
    }
    else {
      lVar3 = 0;
      switch(param_2) {
      case '\x01':
        lVar3 = param_1 + 0xb0;
        break;
      case '\x02':
        lVar3 = param_1 + 0xe00;
        break;
      case '\x03':
      case '\x05':
      case '\x06':
      case '\a':
        break;
      case '\x04':
        lVar3 = param_1 + 0x520;
        break;
      case '\b':
        lVar3 = param_1 + 0x990;
        break;
      default:
        if (param_2 == -0x80) {
          lVar3 = param_1 + 0x1270;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
}

