// name: FUN_10039a28c
// address: 10039a28c

undefined8 * FUN_10039a28c(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = DAT_1008c7588;
  if (DAT_1008c7588 == (undefined8 *)0x0) {
    puVar2 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar2 == (undefined8 *)0x0) {
      DAT_1008c7588 = (undefined8 *)0x0;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "sm_iPodiPhoneUpdaterManagerInstance != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      puVar2 = (undefined8 *)0x0;
      FUN_1001782e9(0,0);
    }
    else {
      *puVar2 = &PTR_FUN_1008562a0;
      puVar2[1] = 0;
      DAT_1008c7588 = puVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

