// name: FUN_1004924d1
// address: 1004924d1

undefined8
FUN_1004924d1(long param_1,undefined4 *param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar4 = FUN_100492094;
  if (param_3 != (code *)0x0) {
    pcVar4 = param_3;
  }
  if (param_1 == 0) {
LAB_1004925c7:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_100492647:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004925c7;
    }
    if (param_2 != (undefined4 *)0x0) {
      FUN_1001c62d9(param_2,0x28);
      *param_2 = 0x706c6c6d;
      *(undefined8 *)(param_2 + 4) = param_4;
      *(code **)(param_2 + 6) = pcVar4;
      *(undefined8 *)(param_2 + 8) = param_5;
      FUN_1001c23b3(param_2 + 2);
      for (lVar3 = FUN_100315ede(param_1); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x30)) {
        FUN_100492271(param_2,lVar3,0);
      }
      uVar2 = 0;
      FUN_1001c28ba(param_2 + 2,pcVar4,param_5,0);
      goto LAB_10049267a;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "playlistList != nullptr";
      goto LAB_100492647;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10049267a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

