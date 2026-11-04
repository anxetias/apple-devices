// name: FUN_1004cf6d4
// address: 1004cf6d4

void FUN_1004cf6d4(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  long local_90;
  long *local_88;
  char local_79;
  long local_78 [4];
  long *local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = (long *)0x0;
  local_90 = param_1;
  if (((*(byte *)(param_1 + 0x1bb5) & 0x80) != 0) || (*(long *)(param_1 + 0x1b90) == 0))
  goto LAB_1004cf8c8;
  local_98 = 0;
  local_79 = '\0';
  local_c8 = 0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_a8 = 0;
  local_b8 = (void *)0x0;
  uStack_b0 = 0;
  FUN_1005e4192(param_1);
  cVar1 = FUN_10030e2f7(param_1);
  if ((cVar1 != '\0') || (uVar4 = *(ulong *)(param_1 + 0x1bb0), (uVar4 & 0x1000000000000) != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "(LoadingTrackData(trackData) == false) && (trackData->dontRecalcAlbumAndArtistInfo == false)"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = *(ulong *)(param_1 + 0x1bb0);
  }
  *(ulong *)(param_1 + 0x1bb0) = uVar4 | 0x1000000000000;
  uVar3 = *(undefined8 *)(param_1 + 0x1b90);
  local_58 = (long *)0x0;
  local_58 = operator_new(0x38);
  *local_58 = (long)&PTR_FUN_10085e8c0;
  local_58[1] = (long)&local_b8;
  local_58[2] = (long)&local_d8;
  local_58[3] = (long)&local_98;
  local_58[4] = (long)&local_90;
  local_58[5] = (long)&local_88;
  local_58[6] = (long)&local_79;
  FUN_1005e405e(uVar3,0,local_78);
  if (local_58 == local_78) {
    lVar5 = 0x20;
LAB_1004cf83a:
    (**(code **)(*local_58 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (local_58 != (long *)0x0) goto LAB_1004cf83a;
  }
  FUN_1005e37a3(local_98);
  *(ulong *)(local_90 + 0x1bb0) = *(ulong *)(local_90 + 0x1bb0) & 0xfffeffffffffffff;
  if (local_79 != '\0') {
    for (local_88 = (long *)FUN_1004cf9b5(); local_88 != (long *)0x0;
        local_88 = (long *)local_88[0x1b]) {
      iVar2 = (**(code **)(*local_88 + 0x20))();
      if (iVar2 != 0) {
        (**(code **)(*local_88 + 0x18))();
        FUN_1005e36b2(local_88,0);
      }
    }
  }
  _free(local_b8);
  _free(local_d8);
LAB_1004cf8c8:
  for (local_88 = (long *)FUN_1004cf9b5(local_90); local_88 != (long *)0x0;
      local_88 = (long *)FUN_1005e386a(local_88)) {
    if ((*(byte *)((long)local_88 + 0x5c) & 0x40) != 0) {
      FUN_1005e36b2(local_88,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

