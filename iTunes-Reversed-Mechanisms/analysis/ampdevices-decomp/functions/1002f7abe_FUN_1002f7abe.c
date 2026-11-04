// name: FUN_1002f7abe
// address: 1002f7abe

undefined1 FUN_1002f7abe(long param_1,undefined1 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002f7b5b:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar4 = "TrackDataIsValid(trackData)";
LAB_1002f7bdb:
      uStack_5c = 0x822;
      local_60 = 1;
      uStack_64 = 0x7a0a90;
      local_68 = 0x8220202;
      uStack_5a = SUB82(pcVar4,0);
      uStack_58 = (undefined6)((ulong)pcVar4 >> 0x10);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        uStack_64 = 0x7ab58c;
        local_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0xec03;
        uStack_58 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002f7b5b;
    }
    if (param_3 != 0) {
      FUN_1001c62d9(&local_68,0x38);
      local_68 = CONCAT31(local_68._1_3_,param_2);
      local_60 = (undefined4)param_3;
      uStack_5c = (undefined2)((ulong)param_3 >> 0x20);
      uStack_5a = (undefined2)((ulong)param_3 >> 0x30);
      iVar2 = FUN_1002f7c7e(param_1,0x74677673,&local_68);
      uVar5 = iVar2 == 0;
      goto LAB_1002f7c0b;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar4 = "volumeSpec != nullptr";
      goto LAB_1002f7bdb;
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xce;
LAB_1002f7c0b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

