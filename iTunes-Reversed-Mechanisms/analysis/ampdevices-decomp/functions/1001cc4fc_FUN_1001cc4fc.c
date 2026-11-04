// name: FUN_1001cc4fc
// address: 1001cc4fc

void FUN_1001cc4fc(uint param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_48;
  int local_44;
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_3a;
  undefined *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c0f9c();
  iVar3 = DAT_1008c5390 + -1;
  uVar5 = (ulong)param_1;
  piVar1 = (int *)(&DAT_1008c53a0 + uVar5 * 4);
  DAT_1008c5390 = iVar3;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_1001cd3a9(param_1);
    iVar3 = DAT_1008c5390;
  }
  if (iVar3 < 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006aedcf(uVar4);
    }
    FUN_1001782e9(0,0);
    DAT_1008c5390 = 0;
  }
  if (*(int *)(&DAT_1008c53a0 + uVar5 * 4) < 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006aee45(uVar4);
    }
    FUN_1001782e9(0,0);
    *(undefined4 *)(&DAT_1008c53a0 + uVar5 * 4) = 0;
  }
  uVar4 = FUN_1001cc35a();
  cVar2 = _os_log_type_enabled(uVar4,0);
  if (cVar2 != '\0') {
    local_3e = *(undefined4 *)(&DAT_1008c53a0 + uVar5 * 4);
    local_38 = (&PTR_s_common_10088f640)[uVar5];
    local_48 = 0x4000302;
    local_44 = DAT_1008c5390;
    local_40 = 0x400;
    local_3a = 0x822;
    __os_log_impl(0x100000000,uVar4,0,"pm) sys-allow        %d %d \'%{public}s\'",&local_48,0x18);
  }
  FUN_1001c0fad();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

