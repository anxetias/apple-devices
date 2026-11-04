// name: FUN_10057b268
// address: 10057b268

void FUN_10057b268(undefined8 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  ushort local_248;
  undefined2 local_246 [263];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  param_2[0x100] = 0;
  *(undefined4 *)(param_2 + 0x200) = 0;
  FUN_1001e1c39(param_1,&local_248);
  local_246[local_248] = 0;
  lVar5 = FUN_1001e556e(local_246,0x7c,param_2);
  if (lVar5 != 0) {
    puVar1 = param_2 + 0x100;
    FUN_1001e393a(param_2);
    FUN_1001e3a23(param_2);
    lVar5 = FUN_1001e556e(lVar5,0x7c,puVar1);
    if (lVar5 != 0) {
      piVar2 = (int *)(param_2 + 0x200);
      FUN_1001e393a(puVar1);
      FUN_1001e3a23(puVar1);
      FUN_1001e556e(lVar5,0x7c,&local_448);
      FUN_1001e393a(&local_448);
      FUN_1001e3a23(&local_448);
      FUN_1001e7d39(&local_448,piVar2);
      if ((*piVar2 == 0x15e) || (*piVar2 == 300)) {
        cVar3 = FUN_1001e4e7c("ie-movie",param_2,0);
        if (cVar3 == '\0') {
          cVar3 = FUN_1001e4e7c("ie-movies",param_2,0);
          if (cVar3 == '\0') goto LAB_10057b423;
        }
        iVar4 = *piVar2;
        if (iVar4 == 300) {
          cVar3 = FUN_1001e4e7c("12A",puVar1,0);
          if (cVar3 != '\0') {
            FUN_1001e04f5("12",puVar1);
          }
          iVar4 = *piVar2;
        }
        if (iVar4 == 0x15e) {
          cVar3 = FUN_1001e4e7c("15A",puVar1,0);
          if (cVar3 != '\0') {
            FUN_1001e04f5("15",puVar1);
          }
        }
      }
      goto LAB_10057b423;
    }
  }
  uVar6 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar6,0x10);
  if (cVar3 != '\0') {
    local_448 = 0x8220202;
    local_444 = "Assertion failure";
    local_43c = 0x822;
    local_43a = "cur != nullptr";
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
  }
  FUN_1001782e9(0x400,0);
LAB_10057b423:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

