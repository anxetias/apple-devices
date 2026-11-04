// name: FUN_10036d183
// address: 10036d183

undefined8 * FUN_10036d183(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "device != nullptr";
LAB_10036d2c2:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      FUN_1001e9de0(&DAT_1008bddd0);
      for (puVar3 = DAT_1008bde80; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
        cVar1 = FUN_100170633(puVar3[199],param_1);
        if (cVar1 == '\0') {
          cVar1 = FUN_100170633(puVar3[0xce],param_1);
          if (cVar1 != '\0') goto LAB_10036d1f0;
        }
        else {
LAB_10036d1f0:
          cVar1 = FUN_100170633(puVar3[0xd6],param_2);
          if (cVar1 != '\0') {
            *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
            goto LAB_10036d274;
          }
        }
      }
      puVar3 = (undefined8 *)0x0;
LAB_10036d274:
      FUN_1001e9eb9(&DAT_1008bddd0);
      goto LAB_10036d280;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "appIdentifier != nullptr";
      goto LAB_10036d2c2;
    }
  }
  puVar3 = (undefined8 *)0x0;
  FUN_1001782e9(0,0);
LAB_10036d280:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

