// name: FUN_10050afa9
// address: 10050afa9

void FUN_10050afa9(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x391) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData->deviceInfo.needsAudiobookPlaylists";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar2 = FUN_1004744bf(param_2,0);
  lVar4 = FUN_1004fc18a(param_1,param_2,(uVar2 & 0x21800c) == 8);
  if ((uVar2 & 0x21800c) == 8) {
    FUN_1004fc3f0(lVar4,param_2);
  }
  else if (lVar4 != 0) {
    FUN_100485c73(lVar4,param_2);
    if (*(int *)(*(long *)(lVar4 + 0x78) + 0x18) == 0) {
      FUN_100488d27(lVar4,0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

