// name: FUN_1002b61c6
// address: 1002b61c6

void FUN_1002b61c6(long param_1,uint param_2)

{
  uint *puVar1;
  ushort *puVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar3 = *(long *)(param_1 + 8), lVar3 == 0)) ||
     (*(long *)(lVar3 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((param_2 & 1) != 0) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 8;
    }
    if ((param_2 & 2) != 0) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0x10;
    }
    if ((param_2 & 0x40) != 0) {
      *(byte *)(lVar3 + 0xc4) = *(byte *)(lVar3 + 0xc4) | 4;
    }
    if ((param_2 >> 0x1d & 1) != 0) {
      puVar1 = (uint *)(*(long *)(param_1 + 8) + 0xc2);
      *puVar1 = *puVar1 | 0x800000;
    }
    if ((param_2 >> 0x1c & 1) != 0) {
      puVar2 = (ushort *)(*(long *)(param_1 + 8) + 0xc6);
      *puVar2 = *puVar2 | 2;
    }
    if ((param_2 >> 0x1b & 1) != 0) {
      puVar1 = (uint *)(*(long *)(param_1 + 8) + 0xc2);
      *puVar1 = *puVar1 | 0x1000;
    }
    if ((param_2 >> 0x1e & 1) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x124) = 0xffffffff;
    }
    if ((int)param_2 < 0) {
      FUN_1002af503(param_1);
      **(byte **)(param_1 + 0x18) = **(byte **)(param_1 + 0x18) | 0x10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

