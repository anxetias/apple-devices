// name: FUN_1005ceca8
// address: 1005ceca8

int FUN_1005ceca8(long param_1)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  FUN_1005cec66();
  sVar2 = _NewSpeechChannel(0,&local_50);
  if (sVar2 == 0) {
    sVar2 = _GetSpeechRate(local_50,param_1 + 0x178);
    iVar4 = (int)sVar2;
    if ((sVar2 == 0) || (sVar2 == -0x80)) goto LAB_1005ced87;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  else {
    iVar4 = -0x80;
    if (sVar2 == -0x80) goto LAB_1005ced87;
    iVar4 = (int)sVar2;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    local_3a = iVar4;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_1005ced87:
  if (local_50 != 0) {
    _DisposeSpeechChannel();
  }
  FUN_1001e9eb9(param_1 + 0x180);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

