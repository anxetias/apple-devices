// name: FUN_1001cc3a4
// address: 1001cc3a4

void FUN_1001cc3a4(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
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
  uVar5 = (ulong)param_1;
  iVar2 = *(int *)(&DAT_1008c53a0 + uVar5 * 4);
  if (iVar2 == 0) {
    FUN_1001cd24e(param_1);
    iVar2 = *(int *)(&DAT_1008c53a0 + uVar5 * 4);
  }
  iVar4 = DAT_1008c5390 + 1;
  DAT_1008c5390 = iVar4;
  *(int *)(&DAT_1008c53a0 + uVar5 * 4) = iVar2 + 1;
  if (iVar2 + 1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006aece3(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar4 = DAT_1008c5390;
  }
  if (iVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006aed59(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  uVar3 = FUN_1001cc35a();
  cVar1 = _os_log_type_enabled(uVar3,0);
  if (cVar1 != '\0') {
    local_3e = *(undefined4 *)(&DAT_1008c53a0 + uVar5 * 4);
    local_38 = (&PTR_s_common_10088f640)[uVar5];
    local_48 = 0x4000302;
    local_44 = DAT_1008c5390;
    local_40 = 0x400;
    local_3a = 0x822;
    __os_log_impl(0x100000000,uVar3,0,"pm) sys-prevent      %d %d \'%{public}s\'",&local_48,0x18);
  }
  FUN_1001c0fad();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

