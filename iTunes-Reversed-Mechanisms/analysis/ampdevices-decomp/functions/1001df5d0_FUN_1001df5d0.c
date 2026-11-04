// name: FUN_1001df5d0
// address: 1001df5d0

undefined4 FUN_1001df5d0(long param_1,long param_2,short param_3,short param_4,uint param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba053(uVar4);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = FUN_1001ebd73();
      uVar4 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
      uVar3 = _CFStringCreateWithBytesNoCopy(DAT_1008c4d98,param_1,(long)param_3,uVar2,0,uVar4);
      uVar4 = _CFStringCreateWithBytesNoCopy(DAT_1008c4d98,param_2,(long)param_4,uVar2,0,uVar4);
      uVar2 = FUN_100173bb7(uVar3,uVar4,(param_5 & 8) << 4 | param_5 & 1);
      FUN_10017060f(uVar3);
      FUN_10017060f(uVar4);
      return uVar2;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006b9fdd(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

