// name: FUN_100474865
// address: 100474865

char FUN_100474865(long param_1)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "TrackInfoIsValid(trackInfo)";
LAB_1004749cb:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1004748fb:
    cVar2 = '\0';
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar1 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_3a = "TrackDataIsValid(trackData)";
          goto LAB_1004749cb;
        }
        goto LAB_1004748fb;
      }
    }
    if ((*(byte *)(lVar1 + 0x1bb4) & 0x40) == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(char *)(param_1 + 0xcd);
      if (cVar2 == '\0') {
        uVar3 = FUN_1004802ae(param_1);
        uVar4 = FUN_1004744bf(param_1,1);
        cVar2 = FUN_10048019c(uVar4,uVar3);
        *(char *)(param_1 + 0xcd) = cVar2;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

