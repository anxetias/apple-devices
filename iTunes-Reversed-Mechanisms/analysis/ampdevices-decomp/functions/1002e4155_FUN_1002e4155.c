// name: FUN_1002e4155
// address: 1002e4155

void FUN_1002e4155(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar4 = "TrackInfoIsValid( inTrackInfo )";
LAB_1002e42d2:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar4,0);
      uStack_48 = (undefined6)((ulong)pcVar4 >> 0x10);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1002e4285:
    FUN_1001782e9(0,1);
  }
  else {
    lVar2 = FUN_1001ab132(param_2);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        pcVar4 = "inUUID.GetLength() > 0";
        goto LAB_1002e42d2;
      }
      goto LAB_1002e4285;
    }
    cVar1 = FUN_1001a85de(param_2,param_1 + 0x160);
    if ((cVar1 == '\0') || (*(long *)(param_1 + 0x168) != param_3)) {
      FUN_100314161(param_1);
      FUN_1001a8c4a(param_1 + 0x160,param_2);
      *(long *)(param_1 + 0x168) = param_3;
      *(byte *)(param_1 + 199) = *(byte *)(param_1 + 199) & 0x7f;
      uStack_48 = 0;
      uStack_42 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      FUN_1005389ba(&local_58,0x25);
      FUN_1004755ef(param_1,0,&local_58);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        FUN_100314411(param_1);
        return;
      }
      goto LAB_1002e42f9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_1002e42f9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

