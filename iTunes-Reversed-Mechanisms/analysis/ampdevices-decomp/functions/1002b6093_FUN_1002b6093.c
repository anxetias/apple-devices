// name: FUN_1002b6093
// address: 1002b6093

uint FUN_1002b6093(long param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x48) >> 0xb & 3;
    cVar3 = FUN_100474d03();
    uVar6 = uVar7 + 0x40;
    if (cVar3 == '\0') {
      uVar6 = uVar7;
    }
    lVar1 = *(long *)(param_1 + 8);
    iVar5 = (**(byte **)(param_1 + 0x18) & 0x10) * 0x8000000;
    iVar2 = iVar5 + 0x40000000;
    if (*(int *)(lVar1 + 0x124) != -1) {
      iVar2 = iVar5;
    }
    uVar6 = (*(uint *)(lVar1 + 0xc2) & 0x1000) << 0xf | (*(uint *)(lVar1 + 0xc2) & 0x800000) << 6 |
            iVar2 + uVar6 | (*(ushort *)(lVar1 + 0xc6) & 2) << 0x1b;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

