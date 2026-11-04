// name: FUN_100309333
// address: 100309333

long FUN_100309333(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_a0;
  long local_98;
  long local_90;
  undefined **local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = 0;
  local_a0 = param_1;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "persistentID != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_98 = FUN_100306d78();
    if (local_98 != 0) {
      do {
        local_88 = &PTR_FUN_100853d80;
        local_80 = &local_a0;
        local_78 = &local_90;
        local_70 = &local_98;
        local_68 = &local_88;
        FUN_10030903a(local_98,&local_88);
        if (local_68 == &local_88) {
          lVar2 = 0x20;
LAB_1003093db:
          (**(code **)((long)*local_68 + lVar2))();
        }
        else {
          lVar2 = 0x28;
          if (local_68 != (undefined ***)0x0) goto LAB_1003093db;
        }
        lVar2 = local_90;
      } while ((local_90 == 0) &&
              (local_98 = FUN_100306e32(local_98), lVar2 = local_90, local_98 != 0));
      goto LAB_100309432;
    }
  }
  lVar2 = 0;
LAB_100309432:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar2;
}

