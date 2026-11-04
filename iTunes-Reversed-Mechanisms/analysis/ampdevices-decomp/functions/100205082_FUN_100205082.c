// name: FUN_100205082
// address: 100205082

void FUN_100205082(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001705e9();
  lVar4 = _CFStringGetTypeID();
  if (lVar3 == lVar4) {
    FUN_100169c4c(param_1,&local_228);
    cVar1 = FUN_1002057b6(param_3,&local_228);
    if (cVar1 != '\0') {
      iVar2 = FUN_100245ace(*(undefined4 *)(param_3 + 8),param_3 + 0x10,0x6974756e,&local_228);
      if (iVar2 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_238 = 0x8420102;
          local_234 = param_1;
          __os_log_impl(0x100000000,uVar5,1,"restore> deleted \"%{public}@\"",&local_238,0xc);
        }
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "JRCFGetTypeID((CFTypeRef) key) == CFStringGetTypeID()";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

