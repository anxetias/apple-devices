// name: FUN_100239983
// address: 100239983

int FUN_100239983(long param_1,char param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "format != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    iVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if ((*(int *)(param_1 + 4) == 0x706e6720) || (*(int *)(param_1 + 4) == 0x6a706567)) {
      iVar2 = FUN_100239868((double)*(ushort *)(param_1 + 10),(double)*(ushort *)(param_1 + 8),
                            param_1);
    }
    else {
      uVar4 = (uint)*(ushort *)(param_1 + 0x12) * (uint)*(ushort *)(param_1 + 10);
      if (*(char *)(param_1 + 0x22) != '\0') {
        uVar5 = *(uint *)(param_1 + 0x28);
        if (uVar5 == 0) {
          uVar4 = uVar4 + 3 & 0x7ffffffc;
        }
        else {
          uVar4 = (uVar4 + uVar5) - 1;
          uVar4 = uVar4 - uVar4 % uVar5;
        }
      }
      iVar2 = *(ushort *)(param_1 + 8) * uVar4;
      if (param_3 != (uint *)0x0) {
        *param_3 = uVar4;
      }
    }
    if ((param_2 != '\0') && (uVar4 = *(uint *)(param_1 + 0x2c), uVar4 != 0)) {
      uVar5 = (iVar2 + uVar4) - 1;
      iVar2 = uVar5 - uVar5 % uVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

