// name: FUN_10022637c
// address: 10022637c

void FUN_10022637c(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  lVar1 = DAT_1008a2db0;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2da8 != DAT_1008a2db0) {
    lVar5 = DAT_1008a2da8;
    do {
      iVar3 = FUN_100182d59(lVar5 + 0x420,1);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar3;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      lVar5 = lVar5 + 0x840;
    } while (lVar5 != lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

