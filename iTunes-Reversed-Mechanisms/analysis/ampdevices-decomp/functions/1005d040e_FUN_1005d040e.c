// name: FUN_1005d040e
// address: 1005d040e

undefined4 FUN_1005d040e(long param_1)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  long local_58;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  local_4c = 0;
  FUN_1005cec66();
  sVar2 = _NewSpeechChannel(0,&local_58);
  if (sVar2 == 0) {
    sVar2 = _GetSpeechRate(local_58,&local_4c);
    if ((sVar2 == 0) || (sVar2 == -0x80)) goto LAB_1005d04ec;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  else {
    if (sVar2 == -0x80) goto LAB_1005d04ec;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_3a = (int)sVar2;
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_1005d04ec:
  if (local_58 != 0) {
    _DisposeSpeechChannel();
  }
  FUN_1001e9eb9(param_1 + 0x180);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

