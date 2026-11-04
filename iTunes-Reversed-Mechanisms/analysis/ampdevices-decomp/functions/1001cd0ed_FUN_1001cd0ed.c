// name: FUN_1001cd0ed
// address: 1001cd0ed

undefined8 FUN_1001cd0ed(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if (DAT_1008a22d0 != 0) {
    uVar1 = _CFRunLoopGetCurrent();
    _CFRunLoopRemoveSource(uVar1,DAT_1008a22d0,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
    DAT_1008a22d0 = 0;
  }
  lVar2 = 0;
  do {
    if (*(int *)((long)&DAT_1008a22f0 + lVar2) != 0) {
      _IOPMAssertionRelease();
      *(undefined4 *)((long)&DAT_1008a22f0 + lVar2) = 0;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x18);
  lVar2 = 0;
  do {
    if (*(int *)((long)&DAT_1008a2310 + lVar2) != 0) {
      _IOPMAssertionRelease();
      *(undefined4 *)((long)&DAT_1008a2310 + lVar2) = 0;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x18);
  if (DAT_1008a22dc != 0) {
    _IOObjectRelease();
    DAT_1008a22dc = 0;
  }
  if (DAT_1008a22d8 != 0) {
    _IOServiceClose();
    DAT_1008a22d8 = 0;
  }
  if (DAT_1008a22c8 != 0) {
    _IODeregisterForSystemPower(&DAT_1008a22c8);
    DAT_1008a22c8 = 0;
  }
  if (DAT_1008a22cc != 0) {
    _IOServiceClose();
    DAT_1008a22cc = 0;
  }
  if (DAT_1008a22c0 != 0) {
    _IONotificationPortDestroy();
    DAT_1008a22c0 = 0;
  }
  if (DAT_1008a22e0 != 0) {
    uVar1 = _CFRunLoopGetCurrent();
    _CFRunLoopRemoveSource(uVar1,DAT_1008a22e0,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
    FUN_10017060f(DAT_1008a22e0);
    DAT_1008a22e0 = 0;
  }
  DAT_1008a22cc = 0;
  return 0;
}

