// name: FUN_1002f7772
// address: 1002f7772

undefined8 FUN_1002f7772(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001737f8(param_2);
  if (lVar2 < 2) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "JRCFStringGetLength(cfstrLanguage) >= 2";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = 0;
    uVar3 = FUN_100173623(DAT_1008c4d90,param_2,0,2);
    lVar2 = FUN_10017076e(*(undefined8 *)(param_1 + 200));
    if (0 < lVar2) {
      lVar5 = 0;
      do {
        uVar4 = FUN_100164a01(*(undefined8 *)(param_1 + 200),lVar5);
        cVar1 = FUN_100173f7c(uVar4,uVar3);
        if (cVar1 != '\0') {
          uVar4 = 1;
          goto LAB_1002f782e;
        }
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      uVar4 = 0;
    }
LAB_1002f782e:
    FUN_10017060f(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

