// name: FUN_1005a1246
// address: 1005a1246

undefined1 FUN_1005a1246(undefined8 param_1,long param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char local_49;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = _CFBooleanGetTypeID();
  if (lVar3 == param_2) {
    uVar1 = FUN_100171f12(param_1);
    *param_3 = uVar1;
  }
  else {
    lVar3 = _CFNumberGetTypeID();
    if (lVar3 != param_2) {
      uVar1 = 0;
      goto LAB_1005a12d2;
    }
    cVar2 = FUN_100172017(param_1,1,&local_49);
    if (cVar2 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "JRCFNumberGetValue((CFNumberRef) fieldValue, kCFNumberSInt8Type, &value)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar1 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1005a12d2;
    }
    *param_3 = local_49 != '\0';
  }
  uVar1 = 1;
LAB_1005a12d2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

