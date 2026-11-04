// name: FUN_1001cc9d4
// address: 1001cc9d4

undefined8 FUN_1001cc9d4(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_58;
  int local_54;
  undefined2 local_50;
  undefined4 local_4e;
  undefined2 local_4a;
  int local_48;
  undefined2 local_44;
  undefined4 local_42;
  undefined2 local_3e;
  long local_3c;
  undefined2 local_34;
  long local_32;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = _CFRunLoopGetCurrent();
  DAT_1008a22cc = _IORegisterForSystemPower(0,&DAT_1008a22c0,FUN_1001ccca4,&DAT_1008a22c8);
  bVar5 = true;
  if (DAT_1008a22cc == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006af014(uVar4);
    }
    FUN_1001782e9(0,0);
    bVar5 = DAT_1008a22cc != 0;
  }
  if ((bool)(DAT_1008a22c0 != 0 & bVar5)) {
    DAT_1008a22d0 = _IONotificationPortGetRunLoopSource();
    if (DAT_1008a22d0 != 0) {
      _CFRunLoopAddSource(uVar3,DAT_1008a22d0,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
      goto LAB_1001cca8c;
    }
  }
  else {
LAB_1001cca8c:
    if (DAT_1008a22d0 != 0) {
      uVar4 = _IOServiceNameMatching("IODisplayWrangler");
      DAT_1008a22d8 = _IOServiceGetMatchingService(0,uVar4);
      if (DAT_1008a22d8 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006af08a(uVar4);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008a22d8 != 0) goto LAB_1001ccaea;
      }
      else {
LAB_1001ccaea:
        iVar2 = _IOServiceAddInterestNotification
                          (DAT_1008a22c0,DAT_1008a22d8,"IOGeneralInterest",FUN_1001ccf60,0,
                           &DAT_1008a22dc);
        if ((iVar2 != -0x80) && (iVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006af100(iVar2,uVar4);
          }
        }
      }
      DAT_1008a22e0 = _IOPSNotificationCreateRunLoopSource(FUN_1001cd0e3,0);
      if (DAT_1008a22e0 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006af16c(uVar4);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008a22e0 != 0) goto LAB_1001ccb85;
      }
      else {
LAB_1001ccb85:
        _CFRunLoopAddSource(uVar3,DAT_1008a22e0,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118)
        ;
      }
      uVar4 = FUN_1001cc35a();
      cVar1 = _os_log_type_enabled(uVar4,1);
      uVar3 = 0;
      if (cVar1 != '\0') {
        local_58 = 0x4000600;
        local_54 = DAT_1008a22cc;
        local_50 = 0x400;
        local_4e = DAT_1008a22c8;
        local_4a = 0x400;
        local_48 = DAT_1008a22d8;
        local_44 = 0x400;
        local_42 = DAT_1008a22dc;
        local_3e = 0x800;
        local_3c = DAT_1008a22c0;
        local_34 = 0x800;
        local_32 = DAT_1008a22e0;
        __os_log_impl(0x100000000,uVar4,1,"pm)  sys: %u  %u  disp: %u  %u  not: %p  ps: %p",
                      &local_58,0x2e);
      }
      goto LAB_1001ccc4b;
    }
  }
  uVar3 = 0xffffffe4;
LAB_1001ccc4b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

