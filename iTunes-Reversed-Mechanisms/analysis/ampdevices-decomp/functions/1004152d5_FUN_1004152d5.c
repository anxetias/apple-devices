// name: FUN_1004152d5
// address: 1004152d5

/* WARNING: Removing unreachable block (ram,0x000100415355) */

undefined8 FUN_1004152d5(undefined8 *param_1,char param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "connection != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    puVar1 = (undefined4 *)*param_1;
    uVar5 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      if ((param_2 != '\0') || (*(long *)(puVar1 + 2) != 0)) {
        iVar3 = FUN_1000ae640(*puVar1);
        if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "VLxCLgDpiF(dbConnectionData->contextID) == noErr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (*(long *)(puVar1 + 2) == 0) {
          LOCK();
          DAT_1008be660 = 0;
          UNLOCK();
        }
      }
      FUN_1001c64c1(puVar1);
      *param_1 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

