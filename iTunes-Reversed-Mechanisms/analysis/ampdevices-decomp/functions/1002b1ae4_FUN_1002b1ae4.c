// name: FUN_1002b1ae4
// address: 1002b1ae4

ulong FUN_1002b1ae4(long param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_10047eee6();
    uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if ((cVar2 == '\0') &&
       ((pbVar1 = *(byte **)(param_1 + 0x10), (*pbVar1 & 1) == 0 ||
        (((((*(long *)(pbVar1 + 8) == 0 && (*(long *)(pbVar1 + 0x20) == 0)) &&
           ((*(long *)(param_1 + 8) == 0 ||
            ((*(long *)(*(long *)(param_1 + 8) + 0x10) == 0 || (*(long *)(pbVar1 + 0x38) == 0))))))
          && (*(long *)(pbVar1 + 0x40) == 0)) &&
         ((((*(long *)(pbVar1 + 0x48) == 0 && (*(long *)(pbVar1 + 0x50) == 0)) &&
           (*(long *)(pbVar1 + 0x58) == 0)) &&
          ((*(long *)(pbVar1 + 0x60) == 0 && (*(int *)(pbVar1 + 0x88) == 0)))))))))) {
      uVar4 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4 & 0xffffffff;
}

