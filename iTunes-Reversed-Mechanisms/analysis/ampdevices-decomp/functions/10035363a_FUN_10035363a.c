// name: FUN_10035363a
// address: 10035363a

int FUN_10035363a(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x353) == '\0') {
    iVar7 = 0;
  }
  else if (*(char *)(param_1 + 0x3a2) == '\0') {
    iVar7 = 0;
    uVar2 = FUN_1004744bf(param_2,0);
    uVar8 = (ulong)*(uint *)(param_1 + 0x4ee8);
    if (uVar8 != 0) {
      param_1 = param_1 + 0x4f00;
      iVar7 = 0;
      do {
        if (*(uint *)(param_1 + -0xc) == 0 || (*(uint *)(param_1 + -0xc) & uVar2) != 0) {
          if (((uVar2 & 0x1c04000) == 0) &&
             (*(uint *)(param_1 + -8) == 0 || (uVar2 & ~*(uint *)(param_1 + -8)) != 0)) {
            iVar3 = FUN_100239983(param_1,1,0);
            iVar7 = iVar7 + iVar3;
          }
        }
        param_1 = param_1 + 0x78;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    lVar4 = FUN_100597c13(param_2,0);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "trackInstance != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      iVar7 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      iVar7 = *(int *)(lVar4 + 0x78);
      uVar2 = *(uint *)(param_1 + 0x6f60);
      if (uVar2 != 0) {
        uVar6 = (iVar7 + uVar2) - 1;
        iVar7 = uVar6 - uVar6 % uVar2;
      }
      iVar7 = iVar7 * 2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

