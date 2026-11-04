// name: FUN_1006352f4
// address: 1006352f4

ulong FUN_1006352f4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  uint local_1c;
  
  uVar2 = FUN_1006351db(param_1,"IOUSBDevice");
  local_1c = (uint)uVar2;
  if (local_1c == 0) {
    iVar1 = FUN_1006351db(param_1 & 0xffffffff,"IOUSBHostDevice");
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1006322f0(iVar1,&local_1c);
      _IOObjectRelease(iVar1);
      uVar2 = (ulong)local_1c;
    }
  }
  return uVar2;
}

