// name: FUN_100369f3c
// address: 100369f3c

void FUN_100369f3c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100369ff3;
    }
    FUN_100313e0b(param_1);
    for (lVar3 = FUN_1002f930c(param_1); lVar3 != 0; lVar3 = FUN_1002f9451(lVar3)) {
      if (*(int *)(lVar3 + 0x198) != 0) {
        *(undefined4 *)(lVar3 + 0x198) = 0;
        FUN_100475a22(lVar3,&DAT_100745630);
      }
    }
    FUN_1002fbbfc(param_1);
  }
LAB_100369ff3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

