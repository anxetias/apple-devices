// name: FUN_1005e7022
// address: 1005e7022

ulong FUN_1005e7022(int param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulong uVar4;
  undefined2 local_28 [8];
  
  uVar5 = (undefined7)((ulong)unaff_RBX >> 8);
  if (param_1 == 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    uVar4 = CONCAT71(uVar5,1);
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_impl(0x100000000,uVar1,1,"unknown family ID; using MobileRestore",local_28,2);
    }
  }
  else {
    lVar3 = 0x14;
    do {
      if (*(int *)("ZN10ArtistInfo22DeletePlaceholderTrackEvE3$_0" + lVar3 + 0x28) == param_1) {
        uVar4 = CONCAT71(uVar5,*(int *)((long)&DAT_10075c120 + lVar3) == 1);
        goto LAB_1005e70ab;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != 0x1934);
    uVar4 = CONCAT71(uVar5,1);
  }
LAB_1005e70ab:
  return uVar4 & 0xffffffff;
}

