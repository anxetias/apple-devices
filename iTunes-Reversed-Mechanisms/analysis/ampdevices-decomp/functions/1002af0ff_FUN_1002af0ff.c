// name: FUN_1002af0ff
// address: 1002af0ff

byte FUN_1002af0ff(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar5 = 1;
  if ((**(byte **)(param_1 + 0x10) & 1) != 0) goto LAB_1002af1c3;
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
LAB_1002af19e:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    bVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1002af19e;
    }
    pbVar4 = (byte *)FUN_1001c58d5(*(undefined8 *)(lVar1 + 0x1bd8));
    if (pbVar4 != (byte *)0x0) {
      *(byte **)(param_1 + 0x10) = pbVar4;
      *pbVar4 = *pbVar4 | 1;
    }
    bVar5 = **(byte **)(param_1 + 0x10) & 1;
  }
LAB_1002af1c3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

