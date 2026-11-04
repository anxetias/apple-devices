// name: FUN_10047f4fd
// address: 10047f4fd

undefined1 FUN_10047f4fd(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_10047f676:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_10047f5b1:
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_10047f358(param_1);
    if (cVar2 != '\0') {
      lVar1 = *(long *)(param_1 + 0x58);
      if (lVar1 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_2a = "trackInstance != nullptr";
          goto LAB_10047f676;
        }
        goto LAB_10047f5b1;
      }
      if ((*(int *)(lVar1 + 0x3c) != 0x44574e4c) && (*(int *)(lVar1 + 0x3c) != 0x48545450)) {
        if (*(uint *)(lVar1 + 100) != 0 || -1 < *(int *)(param_1 + 0xc2)) {
          if ((uint)((ulong)*(uint *)(lVar1 + 100) * 0x8cccccccd >> 0x23) < param_2)
          goto LAB_10047f634;
        }
      }
      if (*(uint *)(*(long *)(param_1 + 0x80) + 0xc) != param_2) {
        FUN_100473a90(param_1);
        *(uint *)(*(long *)(param_1 + 0x80) + 0xc) = param_2;
        uVar3 = FUN_100177d5c(0);
        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x14) = uVar3;
        uVar5 = 1;
        goto LAB_10047f636;
      }
    }
LAB_10047f634:
    uVar5 = 0;
  }
LAB_10047f636:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

