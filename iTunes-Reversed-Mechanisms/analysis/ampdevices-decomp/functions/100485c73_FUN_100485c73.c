// name: FUN_100485c73
// address: 100485c73

undefined1 FUN_100485c73(int *param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100485d05:
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_3a = "PlaylistIsValid(playlist)";
LAB_100485e01:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_100485d05;
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      uVar6 = 0;
      puVar3 = *(undefined8 **)(param_2 + 0x68);
      while (puVar3 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar3[10];
        piVar2 = (int *)*puVar3;
        puVar3 = puVar1;
        if (piVar2 == param_1) {
          FUN_1003a6ecc();
          uVar6 = 1;
        }
      }
      goto LAB_100485d6c;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_3a = "TrackInfoIsValid(trackInfo)";
      goto LAB_100485e01;
    }
  }
  uVar6 = 0;
  FUN_1001782e9(0,0);
LAB_100485d6c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

