// name: FUN_100507a6a
// address: 100507a6a

void FUN_100507a6a(long param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((((param_2 == (int *)0x0) || (*param_2 != 0x4f4c5354)) || (param_2[1] == 0)) ||
     (iVar4 = (int)((ulong)(*(long *)(param_2 + 4) - *(long *)(param_2 + 2)) >> 3) * -0x49249249,
     iVar4 == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "numTracks != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_100313e0b(*(undefined8 *)(param_1 + 0x30));
    iVar5 = 0;
    do {
      lVar2 = FUN_1005968ea(param_2,iVar5,0);
      if (lVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (*(long *)(lVar2 + 0x10) != *(long *)(param_1 + 0x30)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "(((trackInfo) != nullptr) ? ((trackInfo)->trackDataPrivate) : nullptr) == handlerData->trackData"
            ;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_1004737f5(lVar2);
        FUN_1001b1464();
      }
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar5);
    FUN_1002fbbfc(*(undefined8 *)(param_1 + 0x30));
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

