// name: FUN_10027b154
// address: 10027b154

void FUN_10027b154(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_868;
  char *local_864;
  undefined2 local_85c;
  int local_85a;
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100159630();
  iVar2 = FUN_100533411(*(undefined1 *)(param_1 + 0xf9),0,1,local_440);
  if (iVar2 == 0) {
    puVar4 = &DAT_1008b5b08;
    if (*(char *)(param_1 + 0xf9) == '\x02') {
      puVar4 = &DAT_1008b5b18;
    }
    iVar2 = FUN_10016a60e(*puVar4,local_440,"Preferences.plist",&local_868,0,200,0);
  }
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_868 = 0x8220202;
      local_864 = "Assertion failure";
      local_85c = 0x400;
      local_85a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_868,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

