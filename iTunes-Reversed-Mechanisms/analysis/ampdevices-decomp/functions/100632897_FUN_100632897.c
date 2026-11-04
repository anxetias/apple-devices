// name: FUN_100632897
// address: 100632897

int FUN_100632897(undefined4 param_1,byte param_2,undefined4 param_3)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 local_a2 [18];
  undefined1 local_90 [8];
  undefined1 local_88 [4];
  undefined4 local_84;
  long *local_80;
  int local_74;
  long *local_70;
  undefined1 local_68 [4];
  byte local_64;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = (long *)0x0;
  local_70 = (long *)0x0;
  local_84 = param_3;
  if ((param_2 & 0xfe) != 2) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(injectOrEjectCommand == INJECT_COMMAND) || (injectOrEjectCommand == EJECT_COMMAND)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_54 = "EJECT";
    if (param_2 == 3) {
      local_54 = "INJECT";
    }
    local_58 = 0x8220102;
    __os_log_impl(0x100000000,uVar5,1,"Performing %{public}s command",&local_58,0xc);
  }
  uVar5 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x7d,0x66,0x67,0x8e,8,0xa2,0x11,0xd5,0xa1,0xb8,0,0x30,0x65,0x7d,5,0x2a);
  uVar6 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,0x6f)
  ;
  iVar4 = _IOCreatePlugInInterfaceForService(param_1,uVar5,uVar6,&local_80,local_88);
  plVar7 = local_80;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ioreturn == ((HRESULT)0x00000000L)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100632b8c;
  }
  pcVar1 = *(code **)(*local_80 + 8);
  uVar5 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x1b,0xbc,0x41,0x32,8,0xa5,0x11,0xd5,0x90,0xed,0,0x30,0x65,0x7d,5,0x2a);
  auVar9 = _CFUUIDGetUUIDBytes(uVar5);
  iVar4 = (*pcVar1)(plVar7,auVar9._0_8_,auVar9._8_8_,&local_70);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*local_70 + 0x40))();
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "ioreturn == 0";
        goto LAB_100632d7e;
      }
      goto LAB_100632b35;
    }
    plVar7 = (long *)(**(code **)(*local_70 + 0x50))();
    if (plVar7 == (long *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "task != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar4 = -0x1ffffd44;
    }
    else {
      FUN_1001c62d9(local_68,0x10);
      local_68[0] = 0x1b;
      local_64 = param_2;
      iVar4 = (**(code **)(*plVar7 + 0x40))(plVar7,local_68,6);
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*plVar7 + 0x60))(plVar7,10000);
        plVar2 = local_70;
        if (iVar4 != 0) goto LAB_100632c0a;
        if ((char)local_84 != '\0') {
          pcVar1 = *(code **)(*local_70 + 0x30);
          uVar5 = _CFRunLoopGetCurrent();
          iVar4 = (*pcVar1)(plVar2,uVar5);
          if (iVar4 == 0) {
            puVar8 = (undefined8 *)FUN_1001c63e1(0x18);
            if (puVar8 == (undefined8 *)0x0) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "callbackParams != __null";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16)
                ;
              }
              FUN_1001782e9(0,0);
              iVar4 = -0x1ffffd43;
              goto LAB_100632c32;
            }
            *puVar8 = local_80;
            puVar8[1] = local_70;
            puVar8[2] = plVar7;
            iVar4 = (**(code **)(*plVar7 + 0x70))(plVar7,FUN_1006373b4,puVar8);
            if (iVar4 == 0) {
              iVar4 = (**(code **)(*plVar7 + 0x78))(plVar7);
              if (iVar4 == 0) {
                iVar4 = 0;
                goto LAB_100632b8c;
              }
            }
          }
          goto LAB_100632c0a;
        }
        iVar4 = (**(code **)(*plVar7 + 0x80))(plVar7,local_a2,&local_74,local_90);
        if (iVar4 != 0) goto LAB_100632c0a;
        if (local_74 == 0) {
          iVar4 = 0;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "taskStatus == kSCSITaskStatus_GOOD";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar4 = local_74;
        }
      }
      else {
LAB_100632c0a:
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "ioreturn == 0";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
LAB_100632c32:
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "hresult == ((HRESULT)0x00000000L)";
LAB_100632d7e:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
LAB_100632b35:
    FUN_1001782e9(0,0);
  }
  if (local_70 != (long *)0x0) {
    iVar4 = (**(code **)(*local_70 + 0x48))();
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "ioreturn == 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    (**(code **)(*local_70 + 0x18))();
  }
  _IODestroyPlugInInterface(local_80);
LAB_100632b8c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

