// name: FUN_1005d46be
// address: 1005d46be

void FUN_1005d46be(long param_1,short *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(inTrackInfo)";
LAB_1005d4829:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else if (param_2 == (short *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "inArtworkInfo != __null";
      goto LAB_1005d4829;
    }
  }
  else {
    lVar2 = FUN_1005974ad(param_1,0);
    if ((((lVar2 != 0) || (lVar2 = *(long *)(param_1 + 0x58), lVar2 != 0)) &&
        (*(long *)(lVar2 + 8) != 0)) && (*(long *)(*(long *)(lVar2 + 8) + 0x10) != 0)) {
      if (*(short *)(lVar2 + 0x76) != param_2[1]) {
        *(short *)(lVar2 + 0x76) = param_2[1];
      }
      if (*(short *)(lVar2 + 0x74) != *param_2) {
        *(short *)(lVar2 + 0x74) = *param_2;
      }
      if (*(int *)(lVar2 + 0x78) != *(int *)(param_2 + 2)) {
        *(int *)(lVar2 + 0x78) = *(int *)(param_2 + 2);
      }
      goto LAB_1005d47ec;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInstanceIsValid(trackInstance)";
      goto LAB_1005d4829;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005d47ec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

