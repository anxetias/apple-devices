// name: FUN_100167b39
// address: 100167b39

undefined1 FUN_100167b39(undefined8 param_1,undefined8 param_2,uint *param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint local_1c;
  
  if (param_3 == (uint *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067506a(uVar3);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = FUN_100166c1b();
    iVar2 = FUN_100167167(uVar3,&local_1c,4,param_4);
    if (iVar2 == 4) {
      *param_3 = local_1c >> 0x18 | (local_1c & 0xff0000) >> 8 | (local_1c & 0xff00) << 8 |
                 local_1c << 0x18;
      uVar4 = 1;
    }
    else {
      *param_3 = 0;
      uVar4 = 0;
    }
  }
  return uVar4;
}

