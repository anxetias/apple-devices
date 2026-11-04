// name: FUN_10036a5e8
// address: 10036a5e8

undefined8 FUN_10036a5e8(long param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_22a = "playlistName != nullptr";
LAB_10036a78b:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    *param_2 = 0;
    if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
      FUN_100476928(param_1,param_2);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      lVar3 = FUN_10048b91a(uVar1,param_2,1);
      uVar4 = 0;
      if (lVar3 != 0) {
        FUN_1001e1c39(param_2,&local_238);
        lVar3 = FUN_10048b91a(uVar1,param_2,1);
        if (lVar3 != 0) {
          iVar5 = 1;
          do {
            FUN_1001e04f5("%1 %2",param_2);
            FUN_1001e48fe(param_2,param_2,&local_238);
            FUN_1001e5722(param_2,param_2,iVar5);
            lVar3 = FUN_10048b91a(uVar1,param_2,1);
            iVar5 = iVar5 + 1;
          } while (lVar3 != 0);
        }
        uVar4 = 0;
      }
      goto LAB_10036a740;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_22a = "TrackInfoIsValid(trackInfo)";
      goto LAB_10036a78b;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_10036a740:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

