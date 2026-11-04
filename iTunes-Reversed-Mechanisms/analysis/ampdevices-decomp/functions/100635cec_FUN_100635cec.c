// name: FUN_100635cec
// address: 100635cec

undefined1 FUN_100635cec(int param_1)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 auVar8 [16];
  undefined1 local_7c [4];
  long *local_78;
  long local_70;
  long *local_68;
  ushort local_5c;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = (long *)0x0;
  local_68 = (long *)0x0;
  if (param_1 == 0) {
    uVar7 = 1;
    goto LAB_100635e15;
  }
  uVar5 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x9d,199,0xb7,0x80,0x9e,0xc0,0x11,0xd4,0xa5,0x4f,0,10,0x27,5,0x28,0x61);
  uVar6 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,0x6f)
  ;
  iVar4 = _IOCreatePlugInInterfaceForService(param_1,uVar5,uVar6,&local_78,local_7c);
  plVar2 = local_78;
  if (iVar4 != 0) goto LAB_100635dda;
  if (local_78 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "plugInInterface != __null";
LAB_10063606b:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
LAB_100635df7:
    uVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    pcVar1 = *(code **)(*local_78 + 8);
    uVar5 = _CFUUIDGetConstantUUIDWithBytes
                      (0,0xfe,0x2f,0xd5,0x2f,0x3b,0x5a,0x47,0x3b,0x97,0x7b,0xad,0x99,0,0x1e,0xb3,
                       0xed);
    auVar8 = _CFUUIDGetUUIDBytes(uVar5);
    iVar4 = (*pcVar1)(plVar2,auVar8._0_8_,auVar8._8_8_,&local_68);
    _IODestroyPlugInInterface(local_78);
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "hresult == ((HRESULT)0x00000000L)";
        goto LAB_10063606b;
      }
      goto LAB_100635df7;
    }
    if (local_68 == (long *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "deviceInterface != __null";
        goto LAB_10063606b;
      }
      goto LAB_100635df7;
    }
    iVar4 = (**(code **)(*local_68 + 0x70))(local_68,&local_5c);
    if (iVar4 != 0) {
LAB_100635dda:
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "err == 0";
        goto LAB_10063606b;
      }
      goto LAB_100635df7;
    }
    uVar7 = 1;
    if (0xf6 < (ushort)(local_5c + 0xedf7)) goto LAB_100635e02;
    local_59 = '\0';
    local_70 = 0;
    iVar4 = (**(code **)(*local_68 + 0x98))();
    if (iVar4 != 0) goto LAB_100635dda;
    if (local_59 != '\x02') {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "numConfigurations == 2";
        goto LAB_10063606b;
      }
      goto LAB_100635df7;
    }
    iVar4 = (**(code **)(*local_68 + 0xa8))(local_68,1,&local_70);
    if (iVar4 != 0) goto LAB_100635dda;
    if ((local_5c - 0x1209 < 2) || (local_5c == 0x1260)) {
      if ((*(byte *)(local_70 + 4) | 2) != 3) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_4a = "configuration->bNumInterfaces == 1 || configuration->bNumInterfaces == 3";
          goto LAB_10063606b;
        }
        goto LAB_100635df7;
      }
    }
    else if (*(char *)(local_70 + 4) != '\x03') {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "configuration->bNumInterfaces == 3";
        goto LAB_10063606b;
      }
      goto LAB_100635df7;
    }
  }
LAB_100635e02:
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
LAB_100635e15:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

