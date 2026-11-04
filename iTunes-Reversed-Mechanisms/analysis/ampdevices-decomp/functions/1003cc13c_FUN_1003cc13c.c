// name: FUN_1003cc13c
// address: 1003cc13c

int FUN_1003cc13c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_a98;
  char *local_a94;
  undefined2 local_a8c;
  char *local_a8a;
  undefined2 local_678;
  undefined1 local_676 [510];
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1003c9de1(param_1,local_478);
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_a98 = 0x8220202;
      local_a94 = "Assertion failure";
      local_a8c = 0x822;
      local_a8a = "purchasedBooksInfoDict != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x2b;
  }
  else {
    lVar4 = FUN_100166844(lVar3,&cf_Books);
    if (lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_a98 = 0x8220202;
        local_a94 = "Assertion failure";
        local_a8c = 0x822;
        local_a8a = "booksArray != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0xd0;
    }
    else {
      lVar5 = FUN_10017076e(lVar4);
      if (lVar5 < 1) {
        iVar2 = 0;
      }
      else {
        uVar7 = lVar5 + 1;
        do {
          lVar5 = FUN_10016499b(lVar4,uVar7 - 2);
          if (lVar5 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_4a = "bookInfoDict != nullptr";
LAB_1003cc345:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_1003cc2af:
            FUN_1001782e9(0,0);
          }
          else {
            cVar1 = FUN_100166ce2(lVar5,&cf_Path,&local_678);
            if (cVar1 == '\0') {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_4a = 
                "JRCFDictionaryGetUString(bookInfoDict, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"Path\" \"\")), bookPath)"
                ;
                goto LAB_1003cc345;
              }
              goto LAB_1003cc2af;
            }
            FUN_1001dfe75(&local_678,0x2f,0x2f);
            iVar2 = FUN_10017d64f(local_478,local_676,local_678,&local_a98,0,0);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                cVar1 = FUN_10017f77e(&local_a98,param_2);
                if (cVar1 != '\0') {
                  FUN_100170bed(lVar4,uVar7 - 2);
                  iVar2 = FUN_10016a60e(lVar3,local_478,"Purchases.plist",0,0,100,0);
                  if ((iVar2 != -0x80) && (iVar2 != 0)) {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  goto LAB_1003cc3da;
                }
              }
              else {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)");
                }
              }
            }
          }
          uVar7 = uVar7 - 1;
        } while (1 < uVar7);
        iVar2 = 0;
      }
    }
  }
LAB_1003cc3da:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

