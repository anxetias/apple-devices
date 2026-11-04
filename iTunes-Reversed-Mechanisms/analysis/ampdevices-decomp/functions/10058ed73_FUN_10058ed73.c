// name: FUN_10058ed73
// address: 10058ed73

int FUN_10058ed73(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char local_79;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = 0;
  switch(*(undefined1 *)(param_1 + 0x53)) {
  case 0:
    lVar1 = param_1 + 0x58;
    iVar3 = FUN_10049980b(param_1,lVar1,&local_79);
    if ((iVar3 == 0) && (iVar3 = FUN_10017d477(lVar1,&local_78,0), iVar3 == 0)) {
      *(undefined1 *)(param_1 + 0x53) = 1;
      *(undefined4 *)(param_1 + 0x3c) = local_58;
      *(undefined4 *)(param_1 + 0x40) = local_58;
      if ((*(int *)(param_1 + 0x10) == 4) || (*(int *)(param_1 + 0x10) == 1)) {
        *(undefined4 *)(*(long *)(param_1 + 8) + 0xa8) = local_58;
      }
      if (local_79 == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        iVar4 = FUN_10049a09d(param_1,lVar1,0,0);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_78 = 0x8220202;
            local_74 = "Assertion failure";
            local_6c = 0x400;
            local_6a = iVar4;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
            iVar3 = 0;
          }
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x53) = 2;
    }
    break;
  case 1:
  case 3:
    break;
  case 2:
    iVar3 = -0x2b;
    break;
  default:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    iVar3 = -0x32;
    if (cVar2 != '\0') {
      local_78 = 0x4000100;
      local_74 = (char *)CONCAT44(local_74._4_4_,(uint)*(byte *)(param_1 + 0x53));
      __os_log_impl(0x100000000,uVar5,0x10,"Unknown ITImageInstance::locationState of %d!",&local_78
                    ,8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

