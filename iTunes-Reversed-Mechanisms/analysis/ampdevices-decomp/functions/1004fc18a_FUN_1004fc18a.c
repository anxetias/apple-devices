// name: FUN_1004fc18a
// address: 1004fc18a

long FUN_1004fc18a(long param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined2 uStack_42c;
  undefined2 uStack_42a;
  undefined6 uStack_428;
  undefined2 uStack_422;
  undefined6 uStack_420;
  undefined2 uStack_41a;
  undefined4 uStack_418;
  undefined2 uStack_414;
  undefined4 local_410;
  undefined3 uStack_40c;
  undefined8 local_408;
  undefined8 local_400;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined8 uStack_3ef;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x391) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "handlerData->deviceInfo.needsAudiobookPlaylists";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1004772c4(param_2,&local_238);
  if ((short)local_238 == 0) {
    FUN_100476928(param_2,&local_238);
    if ((short)local_238 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_438 = 0x8220202;
        uStack_434 = 0x7a0a90;
        uStack_430 = 1;
        uStack_42c = 0x822;
        uStack_42a = 0x726b;
        uStack_428 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
      }
      FUN_1001782e9(0,0);
      lVar4 = 0;
      goto LAB_1004fc320;
    }
  }
  lVar4 = FUN_100315ede(*(undefined8 *)(param_1 + 0x30));
  local_440 = lVar4;
  if (lVar4 != 0) {
    do {
      local_440 = lVar4;
      if (*(short *)(lVar4 + 0x10) == 0x1e) {
        FUN_1004870ae(lVar4,&local_438);
        cVar1 = FUN_1001e3edc(&local_438,&local_238,1);
        if (cVar1 != '\0') goto LAB_1004fc320;
      }
      lVar4 = FUN_100316031(lVar4);
      local_440 = lVar4;
    } while (lVar4 != 0);
  }
  lVar4 = 0;
  if (param_3 != '\0') {
    local_438 = 0;
    uStack_434 = 0;
    uStack_428 = 0;
    uStack_422 = 0;
    uStack_420 = 0;
    uStack_41a = 0;
    uStack_418 = 0;
    local_410 = 0;
    uStack_40c = 0;
    local_408 = 0x3ff0000000000000;
    local_400 = 0;
    uStack_3f8 = 0;
    uStack_3f7 = 0;
    uStack_3f0 = 0;
    uStack_3ef = 0;
    uStack_430 = SUB84(&local_238,0);
    uStack_42c = (undefined2)((ulong)&local_238 >> 0x20);
    uStack_42a = (undefined2)((ulong)&local_238 >> 0x30);
    uStack_414 = 0x1e;
    iVar2 = FUN_1002e2674(*(undefined8 *)(param_1 + 0x30),8,&local_438,&local_440);
    lVar4 = local_440;
    if (iVar2 == 0) {
      FUN_100488970(local_440);
      lVar4 = local_440;
    }
  }
LAB_1004fc320:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

