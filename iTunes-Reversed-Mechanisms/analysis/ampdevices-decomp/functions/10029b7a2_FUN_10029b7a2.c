// name: FUN_10029b7a2
// address: 10029b7a2

undefined8 FUN_10029b7a2(undefined8 *param_1,long param_2,byte param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "set != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = param_1[2];
    lVar6 = lVar1;
    if (lVar1 < (long)param_1[1]) {
      do {
        uVar4 = _CFStringGetCharacterAtIndex(*param_1,lVar6);
        bVar2 = _CFCharacterSetIsCharacterMember(param_2,uVar4);
        lVar6 = param_1[2];
        if (bVar2 == (param_3 ^ 1)) break;
        lVar6 = lVar6 + 1;
        param_1[2] = lVar6;
      } while (lVar6 < (long)param_1[1]);
    }
    if (lVar1 < lVar6) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        uVar5 = FUN_100173623(DAT_1008c4d90,*param_1,lVar1);
        return uVar5;
      }
      goto LAB_10029b8e8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0;
  }
LAB_10029b8e8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

