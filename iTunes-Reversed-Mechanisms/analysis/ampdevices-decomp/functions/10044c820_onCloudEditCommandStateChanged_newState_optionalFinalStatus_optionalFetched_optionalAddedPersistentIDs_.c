// name: onCloudEditCommandStateChanged:newState:optionalFinalStatus:optionalFetched:optionalAddedPersistentIDs:
// address: 10044c820

/* Function Stack Size: 0x2c bytes */

void AMPLClientEventsDelegate::
     onCloudEditCommandStateChanged_newState_optionalFinalStatus_optionalFetched_optionalAddedPersistentIDs_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_char param_4,int param_5,
               bool param_6,ID param_7)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_58;
  unsigned_long_long local_54;
  undefined2 local_4c;
  uint local_4a;
  undefined2 local_46;
  int local_44;
  undefined2 local_40;
  undefined4 local_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c7d20 != -1) {
    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
  }
  uVar1 = DAT_1008c7d18;
  cVar2 = _os_log_type_enabled(DAT_1008c7d18,0);
  if (cVar2 != '\0') {
    local_4a = (uint)(byte)param_4;
    local_3e = 0x4e;
    if ((char)param_6 != '\0') {
      local_3e = 0x59;
    }
    local_58 = 0x8000400;
    local_4c = 0x400;
    local_46 = 0x400;
    local_40 = 0x400;
    local_54 = param_3;
    local_44 = param_5;
    __os_log_impl(0x100000000,uVar1,0,
                  "cec> dispatching cloud edit state changed. cmdID:%llu newState:%d finalStatus:%d options:%c"
                  ,&local_58,0x1e);
  }
  _dispatch_async(PTR___dispatch_main_q_10082cb60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

