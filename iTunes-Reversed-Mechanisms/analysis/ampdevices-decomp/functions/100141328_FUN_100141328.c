// name: FUN_100141328
// address: 100141328

ulong FUN_100141328(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_28 [16];
  
  cVar2 = (**(code **)*param_1)();
  if (cVar2 == '\0') {
    std::mutex::lock();
    cVar2 = FUN_1001b8428(param_1 + 0x32);
    if (cVar2 == '\0') {
      lVar1 = param_1[6];
      FUN_10015095e(local_28);
      lVar3 = FUN_100150dd2(local_28);
      uVar4 = CONCAT71((int7)((ulong)lVar1 >> 8),lVar1 == lVar3);
      FUN_100150de8(local_28);
    }
    else {
      uVar4 = 0;
    }
    std::mutex::unlock();
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}

