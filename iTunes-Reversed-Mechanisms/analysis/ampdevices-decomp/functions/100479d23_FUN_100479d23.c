// name: FUN_100479d23
// address: 100479d23

undefined8 FUN_100479d23(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_100478ed2(param_2,&local_228);
    FUN_1001b8dfc(local_238,&local_228);
    uVar1 = *(undefined2 *)(*(long *)(param_2 + 0x70) + 0x10);
    FUN_1004793b3(param_2,&local_228);
    FUN_1001b8dfc(local_248,&local_228);
    FUN_100479f13(param_1,local_238,uVar1,local_248,1);
    FUN_1001b7a50(local_248);
    FUN_1001b7a50(local_238);
    cVar2 = FUN_1001b8428(param_1);
    if (cVar2 != '\0') {
      FUN_1002fb8c8(param_2,0,&local_228);
      FUN_1001b8dfc(local_238,&local_228);
      FUN_1001b80b2(param_1,local_238);
      FUN_1001b7a50(local_238);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

