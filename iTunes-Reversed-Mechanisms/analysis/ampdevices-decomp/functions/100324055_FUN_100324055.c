// name: FUN_100324055
// address: 100324055

void FUN_100324055(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  lVar1 = DAT_1008bbfa0;
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "element->*PNEXT == nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (lVar1 == 0) {
    plVar4 = &DAT_1008bbfa0;
  }
  else {
    do {
      lVar5 = lVar1;
      lVar1 = *(long *)(lVar5 + 0x78);
    } while (lVar1 != 0);
    plVar4 = (long *)(lVar5 + 0x78);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *plVar4 = param_1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

