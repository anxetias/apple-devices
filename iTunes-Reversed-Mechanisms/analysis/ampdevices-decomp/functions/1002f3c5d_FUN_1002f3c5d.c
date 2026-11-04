// name: FUN_1002f3c5d
// address: 1002f3c5d

undefined8 FUN_1002f3c5d(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_2a = "xmlNode != nullptr";
LAB_1002f3de6:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
LAB_1002f3e0b:
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_2a = "attributeName != nullptr";
        goto LAB_1002f3de6;
      }
      goto LAB_1002f3e0b;
    }
    lVar2 = FUN_100174e3e();
    if (lVar2 != 2) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_2a = "JRCFXMLNodeGetTypeCode(xmlNode) == kCFXMLNodeTypeElement";
        goto LAB_1002f3de6;
      }
      goto LAB_1002f3e0b;
    }
    plVar3 = (long *)FUN_100174ec6(param_1);
    if (plVar3 == (long *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_2a = "elementInfo != nullptr";
        goto LAB_1002f3de6;
      }
      goto LAB_1002f3e0b;
    }
    if (*plVar3 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar4 = FUN_100166c1b(*plVar3,param_2);
        return uVar4;
      }
      goto LAB_1002f3e2f;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
LAB_1002f3e2f:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

