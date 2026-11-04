// name: FUN_10031c2c9
// address: 10031c2c9

void FUN_10031c2c9(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10031c353:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10031c353;
    }
    for (lVar3 = FUN_1002f930c(param_1); lVar3 != 0; lVar3 = FUN_1002f9451(lVar3)) {
      for (puVar4 = *(undefined8 **)(lVar3 + 0x58); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        *(byte *)((long)puVar4 + 0x49) = *(byte *)((long)puVar4 + 0x49) & 0xbf;
      }
      *(byte *)(lVar3 + 0xc3) = *(byte *)(lVar3 + 0xc3) & 0xfe;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

