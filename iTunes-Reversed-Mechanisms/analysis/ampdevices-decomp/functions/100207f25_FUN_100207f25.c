// name: FUN_100207f25
// address: 100207f25

void FUN_100207f25(ulong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  param_1 = param_1 & 0xffffffff;
  iVar1 = (&DAT_1008c5490)[param_1];
  (&DAT_1008c5490)[param_1] = iVar1 + -1;
  if (iVar1 < 1) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "sIdlingContext.idleClientCounts[inClientID] >= 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    (&DAT_1008c5490)[param_1] = 0;
  }
  if (DAT_1008a2b78 != -1) {
    _dispatch_once(&DAT_1008a2b78,&PTR___NSConcreteGlobalBlock_10083d9f0);
  }
  uVar3 = DAT_1008a2b70;
  cVar2 = _os_log_type_enabled(DAT_1008a2b70,1);
  if (cVar2 != '\0') {
    local_44 = (&PTR_s_Application_10083da10)[param_1];
    local_48 = 0x8200202;
    local_3c = 0x400;
    local_3a = (char *)CONCAT44(local_3a._4_4_,(&DAT_1008c5490)[param_1]);
    __os_log_impl(0x100000000,uVar3,1,"idle> client %s disabled -> %d",&local_48,0x12);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

