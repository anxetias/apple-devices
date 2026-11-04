// name: FUN_100335d68
// address: 100335d68

void FUN_100335d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = FUN_100171426(param_2);
  puVar1 = PTR_nothrow_10082c970;
  uVar9 = -(ulong)(uVar4 >> 0x3d != 0) | uVar4 * 8;
  pvVar5 = operator_new__(uVar9,(nothrow_t *)PTR_nothrow_10082c970);
  pvVar6 = operator_new__(uVar9,(nothrow_t *)puVar1);
  if (pvVar5 == (void *)0x0 || pvVar6 == (void *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "syncTypeDataclass && syncTypeValue";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1001714b1(param_2,pvVar5,pvVar6);
    FUN_1001b7a44(param_1);
    FUN_1001b7b04(&local_58,"{ ");
    FUN_1001bbcfe(param_1,&local_58);
    FUN_1001b7a50(&local_58);
    if (0 < (long)uVar4) {
      uVar9 = 0;
      do {
        uVar3 = FUN_1001695bb(*(undefined8 *)((long)pvVar6 + uVar9 * 8),0);
        if (uVar9 != 0) {
          FUN_1001b7b04(&local_58,", ");
          FUN_1001bbcfe(param_1,&local_58);
          FUN_1001b7a50(&local_58);
        }
        FUN_1001b7eb0(&local_58,*(undefined8 *)((long)pvVar5 + uVar9 * 8));
        FUN_1001bbcfe(param_1,&local_58);
        FUN_1001b7a50(&local_58);
        FUN_1001b7b04(&local_58," = ");
        FUN_1001bbcfe(param_1,&local_58);
        FUN_1001b7a50(&local_58);
        pcVar8 = "UNKNOWN";
        if (uVar3 < 4) {
          pcVar8 = (&PTR_s_ATSyncNoSync_100854868)[uVar3];
        }
        FUN_1001b7b04(&local_58,pcVar8);
        FUN_1001bbcfe(param_1);
        FUN_1001b7a50(&local_58);
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    FUN_1001b7b04(&local_58," }");
    FUN_1001bbcfe(param_1,&local_58);
    FUN_1001b7a50(&local_58);
    operator_delete__(pvVar5);
    operator_delete__(pvVar6);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

