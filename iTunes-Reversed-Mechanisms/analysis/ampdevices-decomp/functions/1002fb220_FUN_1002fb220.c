// name: FUN_1002fb220
// address: 1002fb220

void FUN_1002fb220(long param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_78 [32];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_78,0x20);
  if (param_1 == 0) {
LAB_1002fb33f:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1002fb33f;
    }
    FUN_100313e0b(param_1);
    lVar4 = FUN_1002f930c(param_1);
    if (lVar4 != 0) {
      bVar1 = false;
      do {
        cVar2 = FUN_1002fb127(lVar4,param_2,local_78);
        if (cVar2 != '\0') {
          bVar1 = true;
        }
        lVar4 = FUN_1002f9451(lVar4);
      } while (lVar4 != 0);
      if (bVar1) {
        cVar2 = FUN_100539270(local_78);
        if (cVar2 != '\0') {
          lVar4 = FUN_100315ede(param_1);
          if (lVar4 != 0) {
            do {
              lVar5 = FUN_100316031(lVar4);
              FUN_100483032(lVar4,local_78);
              lVar4 = lVar5;
            } while (lVar5 != 0);
          }
        }
      }
    }
    FUN_1002fbbfc(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

