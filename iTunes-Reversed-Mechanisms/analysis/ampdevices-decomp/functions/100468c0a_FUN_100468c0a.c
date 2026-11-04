// name: FUN_100468c0a
// address: 100468c0a

undefined8 FUN_100468c0a(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if ((param_2 != 0) && (uVar6 = (ulong)*(uint *)(param_2 + 0x98), uVar6 != 0)) {
    lVar2 = FUN_1001c63e1(uVar6 << 4);
    if (lVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "entries != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0xffffff94;
    }
    else {
      piVar5 = (int *)(lVar2 + 8);
      iVar9 = 100;
      uVar8 = 0;
      lVar7 = 0;
      do {
        lVar3 = FUN_1002f8ed5(param_2,uVar8 & 0xffffffff,1);
        if (lVar3 != 0) {
          *(undefined8 *)(piVar5 + -2) = *(undefined8 *)(lVar3 + 0x60);
          *piVar5 = iVar9;
          iVar9 = iVar9 + 100;
          lVar7 = lVar7 + 1;
        }
        uVar8 = uVar8 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != uVar8);
      *param_3 = lVar7;
      *param_4 = lVar2;
      uVar4 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

