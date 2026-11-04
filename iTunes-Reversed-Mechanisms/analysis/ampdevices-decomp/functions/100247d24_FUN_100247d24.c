// name: FUN_100247d24
// address: 100247d24

undefined8 FUN_100247d24(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "deviceLanguage != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = 0;
    do {
      cVar1 = FUN_1001df957(param_2,"ar-SA" + lVar3,0);
      if (cVar1 != '\0') {
        FUN_1001c334a(param_1,*(undefined4 *)((long)&DAT_10071991c + lVar3));
        goto LAB_100247db7;
      }
      lVar3 = lVar3 + 0x14;
    } while (lVar3 != 0x2f8);
  }
  FUN_1001b7b04(param_1,"");
LAB_100247db7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

