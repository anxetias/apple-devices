// name: onLibraryCommandComplete:forClientID:forCommandID:
// address: 10044bab2

/* Function Stack Size: 0x20 bytes */

void AMPLClientEventsDelegate::onLibraryCommandComplete_forClientID_forCommandID_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4,unsigned_int param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_58;
  ID local_54;
  undefined2 local_4c;
  unsigned_int local_4a;
  undefined2 local_46;
  unsigned_int local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != 0) {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar1 = DAT_1008c7d18;
    cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8400302;
      local_4c = 0x400;
      local_46 = 0x400;
      local_54 = param_3;
      local_4a = param_4;
      local_44 = param_5;
      __os_log_impl(0x100000000,uVar1,0x10,
                    "**ERROR**: onLibraryCommandComplete failed! error:%@ clientID:%u commandID:%u",
                    &local_58,0x18);
    }
    FUN_10044bbe0(param_3);
  }
  _dispatch_async(PTR___dispatch_main_q_10082cb60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

