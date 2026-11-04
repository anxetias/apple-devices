// name: FUN_1002773d4
// address: 1002773d4

void FUN_1002773d4(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  char local_79;
  long local_78 [4];
  long *local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = 0;
  local_90 = param_1;
  if (((*(byte *)(param_1 + 0x1bb5) & 4) != 0) || (*(long *)(param_1 + 0x1b78) == 0))
  goto LAB_100277584;
  local_79 = '\0';
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_1003a4518(param_1);
  cVar1 = FUN_10030e2f7(param_1);
  if ((cVar1 != '\0') || (uVar3 = *(ulong *)(param_1 + 0x1bb0), (uVar3 & 0x1000000000000) != 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "(LoadingTrackData(trackData) == false) && (trackData->dontRecalcAlbumAndArtistInfo == false)"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = *(ulong *)(param_1 + 0x1bb0);
  }
  *(ulong *)(param_1 + 0x1bb0) = uVar3 | 0x1000000000000;
  uVar2 = *(undefined8 *)(param_1 + 0x1b78);
  local_58 = (long *)0x0;
  local_58 = operator_new(0x28);
  *local_58 = (long)&PTR_FUN_100844b70;
  local_58[1] = (long)&local_90;
  local_58[2] = (long)&local_88;
  local_58[3] = (long)&local_a8;
  local_58[4] = (long)&local_79;
  FUN_1003a0178(uVar2,0,local_78);
  if (local_58 == local_78) {
    lVar4 = 0x20;
LAB_100277511:
    (**(code **)(*local_58 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_58 != (long *)0x0) goto LAB_100277511;
  }
  *(ulong *)(local_90 + 0x1bb0) = *(ulong *)(local_90 + 0x1bb0) & 0xfffeffffffffffff;
  if (local_79 != '\0') {
    for (local_88 = FUN_100277149(); local_88 != 0; local_88 = *(long *)(local_88 + 0x50)) {
      if (*(int *)(local_88 + 0xf0) != 0) {
        *(undefined4 *)(local_88 + 0xf0) = 0;
        FUN_1003a2334();
        FUN_1003a3ffe(local_88);
      }
    }
  }
  _free(local_a8);
LAB_100277584:
  for (local_88 = FUN_100277149(local_90); local_88 != 0; local_88 = FUN_10027728e(local_88)) {
    if ((*(byte *)(local_88 + 0xfa) & 2) != 0) {
      FUN_1003a2334(local_88);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

