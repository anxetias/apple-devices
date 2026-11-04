// name: FUN_100207daf
// address: 100207daf

void FUN_100207daf(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  (&DAT_1008c5490)[param_1] = (&DAT_1008c5490)[param_1] + 1;
  if (DAT_1008a2b78 != -1) {
    _dispatch_once(&DAT_1008a2b78,&PTR___NSConcreteGlobalBlock_10083d9f0);
  }
  uVar2 = DAT_1008a2b70;
  cVar1 = _os_log_type_enabled(DAT_1008a2b70,1);
  if (cVar1 != '\0') {
    local_44 = (&PTR_s_Application_10083da10)[param_1];
    local_48 = 0x8200202;
    local_3c = 0x400;
    local_3a = (char *)CONCAT44(local_3a._4_4_,(&DAT_1008c5490)[param_1]);
    __os_log_impl(0x100000000,uVar2,1,"idle> client %s enabled -> %d",&local_48,0x12);
  }
  if (DAT_1008c54b0 == '\0') {
    if (DAT_1008c54b1 != '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "sIdlingContext.forceIdleForQuit == false";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else if (DAT_1008c54b1 == '\0') {
    lVar3 = 0;
    do {
      if ((&DAT_1008c5490)[lVar3] != 0) goto LAB_100207e5d;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 8);
  }
  else {
LAB_100207e5d:
    FUN_100207b47();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

