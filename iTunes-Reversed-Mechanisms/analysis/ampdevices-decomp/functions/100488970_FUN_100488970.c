// name: FUN_100488970
// address: 100488970

void FUN_100488970(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100488a54:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100488a76;
  }
  if (*param_1 != 0x706c7374) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7ab58c;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_100488a54;
  }
  *(byte *)((long)param_1 + 0x241) = *(byte *)((long)param_1 + 0x241) & 0x3f;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  FUN_100484c95(param_1);
  FUN_1001c62d9(&local_58,0x38);
  local_58 = SUB84(param_1,0);
  uStack_54 = (undefined4)((ulong)param_1 >> 0x20);
  FUN_1002fc1ae(*(undefined8 *)(param_1 + 2),0x74646e70,&local_58);
  plVar3 = *(long **)(param_1 + 2);
  if ((*(byte *)(plVar3 + 0x376) & 1) == 0) {
LAB_100488a27:
    (**(code **)(*plVar3 + 0x10))(plVar3,0x74646170,plVar3,param_1,0);
  }
  else {
    cVar1 = FUN_1001c19b0();
    if (cVar1 != '\0') {
      plVar3 = *(long **)(param_1 + 2);
      goto LAB_100488a27;
    }
  }
  if (((uint)param_1[0x90] >> 0x16 & 1) == 0) {
    param_1[0x90] = param_1[0x90] | 0x400000;
  }
LAB_100488a76:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

