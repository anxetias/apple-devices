// name: FUN_1003a5cc4
// address: 1003a5cc4

undefined8 * FUN_1003a5cc4(int *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1003a5d93:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid( playlist )";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    puVar5 = (undefined8 *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003a5d93;
    }
    uVar6 = *(uint *)(*(long *)(param_1 + 0x1e) + 0x18) / 10;
    uVar2 = 2000;
    if (uVar6 < 2000) {
      uVar2 = uVar6;
    }
    uVar6 = 0x19;
    if (0x19 < uVar2) {
      uVar6 = uVar2;
    }
    FUN_1001c585c(*(undefined8 *)(param_1 + 0x1c),uVar6);
    puVar5 = (undefined8 *)FUN_1001c58d5(*(undefined8 *)(param_1 + 0x1c));
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      *puVar5 = param_1;
      uVar3 = FUN_1001ea5dc();
      *(undefined4 *)(puVar5 + 8) = uVar3;
      *(undefined1 *)((long)puVar5 + 99) = 0;
      *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(DAT_1008c76a0 + 0x1a54);
      if (param_2 == 0) {
        uVar4 = FUN_1002fa216(*(undefined8 *)(param_1 + 2));
        puVar5[5] = uVar4;
      }
      else {
        puVar5[5] = param_2;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

