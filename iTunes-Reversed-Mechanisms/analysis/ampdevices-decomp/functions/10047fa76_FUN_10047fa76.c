// name: FUN_10047fa76
// address: 10047fa76

undefined1 FUN_10047fa76(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "TrackInfoIsValid( trackInfo )";
LAB_10047fc0e:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10047fb1c:
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar1 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_4a = "TrackDataIsValid( trackData )";
          goto LAB_10047fc0e;
        }
        goto LAB_10047fb1c;
      }
    }
    if ((*(uint *)(param_1 + 0xc2) >> 0x1d & 1) == (param_2 & 0xff)) {
      uVar3 = 0;
    }
    else {
      FUN_100313e0b(lVar1);
      FUN_100473a90(param_1);
      uVar4 = FUN_100177d5c(0);
      *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x14) = uVar4;
      FUN_1001c62d9(&local_58,0x20);
      uVar3 = FUN_10047f8d8(param_1,param_2 & 0xff,&local_58);
      FUN_1004755ef(param_1,0,&local_58);
      FUN_1002fbbfc(lVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

