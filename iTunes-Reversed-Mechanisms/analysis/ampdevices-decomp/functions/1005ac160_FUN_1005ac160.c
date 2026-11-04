// name: FUN_1005ac160
// address: 1005ac160

void FUN_1005ac160(long param_1,uint param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == param_4) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "idOld != idNew";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x1668);
    if (lVar4 != 0) {
      lVar3 = param_1 + 0x1668;
      do {
        bVar5 = *(uint *)(lVar4 + 0x20) < param_2;
        if (*(uint *)(lVar4 + 0x20) == param_2) {
          bVar5 = *(ulong *)(lVar4 + 0x28) < param_3;
        }
        if (bVar5 == false) {
          lVar3 = lVar4;
        }
        lVar4 = *(long *)(lVar4 + (ulong)bVar5 * 8);
      } while (lVar4 != 0);
      if (lVar3 != param_1 + 0x1668) {
        bVar5 = param_2 < *(uint *)(lVar3 + 0x20);
        if (*(uint *)(lVar3 + 0x20) == param_2) {
          bVar5 = param_3 < *(ulong *)(lVar3 + 0x28);
        }
        if (!bVar5) {
          FUN_1005ac748(param_1,param_2,param_3,param_5);
          FUN_1005ab648(param_1,param_2,param_4,param_5,4,1,param_6);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

