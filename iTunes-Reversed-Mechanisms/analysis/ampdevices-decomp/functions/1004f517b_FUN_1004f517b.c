// name: FUN_1004f517b
// address: 1004f517b

uint FUN_1004f517b(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "fileURLs != nullptr";
LAB_1004f5373:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar4 = FUN_1004de449();
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x14cd8) != '\0') {
        cVar2 = FUN_1004e7efc(lVar4);
        if (cVar2 != '\0') {
          lVar4 = FUN_10048604a(*(undefined8 *)(lVar4 + 0x30));
          if (lVar4 != 0) {
            local_58 = *(undefined8 *)(lVar4 + 0x78);
            local_50 = 0xffffffffffffffff;
            uVar5 = FUN_1004f53ba(param_2);
            uVar3 = FUN_10063ae61(lVar4,uVar5,&local_58,0,0,0);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar1 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              local_48 = 0x4000100;
              local_44 = (char *)(CONCAT44(local_44._4_4_,uVar3) & 0xffffffff000000ff);
              __os_log_impl(0x100000000,uVar1,1,"drag> can accept external drag = %{BOOL}d",
                            &local_48,8);
            }
            FUN_1002c38bf(uVar5);
            goto LAB_1004f52ec;
          }
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_3a = "playlist != nullptr";
            goto LAB_1004f5373;
          }
          goto LAB_1004f52e1;
        }
      }
      uVar3 = 0;
      goto LAB_1004f52ec;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "handlerData != nullptr";
      goto LAB_1004f5373;
    }
  }
LAB_1004f52e1:
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1004f52ec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

