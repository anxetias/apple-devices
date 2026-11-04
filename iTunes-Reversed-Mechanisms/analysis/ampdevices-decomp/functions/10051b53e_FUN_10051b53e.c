// name: FUN_10051b53e
// address: 10051b53e

void FUN_10051b53e(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1002f9fc5(*(undefined8 *)(param_1 + 0x30));
  if (lVar3 != 0) {
    do {
      cVar1 = FUN_1002bd03f(*(undefined8 *)(lVar3 + 8),*(undefined1 *)(param_1 + 0x39e),
                            *(undefined1 *)(param_1 + 0x39d));
      if ((((cVar1 != '\0') && (*(long *)(*(long *)(lVar3 + 0x10) + 0x98) == 0)) &&
          (iVar2 = FUN_1002b0559(lVar3,2), iVar2 == 0)) &&
         (iVar2 = FUN_1002b1039(lVar3,local_478), iVar2 == 0)) {
        lVar4 = FUN_1002f19e7(local_478);
        *(long *)(*(long *)(lVar3 + 0x10) + 0x98) = lVar4;
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "trackInstance->extendedInfo->bookInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      lVar3 = FUN_1002fa118(lVar3);
    } while (lVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

