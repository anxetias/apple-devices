// name: FUN_10033470c
// address: 10033470c

void FUN_10033470c(long param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  char *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003347cb:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1003347f1;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_1003347cb;
  }
  if (*(int *)(param_1 + 0x166d4) == param_2) goto LAB_1003347f1;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar2 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_54 = *(char **)(param_1 + 0x152c8);
    local_4a = (&PTR_s_Unknown_100854818)[param_2];
    if ((ulong)*(uint *)(param_1 + 0x166d4) < 10) {
      local_40 = (&PTR_s_Unknown_100854818)[*(uint *)(param_1 + 0x166d4)];
    }
    else {
      local_40 = "UNKNOWN";
    }
    local_58 = 0x8420302;
    local_4c = 0x822;
    local_42 = 0x822;
    __os_log_impl(0x100000000,uVar2,1,
                  "airtraffic> setting sync state for device %{public}@ to %{public}s, previous state was %{public}s"
                  ,&local_58,0x20);
  }
  *(int *)(param_1 + 0x166d4) = param_2;
  *(undefined4 *)(param_1 + 0x169f8) = param_3;
  if ((param_2 - 7U < 2) || (param_2 == 0)) {
LAB_10033488b:
    FUN_10032fec1(param_1);
  }
  else if (param_2 == 9) {
    *(undefined4 *)(param_1 + 0x152dc) = 0xffffff80;
    goto LAB_10033488b;
  }
  cVar1 = FUN_1001c19de();
  if (cVar1 == '\0') {
    FUN_10033ca2e(param_1);
    FUN_10023318f(param_1,"");
  }
LAB_1003347f1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

