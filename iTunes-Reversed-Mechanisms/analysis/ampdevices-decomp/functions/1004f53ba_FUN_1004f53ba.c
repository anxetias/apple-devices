// name: FUN_1004f53ba
// address: 1004f53ba

undefined8 FUN_1004f53ba(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_10017076e(param_1);
    local_58 = 0x4000100;
    local_54 = (char *)CONCAT44(local_54._4_4_,uVar2);
    __os_log_impl(0x100000000,uVar8,1,"drag> creating external drag with %d files",&local_58,8);
  }
  iVar3 = FUN_1002c3500(&local_60);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      lVar4 = FUN_10017076e(param_1);
      if (0 < lVar4) {
        uVar8 = *(undefined8 *)PTR__kUTTypeFileURL_10082e538;
        lVar9 = 0;
        do {
          lVar5 = FUN_100164a9d(param_1,lVar9);
          if (lVar5 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "fileURL != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar6 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_54 = (char *)FUN_100174746(lVar5);
              local_58 = 0x8420102;
              __os_log_impl(0x100000000,uVar6,1,"drag> adding url \"%{public}@\" to external drag",
                            &local_58,0xc);
            }
            uVar6 = FUN_100174746(lVar5);
            uVar6 = FUN_100173afd(0,uVar6,0x8000100,0);
            iVar3 = FUN_10023f0da(local_60,lVar9 + 1,uVar8,uVar6,0);
            if ((iVar3 != -0x80) && (iVar3 != 0)) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            FUN_10017060f(uVar6);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar4);
      }
      goto LAB_1004f565d;
    }
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  local_60 = 0;
LAB_1004f565d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_60;
}

