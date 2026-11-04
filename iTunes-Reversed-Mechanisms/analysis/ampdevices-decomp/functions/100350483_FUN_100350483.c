// name: FUN_100350483
// address: 100350483

void FUN_100350483(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10017076e(*(undefined8 *)(param_1 + 0x18));
  if (0 < lVar3) {
    lVar6 = 0;
    do {
      lVar4 = FUN_10016499b(*(undefined8 *)(param_1 + 0x18),lVar6);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "appInfoDict != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_54 = (char *)FUN_100166c1b(lVar4,PTR_cf_Identifier_10083db50);
          local_58 = 0x8420102;
          __os_log_impl(0x100000000,uVar5,1,
                        "airtraffic> extracting installation files for application \"%{public}@\"",
                        &local_58,0xc);
        }
        FUN_10020b50e(lVar4,param_1 + 0x20);
        cVar1 = FUN_100333382(*(undefined8 *)(param_1 + 0x10));
        if (cVar1 != '\0') {
          uVar2 = 0xffffff80;
          goto LAB_1003505fb;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
  }
  uVar2 = 0;
LAB_1003505fb:
  *(undefined4 *)(param_1 + 0x440) = uVar2;
  FUN_1001e9809(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

