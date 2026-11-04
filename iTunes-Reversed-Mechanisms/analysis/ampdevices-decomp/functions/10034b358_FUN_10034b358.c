// name: FUN_10034b358
// address: 10034b358

void FUN_10034b358(undefined8 param_1,char *param_2,undefined8 param_3,long param_4,int param_5,
                  undefined4 param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  int local_22a;
  undefined2 uStack_226;
  undefined2 uStack_224;
  undefined2 uStack_222;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (char *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      pcVar7 = "appIdentifier != nullptr";
LAB_10034b549:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      local_22a = (int)pcVar7;
      uStack_226 = (undefined2)((ulong)pcVar7 >> 0x20);
      uStack_224 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else if (param_4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      pcVar7 = "appFileSpec != nullptr";
      goto LAB_10034b549;
    }
  }
  else {
    lVar5 = FUN_1004de449(param_6);
    if (lVar5 != 0) {
      if (param_5 == 0) {
        iVar4 = FUN_10017d489(param_4,&local_238);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_258 = 0x8220202;
            local_254 = "Assertion failure";
            local_24c = 0x400;
            local_24a = iVar4;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_258,0x12);
          }
        }
        uVar6 = FUN_1001658f1(DAT_1008c4d90,&local_238);
        FUN_100346d75(lVar5,1,param_2,0,uVar6,0,0,0,0);
        FUN_10017060f(uVar6);
      }
      else {
        uVar6 = FUN_10032f3b4(param_5);
        uVar2 = FUN_1003471b5(lVar5,0,0,param_3,param_5);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 != '\0') {
          local_238 = 0x8420302;
          local_22c = 0x400;
          uStack_226 = 0x400;
          uStack_224 = (undefined2)param_5;
          uStack_222 = (undefined2)((uint)param_5 >> 0x10);
          local_234 = param_2;
          local_22a = param_5;
          __os_log_impl(0x100000000,uVar1,0x10,
                        "airtraffic> transfer failed for application \"%{public}@\" (%d / 0x%08X)",
                        &local_238,0x18);
        }
        FUN_100346d75(lVar5,1,param_2,0,0,0,0,uVar6,uVar2);
      }
      FUN_100171552(*(undefined8 *)(lVar5 + 0x167d0),param_2);
      goto LAB_10034b605;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      pcVar7 = "handlerData != nullptr";
      goto LAB_10034b549;
    }
  }
  FUN_1001782e9(0,0);
LAB_10034b605:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

