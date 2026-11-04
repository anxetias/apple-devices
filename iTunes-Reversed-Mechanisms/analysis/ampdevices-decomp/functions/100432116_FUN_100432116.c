// name: FUN_100432116
// address: 100432116

bool FUN_100432116(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined2 local_52;
  long local_50;
  undefined2 local_48;
  long local_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)(param_1 + 0x359) == '\0') || (*(char *)(param_1 + 0x15218) == '\0')) {
    bVar5 = false;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x14d80);
    lVar4 = FUN_1004e116d();
    bVar5 = lVar1 == lVar4;
    if (bVar5) {
      FUN_100430e89(param_1 + 0x15090,param_1 + 0x150d0);
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_64 = "NOT ";
      if (lVar1 == lVar4) {
        local_64 = "";
      }
      local_5a = *(undefined8 *)(param_1 + 0x14d80);
      local_50 = param_1 + 0x150d0;
      local_46 = param_1 + 0x15090;
      local_68 = 0x8220402;
      local_5c = 0x800;
      local_52 = 0x820;
      local_48 = 0x820;
      __os_log_impl(0x100000000,uVar2,1,
                    "setup> device is %{public}son home mobile sync user account (user id 0x%016llX, machine name \"%s\", user name \"%s\")"
                    ,&local_68,0x2a);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

