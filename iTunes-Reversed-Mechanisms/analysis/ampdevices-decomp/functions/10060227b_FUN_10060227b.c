// name: FUN_10060227b
// address: 10060227b

int FUN_10060227b(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = param_1 + 0x157d0;
  do {
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    iVar3 = (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
    if (iVar3 != 0) {
      if (iVar3 == -0x80) goto LAB_10060242d;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
joined_r0x000100602384:
      if (cVar2 == '\0') goto LAB_10060242d;
      goto LAB_10060240a;
    }
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x5c) == 0) {
      uVar4 = FUN_1001b19b0();
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x5c) = uVar4;
      iVar3 = 0;
      goto LAB_10060242d;
    }
    iVar3 = FUN_1001e96d3(lVar1,0,0);
    if (iVar3 != 0) {
      if (iVar3 != -0x80) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        goto joined_r0x000100602384;
      }
      goto LAB_10060242d;
    }
    *(undefined1 *)(param_1 + 0x157e0) = 1;
    iVar3 = FUN_1001e9afc(lVar1);
    FUN_1001e9bb5(lVar1);
    *(undefined1 *)(param_1 + 0x157e0) = 0;
  } while (iVar3 == 0);
  if (iVar3 != -0x80) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
LAB_10060240a:
      local_3a = iVar3;
      iVar3 = local_3a;
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_10060242d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

