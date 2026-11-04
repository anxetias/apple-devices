// name: FUN_100164639
// address: 100164639

void FUN_100164639(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 != 0) && (lVar2 = FUN_10017076e(param_2), 0 < lVar2)) {
    lVar5 = 0;
    do {
      lVar3 = FUN_10016499b(param_2,lVar5);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "proxyDict != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        uVar4 = FUN_10016450a(lVar3);
        FUN_1001709a5(param_1,uVar4);
        FUN_10017060f(uVar4);
      }
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
  }
  uVar4 = FUN_100172796();
  FUN_1001728a5(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

