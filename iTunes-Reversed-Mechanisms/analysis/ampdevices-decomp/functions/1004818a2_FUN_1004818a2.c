// name: FUN_1004818a2
// address: 1004818a2

/* WARNING: Type propagation algorithm not settling */

void FUN_1004818a2(long param_1,char param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint local_5c [4];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      pcVar4 = "TrackInfoIsValid(inTrackInfo)";
LAB_100481a24:
      uStack_4c = 0x822;
      local_5c[3] = 1;
      local_5c[2] = 0x7a0a90;
      local_5c[1] = 0x8220202;
      uStack_4a = SUB82(pcVar4,0);
      uStack_48 = (undefined6)((ulong)pcVar4 >> 0x10);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
  }
  else {
    cVar2 = FUN_1004817dc(param_1,local_5c);
    if (cVar2 == param_2) goto LAB_1004819a0;
    if (param_2 != '\0') {
      uStack_48 = 0;
      uStack_42 = 0;
      uStack_40 = 0;
      local_5c[1] = 0;
      local_5c[2] = 0;
      local_5c[3] = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      if (param_3 == 0) {
        param_3 = FUN_100177d5c(0);
      }
      uVar1 = local_5c[0];
      if (local_5c[0] < param_3) {
        uVar1 = param_3;
      }
      FUN_100314161(param_1);
      *(char *)(param_1 + 0x134) = param_2;
      FUN_1005389ba(local_5c + 1,0x9a);
      if (uVar1 != local_5c[0]) {
        *(uint *)(param_1 + 0x130) = uVar1;
        FUN_1005389ba(local_5c + 1,0xb7);
      }
      FUN_1004755ef(param_1,0,local_5c + 1);
      FUN_100314411(param_1);
      FUN_1001778c4(PTR_cf_LoveStateChangedNotification_10083c0d8);
      goto LAB_1004819a0;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      pcVar4 = "inLikedState != kITLikedState_Unknown";
      goto LAB_100481a24;
    }
  }
  FUN_1001782e9(0,0);
LAB_1004819a0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

