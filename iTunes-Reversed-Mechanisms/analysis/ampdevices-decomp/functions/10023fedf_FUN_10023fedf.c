// name: FUN_10023fedf
// address: 10023fedf

long FUN_10023fedf(long param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_c40;
  undefined4 local_c38;
  char *local_c34;
  undefined2 local_c2c;
  char *local_c2a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_c2a = "dragRef != nullptr";
LAB_1002400de:
      local_c2c = 0x822;
      local_c34 = "Assertion failure";
      local_c38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_c38,0x16);
    }
  }
  else if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_c2a = "inUTI != nullptr";
      goto LAB_1002400de;
    }
  }
  else {
    if (param_4 != 0) {
      iVar2 = FUN_10023f577(param_1,param_2,param_3,&local_c40);
      lVar6 = 0xffffffce;
      if (((iVar2 == 0) && (local_c40 < 0xbfe)) && (local_c40 != 0)) {
        *(undefined1 *)((long)&local_c38 + local_c40) = 0;
        iVar2 = FUN_10023e7ee(param_1,param_2,param_3,&local_c38,&local_c40);
        if ((iVar2 == 0) && (lVar3 = FUN_1001df897(&local_c38), lVar3 != 0)) {
          lVar3 = FUN_1001e5ee7(&local_c38);
          if (lVar3 == 0) {
            lVar7 = 0;
          }
          else {
            lVar4 = FUN_1001744bd(DAT_1008c4d90,lVar3,0);
            lVar7 = 0;
            if (lVar4 != 0) {
              cVar1 = FUN_10016ffd2(lVar4,param_4,0);
              lVar6 = 0xffffffce;
              lVar7 = lVar4;
              if (cVar1 != '\0') {
                lVar6 = 0;
              }
            }
          }
          FUN_10017060f(lVar7);
          FUN_10017060f(lVar3);
        }
      }
      goto LAB_10024011a;
    }
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_c2a = "fileSpec != nullptr";
      goto LAB_1002400de;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  FUN_1001782e9(0,0);
  lVar6 = 0xffffffce;
LAB_10024011a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
}

