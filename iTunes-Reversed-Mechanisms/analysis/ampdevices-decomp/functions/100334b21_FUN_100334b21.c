// name: FUN_100334b21
// address: 100334b21

void FUN_100334b21(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_100171426(param_2);
  puVar1 = PTR_nothrow_10082c970;
  uVar7 = -(ulong)(uVar3 >> 0x3d != 0) | uVar3 * 8;
  pvVar4 = operator_new__(uVar7,(nothrow_t *)PTR_nothrow_10082c970);
  pvVar5 = operator_new__(uVar7,(nothrow_t *)puVar1);
  if (pvVar4 == (void *)0x0 || pvVar5 == (void *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "anchorDataclass && anchorValue";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1001714b1(param_2,pvVar4,pvVar5);
    FUN_1001b7a44(param_1);
    FUN_1001b7b04(&local_58,"{ ");
    FUN_1001bbcfe(param_1,&local_58);
    FUN_1001b7a50(&local_58);
    if (0 < (long)uVar3) {
      uVar7 = 0;
      do {
        if (uVar7 != 0) {
          FUN_1001b7b04(&local_58,", ");
          FUN_1001bbcfe(param_1,&local_58);
          FUN_1001b7a50(&local_58);
        }
        FUN_1001b7eb0(&local_58,*(undefined8 *)((long)pvVar4 + uVar7 * 8));
        FUN_1001bbcfe(param_1,&local_58);
        FUN_1001b7a50(&local_58);
        FUN_1001b7b04(&local_58," = ");
        FUN_1001bbcfe(param_1,&local_58);
        FUN_1001b7a50(&local_58);
        FUN_1001b7eb0(&local_58,*(undefined8 *)((long)pvVar5 + uVar7 * 8));
        FUN_1001bbcfe(param_1,&local_58);
        FUN_1001b7a50(&local_58);
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    FUN_1001b7b04(&local_58," }");
    FUN_1001bbcfe(param_1,&local_58);
    FUN_1001b7a50(&local_58);
    operator_delete__(pvVar4);
    operator_delete__(pvVar5);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

