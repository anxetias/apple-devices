// name: FUN_100247e2a
// address: 100247e2a

undefined1 FUN_100247e2a(long param_1,undefined2 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined1 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "languageCode != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    pcVar4 = "cs_CZ";
    cVar1 = FUN_1001df957(param_1,"cs_CZ",0);
    if (cVar1 == '\0') {
      lVar5 = 0x1d;
      pcVar3 = "cs_CZ";
      do {
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) {
          uVar6 = 0;
          goto LAB_100247efd;
        }
        pcVar4 = pcVar3 + 0xc;
        cVar1 = FUN_1001df957(param_1,pcVar3 + 0xc,0);
        pcVar3 = pcVar4;
      } while (cVar1 == '\0');
    }
    if (param_2 != (undefined2 *)0x0) {
      FUN_1001c34b7(*(undefined4 *)(pcVar4 + 8),param_2);
    }
    uVar6 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(pcVar4 + 8);
    }
  }
LAB_100247efd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

