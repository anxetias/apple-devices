// name: FUN_1004872d8
// address: 1004872d8

undefined8 FUN_1004872d8(int *param_1,short *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulong uVar5;
  uint local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1004873d0:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_21a = "PlaylistIsValid(playlist)";
LAB_100487456:
      local_21c = 0x822;
      local_224 = "Assertion failure";
      local_228 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_228 = 0x8220202;
        local_224 = "Assertion failure (expected to be true)";
        local_21c = 0x822;
        local_21a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004873d0;
    }
    if (param_2 != (short *)0x0) {
      local_228 = local_228 & 0xffff0000;
      if (*param_2 != 0) {
        uVar2 = *param_2 + 1;
        uVar4 = 2;
        if (2 < uVar2) {
          uVar4 = uVar2;
        }
        uVar2 = 1;
        uVar5 = 1;
        do {
          if (0x1f < (ushort)param_2[uVar5]) {
            *(short *)((long)&local_228 + (ulong)uVar2 * 2) = param_2[uVar5];
            local_228 = CONCAT22(local_228._2_2_,(short)local_228 + 1);
            uVar2 = uVar2 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
      }
      uVar3 = FUN_1001ddeca(param_1 + 0x5e,&local_228,param_1 + 0x72);
      if ((int)uVar3 == 0) {
        FUN_1004874fd(param_1,1);
        uVar3 = 0;
      }
      goto LAB_100487489;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_21a = "playlistName != nullptr";
      goto LAB_100487456;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_100487489:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

