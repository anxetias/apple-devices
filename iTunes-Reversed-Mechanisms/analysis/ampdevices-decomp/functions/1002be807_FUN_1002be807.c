// name: FUN_1002be807
// address: 1002be807

undefined1 FUN_1002be807(long param_1,short *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002be8ea:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_21a = "TrackDataIsValid(trackData)";
LAB_1002be9f8:
      local_21c = 0x822;
      local_224 = "Assertion failure";
      local_228 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_228 = 0x8220202;
        local_224 = "Assertion failure (expected to be true)";
        local_21c = 0x822;
        local_21a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002be8ea;
    }
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar3 = FUN_1002f930c(param_1);
      if (lVar3 != 0) {
        do {
          uVar4 = FUN_1004744bf(lVar3,0);
          if ((uVar4 & 0x10000) == 0 && (uVar4 & 0xfe182321) != 0) {
            FUN_10047a7b5(lVar3,&local_228);
            cVar1 = FUN_1001e3edc(param_2,&local_228,1);
            if (cVar1 != '\0') {
              uVar5 = 1;
              goto LAB_1002be957;
            }
          }
          lVar3 = FUN_1002f9451(lVar3);
        } while (lVar3 != 0);
      }
      uVar5 = 0;
      goto LAB_1002be957;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_21a = "genre != nullptr && genre[0] != 0";
      goto LAB_1002be9f8;
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
LAB_1002be957:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

